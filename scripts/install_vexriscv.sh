#!/usr/bin/env bash
# SCORE install for SpinalHDL/VexRiscv — FPGA-friendly RV32 CPU (SpinalHDL → Verilog).
# Usage: ./scripts/install_vexriscv.sh [--no-system-deps] [--check-only]
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
RELATIVE_SUBMODULE_PATH="tools/vexriscv"
TOOL_DIR="$PROJECT_ROOT/$RELATIVE_SUBMODULE_PATH"
INSTALL_SYSTEM_DEPS=true
CHECK_ONLY=false
INSTALL_VERILATOR=true
[[ "${VEXRISCV_SKIP_SYSTEM_DEPS:-}" == "1" ]] && INSTALL_SYSTEM_DEPS=false

source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_vexriscv
source "$SCRIPT_DIR/common_submodule_bootstrap.sh"
source "$SCRIPT_DIR/common_simple_rtl.sh"

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]
Initialize tools/vexriscv (https://github.com/SpinalHDL/VexRiscv).
Needs Java + sbt on PATH for generate_vexriscv.sh (Rocket Chip SBT is reused if present).
  --check-only  --no-system-deps  --no-verilator
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
    [[ -f "$TOOL_DIR/build.sbt" ]] || { log_error "Missing $TOOL_DIR/build.sbt"; exit 1; }
    log_success "vexriscv present: $(git -C "$TOOL_DIR" rev-parse --short HEAD 2>/dev/null || echo '?')"
    exit 0
fi
if [[ "$INSTALL_SYSTEM_DEPS" == true ]]; then
    score_simple_install_host_deps "$INSTALL_VERILATOR" || log_warning "Host deps install had errors; continuing"
else
    log_info "Skipping system deps"
fi
if [[ ! -d "$TOOL_DIR/.git" ]]; then
    log_info "Shallow-cloning VexRiscv…"
    git clone --depth 1 https://github.com/SpinalHDL/VexRiscv.git "$TOOL_DIR"
else
    score_prepare_tool_checkout "$PROJECT_ROOT" "$RELATIVE_SUBMODULE_PATH" || true
fi
git -C "$TOOL_DIR" submodule update --init || log_warning "Nested submodule init incomplete"
[[ -f "$TOOL_DIR/build.sbt" ]] || { log_error "build.sbt missing after checkout"; exit 1; }
if command -v sbt >/dev/null 2>&1; then
    log_success "sbt on PATH: $(sbt --version 2>/dev/null | grep 'sbt version' | head -1 || echo ok)"
elif [[ -x /opt/sbt/bin/sbt ]]; then
    log_info "sbt not on PATH; generate will use /opt/sbt/bin/sbt"
else
    log_warning "sbt not found; generate will snapshot Scala sources only"
fi
log_success "vexriscv ready at $TOOL_DIR ($(git -C "$TOOL_DIR" rev-parse --short HEAD))"
