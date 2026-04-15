#!/usr/bin/env bash
#
# Snapshot pulp-platform/carfield RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/carfield/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# Carfield pulls Cheshire / cva6-sdk with nested git submodules. Upstream uses
# git://git.buildroot.net/buildroot, which often fails; this script sets a temporary
# GIT_CONFIG_GLOBAL to rewrite that URL to https://github.com/buildroot/buildroot.git
# for the duration of bender checkout/update only.
#
# Default is `bender checkout`. Optional --bender-update may fail if manifests conflict.
#
# Usage (from repository root):
#   ./scripts/generate_carfield.sh
#   ./scripts/generate_carfield.sh --skip-checkout
#   ./scripts/generate_carfield.sh --bender-update
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
CARFIELD_DIR="$PROJECT_ROOT/tools/carfield"

SKIP_CHECKOUT=false
BENDER_UPDATE=false
VERIFY_ENABLED=true
VERIFY_ONLY=false
WITH_VERILATOR_STEPS=true

# Temp gitconfig path; cleaned up after bender or on exit.
CARFIELD_GITCONFIG_TMP=""

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_carfield

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

cleanup_carfield_git_global() {
    unset GIT_CONFIG_GLOBAL
    if [[ -n "${CARFIELD_GITCONFIG_TMP}" ]] && [[ -f "${CARFIELD_GITCONFIG_TMP}" ]]; then
        rm -f "${CARFIELD_GITCONFIG_TMP}"
    fi
    CARFIELD_GITCONFIG_TMP=""
}

apply_carfield_git_global() {
    cleanup_carfield_git_global
    CARFIELD_GITCONFIG_TMP=$(mktemp)
    cat > "$CARFIELD_GITCONFIG_TMP" << 'EOF'
[url "https://github.com/buildroot/buildroot.git"]
	insteadOf = git://git.buildroot.net/buildroot
EOF
    export GIT_CONFIG_GLOBAL="$CARFIELD_GITCONFIG_TMP"
}

trap cleanup_carfield_git_global EXIT

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/carfield:
  - bender checkout   (default: honor Bender.lock)
  - bender update     (only with --bender-update; may fail if manifests conflict)

Nested submodule clone uses a Buildroot URL rewrite (git:// -> GitHub mirror) during bender only.

Copy into datasets/carfield/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Options:
  -h, --help              Show this help
  --skip-checkout         Do not run bender (reuse existing .bender)
  --bender-update         Run bender update instead of checkout (experimental)
  --no-verify             Skip all verification steps
  --verify-only           Run verification only (no source snapshot copy)
  --skip-verilator        Skip Verilator checks (keep bender checks)

Requires: git, bender on PATH, rsync. Submodule tools/carfield initialized.
Checkout can be large (e.g. Cheshire u-boot / SDK trees). See https://github.com/pulp-platform/carfield
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
if [[ -f "$PROJECT_ROOT/scripts/carfield_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/carfield_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$CARFIELD_DIR" ]]; then
    err "Missing $CARFIELD_DIR — run: git submodule update --init --recursive tools/carfield"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_carfield.sh"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$CARFIELD_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$CARFIELD_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

verify_carfield_bender_lock_paths() {
    local lock="$CARFIELD_DIR/Bender.lock" line pkg out missing
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
        if ( cd "$CARFIELD_DIR" && bender path "$pkg" >/dev/null 2>&1 ); then
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

verify_carfield_bender_flist() {
    local stderr_log script_out st
    stderr_log="$VERIFICATION_DIR/bender_flist_common_cells.stderr.log"
    script_out="$VERIFICATION_DIR/bender_script_common_cells.f"
    info "Verification: bender script flist-plus (package common_cells) …"
    set +e
    (
        cd "$CARFIELD_DIR" || exit 1
        bender script flist-plus -p common_cells -t rtl -t tech_cells_generic_exclude_deprecated \
            > "$script_out" 2> "$stderr_log"
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

verify_carfield_verilator_lint() {
    local script_out log st
    script_out="$VERIFICATION_DIR/bender_script_common_cells.f"
    log="$VERIFICATION_DIR/verilator_lint_common_cells.log"
    if ! command_exists verilator; then
        err "Verilator not on PATH (use --skip-verilator or install verilator)"
        return 1
    fi
    if [[ ! -f "$script_out" ]]; then
        err "Missing $script_out (bender flist step must run first)"
        return 1
    fi
    info "Verification: Verilator --lint-only (common_cells slice, top stream_fifo) …"
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

write_carfield_verification_summary() {
    local vf="$VERIFICATION_DIR/verification_summary.txt"
    {
        echo "carfield RTL verification summary (SCORE)"
        echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
        echo ""
        echo "Bender.lock → bender path: ${VERIFY_LOCK_RESULT:-SKIPPED}"
        echo "bender script flist-plus (common_cells RTL): ${VERIFY_FLIST_RESULT:-SKIPPED}"
        echo "Testbench sources present (.bender): ${VERIFY_TB_RESULT:-SKIPPED}"
        echo "Verilator --lint-only (common_cells / stream_fifo): ${VERIFY_VLINT_RESULT:-SKIPPED}"
        echo "Verilator elaboration: N/A"
        echo "Verilator simulation: N/A"
        echo ""
        echo "Notes:"
        echo "  Verification is currently based on common_cells slice checks."
        echo "  Full SoC Verilator simulation is not part of this SCORE carfield flow."
        echo "Logs: $VERIFICATION_DIR/"
    } > "$vf"
    ok "Wrote $vf"
}

run_carfield_verification() {
    VERIFY_LOCK_RESULT=SKIPPED
    VERIFY_FLIST_RESULT=SKIPPED
    VERIFY_TB_RESULT=SKIPPED
    VERIFY_VLINT_RESULT=SKIPPED

    mkdir -p "$VERIFICATION_DIR"
    info "Running verification → $VERIFICATION_DIR"

    verify_carfield_bender_lock_paths || return 1
    VERIFY_LOCK_RESULT=PASS

    verify_carfield_bender_flist || return 1
    VERIFY_FLIST_RESULT=PASS

    local tb_file
    shopt -s globstar nullglob
    for tb_file in "$CARFIELD_DIR"/.bender/**/*_tb.sv; do
        break
    done
    shopt -u globstar nullglob
    if [[ -n "$tb_file" ]]; then
        VERIFY_TB_RESULT=PASS
        info "Verification: testbench source detected (example: $tb_file)"
    else
        VERIFY_TB_RESULT=FAIL
        err "No testbench sources detected under tools/carfield/.bender"
        return 1
    fi

    if [[ "$WITH_VERILATOR_STEPS" == true ]]; then
        verify_carfield_verilator_lint || return 1
        VERIFY_VLINT_RESULT=PASS
    else
        info "Verification: skipping Verilator checks (--skip-verilator)"
    fi

    write_carfield_verification_summary
}

CARFIELD_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/carfield/$CARFIELD_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
VERIFICATION_DIR="$DATASET_DIR/verification"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "CARFIELD_DIR: $CARFIELD_DIR"
info "Commit: $CARFIELD_COMMIT_ID"
info "Dataset: $DATASET_DIR"

pushd "$CARFIELD_DIR" >/dev/null

if [[ "$SKIP_CHECKOUT" != true ]]; then
    apply_carfield_git_global
    if [[ "$BENDER_UPDATE" == true ]]; then
        warn "Running bender update (may fail if dependency graphs conflict)"
        bender update
    else
        info "Running bender checkout (Bender.lock)"
        bender checkout
    fi
    cleanup_carfield_git_global
else
    warn "Skipped bender checkout/update"
    if [[ ! -d .bender ]]; then
        err ".bender missing; run without --skip-checkout first"
        exit 1
    fi
fi

popd >/dev/null

if [[ "$VERIFY_ONLY" == true ]]; then
    if [[ "$VERIFY_ENABLED" != true ]]; then
        warn "--verify-only with --no-verify is a no-op."
        ok "generate_carfield.sh completed (--verify-only)."
        exit 0
    fi
    if [[ ! -d "$CARFIELD_DIR/.bender" ]]; then
        err ".bender missing; run without --verify-only (or --skip-checkout) after checkout"
        exit 1
    fi
    run_carfield_verification || exit 1
    ok "generate_carfield.sh completed (--verify-only)."
    exit 0
fi

VERIFY_LOCK_RESULT=SKIPPED
VERIFY_FLIST_RESULT=SKIPPED
VERIFY_VLINT_RESULT=SKIPPED
if [[ "$VERIFY_ENABLED" == true ]]; then
    run_carfield_verification || exit 1
else
    warn "Verification skipped (--no-verify)"
fi

info "Copying sources to $BUNDLE_DIR"
mkdir -p "$BUNDLE_DIR"

rsync -a \
    --exclude '.git/' \
    "$CARFIELD_DIR/" "$BUNDLE_DIR/"

SUMMARY="$DATASET_DIR/carfield_summary.txt"
{
    echo "carfield SCORE snapshot (pulp-platform/carfield)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $CARFIELD_DIR"
    echo "Git commit (short): $CARFIELD_COMMIT_ID"
    echo "Git commit (full): $(git -C "$CARFIELD_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender (PATH): $(bender --version 2>/dev/null || echo unknown)"
    echo ""
    echo "Verification:"
    echo "  Deps vs Bender.lock: ${VERIFY_LOCK_RESULT:-SKIPPED}"
    echo "  bender flist-plus (Verilator view): ${VERIFY_FLIST_RESULT:-SKIPPED}"
    echo "  Verilator lint: ${VERIFY_VLINT_RESULT:-SKIPPED}"
    echo "  Verilator elaboration: N/A"
    echo "  Verilator simulation: N/A"
    echo "  Logs: $VERIFICATION_DIR/"
    echo ""
    echo "See https://github.com/pulp-platform/carfield and tools/carfield/README.md"
    echo "Bundle path: $BUNDLE_DIR"
    echo "Generation log: $SESSION_LOG"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_carfield.sh completed."
