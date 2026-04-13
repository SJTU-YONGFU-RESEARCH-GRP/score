#!/usr/bin/env bash
#
# Find and delete regular files larger than a threshold (default 100 MiB).
# Intended to trim working trees (e.g. Bender/Git pack files under source_snapshot) before commit.
#
# Usage (from repository root):
#   ./scripts/delete_large_files.sh --dry-run
#   ./scripts/delete_large_files.sh --yes
#   ./scripts/delete_large_files.sh --size 50 --dry-run datasets/
#   ./scripts/delete_large_files.sh -y --size 100 datasets/
#
# Options:
#   --dry-run   List matching files with human-readable sizes; do not delete.
#   --yes, -y   Delete without confirmation (use with care).
#   --size N    Threshold in mebibytes (MiB); default 100 (GitHub blocks blobs > 100 MiB).
#   --help, -h  Show this help.
#
# Positional:
#   DIRECTORY   Root to search (default: ./datasets). Must be within ./datasets.
#
# Requires GNU find (supports -size …M).
#
# IMPORTANT: Deleting files only updates your working tree. Blobs already committed remain in
# Git history and will still be rejected on push. After deleting, run something like:
#   git rm -r --cached <paths>
#   git commit -m "Remove oversized artifacts"
# If the large files were already pushed or exist in older commits, rewrite history with
# git-filter-repo (https://github.com/newren/git-filter-repo) or BFG Repo-Cleaner.
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
DATASETS_DIR="$PROJECT_ROOT/datasets"

DRY_RUN=false
ASSUME_YES=false
SIZE_MB=100
SEARCH_ROOT="$DATASETS_DIR"

usage() {
  sed -n '2,/^# Requires/p' "$0" | sed 's/^# \{0,1\}//'
  exit "${1:-0}"
}

while [[ $# -gt 0 ]]; do
  case "$1" in
    --dry-run)
      DRY_RUN=true
      shift
      ;;
    --yes | -y)
      ASSUME_YES=true
      shift
      ;;
    --size)
      if [[ $# -lt 2 ]]; then
        echo "error: --size requires a number" >&2
        exit 1
      fi
      SIZE_MB="$2"
      shift 2
      ;;
    --help | -h)
      usage 0
      ;;
    --)
      shift
      break
      ;;
    -*)
      echo "error: unknown option: $1" >&2
      usage 1
      ;;
    *)
      SEARCH_ROOT="$1"
      shift
      ;;
  esac
done

if [[ $# -gt 0 ]]; then
  echo "error: unexpected arguments: $*" >&2
  exit 1
fi

if ! [[ "$SIZE_MB" =~ ^[0-9]+$ ]] || [[ "$SIZE_MB" -lt 1 ]]; then
  echo "error: --size must be a positive integer (mebibytes)" >&2
  exit 1
fi

if [[ ! -d "$SEARCH_ROOT" ]]; then
  echo "error: not a directory: $SEARCH_ROOT" >&2
  exit 1
fi

if [[ ! -d "$DATASETS_DIR" ]]; then
  echo "error: datasets directory not found: $DATASETS_DIR" >&2
  exit 1
fi

DATASETS_DIR="$(cd "$DATASETS_DIR" && pwd -P)"
SEARCH_ROOT="$(cd "$SEARCH_ROOT" && pwd -P)"

case "$SEARCH_ROOT/" in
  "$DATASETS_DIR/"*) ;;
  *)
    echo "error: refusing to delete outside datasets/: $SEARCH_ROOT" >&2
    exit 1
    ;;
esac

# GNU find: +NM = strictly more than N mebibytes (GitHub rejects blobs over 100 MiB).
mapfile -d '' -t LARGE_FILES < <(
  find "$SEARCH_ROOT" -type f -size "+${SIZE_MB}M" -print0 | sort -z
)

if [[ ${#LARGE_FILES[@]} -eq 0 ]]; then
  echo "No regular files larger than ${SIZE_MB} MiB under: $SEARCH_ROOT"
  exit 0
fi

echo "Files larger than ${SIZE_MB} MiB under $SEARCH_ROOT:"
for f in "${LARGE_FILES[@]}"; do
  du -h -- "$f"
done

if [[ "$DRY_RUN" == true ]]; then
  echo ""
  echo "(dry-run: no files deleted)"
  exit 0
fi

if [[ "$ASSUME_YES" != true ]]; then
  echo ""
  read -r -p "Delete these files? [y/N] " reply
  case "$reply" in
    [yY][eE][sS] | [yY]) ;;
    *)
      echo "Aborted."
      exit 1
      ;;
  esac
fi

for f in "${LARGE_FILES[@]}"; do
  rm -f -- "$f"
done

echo "Deleted ${#LARGE_FILES[@]} file(s)."
