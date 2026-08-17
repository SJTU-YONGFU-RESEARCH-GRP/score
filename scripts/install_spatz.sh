#!/usr/bin/env bash
#
# Install host tools for pulp-platform/spatz under SCORE (optional Bender on PATH, OS build deps).
# Spatz vendors a pinned Bender under tools/spatz/install/bender via `make bender`.
# Does not build LLVM, GCC, Spike, Verilator, or run update_opcodes (see upstream Makefile).
#
# Usage (from repository root):
#   ./scripts/install_spatz.sh
#   ./scripts/install_spatz.sh --no-system-deps
#   ./scripts/install_spatz.sh --skip-bender
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SPATZ_DIR="$PROJECT_ROOT/tools/spatz"

INSTALL_SYSTEM_DEPS=true
SKIP_BENDER=false

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
# shellcheck source=scripts/common_bender.sh
source "$SCRIPT_DIR/common_bender.sh"
init_script_logging install_spatz

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Install dependencies for tools/spatz (optional global Bender + packages for builds/sim).

Options:
  -h, --help           Show this help
  --no-system-deps     Do not install distro packages
  --skip-bender        Do not download Bender into ~/.local/bin (upstream make bender still works)

After installation:
  source scripts/spatz_env.sh
  ./scripts/generate_spatz.sh

Upstream: make bender, then bender checkout; make all / make init for full toolchains and opcodes.
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            show_help
            exit 0
            ;;
        --no-system-deps)
            INSTALL_SYSTEM_DEPS=false
            shift
            ;;
        --skip-bender)
            SKIP_BENDER=true
            shift
            ;;
        *)
            err "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

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
                if [[ "$like" == *debian* ]]; then echo "debian"
                elif [[ "$like" == *"rhel"* ]] || [[ "$like" == *fedora* ]] || [[ "$like" == *centos* ]]; then echo "rhel"
                elif [[ "$like" == *arch* ]]; then echo "arch"
                elif [[ "$like" == *suse* ]]; then echo "opensuse"
                else echo "linux"
                fi
                ;;
        esac
        return
    fi
    echo "unknown"
}

rpm_pkg_manager() {
    if command -v dnf >/dev/null 2>&1; then echo "dnf"
    else echo "yum"
    fi
}

run_priv() {
    if [[ ${EUID:-$(id -u)} -eq 0 ]]; then "$@"
    else sudo "$@"
    fi
}

install_system_packages() {
    local os
    os=$(detect_os)
    info "Installing system packages for OS family: $os"
    if [[ ${EUID:-$(id -u)} -ne 0 ]] && command_exists sudo; then
        info "If sudo prompts for a password, enter it in this terminal."
    fi

    case "$os" in
        ubuntu|debian)
            run_priv apt-get update
            run_priv apt-get install -y \
                git curl wget ca-certificates tar python3 python3-venv \
                make gcc g++ \
                flex bison help2man \
                libfl-dev zlib1g-dev libelf-dev \
                autoconf automake libtool pkg-config \
                clang cmake ninja-build
            ;;
        fedora|rhel|amazon)
            local pm
            pm=$(rpm_pkg_manager)
            run_priv "$pm" install -y \
                git curl wget ca-certificates tar python3 \
                make gcc gcc-c++ \
                flex bison help2man \
                zlib-devel elfutils-libelf-devel \
                autoconf automake libtool pkgconfig \
                clang cmake ninja-build
            ;;
        arch)
            run_priv pacman -Sy --needed --noconfirm \
                git curl wget ca-certificates tar python \
                make gcc flex bison help2man \
                zlib libelf \
                autoconf automake libtool pkgconf \
                clang cmake ninja
            ;;
        opensuse)
            run_priv zypper install -y \
                git curl wget ca-certificates tar python3 \
                make gcc gcc-c++ \
                flex bison help2man \
                zlib-devel libelf-devel \
                autoconf automake libtool pkg-config \
                clang cmake ninja
            ;;
        macos)
            if ! command_exists brew; then
                err "Homebrew not found. Install from https://brew.sh"
                return 1
            fi
            brew install git curl wget python@3.12 flex bison help2man \
                autoconf automake libtool pkg-config llvm cmake ninja || true
            ;;
        *)
            warn "Unknown OS; skipping package install. Ensure git, make, gcc/g++, curl, python3."
            ;;
    esac
}

cd "$PROJECT_ROOT"

if [[ ! -d "$SPATZ_DIR" ]]; then
    err "Missing $SPATZ_DIR — add the submodule: git submodule update --init --recursive tools/spatz"
    exit 1
fi

if [[ "$INSTALL_SYSTEM_DEPS" == true ]]; then
    install_system_packages || warn "Some system packages may have failed; continuing."
fi

for need in git make gcc g++ tar python3; do
    command_exists "$need" || { err "Required command not found: $need"; exit 1; }
done
if ! command_exists curl && ! command_exists wget; then
    err "Need curl or wget"
    exit 1
fi

info "Ensuring Python packages for Spatz clustergen (hjson/mako/...)"
python3 -m pip install --user hjson jstyleson jsonref jsonschema mako >/dev/null
ok "clustergen Python packages available for $(command -v python3)"

if [[ "$SKIP_BENDER" != true ]]; then
    if command_exists bender; then
        ok "Bender already on PATH: $(bender --version 2>/dev/null || true)"
    else
        install_bender_binary
    fi
else
    info "Skipped Bender installation (--skip-bender)"
fi

ok "install_spatz.sh finished."
info "Next: source scripts/spatz_env.sh"
info "Then:  ./scripts/generate_spatz.sh"
