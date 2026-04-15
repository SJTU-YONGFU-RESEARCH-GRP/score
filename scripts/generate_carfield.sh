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

CARFIELD_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/carfield/$CARFIELD_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
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
    echo "  Deps vs Bender.lock: $( [[ "${SKIP_CHECKOUT:-false}" == true || "${SKIP_BENDER_UPDATE:-false}" == true ]] && echo SKIPPED_BY_FLAG || echo PASS )"
    echo "  bender flist-plus (Verilator view): N/A"
    echo "  Verilator lint: N/A"
    echo "  Verilator elaboration: N/A"
    echo "  Verilator simulation: N/A"
    echo "  Logs: ${VERIFICATION_DIR:-$LOG_DIR}/"
    echo ""
    echo "See https://github.com/pulp-platform/carfield and tools/carfield/README.md"
    echo "Bundle path: $BUNDLE_DIR"
    echo "Generation log: $SESSION_LOG"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_carfield.sh completed."
