#!/usr/bin/env bash
#
# Install host tools for pulp-platform/croc under SCORE (Bender, git, Python 3, rsync).
# RTL lives in tools/croc; generation runs bender checkout, default Verilator verification, snapshot.
#
# Usage (from repository root):
#   ./scripts/install_croc.sh
#   ./scripts/install_croc.sh --no-system-deps
#   ./scripts/install_croc.sh --skip-bender
#   ./scripts/install_croc.sh --no-verilator
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
CROC_DIR="$PROJECT_ROOT/tools/croc"

INSTALL_SYSTEM_DEPS=true
SKIP_BENDER=false
INSTALL_VERILATOR_AND_CXX=true

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[install_croc]${NC} $*"; }
ok() { echo -e "${GREEN}[install_croc]${NC} $*"; }
warn() { echo -e "${YELLOW}[install_croc]${NC} $*"; }
err() { echo -e "${RED}[install_croc]${NC} $*" >&2; }

command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Install dependencies for tools/croc (Bender + common OS packages).

Options:
  -h, --help           Show this help
  --no-system-deps     Do not install distro packages (you must have git, curl/wget, tar, python3, rsync)
  --skip-bender        Do not download or verify Bender
  --no-verilator       Do not install Verilator or C++ toolchain (use generate_croc.sh --skip-verilator)

After installation:
  source scripts/croc_env.sh
  ./scripts/generate_croc.sh
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
                brew install verilator || warn "Verilator brew install failed; install manually for generate_croc.sh"
            fi
            ;;
        *)
            warn "Unknown OS; skipping package install. Ensure git, curl or wget, tar, rsync, and python3 are available."
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

if [[ ! -d "$CROC_DIR" ]]; then
    err "Missing $CROC_DIR — run: git submodule update --init --recursive tools/croc"
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
        warn "verilator not on PATH after package step (generate_croc.sh will need it or use --skip-verilator)"
    fi
    if command_exists g++ || command_exists c++; then
        ok "C++ compiler available for Verilator (generate_croc.sh)"
    else
        warn "No g++/c++ on PATH; Verilator steps in generate_croc.sh may fail"
    fi
else
    info "Skipped Verilator/C++ package install (--no-verilator)"
fi

ok "install_croc.sh finished."
info "Next: source scripts/croc_env.sh"
info "Then:  ./scripts/generate_croc.sh"
