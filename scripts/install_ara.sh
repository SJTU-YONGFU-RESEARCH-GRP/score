#!/usr/bin/env bash
#
# Install host tools for pulp-platform/ara under SCORE (Bender, build deps for checkout / Verilator).
# Does not build LLVM, Spike, or the vendored Verilator tree (see upstream Makefile); those are large
# optional steps inside tools/ara.
#
# Upstream: https://github.com/pulp-platform/ara
#
# Usage (from repository root):
#   ./scripts/install_ara.sh
#   ./scripts/install_ara.sh --no-system-deps
#   ./scripts/install_ara.sh --skip-bender
#   ./scripts/install_ara.sh --check-only
#

set -euo pipefail

# Path registered in SCORE .gitmodules (submodule init from repo root per docs/PROMPTS_SHELL.md).
RELATIVE_SUBMODULE_PATH="tools/ara"

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/ara"
ARA_DIR="$TOOL_DIR"

INSTALL_SYSTEM_DEPS=true
SKIP_BENDER=false
SKIP_SUBMODULE=false
CHECK_ONLY=false
DEBUG_MODE=false

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
PURPLE='\033[0;35m'
CYAN='\033[0;36m'
NC='\033[0m'

command_exists() { command -v "$1" >/dev/null 2>&1; }

get_commit_id() {
    local repo_path="$1"
    if git -C "$repo_path" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

# Install logs co-locate with dataset tree by default (override with ARA_INSTALL_LOG_DIR).
ARA_DATASET_COMMIT="$(get_commit_id "$TOOL_DIR")"
LOG_DIR="${ARA_INSTALL_LOG_DIR:-$PROJECT_ROOT/datasets/ara/$ARA_DATASET_COMMIT/logs/ara_install}"
INSTALL_LOG="$LOG_DIR/install_$(date +%Y%m%d_%H%M%S).log"
mkdir -p "$LOG_DIR"

log() {
    local message="$1"
    local timestamp
    timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${BLUE}[$timestamp]${NC} [install_ara] $message" | tee -a "$INSTALL_LOG"
}

log_info() {
    local message="$1"
    local timestamp
    timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${CYAN}[INFO $timestamp]${NC} [install_ara] $message" | tee -a "$INSTALL_LOG"
}

log_success() {
    local message="$1"
    local timestamp
    timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${GREEN}[SUCCESS $timestamp]${NC} [install_ara] $message" | tee -a "$INSTALL_LOG"
}

log_warning() {
    local message="$1"
    local timestamp
    timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${YELLOW}[WARNING $timestamp]${NC} [install_ara] $message" | tee -a "$INSTALL_LOG"
}

log_error() {
    local message="$1"
    local timestamp
    timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${RED}[ERROR $timestamp]${NC} [install_ara] $message" | tee -a "$INSTALL_LOG" >&2
}

log_debug() {
    if [[ "$DEBUG_MODE" == true ]]; then
        local message="$1"
        local timestamp
        timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
        echo -e "${PURPLE}[DEBUG $timestamp]${NC} [install_ara] $message" | tee -a "$INSTALL_LOG"
    fi
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Install dependencies for tools/ara (Bender + packages for Bender checkout, and Verilator for generate_ara.sh RTL lint).

Logs: $INSTALL_LOG (and stdout).

Options:
  -h, --help           Show this help
  --no-system-deps     Do not install distro packages
  --skip-bender        Do not download or verify Bender into ~/.local/bin
  --skip-submodule     Do not run git submodule update (e.g. if run_ara.sh already did)
  --check-only         Verify required commands exist; do not install packages or Bender
  --debug              Verbose logging

After installation:
  source scripts/ara_env.sh
  ./scripts/generate_ara.sh

Upstream also documents: make toolchain-llvm, make riscv-isa-sim, make verilator (inside tools/ara).
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
        --skip-submodule)
            SKIP_SUBMODULE=true
            shift
            ;;
        --check-only)
            CHECK_ONLY=true
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

log "install_ara.sh — INSTALL_LOG=$INSTALL_LOG"

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
    log_info "Installing system packages for OS family: $os"
    if [[ ${EUID:-$(id -u)} -ne 0 ]] && command_exists sudo; then
        log_info "If sudo prompts for a password, enter it in this terminal."
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
                clang cmake ninja-build verilator
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
                clang cmake ninja-build verilator
            ;;
        arch)
            run_priv pacman -Sy --needed --noconfirm \
                git curl wget ca-certificates tar python \
                make gcc flex bison help2man \
                zlib libelf \
                autoconf automake libtool pkgconf \
                clang cmake ninja verilator
            ;;
        opensuse)
            run_priv zypper install -y \
                git curl wget ca-certificates tar python3 \
                make gcc gcc-c++ \
                flex bison help2man \
                zlib-devel libelf-devel \
                autoconf automake libtool pkg-config \
                clang cmake ninja verilator
            ;;
        macos)
            if ! command_exists brew; then
                log_error "Homebrew not found. Install from https://brew.sh"
                return 1
            fi
            brew install git curl wget python@3.12 flex bison help2man \
                autoconf automake libtool pkg-config llvm cmake ninja verilator || true
            ;;
        *)
            log_warning "Unknown OS; skipping package install. Ensure git, make, gcc/g++, flex, bison, curl, python3."
            ;;
    esac
}

download_extract() {
    local url="$1"
    local dest_dir="$2"
    mkdir -p "$dest_dir"
    log_debug "download_extract: $url"
    if command_exists curl; then
        curl -fsSL "$url" | tar -xz -C "$dest_dir"
    elif command_exists wget; then
        wget -qO- "$url" | tar -xz -C "$dest_dir"
    else
        log_error "Need curl or wget to download Bender"
        return 1
    fi
}

install_bender_binary() {
    local tag_name ver pkg url uname_s uname_m
    local json
    json=$(curl -fsSL "https://api.github.com/repos/pulp-platform/bender/releases/latest") || {
        log_error "Failed to query pulp-platform/bender releases"
        return 1
    }
    tag_name=$(echo "$json" | grep -m1 '"tag_name":' | sed 's/.*"tag_name": "//;s/".*//')
    if [[ -z "$tag_name" ]]; then
        log_error "Could not parse Bender release tag"
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
                    log_error "Unsupported Linux machine type: $uname_m (need x86_64 or aarch64)"
                    return 1
                    ;;
            esac
            ;;
        *)
            log_error "Unsupported OS: $uname_s"
            return 1
            ;;
    esac
    url="https://github.com/pulp-platform/bender/releases/download/${tag_name}/${pkg}"
    log_info "Installing Bender ${tag_name} from ${url}"
    local tmp
    tmp=$(mktemp -d)
    download_extract "$url" "$tmp" || { rm -rf "$tmp"; return 1; }
    if [[ ! -f "$tmp/bender" ]]; then
        log_error "Archive did not contain bender binary"
        rm -rf "$tmp"
        return 1
    fi
    mkdir -p "${HOME}/.local/bin"
    install -m0755 "$tmp/bender" "${HOME}/.local/bin/bender"
    rm -rf "$tmp"
    export PATH="${HOME}/.local/bin:${PATH}"
    log_success "Bender installed: $(bender --version 2>/dev/null || echo "${HOME}/.local/bin/bender")"
}

cd "$PROJECT_ROOT"

if ! git -C "$PROJECT_ROOT" rev-parse --git-dir >/dev/null 2>&1; then
    log_error "Not a git checkout at $PROJECT_ROOT (needed for submodule init). Use --skip-submodule if tools/ara is already present."
    exit 1
fi

if [[ "$SKIP_SUBMODULE" != true ]]; then
    log_info "git submodule update --init --recursive $RELATIVE_SUBMODULE_PATH"
    git submodule update --init --recursive "$RELATIVE_SUBMODULE_PATH"
else
    log_warning "Skipped submodule init (--skip-submodule)"
fi

if [[ ! -d "$ARA_DIR" ]]; then
    log_error "Missing $ARA_DIR — add the submodule: git submodule update --init --recursive $RELATIVE_SUBMODULE_PATH"
    exit 1
fi

if [[ "$CHECK_ONLY" == true ]]; then
    log_info "--check-only: verifying toolchain (no installs)"
    for need in git make gcc g++ tar python3; do
        command_exists "$need" || { log_error "Required command not found: $need"; exit 1; }
    done
    if ! command_exists curl && ! command_exists wget; then
        log_error "Need curl or wget"
        exit 1
    fi
    if [[ "$SKIP_BENDER" != true ]] && ! command_exists bender; then
        log_error "Bender not on PATH (install without --skip-bender or add ~/.local/bin to PATH)"
        exit 1
    fi
    log_success "check-only passed."
    exit 0
fi

if [[ "$INSTALL_SYSTEM_DEPS" == true ]]; then
    install_system_packages || log_warning "Some system packages may have failed; continuing."
fi

for need in git make gcc g++ tar python3; do
    command_exists "$need" || { log_error "Required command not found: $need"; exit 1; }
done
if ! command_exists curl && ! command_exists wget; then
    log_error "Need curl or wget"
    exit 1
fi

if [[ "$SKIP_BENDER" != true ]]; then
    if command_exists bender; then
        log_success "Bender already on PATH: $(bender --version 2>/dev/null || true)"
    else
        install_bender_binary
    fi
else
    log_info "Skipped Bender installation (--skip-bender)"
fi

log_success "install_ara.sh finished."
log_info "Next: source scripts/ara_env.sh"
log_info "Then:  ./scripts/generate_ara.sh"
