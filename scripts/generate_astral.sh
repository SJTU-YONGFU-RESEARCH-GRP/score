#!/usr/bin/env bash
#
# Snapshot pulp-platform/astral RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/astral/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# astral is built around Cheshire-style stacks; nested submodules may use
# git://git.buildroot.net/buildroot, which often fails. This script sets a temporary
# GIT_CONFIG_GLOBAL to rewrite that URL to https://github.com/buildroot/buildroot.git
# for the duration of bender checkout/update only.
#
# Default is `bender checkout`. Optional --bender-update may fail if manifests conflict.
#
# Verification (default): after checkout, before rsync — under datasets/astral/<sha>/verification/
#   1) Bender.lock package names resolvable via `bender path` (workspace closure)
#   2) bender script flist-plus — FPGA/minimal island profile (manifest / file-list lint)
#   3) Verilator --lint-only on a pinned IP slice (common_cells / stream_fifo; OpenTitan SVA
#      prevents full-chip Verilator lint in this repo)
#   4) Verilator --binary on the same slice (RTL compile / elaboration smoke = default RTL verify)
#
# Usage (from repository root):
#   ./scripts/generate_astral.sh
#   ./scripts/generate_astral.sh --skip-checkout
#   ./scripts/generate_astral.sh --bender-update
#   ./scripts/generate_astral.sh --no-verify
#   ./scripts/generate_astral.sh --verify-only
#   ./scripts/generate_astral.sh --skip-verilator
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
ASTRAL_DIR="$PROJECT_ROOT/tools/astral"

SKIP_CHECKOUT=false
BENDER_UPDATE=false
VERIFY_ENABLED=true
VERIFY_ONLY=false
WITH_VERILATOR_STEPS=true
DEFAULT_VERILATOR_JOBS=4
ASTRAL_VERILATOR_JOBS="${ASTRAL_VERILATOR_JOBS:-$DEFAULT_VERILATOR_JOBS}"

# Carfield configuration target (must match a target in tools/astral/Bender.yml).
ASTRAL_CARFIELD_CONFIG="${ASTRAL_CARFIELD_CONFIG:-carfield_l2dual_periph}"

# Temp gitconfig path; cleaned up after bender or on exit.
ASTRAL_GITCONFIG_TMP=""

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[generate_astral]${NC} $*"; }
ok() { echo -e "${GREEN}[generate_astral]${NC} $*"; }
warn() { echo -e "${YELLOW}[generate_astral]${NC} $*"; }
err() { echo -e "${RED}[generate_astral]${NC} $*" >&2; }

command_exists() { command -v "$1" >/dev/null 2>&1; }

astral_cpp_compiler_ok() {
    command_exists g++ || command_exists c++
}

cleanup_astral_git_global() {
    unset GIT_CONFIG_GLOBAL
    if [[ -n "${ASTRAL_GITCONFIG_TMP}" ]] && [[ -f "${ASTRAL_GITCONFIG_TMP}" ]]; then
        rm -f "${ASTRAL_GITCONFIG_TMP}"
    fi
    ASTRAL_GITCONFIG_TMP=""
}

apply_astral_git_global() {
    cleanup_astral_git_global
    ASTRAL_GITCONFIG_TMP=$(mktemp)
    cat > "$ASTRAL_GITCONFIG_TMP" << 'EOF'
[url "https://github.com/buildroot/buildroot.git"]
	insteadOf = git://git.buildroot.net/buildroot
EOF
    export GIT_CONFIG_GLOBAL="$ASTRAL_GITCONFIG_TMP"
}

trap cleanup_astral_git_global EXIT

# Match generate_araxl.sh: hide benign Bender [W03] manifest noise.
filter_bender_w03() {
    awk '!(/\[[Ww]03\]/ && /Ignoring unknown field/) { print; fflush() }'
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/astral:
  - bender checkout   (default: honor Bender.lock)
  - bender update     (only with --bender-update; may fail if manifests conflict)

Nested submodule clone uses a Buildroot URL rewrite (git:// -> GitHub mirror) during bender only.

Copy into datasets/astral/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Verification (default, before rsync) → datasets/astral/<sha>/verification/:
  - bender path <pkg> for each Bender.lock package (closure)
  - bender script flist-plus (FPGA profile; excludes VHDL can_bus; minimal islands)
  - Verilator --lint-only on common_cells (top stream_fifo)
  - Verilator --binary on same slice (RTL elaboration smoke; needs g++ and Verilator)

Options:
  -h, --help              Show this help
  --skip-checkout         Do not run bender (reuse existing .bender)
  --bender-update         Run bender update instead of checkout (experimental)
  --no-verify             Skip all verification steps
  --verify-only           Only run verification (no rsync snapshot)
  --skip-verilator        Run bender checks only (skip Verilator lint and --binary)

Environment:
  ASTRAL_CARFIELD_CONFIG   Bender target for carfield config (default: ${ASTRAL_CARFIELD_CONFIG})
  ASTRAL_VERILATOR_JOBS    Parallel jobs for verilator --binary (default: ${DEFAULT_VERILATOR_JOBS})

Requires: git, bender on PATH, rsync (unless --verify-only); verilator + C++ for default Verilator steps.
Submodule tools/astral initialized. See https://github.com/pulp-platform/astral
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
if [[ -f "$PROJECT_ROOT/scripts/astral_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/astral_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$ASTRAL_DIR" ]]; then
    err "Missing $ASTRAL_DIR — run: git submodule update --init --recursive tools/astral"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_astral.sh"
    exit 1
fi

if [[ "$VERIFY_ONLY" != true ]] && ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$ASTRAL_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$ASTRAL_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

verify_astral_bender_lock_paths() {
    local lock="$ASTRAL_DIR/Bender.lock" line pkg out missing
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
        if ( cd "$ASTRAL_DIR" && bender path "$pkg" >/dev/null 2>&1 ); then
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

verify_astral_bender_flist() {
    local stderr_log script_out st
    stderr_log="$VERIFICATION_DIR/bender_flist_${ASTRAL_CARFIELD_CONFIG}.stderr.log"
    script_out="$VERIFICATION_DIR/bender_script_${ASTRAL_CARFIELD_CONFIG}.f"
    info "Verification: bender script flist-plus (config=${ASTRAL_CARFIELD_CONFIG}) …"
    set +e
    (
        cd "$ASTRAL_DIR" || exit 1
        bender script flist-plus \
            -t cva6 -t mchan -t integer_cluster -t cv32e40p_use_ff_regfile -t scm_use_fpga_scm \
            -t cv64a6_imafdch_sv39_wb -t rtl -t snitch_cluster -t deprecated \
            -t "$ASTRAL_CARFIELD_CONFIG" \
            -e pulp_cluster -e safety_island -e spatz -e can_bus \
            -t xilinx -t fpga -t xilinx_vanilla \
            -D TARGET_VCU128 -D PULP_FPGA_EMUL \
            -D FEATURE_ICACHE_STAT -D PRIVATE_ICACHE -D HIERARCHY_ICACHE_32BIT -D ICAHE_USE_FF \
            -D CLUSTER_ALIAS -D SNITCH_ICACHE \
            > "$script_out" 2> >(filter_bender_w03 >> "$stderr_log")
    )
    st=$?
    set -e
    if [[ "$st" -ne 0 ]]; then
        err "bender script flist-plus failed (exit $st; stderr: $stderr_log)"
        return 1
    fi
    if [[ ! -s "$script_out" ]]; then
        err "bender flist output empty: $script_out"
        return 1
    fi
    ok "Verification: bender flist-plus OK ($(wc -l < "$script_out") lines → $script_out)"
    return 0
}

verify_astral_verilator_common_cells_lint() {
    local script_out cc_stderr log st
    script_out="$VERIFICATION_DIR/bender_common_cells_lint.f"
    cc_stderr="$VERIFICATION_DIR/bender_common_cells_lint.stderr.log"
    log="$VERIFICATION_DIR/verilator_lint_common_cells_stream_fifo.log"
    if ! command_exists verilator; then
        err "Verilator not on PATH (install via ./scripts/install_astral.sh or use --skip-verilator)"
        return 1
    fi
    info "Verification: Verilator --lint-only (common_cells, top stream_fifo) …"
    set +e
    (
        cd "$ASTRAL_DIR" || exit 1
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

verify_astral_verilator_common_cells_binary() {
    local script_out objdir log st
    script_out="$VERIFICATION_DIR/bender_common_cells_lint.f"
    objdir="$VERIFICATION_DIR/verilator_obj_stream_fifo"
    log="$VERIFICATION_DIR/verilator_binary_stream_fifo.log"
    if ! command_exists verilator; then
        err "Verilator not on PATH"
        return 1
    fi
    if ! astral_cpp_compiler_ok; then
        err "No g++/c++ on PATH (Verilator --binary needs a C++ compiler; install gcc-c++)"
        return 1
    fi
    if [[ ! -f "$script_out" ]]; then
        err "Missing $script_out (Verilator lint step must run first)"
        return 1
    fi
    info "Verification: Verilator --binary (RTL elaboration smoke, top stream_fifo) …"
    rm -rf "$objdir"
    mkdir -p "$objdir"
    set +e
    verilator --binary -sv --no-timing -Mdir "$objdir" -f "$script_out" --top-module stream_fifo \
        -Wno-fatal -j "$ASTRAL_VERILATOR_JOBS" \
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

write_astral_verification_summary() {
    local vf="$VERIFICATION_DIR/verification_summary.txt"
    {
        echo "Astral / Carfield RTL verification summary (SCORE)"
        echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
        echo "ASTRAL_CARFIELD_CONFIG (bender flist profile): ${ASTRAL_CARFIELD_CONFIG}"
        echo ""
        echo "Bender.lock → bender path: ${VERIFY_LOCK_RESULT:-SKIPPED}"
        echo "bender script flist-plus (FPGA / minimal islands): ${VERIFY_FLIST_RESULT:-SKIPPED}"
        echo "Verilator --lint-only (common_cells / stream_fifo): ${VERIFY_VLINT_RESULT:-SKIPPED}"
        echo "Verilator --binary (RTL elaboration smoke): ${VERIFY_VBIN_RESULT:-SKIPPED}"
        echo ""
        echo "Notes:"
        echo "  Full-chip Verilator lint is not used: OpenTitan concurrent assertions and mixed"
        echo "  VHDL (can_bus) are incompatible with a single Verilator pass; the flist step still"
        echo "  validates the Astral file closure for the FPGA-oriented profile above."
        echo "Logs: $VERIFICATION_DIR/"
    } > "$vf"
    ok "Wrote $vf"
}

run_astral_verification() {
    VERIFY_LOCK_RESULT=SKIPPED
    VERIFY_FLIST_RESULT=SKIPPED
    VERIFY_VLINT_RESULT=SKIPPED
    VERIFY_VBIN_RESULT=SKIPPED

    mkdir -p "$VERIFICATION_DIR"
    info "Running verification → $VERIFICATION_DIR"

    verify_astral_bender_lock_paths || return 1
    VERIFY_LOCK_RESULT=PASS

    verify_astral_bender_flist || return 1
    VERIFY_FLIST_RESULT=PASS

    if [[ "$WITH_VERILATOR_STEPS" == true ]]; then
        verify_astral_verilator_common_cells_lint || return 1
        VERIFY_VLINT_RESULT=PASS

        verify_astral_verilator_common_cells_binary || return 1
        VERIFY_VBIN_RESULT=PASS
    else
        info "Verification: skipping Verilator steps (--skip-verilator)"
    fi

    write_astral_verification_summary
}

ASTRAL_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/astral/$ASTRAL_COMMIT_ID"
VERIFICATION_DIR="$DATASET_DIR/verification"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "ASTRAL_DIR: $ASTRAL_DIR"
info "Commit: $ASTRAL_COMMIT_ID"
info "Dataset: $DATASET_DIR"

if [[ "$VERIFY_ONLY" == true ]]; then
    mkdir -p "$DATASET_DIR"
    if [[ "$VERIFY_ENABLED" != true ]]; then
        warn "--verify-only with --no-verify is a no-op."
        ok "generate_astral.sh completed (--verify-only)."
        exit 0
    fi
    if [[ ! -d "$ASTRAL_DIR/.bender" ]]; then
        err ".bender missing; run without --verify-only (or --skip-checkout) after checkout"
        exit 1
    fi
    run_astral_verification || exit 1
    ok "generate_astral.sh completed (--verify-only)."
    exit 0
fi

pushd "$ASTRAL_DIR" >/dev/null

if [[ "$SKIP_CHECKOUT" != true ]]; then
    apply_astral_git_global
    if [[ "$BENDER_UPDATE" == true ]]; then
        warn "Running bender update (may fail if dependency graphs conflict)"
        bender update
    else
        info "Running bender checkout (Bender.lock)"
        bender checkout
    fi
    cleanup_astral_git_global
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
if [[ "$VERIFY_ENABLED" == true ]]; then
    if [[ "$WITH_VERILATOR_STEPS" == true ]] && ! command_exists verilator; then
        err "verilator not on PATH. Run ./scripts/install_astral.sh or use --skip-verilator / --no-verify"
        exit 1
    fi
    if [[ "$WITH_VERILATOR_STEPS" == true ]] && ! astral_cpp_compiler_ok; then
        err "g++/c++ not on PATH (needed for Verilator --binary). Install gcc-c++ or use --skip-verilator"
        exit 1
    fi
    run_astral_verification || exit 1
else
    warn "Verification skipped (--no-verify)"
fi

info "Copying sources to $BUNDLE_DIR"
mkdir -p "$BUNDLE_DIR"

rsync -a \
    --exclude '.git/' \
    "$ASTRAL_DIR/" "$BUNDLE_DIR/"

SUMMARY="$DATASET_DIR/astral_summary.txt"
{
    echo "astral SCORE snapshot (pulp-platform/astral)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $ASTRAL_DIR"
    echo "Git commit (short): $ASTRAL_COMMIT_ID"
    echo "Git commit (full): $(git -C "$ASTRAL_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender: $(bender --version 2>/dev/null || echo unknown)"
    echo "verilator: $(command_exists verilator && verilator --version 2>/dev/null | head -1 || echo not_on_path)"
    echo ""
    if [[ "$VERIFY_ENABLED" == true ]]; then
        echo "Verification (see ${VERIFICATION_DIR}/verification_summary.txt):"
        echo "  Bender.lock path check: ${VERIFY_LOCK_RESULT:-SKIPPED}"
        echo "  bender flist-plus (FPGA profile): ${VERIFY_FLIST_RESULT:-SKIPPED}"
        echo "  Verilator lint (common_cells): ${VERIFY_VLINT_RESULT:-SKIPPED}"
        echo "  Verilator binary (elaboration): ${VERIFY_VBIN_RESULT:-SKIPPED}"
        echo ""
    fi
    echo "See https://github.com/pulp-platform/astral and tools/astral/README.md"
    echo "Bundle path: $BUNDLE_DIR"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_astral.sh completed."
