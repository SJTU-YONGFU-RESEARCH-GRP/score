#!/bin/bash

# Gemmini Installation and Environment Setup Script
# This script detects and configures the Gemmini (Systolic Array Generator) environment
# including all necessary dependencies and tools for RTL compilation and verification

set -e  # Exit on any error

# Global variables
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOLS_DIR="$PROJECT_ROOT/tools"
GEMMINI_DIR="$TOOLS_DIR/gemmini"
# Dataset root: workshop (Chipyard, conda) and install logs live here (not repo-top logs/).
GEMMINI_DATASET_ROOT="$PROJECT_ROOT/datasets/gemmini"
# Chipyard, Miniconda, and other large tool installs (override with SCORE_GEMMINI_WORKSHOP).
WORKSHOP_DIR="${SCORE_GEMMINI_WORKSHOP:-$GEMMINI_DATASET_ROOT/workshop}"
CHIPYARD_DIR="$WORKSHOP_DIR/chipyard"
# Miniconda install root for Chipyard (build-setup.sh requires conda on PATH).
MINICONDA_ROOT="${MINICONDA_ROOT:-$WORKSHOP_DIR/miniconda3}"
# Install transcript (override with SCORE_GEMMINI_INSTALL_LOG_DIR).
LOG_DIR="${SCORE_GEMMINI_INSTALL_LOG_DIR:-$GEMMINI_DATASET_ROOT/logs}"
INSTALL_LOG="$LOG_DIR/install_gemmini.log"

# Installation options
INSTALL_JAVA=true
INSTALL_SBT=true
INSTALL_CHIPYARD=true
INSTALL_VERILATOR=true
CHECK_ONLY=false
CLEAN_INSTALL=false
SKIP_DEPS=false
FORCE_INSTALL=false
AUTO_INSTALL=false
# When false, skip apt/dnf/pacman/brew package installs (you must provide JDK, build tools, etc.).
INSTALL_SYSTEM_DEPS=true
# Normalized OS family: macos|ubuntu|debian|fedora|rhel|amazon|opensuse|arch|linux|unknown
OS_FAMILY="unknown"
if command -v nproc >/dev/null 2>&1; then
    PARALLEL_JOBS=$(nproc)
elif [[ "$(uname -s)" == "Darwin" ]]; then
    PARALLEL_JOBS=$(sysctl -n hw.ncpu 2>/dev/null || echo 4)
else
    PARALLEL_JOBS=4
fi

# Version requirements
REQUIRED_JAVA_VERSION="11"
REQUIRED_SCALA_VERSION="2.13.10"
CHIPYARD_COMMIT=""

# Create directories (LOG_DIR must exist before any tee; Chipyard runs long and callers may delete repo-top paths).
mkdir -p "$LOG_DIR"
mkdir -p "$WORKSHOP_DIR"

ensure_gemmini_install_log_dir() {
    mkdir -p "$(dirname "$INSTALL_LOG")"
}

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_gemmini
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

command_exists() {
    command -v "$1" >/dev/null 2>&1
}

# True when Chipyard build-setup.sh finished step 1 (env.sh gains conda activate). A stub env.sh
# with only CY_DIR means build-setup failed early (e.g. conda missing) and RISCV is never set.
chipyard_build_setup_completed() {
    local cy="$CHIPYARD_DIR/env.sh"
    [[ -f "$cy" ]] && grep -q "conda activate" "$cy" 2>/dev/null
}

# After sourcing Chipyard env.sh, Spike/riscv-isa-sim headers live under CONDA_PREFIX/riscv-tools.
# Export RISCV when it is unset but that prefix exists (matches Chipyard build-toolchain-extra.sh).
ensure_riscv_for_gemmini_sw() {
    if [[ -n "${RISCV:-}" ]]; then
        return 0
    fi
    if [[ -n "${CONDA_PREFIX:-}" && -d "${CONDA_PREFIX}/riscv-tools/include" ]]; then
        export RISCV="${CONDA_PREFIX}/riscv-tools"
        info "RISCV set to ${RISCV} (Chipyard conda toolchain collateral prefix)"
        return 0
    fi
    return 1
}

# Print dnf or yum for RPM-based systems.
rpm_pkg_manager() {
    if command_exists dnf; then
        echo "dnf"
    else
        echo "yum"
    fi
}

# Run with elevated privileges when not root (same idea as install_rocket_chip.sh).
run_priv() {
    if [[ ${EUID:-$(id -u)} -eq 0 ]]; then
        "$@"
    else
        sudo "$@"
    fi
}

run_priv_log() {
    ensure_gemmini_install_log_dir
    if [[ ${EUID:-$(id -u)} -eq 0 ]]; then
        "$@" 2>&1 | tee -a "$INSTALL_LOG"
        return "${PIPESTATUS[0]}"
    fi
    local quoted
    quoted=$(printf '%q ' "$@")
    quoted=${quoted% }
    if command_exists script && [[ -t 0 ]]; then
        script -q -c "sudo ${quoted}" /dev/null 2>&1 | tee -a "$INSTALL_LOG"
        return "${PIPESTATUS[0]}"
    fi
    sudo "$@" 2>&1 | tee -a "$INSTALL_LOG"
    return "${PIPESTATUS[0]}"
}

java_major_version() {
    if ! command_exists java; then
        echo 0
        return
    fi
    local line v major
    line=$(java -version 2>&1 | head -n1)
    v=$(echo "$line" | sed -n 's/.*version "\([^"]*\)".*/\1/p')
    [[ -z "$v" ]] && echo 0 && return
    major="${v%%.*}"
    if [[ "$major" == "1" ]]; then
        v="${v#*.}"
        echo "${v%%.*}"
    else
        echo "$major"
    fi
}

# If the default `java` is older than REQUIRED_JAVA_VERSION but a matching OpenJDK
# is installed (common on RHEL when java-1.8.0 is still the alternative), put it first on PATH.
ensure_java_major_on_path() {
    local want="$REQUIRED_JAVA_VERSION"
    local current
    current=$(java_major_version)
    if [[ "$current" -ge "$want" ]]; then
        return 0
    fi
    local candidate=""
    shopt -s nullglob
    local jvms=(/usr/lib/jvm/java-${want}-openjdk /usr/lib/jvm/java-${want}-openjdk-*)
    shopt -u nullglob
    for candidate in "${jvms[@]}"; do
        if [[ -n "$candidate" && -d "$candidate" && -x "$candidate/bin/java" ]]; then
            export JAVA_HOME="$candidate"
            export PATH="$JAVA_HOME/bin:$PATH"
            info "JAVA_HOME set to $JAVA_HOME (Java $(java_major_version) for build tools)"
            return 0
        fi
    done
    warning "Java on PATH is still < $want; install java-${want}-openjdk-devel or set JAVA_HOME manually"
    return 0
}

# Chipyard build-setup.sh step 1 runs `conda create` before sourcing conda.sh; conda must exist on PATH.
ensure_conda_for_chipyard() {
    if command_exists conda; then
        local conda_base
        conda_base=$(conda info --base 2>/dev/null) || true
        if [[ -n "$conda_base" && -f "$conda_base/etc/profile.d/conda.sh" ]]; then
            # shellcheck source=/dev/null
            source "$conda_base/etc/profile.d/conda.sh"
        fi
        info "Using conda: $(command -v conda)"
        return 0
    fi

    if [[ -x "$MINICONDA_ROOT/bin/conda" ]]; then
        info "Using existing Miniconda at $MINICONDA_ROOT"
        export PATH="$MINICONDA_ROOT/bin:$PATH"
        # shellcheck source=/dev/null
        source "$MINICONDA_ROOT/etc/profile.d/conda.sh"
        return 0
    fi

    log "=== Installing Miniconda (required by Chipyard; conda was not on PATH) ==="
    mkdir -p "$WORKSHOP_DIR"
    local arch installer_url installer_sh
    arch=$(uname -m)
    case "$arch" in
        x86_64)
            installer_url="https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh"
            ;;
        aarch64|arm64)
            installer_url="https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-aarch64.sh"
            ;;
        *)
            error "Unsupported architecture for Miniconda: $arch (install conda manually)"
            return 1
            ;;
    esac
    installer_sh="$WORKSHOP_DIR/miniconda_installer.sh"
    if command_exists curl; then
        curl -fsSL "$installer_url" -o "$installer_sh"
    elif command_exists wget; then
        wget -q "$installer_url" -O "$installer_sh"
    else
        error "Need curl or wget to download Miniconda"
        return 1
    fi
    if [[ ! -s "$installer_sh" ]]; then
        error "Miniconda installer download failed or empty"
        rm -f "$installer_sh"
        return 1
    fi
    if ! bash "$installer_sh" -b -p "$MINICONDA_ROOT"; then
        error "Miniconda installation failed"
        rm -f "$installer_sh"
        return 1
    fi
    rm -f "$installer_sh"
    export PATH="$MINICONDA_ROOT/bin:$PATH"
    # shellcheck source=/dev/null
    source "$MINICONDA_ROOT/etc/profile.d/conda.sh"
    success "Miniconda installed at $MINICONDA_ROOT"
}

# Conda 25+ may require accepting Anaconda repo ToS before any install using defaults-related
# resolution paths. Chipyard build-setup runs `conda create` for .conda-lock-env and fails with
# CondaToSNonInteractiveError in non-interactive CI/install scripts unless these are accepted.
accept_conda_anaconda_channel_tos() {
    if ! command_exists conda; then
        return 0
    fi
    if ! conda tos accept --help >/dev/null 2>&1; then
        return 0
    fi
    info "Accepting Anaconda pkgs channel Terms of Service (non-interactive; required for Chipyard conda steps)..."
    conda tos accept --override-channels --channel https://repo.anaconda.com/pkgs/main
    conda tos accept --override-channels --channel https://repo.anaconda.com/pkgs/r
}

# Chipyard build-setup.sh uses $(which conda) for conda-lock; after conda.sh is sourced, conda is a
# shell function and `which conda` dumps the function body. Patch to use the real binary path.
fix_chipyard_build_setup_conda_exe() {
    local bs="$CHIPYARD_DIR/scripts/build-setup.sh"
    [[ -f "$bs" ]] || return 0
    if ! grep -qF 'conda-lock install --conda $(which conda)' "$bs" 2>/dev/null; then
        return 0
    fi
    # Single-quoted sed so ${CONDA_EXE:-$(type -P conda)} is written literally into build-setup.sh.
    sed -i 's/conda-lock install --conda $(which conda) /conda-lock install --conda "${CONDA_EXE:-$(type -P conda)}" /' "$bs"
    info "Patched Chipyard scripts/build-setup.sh: conda-lock --conda uses CONDA_EXE / type -P, not which conda."
}

# Sets OS_FAMILY and human-readable OS / VER for logging (aligned with install_rocket_chip.sh).
detect_os() {
    VER=""
    case "${OSTYPE:-}" in
        darwin*)
            OS_FAMILY="macos"
            OS="macOS"
            log "Detected OS: $OS ($OS_FAMILY) $(uname -m)"
            return
            ;;
    esac

    if [[ -f /etc/os-release ]]; then
        # shellcheck source=/dev/null
        . /etc/os-release
        OS="${PRETTY_NAME:-${NAME:-Linux}}"
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
                elif [[ "$like" == *"rhel"* ]] || [[ "$like" == *fedora* ]] || [[ "$like" == *centos* ]]; then
                    OS_FAMILY="rhel"
                elif [[ "$like" == *arch* ]]; then
                    OS_FAMILY="arch"
                elif [[ "$like" == *suse* ]]; then
                    OS_FAMILY="opensuse"
                else
                    OS_FAMILY="linux"
                fi
                ;;
        esac
        log "Detected OS: $OS $VER (family=$OS_FAMILY)"
        return
    fi

    if [[ "${OSTYPE:-}" == linux-gnu* ]]; then
        if [[ -f /etc/redhat-release ]]; then
            OS_FAMILY="rhel"
            OS="Red Hat family"
        elif command_exists apt-get; then
            OS_FAMILY="debian"
            OS="Debian-like (apt)"
        elif command_exists pacman; then
            OS_FAMILY="arch"
            OS="Arch-like"
        elif command_exists zypper; then
            OS_FAMILY="opensuse"
            OS="SUSE-like"
        elif command_exists dnf; then
            OS_FAMILY="fedora"
            OS="RPM/dnf"
        elif command_exists yum; then
            OS_FAMILY="rhel"
            OS="RPM/yum"
        else
            OS_FAMILY="linux"
            OS="Linux (unknown distro)"
        fi
    else
        OS_FAMILY="unknown"
        OS="Unknown"
    fi
    log "Detected OS: $OS $VER (family=$OS_FAMILY)"
}

# Check Gemmini submodule availability
check_gemmini_availability() {
    log "Checking Gemmini submodule availability..."
    
    if [[ ! -d "$GEMMINI_DIR" ]]; then
        error "Gemmini directory not found: $GEMMINI_DIR"
        error "Please ensure Gemmini submodule is initialized:"
        error "  git submodule update --init --recursive tools/gemmini"
        return 1
    fi
    
    if [[ ! -f "$GEMMINI_DIR/build.sbt" ]]; then
        error "Gemmini build.sbt not found. Gemmini submodule may not be properly initialized."
        return 1
    fi
    
    if [[ ! -f "$GEMMINI_DIR/CHIPYARD.hash" ]]; then
        error "CHIPYARD.hash not found. Cannot determine required Chipyard version."
        return 1
    fi
    
    # Read required Chipyard commit
    CHIPYARD_COMMIT=$(cat "$GEMMINI_DIR/CHIPYARD.hash" | tr -d '\n')
    if [[ -z "$CHIPYARD_COMMIT" ]]; then
        error "Empty CHIPYARD.hash file"
        return 1
    fi
    
    success "Gemmini submodule structure verified"
    info "Required Chipyard commit: $CHIPYARD_COMMIT"
    
    # Check Gemmini version
    if [[ -f "$GEMMINI_DIR/build.sbt" ]]; then
        local gemmini_version=$(grep 'version := ' "$GEMMINI_DIR/build.sbt" | sed 's/.*"\(.*\)".*/\1/')
        info "Gemmini version: $gemmini_version"
    fi
    
    return 0
}

# Check prerequisites
check_prerequisites() {
    log "Checking prerequisites..."
    local prereq_failed=0
    
    # Check basic tools
    for tool in git make curl wget unzip; do
        if ! command -v "$tool" >/dev/null 2>&1; then
            error "$tool command not found"
            ((prereq_failed++))
        fi
    done
    
    # Check Gemmini availability
    check_gemmini_availability || ((prereq_failed++))
    
    return $prereq_failed
}

# Enhanced environment detection function
detect_environment_status() {
    log "=== Detecting Current Environment Status ==="
    # Prefer OpenJDK 11 on PATH when installed but not the system default (common on RHEL).
    ensure_java_major_on_path

    # Initialize status tracking
    local java_installed=false
    local sbt_installed=false
    local verilator_installed=false
    local chipyard_installed=false
    local gemmini_env_setup=false
    local system_deps_ok=true
    
    # Check Java installation (major version parsing matches install_rocket_chip.sh)
    if command_exists java; then
        local java_version
        java_version=$(java_major_version)
        if [[ "$java_version" -ge "$REQUIRED_JAVA_VERSION" ]]; then
            success "✅ Java: $(java -version 2>&1 | head -1)"
            java_installed=true
        else
            warning "❌ Java: Version $java_version < required $REQUIRED_JAVA_VERSION"
        fi
    else
        warning "❌ Java: Not installed"
    fi
    
    # Check SBT installation
    if command -v sbt >/dev/null 2>&1; then
        local sbt_version=$(sbt --version 2>/dev/null | grep "sbt version" | awk '{print $4}' || echo "unknown")
        success "✅ SBT: $sbt_version"
        sbt_installed=true
    else
        warning "❌ SBT: Not installed"
    fi
    
    # Check Verilator installation
    if command -v verilator >/dev/null 2>&1; then
        local verilator_version=$(verilator --version | head -1)
        success "✅ Verilator: $verilator_version"
        verilator_installed=true
    else
        warning "❌ Verilator: Not installed"
    fi
    
    # Check Chipyard installation (stub env.sh from a failed build-setup is not "installed")
    if chipyard_build_setup_completed; then
        success "✅ Chipyard: Available at $CHIPYARD_DIR (build-setup conda hook present)"
        chipyard_installed=true

        # Check if it's the correct commit
        if [[ -d "$CHIPYARD_DIR/.git" ]]; then
            cd "$CHIPYARD_DIR"
            local current_commit
            current_commit=$(git rev-parse HEAD)
            if [[ "$current_commit" == "$CHIPYARD_COMMIT" ]]; then
                success "✅ Chipyard commit: Correct ($CHIPYARD_COMMIT)"
            else
                warning "⚠️  Chipyard commit: $current_commit (expected: $CHIPYARD_COMMIT)"
            fi
            cd "$PROJECT_ROOT"
        fi
    elif [[ -f "$CHIPYARD_DIR/env.sh" ]]; then
        if [[ "$INSTALL_CHIPYARD" == "true" ]]; then
            info "⏭️  Chipyard: env.sh present; build-setup not finished yet — will run during this install."
        else
            warning "⚠️  Chipyard: env.sh exists but build-setup did not finish (no conda activation in env.sh)."
            warning "    Typical cause: conda was missing when build-setup ran. Enable Chipyard install or run build-setup manually."
        fi
    else
        warning "❌ Chipyard: Not installed or env.sh missing"
    fi
    
    # Check Gemmini environment setup
    if [[ -f "$PROJECT_ROOT/setup_gemmini_env.sh" ]]; then
        success "✅ Gemmini environment script: Available"
        gemmini_env_setup=true
    else
        if [[ "$INSTALL_CHIPYARD" == "true" ]] || ! chipyard_build_setup_completed; then
            info "⏭️  Gemmini environment script: not created yet — generated after Chipyard/Gemmini setup completes."
        else
            warning "❌ Gemmini environment script: Missing"
        fi
    fi

    # Chipyard build-setup requires conda on PATH (or we install Miniconda under WORKSHOP_DIR)
    if command_exists conda || [[ -x "$MINICONDA_ROOT/bin/conda" ]]; then
        success "✅ Conda: $(command -v conda 2>/dev/null || echo "$MINICONDA_ROOT/bin/conda")"
    elif [[ "$chipyard_installed" != true && "$INSTALL_CHIPYARD" == "true" ]]; then
        info "📦 Conda: not on PATH yet (Miniconda will be installed under $MINICONDA_ROOT for Chipyard)"
    else
        info "⏭️  Conda: not required for current plan or Chipyard already present"
    fi
    
    # Check system dependencies (per OS family; skip when not using package installs)
    local missing_deps=()
    if [[ "$INSTALL_SYSTEM_DEPS" != "true" ]] || [[ "$SKIP_DEPS" == "true" ]]; then
        info "Skipping system dependency package check (--no-system-deps or --skip-deps)"
    else
        case "$OS_FAMILY" in
            ubuntu|debian)
                local deps=("build-essential" "cmake" "python3" "autoconf" "automake" "curl" "libmpc-dev" "libmpfr-dev" "libgmp-dev" "gawk" "bison" "flex" "libtool" "patchutils" "bc" "zlib1g-dev" "libexpat-dev" "device-tree-compiler")
                for dep in "${deps[@]}"; do
                    if ! dpkg -l | grep -q "^ii  ${dep}[: ]"; then
                        missing_deps+=("$dep")
                        system_deps_ok=false
                    fi
                done
                ;;
            fedora|rhel|amazon)
                local deps=(gcc gcc-c++ git cmake python3 autoconf automake libtool gawk bison flex zlib-devel expat-devel dtc)
                local pm
                pm=$(rpm_pkg_manager)
                for dep in "${deps[@]}"; do
                    if ! rpm -q "$dep" >/dev/null 2>&1; then
                        missing_deps+=("$dep")
                        system_deps_ok=false
                    fi
                done
                ;;
            arch)
                local deps=(base-devel git cmake python autoconf automake libtool gawk bison flex zlib expat dtc)
                for dep in "${deps[@]}"; do
                    if ! pacman -Q "$dep" >/dev/null 2>&1; then
                        missing_deps+=("$dep")
                        system_deps_ok=false
                    fi
                done
                ;;
            opensuse)
                info "OpenSUSE: assuming devel pattern or manual deps; not probing every package"
                ;;
            macos)
                if command_exists brew; then
                    for dep in git cmake python3 autoconf automake libtool flex bison; do
                        if ! brew list "$dep" >/dev/null 2>&1; then
                            missing_deps+=("$dep")
                            system_deps_ok=false
                        fi
                    done
                else
                    system_deps_ok=false
                    missing_deps+=("homebrew")
                fi
                ;;
            *)
                info "Skipping detailed system dependency check for OS family=$OS_FAMILY"
                ;;
        esac
    fi
    
    if [[ $system_deps_ok == true ]]; then
        success "✅ System dependencies: Available"
    else
        warning "❌ System dependencies: Missing ${missing_deps[*]}"
    fi
    
    # Set global status variables (explicit booleans; avoid broken "!$var" exports)
    if [[ "$java_installed" == true ]]; then JAVA_NEEDS_INSTALL=false; else JAVA_NEEDS_INSTALL=true; fi
    if [[ "$sbt_installed" == true ]]; then SBT_NEEDS_INSTALL=false; else SBT_NEEDS_INSTALL=true; fi
    if [[ "$verilator_installed" == true ]]; then VERILATOR_NEEDS_INSTALL=false; else VERILATOR_NEEDS_INSTALL=true; fi
    if [[ "$chipyard_installed" == true ]]; then CHIPYARD_NEEDS_INSTALL=false; else CHIPYARD_NEEDS_INSTALL=true; fi
    if [[ "$gemmini_env_setup" == true ]]; then GEMMINI_ENV_NEEDS_SETUP=false; else GEMMINI_ENV_NEEDS_SETUP=true; fi
    if [[ "$system_deps_ok" == true ]]; then SYSTEM_DEPS_NEEDED=false; else SYSTEM_DEPS_NEEDED=true; fi
    export JAVA_NEEDS_INSTALL SBT_NEEDS_INSTALL VERILATOR_NEEDS_INSTALL CHIPYARD_NEEDS_INSTALL GEMMINI_ENV_NEEDS_SETUP SYSTEM_DEPS_NEEDED

    [[ "$INSTALL_JAVA" != "true" ]] && JAVA_NEEDS_INSTALL=false
    [[ "$INSTALL_SBT" != "true" ]] && SBT_NEEDS_INSTALL=false
    [[ "$INSTALL_VERILATOR" != "true" ]] && VERILATOR_NEEDS_INSTALL=false
    [[ "$INSTALL_CHIPYARD" != "true" ]] && CHIPYARD_NEEDS_INSTALL=false
    if [[ "$INSTALL_SYSTEM_DEPS" != "true" ]] || [[ "$SKIP_DEPS" == "true" ]]; then SYSTEM_DEPS_NEEDED=false; fi
    
    log ""
    log "=== Installation Plan ==="
    
    if [[ $system_deps_ok != true ]]; then
        info "📦 Will install: System dependencies"
    else
        info "⏭️  Will skip: System dependencies (already installed)"
    fi
    
    if [[ $java_installed != true ]]; then
        info "📦 Will install: Java $REQUIRED_JAVA_VERSION"
    else
        info "⏭️  Will skip: Java (already installed)"
    fi
    
    if [[ $sbt_installed != true ]]; then
        info "📦 Will install: SBT (Scala Build Tool)"
    else
        info "⏭️  Will skip: SBT (already installed)"
    fi
    
    if [[ $verilator_installed != true && $INSTALL_VERILATOR == true ]]; then
        info "📦 Will install: Verilator"
    else
        info "⏭️  Will skip: Verilator (already installed or disabled)"
    fi
    
    if [[ $chipyard_installed != true ]]; then
        info "📦 Will install: Chipyard ($CHIPYARD_COMMIT)"
    else
        info "⏭️  Will skip: Chipyard (already installed)"
    fi
    
    if [[ $gemmini_env_setup != true ]]; then
        info "📦 Will setup: Gemmini environment"
    else
        info "⏭️  Will skip: Gemmini environment setup (already done)"
    fi
    
    # Calculate what actually needs to be done
    local needs_work=false
    if [[ $system_deps_ok != true && $SKIP_DEPS != true ]] || \
       [[ $java_installed != true ]] || \
       [[ $sbt_installed != true ]] || \
       [[ $verilator_installed != true && $INSTALL_VERILATOR == true ]] || \
       [[ $chipyard_installed != true && $INSTALL_CHIPYARD == true ]] || \
       [[ $gemmini_env_setup != true ]]; then
        needs_work=true
    fi
    
    if [[ $needs_work == false ]]; then
        success "🎉 All components are already installed and configured!"
        info "You can run: source $PROJECT_ROOT/setup_gemmini_env.sh"
        info "Then use: ./scripts/generate_gemmini.sh"
        return 1  # Signal that no installation is needed
    fi
    
    return 0  # Signal that installation is needed
}

# Install system dependencies - only if needed
install_system_dependencies() {
    if [[ "$INSTALL_SYSTEM_DEPS" != "true" ]] || [[ "$SKIP_DEPS" == "true" ]]; then
        info "Skipping system dependencies (--no-system-deps or --skip-deps)"
        return 0
    fi
    if [[ $SYSTEM_DEPS_NEEDED != true ]]; then
        info "Skipping system dependencies installation (already available)"
        return 0
    fi

    log "=== Installing Missing System Dependencies ==="
    if [[ ${EUID:-$(id -u)} -ne 0 ]] && command_exists sudo; then
        info "If sudo asks for a password, type it in this terminal (output is also logged)."
    fi

    case "$OS_FAMILY" in
        ubuntu|debian)
            info "Installing dependencies for Debian/Ubuntu..."
            if ! run_priv_log apt-get update; then
                error "apt-get update failed"
                return 1
            fi
            if ! run_priv_log apt-get install -y \
                build-essential \
                git \
                cmake \
                pkg-config \
                curl \
                wget \
                unzip \
                python3 \
                python3-pip \
                tcl \
                expect \
                autoconf \
                automake \
                autotools-dev \
                libmpc-dev \
                libmpfr-dev \
                libgmp-dev \
                gawk \
                bison \
                flex \
                texinfo \
                gperf \
                libtool \
                patchutils \
                bc \
                zlib1g-dev \
                libexpat-dev \
                device-tree-compiler; then
                error "apt-get install failed"
                return 1
            fi
            if apt-cache search --names-only '^iverilog$' | grep -q iverilog; then
                run_priv_log apt-get install -y iverilog && success "Icarus Verilog installed"
            fi
            if apt-cache search --names-only '^gtkwave$' | grep -q gtkwave; then
                run_priv_log apt-get install -y gtkwave && success "GTKWave installed"
            fi
            ;;
        fedora|rhel|amazon)
            info "Installing dependencies for RPM-based Linux ($OS_FAMILY)..."
            local PKG_MGR
            PKG_MGR=$(rpm_pkg_manager)
            if ! run_priv_log "$PKG_MGR" install -y \
                gcc \
                gcc-c++ \
                git \
                cmake \
                pkg-config \
                curl \
                wget \
                unzip \
                python3 \
                python3-pip \
                tcl \
                expect \
                autoconf \
                automake \
                libtool \
                gawk \
                bison \
                flex \
                texinfo \
                gperf \
                patchutils \
                bc \
                zlib-devel \
                expat-devel \
                dtc; then
                error "$PKG_MGR install failed"
                return 1
            fi
            ;;
        opensuse)
            info "Installing dependencies for OpenSUSE..."
            if ! run_priv_log zypper refresh -y; then
                warning "zypper refresh reported issues; continuing..."
            fi
            if ! run_priv_log zypper install -y -t pattern devel_basis; then
                warning "pattern devel_basis install failed or unavailable; installing packages individually..."
            fi
            if ! run_priv_log zypper install -y \
                git \
                cmake \
                pkg-config \
                curl \
                wget \
                unzip \
                python3 \
                python3-pip \
                autoconf \
                automake \
                libtool \
                gcc \
                gcc-c++ \
                flex \
                bison \
                gawk \
                zlib-devel \
                libexpat-devel \
                dtc; then
                error "zypper install failed"
                return 1
            fi
            ;;
        arch)
            info "Installing dependencies for Arch Linux..."
            if ! run_priv_log pacman -Sy --noconfirm; then
                error "pacman sync failed"
                return 1
            fi
            if ! run_priv_log pacman -S --needed --noconfirm \
                base-devel \
                git \
                cmake \
                pkg-config \
                curl \
                wget \
                unzip \
                python \
                python-pip \
                tcl \
                expect \
                autoconf \
                automake \
                libtool \
                gawk \
                bison \
                flex \
                texinfo \
                gperf \
                patchutils \
                bc \
                zlib \
                expat \
                dtc; then
                error "pacman install failed"
                return 1
            fi
            ;;
        macos)
            info "Installing dependencies for macOS..."
            if ! command_exists brew; then
                error "Homebrew not found. Please install Homebrew first."
                return 1
            fi
            if ! brew install \
                git \
                cmake \
                pkg-config \
                python3 \
                tcl-tk \
                autoconf \
                automake \
                libtool \
                gawk \
                gnu-sed \
                gmp \
                mpfr \
                libmpc \
                isl \
                zlib \
                expat >> "$INSTALL_LOG" 2>&1; then
                error "brew install failed"
                return 1
            fi
            ;;
        *)
            warning "Unknown or generic OS family '$OS_FAMILY'. Install build dependencies manually."
            info "Required: gcc/g++, git, cmake, python3, autoconf, automake, flex, bison, curl, zlib, expat, dtc"
            return 0
            ;;
    esac

    success "System dependencies step finished"
}

# Install Java - only if needed
install_java() {
    if [[ "$INSTALL_JAVA" != "true" ]]; then
        info "Skipping Java (--skip-java)"
        return 0
    fi
    if [[ $JAVA_NEEDS_INSTALL != true ]]; then
        info "Skipping Java installation (already available)"
        return 0
    fi

    log "=== Installing Java $REQUIRED_JAVA_VERSION ==="

    case "$OS_FAMILY" in
        ubuntu|debian)
            info "Installing OpenJDK $REQUIRED_JAVA_VERSION..."
            if ! run_priv_log apt-get install -y "openjdk-$REQUIRED_JAVA_VERSION-jdk"; then
                error "OpenJDK install failed"
                return 1
            fi
            ;;
        fedora|rhel|amazon)
            local PKG_MGR
            PKG_MGR=$(rpm_pkg_manager)
            if ! run_priv_log "$PKG_MGR" install -y "java-$REQUIRED_JAVA_VERSION-openjdk-devel"; then
                error "OpenJDK install failed"
                return 1
            fi
            ;;
        arch)
            if ! run_priv_log pacman -S --needed --noconfirm "jdk$REQUIRED_JAVA_VERSION-openjdk"; then
                error "OpenJDK install failed"
                return 1
            fi
            ;;
        opensuse)
            if ! run_priv_log zypper install -y "java-$REQUIRED_JAVA_VERSION-openjdk-devel"; then
                error "OpenJDK install failed"
                return 1
            fi
            ;;
        macos)
            if ! command_exists brew; then
                error "Homebrew not found. Please install Homebrew first."
                return 1
            fi
            if ! brew install "openjdk@$REQUIRED_JAVA_VERSION" >> "$INSTALL_LOG" 2>&1; then
                error "OpenJDK brew install failed"
                return 1
            fi
            ;;
        *)
            warning "No automatic Java install recipe for OS family '$OS_FAMILY'."
            error "Install JDK $REQUIRED_JAVA_VERSION+ manually, then re-run this script."
            return 1
            ;;
    esac

    ensure_java_major_on_path

    if command -v java >/dev/null 2>&1; then
        local java_version
        java_version=$(java -version 2>&1 | head -1)
        success "Java installed: $java_version"
    else
        error "Java installation failed"
        return 1
    fi
}

# Install SBT (Scala Build Tool) - only if needed
install_sbt() {
    if [[ "$INSTALL_SBT" != "true" ]]; then
        info "Skipping SBT (--skip-sbt)"
        return 0
    fi
    if [[ $SBT_NEEDS_INSTALL != true ]]; then
        info "Skipping SBT installation (already available)"
        return 0
    fi

    log "=== Installing SBT (Scala Build Tool) ==="

    case "$OS_FAMILY" in
        ubuntu|debian)
            info "Installing SBT via apt repository..."
            curl -fsSL https://www.scala-sbt.org/sbt-rpm.asc | run_priv gpg --dearmor -o /usr/share/keyrings/sbt-archive-keyring.gpg
            echo "deb [signed-by=/usr/share/keyrings/sbt-archive-keyring.gpg] https://repo.scala-sbt.org/scalasbt/debian all main" | run_priv tee /etc/apt/sources.list.d/sbt.list >/dev/null
            echo "deb [signed-by=/usr/share/keyrings/sbt-archive-keyring.gpg] https://repo.scala-sbt.org/scalasbt/debian /" | run_priv tee /etc/apt/sources.list.d/sbt_old.list >/dev/null
            run_priv_log apt-get update
            run_priv_log apt-get install -y sbt
            ;;
        fedora|rhel|amazon)
            info "Installing SBT via rpm repository..."
            curl -fsSL https://www.scala-sbt.org/sbt-rpm.asc | run_priv rpm --import -
            curl -fsSL https://www.scala-sbt.org/sbt-rpm.repo | run_priv tee /etc/yum.repos.d/sbt-rpm.repo >/dev/null
            local PKG_MGR
            PKG_MGR=$(rpm_pkg_manager)
            run_priv_log "$PKG_MGR" install -y sbt
            ;;
        arch)
            info "Installing SBT via pacman..."
            run_priv_log pacman -S --needed --noconfirm sbt
            ;;
        opensuse)
            info "Installing SBT manually (OpenSUSE; no distro repo in script)..."
            local sbt_version="1.8.2"
            local sbt_url="https://github.com/sbt/sbt/releases/download/v${sbt_version}/sbt-${sbt_version}.tgz"
            mkdir -p "$TOOLS_DIR"
            cd "$TOOLS_DIR"
            wget -O "sbt-$sbt_version.tgz" "$sbt_url"
            tar -xzf "sbt-$sbt_version.tgz"
            rm -f "sbt-$sbt_version.tgz"
            export PATH="$TOOLS_DIR/sbt/bin:$PATH"
            cd "$PROJECT_ROOT"
            ;;
        macos)
            if ! command_exists brew; then
                error "Homebrew not found. Please install Homebrew first."
                return 1
            fi
            brew install sbt >> "$INSTALL_LOG" 2>&1
            ;;
        *)
            warning "Installing SBT manually into $TOOLS_DIR/sbt..."
            local sbt_version="1.8.2"
            local sbt_url="https://github.com/sbt/sbt/releases/download/v$sbt_version/sbt-$sbt_version.tgz"
            mkdir -p "$TOOLS_DIR/sbt"
            cd "$TOOLS_DIR"
            wget -O "sbt-$sbt_version.tgz" "$sbt_url"
            tar -xzf "sbt-$sbt_version.tgz"
            rm "sbt-$sbt_version.tgz"
            export PATH="$TOOLS_DIR/sbt/bin:$PATH"
            grep -q 'tools/sbt/bin' "$HOME/.bashrc" 2>/dev/null || echo "export PATH=\"$TOOLS_DIR/sbt/bin:\$PATH\"" >> "$HOME/.bashrc"
            cd "$PROJECT_ROOT"
            ;;
    esac

    cd "$PROJECT_ROOT"

    if command -v sbt >/dev/null 2>&1; then
        local sbt_version=$(sbt --version 2>/dev/null | grep "sbt version" | awk '{print $4}' || echo "installed")
        success "SBT installed: $sbt_version"
    else
        error "SBT installation failed"
        return 1
    fi
}

# Install Verilator - only if needed
install_verilator() {
    if [[ "$INSTALL_VERILATOR" != "true" ]]; then
        info "Skipping Verilator (--skip-verilator)"
        return 0
    fi
    if [[ $VERILATOR_NEEDS_INSTALL != true ]]; then
        info "Skipping Verilator installation (already available)"
        return 0
    fi

    log "=== Installing Verilator ==="

    case "$OS_FAMILY" in
        ubuntu|debian)
            if run_priv_log apt-get install -y verilator; then
                success "Verilator installed via package manager"
                return 0
            fi
            ;;
        fedora|rhel|amazon)
            local PKG_MGR
            PKG_MGR=$(rpm_pkg_manager)
            if run_priv_log "$PKG_MGR" install -y verilator; then
                success "Verilator installed via $PKG_MGR"
                return 0
            fi
            ;;
        arch)
            if run_priv_log pacman -S --needed --noconfirm verilator; then
                success "Verilator installed via pacman"
                return 0
            fi
            ;;
        opensuse)
            if run_priv_log zypper install -y verilator; then
                success "Verilator installed via zypper"
                return 0
            fi
            ;;
        macos)
            if command_exists brew && brew install verilator >> "$INSTALL_LOG" 2>&1; then
                success "Verilator installed via Homebrew"
                return 0
            fi
            ;;
    esac

    warning "Building Verilator from source..."
    local verilator_dir="$TOOLS_DIR/verilator"
    local verilator_url="${VERILATOR_GIT_URL:-https://github.com/verilator/verilator.git}"

    if [[ ! -d "$verilator_dir" ]]; then
        git clone "$verilator_url" "$verilator_dir"
    fi

    cd "$verilator_dir"
    autoconf
    ./configure --prefix="$TOOLS_DIR/verilator-install"
    make -j"$PARALLEL_JOBS"
    make install

    export PATH="$TOOLS_DIR/verilator-install/bin:$PATH"
    
    if command -v verilator >/dev/null 2>&1; then
        local verilator_version=$(verilator --version | head -1)
        success "Verilator built and installed: $verilator_version"
    else
        error "Verilator installation failed"
        return 1
    fi
}

# Install Chipyard - only if needed
install_chipyard() {
    if [[ "$INSTALL_CHIPYARD" != "true" ]]; then
        info "Skipping Chipyard (--skip-chipyard)"
        return 0
    fi
    if [[ $CHIPYARD_NEEDS_INSTALL != true ]]; then
        info "Skipping Chipyard installation (already available)"
        return 0
    fi

    log "=== Installing Chipyard ==="

    local chipyard_url="${CHIPYARD_GIT_URL:-https://github.com/ucb-bar/chipyard.git}"

    if [[ ! -d "$CHIPYARD_DIR" ]]; then
        log "Cloning Chipyard repository..."
        git clone "$chipyard_url" "$CHIPYARD_DIR"
        
        if [[ $? -ne 0 ]]; then
            error "Failed to clone Chipyard repository"
            return 1
        fi
    fi
    
    cd "$CHIPYARD_DIR"

    ensure_java_major_on_path
    if ! ensure_conda_for_chipyard; then
        error "Could not provide conda for Chipyard. Install Miniconda/Anaconda or set PATH, then re-run."
        return 1
    fi
    if ! accept_conda_anaconda_channel_tos; then
        error "Could not accept conda channel Terms of Service. Run manually: conda tos accept --override-channels --channel https://repo.anaconda.com/pkgs/main (and pkgs/r)."
        return 1
    fi

    # Checkout specific commit required by Gemmini
    log "Checking out Chipyard commit: $CHIPYARD_COMMIT"
    git fetch
    git checkout "$CHIPYARD_COMMIT"
    # After checkout, re-apply: upstream uses $(which conda) which breaks once conda is a shell function.
    fix_chipyard_build_setup_conda_exe

    # Run Chipyard build setup
    log "Running Chipyard build setup (this may take a long time)..."
    info "Building RISC-V toolchain with parallel jobs: $PARALLEL_JOBS"
    
    if ! ./build-setup.sh riscv-tools -s 6 -s 7 -s 8 -s 9 -v; then
        error "Chipyard build setup failed"
        return 1
    fi
    
    success "Chipyard installation completed"
    
    # Test environment
    if [[ -f "env.sh" ]]; then
        source "env.sh"
        success "Chipyard environment loaded"
    else
        error "Cannot find env.sh after build setup"
        return 1
    fi
}

# Setup Gemmini environment
setup_gemmini_environment() {
    if [[ $GEMMINI_ENV_NEEDS_SETUP != true ]]; then
        info "Skipping Gemmini environment setup (already configured)"
        return 0
    fi
    
    log "=== Setting up Gemmini Environment ==="
    
    # Ensure Chipyard environment is available
    if [[ ! -f "$CHIPYARD_DIR/env.sh" ]]; then
        error "Chipyard environment not found. Install Chipyard first."
        return 1
    fi
    
    # Source Chipyard environment (requires conda on PATH; ensure_conda runs inside install_chipyard)
    cd "$CHIPYARD_DIR"
    if ! ensure_conda_for_chipyard; then
        error "Conda required to source Chipyard env.sh. install_chipyard should have installed Miniconda."
        return 1
    fi
    # shellcheck source=/dev/null
    source "env.sh"
    if ! ensure_riscv_for_gemmini_sw; then
        error "RISCV is unset after sourcing Chipyard env.sh and no ${CONDA_PREFIX:-<empty>}/riscv-tools/include found."
        error "Complete Chipyard setup: cd $CHIPYARD_DIR && ./build-setup.sh riscv-tools -s 6 -s 7 -s 8 -s 9 -v"
        return 1
    fi
    
    # Install Gemmini software dependencies
    log "Installing Gemmini software library..."
    cd "$GEMMINI_DIR"
    
    # Install libgemmini
    if [[ -d "software/libgemmini" ]]; then
        make -C software/libgemmini install
        success "libgemmini installed"
    fi
    
    # Build Gemmini software tests
    if [[ -d "software/gemmini-rocc-tests" ]]; then
        cd "software/gemmini-rocc-tests"
        if ./build.sh; then
            success "Gemmini software tests built"
        else
            warning "Gemmini software tests build failed but continuing"
        fi
    fi
    
    success "Gemmini environment setup completed"
}

# Create Gemmini environment script
create_gemmini_env_script() {
    log "=== Creating Gemmini Environment Script ==="
    
    local env_script="$PROJECT_ROOT/setup_gemmini_env.sh"
    
    cat > "$env_script" << 'EOF'
#!/bin/bash
# Gemmini Environment Setup Script
# Source this script to set up the Gemmini development environment

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TOOLS_DIR="$SCRIPT_DIR/tools"
GEMMINI_DIR="$TOOLS_DIR/gemmini"
WORKSHOP_DIR="${SCORE_GEMMINI_WORKSHOP:-$SCRIPT_DIR/datasets/gemmini/workshop}"
CHIPYARD_DIR="$WORKSHOP_DIR/chipyard"

# Chipyard env expects `conda` on PATH (install_gemmini.sh may install Miniconda here).
if [[ -x "$WORKSHOP_DIR/miniconda3/bin/conda" ]]; then
    export PATH="$WORKSHOP_DIR/miniconda3/bin:$PATH"
fi

echo "Setting up Gemmini development environment..."

# Set Gemmini environment variables
export GEMMINI_ROOT="$GEMMINI_DIR"

# Add local bin to PATH
if [[ -d "$HOME/.local/bin" ]]; then
    export PATH="$HOME/.local/bin:$PATH"
fi

# Add Verilator to PATH if installed locally
if [[ -d "$TOOLS_DIR/verilator-install/bin" ]]; then
    export PATH="$TOOLS_DIR/verilator-install/bin:$PATH"
fi

# Add SBT to PATH if installed locally
if [[ -d "$TOOLS_DIR/sbt/bin" ]]; then
    export PATH="$TOOLS_DIR/sbt/bin:$PATH"
fi

# Source Chipyard environment if available
if [[ -f "$CHIPYARD_DIR/env.sh" ]]; then
    echo "Loading Chipyard environment..."
    cd "$CHIPYARD_DIR"
    source "env.sh"
    # Spike / libgemmini expect RISCV; Chipyard installs collateral under CONDA_PREFIX/riscv-tools.
    if [[ -z "${RISCV:-}" && -n "${CONDA_PREFIX:-}" && -d "${CONDA_PREFIX}/riscv-tools/include" ]]; then
        export RISCV="${CONDA_PREFIX}/riscv-tools"
    fi
    cd "$SCRIPT_DIR"
else
    echo "⚠️  Chipyard environment not found at: $CHIPYARD_DIR/env.sh"
fi

echo ""
echo "=== Gemmini Environment Status ==="

# Check Gemmini availability
if [[ -d "$GEMMINI_DIR" && -f "$GEMMINI_DIR/build.sbt" ]]; then
    echo "✅ Gemmini: Available in $GEMMINI_DIR"
    if [[ -f "$GEMMINI_DIR/build.sbt" ]]; then
        local gemmini_version=$(grep 'version := ' "$GEMMINI_DIR/build.sbt" | sed 's/.*"\(.*\)".*/\1/')
        echo "  Version: $gemmini_version"
    fi
else
    echo "❌ Gemmini: Not found or not initialized"
fi

# Check Chipyard
if [[ -f "$CHIPYARD_DIR/env.sh" ]]; then
    echo "✅ Chipyard: Available in $CHIPYARD_DIR"
    if [[ -n "$RISCV" ]]; then
        echo "  RISC-V toolchain: $RISCV"
    fi
else
    echo "❌ Chipyard: Not found"
fi

# Check tools
if command -v java >/dev/null 2>&1; then
    local java_version=$(java -version 2>&1 | head -1)
    echo "✅ Java: $java_version"
else
    echo "❌ Java: Not found"
fi

if command -v sbt >/dev/null 2>&1; then
    local sbt_version=$(sbt --version 2>/dev/null | grep "sbt version" | awk '{print $4}' || echo "unknown")
    echo "✅ SBT: $sbt_version"
else
    echo "❌ SBT: Not found"
fi

if command -v verilator >/dev/null 2>&1; then
    local verilator_version=$(verilator --version 2>/dev/null | head -1)
    echo "✅ Verilator: $verilator_version"
else
    echo "⚠️  Verilator: Not found (optional)"
fi

echo ""
if [[ -d "$GEMMINI_DIR" ]] && [[ -f "$CHIPYARD_DIR/env.sh" ]] && command -v java >/dev/null 2>&1 && command -v sbt >/dev/null 2>&1; then
    echo "🎉 Gemmini environment ready!"
    echo "You can now run: ./scripts/generate_gemmini.sh"
else
    echo "⚠️  Gemmini environment incomplete. Run: ./scripts/install_gemmini.sh"
fi
EOF
    
    chmod +x "$env_script"
    success "Gemmini environment script created: $env_script"
}

# Test Gemmini functionality
test_gemmini_functionality() {
    log "=== Testing Gemmini Functionality ==="
    
    # Source the environment
    source "$PROJECT_ROOT/setup_gemmini_env.sh" >/dev/null 2>&1
    
    cd "$GEMMINI_DIR"
    
    # Test SBT compilation
    info "Testing SBT project compilation..."
    if timeout 300 sbt "compile"; then
        success "Gemmini SBT compilation working"
    else
        warning "Gemmini SBT compilation test failed or timed out"
    fi
    
    # Test software library if available
    if [[ -d "software/gemmini-rocc-tests/build" ]]; then
        local test_count=$(find software/gemmini-rocc-tests/build -name "*-baremetal" | wc -l)
        if [[ $test_count -gt 0 ]]; then
            success "Gemmini software tests available ($test_count tests)"
        fi
    fi
    
    success "Gemmini functionality tests completed"
}

# Main installation function
main() {
    local start_time=$(date +%s)
    
    log "==================================================================="
    log "Gemmini Installation and Setup Session Started"
    log "Installation Log: $INSTALL_LOG"
    log "==================================================================="
    
    # Detect OS
    detect_os
    
    # Check prerequisites
    local prereq_failures=0
    check_prerequisites || prereq_failures=$?
    
    if [[ $prereq_failures -gt 0 ]]; then
        error "$prereq_failures prerequisite checks failed"
        exit 1
    fi
    
    # Detect current environment status and create installation plan
    if ! detect_environment_status; then
        # All components already installed
        success "No installation needed - environment is complete!"
        exit 0
    fi
    
    # Ask for user confirmation before proceeding
    echo ""
    echo "The above components will be installed/configured."
    if [[ "$FORCE_INSTALL" != "true" && "$AUTO_INSTALL" != "true" ]]; then
        echo "Continue with installation? (y/N)"
        read -r response
        if [[ ! "$response" =~ ^[Yy]$ ]]; then
            info "Installation cancelled by user"
            exit 0
        fi
    elif [[ "$AUTO_INSTALL" == "true" ]]; then
        info "Auto installation mode - proceeding without confirmation"
    fi
    
    # Install only missing components based on detection
    if [[ "$SKIP_DEPS" != "true" ]]; then
        install_system_dependencies
    fi
    
    # Install required tools (only if needed)
    install_java
    install_sbt
    
    if [[ "$INSTALL_VERILATOR" == "true" ]]; then
        install_verilator
    fi
    
    if [[ "$INSTALL_CHIPYARD" == "true" ]]; then
        install_chipyard
    fi
    
    # Setup Gemmini environment (only if needed)
    setup_gemmini_environment
    
    # Create environment script (always do this as it's quick)
    create_gemmini_env_script
    
    # Test functionality
    test_gemmini_functionality
    
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
    source "$PROJECT_ROOT/setup_gemmini_env.sh" >/dev/null 2>&1
    
    log "Installed components:"
    success "✅ Gemmini Platform: $GEMMINI_DIR"
    success "✅ Chipyard: $CHIPYARD_DIR"
    
    if command -v java >/dev/null 2>&1; then
        success "✅ Java: $(java -version 2>&1 | head -1)"
    else
        error "❌ Java: Not found"
    fi
    
    if command -v sbt >/dev/null 2>&1; then
        success "✅ SBT: $(sbt --version 2>/dev/null | grep "sbt version" | awk '{print $4}' || echo 'installed')"
    else
        error "❌ SBT: Not found"
    fi
    
    if command -v verilator >/dev/null 2>&1; then
        success "✅ Verilator: $(verilator --version | head -1)"
    else
        warning "⚠️  Verilator: Not installed"
    fi
    
    log ""
    log "Installation complete!"
    log "To use Gemmini, run: source $PROJECT_ROOT/setup_gemmini_env.sh"
    log "Then you can use: $PROJECT_ROOT/scripts/generate_gemmini.sh"
    log "==================================================================="
}

# Help function
show_help() {
    echo "Gemmini Installation and Environment Setup Script"
    echo ""
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "This script installs and configures the Gemmini (Systolic Array Generator)"
    echo "environment including all necessary tools for RTL compilation and verification."
    echo ""
    echo "Options:"
    echo "  -h, --help              Show this help message"
    echo "  --check                 Check prerequisites and Gemmini availability only"
    echo "  --skip-java             Skip Java installation"
    echo "  --skip-sbt              Skip SBT installation"
    echo "  --skip-verilator        Skip Verilator installation"
    echo "  --skip-chipyard         Skip Chipyard installation"
    echo "  --skip-deps             Skip system dependencies installation"
    echo "  --no-system-deps        Do not run apt/dnf/pacman/brew (install JDK/build tools yourself)"
    echo "  --clean                 Clean previous installations"
    echo "  --force                 Force reinstallation even if tools exist"
    echo "  --auto                  Automatic installation without user confirmation"
    echo "  --jobs N                Number of parallel build jobs (default: $(nproc))"
    echo ""
    echo "Examples:"
    echo "  $0                      # Interactive Gemmini installation"
    echo "  $0 --check              # Check prerequisites only"
    echo "  $0 --auto               # Automatic installation without confirmation"
    echo "  $0 --skip-deps          # Skip system dependencies"
    echo "  $0 --clean              # Clean install"
    echo ""
    echo "What this script does:"
    echo "  1. Installs system dependencies (build tools, git, cmake, etc.)"
    echo "  2. Installs Java $REQUIRED_JAVA_VERSION (required for SBT/Scala)"
    echo "  3. Installs SBT (Scala Build Tool)"
    echo "  4. Installs Verilator SystemVerilog simulator"
    echo "  5. Installs Chipyard with RISC-V toolchain (needs conda; installs Miniconda under datasets/gemmini/workshop/ if missing)"
    echo "  6. Sets up Gemmini environment and dependencies"
    echo "  7. Builds Gemmini software library and tests"
    echo "  8. Creates environment setup script"
    echo "  9. Tests Gemmini functionality"
    echo ""
    echo "Environment:"
    echo "  SCORE_GEMMINI_WORKSHOP       Root for Chipyard, Miniconda, etc. (default: <repo>/datasets/gemmini/workshop)"
    echo "  SCORE_GEMMINI_INSTALL_LOG_DIR  Directory for install_gemmini.log (default: <repo>/datasets/gemmini/logs)"
    echo ""
    echo "After installation, source the environment script:"
    echo "  source $PROJECT_ROOT/setup_gemmini_env.sh"
}

# Parse command line arguments
while [[ $# -gt 0 ]]; do
    case $1 in
        -h|--help)
            show_help
            exit 0
            ;;
        --check)
            CHECK_ONLY=true
            shift
            ;;
        --skip-java)
            INSTALL_JAVA=false
            shift
            ;;
        --skip-sbt)
            INSTALL_SBT=false
            shift
            ;;
        --skip-verilator)
            INSTALL_VERILATOR=false
            shift
            ;;
        --skip-chipyard)
            INSTALL_CHIPYARD=false
            shift
            ;;
        --skip-deps)
            SKIP_DEPS=true
            shift
            ;;
        --no-system-deps)
            INSTALL_SYSTEM_DEPS=false
            shift
            ;;
        --clean)
            CLEAN_INSTALL=true
            shift
            ;;
        --force)
            FORCE_INSTALL=true
            shift
            ;;
        --auto)
            AUTO_INSTALL=true
            shift
            ;;
        --jobs)
            PARALLEL_JOBS="$2"
            shift
            shift
            ;;
        *)
            error "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

# Handle check-only mode
if [[ "$CHECK_ONLY" == "true" ]]; then
    echo "Checking Gemmini prerequisites and availability..."
    mkdir -p "$LOG_DIR"
    
    # Detect OS first
    detect_os
    
    # Check basic prerequisites
    if ! check_prerequisites; then
        echo "❌ Prerequisites check failed"
        echo "See logs in: $LOG_DIR"
        exit 1
    fi
    
    echo ""
    echo "Basic prerequisites passed. Checking detailed environment status..."
    echo ""
    
    # Run detailed environment detection
    if ! detect_environment_status; then
        echo ""
        echo "🎉 Perfect! Your Gemmini environment is completely set up and ready to use."
        echo ""
        echo "Next steps:"
        echo "  1. Source the environment: source $PROJECT_ROOT/setup_gemmini_env.sh"
        echo "  2. Run RTL generation: ./scripts/generate_gemmini.sh"
        exit 0
    else
        echo ""
        echo "📋 Some components need to be installed or configured."
        echo ""
        echo "To install missing components, run:"
        echo "  ./scripts/install_gemmini.sh"
        echo ""
        echo "To install specific components, use options like:"
        echo "  ./scripts/install_gemmini.sh --skip-deps       # Skip system dependencies"
        echo "  ./scripts/install_gemmini.sh --skip-chipyard   # Skip Chipyard"
        exit 0
    fi
fi

# Run main function
main
