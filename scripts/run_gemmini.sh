#!/usr/bin/env bash
#
# End-to-end Gemmini flow for SCORE: submodule → install → generate.
#
# Usage (from repository root, i.e. the directory containing tools/, scripts/, datasets/):
#   ./scripts/run_gemmini.sh
#   ./scripts/run_gemmini.sh --no-verilator
#   ./scripts/run_gemmini.sh --no-system-deps
#   ./scripts/run_gemmini.sh -- --rtl-only --sequential
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
GEMMINI_SUBMODULE="tools/gemmini"
INSTALL_SCRIPT="$SCRIPT_DIR/install_gemmini.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_gemmini.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
INSTALL_VERILATOR=true
NO_SYSTEM_DEPS=false
INTERACTIVE_INSTALL=false
GENERATE_EXTRA=()

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging run_gemmini

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the full SCORE Gemmini pipeline from the repository root:
  1. git submodule update --init --recursive ${GEMMINI_SUBMODULE}
  2. ${INSTALL_SCRIPT} (Chipyard + toolchain; uses OS-specific packages like install_rocket_chip.sh)
  3. ${GENERATE_SCRIPT} (RTL generation / benchmarks)

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1
  --skip-install       Skip step 2 (only submodule + generate)
  --skip-generate      Only submodule + install
  --no-verilator       Pass --skip-verilator to install
  --no-system-deps     Pass --no-system-deps to install (no apt/dnf; you provide JDK + build tools)
  --interactive-install Do not pass --auto to install (prompt before installing)

  --                   All following arguments are passed only to generate_gemmini.sh

Environment (install / generate):
  SCORE_GEMMINI_WORKSHOP  Chipyard, Miniconda, venv root (default: <repo>/datasets/gemmini/workshop)
  CHIPYARD_GIT_URL        Override Chipyard clone URL (default: https://github.com/ucb-bar/chipyard.git)
  VERILATOR_GIT_URL       Override Verilator source URL when building from source

Examples:
  $0
  $0 --no-verilator
  $0 --no-system-deps
  $0 --skip-submodule --skip-install -- --check
EOF
}

validate_root() {
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]] || [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run this script from the SCORE repo: cd /path/to/score && ./scripts/run_gemmini.sh"
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
        --no-verilator)
            INSTALL_VERILATOR=false
            shift
            ;;
        --no-system-deps)
            NO_SYSTEM_DEPS=true
            shift
            ;;
        --interactive-install)
            INTERACTIVE_INSTALL=true
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
    info "Host OS: ${PRETTY_NAME:-$NAME} ($(uname -m)); install step uses OS family (see install_gemmini.sh)."
elif [[ "$(uname -s)" == "Darwin" ]]; then
    info "Host OS: macOS ($(uname -m)); install step uses Homebrew where applicable."
else
    info "Host OS: $(uname -s) $(uname -m)"
fi

if [[ "$SKIP_SUBMODULE" != true ]]; then
    info "Step 1/3: git submodule update --init --recursive $GEMMINI_SUBMODULE"
    git submodule update --init --recursive "$GEMMINI_SUBMODULE"
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_gemmini.sh"
    INSTALL_ARGS=()
    if [[ "$INTERACTIVE_INSTALL" != true ]]; then
        INSTALL_ARGS+=(--auto)
    fi
    if [[ "$INSTALL_VERILATOR" != true ]]; then
        INSTALL_ARGS+=(--skip-verilator)
    fi
    if [[ "$NO_SYSTEM_DEPS" == true ]]; then
        INSTALL_ARGS+=(--no-system-deps)
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

if [[ -f "$PROJECT_ROOT/setup_gemmini_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/setup_gemmini_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

if [[ "$SKIP_GENERATE" != true ]]; then
    if [[ ${#GENERATE_EXTRA[@]} -gt 0 ]]; then
        info "Step 3/3: generate_gemmini.sh (extra: ${GENERATE_EXTRA[*]})"
    else
        info "Step 3/3: generate_gemmini.sh (defaults)"
    fi
    bash "$GENERATE_SCRIPT" "${GENERATE_EXTRA[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_gemmini.sh completed successfully."
