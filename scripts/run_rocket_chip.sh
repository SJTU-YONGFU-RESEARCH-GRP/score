#!/usr/bin/env bash
#
# End-to-end Rocket Chip flow for SCORE: submodule → install → generate (full defaults).
#
# Usage (from repository root, i.e. the directory containing tools/, scripts/, datasets/):
#   ./scripts/run_rocket_chip.sh
#   ./scripts/run_rocket_chip.sh --no-verilator
#   ./scripts/run_rocket_chip.sh -- --jobs 2 --riscv-isa-smoke
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
ROCKET_SUBMODULE="tools/rocket-chip"
INSTALL_SCRIPT="$SCRIPT_DIR/install_rocket_chip.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_rocket_chip.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
INSTALL_VERILATOR=true
NO_SYSTEM_DEPS=false
GENERATE_EXTRA=()

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[run_rocket_chip]${NC} $*"; }
ok() { echo -e "${GREEN}[run_rocket_chip]${NC} $*"; }
warn() { echo -e "${YELLOW}[run_rocket_chip]${NC} $*"; }
err() { echo -e "${RED}[run_rocket_chip]${NC} $*" >&2; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the full SCORE Rocket Chip pipeline from the repository root:
  1. git submodule update --init --recursive ${ROCKET_SUBMODULE}
  2. ${INSTALL_SCRIPT} (full install; Verilator on by default)
  3. ${GENERATE_SCRIPT} (full generation: verify, testbenches, default config set)

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1 (submodule already initialized)
  --skip-install       Skip step 2 (only submodule + generate)
  --skip-generate      Only submodule + install
  --no-verilator       Do not pass --verilator to install (no Verilator build/install)
  --no-system-deps     Pass --no-system-deps to install (no apt/dnf; need JDK + build tools)

  --                   All following arguments are passed only to generate_rocket_chip.sh

Examples:
  $0
  $0 --no-verilator
  $0 --skip-submodule --skip-install -- --verify-only
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
        err "Run this script from the SCORE repo: cd /path/to/score && ./scripts/run_rocket_chip.sh"
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
        --no-verilator)
            INSTALL_VERILATOR=false
            shift
            ;;
        --no-system-deps)
            NO_SYSTEM_DEPS=true
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

# --- Step 1: submodules ---
if [[ "$SKIP_SUBMODULE" != true ]]; then
    info "Step 1/3: git submodule update --init --recursive $ROCKET_SUBMODULE"
    git submodule update --init --recursive "$ROCKET_SUBMODULE"
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

# --- Step 2: install ---
if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_rocket_chip.sh (full install)"
    INSTALL_ARGS=()
    if [[ "$INSTALL_VERILATOR" == true ]]; then
        INSTALL_ARGS+=(--verilator)
    fi
    if [[ "$NO_SYSTEM_DEPS" == true ]]; then
        INSTALL_ARGS+=(--no-system-deps)
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

# Best-effort: load env for the current shell session (generate script also self-sources these)
if [[ -f "$PROJECT_ROOT/scripts/rocket_chip_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/rocket_chip_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

# --- Step 3: generate ---
if [[ "$SKIP_GENERATE" != true ]]; then
    if [[ ${#GENERATE_EXTRA[@]} -gt 0 ]]; then
        info "Step 3/3: generate_rocket_chip.sh (extra: ${GENERATE_EXTRA[*]})"
    else
        info "Step 3/3: generate_rocket_chip.sh (defaults: verify, testbenches, default configs)"
    fi
    bash "$GENERATE_SCRIPT" "${GENERATE_EXTRA[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_rocket_chip.sh completed successfully."
TOOL_DIR="$PROJECT_ROOT/tools/rocket-chip"
info "Dataset path for current rocket-chip HEAD: $PROJECT_ROOT/datasets/rocket-chip/$(get_commit_id "$TOOL_DIR")"
