#!/usr/bin/env bash
# Scan working tree for paths that need `git add`, then for each path:
#   git add -- <path>
#   git commit -m "<basename>"
# and finally push once.
#
# Usage:
#   ./scripts/git_add_commit_push.sh [--dry-run] [--no-push]
#       [--remote ORIGIN] [--branch BRANCH] [--max-files N] [--force]
#       [-- pathspec…]
#
# Examples:
#   ./scripts/git_add_commit_push.sh --dry-run -- scripts/
#   ./scripts/git_add_commit_push.sh -- scripts/install_opentitan.sh
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
cd "$REPO_ROOT"

DRY_RUN=0
DO_PUSH=1
REMOTE=""
BRANCH=""
MAX_FILES=500
FORCE=0
declare -a PATHSPECS=()

usage() {
    cat <<'EOF'
Usage: git_add_commit_push.sh [options] -- pathspec…

  --dry-run           Print planned add/commit/push; do not change git state
  --no-push           Commit only (skip push)
  --remote NAME       Remote for push (default: upstream of current branch, else origin)
  --branch NAME       Branch to push (default: current branch)
  --max-files N       Abort if more than N paths would be committed (default: 500)
  --force             Allow exceeding --max-files
  -h, --help          Show this help

  -- pathspec…        Required. Limit the scan (e.g. scripts/ README.md)

For each path that still needs staging, runs:
  git add -- <path>
  git commit -m "<basename of path>"

Never batches with `git add -A` / `.` or a single multi-file commit.
EOF
}

die() {
    echo "error: $*" >&2
    exit 1
}

is_secret_path() {
    local p="$1"
    local base
    base="$(basename "$p")"
    case "$base" in
        .env|.env.*|*.pem|*.key|id_rsa|id_ed25519|credentials.json|secrets.json)
            return 0
            ;;
    esac
    case "$p" in
        *.env|*/.env|*/.env.*|*credentials*|*secret*)
            return 0
            ;;
    esac
    return 1
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        --dry-run)
            DRY_RUN=1
            shift
            ;;
        --no-push)
            DO_PUSH=0
            shift
            ;;
        --remote)
            [[ $# -ge 2 ]] || die "$1 requires an argument"
            REMOTE="$2"
            shift 2
            ;;
        --branch)
            [[ $# -ge 2 ]] || die "$1 requires an argument"
            BRANCH="$2"
            shift 2
            ;;
        --max-files)
            [[ $# -ge 2 ]] || die "$1 requires an argument"
            MAX_FILES="$2"
            [[ "$MAX_FILES" =~ ^[0-9]+$ ]] || die "--max-files must be a non-negative integer"
            shift 2
            ;;
        --force)
            FORCE=1
            shift
            ;;
        -h|--help)
            usage
            exit 0
            ;;
        --)
            shift
            PATHSPECS+=("$@")
            break
            ;;
        -*)
            die "unknown option: $1 (use --help)"
            ;;
        *)
            PATHSPECS+=("$1")
            shift
            ;;
    esac
done

git rev-parse --is-inside-work-tree >/dev/null 2>&1 \
    || die "not inside a git work tree: $REPO_ROOT"

# Full-tree status is unusable here (hundreds of thousands of dataset paths).
[[ ${#PATHSPECS[@]} -gt 0 ]] \
    || die "pathspecs required (full-tree scan is too large). Example:
  $0 -- scripts/
  $0 --dry-run -- scripts/install_opentitan.sh scripts/generate_opentitan.sh"

echo "Scanning pathspecs: ${PATHSPECS[*]}"
mapfile -t STATUS_LINES < <(
    git status --porcelain=v1 -u --untracked-files=all -- "${PATHSPECS[@]}"
)

declare -a TO_COMMIT=()
declare -A SEEN=()

for line in "${STATUS_LINES[@]}"; do
    [[ -n "$line" ]] || continue
    xy="${line:0:2}"
    rest="${line:3}"
    y="${xy:1:1}"

    path=""
    case "$xy" in
        \?\?)
            path="$rest"
            ;;
        R\ |RM|RD|R\?|C\ |CM|CD|C\?)
            if [[ "$rest" == *" -> "* ]]; then
                path="${rest##* -> }"
            else
                path="$rest"
            fi
            ;;
        *)
            path="$rest"
            ;;
    esac

    if [[ "$path" == \"*\" ]]; then
        # Decode porcelain-quoted path (octal escapes / special chars).
        # shellcheck disable=SC2086
        eval "path=$path"
    fi

    [[ -n "$path" ]] || continue

    needs=0
    if [[ "$xy" == "??" ]]; then
        needs=1
    elif [[ "$y" != " " ]]; then
        needs=1
    fi

    if [[ "$needs" -eq 1 && -z "${SEEN[$path]+x}" ]]; then
        SEEN[$path]=1
        TO_COMMIT+=("$path")
    fi
done

if [[ ${#TO_COMMIT[@]} -eq 0 ]]; then
    echo "Nothing to add or commit."
    exit 0
fi

echo "Paths to add+commit individually (${#TO_COMMIT[@]}):"
for p in "${TO_COMMIT[@]}"; do
    if is_secret_path "$p"; then
        die "refusing to add secret-looking path: $p"
    fi
    echo "  $p  ->  commit -m $(printf '%q' "$(basename "$p")")"
done

if [[ ${#TO_COMMIT[@]} -gt "$MAX_FILES" && "$FORCE" -eq 0 ]]; then
    die "${#TO_COMMIT[@]} paths exceed --max-files=${MAX_FILES}; narrow with pathspecs or pass --force"
fi

if [[ -z "$BRANCH" ]]; then
    BRANCH="$(git branch --show-current)"
    [[ -n "$BRANCH" ]] || die "detached HEAD; pass --branch"
fi

if [[ -z "$REMOTE" ]]; then
    REMOTE="$(git config --get "branch.${BRANCH}.remote" || true)"
    if [[ -z "$REMOTE" ]]; then
        REMOTE="origin"
    fi
fi

if [[ "$DRY_RUN" -eq 1 ]]; then
    i=0
    for p in "${TO_COMMIT[@]}"; do
        i=$((i + 1))
        msg="$(basename "$p")"
        echo "+ [$i/${#TO_COMMIT[@]}] git add -- $p"
        echo "+ [$i/${#TO_COMMIT[@]}] git commit -m $(printf '%q' "$msg")"
    done
    if [[ "$DO_PUSH" -eq 1 ]]; then
        echo "+ git push -u $REMOTE $BRANCH"
    else
        echo "+ (push skipped: --no-push)"
    fi
    exit 0
fi

i=0
for p in "${TO_COMMIT[@]}"; do
    i=$((i + 1))
    msg="$(basename "$p")"
    echo "[$i/${#TO_COMMIT[@]}] git add -- $p"
    git add -- "$p"
    if git diff --cached --quiet; then
        die "nothing staged after: git add -- $p"
    fi
    echo "[$i/${#TO_COMMIT[@]}] git commit -m $(printf '%q' "$msg")"
    git commit -m "$msg"
done

if [[ "$DO_PUSH" -eq 0 ]]; then
    echo "Commits done (--no-push)."
    exit 0
fi

echo "git push -u $REMOTE $BRANCH"
git push -u "$REMOTE" "$BRANCH"
echo "Done."
