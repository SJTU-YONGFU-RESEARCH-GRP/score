#!/usr/bin/env bash
#
# End-to-end astral flow for SCORE: submodule → install → generate (Bender checkout, snapshot).
#
# Usage (from repository root, i.e. the directory containing tools/, scripts/, datasets/):
#   ./scripts/run_astral.sh
#   ./scripts/run_astral.sh --no-system-deps
#   ./scripts/run_astral.sh -- --skip-checkout
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
ASTRAL_SUBMODULE="tools/astral"
INSTALL_SCRIPT="$SCRIPT_DIR/install_astral.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_astral.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
NO_SYSTEM_DEPS=false
NO_VERILATOR=false
GENERATE_EXTRA=()

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[run_astral]${NC} $*"; }
ok() { echo -e "${GREEN}[run_astral]${NC} $*"; }
warn() { echo -e "${YELLOW}[run_astral]${NC} $*"; }
err() { echo -e "${RED}[run_astral]${NC} $*" >&2; }

# Match docs/PROMPTS_SHELL.md and run_rocket_chip.sh: gitlink submodules use a .git file, not only a directory.
get_commit_id() {
    local repo_path="$1"
    if git -C "$repo_path" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the full SCORE astral pipeline from the repository root:
  1. git submodule update --init --recursive ${ASTRAL_SUBMODULE}
  2. ${INSTALL_SCRIPT} (Bender + OS packages; Verilator + C++ toolchain by default)
  3. ${GENERATE_SCRIPT} (bender checkout, default verification, snapshot under datasets/astral/...)

Verification (default in generate_astral.sh): Bender.lock path check, bender flist-plus (FPGA profile),
  Verilator lint + Verilator --binary on a common_cells smoke slice (see verification_summary.txt).

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1 (submodule already initialized)
  --skip-install       Skip step 2 (only submodule + generate)
  --skip-generate      Only submodule + install
  --no-system-deps     Pass --no-system-deps to install (no apt/dnf/brew package step)
  --no-verilator       Pass --no-verilator to install and --skip-verilator to generate (no Verilator packages or checks)

  --                   All following arguments are passed only to generate_astral.sh

Examples:
  $0
  $0 --no-system-deps
  $0 --skip-submodule --skip-install -- --skip-checkout
  $0 -- --bender-update
  $0 -- --no-verify
  $0 -- --skip-verilator
  $0 --no-verilator
EOF
}

validate_root() {
    if [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run this script from the SCORE repo: cd /path/to/score && ./scripts/run_astral.sh"
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
    info "Step 1/3: git submodule update --init --recursive $ASTRAL_SUBMODULE"
    git submodule update --init --recursive "$ASTRAL_SUBMODULE"
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_astral.sh"
    INSTALL_ARGS=()
    if [[ "$NO_SYSTEM_DEPS" == true ]]; then
        INSTALL_ARGS+=(--no-system-deps)
    fi
    if [[ "$NO_VERILATOR" == true ]]; then
        INSTALL_ARGS+=(--no-verilator)
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

# Best-effort env (same order as generate_astral.sh: JDK/Scala PATH, then astral-specific exports).
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/astral_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/astral_env.sh"
fi

if [[ "$SKIP_GENERATE" != true ]]; then
    GEN_ARGS=("${GENERATE_EXTRA[@]}")
    if [[ "$NO_VERILATOR" == true ]]; then
        GEN_ARGS+=(--skip-verilator)
    fi
    if [[ ${#GEN_ARGS[@]} -gt 0 ]]; then
        info "Step 3/3: generate_astral.sh (extra: ${GEN_ARGS[*]})"
    else
        info "Step 3/3: generate_astral.sh (bender checkout + snapshot)"
    fi
    bash "$GENERATE_SCRIPT" "${GEN_ARGS[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_astral.sh completed successfully."
TOOL_DIR="$PROJECT_ROOT/tools/astral"
ASTRAL_HEAD_SHORT="$(get_commit_id "$TOOL_DIR")"
info "Dataset path for current tools/astral HEAD: $PROJECT_ROOT/datasets/astral/$ASTRAL_HEAD_SHORT"
info "Summary: $PROJECT_ROOT/datasets/astral/$ASTRAL_HEAD_SHORT/astral_summary.txt"
