#!/usr/bin/env bash
#
# Snapshot pulp-platform/auteur RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/auteur/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# Default is `bender checkout` (uses upstream Bender.lock). `bender update` can fail when
# upstream manifests disagree; opt in with --bender-update.
#
# Verification (default, before rsync) → datasets/auteur/<sha>/verification/:
#   1) Bender.lock package names resolvable via `bender path`
#   2) bender script flist-plus for package auteur (RTL + tech_cells_generic_exclude_deprecated)
#   3) Verilator --lint-only on hw/auteur_fifo.sv (top auteur_fifo)
#   4) Verilator --binary on the same slice (elaboration smoke; needs g++ and Verilator)
#   5) Verilator full simulation (default): SCORE tb_auteur_fifo.sv drives hw/auteur_fifo.sv
# Full top auteur_group is not used: Verilator hits generate/unroll limits on that design.
#
# Usage (from repository root):
#   ./scripts/generate_auteur.sh
#   ./scripts/generate_auteur.sh --skip-checkout
#   ./scripts/generate_auteur.sh --bender-update
#   ./scripts/generate_auteur.sh --no-verify
#   ./scripts/generate_auteur.sh --verify-only
#   ./scripts/generate_auteur.sh --skip-verilator
#   ./scripts/generate_auteur.sh --no-full-sim   (skip clocked TB run; keep lint + elaboration)
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
AUTEUR_DIR="$PROJECT_ROOT/tools/auteur"

SKIP_CHECKOUT=false
BENDER_UPDATE=false
VERIFY_ENABLED=true
VERIFY_ONLY=false
WITH_VERILATOR_STEPS=true
WITH_FULL_SIM=true
DEFAULT_VERILATOR_JOBS=4
AUTEUR_VERILATOR_JOBS="${AUTEUR_VERILATOR_JOBS:-$DEFAULT_VERILATOR_JOBS}"
AUTEUR_TB_SV="$SCRIPT_DIR/assets/auteur/tb_auteur_fifo.sv"

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[generate_auteur]${NC} $*"; }
ok() { echo -e "${GREEN}[generate_auteur]${NC} $*"; }
warn() { echo -e "${YELLOW}[generate_auteur]${NC} $*"; }
err() { echo -e "${RED}[generate_auteur]${NC} $*" >&2; }

command_exists() { command -v "$1" >/dev/null 2>&1; }

auteur_cpp_compiler_ok() {
    command_exists g++ || command_exists c++
}

# Match generate_astral.sh: hide benign Bender [W03] manifest noise.
filter_bender_w03() {
    awk '!(/\[[Ww]03\]/ && /Ignoring unknown field/) { print; fflush() }'
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/auteur:
  - bender checkout   (default: honor Bender.lock)
  - bender update     (only with --bender-update; may fail if manifests conflict)

Copy into datasets/auteur/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Verification (default, before rsync) → datasets/auteur/<sha>/verification/:
  - bender path <pkg> for each Bender.lock package
  - bender script flist-plus -p auteur (RTL closure)
  - Verilator --lint-only / --binary on hw/auteur_fifo.sv (top auteur_fifo; not full auteur_group)
  - Verilator full simulation (default): scripts/assets/auteur/tb_auteur_fifo.sv + hw/auteur_fifo.sv

Options:
  -h, --help              Show this help
  --skip-checkout         Do not run bender (reuse existing .bender)
  --bender-update         Run bender update instead of checkout (experimental)
  --no-verify             Skip all verification steps
  --verify-only           Only run verification (no rsync snapshot)
  --skip-verilator        Run bender checks only (skip all Verilator steps including full sim)
  --no-full-sim           Skip clocked TB simulation (keep lint + elaboration binary)

Environment:
  AUTEUR_VERILATOR_JOBS    Parallel jobs for verilator --binary (default: ${DEFAULT_VERILATOR_JOBS})
  AUTEUR_FULL_SIM          If 0/false/no/off, same as --no-full-sim (evaluated after CLI flags)

Requires: git, bender on PATH, rsync (unless --verify-only); verilator + C++ for default Verilator steps.
See https://github.com/pulp-platform/auteur
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

case "${AUTEUR_FULL_SIM:-}" in
    0|false|no|off)
        WITH_FULL_SIM=false
        ;;
esac

if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/auteur_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/auteur_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$AUTEUR_DIR" ]]; then
    err "Missing $AUTEUR_DIR — run: git submodule update --init --recursive tools/auteur"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_auteur.sh"
    exit 1
fi

if [[ "$VERIFY_ONLY" != true ]] && ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$AUTEUR_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$AUTEUR_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

verify_auteur_bender_lock_paths() {
    local lock="$AUTEUR_DIR/Bender.lock" line pkg out missing
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
        if ( cd "$AUTEUR_DIR" && bender path "$pkg" >/dev/null 2>&1 ); then
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

verify_auteur_bender_flist() {
    local stderr_log script_out st
    stderr_log="$VERIFICATION_DIR/bender_flist_auteur.stderr.log"
    script_out="$VERIFICATION_DIR/bender_script_auteur.f"
    info "Verification: bender script flist-plus (package auteur, RTL) …"
    set +e
    (
        cd "$AUTEUR_DIR" || exit 1
        bender script flist-plus -p auteur -t rtl -t tech_cells_generic_exclude_deprecated \
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

verify_auteur_verilator_fifo_lint() {
    local rtl log st
    rtl="$AUTEUR_DIR/hw/auteur_fifo.sv"
    log="$VERIFICATION_DIR/verilator_lint_auteur_fifo.log"
    if ! command_exists verilator; then
        err "Verilator not on PATH (install via ./scripts/install_auteur.sh or use --skip-verilator)"
        return 1
    fi
    if [[ ! -f "$rtl" ]]; then
        err "Missing $rtl"
        return 1
    fi
    info "Verification: Verilator --lint-only (auteur_fifo.sv) …"
    set +e
    verilator --lint-only -sv --no-timing "$rtl" --top-module auteur_fifo -Wno-fatal \
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

verify_auteur_verilator_fifo_binary() {
    local rtl objdir log st
    rtl="$AUTEUR_DIR/hw/auteur_fifo.sv"
    objdir="$VERIFICATION_DIR/verilator_obj_auteur_fifo"
    log="$VERIFICATION_DIR/verilator_binary_auteur_fifo.log"
    if ! command_exists verilator; then
        err "Verilator not on PATH"
        return 1
    fi
    if ! auteur_cpp_compiler_ok; then
        err "No g++/c++ on PATH (Verilator --binary needs a C++ compiler; install gcc-c++)"
        return 1
    fi
    if [[ ! -f "$rtl" ]]; then
        err "Missing $rtl"
        return 1
    fi
    info "Verification: Verilator --binary (elaboration smoke, top auteur_fifo) …"
    rm -rf "$objdir"
    mkdir -p "$objdir"
    set +e
    verilator --binary -sv --no-timing -Mdir "$objdir" "$rtl" --top-module auteur_fifo \
        -Wno-fatal -j "$AUTEUR_VERILATOR_JOBS" \
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

verify_auteur_verilator_full_sim() {
    local rtl objdir log exe st
    rtl="$AUTEUR_DIR/hw/auteur_fifo.sv"
    objdir="$VERIFICATION_DIR/verilator_obj_tb_auteur_fifo"
    log="$VERIFICATION_DIR/verilator_sim_auteur_fifo.log"
    exe="$objdir/Vtb_auteur_fifo"
    if ! command_exists verilator; then
        err "Verilator not on PATH"
        return 1
    fi
    if ! auteur_cpp_compiler_ok; then
        err "No g++/c++ on PATH (Verilator full sim needs a C++ compiler)"
        return 1
    fi
    if [[ ! -f "$AUTEUR_TB_SV" ]]; then
        err "Missing harness $AUTEUR_TB_SV"
        return 1
    fi
    if [[ ! -f "$rtl" ]]; then
        err "Missing $rtl"
        return 1
    fi
    info "Verification: Verilator full simulation (tb_auteur_fifo + auteur_fifo) …"
    rm -rf "$objdir"
    mkdir -p "$objdir"
    set +e
    verilator --binary -sv --timing -Mdir "$objdir" "$AUTEUR_TB_SV" "$rtl" \
        --top-module tb_auteur_fifo -Wno-fatal -j "$AUTEUR_VERILATOR_JOBS" \
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
    if ! grep -q "PASS auteur_fifo TB" "$log"; then
        err "Simulation log missing PASS line; see $log"
        return 1
    fi
    ok "Verification: Verilator full simulation OK (log $log)"
    return 0
}

write_auteur_verification_summary() {
    local vf="$VERIFICATION_DIR/verification_summary.txt"
    {
        echo "auteur RTL verification summary (SCORE)"
        echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
        echo ""
        echo "Bender.lock → bender path: ${VERIFY_LOCK_RESULT:-SKIPPED}"
        echo "bender script flist-plus (auteur RTL): ${VERIFY_FLIST_RESULT:-SKIPPED}"
        echo "Verilator --lint-only (hw/auteur_fifo.sv): ${VERIFY_VLINT_RESULT:-SKIPPED}"
        echo "Verilator --binary (elaboration smoke): ${VERIFY_VBIN_RESULT:-SKIPPED}"
        echo "Verilator simulation (tb_auteur_fifo): ${VERIFY_VSIM_RESULT:-SKIPPED}"
        echo ""
        echo "Notes:"
        echo "  Verilator uses module auteur_fifo only; auteur_group is omitted (Verilator generate limits)."
        echo "  Full sim uses scripts/assets/auteur/tb_auteur_fifo.sv (SCORE harness)."
        echo "Logs: $VERIFICATION_DIR/"
    } > "$vf"
    ok "Wrote $vf"
}

run_auteur_verification() {
    VERIFY_LOCK_RESULT=SKIPPED
    VERIFY_FLIST_RESULT=SKIPPED
    VERIFY_VLINT_RESULT=SKIPPED
    VERIFY_VBIN_RESULT=SKIPPED
    VERIFY_VSIM_RESULT=SKIPPED

    mkdir -p "$VERIFICATION_DIR"
    info "Running verification → $VERIFICATION_DIR"

    verify_auteur_bender_lock_paths || return 1
    VERIFY_LOCK_RESULT=PASS

    verify_auteur_bender_flist || return 1
    VERIFY_FLIST_RESULT=PASS

    if [[ "$WITH_VERILATOR_STEPS" == true ]]; then
        verify_auteur_verilator_fifo_lint || return 1
        VERIFY_VLINT_RESULT=PASS

        verify_auteur_verilator_fifo_binary || return 1
        VERIFY_VBIN_RESULT=PASS

        if [[ "$WITH_FULL_SIM" == true ]]; then
            verify_auteur_verilator_full_sim || return 1
            VERIFY_VSIM_RESULT=PASS
        else
            info "Verification: skipping full simulation (--no-full-sim or AUTEUR_FULL_SIM=0)"
        fi
    else
        info "Verification: skipping Verilator steps (--skip-verilator)"
    fi

    write_auteur_verification_summary
}

AUTEUR_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/auteur/$AUTEUR_COMMIT_ID"
VERIFICATION_DIR="$DATASET_DIR/verification"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "AUTEUR_DIR: $AUTEUR_DIR"
info "Commit: $AUTEUR_COMMIT_ID"
info "Dataset: $DATASET_DIR"

if [[ "$VERIFY_ONLY" == true ]]; then
    mkdir -p "$DATASET_DIR"
    if [[ "$VERIFY_ENABLED" != true ]]; then
        warn "--verify-only with --no-verify is a no-op."
        ok "generate_auteur.sh completed (--verify-only)."
        exit 0
    fi
    if [[ ! -d "$AUTEUR_DIR/.bender" ]]; then
        err ".bender missing; run without --verify-only (or --skip-checkout) after checkout"
        exit 1
    fi
    run_auteur_verification || exit 1
    ok "generate_auteur.sh completed (--verify-only)."
    exit 0
fi

pushd "$AUTEUR_DIR" >/dev/null

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

VERIFY_LOCK_RESULT=SKIPPED
VERIFY_FLIST_RESULT=SKIPPED
VERIFY_VLINT_RESULT=SKIPPED
VERIFY_VBIN_RESULT=SKIPPED
VERIFY_VSIM_RESULT=SKIPPED
if [[ "$VERIFY_ENABLED" == true ]]; then
    if [[ "$WITH_VERILATOR_STEPS" == true ]] && ! command_exists verilator; then
        err "verilator not on PATH. Run ./scripts/install_auteur.sh or use --skip-verilator / --no-verify"
        exit 1
    fi
    if [[ "$WITH_VERILATOR_STEPS" == true ]] && ! auteur_cpp_compiler_ok; then
        err "g++/c++ not on PATH (needed for Verilator --binary). Install gcc-c++ or use --skip-verilator"
        exit 1
    fi
    run_auteur_verification || exit 1
else
    warn "Verification skipped (--no-verify)"
fi

info "Copying sources to $BUNDLE_DIR"
mkdir -p "$BUNDLE_DIR"

rsync -a \
    --exclude '.git/' \
    "$AUTEUR_DIR/" "$BUNDLE_DIR/"

SUMMARY="$DATASET_DIR/auteur_summary.txt"
{
    echo "auteur SCORE snapshot (pulp-platform/auteur)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $AUTEUR_DIR"
    echo "Git commit (short): $AUTEUR_COMMIT_ID"
    echo "Git commit (full): $(git -C "$AUTEUR_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender: $(bender --version 2>/dev/null || echo unknown)"
    echo "verilator: $(command_exists verilator && verilator --version 2>/dev/null | head -1 || echo not_on_path)"
    echo ""
    if [[ "$VERIFY_ENABLED" == true ]]; then
        echo "Verification (see ${VERIFICATION_DIR}/verification_summary.txt):"
        echo "  Bender.lock path check: ${VERIFY_LOCK_RESULT:-SKIPPED}"
        echo "  bender flist-plus (auteur): ${VERIFY_FLIST_RESULT:-SKIPPED}"
        echo "  Verilator lint (auteur_fifo): ${VERIFY_VLINT_RESULT:-SKIPPED}"
        echo "  Verilator binary (elaboration): ${VERIFY_VBIN_RESULT:-SKIPPED}"
        echo "  Verilator simulation (testbench): ${VERIFY_VSIM_RESULT:-SKIPPED}"
        echo ""
    fi
    echo "See https://github.com/pulp-platform/auteur and tools/auteur/README.md"
    echo "Bundle path: $BUNDLE_DIR"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_auteur.sh completed."
