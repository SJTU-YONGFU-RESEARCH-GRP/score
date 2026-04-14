#!/usr/bin/env bash
#
# Snapshot pulp-platform/chimera RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/chimera/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# Chimera pulls Cheshire / cva6-sdk; nested submodules use git://git.buildroot.net/buildroot,
# which often fails on the network. This script sets a temporary GIT_CONFIG_GLOBAL to rewrite
# that URL to https://github.com/buildroot/buildroot.git during bender only (same as carfield).
#
# Verification (default, before rsync) → datasets/chimera/<sha>/verification/:
#   1) Bender.lock → bender path (workspace closure)
#   2) bender script flist-plus -p common_cells (RTL slice in this workspace; not full Chimera SoC)
#   3) Verilator --lint-only / --binary on stream_fifo (same slice)
#   4) Verilator full simulation (default): scripts/assets/chimera/tb_stream_fifo.sv
# Full-package Chimera flist-plus fails without upstream iDMA codegen (idma_generated.sv); the
# common_cells slice still validates Bender + toolchains. SoC TB (target/sim/...) is not run here.
#
# Default is `bender checkout`. Optional --bender-update.
#
# Usage (from repository root):
#   ./scripts/generate_chimera.sh
#   ./scripts/generate_chimera.sh --skip-checkout
#   ./scripts/generate_chimera.sh --bender-update
#   ./scripts/generate_chimera.sh --no-verify
#   ./scripts/generate_chimera.sh --verify-only
#   ./scripts/generate_chimera.sh --skip-verilator
#   ./scripts/generate_chimera.sh --no-full-sim
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SOURCE_CHIMERA_DIR="$PROJECT_ROOT/tools/chimera"
CHIMERA_DIR=""

SKIP_CHECKOUT=false
BENDER_UPDATE=false
VERIFY_ENABLED=true
VERIFY_ONLY=false
WITH_VERILATOR_STEPS=true
WITH_FULL_SIM=true
DEFAULT_VERILATOR_JOBS=4
CHIMERA_VERILATOR_JOBS="${CHIMERA_VERILATOR_JOBS:-$DEFAULT_VERILATOR_JOBS}"
CHIMERA_TB_SV="$SCRIPT_DIR/assets/chimera/tb_stream_fifo.sv"

CHIMERA_GITCONFIG_TMP=""

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_chimera

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

chimera_cpp_compiler_ok() {
    command_exists g++ || command_exists c++
}

cleanup_chimera_git_global() {
    unset GIT_CONFIG_GLOBAL
    if [[ -n "${CHIMERA_GITCONFIG_TMP}" ]] && [[ -f "${CHIMERA_GITCONFIG_TMP}" ]]; then
        rm -f "${CHIMERA_GITCONFIG_TMP}"
    fi
    CHIMERA_GITCONFIG_TMP=""
}

apply_chimera_git_global() {
    cleanup_chimera_git_global
    CHIMERA_GITCONFIG_TMP=$(mktemp)
    cat > "$CHIMERA_GITCONFIG_TMP" << 'EOF'
[url "https://github.com/buildroot/buildroot.git"]
	insteadOf = git://git.buildroot.net/buildroot
EOF
    export GIT_CONFIG_GLOBAL="$CHIMERA_GITCONFIG_TMP"
}

trap cleanup_chimera_git_global EXIT

filter_bender_w03() {
    awk '!(/\[[Ww]03\]/ && /Ignoring unknown field/) { print; fflush() }'
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/chimera:
  - bender checkout   (default: honor Bender.lock)
  - bender update     (only with --bender-update; may fail if manifests conflict)

Uses a Buildroot URL rewrite (git:// -> GitHub mirror) during bender for cva6-sdk submodules.

Copy into datasets/chimera/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Verification (default, before rsync) → datasets/chimera/<sha>/verification/:
  - bender path for each Bender.lock package
  - bender flist-plus -p common_cells (workspace slice; full Chimera flist needs iDMA codegen)
  - Verilator lint + elaboration on stream_fifo; optional full sim (tb_stream_fifo.sv)

Options:
  -h, --help              Show this help
  --skip-checkout         Do not run bender (reuse existing .bender)
  --bender-update         Run bender update instead of checkout (experimental)
  --no-verify             Skip all verification steps
  --verify-only           Only run verification (no rsync snapshot)
  --skip-verilator        Run bender checks only (skip Verilator and full sim)
  --no-full-sim           Skip clocked TB (keep lint + elaboration binary)

Environment:
  CHIMERA_VERILATOR_JOBS    Parallel jobs for verilator (default: ${DEFAULT_VERILATOR_JOBS})
  CHIMERA_FULL_SIM          If 0/false/no/off, same as --no-full-sim (after CLI flags)

Requires: git, bender on PATH, rsync (unless --verify-only); verilator + C++ for Verilator steps.
See https://github.com/pulp-platform/chimera
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

case "${CHIMERA_FULL_SIM:-}" in
    0|false|no|off)
        WITH_FULL_SIM=false
        ;;
esac

if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/chimera_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/chimera_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$SOURCE_CHIMERA_DIR" ]]; then
    err "Missing $SOURCE_CHIMERA_DIR — run: git submodule update --init --recursive tools/chimera"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_chimera.sh"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to stage sources into datasets)"
    exit 1
fi

get_commit_id() {
    if git -C "$SOURCE_CHIMERA_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$SOURCE_CHIMERA_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

verify_chimera_bender_lock_paths() {
    local lock="$CHIMERA_DIR/Bender.lock" line pkg out missing
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
        if ( cd "$CHIMERA_DIR" && bender path "$pkg" >/dev/null 2>&1 ); then
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

verify_chimera_bender_common_cells_flist() {
    local stderr_log script_out st
    stderr_log="$VERIFICATION_DIR/bender_common_cells.stderr.log"
    script_out="$VERIFICATION_DIR/bender_script_common_cells.f"
    info "Verification: bender script flist-plus (package common_cells, RTL) …"
    set +e
    (
        cd "$CHIMERA_DIR" || exit 1
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

verify_chimera_verilator_stream_fifo_lint() {
    local script_out cc_stderr log st
    script_out="$VERIFICATION_DIR/bender_common_cells_lint.f"
    cc_stderr="$VERIFICATION_DIR/bender_common_cells_lint.stderr.log"
    log="$VERIFICATION_DIR/verilator_lint_common_cells_stream_fifo.log"
    if ! command_exists verilator; then
        err "Verilator not on PATH (install via ./scripts/install_chimera.sh or use --skip-verilator)"
        return 1
    fi
    info "Verification: Verilator --lint-only (common_cells, top stream_fifo) …"
    set +e
    (
        cd "$CHIMERA_DIR" || exit 1
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

verify_chimera_verilator_stream_fifo_binary() {
    local script_out objdir log st
    script_out="$VERIFICATION_DIR/bender_common_cells_lint.f"
    objdir="$VERIFICATION_DIR/verilator_obj_stream_fifo"
    log="$VERIFICATION_DIR/verilator_binary_stream_fifo.log"
    if ! command_exists verilator; then
        err "Verilator not on PATH"
        return 1
    fi
    if ! chimera_cpp_compiler_ok; then
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
        -Wno-fatal -j "$CHIMERA_VERILATOR_JOBS" \
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

verify_chimera_verilator_full_sim() {
    local script_out objdir log exe st
    script_out="$VERIFICATION_DIR/bender_common_cells_lint.f"
    objdir="$VERIFICATION_DIR/verilator_obj_tb_stream_fifo"
    log="$VERIFICATION_DIR/verilator_sim_stream_fifo.log"
    exe="$objdir/Vtb_stream_fifo"
    if ! command_exists verilator; then
        err "Verilator not on PATH"
        return 1
    fi
    if ! chimera_cpp_compiler_ok; then
        err "No g++/c++ on PATH (Verilator full sim needs a C++ compiler)"
        return 1
    fi
    if [[ ! -f "$CHIMERA_TB_SV" ]]; then
        err "Missing harness $CHIMERA_TB_SV"
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
    verilator --binary -sv --timing -Mdir "$objdir" -f "$script_out" "$CHIMERA_TB_SV" \
        --top-module tb_stream_fifo -Wno-fatal -j "$CHIMERA_VERILATOR_JOBS" \
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

write_chimera_verification_summary() {
    local vf="$VERIFICATION_DIR/verification_summary.txt"
    {
        echo "chimera RTL verification summary (SCORE)"
        echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
        echo ""
        echo "Bender.lock → bender path: ${VERIFY_LOCK_RESULT:-SKIPPED}"
        echo "bender flist-plus (common_cells slice): ${VERIFY_FLIST_RESULT:-SKIPPED}"
        echo "Verilator --lint-only (common_cells / stream_fifo): ${VERIFY_VLINT_RESULT:-SKIPPED}"
        echo "Verilator --binary (elaboration smoke): ${VERIFY_VBIN_RESULT:-SKIPPED}"
        echo "Verilator simulation (tb_stream_fifo): ${VERIFY_VSIM_RESULT:-SKIPPED}"
        echo ""
        echo "Notes:"
        echo "  Full Chimera SoC flist-plus may require upstream iDMA code generation; this run"
        echo "  validates Bender closure and Verilator on the common_cells stream_fifo slice."
        echo "  Upstream SoC testbench (target/sim/) is not executed in SCORE by default."
        echo "Logs: $VERIFICATION_DIR/"
    } > "$vf"
    ok "Wrote $vf"
}

run_chimera_verification() {
    VERIFY_LOCK_RESULT=SKIPPED
    VERIFY_FLIST_RESULT=SKIPPED
    VERIFY_VLINT_RESULT=SKIPPED
    VERIFY_VBIN_RESULT=SKIPPED
    VERIFY_VSIM_RESULT=SKIPPED

    mkdir -p "$VERIFICATION_DIR"
    info "Running verification → $VERIFICATION_DIR"

    verify_chimera_bender_lock_paths || return 1
    VERIFY_LOCK_RESULT=PASS

    verify_chimera_bender_common_cells_flist || return 1
    VERIFY_FLIST_RESULT=PASS

    if [[ "$WITH_VERILATOR_STEPS" == true ]]; then
        verify_chimera_verilator_stream_fifo_lint || return 1
        VERIFY_VLINT_RESULT=PASS

        verify_chimera_verilator_stream_fifo_binary || return 1
        VERIFY_VBIN_RESULT=PASS

        if [[ "$WITH_FULL_SIM" == true ]]; then
            verify_chimera_verilator_full_sim || return 1
            VERIFY_VSIM_RESULT=PASS
        else
            info "Verification: skipping full simulation (--no-full-sim or CHIMERA_FULL_SIM=0)"
        fi
    else
        info "Verification: skipping Verilator steps (--skip-verilator)"
    fi

    write_chimera_verification_summary
}

CHIMERA_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/chimera/$CHIMERA_COMMIT_ID"
VERIFICATION_DIR="$DATASET_DIR/verification"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR"

CHIMERA_DIR="$BUNDLE_DIR"

prepare_dataset_workdir() {
    info "Staging Chimera sources into dataset workdir: $CHIMERA_DIR"
    mkdir -p "$CHIMERA_DIR"
    rsync -a --delete \
        --exclude '.git/' \
        "$SOURCE_CHIMERA_DIR/" "$CHIMERA_DIR/"
}

exec > >(tee -a "$SESSION_LOG") 2>&1

info "SOURCE_CHIMERA_DIR: $SOURCE_CHIMERA_DIR"
info "WORK_DIR: $CHIMERA_DIR"
info "Commit: $CHIMERA_COMMIT_ID"
info "Dataset: $DATASET_DIR"

prepare_dataset_workdir

if [[ "$VERIFY_ONLY" == true ]]; then
    mkdir -p "$DATASET_DIR"
    if [[ "$VERIFY_ENABLED" != true ]]; then
        warn "--verify-only with --no-verify is a no-op."
        ok "generate_chimera.sh completed (--verify-only)."
        exit 0
    fi
    if [[ ! -d "$CHIMERA_DIR/.bender" ]]; then
        err ".bender missing; run without --verify-only (or --skip-checkout) after checkout"
        exit 1
    fi
    run_chimera_verification || exit 1
    ok "generate_chimera.sh completed (--verify-only)."
    exit 0
fi

pushd "$CHIMERA_DIR" >/dev/null

if [[ "$SKIP_CHECKOUT" != true ]]; then
    apply_chimera_git_global
    if [[ "$BENDER_UPDATE" == true ]]; then
        warn "Running bender update (may fail if dependency graphs conflict)"
        bender update
    else
        info "Running bender checkout (Bender.lock)"
        bender checkout
    fi
    cleanup_chimera_git_global
else
    warn "Skipped bender checkout/update"
    if [[ ! -d .bender ]]; then
        err ".bender missing; run without --skip-checkout first"
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
        err "verilator not on PATH. Run ./scripts/install_chimera.sh or use --skip-verilator / --no-verify"
        exit 1
    fi
    if [[ "$WITH_VERILATOR_STEPS" == true ]] && ! chimera_cpp_compiler_ok; then
        err "g++/c++ not on PATH (needed for Verilator). Install gcc-c++ or use --skip-verilator"
        exit 1
    fi
    run_chimera_verification || exit 1
else
    warn "Verification skipped (--no-verify)"
fi

SUMMARY="$DATASET_DIR/chimera_summary.txt"
{
    echo "chimera SCORE snapshot (pulp-platform/chimera)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $SOURCE_CHIMERA_DIR"
    echo "Dataset workdir: $CHIMERA_DIR"
    echo "Git commit (short): $CHIMERA_COMMIT_ID"
    echo "Git commit (full): $(git -C "$SOURCE_CHIMERA_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
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
    echo "See https://github.com/pulp-platform/chimera and tools/chimera/README.md"
    echo "Bundle path: $BUNDLE_DIR"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_chimera.sh completed."
