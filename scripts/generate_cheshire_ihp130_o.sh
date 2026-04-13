#!/usr/bin/env bash
#
# Snapshot pulp-platform/cheshire-ihp130-o RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/cheshire_ihp130_o/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# This design depends on Cheshire with nested git submodules. Upstream may use
# git://git.buildroot.net/buildroot, which often fails; this script sets a temporary
# GIT_CONFIG_GLOBAL to rewrite that URL to https://github.com/buildroot/buildroot.git
# for the duration of bender checkout/update only.
#
# Default is `bender checkout`. Optional --bender-update may fail if manifests conflict.
#
# Usage (from repository root):
#   ./scripts/generate_cheshire_ihp130_o.sh
#   ./scripts/generate_cheshire_ihp130_o.sh --skip-checkout
#   ./scripts/generate_cheshire_ihp130_o.sh --bender-update
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
CHESHIRE_IHP130_O_DIR="$PROJECT_ROOT/tools/cheshire-ihp130-o"

SKIP_CHECKOUT=false
BENDER_UPDATE=false

# Temp gitconfig path; cleaned up after bender or on exit.
CHESHIRE_IHP130_O_GITCONFIG_TMP=""

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[generate_cheshire_ihp130_o]${NC} $*"; }
ok() { echo -e "${GREEN}[generate_cheshire_ihp130_o]${NC} $*"; }
warn() { echo -e "${YELLOW}[generate_cheshire_ihp130_o]${NC} $*"; }
err() { echo -e "${RED}[generate_cheshire_ihp130_o]${NC} $*" >&2; }

command_exists() { command -v "$1" >/dev/null 2>&1; }

cleanup_cheshire_ihp130_o_git_global() {
    unset GIT_CONFIG_GLOBAL
    if [[ -n "${CHESHIRE_IHP130_O_GITCONFIG_TMP}" ]] && [[ -f "${CHESHIRE_IHP130_O_GITCONFIG_TMP}" ]]; then
        rm -f "${CHESHIRE_IHP130_O_GITCONFIG_TMP}"
    fi
    CHESHIRE_IHP130_O_GITCONFIG_TMP=""
}

apply_cheshire_ihp130_o_git_global() {
    cleanup_cheshire_ihp130_o_git_global
    CHESHIRE_IHP130_O_GITCONFIG_TMP=$(mktemp)
    cat > "$CHESHIRE_IHP130_O_GITCONFIG_TMP" << 'EOF'
[url "https://github.com/buildroot/buildroot.git"]
	insteadOf = git://git.buildroot.net/buildroot
EOF
    export GIT_CONFIG_GLOBAL="$CHESHIRE_IHP130_O_GITCONFIG_TMP"
}

trap cleanup_cheshire_ihp130_o_git_global EXIT

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/cheshire-ihp130-o:
  - bender checkout   (default: honor Bender.lock)
  - bender update     (only with --bender-update; may fail if manifests conflict)

Nested submodule clone uses a Buildroot URL rewrite (git:// -> GitHub mirror) during bender only.

Copy into datasets/cheshire_ihp130_o/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Options:
  -h, --help              Show this help
  --skip-checkout         Do not run bender (reuse existing .bender)
  --bender-update         Run bender update instead of checkout (experimental)

Requires: git, bender on PATH, rsync. Submodule tools/cheshire-ihp130-o initialized.
Checkout can be large (Cheshire / SDK trees). See https://github.com/pulp-platform/cheshire-ihp130-o
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
if [[ -f "$PROJECT_ROOT/scripts/cheshire_ihp130_o_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/cheshire_ihp130_o_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$CHESHIRE_IHP130_O_DIR" ]]; then
    err "Missing $CHESHIRE_IHP130_O_DIR — run: git submodule update --init --recursive tools/cheshire-ihp130-o"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_cheshire_ihp130_o.sh"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$CHESHIRE_IHP130_O_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$CHESHIRE_IHP130_O_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

CHESHIRE_IHP130_O_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/cheshire_ihp130_o/$CHESHIRE_IHP130_O_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "CHESHIRE_IHP130_O_DIR: $CHESHIRE_IHP130_O_DIR"
info "Commit: $CHESHIRE_IHP130_O_COMMIT_ID"
info "Dataset: $DATASET_DIR"

pushd "$CHESHIRE_IHP130_O_DIR" >/dev/null

if [[ "$SKIP_CHECKOUT" != true ]]; then
    apply_cheshire_ihp130_o_git_global
    if [[ "$BENDER_UPDATE" == true ]]; then
        warn "Running bender update (may fail if dependency graphs conflict)"
        bender update
    else
        info "Running bender checkout (Bender.lock)"
        bender checkout
    fi
    cleanup_cheshire_ihp130_o_git_global
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
    "$CHESHIRE_IHP130_O_DIR/" "$BUNDLE_DIR/"

SUMMARY="$DATASET_DIR/cheshire_ihp130_o_summary.txt"
{
    echo "cheshire_ihp130_o SCORE snapshot"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $CHESHIRE_IHP130_O_DIR"
    echo "Git commit (short): $CHESHIRE_IHP130_O_COMMIT_ID"
    echo "Git commit (full): $(git -C "$CHESHIRE_IHP130_O_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender: $(bender --version 2>/dev/null || echo unknown)"
    echo ""
    echo "See https://github.com/pulp-platform/cheshire-ihp130-o and tools/cheshire-ihp130-o/README.md"
    echo "Bundle path: $BUNDLE_DIR"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_cheshire_ihp130_o.sh completed."
