#!/usr/bin/env bash
#
# End-to-end Spatz flow for SCORE: submodule → install → generate (Bender checkout + snapshot).
#
# Usage (from repository root):
#   ./scripts/run_spatz.sh
#   ./scripts/run_spatz.sh --no-system-deps
#   ./scripts/run_spatz.sh --no-verify-rtl
#   ./scripts/run_spatz.sh -- --skip-checkout
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SPATZ_SUBMODULE="tools/spatz"
INSTALL_SCRIPT="$SCRIPT_DIR/install_spatz.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_spatz.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
NO_SYSTEM_DEPS=false
NO_VERIFY_RTL=false
GENERATE_EXTRA=()

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[run_spatz]${NC} $*"; }
ok() { echo -e "${GREEN}[run_spatz]${NC} $*"; }
warn() { echo -e "${YELLOW}[run_spatz]${NC} $*"; }
err() { echo -e "${RED}[run_spatz]${NC} $*" >&2; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the full SCORE Spatz pipeline from the repository root:
  1. git submodule update --init --recursive ${SPATZ_SUBMODULE}
  2. ${INSTALL_SCRIPT} (optional global Bender + OS packages)
  3. ${GENERATE_SCRIPT} (make bender + bender checkout + RTL Verilator lint by default + snapshot)

  Pass-through to generate_spatz.sh after --, e.g.  $0 -- --verify-rtl=verilate

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1
  --skip-install       Skip step 2 (only submodule + generate)
  --skip-generate      Only submodule + install
  --no-system-deps     Pass --no-system-deps to install
  --no-verify-rtl      Pass --no-verify-rtl to generate (skip default RTL lint)

  --                   All following arguments are passed only to generate_spatz.sh

Examples:
  $0
  $0 --no-system-deps
  $0 --no-verify-rtl
  $0 --skip-submodule --skip-install -- --skip-checkout
EOF
}

validate_root() {
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]] || [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run this script from the SCORE repo: cd /path/to/score && ./scripts/run_spatz.sh"
        exit 1
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
        --no-verify-rtl)
            NO_VERIFY_RTL=true
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
    info "Step 1/3: git submodule update --init --recursive $SPATZ_SUBMODULE"
    git submodule update --init --recursive "$SPATZ_SUBMODULE"
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_spatz.sh"
    INSTALL_ARGS=()
    if [[ "$NO_SYSTEM_DEPS" == true ]]; then
        INSTALL_ARGS+=(--no-system-deps)
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

if [[ -f "$PROJECT_ROOT/scripts/spatz_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/spatz_env.sh"
fi

if [[ "$SKIP_GENERATE" != true ]]; then
    GEN_ARGS=("${GENERATE_EXTRA[@]}")
    if [[ "$NO_VERIFY_RTL" == true ]]; then
        GEN_ARGS=(--no-verify-rtl "${GEN_ARGS[@]}")
    fi
    if [[ ${#GEN_ARGS[@]} -gt 0 ]]; then
        info "Step 3/3: generate_spatz.sh (args: ${GEN_ARGS[*]})"
    else
        info "Step 3/3: generate_spatz.sh (bender + RTL lint + snapshot)"
    fi
    bash "$GENERATE_SCRIPT" "${GEN_ARGS[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_spatz.sh completed successfully."
