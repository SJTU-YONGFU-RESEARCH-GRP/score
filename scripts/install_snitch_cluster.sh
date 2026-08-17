#!/usr/bin/env bash
#
# Install host tools for pulp-platform/snitch_cluster under SCORE (Bender, git, Python 3, rsync).
# RTL lives in tools/snitch-cluster; generation runs bender checkout and snapshots sources.
#
# Usage (from repository root):
#   ./scripts/install_snitch_cluster.sh
#   ./scripts/install_snitch_cluster.sh --no-system-deps
#   ./scripts/install_snitch_cluster.sh --skip-bender
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SNITCH_CLUSTER_DIR="$PROJECT_ROOT/tools/snitch-cluster"

INSTALL_SYSTEM_DEPS=true
SKIP_BENDER=false

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
# shellcheck source=scripts/common_bender.sh
source "$SCRIPT_DIR/common_bender.sh"
init_script_logging install_snitch_cluster

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Install dependencies for tools/snitch-cluster (Bender + common OS packages).

Options:
  -h, --help           Show this help
  --no-system-deps     Do not install distro packages (you must have git, curl/wget, tar, python3, rsync)
  --skip-bender        Do not download or verify Bender

After installation:
  source scripts/snitch_cluster_env.sh
  ./scripts/generate_snitch_cluster.sh
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
            run_priv apt-get install -y git curl wget ca-certificates tar rsync python3 python3-venv
            ;;
        fedora|rhel|amazon)
            local pm
            pm=$(rpm_pkg_manager)
            run_priv "$pm" install -y git curl wget ca-certificates tar rsync python3
            ;;
        arch)
            run_priv pacman -Sy --needed --noconfirm git curl wget ca-certificates tar rsync python
            ;;
        opensuse)
            run_priv zypper install -y git curl wget ca-certificates tar rsync python3
            ;;
        macos)
            if ! command_exists brew; then
                err "Homebrew not found. Install from https://brew.sh"
                return 1
            fi
            brew install git curl wget rsync python@3.12 || brew install git curl wget rsync python3
            ;;
        *)
            warn "Unknown OS; skipping package install. Ensure git, curl or wget, tar, rsync, and python3 are available."
            ;;
    esac
}

cd "$PROJECT_ROOT"

if [[ ! -d "$SNITCH_CLUSTER_DIR" ]]; then
    err "Missing $SNITCH_CLUSTER_DIR — run: git submodule update --init --recursive tools/snitch-cluster"
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

ok "install_snitch_cluster.sh finished."
info "Next: source scripts/snitch_cluster_env.sh"
info "Then:  ./scripts/generate_snitch_cluster.sh"
