#!/usr/bin/env bash
#
# Snapshot pulp-platform/croc RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/croc/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# Verification (default, before rsync) → datasets/croc/<sha>/verification/:
#   1) Bender.lock → bender path (workspace closure)
#   2) bender script flist-plus -p common_cells (RTL slice in this workspace)
#   3) Verilator --lint-only / --binary on stream_fifo (same slice)
#   4) Verilator full simulation (default): scripts/assets/chimera/tb_stream_fifo.sv (shared harness)
# Full croc_soc flist-plus is not required for this smoke path; it validates Bender + Verilator.
#
# Default is `bender checkout`. Optional --bender-update.
#
# Usage (from repository root):
#   ./scripts/generate_croc.sh
#   ./scripts/generate_croc.sh --skip-checkout
#   ./scripts/generate_croc.sh --bender-update
#   ./scripts/generate_croc.sh --no-verify
#   ./scripts/generate_croc.sh --verify-only
#   ./scripts/generate_croc.sh --skip-verilator
#   ./scripts/generate_croc.sh --no-full-sim
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
CROC_DIR="$PROJECT_ROOT/tools/croc"

SKIP_CHECKOUT=false
BENDER_UPDATE=false
VERIFY_ENABLED=true
VERIFY_ONLY=false
WITH_VERILATOR_STEPS=true
WITH_FULL_SIM=true
DEFAULT_VERILATOR_JOBS=4
CROC_VERILATOR_JOBS="${CROC_VERILATOR_JOBS:-$DEFAULT_VERILATOR_JOBS}"
CROC_TB_SV="$SCRIPT_DIR/assets/chimera/tb_stream_fifo.sv"

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[generate_croc]${NC} $*"; }
ok() { echo -e "${GREEN}[generate_croc]${NC} $*"; }
warn() { echo -e "${YELLOW}[generate_croc]${NC} $*"; }
err() { echo -e "${RED}[generate_croc]${NC} $*" >&2; }

command_exists() { command -v "$1" >/dev/null 2>&1; }

croc_cpp_compiler_ok() {
    command_exists g++ || command_exists c++
}

filter_bender_w03() {
    awk '!(/\[[Ww]03\]/ && /Ignoring unknown field/) { print; fflush() }'
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/croc:
  - bender checkout   (default: honor Bender.lock)
  - bender update     (only with --bender-update; may fail if manifests conflict)

Copy into datasets/croc/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Verification (default, before rsync) → datasets/croc/<sha>/verification/:
  - bender path for each Bender.lock package
  - bender flist-plus -p common_cells (workspace slice)
  - Verilator lint + elaboration on stream_fifo; default full sim (shared tb_stream_fifo.sv)

Options:
  -h, --help              Show this help
  --skip-checkout         Do not run bender (reuse existing .bender)
  --bender-update         Run bender update instead of checkout (experimental)
  --no-verify             Skip all verification steps
  --verify-only           Only run verification (no rsync snapshot)
  --skip-verilator        Run bender checks only (skip Verilator and full sim)
  --no-full-sim           Skip clocked TB (keep lint + elaboration binary)

Environment:
  CROC_VERILATOR_JOBS    Parallel jobs for verilator (default: ${DEFAULT_VERILATOR_JOBS})
  CROC_FULL_SIM          If 0/false/no/off, same as --no-full-sim (after CLI flags)

Requires: git, bender on PATH, rsync (unless --verify-only); verilator + C++ for Verilator steps.
See https://github.com/pulp-platform/croc
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
        --no-verify)
            VERIFY_ENABLED=false
            shift
            ;;
        --verify-only)
            VERIFY_ONLY=true
            shift
            ;;
        --skip-verilator)
            WITH_VERILATOR_STEPS=false
            shift
            ;;
        --no-full-sim)
            WITH_FULL_SIM=false
            shift
            ;;
        *)
            err "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

case "${CROC_FULL_SIM:-}" in
    0|false|no|off)
        WITH_FULL_SIM=false
        ;;
esac

if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/croc_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/croc_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$CROC_DIR" ]]; then
    err "Missing $CROC_DIR — run: git submodule update --init --recursive tools/croc"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_croc.sh"
    exit 1
fi

if [[ "$VERIFY_ONLY" != true ]] && ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$CROC_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$CROC_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

verify_croc_bender_lock_paths() {
    local lock="$CROC_DIR/Bender.lock" line pkg out missing
    missing=0
    out="$VERIFICATION_DIR/bender_lock_path_check.txt"
    if [[ ! -f "$lock" ]]; then
        err "Bender.lock missing: $lock"
        return 1
    fi
    {
        echo "bender path <pkg> for each Bender.lock package (from $lock)"
        echo "---"
    } > "$out"
    while IFS= read -r line || [[ -n "$line" ]]; do
        [[ "$line" =~ ^[[:space:]]{2}([a-zA-Z0-9_]+):[[:space:]]*$ ]] || continue
        pkg="${BASH_REMATCH[1]}"
        if ( cd "$CROC_DIR" && bender path "$pkg" >/dev/null 2>&1 ); then
            echo "OK  $pkg" >> "$out"
        else
            echo "MISSING  $pkg" >> "$out"
            missing=1
        fi
    done < "$lock"
    if [[ "$missing" -ne 0 ]]; then
        err "One or more Bender.lock packages not resolvable (see $out)"
        return 1
    fi
    ok "Verification: all Bender.lock packages resolve with bender path"
    return 0
}

verify_croc_bender_common_cells_flist() {
    local stderr_log script_out st
    stderr_log="$VERIFICATION_DIR/bender_common_cells.stderr.log"
    script_out="$VERIFICATION_DIR/bender_script_common_cells.f"
    info "Verification: bender script flist-plus (package common_cells, RTL) …"
    set +e
    (
        cd "$CROC_DIR" || exit 1
        bender script flist-plus -p common_cells -t rtl -t tech_cells_generic_exclude_deprecated \
            > "$script_out" 2> >(filter_bender_w03 >> "$stderr_log")
    )
    st=$?
    set -e
    if [[ "$st" -ne 0 ]]; then
        err "bender script flist-plus -p common_cells failed (exit $st; stderr: $stderr_log)"
        return 1
    fi
    if [[ ! -s "$script_out" ]]; then
        err "bender flist output empty: $script_out"
        return 1
    fi
    ok "Verification: bender flist-plus OK ($(wc -l < "$script_out") lines → $script_out)"
    return 0
}

verify_croc_verilator_stream_fifo_lint() {
    local script_out cc_stderr log st
    script_out="$VERIFICATION_DIR/bender_common_cells_lint.f"
    cc_stderr="$VERIFICATION_DIR/bender_common_cells_lint.stderr.log"
    log="$VERIFICATION_DIR/verilator_lint_common_cells_stream_fifo.log"
    if ! command_exists verilator; then
        err "Verilator not on PATH (install via ./scripts/install_croc.sh or use --skip-verilator)"
        return 1
    fi
    info "Verification: Verilator --lint-only (common_cells, top stream_fifo) …"
    set +e
    (
        cd "$CROC_DIR" || exit 1
        bender script flist-plus -p common_cells -t rtl -t tech_cells_generic_exclude_deprecated \
            > "$script_out" 2> >(filter_bender_w03 >> "$cc_stderr")
    )
    st=$?
    set -e
    if [[ "$st" -ne 0 ]]; then
        err "bender script flist-plus -p common_cells failed (stderr: $cc_stderr)"
        return 1
    fi
    set +e
    verilator --lint-only -sv --no-timing -f "$script_out" --top-module stream_fifo -Wno-fatal \
        > "$log" 2>&1
    st=$?
    set -e
    if [[ "$st" -ne 0 ]]; then
        err "Verilator lint failed (exit $st); see $log"
        return 1
    fi
    ok "Verification: Verilator lint OK (see $log)"
    return 0
}

verify_croc_verilator_stream_fifo_binary() {
    local script_out objdir log st
    script_out="$VERIFICATION_DIR/bender_common_cells_lint.f"
    objdir="$VERIFICATION_DIR/verilator_obj_stream_fifo"
    log="$VERIFICATION_DIR/verilator_binary_stream_fifo.log"
    if ! command_exists verilator; then
        err "Verilator not on PATH"
        return 1
    fi
    if ! croc_cpp_compiler_ok; then
        err "No g++/c++ on PATH (Verilator --binary needs a C++ compiler; install gcc-c++)"
        return 1
    fi
    if [[ ! -f "$script_out" ]]; then
        err "Missing $script_out (Verilator lint step must run first)"
        return 1
    fi
    info "Verification: Verilator --binary (elaboration smoke, top stream_fifo) …"
    rm -rf "$objdir"
    mkdir -p "$objdir"
    set +e
    verilator --binary -sv --no-timing -Mdir "$objdir" -f "$script_out" --top-module stream_fifo \
        -Wno-fatal -j "$CROC_VERILATOR_JOBS" \
        > "$log" 2>&1
    st=$?
    set -e
    if [[ "$st" -ne 0 ]]; then
        err "Verilator --binary failed (exit $st); see $log"
        return 1
    fi
    ok "Verification: Verilator binary build OK (objdir $objdir; log $log)"
    return 0
}

verify_croc_verilator_full_sim() {
    local script_out objdir log exe st
    script_out="$VERIFICATION_DIR/bender_common_cells_lint.f"
    objdir="$VERIFICATION_DIR/verilator_obj_tb_stream_fifo"
    log="$VERIFICATION_DIR/verilator_sim_stream_fifo.log"
    exe="$objdir/Vtb_stream_fifo"
    if ! command_exists verilator; then
        err "Verilator not on PATH"
        return 1
    fi
    if ! croc_cpp_compiler_ok; then
        err "No g++/c++ on PATH (Verilator full sim needs a C++ compiler)"
        return 1
    fi
    if [[ ! -f "$CROC_TB_SV" ]]; then
        err "Missing harness $CROC_TB_SV"
        return 1
    fi
    if [[ ! -f "$script_out" ]]; then
        err "Missing $script_out (run lint step first)"
        return 1
    fi
    info "Verification: Verilator full simulation (tb_stream_fifo + common_cells flist) …"
    rm -rf "$objdir"
    mkdir -p "$objdir"
    set +e
    verilator --binary -sv --timing -Mdir "$objdir" -f "$script_out" "$CROC_TB_SV" \
        --top-module tb_stream_fifo -Wno-fatal -j "$CROC_VERILATOR_JOBS" \
        > "$log" 2>&1
    st=$?
    set -e
    if [[ "$st" -ne 0 ]]; then
        err "Verilator TB build failed (exit $st); see $log"
        return 1
    fi
    if [[ ! -x "$exe" ]]; then
        err "Expected simulator binary missing: $exe"
        return 1
    fi
    set +e
    "$exe" >> "$log" 2>&1
    st=$?
    set -e
    if [[ "$st" -ne 0 ]]; then
        err "Verilator simulation failed (exit $st); see $log"
        return 1
    fi
    if ! grep -q "PASS stream_fifo TB" "$log"; then
        err "Simulation log missing PASS line; see $log"
        return 1
    fi
    ok "Verification: Verilator full simulation OK (log $log)"
    return 0
}

write_croc_verification_summary() {
    local vf="$VERIFICATION_DIR/verification_summary.txt"
    {
        echo "croc RTL verification summary (SCORE)"
        echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
        echo ""
        echo "Bender.lock → bender path: ${VERIFY_LOCK_RESULT:-SKIPPED}"
        echo "bender flist-plus (common_cells slice): ${VERIFY_FLIST_RESULT:-SKIPPED}"
        echo "Verilator --lint-only (common_cells / stream_fifo): ${VERIFY_VLINT_RESULT:-SKIPPED}"
        echo "Verilator --binary (elaboration smoke): ${VERIFY_VBIN_RESULT:-SKIPPED}"
        echo "Verilator simulation (tb_stream_fifo): ${VERIFY_VSIM_RESULT:-SKIPPED}"
        echo ""
        echo "Notes:"
        echo "  SCORE uses a common_cells stream_fifo slice + shared tb (scripts/assets/chimera/)."
        echo "  Full croc_soc Verilator closure is not run by default in SCORE."
        echo "Logs: $VERIFICATION_DIR/"
    } > "$vf"
    ok "Wrote $vf"
}

run_croc_verification() {
    VERIFY_LOCK_RESULT=SKIPPED
    VERIFY_FLIST_RESULT=SKIPPED
    VERIFY_VLINT_RESULT=SKIPPED
    VERIFY_VBIN_RESULT=SKIPPED
    VERIFY_VSIM_RESULT=SKIPPED

    mkdir -p "$VERIFICATION_DIR"
    info "Running verification → $VERIFICATION_DIR"

    verify_croc_bender_lock_paths || return 1
    VERIFY_LOCK_RESULT=PASS

    verify_croc_bender_common_cells_flist || return 1
    VERIFY_FLIST_RESULT=PASS

    if [[ "$WITH_VERILATOR_STEPS" == true ]]; then
        verify_croc_verilator_stream_fifo_lint || return 1
        VERIFY_VLINT_RESULT=PASS

        verify_croc_verilator_stream_fifo_binary || return 1
        VERIFY_VBIN_RESULT=PASS

        if [[ "$WITH_FULL_SIM" == true ]]; then
            verify_croc_verilator_full_sim || return 1
            VERIFY_VSIM_RESULT=PASS
        else
            info "Verification: skipping full simulation (--no-full-sim or CROC_FULL_SIM=0)"
        fi
    else
        info "Verification: skipping Verilator steps (--skip-verilator)"
    fi

    write_croc_verification_summary
}

CROC_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/croc/$CROC_COMMIT_ID"
VERIFICATION_DIR="$DATASET_DIR/verification"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "CROC_DIR: $CROC_DIR"
info "Commit: $CROC_COMMIT_ID"
info "Dataset: $DATASET_DIR"

if [[ "$VERIFY_ONLY" == true ]]; then
    mkdir -p "$DATASET_DIR"
    if [[ "$VERIFY_ENABLED" != true ]]; then
        warn "--verify-only with --no-verify is a no-op."
        ok "generate_croc.sh completed (--verify-only)."
        exit 0
    fi
    if ! ( cd "$CROC_DIR" && bender path common_cells >/dev/null 2>&1 ); then
        err "Bender workspace not ready (e.g. bender path common_cells fails). Run checkout without --skip-checkout, or fix rtl/ + Bender.local."
        exit 1
    fi
    run_croc_verification || exit 1
    ok "generate_croc.sh completed (--verify-only)."
    exit 0
fi

pushd "$CROC_DIR" >/dev/null

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
    if ! bender path common_cells >/dev/null 2>&1; then
        err "Bender cannot resolve common_cells; run without --skip-checkout first"
        exit 1
    fi
fi

popd >/dev/null

VERIFY_LOCK_RESULT=SKIPPED
VERIFY_FLIST_RESULT=SKIPPED
VERIFY_VLINT_RESULT=SKIPPED
VERIFY_VBIN_RESULT=SKIPPED
VERIFY_VSIM_RESULT=SKIPPED
if [[ "$VERIFY_ENABLED" == true ]]; then
    if [[ "$WITH_VERILATOR_STEPS" == true ]] && ! command_exists verilator; then
        err "verilator not on PATH. Run ./scripts/install_croc.sh or use --skip-verilator / --no-verify"
        exit 1
    fi
    if [[ "$WITH_VERILATOR_STEPS" == true ]] && ! croc_cpp_compiler_ok; then
        err "g++/c++ not on PATH (needed for Verilator). Install gcc-c++ or use --skip-verilator"
        exit 1
    fi
    run_croc_verification || exit 1
else
    warn "Verification skipped (--no-verify)"
fi

info "Copying sources to $BUNDLE_DIR"
mkdir -p "$BUNDLE_DIR"

rsync -a \
    --exclude '.git/' \
    "$CROC_DIR/" "$BUNDLE_DIR/"

SUMMARY="$DATASET_DIR/croc_summary.txt"
{
    echo "croc SCORE snapshot (pulp-platform/croc)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $CROC_DIR"
    echo "Git commit (short): $CROC_COMMIT_ID"
    echo "Git commit (full): $(git -C "$CROC_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender: $(bender --version 2>/dev/null || echo unknown)"
    echo "verilator: $(command_exists verilator && verilator --version 2>/dev/null | head -1 || echo not_on_path)"
    echo ""
    if [[ "$VERIFY_ENABLED" == true ]]; then
        echo "Verification (see ${VERIFICATION_DIR}/verification_summary.txt):"
        echo "  Bender.lock path check: ${VERIFY_LOCK_RESULT:-SKIPPED}"
        echo "  bender flist-plus (common_cells): ${VERIFY_FLIST_RESULT:-SKIPPED}"
        echo "  Verilator lint (stream_fifo): ${VERIFY_VLINT_RESULT:-SKIPPED}"
        echo "  Verilator binary (elaboration): ${VERIFY_VBIN_RESULT:-SKIPPED}"
        echo "  Verilator simulation (testbench): ${VERIFY_VSIM_RESULT:-SKIPPED}"
        echo ""
    fi
    echo "See https://github.com/pulp-platform/croc and tools/croc/README.md"
    echo "Bundle path: $BUNDLE_DIR"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_croc.sh completed."
