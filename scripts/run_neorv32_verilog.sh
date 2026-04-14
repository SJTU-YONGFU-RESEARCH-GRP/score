#!/usr/bin/env bash
#
# End-to-end NEORV32 Verilog flow for SCORE (same pattern as run_rocket_chip.sh):
#   install_neorv32_verilog.sh → generate_neorv32_verilog.sh
#
# For VHDL-only datasets, use scripts/run_neorv32_vhdl.sh instead.
#
# tools/neorv32-verilog is cloned/updated by install_neorv32_verilog.sh (not a SCORE submodule).
#
# Usage (from repository root):
#   ./scripts/run_neorv32_verilog.sh
#   ./scripts/run_neorv32_verilog.sh --skip-install
#   ./scripts/run_neorv32_verilog.sh -- --verify
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
NEORV32_VERILOG_DIR="$PROJECT_ROOT/tools/neorv32-verilog"
INSTALL_SCRIPT="$SCRIPT_DIR/install_neorv32_verilog.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_neorv32_verilog.sh"

SKIP_INSTALL=false
SKIP_GENERATE=false
INSTALL_EXTRA=()
GENERATE_EXTRA=()

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging run_neorv32_verilog

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

NEORV32 Verilog pipeline — datasets/neorv32-verilog/… (GHDL synthesis from VHDL).
(For VHDL-only layout under datasets/neorv32-vhdl/…, use scripts/run_neorv32_vhdl.sh.)

Steps:
  1. ${INSTALL_SCRIPT} (tools/neorv32 submodule, GHDL/Icarus, clone/update ${NEORV32_VERILOG_DIR})
  2. ${GENERATE_SCRIPT} (all Verilog conversion variants)

Environment:
  NEORV32_VERILOG_URL   Clone URL for neorv32-verilog (passed to install)

Options:
  -h, --help           Show this help
  --skip-bootstrap     Deprecated (ignored); install owns neorv32-verilog clone/update
  --skip-install       Skip step 1 (${NEORV32_VERILOG_DIR} must already exist)
  --skip-generate      Only install

  --install-jobs N     Pass --jobs N to install_neorv32_verilog.sh
  --skip-install-ghdl  Pass --skip-ghdl to install
  --skip-install-iverilog
                       Pass --skip-iverilog to install

  --                   Remaining arguments go to generate_neorv32_verilog.sh

Examples:
  $0
  $0 --skip-install
  $0 -- --verify
  $0 -- --check

See also: ./scripts/run_neorv32_vhdl.sh
EOF
}

validate_root() {
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]] || [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run from the SCORE repo: cd /path/to/score && ./scripts/run_neorv32_verilog.sh"
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
        --skip-bootstrap)
            warn "--skip-bootstrap is deprecated; install_neorv32_verilog.sh prepares neorv32-verilog. Ignoring."
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
    err "Not a git checkout (no .git). Clone SCORE with git."
    exit 1
fi

info "NEORV32 Verilog pipeline — project root: $PROJECT_ROOT"

if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 1/2: install_neorv32_verilog.sh"
    bash "$INSTALL_SCRIPT" "${INSTALL_EXTRA[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
    if [[ ! -d "$NEORV32_VERILOG_DIR/neorv32" ]]; then
        err "Missing NEORV32-Verilog tree: $NEORV32_VERILOG_DIR (run without --skip-install first)"
        exit 1
    fi
fi

apply_neorv32_env
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

if [[ "$SKIP_GENERATE" != true ]]; then
    if [[ ${#GENERATE_EXTRA[@]} -gt 0 ]]; then
        info "Step 2/2: generate_neorv32_verilog.sh ${GENERATE_EXTRA[*]}"
    else
        info "Step 2/2: generate_neorv32_verilog.sh"
    fi
    bash "$GENERATE_SCRIPT" "${GENERATE_EXTRA[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "NEORV32 Verilog pipeline finished (run_neorv32_verilog.sh)."
