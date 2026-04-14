#!/bin/bash

# NEORV32 VHDL toolchain install for SCORE (same role as install_rocket_chip.sh for this flow).
# Run via install_neorv32_vhdl.sh (this file) or install_neorv32_verilog.sh (sets NEORV32_INSTALL_PROFILE=verilog).
#
# SCORE repo updates:
#   - git submodule tools/neorv32 (VHDL RTL for generate_neorv32_vhdl.sh)
#   - Verilog profile only: clone / pull tools/neorv32-verilog (NEORV32_VERILOG_URL overrides URL)

set -e  # Exit on any error

# Global variables
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOLS_DIR="$PROJECT_ROOT/tools"
LOG_DIR="$PROJECT_ROOT/logs"
# verilog profile is selected by install_neorv32_verilog.sh before exec'ing this script.
NEORV32_INSTALL_PROFILE="${NEORV32_INSTALL_PROFILE:-vhdl}"
case "$NEORV32_INSTALL_PROFILE" in
    verilog)
        NEORV32_INSTALL_LOG_STEM="install_neorv32_verilog"
        INSTALL_LOG="$LOG_DIR/install_neorv32_verilog.log"
        ;;
    *)
        NEORV32_INSTALL_LOG_STEM="install_neorv32_vhdl"
        INSTALL_LOG="$LOG_DIR/install_neorv32_vhdl.log"
        ;;
esac
# Normalized distro family for package installs (almalinux, rocky, etc. → rhel). Set by detect_os.
OS_FAMILY="unknown"
# SCORE submodule path (see .gitmodules); init/update is done here, not in run_neorv32_*.sh.
NEORV32_SUBMODULE_REL="tools/neorv32"
# Clone URL for stnolting/neorv32-verilog (HTTPS if SSH keys are unavailable).
NEORV32_VERILOG_URL="${NEORV32_VERILOG_URL:-git@github.com:stnolting/neorv32-verilog.git}"

# Installation options
INSTALL_GHDL=true
INSTALL_IVERILOG=true
INSTALL_VERILATOR=false
BUILD_FROM_SOURCE=true
CLEAN_BUILD=false
SKIP_DEPS=false
FORCE_GHDL_BUILD=false
PARALLEL_JOBS=$(nproc)
SKIP_SCORE_NEORV32_SUBMODULE=false
ONLY_NEORV32_SUBMODULE=false

# Create directories
mkdir -p "$LOG_DIR"
mkdir -p "$TOOLS_DIR"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging "$NEORV32_INSTALL_LOG_STEM"
SCRIPT_LOG_FILE="$INSTALL_LOG"
: >>"$SCRIPT_LOG_FILE"

log() {
    log_info "$@"
}

error() {
    log_error "$@"
}

success() {
    log_success "$@"
}

warning() {
    log_warning "$@"
}

info() {
    log_info "$@"
}

# Detect OS for logging (NAME/VERSION) and OS_FAMILY for package installs.
# Match install_rocket_chip.sh: AlmaLinux/Rocky/etc. use ID/ID_LIKE, not NAME substrings.
detect_os() {
    OS_FAMILY="unknown"
    OS="Unknown"
    VER=""

    case "${OSTYPE:-}" in
        darwin*)
            OS="macOS"
            VER="$(sw_vers -productVersion 2>/dev/null || true)"
            OS_FAMILY="macos"
            log "Detected OS: $OS ${VER:+$VER }(family: $OS_FAMILY)"
            return
            ;;
        msys*|cygwin*)
            OS="Windows"
            OS_FAMILY="windows"
            log "Detected OS: $OS (family: $OS_FAMILY)"
            return
            ;;
    esac

    if [[ -f /etc/os-release ]]; then
        # shellcheck source=/dev/null
        . /etc/os-release
        OS="${NAME:-Linux}"
        VER="${VERSION_ID:-}"
        local id="${ID:-linux}"
        case "$id" in
            ubuntu|pop|linuxmint|zorin|neon|kubuntu|elementary)
                OS_FAMILY="ubuntu"
                ;;
            debian|raspbian|devuan|parrot|kali|mx)
                OS_FAMILY="debian"
                ;;
            fedora|ultramarine|nobara)
                OS_FAMILY="fedora"
                ;;
            rhel|centos|rocky|almalinux|ol|virtuozzo|scientific)
                OS_FAMILY="rhel"
                ;;
            amzn)
                OS_FAMILY="amazon"
                ;;
            opensuse-leap|opensuse-tumbleweed|opensuse|sles|sle-micro)
                OS_FAMILY="opensuse"
                ;;
            arch|manjaro|endeavouros|garuda|cachyos)
                OS_FAMILY="arch"
                ;;
            *)
                local like="${ID_LIKE:-}"
                if [[ "$like" == *debian* ]]; then
                    OS_FAMILY="debian"
                elif [[ "$like" == *rhel* ]] || [[ "$like" == *fedora* ]] || [[ "$like" == *centos* ]]; then
                    OS_FAMILY="rhel"
                elif [[ "$like" == *arch* ]]; then
                    OS_FAMILY="arch"
                elif [[ "$like" == *suse* ]]; then
                    OS_FAMILY="opensuse"
                fi
                ;;
        esac
    elif type lsb_release >/dev/null 2>&1; then
        OS=$(lsb_release -si)
        VER=$(lsb_release -sr)
        local os_lower
        os_lower=$(echo "$OS" | tr '[:upper:]' '[:lower:]')
        case "$os_lower" in
            *ubuntu*) OS_FAMILY="ubuntu" ;;
            *debian*) OS_FAMILY="debian" ;;
            *fedora*) OS_FAMILY="fedora" ;;
            *centos*|*redhat*|*enterprise*|*rocky*|*alma*) OS_FAMILY="rhel" ;;
            *arch*) OS_FAMILY="arch" ;;
        esac
    elif [[ -f /etc/redhat-release ]]; then
        OS="Red Hat Enterprise Linux"
        OS_FAMILY="rhel"
    fi

    log "Detected OS: $OS ${VER:+$VER }(family: ${OS_FAMILY})"
}

# Check if current GHDL supports synthesis
check_ghdl_synthesis_support() {
    if command -v ghdl >/dev/null 2>&1; then
        local ghdl_version=$(ghdl --version | head -1)
        local ghdl_path=$(which ghdl)
        
        info "Found existing GHDL: $ghdl_version"
        info "GHDL location: $ghdl_path"
        
        if ghdl --help | grep -q "synth"; then
            # GHDL does not accept "synth --help" (reports unknown option); use "help synth".
            if ghdl help synth >/dev/null 2>&1; then
                success "Existing GHDL supports synthesis - no rebuild needed"
                return 0
            else
                warning "Existing GHDL lists synth but \"ghdl help synth\" failed"
                return 1
            fi
        else
            warning "Existing GHDL does not support synthesis"
            return 1
        fi
    else
        info "No existing GHDL found"
        return 1
    fi
}

# Prepend tools/ghdl-install/bin when that binary exists (same as neorv32_env.sh). Without this,
# command -v ghdl can resolve to ~/.local or system GHDL while the summary (after sourcing the env
# script) reports the project install — misleading logs and wrong skip/rebuild decisions.
prioritize_project_ghdl_path() {
    local inst_bin="$TOOLS_DIR/ghdl-install/bin"
    if [[ -x "$inst_bin/ghdl" ]]; then
        export PATH="$inst_bin:$PATH"
        info "Using project GHDL first on PATH: $inst_bin/ghdl (same precedence as neorv32_env.sh)"
    fi
}

# If epel-release is installed but [epel] is disabled, dnf may omit gcc-gnat; turn the repo on when possible.
enable_epel_dnf_repo_if_needed() {
    command -v dnf >/dev/null 2>&1 || return 0
    rpm -q epel-release >/dev/null 2>&1 || rpm -q epel-next-release >/dev/null 2>&1 || return 0
    if dnf repolist enabled -q --repo=epel 2>/dev/null | tail -n +2 | grep -q .; then
        return 0
    fi
    info "EPEL RPM is installed but the 'epel' repo is disabled; enabling it (needed for gcc-gnat on EL 8/9)..."
    if sudo dnf install -y dnf-plugins-core >/dev/null 2>&1; then
        sudo dnf config-manager --set-enabled epel >/dev/null 2>&1 || true
    else
        warning "Install dnf-plugins-core to enable EPEL automatically, or run: sudo dnf config-manager --set-enabled epel"
    fi
}

# CRB / PowerTools is often required for EPEL dependency resolution on EL 8/9 (AlmaLinux, Rocky, CentOS Stream).
enable_rhel_family_crb_if_available() {
    command -v dnf >/dev/null 2>&1 || return 0
    [[ -f /etc/os-release ]] || return 0
    # shellcheck source=/dev/null
    . /etc/os-release
    case "${ID:-}" in
        fedora|ultramarine|nobara|mageia) return 0 ;;
    esac

    local ver_major="${VERSION_ID%%.*}"
    if dnf repolist all -q 2>/dev/null | awk 'NR>1 {print $1}' | grep -qx crb; then
        if dnf repolist enabled -q 2>/dev/null | awk 'NR>1 {print $1}' | grep -qx crb; then
            return 0
        fi
        info "Enabling CRB repo (helps EPEL packages such as gcc-gnat resolve on EL 9)..."
        sudo dnf config-manager --set-enabled crb >/dev/null 2>&1 || true
        return 0
    fi

    if [[ "$ver_major" == "8" ]]; then
        if dnf repolist all -q 2>/dev/null | awk 'NR>1 {print $1}' | grep -Eqi '^(powertools|PowerTools)$'; then
            info "Enabling PowerTools/powertools (EL 8 EPEL helper repo)..."
            sudo dnf config-manager --set-enabled powertools >/dev/null 2>&1 \
                || sudo dnf config-manager --set-enabled PowerTools >/dev/null 2>&1 || true
        fi
    fi
}

# Enable EPEL (or distro equivalent) so gcc-gnat / gnatmake can be installed on EL-like systems.
# On AlmaLinux/RHEL/Rocky 8–9, gcc-gnat is provided from EPEL, not BaseOS/AppStream alone.
ensure_epel_for_gcc_gnat() {
    [[ -f /etc/os-release ]] || return 0
    # shellcheck source=/dev/null
    . /etc/os-release
    local id="${ID:-}"
    local ver_major="${VERSION_ID%%.*}"

    case "$id" in
        fedora|ultramarine|nobara)
            return 0
            ;;
    esac

    # config-manager (enable epel/crb) requires dnf-plugins-core on EL.
    if command -v dnf >/dev/null 2>&1 && ! rpm -q dnf-plugins-core >/dev/null 2>&1; then
        info "Installing dnf-plugins-core (needed to enable EPEL/CRB repos)..."
        sudo dnf install -y dnf-plugins-core || warning "dnf-plugins-core install failed; EPEL/CRB auto-enable may not work"
    fi

    local have_epel_rpm=false
    if rpm -q epel-release >/dev/null 2>&1 \
        || rpm -q epel-next-release >/dev/null 2>&1 \
        || rpm -q oracle-epel-release-el"${ver_major}" >/dev/null 2>&1; then
        have_epel_rpm=true
    fi

    if [[ "$have_epel_rpm" == false ]]; then
        case "$id" in
            almalinux|rocky|centos|rhel|scientific|virtuozzo)
                info "Installing epel-release (provides gcc-gnat / GNAT on RHEL-compatible 8/9)..."
                if command -v dnf >/dev/null 2>&1; then
                    sudo dnf install -y epel-release
                else
                    sudo yum install -y epel-release
                fi
                ;;
            ol|oraclelinux)
                info "Installing Oracle EPEL release (gcc-gnat lives in EPEL)..."
                if command -v dnf >/dev/null 2>&1; then
                    sudo dnf install -y "oracle-epel-release-el${ver_major}"
                else
                    sudo yum install -y "oracle-epel-release-el${ver_major}"
                fi
                ;;
            amzn)
                if [[ "${VERSION_ID:-}" == "2" ]] && command -v amazon-linux-extras >/dev/null 2>&1; then
                    info "Enabling EPEL on Amazon Linux 2 (needed for gcc-gnat)..."
                    sudo amazon-linux-extras install epel -y
                elif [[ "${VERSION_ID:-}" == "2023" ]]; then
                    info "Installing EPEL release RPM on Amazon Linux 2023 (needed for gcc-gnat)..."
                    sudo dnf install -y \
                        "https://dl.fedoraproject.org/pub/epel/epel-release-latest-9.noarch.rpm"
                fi
                ;;
            *)
                :
                ;;
        esac
    fi

    enable_epel_dnf_repo_if_needed
    enable_rhel_family_crb_if_available

    if command -v dnf >/dev/null 2>&1; then
        info "Refreshing DNF metadata (so gcc-gnat from EPEL is visible)..."
        sudo dnf makecache || warning "dnf makecache failed; gcc-gnat install may still work"
    fi
}

# EPEL gcc-gnat on EL 8/9 often needs CodeReady Linux Builder (CRB) or PowerTools for dependencies.
# Pass the name of a bash array that already includes --enablerepo=epel when applicable; this appends
# helper-repo flags so a single dnf transaction can resolve libgnat / libgnat-devel even if CRB is
# still disabled in .repo files (config-manager can fail silently).
extend_dnf_extra_for_el_epel_helper_repos() {
    local -n _dnf_extra_ref=$1
    command -v dnf >/dev/null 2>&1 || return 0
    if dnf repolist all -q 2>/dev/null | awk 'NR>1 {print $1}' | grep -qx crb; then
        _dnf_extra_ref+=(--enablerepo=crb)
        return 0
    fi
    if [[ -f /etc/os-release ]]; then
        # shellcheck source=/dev/null
        . /etc/os-release
        if [[ "${VERSION_ID%%.*}" == "8" ]]; then
            if dnf repolist all -q 2>/dev/null | awk 'NR>1 {print $1}' | grep -qx powertools; then
                _dnf_extra_ref+=(--enablerepo=powertools)
            elif dnf repolist all -q 2>/dev/null | awk 'NR>1 {print $1}' | grep -qx PowerTools; then
                _dnf_extra_ref+=(--enablerepo=PowerTools)
            fi
        fi
    fi
}

# Install gcc-gnat (and EPEL libgnat* on RHEL-family) with the same repo flags as dependency installs.
# EL 9: gcc-gnat requires libgnat and libgnat-devel at matching EPEL versions; installing them in the same
# transaction as llvm-devel/boost-devel sometimes leaves only libgnat-devel. Order: libgnat first, then
# -devel, then gcc-gnat, in a dedicated dnf transaction (see install_system_dependencies).
#
# AlmaLinux/RHEL 9: AppStream/BaseOS gcc and libgcc declare Obsoletes on EPEL gcc-gnat/libgnat (EPEL is
# 11.5.0-6.el9 vs Alma 11.5.0-11.*). With obsoletes on, dnf says Nothing to do; with obsoletes=0, dnf
# still errors (gcc(major) provider conflicts with Obsoletes). The reliable fix is dnf download +
# rpm -Uvh --nodeps for libgnat and gcc-gnat only (runtime still uses system libgcc_s from libgcc).
install_rhel_gnat_epel_via_download_and_rpm() {
    local dnf_extra_dl=(--enablerepo=epel)
    extend_dnf_extra_for_el_epel_helper_repos dnf_extra_dl
    info "Downloading libgnat and gcc-gnat from EPEL; installing with rpm -Uvh --nodeps (EL 9 Ada vs base gcc Obsoletes)..."
    local dl_dir lib_rpm gcc_rpm
    dl_dir=$(mktemp -d "${TMPDIR:-/tmp}/score-gnat-XXXXXX") || return 1
    if ! ( cd "$dl_dir" && dnf download -y "${dnf_extra_dl[@]}" libgnat gcc-gnat ); then
        error "dnf download failed for libgnat/gcc-gnat (is EPEL enabled and reachable?)."
        rm -rf "$dl_dir"
        return 1
    fi
    lib_rpm=$(find "$dl_dir" -maxdepth 1 -name 'libgnat-*.rpm' -print -quit)
    gcc_rpm=$(find "$dl_dir" -maxdepth 1 -name 'gcc-gnat-*.rpm' -print -quit)
    if [[ -z "$lib_rpm" || -z "$gcc_rpm" ]]; then
        error "dnf download did not produce libgnat-*.rpm and gcc-gnat-*.rpm under $dl_dir"
        rm -rf "$dl_dir"
        return 1
    fi
    if ! sudo rpm -Uvh --nodeps "$lib_rpm" "$gcc_rpm"; then
        rm -rf "$dl_dir"
        return 1
    fi
    rm -rf "$dl_dir"
    success "Installed EPEL libgnat and gcc-gnat via rpm (Obsoletes bypass)."
    return 0
}

install_rhel_family_gnat_rpms() {
    ensure_epel_for_gcc_gnat
    local dnf_extra=(--enablerepo=epel)
    extend_dnf_extra_for_el_epel_helper_repos dnf_extra

    local el_major=""
    if [[ -f /etc/os-release ]]; then
        # shellcheck source=/dev/null
        . /etc/os-release
        el_major="${VERSION_ID%%.*}"
    fi

    # EL 9: never use dnf install for gcc-gnat/libgnat — solver conflicts (gcc Obsoletes EPEL Ada).
    if [[ "$OS_FAMILY" == "rhel" ]] && [[ "$el_major" == "9" ]]; then
        if rpm -q gcc-gnat >/dev/null 2>&1 && rpm -q libgnat >/dev/null 2>&1; then
            info "EL 9: gcc-gnat and libgnat RPMs already present; skipping GNAT download."
            hash -r 2>/dev/null || true
            return 0
        fi
        info "Installing GNAT for EL 9: libgnat-devel via dnf if needed, then gcc-gnat + libgnat via dnf download + rpm -Uvh --nodeps."
        if ! rpm -q libgnat-devel >/dev/null 2>&1; then
            if ! sudo dnf install -y "${dnf_extra[@]}" libgnat-devel; then
                warning "dnf could not install libgnat-devel; GHDL build may fail without Ada headers."
            fi
        fi
        install_rhel_gnat_epel_via_download_and_rpm || warning "GNAT compiler RPM install failed (see errors above)."
        hash -r 2>/dev/null || true
        return 0
    fi

    local dnf_no_obs=(--setopt=obsoletes=0)
    info "Installing GNAT RPMs (gcc-gnat, libgnat, libgnat-devel) — required for gnatmake / GHDL..."
    if command -v dnf >/dev/null 2>&1; then
        if ! sudo dnf install -y "${dnf_no_obs[@]}" "${dnf_extra[@]}" gcc-gnat libgnat libgnat-devel; then
            warning "GNAT install with primary repo flags failed; retrying with explicit EPEL+CRB..."
            sudo dnf install -y "${dnf_no_obs[@]}" --enablerepo=epel --enablerepo=crb gcc-gnat libgnat libgnat-devel \
                || sudo dnf install -y "${dnf_no_obs[@]}" gcc-gnat libgnat libgnat-devel
        fi
        if ! rpm -q gcc-gnat >/dev/null 2>&1; then
            warning "gcc-gnat still missing after dnf; retrying with --refresh and obsoletes=0..."
            sudo dnf install -y --refresh "${dnf_no_obs[@]}" "${dnf_extra[@]}" gcc-gnat libgnat libgnat-devel \
                || sudo dnf install -y --refresh "${dnf_no_obs[@]}" --enablerepo=epel --enablerepo=crb gcc-gnat libgnat libgnat-devel \
                || sudo dnf install -y --refresh "${dnf_no_obs[@]}" gcc-gnat libgnat libgnat-devel
        fi
        if ! rpm -q gcc-gnat >/dev/null 2>&1; then
            warning "dnf install cannot place gcc-gnat; using EPEL RPM download + rpm -Uvh --nodeps..."
            install_rhel_gnat_epel_via_download_and_rpm || true
        fi
    else
        sudo yum install -y --setopt=obsoletes=0 --enablerepo=epel gcc-gnat libgnat libgnat-devel \
            || sudo yum install -y --enablerepo=epel gcc-gnat libgnat libgnat-devel \
            || sudo yum install -y gcc-gnat libgnat libgnat-devel
        if ! rpm -q gcc-gnat >/dev/null 2>&1; then
            install_rhel_gnat_epel_via_download_and_rpm || true
        fi
    fi
    hash -r 2>/dev/null || true
}

# After the main RHEL dnf transaction, assert GNAT is usable (GHDL build needs gnatmake).
verify_rhel_gcc_gnat_installed() {
    [[ "$OS_FAMILY" == "rhel" || "$OS_FAMILY" == "amazon" ]] || return 0
    if rpm -q gcc-gnat >/dev/null 2>&1 && command -v gnatmake >/dev/null 2>&1; then
        return 0
    fi
    warning "GNAT incomplete after dependency step (rpm: gcc-gnat and/or gnatmake); retrying EPEL/CRB install..."
    install_rhel_family_gnat_rpms
    hash -r 2>/dev/null || true
    if rpm -q gcc-gnat >/dev/null 2>&1 && command -v gnatmake >/dev/null 2>&1; then
        return 0
    fi
    error "gcc-gnat / gnatmake could not be installed. On EL 9 (Alma/Rocky/RHEL), dnf cannot install EPEL Ada vs base gcc Obsoletes — use RPM bypass:"
    error "  dnf download -y --enablerepo=epel libgnat gcc-gnat && sudo rpm -Uvh --nodeps libgnat-*.rpm gcc-gnat-*.rpm"
    error "Install libgnat-devel first if needed: sudo dnf install -y --enablerepo=epel libgnat-devel"
    error "If EPEL is missing: sudo dnf install -y epel-release && sudo dnf config-manager --set-enabled epel"
    return 1
}

# Install system dependencies
install_system_dependencies() {
    log "=== Installing System Dependencies ==="
    
    case "$OS_FAMILY" in
        ubuntu|debian)
            info "Installing dependencies for Ubuntu/Debian..."
            sudo apt-get update
            
            # Essential build tools
            sudo apt-get install -y \
                build-essential \
                git \
                cmake \
                pkg-config \
                curl \
                wget \
                unzip
            
            # GHDL build dependencies
            sudo apt-get install -y \
                gnat \
                zlib1g-dev \
                libboost-dev
            
            # Try to install LLVM (try different versions)
            info "Installing LLVM for GHDL synthesis support..."
            if sudo apt-get install -y llvm-dev clang; then
                success "LLVM installed successfully"
            elif sudo apt-get install -y llvm-10-dev libllvm10 clang-10; then
                success "LLVM-10 installed successfully"
            elif sudo apt-get install -y llvm-11-dev libllvm11 clang-11; then
                success "LLVM-11 installed successfully"
            elif sudo apt-get install -y llvm-12-dev libllvm12 clang-12; then
                success "LLVM-12 installed successfully"
            elif sudo apt-get install -y llvm-13-dev libllvm13 clang-13; then
                success "LLVM-13 installed successfully"
            elif sudo apt-get install -y llvm-14-dev libllvm14 clang-14; then
                success "LLVM-14 installed successfully"
            else
                warning "Could not install LLVM, will use mcode backend (synthesis may not work)"
            fi
            
            # Icarus Verilog dependencies
            if [[ "$INSTALL_IVERILOG" == "true" ]]; then
                sudo apt-get install -y \
                    autoconf \
                    gperf \
                    flex \
                    bison
            fi
            
            # Verilator dependencies
            if [[ "$INSTALL_VERILATOR" == "true" ]]; then
                sudo apt-get install -y \
                    perl \
                    python3 \
                    make \
                    autoconf \
                    g++ \
                    flex \
                    bison \
                    ccache \
                    libgoogle-perftools-dev \
                    numactl \
                    perl-doc
            fi
            ;;
            
        rhel|fedora|amazon)
            info "Installing dependencies for RHEL-family / Fedora / Amazon Linux (dnf/yum)..."
            
            if command -v dnf >/dev/null 2>&1; then
                PKG_MGR="dnf"
            else
                PKG_MGR="yum"
            fi

            # gcc-gnat (gnatmake) is in EPEL on AlmaLinux/Rocky/RHEL 9; enable repos first.
            ensure_epel_for_gcc_gnat

            # Install GNAT in its own transaction on EL + Amazon: a single large dnf with llvm/boost can
            # resolve only libgnat-devel without libgnat/gcc-gnat, breaking GHDL.
            case "$OS_FAMILY" in
                rhel|amazon)
                    install_rhel_family_gnat_rpms
                    ;;
            esac

            local dnf_extra=()
            case "$OS_FAMILY" in
                rhel|amazon)
                    dnf_extra=(--enablerepo=epel)
                    extend_dnf_extra_for_el_epel_helper_repos dnf_extra
                    ;;
            esac

            # Fedora: gcc-gnat from distro repos. RHEL/Amazon: GNAT already installed above.
            local gnat_pkgs=()
            [[ "$OS_FAMILY" == "fedora" ]] && gnat_pkgs=(gcc-gnat)

            if [[ "$PKG_MGR" == "dnf" ]]; then
                sudo dnf install -y "${dnf_extra[@]}" \
                    gcc \
                    gcc-c++ \
                    git \
                    cmake \
                    pkg-config \
                    curl \
                    wget \
                    unzip \
                    llvm-devel \
                    clang \
                    zlib-devel \
                    boost-devel \
                    "${gnat_pkgs[@]}"
            else
                local yum_extras=()
                case "$OS_FAMILY" in
                    rhel|amazon)
                        yum_extras=(--enablerepo=epel)
                        ;;
                esac
                sudo yum install -y "${yum_extras[@]}" \
                    gcc \
                    gcc-c++ \
                    git \
                    cmake \
                    pkg-config \
                    curl \
                    wget \
                    unzip \
                    "${gnat_pkgs[@]}" \
                    llvm-devel \
                    clang \
                    zlib-devel \
                    boost-devel
            fi

            verify_rhel_gcc_gnat_installed
            ;;
            
        arch)
            info "Installing dependencies for Arch Linux..."
            sudo pacman -S --noconfirm \
                base-devel \
                git \
                cmake \
                pkg-config \
                curl \
                wget \
                unzip \
                gcc-ada \
                llvm \
                clang \
                zlib \
                boost
            ;;
            
        macos)
            info "Installing dependencies for macOS..."
            if ! command -v brew >/dev/null 2>&1; then
                error "Homebrew not found. Please install Homebrew first."
                exit 1
            fi
            
            brew install \
                git \
                cmake \
                pkg-config \
                llvm \
                boost
            ;;
            
        *)
            warning "Unknown or unsupported OS family '$OS_FAMILY' ($OS). You may need to install dependencies manually."
            info "Required dependencies: gcc, git, cmake, GNAT (gnatmake), llvm-dev, clang, zlib-dev"
            ;;
    esac
    
    success "System dependencies step finished (family: $OS_FAMILY)"
}

# Ensure GNAT is available when we are about to build GHDL (covers older script runs or minimal images).
ensure_gnat_for_ghdl_build() {
    if command -v gnatmake >/dev/null 2>&1; then
        return 0
    fi
    info "GNAT (gnatmake) not found; installing Ada toolchain for GHDL build..."
    case "$OS_FAMILY" in
        rhel|amazon)
            install_rhel_family_gnat_rpms
            ;;
        fedora)
            if command -v dnf >/dev/null 2>&1; then
                sudo dnf install -y gcc-gnat
            else
                sudo yum install -y gcc-gnat
            fi
            ;;
        ubuntu|debian)
            sudo apt-get update
            sudo apt-get install -y gnat
            ;;
        arch)
            sudo pacman -S --noconfirm gcc-ada
            ;;
        *)
            warning "Cannot auto-install GNAT for OS family '$OS_FAMILY'; install gnatmake manually."
            return 1
            ;;
    esac
    hash -r 2>/dev/null || true
    if ! command -v gnatmake >/dev/null 2>&1 && [[ -x /usr/bin/gnatmake ]]; then
        export PATH="/usr/bin:$PATH"
    fi
    if ! command -v gnatmake >/dev/null 2>&1; then
        error "gnatmake still not on PATH after installing GNAT packages."
        if command -v rpm >/dev/null 2>&1; then
            info "rpm -q gcc-gnat: $(rpm -q gcc-gnat 2>&1 || true)"
        fi
        info "On EL 9 + EPEL Ada: dnf download -y --enablerepo=epel libgnat gcc-gnat && sudo rpm -Uvh --nodeps libgnat-*.rpm gcc-gnat-*.rpm (dnf install conflicts with base gcc Obsoletes)"
        return 1
    fi
    success "GNAT available: $(command -v gnatmake)"
}

# Init/update the SCORE git submodule at tools/neorv32 (upstream NEORV32 VHDL RTL).
ensure_score_neorv32_submodule() {
    log "=== SCORE NEORV32 RTL submodule ($NEORV32_SUBMODULE_REL) ==="

    if [[ "$SKIP_SCORE_NEORV32_SUBMODULE" == "true" ]]; then
        info "Skipping SCORE NEORV32 submodule (--skip-neorv32-submodule)."
        return 0
    fi

    if ! git -C "$PROJECT_ROOT" rev-parse --git-dir >/dev/null 2>&1; then
        warning "Not a git checkout; cannot init $NEORV32_SUBMODULE_REL. Clone SCORE with git for submodule support."
        return 0
    fi

    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]] || ! grep -qF "path = $NEORV32_SUBMODULE_REL" "$PROJECT_ROOT/.gitmodules" 2>/dev/null; then
        warning ".gitmodules has no $NEORV32_SUBMODULE_REL entry; skipping submodule init."
        return 0
    fi

    info "git -C \"$PROJECT_ROOT\" submodule update --init --recursive $NEORV32_SUBMODULE_REL"
    git -C "$PROJECT_ROOT" submodule update --init --recursive "$NEORV32_SUBMODULE_REL"
    success "NEORV32 RTL submodule ready at $TOOLS_DIR/neorv32"
}

# Build GHDL from source
build_ghdl_from_source() {
    log "=== Building GHDL from Source ==="

    if ! command -v gnatmake >/dev/null 2>&1; then
        error "GNAT is required to build GHDL but 'gnatmake' was not found."
            info "On EL 9: install GNAT via dnf download + rpm --nodeps (see install_neorv32_vhdl.sh); then llvm-devel clang zlib-devel via dnf."
        info "Re-run this script without --skip-deps after installing Ada toolchain packages."
        return 1
    fi
    
    # Check if old GHDL exists and warn
    if command -v ghdl >/dev/null 2>&1; then
        local old_ghdl_version=$(ghdl --version | head -1)
        warning "Existing GHDL found: $old_ghdl_version"
        info "Will build newer GHDL from source and prioritize it in PATH"
    fi
    
    local ghdl_dir="$TOOLS_DIR/ghdl"
    local build_dir="$ghdl_dir/build"
    local install_dir="$TOOLS_DIR/ghdl-install"
    
    # Clean previous build if requested
    if [[ "$CLEAN_BUILD" == "true" ]] && [[ -d "$ghdl_dir" ]]; then
        warning "Cleaning previous GHDL build..."
        rm -rf "$ghdl_dir"
        rm -rf "$install_dir"
    fi
    
    # Clone GHDL repository
    if [[ ! -d "$ghdl_dir" ]]; then
        info "Cloning GHDL repository..."
        cd "$TOOLS_DIR"
        git clone git@github.com:ghdl/ghdl.git
        cd "$ghdl_dir"
    else
        info "Updating GHDL repository..."
        cd "$ghdl_dir"
        git fetch origin
        git checkout master
        git pull origin master
    fi
    
    # Check out latest stable version
    info "Checking out latest stable version..."
    local latest_tag=$(git describe --tags --abbrev=0)
    git checkout "$latest_tag"
    info "Building GHDL version: $latest_tag"
    
    # Create build directory
    mkdir -p "$build_dir"
    cd "$build_dir"
    
    # Configure build - try different LLVM configurations
    info "Configuring GHDL build..."
    
    local llvm_config=""
    local backend_type=""
    
    # Try to find LLVM config in order of preference
    for llvm_ver in "" "-14" "-13" "-12" "-11" "-10"; do
        if command -v "llvm-config$llvm_ver" >/dev/null 2>&1; then
            llvm_config="llvm-config$llvm_ver"
            info "Found LLVM config: $llvm_config"
            local llvm_version=$($llvm_config --version)
            info "LLVM version: $llvm_version"
            break
        fi
    done
    
    # Configure with appropriate backend
    if [[ -n "$llvm_config" ]]; then
        info "Using LLVM backend for GHDL (recommended for synthesis)"
        backend_type="llvm"
        ../configure --with-llvm-config="$llvm_config" --prefix="$install_dir"
    else
        warning "LLVM not found, using mcode backend (synthesis may not work optimally)"
        backend_type="mcode"
        ../configure --prefix="$install_dir"
    fi
    
    # Build GHDL
    info "Building GHDL with $PARALLEL_JOBS parallel jobs using $backend_type backend..."
    if ! make -j$PARALLEL_JOBS; then
        error "GHDL build failed"
        return 1
    fi
    
    # Install GHDL
    info "Installing GHDL to $install_dir..."
    if ! make install; then
        error "GHDL installation failed"
        return 1
    fi
    
    # Update PATH to prioritize new GHDL
    export PATH="$install_dir/bin:$PATH"
    
    # Verify installation
    if command -v ghdl >/dev/null 2>&1; then
        local ghdl_version=$(ghdl --version | head -1)
        local ghdl_path=$(which ghdl)
        success "GHDL built and installed successfully: $ghdl_version"
        info "GHDL location: $ghdl_path"
        
        # Test synthesis support
        if ghdl --help | grep -q "synth"; then
            success "GHDL synthesis support confirmed"
            
            # Test the synth command specifically
            info "Testing GHDL synthesis command..."
            if ghdl help synth >/dev/null 2>&1; then
                success "GHDL synthesis command working"
            else
                warning "GHDL synthesis help unavailable (unexpected for LLVM build)"
            fi
        else
            error "GHDL synthesis support not detected - this may be due to backend choice"
            if [[ "$backend_type" == "mcode" ]]; then
                error "mcode backend does not support synthesis. LLVM backend is required."
                return 1
            fi
        fi
    else
        error "GHDL installation failed - command not found after installation"
        return 1
    fi
}

# Install or build Icarus Verilog
install_icarus_verilog() {
    log "=== Installing Icarus Verilog ==="
    
    # First try package manager
    case "$OS_FAMILY" in
        ubuntu|debian)
            info "Installing Icarus Verilog from package manager..."
            sudo apt-get install -y iverilog
            ;;
        rhel|fedora|amazon)
            if command -v dnf >/dev/null 2>&1; then
                sudo dnf install -y iverilog
            else
                sudo yum install -y iverilog
            fi
            ;;
        arch)
            sudo pacman -S --noconfirm iverilog
            ;;
        macos)
            brew install icarus-verilog
            ;;
        *)
            warning "Package manager installation not available for OS family '$OS_FAMILY' ($OS)"
            ;;
    esac
    
    # Verify installation
    if command -v iverilog >/dev/null 2>&1; then
        # Piping iverilog -V to head closes the pipe early; ivl may print spurious
        # "Unable to get version from ..." on stderr—suppress with 2>/dev/null.
        local iverilog_version=$(iverilog -V 2>/dev/null | head -n 1)
        success "Icarus Verilog installed: $iverilog_version"
    else
        warning "Icarus Verilog installation failed, building from source..."
        build_icarus_from_source
    fi
}

# Build Icarus Verilog from source
build_icarus_from_source() {
    log "=== Building Icarus Verilog from Source ==="
    
    local iverilog_dir="$TOOLS_DIR/iverilog"
    
    # Clean previous build if requested
    if [[ "$CLEAN_BUILD" == "true" ]] && [[ -d "$iverilog_dir" ]]; then
        warning "Cleaning previous Icarus Verilog build..."
        rm -rf "$iverilog_dir"
    fi
    
    # Clone Icarus Verilog repository
    if [[ ! -d "$iverilog_dir" ]]; then
        info "Cloning Icarus Verilog repository..."
        cd "$TOOLS_DIR"
        git clone git@github.com:steveicarus/iverilog.git
        cd "$iverilog_dir"
    else
        info "Updating Icarus Verilog repository..."
        cd "$iverilog_dir"
        git pull origin master
    fi
    
    # Build and install
    info "Building Icarus Verilog..."
    sh autoconf.sh
    ./configure --prefix="$TOOLS_DIR/iverilog-install"
    make -j$PARALLEL_JOBS
    make install
    
    # Add to PATH
    export PATH="$TOOLS_DIR/iverilog-install/bin:$PATH"
    
    # Verify installation
    if command -v iverilog >/dev/null 2>&1; then
        local iverilog_version=$(iverilog -V 2>/dev/null | head -n 1)
        success "Icarus Verilog built and installed: $iverilog_version"
    else
        error "Icarus Verilog build failed"
        return 1
    fi
}

# Clone or update NEORV32-Verilog helper repo and its nested neorv32 submodule.
setup_neorv32_verilog() {
    log "=== Setting up NEORV32-Verilog ==="
    
    local neorv32_verilog_dir="$TOOLS_DIR/neorv32-verilog"
    
    if [[ -d "$neorv32_verilog_dir/.git" ]]; then
        info "NEORV32-Verilog repository exists; updating..."
        cd "$neorv32_verilog_dir"
        git fetch origin
        if git rev-parse --verify origin/main >/dev/null 2>&1; then
            git checkout -q main 2>/dev/null || git checkout -B main origin/main
            git pull --ff-only origin main
        elif git rev-parse --verify origin/master >/dev/null 2>&1; then
            git checkout -q master 2>/dev/null || git checkout -B master origin/master
            git pull --ff-only origin master
        else
            warning "No origin/main or origin/master; skipping pull (update $neorv32_verilog_dir manually)."
        fi
    elif [[ -e "$neorv32_verilog_dir" ]]; then
        error "$neorv32_verilog_dir exists but is not a git repository; remove or rename it, then re-run."
        return 1
    else
        info "Cloning NEORV32-Verilog repository..."
        cd "$TOOLS_DIR"
        git clone "$NEORV32_VERILOG_URL" neorv32-verilog
        cd "$neorv32_verilog_dir"
    fi
    
    # Initialize nested submodules (neorv32 inside neorv32-verilog)
    info "Initializing nested NEORV32 submodule (inside neorv32-verilog)..."
    git submodule update --init --recursive
    
    # Verify NEORV32 version
    if [[ -f "$neorv32_verilog_dir/neorv32/rtl/core/neorv32_package.vhd" ]]; then
        local version=$(grep -rni "$neorv32_verilog_dir/neorv32/rtl/core/neorv32_package.vhd" -e 'hw_version_c' | head -1)
        info "NEORV32 version: $version"
        success "NEORV32-Verilog setup completed"
    else
        error "NEORV32 submodule initialization failed"
        return 1
    fi
}

# Create environment setup script (same layout as rocket_chip_env.sh: under scripts/).
create_environment_script() {
    log "=== Creating Environment Setup Script ==="

    local env_script="$SCRIPT_DIR/neorv32_env.sh"

    cat > "$env_script" << 'EOF2'
#!/bin/bash
# NEORV32 environment — source from the SCORE repo root: source scripts/neorv32_env.sh
# Generated by install_neorv32_vhdl.sh / install_neorv32_verilog.sh; adds project-local GHDL / Icarus to PATH.

_ENV_SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$_ENV_SCRIPT_DIR")"
TOOLS_DIR="$PROJECT_ROOT/tools"

# When sourced from scripts with `set -o pipefail` (e.g. run_neorv32_*.sh), `cmd | head`
# can yield SIGPIPE / non-zero pipeline status and abort the caller under `set -e`.
_first_line() {
    local _out
    _out="$("$@" 2>/dev/null)" || true
    printf '%s\n' "${_out%%$'\n'*}"
}

echo "Setting up NEORV32 environment (PATH)..."

# Add GHDL to PATH (prioritize custom installation over system)
if [[ -d "$TOOLS_DIR/ghdl-install/bin" ]]; then
    export PATH="$TOOLS_DIR/ghdl-install/bin:$PATH"
    echo "✅ Custom GHDL added to PATH (takes priority over system GHDL)"
elif command -v ghdl >/dev/null 2>&1; then
    echo "⚠️  Using system GHDL (may not support synthesis)"
else
    echo "❌ GHDL not found"
fi

# Add Icarus Verilog to PATH
if [[ -d "$TOOLS_DIR/iverilog-install/bin" ]]; then
    export PATH="$TOOLS_DIR/iverilog-install/bin:$PATH"
    echo "✅ Custom Icarus Verilog added to PATH"
elif command -v iverilog >/dev/null 2>&1; then
    echo "✅ Using system Icarus Verilog"
else
    echo "❌ Icarus Verilog not found"
fi

# Add Verilator to PATH
if [[ -d "$TOOLS_DIR/verilator-install/bin" ]]; then
    export PATH="$TOOLS_DIR/verilator-install/bin:$PATH"
    echo "✅ Verilator added to PATH"
fi

# Verify tools and their capabilities
echo ""
echo "=== Tool Verification ==="
if command -v ghdl >/dev/null 2>&1; then
    _ghdl_version=$(_first_line ghdl --version)
    _ghdl_path=$(command -v ghdl)
    echo "GHDL: $_ghdl_version"
    echo "  Location: $_ghdl_path"

    if grep -q "synth" <<<"$(ghdl --help 2>/dev/null || true)"; then
        echo "  ✅ Synthesis support: Available"
        if ghdl help synth >/dev/null 2>&1; then
            echo "  ✅ Synthesis command: Working"
        else
            echo "  ⚠️  Synthesis command: May have issues"
        fi
    else
        echo "  ❌ Synthesis support: Not available"
        echo "  💡 This GHDL version cannot convert VHDL to Verilog"
    fi
else
    echo "GHDL: Not found"
fi

if command -v iverilog >/dev/null 2>&1; then
    _iverilog_version=$(_first_line iverilog -V)
    echo "Icarus Verilog: $_iverilog_version"
else
    echo "Icarus Verilog: Not found"
fi

if command -v verilator >/dev/null 2>&1; then
    _verilator_version=$(_first_line verilator --version)
    echo "Verilator: $_verilator_version"
else
    echo "Verilator: Not installed (optional)"
fi

echo ""
if command -v ghdl >/dev/null 2>&1 && grep -q "synth" <<<"$(ghdl --help 2>/dev/null || true)"; then
    echo "🎉 NEORV32 environment ready (GHDL synthesis)."
    echo "Examples: ./scripts/run_neorv32_verilog.sh  or  ./scripts/generate_neorv32_verilog.sh"
else
    echo "⚠️  Environment incomplete for VHDL→Verilog: install GHDL with synthesis."
    echo "Run: ./scripts/install_neorv32_verilog.sh"
fi
EOF2

    chmod +x "$env_script"
    success "Environment setup script created: $env_script"
}

# Test NEORV32-Verilog conversion
test_conversion() {
    log "=== Testing NEORV32-Verilog Conversion ==="
    
    # Source environment
    # shellcheck source=/dev/null
    source "$SCRIPT_DIR/neorv32_env.sh"
    
    # Run a simple test conversion
    local neorv32_verilog_dir="$TOOLS_DIR/neorv32-verilog"
    if [[ -d "$neorv32_verilog_dir" ]]; then
        local nv_commit
        nv_commit=$(git -C "$neorv32_verilog_dir" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown")
        local smoke_dir="$PROJECT_ROOT/datasets/neorv32-verilog/$nv_commit/.install_smoke"
        mkdir -p "$smoke_dir"
        cp -f "$neorv32_verilog_dir/src/neorv32_verilog_wrapper.vhd" "$smoke_dir/"
        cp -f "$neorv32_verilog_dir/src/convert.sh" "$smoke_dir/"
        
        info "Running test conversion under dataset tree: $smoke_dir"
        if (
            cd "$smoke_dir" || exit 1
            export NEORV32_RTL="$neorv32_verilog_dir/neorv32"
            export SRC_FOLDER="$smoke_dir"
            bash convert.sh
        ); then
            success "Test conversion completed successfully"
            if [[ -f "$smoke_dir/neorv32_verilog_wrapper.v" ]]; then
                local lines
                lines=$(wc -l < "$smoke_dir/neorv32_verilog_wrapper.v")
                success "Generated Verilog file with $lines lines ($smoke_dir/neorv32_verilog_wrapper.v)"
            fi
        else
            error "Test conversion failed"
            return 1
        fi
    else
        error "NEORV32-Verilog directory not found"
        return 1
    fi
}

# Main installation function
main() {
    local start_time=$(date +%s)
    
    log "==================================================================="
    if [[ "${NEORV32_INSTALL_PROFILE:-vhdl}" == "verilog" ]]; then
        log "NEORV32 installation session started (profile=verilog, install_neorv32_verilog.sh → install_neorv32_vhdl.sh)"
    else
        log "NEORV32 installation session started (profile=vhdl, install_neorv32_vhdl.sh)"
    fi
    log "Installation Log: $INSTALL_LOG"
    log "==================================================================="
    
    # Detect OS
    detect_os

    # SCORE tools/neorv32 submodule (VHDL RTL) — always handled here for install / submodule-only runs.
    ensure_score_neorv32_submodule

    if [[ "$ONLY_NEORV32_SUBMODULE" == "true" ]]; then
        log "Submodule-only run finished (--only-neorv32-submodule)."
        log "==================================================================="
        return 0
    fi
    
    # Install system dependencies
    if [[ "$SKIP_DEPS" != "true" ]]; then
        install_system_dependencies
    fi
    
    # Build and install tools
    if [[ "$INSTALL_GHDL" == "true" ]]; then
        prioritize_project_ghdl_path
        # Check if we already have a working GHDL with synthesis support
        if [[ "$FORCE_GHDL_BUILD" == "true" ]] || [[ "$CLEAN_BUILD" == "true" ]]; then
            if [[ "$SKIP_DEPS" != "true" ]]; then
                ensure_gnat_for_ghdl_build
            elif ! command -v gnatmake >/dev/null 2>&1; then
                error "Building GHDL needs GNAT (gnatmake). Re-run without --skip-deps or install gcc-gnat / gnat."
                exit 1
            fi
            info "Force building GHDL from source..."
            build_ghdl_from_source
        elif check_ghdl_synthesis_support; then
            info "Skipping GHDL build - existing installation supports synthesis"
        else
            if [[ "$SKIP_DEPS" != "true" ]]; then
                ensure_gnat_for_ghdl_build
            elif ! command -v gnatmake >/dev/null 2>&1; then
                error "Building GHDL needs GNAT (gnatmake). On EL 9: dnf download -y --enablerepo=epel libgnat gcc-gnat && sudo rpm -Uvh --nodeps libgnat-*.rpm gcc-gnat-*.rpm"
                exit 1
            fi
            info "Building GHDL from source (existing GHDL doesn't support synthesis)..."
            build_ghdl_from_source
        fi
    fi
    
    if [[ "$INSTALL_IVERILOG" == "true" ]]; then
        install_icarus_verilog
    fi
    
    if [[ "$NEORV32_INSTALL_PROFILE" == "verilog" ]]; then
        setup_neorv32_verilog
    else
        info "Skipping tools/neorv32-verilog clone (VHDL install profile; use install_neorv32_verilog.sh for Verilog flow)."
    fi

    create_environment_script

    if [[ "$NEORV32_INSTALL_PROFILE" == "verilog" ]]; then
        test_conversion
    else
        info "Skipping neorv32-verilog conversion smoke test (VHDL install profile)."
    fi
    
    # Summary
    local end_time=$(date +%s)
    local duration=$((end_time - start_time))
    local minutes=$((duration / 60))
    local seconds=$((duration % 60))
    
    log "==================================================================="
    log "Installation Summary"
    log "==================================================================="
    log "Total time: ${minutes}m ${seconds}s"
    
    # Show installed tools
    # shellcheck source=/dev/null
    source "$SCRIPT_DIR/neorv32_env.sh" >/dev/null 2>&1
    
    log "Installed tools:"
    if command -v ghdl >/dev/null 2>&1; then
        success "✅ GHDL: $(ghdl --version | head -1)"
        if ghdl --help | grep -q "synth"; then
            success "✅ GHDL synthesis support confirmed"
        fi
    else
        error "❌ GHDL not found"
    fi
    
    if command -v iverilog >/dev/null 2>&1; then
        success "✅ Icarus Verilog: $(iverilog -V 2>/dev/null | head -n 1)"
    else
        warning "⚠️  Icarus Verilog not found"
    fi
    
    log ""
    log "Installation complete!"
    log "To use the tools, run: source $PROJECT_ROOT/scripts/neorv32_env.sh"
    if [[ "$NEORV32_INSTALL_PROFILE" == "verilog" ]]; then
        log "End-to-end Verilog: $PROJECT_ROOT/scripts/run_neorv32_verilog.sh"
    else
        log "End-to-end VHDL: $PROJECT_ROOT/scripts/run_neorv32_vhdl.sh"
    fi
    log "==================================================================="
}

# Help function
show_help() {
    if [[ "$NEORV32_INSTALL_PROFILE" == "verilog" ]]; then
        echo "NEORV32 Verilog toolchain install — install_neorv32_verilog.sh"
        echo ""
        echo "Usage: install_neorv32_verilog.sh [OPTIONS]  (runs this implementation with profile=verilog)"
        echo ""
        echo "Installs everything for VHDL→Verilog: submodule tools/neorv32, GHDL (synthesis), Icarus,"
        echo "tools/neorv32-verilog clone, scripts/neorv32_env.sh, and a short conversion smoke test."
    else
        echo "NEORV32 VHDL toolchain install — install_neorv32_vhdl.sh"
        echo ""
        echo "Usage: $0 [OPTIONS]"
        echo ""
        echo "Installs OS dependencies, tools/neorv32 submodule, GHDL, Icarus, and scripts/neorv32_env.sh."
        echo "Does not clone tools/neorv32-verilog (use install_neorv32_verilog.sh for that flow)."
    fi
    echo ""
    echo "Options:"
    echo "  -h, --help              Show this help message"
    echo "  --skip-ghdl             Skip GHDL installation"
    echo "  --skip-iverilog         Skip Icarus Verilog installation"
    echo "  --skip-deps             Skip system dependencies installation"
    echo "  --skip-neorv32-submodule  Skip git submodule update for SCORE tools/neorv32"
    echo "  --only-neorv32-submodule  Only run tools/neorv32 submodule init/update, then exit"
    echo "  --clean                 Clean previous builds before installing"
    echo "  --force-ghdl            Force rebuild GHDL even if working version exists"
    echo "  --jobs N                Number of parallel build jobs (default: $(nproc))"
    echo ""
    if [[ "$NEORV32_INSTALL_PROFILE" == "verilog" ]]; then
        echo "Environment:"
        echo "  NEORV32_VERILOG_URL     Clone URL for tools/neorv32-verilog"
        echo ""
    fi
    echo "Examples:"
    echo "  $0                      # Full install"
    echo "  $0 --clean              # Clean rebuild"
    echo "  $0 --skip-deps          # Skip system packages"
    echo "  $0 --jobs 8             # Parallel jobs"
    echo ""
    echo "After installation:"
    echo "  source $PROJECT_ROOT/scripts/neorv32_env.sh"
}

# Parse command line arguments
while [[ $# -gt 0 ]]; do
    case $1 in
        -h|--help)
            show_help
            exit 0
            ;;
        --skip-ghdl)
            INSTALL_GHDL=false
            shift
            ;;
        --skip-iverilog)
            INSTALL_IVERILOG=false
            shift
            ;;
        --skip-deps)
            SKIP_DEPS=true
            shift
            ;;
        --clean)
            CLEAN_BUILD=true
            shift
            ;;
        --force-ghdl)
            FORCE_GHDL_BUILD=true
            shift
            ;;
        --jobs)
            PARALLEL_JOBS="$2"
            shift
            shift
            ;;
        --skip-neorv32-submodule)
            SKIP_SCORE_NEORV32_SUBMODULE=true
            shift
            ;;
        --only-neorv32-submodule)
            ONLY_NEORV32_SUBMODULE=true
            shift
            ;;
        *)
            error "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

# Run main function
main
