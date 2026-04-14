#!/usr/bin/env bash
#
# End-to-end RV12 flow for SCORE: submodule → install → generate.
#
# Usage (from repository root):
#   ./scripts/run_rv12.sh
#   ./scripts/run_rv12.sh --no-system-deps
#   ./scripts/run_rv12.sh -- --verify-only
#   ./scripts/run_rv12.sh -- --rv12-regression-full      # Verilator lint with --timing (full static profile)
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
RV12_SUBMODULE="tools/rv12"
INSTALL_SCRIPT="$SCRIPT_DIR/install_rv12.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_rv12.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
INSTALL_VERILATOR=true
NO_SYSTEM_DEPS=false
GENERATE_EXTRA=()

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging run_rv12

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the SCORE RV12 pipeline (https://github.com/RoaLogic/RV12):
  1. git submodule update --init --recursive $RV12_SUBMODULE
  2. $INSTALL_SCRIPT
  3. $GENERATE_SCRIPT (Verilator lint in-script; --rv12-regression-full adds --timing)

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1
  --skip-install       Skip step 2
  --skip-generate      Only submodule + install
  --no-verilator       Pass --no-verilator to install (no Verilator package)
  --no-system-deps     Pass --no-system-deps to install

  --                   All following arguments are passed only to generate_rv12.sh

Examples:
  $0
  $0 --no-system-deps
  $0 --skip-submodule --skip-install -- --verify-only
  $0 -- --rv12-regression-full
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
        err "Run from the SCORE repo: cd /path/to/score && ./scripts/run_rv12.sh"
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
    err "Not a git checkout. Clone SCORE with git to use submodules."
    exit 1
fi

info "Project root: $PROJECT_ROOT"
if [[ -f /etc/os-release ]]; then
    # shellcheck source=/dev/null
    . /etc/os-release
    info "Host OS: ${PRETTY_NAME:-unknown} ($(uname -m))"
elif [[ "$(uname -s)" == "Darwin" ]]; then
    info "Host OS: macOS ($(uname -m))"
else
    info "Host OS: $(uname -s) $(uname -m)"
fi

if [[ "$SKIP_SUBMODULE" != true ]]; then
    info "Step 1/3: git submodule update --init --recursive $RV12_SUBMODULE"
    git submodule update --init --recursive "$RV12_SUBMODULE"
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_rv12.sh"
    INSTALL_ARGS=()
    if [[ "$INSTALL_VERILATOR" == true ]]; then
        : # default: install script installs verilator unless --no-verilator
    else
        INSTALL_ARGS+=(--no-verilator)
    fi
    if [[ "$NO_SYSTEM_DEPS" == true ]]; then
        INSTALL_ARGS+=(--no-system-deps)
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

if [[ "$SKIP_GENERATE" != true ]]; then
    if [[ ${#GENERATE_EXTRA[@]} -gt 0 ]]; then
        info "Step 3/3: generate_rv12.sh (extra: ${GENERATE_EXTRA[*]})"
    else
        info "Step 3/3: generate_rv12.sh"
    fi
    bash "$GENERATE_SCRIPT" "${GENERATE_EXTRA[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_rv12.sh completed successfully."
TOOL_DIR="$PROJECT_ROOT/$RV12_SUBMODULE"
info "Dataset path for current RV12 HEAD: $PROJECT_ROOT/datasets/rv12/$(get_commit_id "$TOOL_DIR")"
