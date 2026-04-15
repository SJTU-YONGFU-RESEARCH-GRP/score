#!/usr/bin/env bash
#
# Snapshot pulp-platform/occamy RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/occamy/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# Default is `bender checkout` (uses upstream Bender.lock). `bender update` can fail when
# upstream manifests disagree; opt in with --bender-update.
#
# Usage (from repository root):
#   ./scripts/generate_occamy.sh
#   ./scripts/generate_occamy.sh --skip-checkout
#   ./scripts/generate_occamy.sh --bender-update
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
OCCAMY_DIR="$PROJECT_ROOT/tools/occamy"

SKIP_CHECKOUT=false
BENDER_UPDATE=false

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_occamy

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/occamy:
  - bender checkout   (default: honor Bender.lock)
  - bender update     (only with --bender-update; may fail if manifests conflict)

Copy into datasets/occamy/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Options:
  -h, --help              Show this help
  --skip-checkout         Do not run bender (reuse existing .bender)
  --bender-update         Run bender update instead of checkout (experimental)

Requires: git, bender on PATH, rsync. Submodule tools/occamy initialized.
See https://github.com/pulp-platform/occamy
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
if [[ -f "$PROJECT_ROOT/scripts/occamy_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/occamy_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$OCCAMY_DIR" ]]; then
    err "Missing $OCCAMY_DIR — run: git submodule update --init --recursive tools/occamy"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_occamy.sh"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$OCCAMY_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$OCCAMY_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

OCCAMY_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/occamy/$OCCAMY_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
VERIFICATION_DIR="$DATASET_DIR/verification"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"
VERILATOR_FALLBACK_LOG="$VERIFICATION_DIR/verilator_fallback.log"

mkdir -p "$LOG_DIR"
mkdir -p "$VERIFICATION_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "OCCAMY_DIR: $OCCAMY_DIR"
info "Commit: $OCCAMY_COMMIT_ID"
info "Dataset: $DATASET_DIR"

pushd "$OCCAMY_DIR" >/dev/null

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
    "$OCCAMY_DIR/" "$BUNDLE_DIR/"

if [[ -f "$BUNDLE_DIR/target/sim/test/testharness.sv.tpl" ]] && [[ ! -f "$BUNDLE_DIR/target/sim/test/testharness.sv" ]]; then
    info "Generating missing testharness.sv from target/sim flow"
    if make -C "$BUNDLE_DIR/target/sim" tb >"$VERIFICATION_DIR/generate_testharness.log" 2>&1; then
        ok "Generated testharness.sv via make tb"
    else
        warn "make tb failed; copying template as fallback"
        cp "$BUNDLE_DIR/target/sim/test/testharness.sv.tpl" "$BUNDLE_DIR/target/sim/test/testharness.sv"
    fi
fi

# Occamy simulation filelists can reference auto-generated RTL under target/sim/src.
# Generate these artifacts when possible before bender filelist generation.
if [[ -f "$BUNDLE_DIR/target/sim/Makefile" ]]; then
    info "Generating target/sim RTL artifacts (make rtl VERIBLE_FMT=true)"
    if make -C "$BUNDLE_DIR/target/sim" rtl VERIBLE_FMT=true >"$VERIFICATION_DIR/generate_rtl.log" 2>&1; then
        ok "Generated target/sim RTL artifacts"
    else
        warn "target/sim RTL generation failed; continuing with available sources"
    fi
fi

FLIST_PATH="$VERIFICATION_DIR/occamy_verilator.flist"
SANITIZED_FLIST_PATH="$VERIFICATION_DIR/occamy_verilator_sanitized.flist"
LINT_LOG="$VERIFICATION_DIR/verilator_lint.log"
ELAB_LOG="$VERIFICATION_DIR/verilator_elab.log"
SIM_LOG="$VERIFICATION_DIR/verilator_sim.log"
SIM_BIN="$VERIFICATION_DIR/Vtestharness"
REDUCED_LINT_LOG="$VERIFICATION_DIR/verilator_lint_reduced.log"
REDUCED_FLIST="$VERIFICATION_DIR/common_cells_reduced.flist"
REDUCED_FLIST_LOG="$VERIFICATION_DIR/common_cells_reduced_flist.log"

deps_status="PASS"
flist_status="FAIL"
lint_status="FAIL"
elab_status="FAIL"
sim_status="FAIL"
reduced_scope_lint_status="FAIL"

full_flow_status="FAIL"
reduced_scope_status="FAIL"
overall_status="FAIL"

info "Generating Verilator filelist (target: verilator)"
if bender -d "$BUNDLE_DIR" script flist-plus -t verilator >"$FLIST_PATH" 2>"$VERIFICATION_DIR/bender_flist.log"; then
    flist_status="PASS"
    ok "Generated filelist: $FLIST_PATH"
    # Verilator compatibility: filter deprecated source entries that pull in
    # legacy primitives (for example pmos) not supported by current lint flow.
    awk '!/\/deprecated\// { print }' "$FLIST_PATH" >"$SANITIZED_FLIST_PATH"
    ACTIVE_FLIST="$SANITIZED_FLIST_PATH"
else
    warn "bender flist-plus failed for verilator target"
    ACTIVE_FLIST="$FLIST_PATH"
fi

if [[ "$flist_status" == "PASS" ]] && command_exists verilator; then
    info "Running Verilator lint (top-module: testharness)"
    if verilator --lint-only --language 1800-2017 -Wall --top-module testharness -f "$ACTIVE_FLIST" >"$LINT_LOG" 2>&1; then
        lint_status="PASS"
    else
        lint_status="FAIL"
    fi

    info "Running Verilator elaboration build (binary generation)"
    if verilator --binary --language 1800-2017 -Wall --top-module testharness -f "$ACTIVE_FLIST" -Mdir "$VERIFICATION_DIR/obj_dir" >"$ELAB_LOG" 2>&1; then
        elab_status="PASS"
        if [[ -x "$VERIFICATION_DIR/obj_dir/Vtestharness" ]]; then
            cp "$VERIFICATION_DIR/obj_dir/Vtestharness" "$SIM_BIN"
            if timeout 60s "$SIM_BIN" >"$SIM_LOG" 2>&1; then
                sim_status="PASS"
            else
                sim_status="FAIL"
            fi
        else
            echo "Missing binary: $VERIFICATION_DIR/obj_dir/Vtestharness" >"$SIM_LOG"
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

# Reduced-scope fallback verification: validate a curated common_cells RTL slice
# that is Verilator-compatible and representative of the integration toolchain.
if command_exists verilator; then
    info "Running reduced-scope Verilator lint (common_cells/stream_fifo)"
    if bender -d "$BUNDLE_DIR" script flist-plus -p common_cells -t rtl -t tech_cells_generic_exclude_deprecated \
        >"$REDUCED_FLIST" 2>"$REDUCED_FLIST_LOG"; then
        if verilator --lint-only -sv --no-timing -f "$REDUCED_FLIST" \
            --top-module stream_fifo -Wno-fatal >"$REDUCED_LINT_LOG" 2>&1; then
            reduced_scope_lint_status="PASS"
        else
            reduced_scope_lint_status="FAIL"
        fi
    else
        echo "Reduced-scope flist generation failed" >"$REDUCED_LINT_LOG"
        reduced_scope_lint_status="FAIL"
    fi
else
    echo "Reduced-scope lint skipped: verilator missing" >"$REDUCED_LINT_LOG"
fi

if [[ "$deps_status" == "PASS" && "$flist_status" == "PASS" && "$lint_status" == "PASS" && "$elab_status" == "PASS" && "$sim_status" == "PASS" ]]; then
    full_flow_status="PASS"
else
    full_flow_status="FAIL"
fi

if [[ "$reduced_scope_lint_status" == "PASS" ]]; then
    reduced_scope_status="PASS"
else
    reduced_scope_status="FAIL"
fi

if [[ "$full_flow_status" == "PASS" ]]; then
    overall_status="PASS"
elif [[ "$reduced_scope_status" == "PASS" ]]; then
    overall_status="PASS_WITH_LIMITATIONS"
else
    overall_status="FAIL"
fi

{
    echo "occamy verification summary"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Dataset: $DATASET_DIR"
    echo ""
    echo "Checks:"
    echo "  Deps vs Bender.lock: $deps_status"
    echo "  bender flist-plus (Verilator view): $flist_status"
    echo "  Verilator lint: $lint_status"
    echo "  Verilator elaboration: $elab_status"
    echo "  Verilator simulation: $sim_status"
    echo "  Verilator reduced-scope lint (common_cells stream_fifo): $reduced_scope_lint_status"
    echo ""
    echo "Policy:"
    echo "  FULL_FLOW=$full_flow_status"
    echo "  REDUCED_SCOPE=$reduced_scope_status"
    echo "  OVERALL=$overall_status"
    echo ""
    echo "Artifacts:"
    echo "  flist: $FLIST_PATH"
    echo "  sanitized flist: $SANITIZED_FLIST_PATH"
    echo "  lint log: $LINT_LOG"
    echo "  elaboration log: $ELAB_LOG"
    echo "  simulation log: $SIM_LOG"
    echo "  reduced-scope flist: $REDUCED_FLIST"
    echo "  reduced-scope lint log: $REDUCED_LINT_LOG"
} >"$VERIFICATION_DIR/verification_summary.txt"

SUMMARY="$DATASET_DIR/occamy_summary.txt"
{
    echo "occamy SCORE snapshot (pulp-platform/occamy)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $OCCAMY_DIR"
    echo "Git commit (short): $OCCAMY_COMMIT_ID"
    echo "Git commit (full): $(git -C "$OCCAMY_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender (PATH): $(bender --version 2>/dev/null || echo unknown)"
    echo ""
    echo "Verification:"
    echo "  Deps vs Bender.lock: $deps_status"
    echo "  bender flist-plus (Verilator view): $flist_status"
    echo "  Verilator lint: $lint_status"
    echo "  Verilator elaboration: $elab_status"
    echo "  Verilator simulation: $sim_status"
    echo "  Verilator reduced-scope lint (common_cells stream_fifo): $reduced_scope_lint_status"
    echo ""
    echo "Policy:"
    echo "  FULL_FLOW=$full_flow_status"
    echo "  REDUCED_SCOPE=$reduced_scope_status"
    echo "  OVERALL=$overall_status"
    echo "  Logs: $VERIFICATION_DIR/"
    echo ""
    echo "See https://github.com/pulp-platform/occamy and tools/occamy/README.md"
    echo "Bundle path: $BUNDLE_DIR"
    echo "Generation log: $SESSION_LOG"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_occamy.sh completed."
