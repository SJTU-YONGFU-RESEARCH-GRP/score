#!/usr/bin/env bash
#
# HERO RTL / build-script generation (hardware tree).
# Default "full" run refreshes Bender IPs and regenerates Questa compile scripts (matches install_hero tests).
#
# Usage (from repository root):
#   ./scripts/generate_hero.sh
#   ./scripts/generate_hero.sh --skip-bender-update
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
HERO_DIR="$PROJECT_ROOT/tools/hero"
HERO_HW="$HERO_DIR/hardware"

SKIP_BENDER_UPDATE=false

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_hero

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Generate HERO hardware build artifacts (Bender dependencies + vsim/compile.tcl).

Options:
  -h, --help              Show this help
  --skip-bender-update    Skip ./bender update (only run make vsim/compile.tcl)

Environment:
  Source $PROJECT_ROOT/setup_hero_env.sh before running if PATH is not already set.
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            show_help
            exit 0
            ;;
        --skip-bender-update)
            SKIP_BENDER_UPDATE=true
            shift
            ;;
        *)
            err "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

if [[ ! -d "$HERO_HW" ]]; then
    err "HERO hardware directory not found: $HERO_HW"
    err "Initialize the submodule: git submodule update --init tools/hero && bash scripts/hero_submodule_remotes.sh"
    exit 1
fi

if [[ -f "$PROJECT_ROOT/setup_hero_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/setup_hero_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

cd "$HERO_HW"

if [[ ! -x ./bender ]]; then
    info "Local bender not present; running scripts/hero_hardware_bender_install.sh"
    bash "$SCRIPT_DIR/hero_hardware_bender_install.sh" "$HERO_HW"
fi

if [[ ! -x ./bender ]]; then
    err "No executable ./bender in $HERO_HW (run install_hero.sh or scripts/hero_hardware_bender_install.sh)"
    exit 1
fi

if [[ "$SKIP_BENDER_UPDATE" != true ]]; then
    info "Running ./bender update"
    ./bender update
else
    warn "Skipped ./bender update."
fi

info "Running make vsim/compile.tcl"
make vsim/compile.tcl

ok "HERO generation finished."
