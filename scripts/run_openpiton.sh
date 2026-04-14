#!/usr/bin/env bash
#
# End-to-end OpenPiton flow for SCORE: submodule → install → generate (full defaults).
#
# Usage (from repository root):
#   ./scripts/run_openpiton.sh
#   ./scripts/run_openpiton.sh --minimal-install
#   ./scripts/run_openpiton.sh -- --sequential --simulator=vlt
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
OPENPITON_SUBMODULE="tools/openpiton"
INSTALL_SCRIPT="$SCRIPT_DIR/install_openpiton.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_openpiton.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
# Optional: skip heavier install_openpiton components (Verilog toolchain still runs)
MINIMAL_INSTALL=false
GENERATE_EXTRA=()

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging run_openpiton

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the full SCORE OpenPiton pipeline from the repository root:
  1. git submodule update --init --recursive ${OPENPITON_SUBMODULE}
  2. ${INSTALL_SCRIPT} (default: Verilog/SystemC/DRAMSim2/Noculator; GEM5 remains disabled per install script)
  3. ${GENERATE_SCRIPT} (default simulator: Verilator vlt — see generate script for full config list)

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1
  --skip-install       Skip step 2
  --skip-generate      Only submodule + install
  --minimal-install    Pass --no-systemc --no-dramsim2 --no-noculator to install (faster, may break some flows)

  --                   All following arguments are passed only to generate_openpiton.sh

After install, exports for this shell session:
  OPENPITON_ROOT, PITON_ROOT, PATH+=\${OPENPITON_ROOT}/build/tools/bin

Examples:
  $0
  $0 --minimal-install
  $0 --skip-submodule --skip-install -- --check
  $0 -- --sequential --simulator=vlt
EOF
}

validate_root() {
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]] || [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run this script from the SCORE repo: cd /path/to/score && ./scripts/run_openpiton.sh"
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

apply_openpiton_env() {
    export OPENPITON_ROOT="$PROJECT_ROOT/tools/openpiton"
    export PITON_ROOT="$PROJECT_ROOT/tools/openpiton/piton"
    if [[ -d "$OPENPITON_ROOT/build/tools/bin" ]]; then
        export PATH="$PATH:$OPENPITON_ROOT/build/tools/bin"
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
        --minimal-install)
            MINIMAL_INSTALL=true
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

if [[ "$SKIP_SUBMODULE" != true ]]; then
    info "Step 1/3: git submodule update --init --recursive $OPENPITON_SUBMODULE"
    git submodule update --init --recursive "$OPENPITON_SUBMODULE"
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_openpiton.sh"
    INSTALL_ARGS=()
    if [[ "$MINIMAL_INSTALL" == true ]]; then
        INSTALL_ARGS+=(--no-systemc --no-dramsim2 --no-noculator)
        warn "Minimal install: SystemC, DRAMSim2, and Noculator skipped."
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

apply_openpiton_env
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

if [[ "$SKIP_GENERATE" != true ]]; then
    if [[ ${#GENERATE_EXTRA[@]} -gt 0 ]]; then
        info "Step 3/3: generate_openpiton.sh (extra: ${GENERATE_EXTRA[*]})"
    else
        info "Step 3/3: generate_openpiton.sh (defaults: full config set, simulator vlt)"
    fi
    bash "$GENERATE_SCRIPT" "${GENERATE_EXTRA[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_openpiton.sh completed successfully."
