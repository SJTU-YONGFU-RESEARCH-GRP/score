#!/usr/bin/env bash
#
# Snapshot pulp-platform/MAGIA RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/magia/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# Default is `bender checkout` (uses upstream Bender.lock). `bender update` can fail when
# upstream manifests disagree; opt in with --bender-update.
#
# Usage (from repository root):
#   ./scripts/generate_magia.sh
#   ./scripts/generate_magia.sh --skip-checkout
#   ./scripts/generate_magia.sh --bender-update
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
MAGIA_DIR="$PROJECT_ROOT/tools/magia"

SKIP_CHECKOUT=false
BENDER_UPDATE=false

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_magia

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/magia:
  - bender checkout   (default: honor Bender.lock)
  - bender update     (only with --bender-update; may fail if manifests conflict)

Copy into datasets/magia/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Options:
  -h, --help              Show this help
  --skip-checkout         Do not run bender (reuse existing .bender)
  --bender-update         Run bender update instead of checkout (experimental)

Requires: git, bender on PATH, rsync. Submodule tools/magia initialized.
See https://github.com/pulp-platform/MAGIA
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
if [[ -f "$PROJECT_ROOT/scripts/magia_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/magia_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$MAGIA_DIR" ]]; then
    err "Missing $MAGIA_DIR — run: git submodule update --init --recursive tools/magia"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_magia.sh"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$MAGIA_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$MAGIA_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

MAGIA_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/magia/$MAGIA_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
VERIFICATION_DIR="$DATASET_DIR/verification"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"
VERILATOR_FALLBACK_LOG="$VERIFICATION_DIR/verilator_fallback.log"

mkdir -p "$LOG_DIR"
mkdir -p "$VERIFICATION_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "MAGIA_DIR: $MAGIA_DIR"
info "Commit: $MAGIA_COMMIT_ID"
info "Dataset: $DATASET_DIR"

pushd "$MAGIA_DIR" >/dev/null

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
    "$MAGIA_DIR/" "$BUNDLE_DIR/"

FLIST_PATH="$VERIFICATION_DIR/magia_dv.flist"
LINT_LOG="$VERIFICATION_DIR/verilator_lint.log"
ELAB_LOG="$VERIFICATION_DIR/verilator_elab.log"
SIM_LOG="$VERIFICATION_DIR/verilator_sim.log"
SIM_BIN="$VERIFICATION_DIR/Vmagia_tb"

deps_status="PASS"
flist_status="FAIL"
lint_status="FAIL"
elab_status="FAIL"
sim_status="FAIL"

info "Generating Verilator filelist (target: magia_dv)"
if bender -d "$BUNDLE_DIR" script flist-plus -t magia_dv >"$FLIST_PATH" 2>"$VERIFICATION_DIR/bender_flist.log"; then
    flist_status="PASS"
    ok "Generated filelist: $FLIST_PATH"
else
    warn "bender flist-plus failed for magia_dv target"
fi

if [[ "$flist_status" == "PASS" ]] && command_exists verilator; then
    info "Running Verilator lint (top-module: magia_tb)"
    if verilator --lint-only -Wall --top-module magia_tb -f "$FLIST_PATH" >"$LINT_LOG" 2>&1; then
        lint_status="PASS"
    else
        lint_status="FAIL"
    fi

    info "Running Verilator elaboration build (binary generation)"
    if verilator --binary -Wall --top-module magia_tb -f "$FLIST_PATH" -Mdir "$VERIFICATION_DIR/obj_dir" >"$ELAB_LOG" 2>&1; then
        elab_status="PASS"
        if [[ -x "$VERIFICATION_DIR/obj_dir/Vmagia_tb" ]]; then
            cp "$VERIFICATION_DIR/obj_dir/Vmagia_tb" "$SIM_BIN"
            if timeout 60s "$SIM_BIN" >"$SIM_LOG" 2>&1; then
                sim_status="PASS"
            else
                sim_status="FAIL"
            fi
        else
            echo "Missing binary: $VERIFICATION_DIR/obj_dir/Vmagia_tb" >"$SIM_LOG"
            sim_status="FAIL"
        fi
    else
        elab_status="FAIL"
        echo "Elaboration failed; simulation not attempted." >"$SIM_LOG"
        sim_status="FAIL"
    fi
else
    if ! command_exists verilator; then
        echo "verilator not found on PATH" >"$VERILATOR_FALLBACK_LOG"
    else
        echo "flist generation failed; verilator steps skipped" >"$VERILATOR_FALLBACK_LOG"
    fi
fi

{
    echo "MAGIA verification summary"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Dataset: $DATASET_DIR"
    echo ""
    echo "Checks:"
    echo "  Deps vs Bender.lock: $deps_status"
    echo "  bender flist-plus (Verilator view): $flist_status"
    echo "  Verilator lint: $lint_status"
    echo "  Verilator elaboration: $elab_status"
    echo "  Verilator simulation: $sim_status"
    echo ""
    echo "Artifacts:"
    echo "  flist: $FLIST_PATH"
    echo "  lint log: $LINT_LOG"
    echo "  elaboration log: $ELAB_LOG"
    echo "  simulation log: $SIM_LOG"
} >"$VERIFICATION_DIR/verification_summary.txt"

SUMMARY="$DATASET_DIR/magia_summary.txt"
{
    echo "magia SCORE snapshot (pulp-platform/MAGIA)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $MAGIA_DIR"
    echo "Git commit (short): $MAGIA_COMMIT_ID"
    echo "Git commit (full): $(git -C "$MAGIA_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender (PATH): $(bender --version 2>/dev/null || echo unknown)"
    echo ""
    echo "Verification:"
    echo "  Deps vs Bender.lock: $deps_status"
    echo "  bender flist-plus (Verilator view): $flist_status"
    echo "  Verilator lint: $lint_status"
    echo "  Verilator elaboration: $elab_status"
    echo "  Verilator simulation: $sim_status"
    echo "  Logs: $VERIFICATION_DIR/"
    echo ""
    echo "See https://github.com/pulp-platform/MAGIA and tools/magia/README.md"
    echo "Bundle path: $BUNDLE_DIR"
    echo "Generation log: $SESSION_LOG"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_magia.sh completed."
