#!/usr/bin/env bash
# SCORE install for YosysHQ/picorv32 — size-optimized RV32IMC CPU (+ PicoSoC).
# Usage: ./scripts/install_picorv32.sh [--no-system-deps] [--check-only]
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
RELATIVE_SUBMODULE_PATH="tools/picorv32"
TOOL_DIR="$PROJECT_ROOT/$RELATIVE_SUBMODULE_PATH"
INSTALL_SYSTEM_DEPS=true
CHECK_ONLY=false
INSTALL_VERILATOR=true
[[ "${PICORV32_SKIP_SYSTEM_DEPS:-}" == "1" ]] && INSTALL_SYSTEM_DEPS=false

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_picorv32
# shellcheck source=scripts/common_submodule_bootstrap.sh
source "$SCRIPT_DIR/common_submodule_bootstrap.sh"
# shellcheck source=scripts/common_simple_rtl.sh
source "$SCRIPT_DIR/common_simple_rtl.sh"

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]
Initialize tools/picorv32 (https://github.com/YosysHQ/picorv32).
  --check-only       Verify checkout only
  --no-system-deps   Skip apt/dnf/… (same as PICORV32_SKIP_SYSTEM_DEPS=1)
  --no-verilator     Do not install Verilator packages
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help) show_help; exit 0 ;;
        --check-only) CHECK_ONLY=true; shift ;;
        --no-system-deps) INSTALL_SYSTEM_DEPS=false; shift ;;
        --no-verilator) INSTALL_VERILATOR=false; shift ;;
        *) log_error "Unknown option: $1"; show_help; exit 1 ;;
    esac
done

cd "$PROJECT_ROOT"
if [[ "$CHECK_ONLY" == true ]]; then
    [[ -d "$TOOL_DIR" ]] || { log_error "Missing $TOOL_DIR"; exit 1; }
    log_success "picorv32 present: $(git -C "$TOOL_DIR" rev-parse --short HEAD 2>/dev/null || echo '?')"
    exit 0
fi
if [[ "$INSTALL_SYSTEM_DEPS" == true ]]; then
    score_simple_install_host_deps "$INSTALL_VERILATOR" || log_warning "Host deps install had errors; continuing if tools exist"
else
    log_info "Skipping system deps"
fi
score_prepare_tool_checkout "$PROJECT_ROOT" "$RELATIVE_SUBMODULE_PATH"
[[ -f "$TOOL_DIR/picorv32.v" ]] || { log_error "picorv32.v missing after checkout"; exit 1; }
log_success "picorv32 ready at $TOOL_DIR ($(git -C "$TOOL_DIR" rev-parse --short HEAD))"
