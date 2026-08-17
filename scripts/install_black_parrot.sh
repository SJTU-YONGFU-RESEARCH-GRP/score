#!/usr/bin/env bash
# SCORE install for black-parrot/black-parrot — Linux-capable RV64 multicore.
# Shallow clone + limited submodules (basejump_stl, HardFloat). No recursive SDK/bedrock.
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
RELATIVE_SUBMODULE_PATH="tools/black-parrot"
TOOL_DIR="$PROJECT_ROOT/$RELATIVE_SUBMODULE_PATH"
UPSTREAM_URL="https://github.com/black-parrot/black-parrot.git"
INSTALL_SYSTEM_DEPS=true
CHECK_ONLY=false
INSTALL_VERILATOR=true
[[ "${BLACK_PARROT_SKIP_SYSTEM_DEPS:-}" == "1" ]] && INSTALL_SYSTEM_DEPS=false

source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_black_parrot
source "$SCRIPT_DIR/common_submodule_bootstrap.sh"
source "$SCRIPT_DIR/common_simple_rtl.sh"

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]
Initialize tools/black-parrot (https://github.com/black-parrot/black-parrot).
Inits external/basejump_stl and external/HardFloat only (not bedrock / recursive).
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
    [[ -d "$TOOL_DIR/bp_top" ]] || { log_error "Missing $TOOL_DIR/bp_top"; exit 1; }
    log_success "black_parrot present: $(git -C "$TOOL_DIR" rev-parse --short HEAD 2>/dev/null || echo '?')"
    exit 0
fi
if [[ "$INSTALL_SYSTEM_DEPS" == true ]]; then
    score_simple_install_host_deps "$INSTALL_VERILATOR" || log_warning "Host deps install had errors; continuing"
else
    log_info "Skipping system deps"
fi

if [[ ! -d "$TOOL_DIR/.git" ]]; then
    log_info "Shallow-cloning BlackParrot…"
    git clone --depth 1 "$UPSTREAM_URL" "$TOOL_DIR"
else
    score_prepare_tool_checkout "$PROJECT_ROOT" "$RELATIVE_SUBMODULE_PATH" || true
fi

# Limited submodule init: RTL deps only. Do not recurse (ramulator, SDK, etc.).
if [[ -f "$TOOL_DIR/.gitmodules" ]]; then
    log_info "Initializing RTL submodules (basejump_stl, HardFloat; skip bedrock)"
    git -C "$TOOL_DIR" submodule update --init --depth 1 -- external/basejump_stl \
        || log_warning "basejump_stl init failed"
    git -C "$TOOL_DIR" submodule update --init --depth 1 -- external/HardFloat \
        || log_warning "HardFloat init failed"
fi

[[ -d "$TOOL_DIR/bp_top" ]] || { log_error "bp_top missing after checkout"; exit 1; }
log_success "black_parrot ready at $TOOL_DIR ($(git -C "$TOOL_DIR" rev-parse --short HEAD))"
