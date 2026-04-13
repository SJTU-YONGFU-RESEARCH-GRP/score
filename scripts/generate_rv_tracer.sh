#!/usr/bin/env bash
#
# Snapshot pulp-platform/rv_tracer RTL after Bender dependency checkout.
# Output: datasets/rv_tracer/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# rv_tracer is hand-written SystemVerilog; there is no Chisel elaboration step. This script
# mirrors the Rocket flow role: resolve IPs and materialize a dataset tree for SCORE.
#
# Usage (from repository root):
#   ./scripts/generate_rv_tracer.sh
#   ./scripts/generate_rv_tracer.sh --skip-bender-update
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
RV_TRACER_DIR="$PROJECT_ROOT/tools/rv-tracer"

SKIP_BENDER_UPDATE=false

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[generate_rv_tracer]${NC} $*"; }
ok() { echo -e "${GREEN}[generate_rv_tracer]${NC} $*"; }
warn() { echo -e "${YELLOW}[generate_rv_tracer]${NC} $*"; }
err() { echo -e "${RED}[generate_rv_tracer]${NC} $*" >&2; }

command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/rv-tracer:
  - bender update   (unless --skip-bender-update)

Copy into datasets/rv_tracer/<git-short-sha>/source_snapshot/:
  - Bender.yml, include/, rtl/, tb/, decoder/, generate_do.py, img/, LICENSE, README.md, Makefile
  - .bender/        (resolved IP checkouts; required for Questa flow / generate_do.py globs)

Options:
  -h, --help              Show this help
  --skip-bender-update    Do not run bender update (reuse existing .bender)

Requires: git, bender on PATH, python3 (for upstream generate_do.py if you use make run).
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            show_help
            exit 0
            ;;
        --skip-bender-update)
            SKIP_BENDER_UPDATE=true
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
if [[ -f "$PROJECT_ROOT/scripts/rv_tracer_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/rv_tracer_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$RV_TRACER_DIR" ]]; then
    err "Missing $RV_TRACER_DIR — run: git submodule update --init --recursive tools/rv-tracer"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_rv_tracer.sh"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$RV_TRACER_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$RV_TRACER_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

RV_TRACER_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/rv_tracer/$RV_TRACER_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "RV_TRACER_DIR: $RV_TRACER_DIR"
info "Commit: $RV_TRACER_COMMIT_ID"
info "Dataset: $DATASET_DIR"

pushd "$RV_TRACER_DIR" >/dev/null

if [[ "$SKIP_BENDER_UPDATE" != true ]]; then
    info "Running bender update"
    bender update
else
    warn "Skipped bender update"
    if [[ ! -d .bender ]]; then
        err ".bender missing; run without --skip-bender-update first"
        exit 1
    fi
fi

popd >/dev/null

info "Copying sources to $BUNDLE_DIR"
mkdir -p "$BUNDLE_DIR"

rsync -a \
    --exclude '.git/' \
    "$RV_TRACER_DIR/" "$BUNDLE_DIR/"

SUMMARY="$DATASET_DIR/rv_tracer_summary.txt"
{
    echo "rv_tracer SCORE snapshot"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $RV_TRACER_DIR"
    echo "Git commit (short): $RV_TRACER_COMMIT_ID"
    echo "Git commit (full): $(git -C "$RV_TRACER_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender: $(bender --version 2>/dev/null || echo unknown)"
    echo ""
    echo "Upstream simulation: cd tools/rv-tracer && make run (requires Siemens Questa; see upstream README)."
    echo "Bundle path: $BUNDLE_DIR"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_rv_tracer.sh completed."
