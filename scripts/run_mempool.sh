#!/usr/bin/env bash
#
# End-to-end MemPool flow for SCORE: submodule → install → generate (Bender checkout + snapshot).
#
# Usage (from repository root):
#   ./scripts/run_mempool.sh
#   ./scripts/run_mempool.sh --no-verilator
#   ./scripts/run_mempool.sh --no-system-deps
#   ./scripts/run_mempool.sh --riscv-isa-sim
#   ./scripts/run_mempool.sh -- --skip-checkout
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
MEMPOOL_SUBMODULE="tools/mempool"
INSTALL_SCRIPT="$SCRIPT_DIR/install_mempool.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_mempool.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
NO_SYSTEM_DEPS=false
INSTALL_VERILATOR=true
INSTALL_RISCV_ISA_SIM=false
GENERATE_EXTRA=()

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[run_mempool]${NC} $*"; }
ok() { echo -e "${GREEN}[run_mempool]${NC} $*"; }
warn() { echo -e "${YELLOW}[run_mempool]${NC} $*"; }
err() { echo -e "${RED}[run_mempool]${NC} $*" >&2; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the full SCORE MemPool pipeline from the repository root:
  1. git submodule update --init --recursive ${MEMPOOL_SUBMODULE}
  2. ${INSTALL_SCRIPT} (Bender + OS packages by default; MemPool-pinned Verilator build by default via --verilator; optional Spike)
  3. ${GENERATE_SCRIPT} (make bender + make update-deps + snapshot; verification ON — Bender file lists per flavor + MemPool Verilator \`--version\` when install/verilator exists)

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1
  --skip-install       Skip step 2 (only submodule + generate)
  --skip-generate      Only submodule + install
  --no-system-deps     Pass --no-system-deps to install
  --no-verilator       Do not pass --verilator to install (skip MemPool pinned Verilator build; long step)
  --verilator          Pass --verilator to install (default; kept for explicit scripts)
  --riscv-isa-sim      Pass --riscv-isa-sim to install (runs upstream make riscv-isa-sim)

  --                   All following arguments are passed only to generate_mempool.sh

Examples:
  $0
  $0 --no-verilator
  $0 --no-system-deps
  $0 -- --no-verify
  $0 --skip-submodule --skip-install -- --verify-only
  $0 -- --allow-system-verilator
  $0 --skip-submodule --skip-install -- --skip-checkout
EOF
}

validate_root() {
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]] || [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run this script from the SCORE repo: cd /path/to/score && ./scripts/run_mempool.sh"
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
        --no-verilator)
            INSTALL_VERILATOR=false
            shift
            ;;
        --verilator)
            INSTALL_VERILATOR=true
            shift
            ;;
        --riscv-isa-sim)
            INSTALL_RISCV_ISA_SIM=true
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
    info "Step 1/3: git submodule update --init --recursive $MEMPOOL_SUBMODULE"
    git submodule update --init --recursive "$MEMPOOL_SUBMODULE"
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_mempool.sh"
    INSTALL_ARGS=()
    if [[ "$NO_SYSTEM_DEPS" == true ]]; then
        INSTALL_ARGS+=(--no-system-deps)
    fi
    if [[ "$INSTALL_VERILATOR" == true ]]; then
        INSTALL_ARGS+=(--verilator)
    fi
    if [[ "$INSTALL_RISCV_ISA_SIM" == true ]]; then
        INSTALL_ARGS+=(--riscv-isa-sim)
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

# Best-effort: load env for the current shell session (generate script also self-sources these)
if [[ -f "$PROJECT_ROOT/scripts/mempool_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/mempool_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

if [[ "$SKIP_GENERATE" != true ]]; then
    if [[ ${#GENERATE_EXTRA[@]} -gt 0 ]]; then
        info "Step 3/3: generate_mempool.sh (extra: ${GENERATE_EXTRA[*]})"
    else
        info "Step 3/3: generate_mempool.sh (bender + snapshot)"
    fi
    bash "$GENERATE_SCRIPT" "${GENERATE_EXTRA[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_mempool.sh completed successfully."
