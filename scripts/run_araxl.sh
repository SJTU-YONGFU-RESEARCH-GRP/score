#!/usr/bin/env bash
#
# End-to-end AraXL flow for SCORE: submodule → install → generate (Bender checkout, snapshot).
#
# Usage (from repository root, i.e. the directory containing tools/, scripts/, datasets/):
#   ./scripts/run_araxl.sh
#   ./scripts/run_araxl.sh --no-system-deps
#   ./scripts/run_araxl.sh --no-verilator
#   ./scripts/run_araxl.sh -- --skip-checkout
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
ARAXL_SUBMODULE="tools/araxl"
TOOL_DIR="$PROJECT_ROOT/$ARAXL_SUBMODULE"
INSTALL_SCRIPT="$SCRIPT_DIR/install_araxl.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_araxl.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
NO_SYSTEM_DEPS=false
NO_VERILATOR=false
WITH_VERILATOR_BUILD_DEPS=true
BUILD_VERILATOR=true
GENERATE_EXTRA=()

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[run_araxl]${NC} $*"; }
ok() { echo -e "${GREEN}[run_araxl]${NC} $*"; }
warn() { echo -e "${YELLOW}[run_araxl]${NC} $*"; }
err() { echo -e "${RED}[run_araxl]${NC} $*" >&2; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the full SCORE araxl (AraXL) pipeline from the repository root:
  1. git submodule update --init --recursive ${ARAXL_SUBMODULE}
  2. ${INSTALL_SCRIPT} (Bender + OS packages; distro Verilator + Verilator build deps by default)
  3. ${GENERATE_SCRIPT} (RTL verify incl. Verilator lint by default + make verilate; upstream Verilator build when needed)

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1 (submodule already initialized)
  --skip-install       Skip step 2 (only submodule + generate)
  --skip-generate      Only submodule + install
  --no-system-deps     Pass --no-system-deps to install (no apt/dnf/brew package step)
  --no-verilator       Pass --no-verilator to install and --skip-verilator-lint to generate (no distro Verilator / lint)
  --with-verilator     Kept for compatibility (distro Verilator is already the default)
  --with-verilator-build-deps
                       Pass to install (default on; redundant)
  --no-verilator-build-deps
                       Pass to install (skip Verilator compile-time OS packages)
  --build-verilator    Pass to generate (default on; redundant)
  --no-build-verilator Pass to generate (skip upstream Verilator build; faster if verilate not needed)

  --                   All following arguments are passed only to generate_araxl.sh

Examples:
  $0
  $0 --no-system-deps
  $0 --no-verilator
  $0 --skip-submodule --skip-install -- --skip-checkout
  $0 -- --bender-update
  $0 -- --skip-verilate
  $0 --no-system-deps --no-verilator-build-deps --no-build-verilator   (minimal / CI-style)
EOF
}

get_commit_id() {
    local repo_path="$1"
    if git -C "$repo_path" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

validate_root() {
    if [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run this script from the SCORE repo: cd /path/to/score && ./scripts/run_araxl.sh"
        exit 1
    fi
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]]; then
        warn "No .gitmodules at repo root (optional); submodule step may be a no-op if paths are missing."
    fi
    if [[ ! -f "$INSTALL_SCRIPT" ]]; then
        err "Missing $INSTALL_SCRIPT"
        exit 1
    fi
    if [[ ! -f "$GENERATE_SCRIPT" ]]; then
        err "Missing $GENERATE_SCRIPT"
        exit 1
    fi
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            show_help
            exit 0
            ;;
        --skip-submodule)
            SKIP_SUBMODULE=true
            shift
            ;;
        --skip-install)
            SKIP_INSTALL=true
            shift
            ;;
        --skip-generate)
            SKIP_GENERATE=true
            shift
            ;;
        --no-system-deps)
            NO_SYSTEM_DEPS=true
            shift
            ;;
        --no-verilator)
            NO_VERILATOR=true
            shift
            ;;
        --with-verilator)
            NO_VERILATOR=false
            shift
            ;;
        --with-verilator-build-deps)
            WITH_VERILATOR_BUILD_DEPS=true
            shift
            ;;
        --no-verilator-build-deps)
            WITH_VERILATOR_BUILD_DEPS=false
            shift
            ;;
        --build-verilator)
            BUILD_VERILATOR=true
            shift
            ;;
        --no-build-verilator)
            BUILD_VERILATOR=false
            shift
            ;;
        --)
            shift
            GENERATE_EXTRA=("$@")
            break
            ;;
        *)
            err "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

cd "$PROJECT_ROOT"
validate_root

if ! git -C "$PROJECT_ROOT" rev-parse --git-dir >/dev/null 2>&1; then
    err "Not a git checkout (no .git). Clone SCORE with git to use submodules."
    exit 1
fi

info "Project root: $PROJECT_ROOT"
if [[ -f /etc/os-release ]]; then
    # shellcheck source=/dev/null
    . /etc/os-release
    info "Host OS: ${PRETTY_NAME:-$NAME} ($(uname -m)); install step picks packages per distro."
elif [[ "$(uname -s)" == "Darwin" ]]; then
    info "Host OS: macOS ($(uname -m)); install step uses Homebrew where applicable."
else
    info "Host OS: $(uname -s) $(uname -m)"
fi

if [[ "$SKIP_SUBMODULE" != true ]]; then
    info "Step 1/3: git submodule update --init --recursive $ARAXL_SUBMODULE"
    git submodule update --init --recursive "$ARAXL_SUBMODULE"
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_araxl.sh"
    INSTALL_ARGS=()
    if [[ "$NO_SYSTEM_DEPS" == true ]]; then
        INSTALL_ARGS+=(--no-system-deps)
    fi
    if [[ "$NO_VERILATOR" == true ]]; then
        INSTALL_ARGS+=(--no-verilator)
    fi
    if [[ "$WITH_VERILATOR_BUILD_DEPS" != true ]]; then
        INSTALL_ARGS+=(--no-verilator-build-deps)
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

if [[ -f "$PROJECT_ROOT/scripts/araxl_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/araxl_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

if [[ "$SKIP_GENERATE" != true ]]; then
    GEN_ARGS=()
    if [[ "$BUILD_VERILATOR" != true ]]; then
        GEN_ARGS+=(--no-build-verilator)
    fi
    GEN_ARGS+=("${GENERATE_EXTRA[@]}")
    if [[ "$NO_VERILATOR" == true ]]; then
        GEN_ARGS+=(--skip-verilator-lint)
    fi
    if [[ ${#GEN_ARGS[@]} -gt 0 ]]; then
        info "Step 3/3: generate_araxl.sh (args: ${GEN_ARGS[*]})"
    else
        info "Step 3/3: generate_araxl.sh (bender checkout + RTL verify + snapshot)"
    fi
    bash "$GENERATE_SCRIPT" "${GEN_ARGS[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_araxl.sh completed successfully."
info "Dataset path for current tools/araxl HEAD: $PROJECT_ROOT/datasets/araxl/$(get_commit_id "$TOOL_DIR")"
