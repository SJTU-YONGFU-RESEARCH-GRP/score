#!/usr/bin/env bash
#
# Snapshot pulp-platform/snitch_cluster RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/snitch_cluster/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# Default is `bender checkout` (uses upstream Bender.lock). `bender update` can fail when
# upstream manifests disagree; opt in with --bender-update.
#
# Usage (from repository root):
#   ./scripts/generate_snitch_cluster.sh
#   ./scripts/generate_snitch_cluster.sh --skip-checkout
#   ./scripts/generate_snitch_cluster.sh --bender-update
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SNITCH_CLUSTER_DIR="$PROJECT_ROOT/tools/snitch-cluster"

SKIP_CHECKOUT=false
BENDER_UPDATE=false

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_snitch_cluster

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/snitch-cluster:
  - bender checkout   (default: honor Bender.lock)
  - bender update     (only with --bender-update; may fail if manifests conflict)

Copy into datasets/snitch_cluster/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Options:
  -h, --help              Show this help
  --skip-checkout         Do not run bender (reuse existing .bender)
  --bender-update         Run bender update instead of checkout (experimental)

Requires: git, bender on PATH, rsync. Submodule tools/snitch-cluster initialized.
See https://github.com/pulp-platform/snitch_cluster
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
if [[ -f "$PROJECT_ROOT/scripts/snitch_cluster_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/snitch_cluster_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$SNITCH_CLUSTER_DIR" ]]; then
    err "Missing $SNITCH_CLUSTER_DIR — run: git submodule update --init --recursive tools/snitch-cluster"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_snitch_cluster.sh"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$SNITCH_CLUSTER_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$SNITCH_CLUSTER_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

SNITCH_CLUSTER_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/snitch_cluster/$SNITCH_CLUSTER_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "SNITCH_CLUSTER_DIR: $SNITCH_CLUSTER_DIR"
info "Commit: $SNITCH_CLUSTER_COMMIT_ID"
info "Dataset: $DATASET_DIR"

pushd "$SNITCH_CLUSTER_DIR" >/dev/null

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
    "$SNITCH_CLUSTER_DIR/" "$BUNDLE_DIR/"

SUMMARY="$DATASET_DIR/snitch_cluster_summary.txt"
{
    echo "snitch_cluster SCORE snapshot (pulp-platform/snitch_cluster)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $SNITCH_CLUSTER_DIR"
    echo "Git commit (short): $SNITCH_CLUSTER_COMMIT_ID"
    echo "Git commit (full): $(git -C "$SNITCH_CLUSTER_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender (PATH): $(bender --version 2>/dev/null || echo unknown)"
    echo ""
    echo "Verification:"
    echo "  Deps vs Bender.lock: $( [[ "${SKIP_CHECKOUT:-false}" == true || "${SKIP_BENDER_UPDATE:-false}" == true ]] && echo SKIPPED_BY_FLAG || echo PASS )"
    echo "  bender flist-plus (Verilator view): N/A"
    echo "  Verilator lint: N/A"
    echo "  Verilator elaboration: N/A"
    echo "  Verilator simulation: N/A"
    echo "  Logs: ${VERIFICATION_DIR:-$LOG_DIR}/"
    echo ""
    echo "See https://github.com/pulp-platform/snitch_cluster and tools/snitch-cluster/README.md"
    echo "Bundle path: $BUNDLE_DIR"
    echo "Generation log: $SESSION_LOG"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_snitch_cluster.sh completed."
