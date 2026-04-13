#!/usr/bin/env bash
#
# End-to-end NEORV32 VHDL flow for SCORE (same pattern as run_rocket_chip.sh):
#   install_neorv32_vhdl.sh → generate_neorv32_vhdl.sh
#
# For VHDL→Verilog (GHDL synthesis), use scripts/run_neorv32_verilog.sh instead.
#
# Usage (from repository root):
#   ./scripts/run_neorv32_vhdl.sh
#   ./scripts/run_neorv32_vhdl.sh --skip-install
#   ./scripts/run_neorv32_vhdl.sh --skip-verify   # organize only (no GHDL RTL checks)
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
NEORV32_SUBMODULE="tools/neorv32"
INSTALL_SCRIPT="$SCRIPT_DIR/install_neorv32_vhdl.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_neorv32_vhdl.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
# Pass --verify to generate_neorv32_vhdl.sh unless --skip-verify (GHDL checks on organized RTL).
RUN_GENERATE_VERIFY=true
INSTALL_EXTRA=()
GENERATE_EXTRA=()

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[run_neorv32_vhdl]${NC} $*"; }
ok() { echo -e "${GREEN}[run_neorv32_vhdl]${NC} $*"; }
warn() { echo -e "${YELLOW}[run_neorv32_vhdl]${NC} $*"; }
err() { echo -e "${RED}[run_neorv32_vhdl]${NC} $*" >&2; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

NEORV32 VHDL pipeline — organizes VHDL from tools/neorv32 into datasets/neorv32-vhdl/<commit>/…
(For Verilog output, use scripts/run_neorv32_verilog.sh.)

Steps:
  1. ${INSTALL_SCRIPT} (OS packages, ${NEORV32_SUBMODULE}, GHDL/Icarus; see CHECKLIST2.md)
  2. ${GENERATE_SCRIPT} (full RTL layout; --verify by default for GHDL RTL checks)

Options:
  -h, --help           Show this help
  --skip-submodule     Pass --skip-neorv32-submodule to install (skip tools/neorv32 init)
  --skip-install       Skip install; if not combined with --skip-submodule, runs install with --only-neorv32-submodule
  --skip-generate      Only install
  --skip-verify        Do not pass --verify to generate (faster; layout only)

  --install-jobs N     Pass --jobs N to install_neorv32_vhdl.sh
  --skip-install-ghdl  Pass --skip-ghdl to install
  --skip-install-iverilog
                       Pass --skip-iverilog to install

  --                   Remaining args go to generate (after --verify when enabled)

Examples:
  $0
  $0 --skip-install
  $0 --skip-verify
  $0 --skip-install -- --check

After install, tools on PATH:
  source ${PROJECT_ROOT}/scripts/neorv32_env.sh

See also: ./scripts/run_neorv32_verilog.sh
EOF
}

validate_root() {
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]] || [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run from the SCORE repo: cd /path/to/score && ./scripts/run_neorv32_vhdl.sh"
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

apply_neorv32_env() {
    if [[ -f "$PROJECT_ROOT/scripts/neorv32_env.sh" ]]; then
        # shellcheck source=/dev/null
        source "$PROJECT_ROOT/scripts/neorv32_env.sh"
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
            INSTALL_EXTRA+=(--skip-neorv32-submodule)
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
        --skip-verify)
            RUN_GENERATE_VERIFY=false
            shift
            ;;
        --install-jobs)
            INSTALL_EXTRA+=(--jobs "$2")
            shift 2
            ;;
        --skip-install-ghdl)
            INSTALL_EXTRA+=(--skip-ghdl)
            shift
            ;;
        --skip-install-iverilog)
            INSTALL_EXTRA+=(--skip-iverilog)
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

info "NEORV32 VHDL pipeline — project root: $PROJECT_ROOT"
if [[ -f /etc/os-release ]]; then
    # shellcheck source=/dev/null
    . /etc/os-release
    info "Host OS: ${PRETTY_NAME:-$NAME} ($(uname -m)); install_neorv32_vhdl.sh selects packages per distro."
elif [[ "$(uname -s)" == "Darwin" ]]; then
    info "Host OS: macOS ($(uname -m)); install uses Homebrew where applicable."
else
    info "Host OS: $(uname -s) $(uname -m)"
fi

if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 1/2: install_neorv32_vhdl.sh"
    bash "$INSTALL_SCRIPT" "${INSTALL_EXTRA[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
    if [[ "$SKIP_SUBMODULE" != true ]]; then
        info "Refreshing $NEORV32_SUBMODULE via install (--only-neorv32-submodule)"
        bash "$INSTALL_SCRIPT" --only-neorv32-submodule "${INSTALL_EXTRA[@]}"
        ok "NEORV32 submodule ready."
    fi
fi

apply_neorv32_env
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

if [[ "$SKIP_GENERATE" != true ]]; then
    generate_args=()
    if [[ "$RUN_GENERATE_VERIFY" == true ]]; then
        _extra_has_verify=false
        for _a in "${GENERATE_EXTRA[@]}"; do
            if [[ "$_a" == --verify ]]; then
                _extra_has_verify=true
                break
            fi
        done
        if [[ "$_extra_has_verify" == false ]]; then
            generate_args+=(--verify)
        fi
    fi
    generate_args+=("${GENERATE_EXTRA[@]}")
    if [[ ${#GENERATE_EXTRA[@]} -gt 0 ]]; then
        info "Step 2/2: generate_neorv32_vhdl.sh (${generate_args[*]})"
    elif [[ "$RUN_GENERATE_VERIFY" == true ]]; then
        info "Step 2/2: generate_neorv32_vhdl.sh (--verify; use --skip-verify for layout only)"
    else
        info "Step 2/2: generate_neorv32_vhdl.sh (verify skipped)"
    fi
    bash "$GENERATE_SCRIPT" "${generate_args[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "NEORV32 VHDL pipeline finished (run_neorv32_vhdl.sh)."
