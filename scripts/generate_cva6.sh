#!/usr/bin/env bash
#
# Snapshot pulp-platform/cva6 RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/cva6/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# Verification (default, before rsync) → datasets/cva6/<sha>/verification/:
#   1) Bender.lock → bender path (workspace closure)
#   2) bender script flist-plus -p common_cells (RTL slice in this workspace)
#   3) Verilator --lint-only / --binary on stream_fifo (same slice)
#   4) Verilator full simulation (default): scripts/assets/chimera/tb_stream_fifo.sv (shared harness)
# Full CVA6 core SoC flist-plus is not required for this smoke path; it validates Bender + Verilator.
#
# Default is `bender checkout`. Optional --bender-update.
#
# Usage (from repository root):
#   ./scripts/generate_cva6.sh
#   ./scripts/generate_cva6.sh --skip-checkout
#   ./scripts/generate_cva6.sh --bender-update
#   ./scripts/generate_cva6.sh --no-verify
#   ./scripts/generate_cva6.sh --verify-only
#   ./scripts/generate_cva6.sh --skip-verilator
#   ./scripts/generate_cva6.sh --no-full-sim
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SOURCE_CVA6_DIR="$PROJECT_ROOT/tools/cva6"
CVA6_DIR=""

SKIP_CHECKOUT=false
BENDER_UPDATE=false
VERIFY_ENABLED=true
VERIFY_ONLY=false
WITH_VERILATOR_STEPS=true
WITH_FULL_SIM=true
DEFAULT_VERILATOR_JOBS=4
CVA6_VERILATOR_JOBS="${CVA6_VERILATOR_JOBS:-$DEFAULT_VERILATOR_JOBS}"
CVA6_TB_SV="$SCRIPT_DIR/assets/chimera/tb_stream_fifo.sv"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_cva6

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

cva6_cpp_compiler_ok() {
    command_exists g++ || command_exists c++
}

filter_bender_w03() {
    awk '!(/\[[Ww]03\]/ && /Ignoring unknown field/) { print; fflush() }'
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/cva6:
  - bender checkout   (default: honor Bender.lock)
  - bender update     (only with --bender-update; may fail if manifests conflict)

Copy into datasets/cva6/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Verification (default, before rsync) → datasets/cva6/<sha>/verification/:
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
  CVA6_VERILATOR_JOBS    Parallel jobs for verilator (default: ${DEFAULT_VERILATOR_JOBS})
  CVA6_FULL_SIM          If 0/false/no/off, same as --no-full-sim (after CLI flags)

Requires: git, bender on PATH, rsync (unless --verify-only); verilator + C++ for Verilator steps.
See https://github.com/pulp-platform/cva6
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

case "${CVA6_FULL_SIM:-}" in
    0|false|no|off)
        WITH_FULL_SIM=false
        ;;
esac

if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/cva6_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/cva6_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$SOURCE_CVA6_DIR" ]]; then
    err "Missing $SOURCE_CVA6_DIR — run: git submodule update --init --recursive tools/cva6"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_cva6.sh"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to stage sources into datasets)"
    exit 1
fi

get_commit_id() {
    if git -C "$SOURCE_CVA6_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$SOURCE_CVA6_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

verify_cva6_bender_lock_paths() {
    local lock="$CVA6_DIR/Bender.lock" line pkg out missing
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
        if ( cd "$CVA6_DIR" && bender path "$pkg" >/dev/null 2>&1 ); then
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

verify_cva6_bender_common_cells_flist() {
    local stderr_log script_out st
    stderr_log="$VERIFICATION_DIR/bender_common_cells.stderr.log"
    script_out="$VERIFICATION_DIR/bender_script_common_cells.f"
    info "Verification: bender script flist-plus (package common_cells, RTL) …"
    set +e
    (
        cd "$CVA6_DIR" || exit 1
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

verify_cva6_verilator_stream_fifo_lint() {
    local script_out cc_stderr log st
    script_out="$VERIFICATION_DIR/bender_common_cells_lint.f"
    cc_stderr="$VERIFICATION_DIR/bender_common_cells_lint.stderr.log"
    log="$VERIFICATION_DIR/verilator_lint_common_cells_stream_fifo.log"
    if ! command_exists verilator; then
        err "Verilator not on PATH (install via ./scripts/install_cva6.sh or use --skip-verilator)"
        return 1
    fi
    info "Verification: Verilator --lint-only (common_cells, top stream_fifo) …"
    set +e
    (
        cd "$CVA6_DIR" || exit 1
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

verify_cva6_verilator_stream_fifo_binary() {
    local script_out objdir log st
    script_out="$VERIFICATION_DIR/bender_common_cells_lint.f"
    objdir="$VERIFICATION_DIR/verilator_obj_stream_fifo"
    log="$VERIFICATION_DIR/verilator_binary_stream_fifo.log"
    if ! command_exists verilator; then
        err "Verilator not on PATH"
        return 1
    fi
    if ! cva6_cpp_compiler_ok; then
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
        -Wno-fatal -j "$CVA6_VERILATOR_JOBS" \
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

verify_cva6_verilator_full_sim() {
    local script_out objdir log exe st
    script_out="$VERIFICATION_DIR/bender_common_cells_lint.f"
    objdir="$VERIFICATION_DIR/verilator_obj_tb_stream_fifo"
    log="$VERIFICATION_DIR/verilator_sim_stream_fifo.log"
    exe="$objdir/Vtb_stream_fifo"
    if ! command_exists verilator; then
        err "Verilator not on PATH"
        return 1
    fi
    if ! cva6_cpp_compiler_ok; then
        err "No g++/c++ on PATH (Verilator full sim needs a C++ compiler)"
        return 1
    fi
    if [[ ! -f "$CVA6_TB_SV" ]]; then
        err "Missing harness $CVA6_TB_SV"
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
    verilator --binary -sv --timing -Mdir "$objdir" -f "$script_out" "$CVA6_TB_SV" \
        --top-module tb_stream_fifo -Wno-fatal -j "$CVA6_VERILATOR_JOBS" \
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

write_cva6_verification_summary() {
    local vf="$VERIFICATION_DIR/verification_summary.txt"
    {
        echo "cva6 RTL verification summary (SCORE)"
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
        echo "  Full CVA6 core Verilator closure is not run by default in SCORE."
        echo "Logs: $VERIFICATION_DIR/"
    } > "$vf"
    ok "Wrote $vf"
}

run_cva6_verification() {
    VERIFY_LOCK_RESULT=SKIPPED
    VERIFY_FLIST_RESULT=SKIPPED
    VERIFY_VLINT_RESULT=SKIPPED
    VERIFY_VBIN_RESULT=SKIPPED
    VERIFY_VSIM_RESULT=SKIPPED

    mkdir -p "$VERIFICATION_DIR"
    info "Running verification → $VERIFICATION_DIR"

    verify_cva6_bender_lock_paths || return 1
    VERIFY_LOCK_RESULT=PASS

    verify_cva6_bender_common_cells_flist || return 1
    VERIFY_FLIST_RESULT=PASS

    if [[ "$WITH_VERILATOR_STEPS" == true ]]; then
        verify_cva6_verilator_stream_fifo_lint || return 1
        VERIFY_VLINT_RESULT=PASS

        verify_cva6_verilator_stream_fifo_binary || return 1
        VERIFY_VBIN_RESULT=PASS

        if [[ "$WITH_FULL_SIM" == true ]]; then
            verify_cva6_verilator_full_sim || return 1
            VERIFY_VSIM_RESULT=PASS
        else
            info "Verification: skipping full simulation (--no-full-sim or CVA6_FULL_SIM=0)"
        fi
    else
        info "Verification: skipping Verilator steps (--skip-verilator)"
    fi

    write_cva6_verification_summary
}

CVA6_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/cva6/$CVA6_COMMIT_ID"
VERIFICATION_DIR="$DATASET_DIR/verification"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR"

CVA6_DIR="$BUNDLE_DIR"

prepare_dataset_workdir() {
    info "Staging CVA6 sources into dataset workdir: $CVA6_DIR"
    mkdir -p "$CVA6_DIR"
    rsync -a --delete \
        --exclude '.git/' \
        "$SOURCE_CVA6_DIR/" "$CVA6_DIR/"
}

exec > >(tee -a "$SESSION_LOG") 2>&1

info "SOURCE_CVA6_DIR: $SOURCE_CVA6_DIR"
info "WORK_DIR: $CVA6_DIR"
info "Commit: $CVA6_COMMIT_ID"
info "Dataset: $DATASET_DIR"

prepare_dataset_workdir

if [[ "$VERIFY_ONLY" == true ]]; then
    mkdir -p "$DATASET_DIR"
    if [[ "$VERIFY_ENABLED" != true ]]; then
        warn "--verify-only with --no-verify is a no-op."
        ok "generate_cva6.sh completed (--verify-only)."
        exit 0
    fi
    if ! ( cd "$CVA6_DIR" && bender path common_cells >/dev/null 2>&1 ); then
        err "Bender workspace not ready (e.g. bender path common_cells fails). Run checkout without --skip-checkout, or fix rtl/ + Bender.local."
        exit 1
    fi
    run_cva6_verification || exit 1
    ok "generate_cva6.sh completed (--verify-only)."
    exit 0
fi

pushd "$CVA6_DIR" >/dev/null

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
        err "verilator not on PATH. Run ./scripts/install_cva6.sh or use --skip-verilator / --no-verify"
        exit 1
    fi
    if [[ "$WITH_VERILATOR_STEPS" == true ]] && ! cva6_cpp_compiler_ok; then
        err "g++/c++ not on PATH (needed for Verilator). Install gcc-c++ or use --skip-verilator"
        exit 1
    fi
    run_cva6_verification || exit 1
else
    warn "Verification skipped (--no-verify)"
fi

SUMMARY="$DATASET_DIR/cva6_summary.txt"
{
    echo "cva6 SCORE snapshot (pulp-platform/cva6)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $SOURCE_CVA6_DIR"
    echo "Dataset workdir: $CVA6_DIR"
    echo "Git commit (short): $CVA6_COMMIT_ID"
    echo "Git commit (full): $(git -C "$SOURCE_CVA6_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
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
    echo "See https://github.com/pulp-platform/cva6 and tools/cva6/README.md"
    echo "Bundle path: $BUNDLE_DIR"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_cva6.sh completed."
