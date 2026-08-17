#!/usr/bin/env bash
# SCORE install for syntacore/scr1.
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
RELATIVE_SUBMODULE_PATH="tools/scr1"
TOOL_DIR="$PROJECT_ROOT/$RELATIVE_SUBMODULE_PATH"
INSTALL_SYSTEM_DEPS=true
CHECK_ONLY=false
INSTALL_VERILATOR=true
[[ "${SCR1_SKIP_SYSTEM_DEPS:-}" == "1" ]] && INSTALL_SYSTEM_DEPS=false
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_scr1
source "$SCRIPT_DIR/common_submodule_bootstrap.sh"
source "$SCRIPT_DIR/common_simple_rtl.sh"
show_help() {
    cat << EOF
Usage: $0 [OPTIONS]
Initialize tools/scr1 (https://github.com/syntacore/scr1).
  --check-only  --no-system-deps  --no-verilator
EOF
}
while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help) show_help; exit 0 ;;
        --check-only) CHECK_ONLY=true; shift ;;
        --no-system-deps) INSTALL_SYSTEM_DEPS=false; shift ;;
        --no-verilator) INSTALL_VERILATOR=false; shift ;;
        *) log_error "Unknown option: $1"; exit 1 ;;
    esac
done
cd "$PROJECT_ROOT"
if [[ "$CHECK_ONLY" == true ]]; then
    [[ -d "$TOOL_DIR/src" ]] || { log_error "Missing $TOOL_DIR/src"; exit 1; }
    log_success "scr1 OK"; exit 0
fi
[[ "$INSTALL_SYSTEM_DEPS" == true ]] && score_simple_install_host_deps "$INSTALL_VERILATOR" || true
score_prepare_tool_checkout "$PROJECT_ROOT" "$RELATIVE_SUBMODULE_PATH"
git -C "$TOOL_DIR" submodule update --init --recursive || log_warning "Nested submodule init incomplete"
[[ -d "$TOOL_DIR/src" ]] || { log_error "src/ missing"; exit 1; }
log_success "scr1 ready at $TOOL_DIR ($(git -C "$TOOL_DIR" rev-parse --short HEAD))"
