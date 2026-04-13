#!/usr/bin/env bash
#
# Install host tools for pulp-platform/AraXL under SCORE (Bender, git, Python 3, rsync).
# RTL lives in tools/araxl; generation runs bender checkout and snapshots sources.
# Note: generate_araxl.sh may clone large nested trees (ariane / CVA6-related); allow time and disk.
#
# Upstream simulation (tools/araxl/hardware): QuestaSim for make compile/sim; Verilator for
# make verilate / simv (see upstream README). SCORE does not patch tools/; see generate_araxl.sh
# for make-variable overrides. Icarus Verilog is not suitable for this SV/DPI stack.
#
# Upstream: https://github.com/pulp-platform/AraXL
#
# Usage (from repository root):
#   ./scripts/install_araxl.sh
#   ./scripts/install_araxl.sh --no-system-deps
#   ./scripts/install_araxl.sh --skip-bender
#   ./scripts/install_araxl.sh --check-only
#   ./scripts/install_araxl.sh --no-verilator   (skip distro Verilator; use with generate --skip-verilator-lint)
#   ./scripts/install_araxl.sh --no-verilator-build-deps   (skip clang/flex/bison… for upstream Verilator)
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
RELATIVE_SUBMODULE_PATH="tools/araxl"
TOOL_DIR="$PROJECT_ROOT/$RELATIVE_SUBMODULE_PATH"
ARAXL_DIR="$TOOL_DIR"

LOG_DIR="$PROJECT_ROOT/logs/araxl_install"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
INSTALL_LOG="$LOG_DIR/install_${TIMESTAMP}.log"

INSTALL_SYSTEM_DEPS=true
SKIP_BENDER=false
CHECK_ONLY=false
DEBUG_MODE=false
FORCE_REINSTALL=false
WITH_VERILATOR=true
WITH_VERILATOR_BUILD_DEPS=true

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
CYAN='\033[0;36m'
NC='\033[0m'

mkdir -p "$LOG_DIR"
touch "$INSTALL_LOG"

log() {
    echo -e "${BLUE}[install_araxl]${NC} $*" | tee -a "$INSTALL_LOG"
}

log_info() {
    echo -e "${CYAN}[install_araxl][INFO]${NC} $*" | tee -a "$INSTALL_LOG"
}

log_success() {
    echo -e "${GREEN}[install_araxl][OK]${NC} $*" | tee -a "$INSTALL_LOG"
}

log_warning() {
    echo -e "${YELLOW}[install_araxl][WARN]${NC} $*" | tee -a "$INSTALL_LOG"
}

log_error() {
    echo -e "${RED}[install_araxl][ERR]${NC} $*" | tee -a "$INSTALL_LOG" >&2
}

command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Install dependencies for tools/araxl (Bender + common OS packages).

Unless --check-only: initializes the SCORE submodule $RELATIVE_SUBMODULE_PATH when .gitmodules
contains that path, then installs packages and Bender as selected.

Options:
  -h, --help           Show this help
  --no-system-deps     Do not install distro packages (you must have git, curl/wget, tar, python3, rsync)
  --skip-bender        Do not download or verify Bender
  --check-only         Verify prerequisites and submodule presence; do not install packages or Bender
  --debug              Trace shell commands (set -x)
  --force-reinstall    Reinstall Bender into ~/.local/bin even if already on PATH
  --with-verilator     Install distro Verilator (default; same as omitting this flag)
  --no-verilator       Do not install distro Verilator (for minimal/CI installs; pair with generate --skip-verilator-lint)
  --with-verilator-build-deps
                       Install packages to build upstream Verilator (default on; redundant if unchanged)
  --no-verilator-build-deps
                       Skip Verilator compile-time packages (faster/sudo-less package step if you already have them)

After installation:
  source scripts/araxl_env.sh
  ./scripts/generate_araxl.sh
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
        --check-only)
            CHECK_ONLY=true
            shift
            ;;
        --debug)
            DEBUG_MODE=true
            shift
            ;;
        --force-reinstall)
            FORCE_REINSTALL=true
            shift
            ;;
        --with-verilator)
            WITH_VERILATOR=true
            shift
            ;;
        --no-verilator)
            WITH_VERILATOR=false
            shift
            ;;
        --with-verilator-build-deps)
            WITH_VERILATOR_BUILD_DEPS=true
            shift
            ;;
        --no-verilator-build-deps)
            WITH_VERILATOR_BUILD_DEPS=false
            shift
            ;;
        *)
            log_error "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

if [[ "$DEBUG_MODE" == true ]]; then
    set -x
fi

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
            run_priv apt-get install -y git curl wget ca-certificates tar rsync python3 python3-venv make
            if [[ "$WITH_VERILATOR" == true ]]; then
                run_priv apt-get install -y verilator || log_warning "verilator package not available on this distro release"
            fi
            if [[ "$WITH_VERILATOR_BUILD_DEPS" == true ]]; then
                run_priv apt-get install -y autoconf automake flex bison perl gcc g++ clang llvm-dev \
                    libfl-dev libelf-dev zlib1g-dev help2man || log_warning "Some Verilator build deps failed"
            fi
            ;;
        fedora|rhel|amazon)
            local pm
            pm=$(rpm_pkg_manager)
            run_priv "$pm" install -y git curl wget ca-certificates tar rsync python3 make
            if [[ "$WITH_VERILATOR" == true ]]; then
                run_priv "$pm" install -y verilator || log_warning "verilator package install failed"
            fi
            if [[ "$WITH_VERILATOR_BUILD_DEPS" == true ]]; then
                run_priv "$pm" install -y autoconf automake flex bison perl gcc gcc-c++ clang llvm zlib-devel \
                    || log_warning "Some Verilator build deps failed"
            fi
            ;;
        arch)
            run_priv pacman -Sy --needed --noconfirm git curl wget ca-certificates tar rsync python make
            if [[ "$WITH_VERILATOR" == true ]]; then
                run_priv pacman -Sy --needed --noconfirm verilator || log_warning "verilator package install failed"
            fi
            if [[ "$WITH_VERILATOR_BUILD_DEPS" == true ]]; then
                run_priv pacman -Sy --needed --noconfirm autoconf automake flex bison perl gcc clang llvm zlib
            fi
            ;;
        opensuse)
            run_priv zypper install -y git curl wget ca-certificates tar rsync python3 make
            if [[ "$WITH_VERILATOR" == true ]]; then
                run_priv zypper install -y verilator || log_warning "verilator package install failed"
            fi
            if [[ "$WITH_VERILATOR_BUILD_DEPS" == true ]]; then
                run_priv zypper install -y autoconf automake flex bison perl gcc gcc-c++ clang llvm zlib-devel
            fi
            ;;
        macos)
            if ! command_exists brew; then
                log_error "Homebrew not found. Install from https://brew.sh"
                return 1
            fi
            brew install git curl wget rsync python@3.12 make || brew install git curl wget rsync python3 make
            if [[ "$WITH_VERILATOR" == true ]]; then
                brew install verilator || log_warning "verilator brew install failed"
            fi
            if [[ "$WITH_VERILATOR_BUILD_DEPS" == true ]]; then
                brew install autoconf automake flex bison perl llvm || true
            fi
            ;;
        *)
            log_warning "Unknown OS; skipping package install. Ensure git, curl or wget, tar, rsync, python3, and make are available."
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

init_score_araxl_submodule() {
    if ! git -C "$PROJECT_ROOT" rev-parse --git-dir >/dev/null 2>&1; then
        log_warning "SCORE is not a git checkout; skip submodule init for $RELATIVE_SUBMODULE_PATH."
        return 0
    fi
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]] || ! grep -q "path = ${RELATIVE_SUBMODULE_PATH}" "$PROJECT_ROOT/.gitmodules" 2>/dev/null; then
        log_info "No $RELATIVE_SUBMODULE_PATH entry in .gitmodules; skip SCORE-root submodule init."
        return 0
    fi
    log_info "git submodule update --init --recursive $RELATIVE_SUBMODULE_PATH (from SCORE root)"
    if ! git -C "$PROJECT_ROOT" submodule update --init --recursive "$RELATIVE_SUBMODULE_PATH" >> "$INSTALL_LOG" 2>&1; then
        log_error "Failed to init SCORE submodule $RELATIVE_SUBMODULE_PATH"
        log_error "Try: git submodule update --init --recursive $RELATIVE_SUBMODULE_PATH"
        return 1
    fi
    log_success "SCORE submodule $RELATIVE_SUBMODULE_PATH ready"
    return 0
}

cd "$PROJECT_ROOT"

log "install_araxl.sh — log: $INSTALL_LOG"

if [[ "$CHECK_ONLY" != true ]]; then
    init_score_araxl_submodule || exit 1
fi

if [[ ! -d "$ARAXL_DIR" ]]; then
    log_error "Missing $ARAXL_DIR — run: git submodule update --init --recursive $RELATIVE_SUBMODULE_PATH"
    exit 1
fi

if [[ "$INSTALL_SYSTEM_DEPS" == true && "$CHECK_ONLY" != true ]]; then
    install_system_packages || log_warning "Some system packages may have failed; continuing."
fi

for need in git tar python3 rsync make; do
    command_exists "$need" || { log_error "Required command not found: $need"; exit 1; }
done
if ! command_exists curl && ! command_exists wget; then
    log_error "Need curl or wget"
    exit 1
fi

if [[ "$CHECK_ONLY" == true ]]; then
    if command_exists bender; then
        log_success "check-only: bender on PATH: $(bender --version 2>/dev/null || true)"
    else
        log_warning "check-only: bender not on PATH (install without --check-only or add ~/.local/bin to PATH)"
    fi
    if [[ "$WITH_VERILATOR" == true ]] || command_exists verilator; then
        command_exists verilator && log_success "check-only: verilator: $(verilator --version 2>/dev/null | head -1)"
    fi
    log_success "install_araxl.sh --check-only finished."
    exit 0
fi

if [[ "$SKIP_BENDER" != true ]]; then
    if command_exists bender && [[ "$FORCE_REINSTALL" != true ]]; then
        log_success "Bender already on PATH: $(bender --version 2>/dev/null || true)"
    else
        install_bender_binary
    fi
else
    log_info "Skipped Bender installation (--skip-bender)"
fi

log_success "install_araxl.sh finished."
log_info "Next: source scripts/araxl_env.sh"
log_info "Then:  ./scripts/generate_araxl.sh"
