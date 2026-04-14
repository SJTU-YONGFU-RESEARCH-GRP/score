#!/usr/bin/env bash
#
# Install host tools for pulp-platform/mempool under SCORE (optional Bender on PATH, OS build deps).
# MemPool also installs a pinned Bender under tools/mempool/install/bender via `make bender`.
# Does not build GCC, LLVM, Halide, Spike, or Verilator (see upstream Makefile).
#
# Usage (from repository root):
#   ./scripts/install_mempool.sh
#   ./scripts/install_mempool.sh --no-system-deps
#   ./scripts/install_mempool.sh --skip-bender
#   ./scripts/install_mempool.sh --verilator   (also default when invoked from run_mempool.sh)
#   ./scripts/install_mempool.sh --riscv-isa-sim
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
MEMPOOL_DIR="$PROJECT_ROOT/tools/mempool"

INSTALL_SYSTEM_DEPS=true
SKIP_BENDER=false
BUILD_VERILATOR=false
BUILD_RISCV_ISA_SIM=false

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_mempool

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Install dependencies for tools/mempool (optional global Bender + packages for builds/sim).

Options:
  -h, --help           Show this help
  --no-system-deps     Do not install distro packages
  --skip-bender        Do not download Bender into ~/.local/bin (upstream make bender still works)
  --verilator          Run upstream \`make verilator\` in tools/mempool (LLVM required; long build)
  --riscv-isa-sim      Run upstream \`make riscv-isa-sim\` in tools/mempool (Spike; long build)

After installation:
  source scripts/mempool_env.sh
  ./scripts/generate_mempool.sh

Upstream: make bender && make update-deps; make toolchain; make verilator (inside tools/mempool).
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
        --verilator)
            BUILD_VERILATOR=true
            shift
            ;;
        --riscv-isa-sim)
            BUILD_RISCV_ISA_SIM=true
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
                rsync \
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
                rsync \
                make gcc gcc-c++ \
                flex bison help2man \
                zlib-devel elfutils-libelf-devel \
                autoconf automake libtool pkgconfig \
                clang cmake ninja-build
            ;;
        arch)
            run_priv pacman -Sy --needed --noconfirm \
                git curl wget ca-certificates tar python \
                rsync \
                make gcc flex bison help2man \
                zlib libelf \
                autoconf automake libtool pkgconf \
                clang cmake ninja
            ;;
        opensuse)
            run_priv zypper install -y \
                git curl wget ca-certificates tar python3 \
                rsync \
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

download_extract() {
    local url="$1"
    local dest_dir="$2"
    mkdir -p "$dest_dir"
    if command_exists curl; then
        curl -fsSL "$url" | tar -xz -C "$dest_dir"
    elif command_exists wget; then
        wget -qO- "$url" | tar -xz -C "$dest_dir"
    else
        err "Need curl or wget to download Bender"
        return 1
    fi
}

install_bender_binary() {
    local tag_name ver pkg url uname_s uname_m
    local json
    json=$(curl -fsSL "https://api.github.com/repos/pulp-platform/bender/releases/latest") || {
        err "Failed to query pulp-platform/bender releases"
        return 1
    }
    tag_name=$(echo "$json" | grep -m1 '"tag_name":' | sed 's/.*"tag_name": "//;s/".*//')
    if [[ -z "$tag_name" ]]; then
        err "Could not parse Bender release tag"
        return 1
    fi
    ver="${tag_name#v}"
    uname_s=$(uname -s)
    uname_m=$(uname -m)
    case "$uname_s" in
        Darwin)
            pkg="bender-${ver}-universal-apple-darwin.tar.gz"
            ;;
        Linux)
            case "$uname_m" in
                x86_64) pkg="bender-${ver}-x86_64-linux-gnu.tar.gz" ;;
                aarch64|arm64) pkg="bender-${ver}-arm64-linux-gnu.tar.gz" ;;
                *)
                    err "Unsupported Linux machine type: $uname_m (need x86_64 or aarch64)"
                    return 1
                    ;;
            esac
            ;;
        *)
            err "Unsupported OS: $uname_s"
            return 1
            ;;
    esac
    url="https://github.com/pulp-platform/bender/releases/download/${tag_name}/${pkg}"
    info "Installing Bender ${tag_name} from ${url}"
    local tmp
    tmp=$(mktemp -d)
    download_extract "$url" "$tmp" || { rm -rf "$tmp"; return 1; }
    if [[ ! -f "$tmp/bender" ]]; then
        err "Archive did not contain bender binary"
        rm -rf "$tmp"
        return 1
    fi
    mkdir -p "${HOME}/.local/bin"
    install -m0755 "$tmp/bender" "${HOME}/.local/bin/bender"
    rm -rf "$tmp"
    export PATH="${HOME}/.local/bin:${PATH}"
    ok "Bender installed: $(bender --version 2>/dev/null || echo "${HOME}/.local/bin/bender")"
}

cd "$PROJECT_ROOT"

if [[ ! -d "$MEMPOOL_DIR" ]]; then
    err "Missing $MEMPOOL_DIR — add the submodule: git submodule update --init --recursive tools/mempool"
    exit 1
fi

if [[ "$INSTALL_SYSTEM_DEPS" == true ]]; then
    if ! install_system_packages; then
        warn "Distro package installation did not complete (sudo password timeout/denied, network, or missing repos)."
        warn "If dependencies are already installed, re-run with: $0 --no-system-deps"
        warn "Otherwise fix sudo or install build tools manually (see README), then re-run this script."
    fi
fi

for need in git make gcc g++ tar python3; do
    command_exists "$need" || { err "Required command not found: $need"; exit 1; }
done
if ! command_exists curl && ! command_exists wget; then
    err "Need curl or wget"
    exit 1
fi

if [[ "$SKIP_BENDER" != true ]]; then
    if command_exists bender; then
        ok "Bender already on PATH: $(bender --version 2>/dev/null || true)"
    else
        install_bender_binary
    fi
else
    info "Skipped Bender installation (--skip-bender)"
fi

if [[ "$BUILD_VERILATOR" == true ]]; then
    info "Building Verilator via upstream make verilator (this can take a long time)"
    make -C "$MEMPOOL_DIR" verilator
    ok "Verilator build finished."
fi

if [[ "$BUILD_RISCV_ISA_SIM" == true ]]; then
    info "Building Spike via upstream make riscv-isa-sim (this can take a long time)"
    make -C "$MEMPOOL_DIR" riscv-isa-sim
    ok "riscv-isa-sim build finished."
fi

ok "install_mempool.sh finished."
info "Next: source scripts/mempool_env.sh"
info "Then:  ./scripts/generate_mempool.sh"
