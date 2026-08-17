#!/usr/bin/env bash
# SCORE install for Wren6991/Hazard3.
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
RELATIVE_SUBMODULE_PATH="tools/hazard3"
TOOL_DIR="$PROJECT_ROOT/$RELATIVE_SUBMODULE_PATH"
INSTALL_SYSTEM_DEPS=true
CHECK_ONLY=false
INSTALL_VERILATOR=true
[[ "${HAZARD3_SKIP_SYSTEM_DEPS:-}" == "1" ]] && INSTALL_SYSTEM_DEPS=false
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_hazard3
source "$SCRIPT_DIR/common_submodule_bootstrap.sh"
source "$SCRIPT_DIR/common_simple_rtl.sh"
show_help() {
    cat << EOF
Usage: $0 [OPTIONS]
Initialize tools/hazard3 (https://github.com/Wren6991/Hazard3).
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
    [[ -d "$TOOL_DIR/hdl" ]] || { log_error "Missing $TOOL_DIR/hdl"; exit 1; }
    log_success "hazard3 OK"; exit 0
fi
[[ "$INSTALL_SYSTEM_DEPS" == true ]] && score_simple_install_host_deps "$INSTALL_VERILATOR" || true
score_prepare_tool_checkout "$PROJECT_ROOT" "$RELATIVE_SUBMODULE_PATH"
# Do not recurse into test/riscv-tests (multi-GB); SCORE only needs hdl/ + example_soc/.
if [[ -f "$TOOL_DIR/.gitmodules" ]]; then
    log_info "Initializing non-test Hazard3 submodules (skipping test/sim trees)..."
    while read -r _key sub_path; do
        [[ -n "$sub_path" ]] || continue
        [[ "$sub_path" == test/* ]] && continue
        git -C "$TOOL_DIR" submodule update --init -- "$sub_path" || log_warning "submodule init failed: $sub_path"
    done < <(git config -f "$TOOL_DIR/.gitmodules" --get-regexp '^submodule\..*\.path$' 2>/dev/null || true)
fi
[[ -d "$TOOL_DIR/hdl" ]] || { log_error "hdl/ missing"; exit 1; }
log_success "hazard3 ready at $TOOL_DIR ($(git -C "$TOOL_DIR" rev-parse --short HEAD))"
