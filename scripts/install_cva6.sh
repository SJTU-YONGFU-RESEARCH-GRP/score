#!/usr/bin/env bash
#
# Install host tools for pulp-platform/cva6 under SCORE (Bender, git, Python 3, rsync).
# RTL lives in tools/cva6; generation runs bender checkout, default Verilator verification, snapshot.
#
# Usage (from repository root):
#   ./scripts/install_cva6.sh
#   ./scripts/install_cva6.sh --no-system-deps
#   ./scripts/install_cva6.sh --skip-bender
#   ./scripts/install_cva6.sh --no-verilator
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
CVA6_DIR="$PROJECT_ROOT/tools/cva6"

INSTALL_SYSTEM_DEPS=true
SKIP_BENDER=false
INSTALL_VERILATOR_AND_CXX=true

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
# shellcheck source=scripts/common_bender.sh
source "$SCRIPT_DIR/common_bender.sh"
init_script_logging install_cva6

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Install dependencies for tools/cva6 (Bender + common OS packages).

Options:
  -h, --help           Show this help
  --no-system-deps     Do not install distro packages (you must have git, curl/wget, tar, python3, rsync)
  --skip-bender        Do not download or verify Bender
  --no-verilator       Do not install Verilator or C++ toolchain (use generate_cva6.sh --skip-verilator)

After installation:
  source scripts/cva6_env.sh
  ./scripts/generate_cva6.sh
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
        --no-verilator)
            INSTALL_VERILATOR_AND_CXX=false
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
            local pkgs=(git curl wget ca-certificates tar rsync python3 python3-venv)
            if [[ "$INSTALL_VERILATOR_AND_CXX" == true ]]; then
                pkgs+=(verilator make g++)
            fi
            run_priv apt-get install -y "${pkgs[@]}"
            ;;
        fedora|rhel|amazon)
            local pm
            pm=$(rpm_pkg_manager)
            local pkgs=(git curl wget ca-certificates tar rsync python3)
            if [[ "$INSTALL_VERILATOR_AND_CXX" == true ]]; then
                pkgs+=(gcc gcc-c++ make verilator)
            fi
            run_priv "$pm" install -y "${pkgs[@]}"
            ;;
        arch)
            local pkgs=(git curl wget ca-certificates tar rsync python)
            if [[ "$INSTALL_VERILATOR_AND_CXX" == true ]]; then
                pkgs+=(base-devel verilator)
            fi
            run_priv pacman -Sy --needed --noconfirm "${pkgs[@]}"
            ;;
        opensuse)
            local pkgs=(git curl wget ca-certificates tar rsync python3)
            if [[ "$INSTALL_VERILATOR_AND_CXX" == true ]]; then
                pkgs+=(gcc gcc-c++ make verilator)
            fi
            run_priv zypper install -y "${pkgs[@]}"
            ;;
        macos)
            if ! command_exists brew; then
                err "Homebrew not found. Install from https://brew.sh"
                return 1
            fi
            brew install git curl wget rsync python@3.12 || brew install git curl wget rsync python3
            if [[ "$INSTALL_VERILATOR_AND_CXX" == true ]]; then
                brew install verilator || warn "Verilator brew install failed; install manually for generate_cva6.sh"
            fi
            ;;
        *)
            warn "Unknown OS; skipping package install. Ensure git, curl or wget, tar, rsync, and python3 are available."
            ;;
    esac
}

cd "$PROJECT_ROOT"

if [[ ! -d "$CVA6_DIR" ]]; then
    err "Missing $CVA6_DIR — run: git submodule update --init --recursive tools/cva6"
    exit 1
fi

if [[ "$INSTALL_SYSTEM_DEPS" == true ]]; then
    install_system_packages || warn "Some system packages may have failed; continuing."
fi

for need in git tar python3 rsync; do
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

if [[ "$INSTALL_VERILATOR_AND_CXX" == true ]]; then
    if command_exists verilator; then
        ok "verilator: $(verilator --version 2>/dev/null | head -1 || echo ok)"
    else
        warn "verilator not on PATH after package step (generate_cva6.sh will need it or use --skip-verilator)"
    fi
    if command_exists g++ || command_exists c++; then
        ok "C++ compiler available for Verilator (generate_cva6.sh)"
    else
        warn "No g++/c++ on PATH; Verilator steps in generate_cva6.sh may fail"
    fi
else
    info "Skipped Verilator/C++ package install (--no-verilator)"
fi

ok "install_cva6.sh finished."
info "Next: source scripts/cva6_env.sh"
info "Then:  ./scripts/generate_cva6.sh"
