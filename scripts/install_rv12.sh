#!/usr/bin/env bash
#
# Install host dependencies and initialize the Roa Logic RV12 submodule for SCORE.
#
# Upstream: https://github.com/RoaLogic/RV12 — SystemVerilog RISC-V core; nested
# submodules: submodules/ahb3lite_pkg, submodules/memory (run recursive init).
# RTL is hand-written (no Chisel). generate_rv12.sh runs Verilator lint from that script only
# (no Makefile or ModelSim). --rv12-regression-full adds Verilator --timing to the lint pass.
#
# Usage (from SCORE repository root):
#   ./scripts/install_rv12.sh
#   ./scripts/install_rv12.sh --check-only
#   ./scripts/install_rv12.sh --no-system-deps
#
# If sudo times out or is unavailable, either install git/gcc/g++/make (and Verilator) yourself
# and use --no-system-deps, or re-run: the script will try to continue when those tools exist.
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
RELATIVE_SUBMODULE_PATH="tools/rv12"
TOOL_DIR="$PROJECT_ROOT/$RELATIVE_SUBMODULE_PATH"
LOG_DIR="$PROJECT_ROOT/logs/rv12_install"

INSTALL_SYSTEM_DEPS=true
CHECK_ONLY=false
INSTALL_VERILATOR=true
DEBUG_MODE=false

if [[ "${RV12_SKIP_SYSTEM_DEPS:-}" == "1" ]]; then
    INSTALL_SYSTEM_DEPS=false
fi

mkdir -p "$LOG_DIR"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_rv12 rv12_install
INSTALL_LOG="$SCRIPT_LOG_FILE"
# shellcheck source=scripts/common_submodule_bootstrap.sh
source "$SCRIPT_DIR/common_submodule_bootstrap.sh"

log() {
    log_info "$@"
}

command_exists() {
    command -v "$1" >/dev/null 2>&1
}

detect_os() {
    case "${OSTYPE:-}" in
        darwin*)
            echo "macos"
            return
            ;;
    esac

    if [[ -f /etc/os-release ]]; then
        # shellcheck source=/dev/null
        . /etc/os-release
        local id="${ID:-linux}"
        case "$id" in
            ubuntu|pop|linuxmint|zorin|neon|kubuntu|elementary) echo "ubuntu" ;;
            debian|raspbian|devuan|parrot|kali|mx) echo "debian" ;;
            fedora|ultramarine|nobara) echo "fedora" ;;
            rhel|centos|rocky|almalinux|ol|virtuozzo|scientific) echo "rhel" ;;
            amzn) echo "amazon" ;;
            opensuse-leap|opensuse-tumbleweed|opensuse|sles|sle-micro) echo "opensuse" ;;
            arch|manjaro|endeavouros|garuda|cachyos) echo "arch" ;;
            *)
                local like="${ID_LIKE:-}"
                if [[ "$like" == *debian* ]]; then
                    echo "debian"
                elif [[ "$like" == *"rhel"* ]] || [[ "$like" == *fedora* ]] || [[ "$like" == *centos* ]]; then
                    echo "rhel"
                elif [[ "$like" == *arch* ]]; then
                    echo "arch"
                elif [[ "$like" == *suse* ]]; then
                    echo "opensuse"
                else
                    echo "linux"
                fi
                ;;
        esac
        return
    fi

    if [[ "${OSTYPE:-}" == linux-gnu* ]]; then
        if [[ -f /etc/redhat-release ]]; then
            echo "rhel"
        elif command -v apt-get >/dev/null 2>&1; then
            echo "debian"
        elif command -v pacman >/dev/null 2>&1; then
            echo "arch"
        elif command -v zypper >/dev/null 2>&1; then
            echo "opensuse"
        elif command -v dnf >/dev/null 2>&1; then
            echo "fedora"
        elif command -v yum >/dev/null 2>&1; then
            echo "rhel"
        else
            echo "linux"
        fi
    else
        echo "unknown"
    fi
}

rpm_pkg_manager() {
    if command -v dnf >/dev/null 2>&1; then
        echo "dnf"
    else
        echo "yum"
    fi
}

run_priv() {
    if [[ ${EUID:-$(id -u)} -eq 0 ]]; then
        "$@"
    else
        sudo "$@"
    fi
}

rv12_have_c_compiler() {
    command_exists gcc || command_exists cc
}

rv12_have_cxx_compiler() {
    command_exists g++ || command_exists c++
}

# True when git + make + C/C++ are available (distro packages not strictly required).
rv12_have_build_essentials() {
    command_exists git && command_exists make && rv12_have_c_compiler && rv12_have_cxx_compiler
}

# After a failed dnf/apt install, continue only if the host already has a toolchain.
rv12_recover_from_system_deps_failure() {
    log_warning "Distro package installation failed (sudo timeout, no password, or repo error)."
    if rv12_have_build_essentials; then
        log_warning "Continuing: git, make, and a C/C++ compiler are already on PATH."
        log_warning "Tip: next time use --no-system-deps if you manage packages yourself."
        if [[ "$INSTALL_VERILATOR" == true ]] && ! command_exists verilator; then
            log_warning "Verilator not in PATH; generate_rv12.sh may fail until you install it or use --no-verilator."
        fi
        return 0
    fi
    log_error "Need git, make, gcc/g++, and cc/c++. Install them (with sudo) or run:"
    log_error "  ./scripts/install_rv12.sh --no-system-deps"
    log_error "after installing build tools. Or from the pipeline:"
    log_error "  ./scripts/run_rv12.sh --no-system-deps"
    return 1
}

install_rv12_system_dependencies() {
    local os
    os=$(detect_os)
    log "Installing RV12-related system packages for OS family: $os"
    if [[ ${EUID:-$(id -u)} -ne 0 ]] && command_exists sudo; then
        log "If sudo prompts for a password, enter it in this terminal."
    fi

    case "$os" in
        ubuntu|debian)
            if ! run_priv apt-get update; then
                log_error "apt-get update failed"
                return 1
            fi
            local pkgs=(git curl wget build-essential make gcc g++ pkg-config)
            if [[ "$INSTALL_VERILATOR" == true ]]; then
                pkgs+=(verilator)
            fi
            if ! run_priv apt-get install -y "${pkgs[@]}"; then
                log_error "apt-get install failed"
                return 1
            fi
            ;;
        fedora|rhel|amazon)
            local pm
            pm=$(rpm_pkg_manager)
            run_priv "$pm" groupinstall -y "Development Tools" || true
            local pkgs=(git curl wget make gcc gcc-c++ pkgconfig)
            if [[ "$INSTALL_VERILATOR" == true ]]; then
                pkgs+=(verilator)
            fi
            if ! run_priv "$pm" install -y "${pkgs[@]}"; then
                log_error "$pm install failed"
                return 1
            fi
            ;;
        arch)
            if ! run_priv pacman -Sy --noconfirm; then
                return 1
            fi
            local pkgs=(base-devel git curl wget gcc pkgconf)
            if [[ "$INSTALL_VERILATOR" == true ]]; then
                pkgs+=(verilator)
            fi
            if ! run_priv pacman -S --needed --noconfirm "${pkgs[@]}"; then
                return 1
            fi
            ;;
        opensuse)
            run_priv zypper refresh -y || true
            run_priv zypper install -y -t pattern devel_basis || true
            local pkgs=(git curl wget make gcc gcc-c++ pkg-config)
            if [[ "$INSTALL_VERILATOR" == true ]]; then
                pkgs+=(verilator)
            fi
            if ! run_priv zypper install -y "${pkgs[@]}"; then
                return 1
            fi
            ;;
        macos)
            if ! command_exists brew; then
                log_error "Homebrew not found. Install from https://brew.sh"
                return 1
            fi
            local pkgs=(git curl wget make gcc pkg-config)
            if [[ "$INSTALL_VERILATOR" == true ]]; then
                pkgs+=(verilator)
            fi
            if ! brew install "${pkgs[@]}"; then
                return 1
            fi
            ;;
        *)
            log_warning "Unknown OS family '$os'. Install git, a C/C++ toolchain, and Verilator manually."
            ;;
    esac
    log_success "System package step finished for $os"
    return 0
}

init_submodules() {
    log "Preparing checkout for $RELATIVE_SUBMODULE_PATH ..."
    if ! git -C "$PROJECT_ROOT" rev-parse --git-dir >/dev/null 2>&1; then
        log_error "SCORE root is not a git checkout; cannot run submodule update."
        return 1
    fi
    score_prepare_tool_checkout "$PROJECT_ROOT" "$RELATIVE_SUBMODULE_PATH"
    if [[ ! -d "$TOOL_DIR" ]]; then
        log_error "RV12 checkout missing after bootstrap: $TOOL_DIR"
        return 1
    fi
    log "Initializing nested RV12 submodules (ahb3lite_pkg, memory)..."
    git -C "$TOOL_DIR" submodule update --init --recursive
    log_success "Submodules ready under $TOOL_DIR"
}

check_environment() {
    local ok=true
    command_exists git || {
        log_error "git not found"
        ok=false
    }
    if [[ -d "$TOOL_DIR" ]] && git -C "$TOOL_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        log_success "RV12 tree present: $TOOL_DIR ($(git -C "$TOOL_DIR" rev-parse --short HEAD 2>/dev/null || echo '?'))"
    else
        log_warning "RV12 checkout missing or not a git tree: $TOOL_DIR"
        ok=false
    fi
    if [[ "$INSTALL_VERILATOR" == true ]]; then
        if command_exists verilator; then
            log_success "verilator: $(verilator --version 2>/dev/null | head -1 || echo ok)"
        else
            log_warning "verilator not in PATH (generate step will skip lint or fail unless you install it)"
        fi
    fi
    if [[ "$ok" == true ]]; then
        return 0
    fi
    return 1
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Install dependencies and initialize tools/rv12 (Roa Logic RV12) for SCORE.

Options:
  -h, --help           Show this help
  --check-only         Verify tools and submodule; do not install packages
  --no-system-deps     Skip distro package installation (CI images)
  --no-verilator       Do not install Verilator via the package manager
  --debug              Verbose messages

Environment:
  RV12_SKIP_SYSTEM_DEPS=1   Same as --no-system-deps

Upstream: https://github.com/RoaLogic/RV12
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            show_help
            exit 0
            ;;
        --check-only)
            CHECK_ONLY=true
            shift
            ;;
        --no-system-deps)
            INSTALL_SYSTEM_DEPS=false
            shift
            ;;
        --no-verilator)
            INSTALL_VERILATOR=false
            shift
            ;;
        --debug)
            DEBUG_MODE=true
            shift
            ;;
        *)
            log_error "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

cd "$PROJECT_ROOT"
if [[ "$DEBUG_MODE" == true ]]; then
    set -x
fi
log "install_rv12.sh — log: $INSTALL_LOG"

if [[ "$CHECK_ONLY" == true ]]; then
    check_environment || exit 1
    log_success "--check-only: environment OK"
    exit 0
fi

if [[ "$INSTALL_SYSTEM_DEPS" == true ]]; then
    if ! install_rv12_system_dependencies; then
        rv12_recover_from_system_deps_failure || exit 1
    fi
else
    log "Skipping system dependencies (--no-system-deps or RV12_SKIP_SYSTEM_DEPS=1)"
fi

init_submodules || exit 1

if ! git -C "$TOOL_DIR/submodules/ahb3lite_pkg" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
    log_warning "ahb3lite_pkg submodule may be missing; re-run: git submodule update --init --recursive $RELATIVE_SUBMODULE_PATH"
fi
if ! git -C "$TOOL_DIR/submodules/memory" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
    log_warning "memory submodule may be missing; re-run: git submodule update --init --recursive $RELATIVE_SUBMODULE_PATH"
fi

check_environment || true
log_success "install_rv12.sh finished."
