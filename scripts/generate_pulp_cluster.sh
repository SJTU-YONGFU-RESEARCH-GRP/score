#!/usr/bin/env bash
#
# Snapshot pulp-platform/pulp_cluster RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/pulp_cluster/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# Default is `bender checkout` (uses upstream Bender.lock). `bender update` can fail when
# upstream manifests disagree; opt in with --bender-update.
#
# Usage (from repository root):
#   ./scripts/generate_pulp_cluster.sh
#   ./scripts/generate_pulp_cluster.sh --skip-checkout
#   ./scripts/generate_pulp_cluster.sh --bender-update
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
PULP_CLUSTER_DIR="$PROJECT_ROOT/tools/pulp-cluster"

SKIP_CHECKOUT=false
BENDER_UPDATE=false

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[generate_pulp_cluster]${NC} $*"; }
ok() { echo -e "${GREEN}[generate_pulp_cluster]${NC} $*"; }
warn() { echo -e "${YELLOW}[generate_pulp_cluster]${NC} $*"; }
err() { echo -e "${RED}[generate_pulp_cluster]${NC} $*" >&2; }

command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/pulp-cluster:
  - bender checkout   (default: honor Bender.lock)
  - bender update     (only with --bender-update; may fail if manifests conflict)

Copy into datasets/pulp_cluster/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Options:
  -h, --help              Show this help
  --skip-checkout         Do not run bender (reuse existing .bender)
  --bender-update         Run bender update instead of checkout (experimental)

Requires: git, bender on PATH, rsync. Submodule tools/pulp-cluster initialized.
See https://github.com/pulp-platform/pulp_cluster
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            show_help
            exit 0
            ;;
        --skip-checkout)
            SKIP_CHECKOUT=true
            shift
            ;;
        --bender-update)
            BENDER_UPDATE=true
            shift
            ;;
        *)
            err "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/pulp_cluster_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/pulp_cluster_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$PULP_CLUSTER_DIR" ]]; then
    err "Missing $PULP_CLUSTER_DIR — run: git submodule update --init --recursive tools/pulp-cluster"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_pulp_cluster.sh"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$PULP_CLUSTER_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$PULP_CLUSTER_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

PULP_CLUSTER_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/pulp_cluster/$PULP_CLUSTER_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "PULP_CLUSTER_DIR: $PULP_CLUSTER_DIR"
info "Commit: $PULP_CLUSTER_COMMIT_ID"
info "Dataset: $DATASET_DIR"

pushd "$PULP_CLUSTER_DIR" >/dev/null

if [[ "$SKIP_CHECKOUT" != true ]]; then
    if [[ "$BENDER_UPDATE" == true ]]; then
        warn "Running bender update (may fail if dependency graphs conflict)"
        bender update
    else
        info "Running bender checkout (Bender.lock)"
        bender checkout
    fi
else
    warn "Skipped bender checkout/update"
    if [[ ! -d .bender ]]; then
        err ".bender missing; run without --skip-checkout first"
        exit 1
    fi
fi

popd >/dev/null

info "Copying sources to $BUNDLE_DIR"
mkdir -p "$BUNDLE_DIR"

rsync -a \
    --exclude '.git/' \
    "$PULP_CLUSTER_DIR/" "$BUNDLE_DIR/"

SUMMARY="$DATASET_DIR/pulp_cluster_summary.txt"
{
    echo "pulp_cluster SCORE snapshot"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $PULP_CLUSTER_DIR"
    echo "Git commit (short): $PULP_CLUSTER_COMMIT_ID"
    echo "Git commit (full): $(git -C "$PULP_CLUSTER_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender: $(bender --version 2>/dev/null || echo unknown)"
    echo ""
    echo "See https://github.com/pulp-platform/pulp_cluster and tools/pulp-cluster/README.md"
    echo "Bundle path: $BUNDLE_DIR"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_pulp_cluster.sh completed."
