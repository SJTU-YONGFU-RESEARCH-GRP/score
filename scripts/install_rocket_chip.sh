#!/usr/bin/env bash
#
# Rocket Chip environment installation for SCORE (see docs/PROMPTS.md).
# Upstream: https://github.com/chipsalliance/rocket-chip
#
# Usage: from SCORE repo root (directory containing tools/, scripts/):
#   ./scripts/install_rocket_chip.sh
#
# This script intentionally avoids global `set -e`/`set -u`: many install paths branch
# and log warnings; critical steps use explicit `if ! ...; then return 1; fi`.

# Path registered in SCORE .gitmodules (submodule init from repo root per PROMPTS.md).
RELATIVE_SUBMODULE_PATH="tools/rocket-chip"

# Color codes for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
PURPLE='\033[0;35m'
CYAN='\033[0;36m'
NC='\033[0m' # No Color

# Global variables
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
ROCKET_CHIP_DIR="$PROJECT_ROOT/tools/rocket-chip"

# Short git SHA of tools/rocket-chip (for co-locating install logs with the dataset tree).
get_rocket_chip_commit_short() {
    if git -C "$ROCKET_CHIP_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$ROCKET_CHIP_DIR" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

ROCKET_CHIP_DATASET_DIR="$PROJECT_ROOT/datasets/rocket-chip/$(get_rocket_chip_commit_short)"
# Install logs default next to generate_rocket_chip.sh logs (override with ROCKET_CHIP_INSTALL_LOG_DIR).
LOG_DIR="${ROCKET_CHIP_INSTALL_LOG_DIR:-$ROCKET_CHIP_DATASET_DIR/logs/rocket_chip_install}"
INSTALL_LOG="$LOG_DIR/install_$(date +%Y%m%d_%H%M%S).log"

# Run in a throwaway directory so sbt/mill --version do not create target/ or out/ in the caller cwd
# (run_rocket_chip.sh keeps cwd at the SCORE repo root).
score_rocket_run_in_install_scratch() {
    local _td _prev _rc
    _prev=$(pwd)
    _td=$(mktemp -d "${TMPDIR:-/tmp}/score-rocket-install.XXXXXX") || return 1
    cd "$_td" || {
        rm -rf "$_td"
        return 1
    }
    "$@"
    _rc=$?
    cd "$_prev" || true
    rm -rf "$_td"
    return "$_rc"
}

# Installation options
INSTALL_JAVA=true
INSTALL_SCALA=true
INSTALL_SBT=true
INSTALL_MILL=true
INSTALL_FIRRTL=true
INSTALL_VERILATOR=false
FORCE_REINSTALL=false
OFFLINE_MODE=false
CHECK_ONLY=false
DEBUG_MODE=false
LOCAL_INSTALL=false
INSTALL_SYSTEM_DEPS=true

# Version specifications
JAVA_VERSION="11"
SCALA_VERSION="2.13.12"
SBT_VERSION="1.9.6"
MILL_VERSION="0.11.5"
VERILATOR_VERSION="5.006"

# Create log directory
mkdir -p "$LOG_DIR"

# Logging functions
log() {
    local message="$1"
    local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${BLUE}[$timestamp]${NC} $message" | tee -a "$INSTALL_LOG"
}

error() {
    local message="$1"
    local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${RED}[ERROR $timestamp]${NC} $message" | tee -a "$INSTALL_LOG" >&2
}

success() {
    local message="$1"
    local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${GREEN}[SUCCESS $timestamp]${NC} $message" | tee -a "$INSTALL_LOG"
}

warning() {
    local message="$1"
    local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${YELLOW}[WARNING $timestamp]${NC} $message" | tee -a "$INSTALL_LOG"
}

info() {
    local message="$1"
    local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${CYAN}[INFO $timestamp]${NC} $message" | tee -a "$INSTALL_LOG"
}

debug() {
    if [[ "$DEBUG_MODE" == "true" ]]; then
        local message="$1"
        local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
        echo -e "${PURPLE}[DEBUG $timestamp]${NC} $message" | tee -a "$INSTALL_LOG"
    fi
}

# Detect operating system (normalized family for install paths).
# Prefer /etc/os-release so derivatives (Rocky, Debian, Pop!, Amazon Linux, etc.) map correctly.
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
            ubuntu|pop|linuxmint|zorin|neon|kubuntu|elementary)
                echo "ubuntu"
                ;;
            debian|raspbian|devuan|parrot|kali|mx)
                echo "debian"
                ;;
            fedora|ultramarine|nobara)
                echo "fedora"
                ;;
            rhel|centos|rocky|almalinux|ol|virtuozzo|scientific)
                echo "rhel"
                ;;
            amzn)
                echo "amazon"
                ;;
            opensuse-leap|opensuse-tumbleweed|opensuse|sles|sle-micro)
                echo "opensuse"
                ;;
            arch|manjaro|endeavouros|garuda|cachyos)
                echo "arch"
                ;;
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

# Print dnf or yum for RPM-based systems (Amazon Linux 2 vs AL2023, CentOS, etc.).
rpm_pkg_manager() {
    if command -v dnf >/dev/null 2>&1; then
        echo "dnf"
    else
        echo "yum"
    fi
}

# Check if command exists
command_exists() {
    command -v "$1" >/dev/null 2>&1
}

# Major Java version from a specific java(1) executable (1.8.x -> 8; 11.x -> 11; 17.x -> 17).
java_major_version_from_exe() {
    local java_exe="$1"
    local line v major
    [[ -z "$java_exe" || ! -x "$java_exe" ]] && echo 0 && return
    line=$("$java_exe" -version 2>&1 | head -n1)
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

# Major Java version from `java` on PATH.
java_major_version() {
    if ! command_exists java; then
        echo 0
        return
    fi
    java_major_version_from_exe "$(command -v java)"
}

# Put OpenJDK 11 first on PATH when installed (fixes stale JAVA_HOME=8 from the user's shell).
prefer_openjdk11_for_checks() {
    local jh="" maj
    if [[ -n "${JAVA_HOME:-}" && -x "${JAVA_HOME}/bin/java" ]]; then
        maj=$(java_major_version_from_exe "${JAVA_HOME}/bin/java")
        if [[ "$maj" -ge "$JAVA_VERSION" ]]; then
            export PATH="${JAVA_HOME}/bin:${PATH}"
            return 0
        fi
    fi
    if [[ -d "/usr/lib/jvm/java-${JAVA_VERSION}-openjdk-amd64" ]]; then
        jh="/usr/lib/jvm/java-${JAVA_VERSION}-openjdk-amd64"
    else
        jh=$(find /usr/lib/jvm -maxdepth 1 -name "java-${JAVA_VERSION}-openjdk*" -type d 2>/dev/null | head -1)
    fi
    if [[ -n "$jh" && -x "$jh/bin/java" ]]; then
        export JAVA_HOME="$jh"
        export PATH="${JAVA_HOME}/bin:${PATH}"
        return 0
    fi
    if [[ "$(detect_os)" == "macos" ]]; then
        if [[ -d "/opt/homebrew/opt/openjdk@${JAVA_VERSION}" ]]; then
            export JAVA_HOME="/opt/homebrew/opt/openjdk@${JAVA_VERSION}"
        elif [[ -d "/usr/local/opt/openjdk@${JAVA_VERSION}" ]]; then
            export JAVA_HOME="/usr/local/opt/openjdk@${JAVA_VERSION}"
        fi
        if [[ -n "${JAVA_HOME:-}" && -x "${JAVA_HOME}/bin/java" ]]; then
            export PATH="${JAVA_HOME}/bin:${PATH}"
            return 0
        fi
    fi
    return 1
}

# Run a command with elevated privileges when not running as root.
run_priv() {
    if [[ ${EUID:-$(id -u)} -eq 0 ]]; then
        "$@"
    else
        sudo "$@"
    fi
}

# Like run_priv, but copy merged stdout/stderr to INSTALL_LOG with tee. Piping sudo
# directly to tee can detach sudo from a real TTY so the password prompt never reaches
# the user (or times out). Running the elevated command inside script(1) gives it a PTY
# while we still tee combined output to the log.
run_priv_log() {
    if [[ ${EUID:-$(id -u)} -eq 0 ]]; then
        "$@" 2>&1 | tee -a "$INSTALL_LOG"
        return "${PIPESTATUS[0]}"
    fi
    local quoted
    quoted=$(printf '%q ' "$@")
    quoted=${quoted% }
    if command_exists script && [[ -t 0 ]]; then
        # script provides a PTY for sudo; stdout/stderr still go to this shell for tee.
        script -q -c "sudo ${quoted}" /dev/null 2>&1 | tee -a "$INSTALL_LOG"
        return "${PIPESTATUS[0]}"
    fi
    sudo "$@" 2>&1 | tee -a "$INSTALL_LOG"
    return "${PIPESTATUS[0]}"
}

# True when common Rocket Chip / JVM toolchain build deps are already on PATH (no distro meta-package needed).
core_build_tools_sufficient() {
    command_exists git && command_exists curl && command_exists wget && command_exists make &&
        (command_exists g++ || command_exists c++) && command_exists python3 && command_exists tar
}

# Skip install_system_dependencies when safe: user-space Scala/SBT/Mill do not need dnf/apt if compilers exist.
should_skip_system_package_step() {
    if [[ "$INSTALL_SYSTEM_DEPS" != "true" ]]; then
        return 0
    fi
    if [[ "${ROCKET_CHIP_SKIP_SYSTEM_DEPS:-}" == "1" ]]; then
        return 0
    fi
    if ! core_build_tools_sufficient; then
        return 1
    fi
    # If Verilator must be installed from packages or built from source, we may still need root for deps.
    if [[ "$INSTALL_VERILATOR" == "true" ]] && ! command_exists verilator; then
        return 1
    fi
    # Java from packages needs sudo; if Java is missing we still need package step unless user fixes JDK themselves.
    if [[ "$INSTALL_JAVA" == "true" ]] && ! command_exists java; then
        return 1
    fi
    if [[ "$INSTALL_JAVA" == "true" ]]; then
        local jv
        jv=$(java_major_version)
        if [[ "$jv" -lt "$JAVA_VERSION" ]]; then
            return 1
        fi
    fi
    return 0
}

# Install system dependencies based on OS
install_system_dependencies() {
    local os=$(detect_os)
    log "Installing system dependencies for $os..."
    if [[ ${EUID:-$(id -u)} -ne 0 ]] && command_exists sudo; then
        info "If sudo asks for a password, type it in this terminal (output is also logged)."
    fi

    case "$os" in
        "ubuntu"|"debian")
            info "Updating package list..."
            if ! run_priv_log apt-get update; then
                error "Failed to update package list"
                return 1
            fi
            
            info "Installing build dependencies..."
            if ! run_priv_log apt-get install -y \
                curl \
                wget \
                git \
                build-essential \
                autoconf \
                flex \
                bison \
                make \
                g++ \
                libfl-dev \
                zlib1g-dev \
                python3 \
                python3-pip \
                device-tree-compiler \
                parallel \
                ; then
                error "Failed to install system dependencies"
                return 1
            fi
            ;;
        "fedora"|"rhel"|"amazon")
            local pkg_manager
            pkg_manager=$(rpm_pkg_manager)

            # Full distro update is the default for a complete, reproducible toolchain on RHEL family.
            if [[ "${ROCKET_CHIP_SKIP_FULL_PKG_UPDATE:-0}" == "1" ]]; then
                info "Skipping full distro update (ROCKET_CHIP_SKIP_FULL_PKG_UPDATE=1)."
            else
                info "Updating installed packages (${pkg_manager} update -y)..."
                if ! run_priv_log "$pkg_manager" update -y; then
                    warning "Distro update failed; continuing with package install only..."
                fi
            fi

            info "Installing development tools..."
            if ! run_priv_log "$pkg_manager" groupinstall -y "Development Tools"; then
                warning "Failed to install Development Tools group (may be optional on this distro)"
            fi
            
            if ! run_priv_log "$pkg_manager" install -y \
                curl \
                wget \
                git \
                autoconf \
                flex \
                bison \
                make \
                gcc-c++ \
                zlib-devel \
                python3 \
                python3-pip \
                dtc \
                parallel \
                ; then
                error "Failed to install system dependencies"
                return 1
            fi
            ;;
        "arch")
            info "Syncing package database (pacman)..."
            if ! run_priv_log pacman -Sy --noconfirm; then
                error "Failed to sync pacman"
                return 1
            fi
            info "Installing build dependencies..."
            if ! run_priv_log pacman -S --needed --noconfirm \
                base-devel \
                git \
                curl \
                wget \
                autoconf \
                flex \
                bison \
                make \
                gcc \
                zlib \
                python \
                python-pip \
                dtc \
                parallel \
                ; then
                error "Failed to install system dependencies"
                return 1
            fi
            ;;
        "opensuse")
            info "Refreshing repositories (zypper)..."
            if ! run_priv_log zypper refresh -y; then
                warning "zypper refresh reported issues; continuing..."
            fi
            info "Installing build dependencies..."
            if ! run_priv_log zypper install -y -t pattern devel_basis; then
                warning "pattern devel_basis install failed or unavailable; installing packages individually..."
            fi
            if ! run_priv_log zypper install -y \
                git \
                curl \
                wget \
                autoconf \
                flex \
                bison \
                make \
                gcc \
                gcc-c++ \
                zlib-devel \
                python3 \
                python3-pip \
                dtc \
                parallel \
                ; then
                error "Failed to install system dependencies"
                return 1
            fi
            ;;
        "macos")
            if ! command_exists brew; then
                error "Homebrew not found. Please install Homebrew first."
                return 1
            fi
            
            info "Updating Homebrew..."
            if ! brew update >> "$INSTALL_LOG" 2>&1; then
                warning "Homebrew update failed, continuing..."
            fi
            
            info "Installing build dependencies..."
            if ! brew install \
                curl \
                wget \
                git \
                autoconf \
                flex \
                bison \
                make \
                python3 \
                dtc \
                parallel \
                >> "$INSTALL_LOG" 2>&1; then
                error "Failed to install system dependencies"
                return 1
            fi
            ;;
        *)
            warning "Unknown OS: $os. Please install dependencies manually."
            info "Required dependencies: curl, wget, git, build tools, autoconf, flex, bison, make, python3"
            return 0  # Don't fail for unknown OS
            ;;
    esac
    
    success "System dependencies installed successfully"
    return 0
}

# Install Java Development Kit
install_java() {
    log "Checking Java installation..."
    
    # Check if Java is already installed and meets requirements
    if command_exists java && [[ "$FORCE_REINSTALL" == "false" ]]; then
        local java_ver
        java_ver=$(java_major_version)
        if [[ "$java_ver" -ge "$JAVA_VERSION" ]]; then
            # Check if JAVA_HOME is set
            if [[ -n "$JAVA_HOME" && -d "$JAVA_HOME" ]]; then
                success "✓ Java $java_ver already installed and JAVA_HOME is set"
                return 0
            else
                info "Java $java_ver found but JAVA_HOME not set, configuring..."
                setup_java_home
                return 0
            fi
        else
            warning "Java $java_ver found but version too old (required: $JAVA_VERSION+)"
        fi
    fi
    
    log "Installing OpenJDK $JAVA_VERSION..."
    local os=$(detect_os)
    
    case "$os" in
        "ubuntu"|"debian")
            run_priv_log apt-get install -y openjdk-${JAVA_VERSION}-jdk
            ;;
        "fedora"|"rhel"|"amazon")
            local pkg_manager
            pkg_manager=$(rpm_pkg_manager)
            run_priv_log "$pkg_manager" install -y java-${JAVA_VERSION}-openjdk-devel
            ;;
        "arch")
            # Arch package names: jdk11-openjdk for Java 11
            run_priv_log pacman -S --needed --noconfirm "jdk${JAVA_VERSION}-openjdk"
            ;;
        "opensuse")
            run_priv_log zypper install -y "java-${JAVA_VERSION}-openjdk-devel"
            ;;
        "macos")
            brew install openjdk@${JAVA_VERSION} >> "$INSTALL_LOG" 2>&1
            ;;
        *)
            warning "No package-manager Java recipe for OS family '$os'; install JDK ${JAVA_VERSION}+ manually if needed."
            ;;
    esac
    
    setup_java_home
    success "Java $JAVA_VERSION installed successfully"
}

# Install tools locally in user directory
install_tools_locally() {
    log "Installing tools locally in user directory..."

    local local_tools_dir="$HOME/.local/share/rocket-chip-tools"
    mkdir -p "$local_tools_dir"

    # Install Mill
    if [[ "$INSTALL_MILL" == "true" ]]; then
        log "Installing Mill locally..."
        if [[ ! -f "$HOME/mill" ]]; then
            info "Downloading Mill $MILL_VERSION..."
            curl -L "https://github.com/com-lihaoyi/mill/releases/download/$MILL_VERSION/$MILL_VERSION" -o "$HOME/mill" >> "$INSTALL_LOG" 2>&1
            chmod +x "$HOME/mill"
            success "Mill installed locally at $HOME/mill"
        else
            success "Mill already exists at $HOME/mill"
        fi
    fi

    # Install SBT
    if [[ "$INSTALL_SBT" == "true" ]]; then
        log "Installing SBT locally..."
        local sbt_dir="$local_tools_dir/sbt"
        mkdir -p "$sbt_dir"

        if [[ ! -f "$sbt_dir/sbt" ]]; then
            info "Downloading SBT launcher..."
            curl -L "https://github.com/sbt/sbt/releases/download/v$SBT_VERSION/sbt-$SBT_VERSION.zip" -o "$sbt_dir/sbt.zip" >> "$INSTALL_LOG" 2>&1
            cd "$sbt_dir"
            unzip -q sbt.zip >> "$INSTALL_LOG" 2>&1
            # Find the sbt executable in the extracted directory
            local sbt_exec=$(find . -name "sbt" -type f 2>/dev/null | head -1)
            if [[ -n "$sbt_exec" ]]; then
                mv "$sbt_exec" "$sbt_dir/sbt"
                chmod +x "$sbt_dir/sbt"
                rm -rf sbt.zip sbt
                cd - > /dev/null
                success "SBT installed locally at $sbt_dir/sbt"
            else
                cd - > /dev/null
                error "Failed to find sbt executable in downloaded archive"
                return 1
            fi
        else
            success "SBT already exists at $sbt_dir/sbt"
        fi
    fi

    # Install Scala
    if [[ "$INSTALL_SCALA" == "true" ]]; then
        log "Installing Scala locally..."
        local scala_dir="$local_tools_dir/scala"
        mkdir -p "$scala_dir"

        if [[ ! -d "$scala_dir/scala-$SCALA_VERSION" ]]; then
            info "Downloading Scala $SCALA_VERSION..."
            curl -L "https://downloads.lightbend.com/scala/$SCALA_VERSION/scala-$SCALA_VERSION.tgz" -o "$scala_dir/scala.tgz" >> "$INSTALL_LOG" 2>&1
            cd "$scala_dir"
            tar -xzf scala.tgz >> "$INSTALL_LOG" 2>&1
            rm scala.tgz
            cd - > /dev/null
            success "Scala installed locally at $scala_dir/scala-$SCALA_VERSION"
        else
            success "Scala already exists at $scala_dir/scala-$SCALA_VERSION"
        fi
    fi

    # Setup PATH and environment variables for local tools
    setup_local_environment

    success "Local tools installation completed"
}

# Setup environment for local tools
setup_local_environment() {
    log "Setting up environment for local tools..."

    # Create environment setup script
    local env_script="$PROJECT_ROOT/scripts/setup_local_env.sh"
    cat > "$env_script" << EOF
#!/bin/bash
# Local environment setup for Rocket Chip tools

# Set JAVA_HOME if not already set
if [[ -z "\$JAVA_HOME" ]]; then
    export JAVA_HOME="\$(readlink -f \$(command -v java) | sed 's:/bin/java::')"
fi

# Prefer JDK from JAVA_HOME on PATH (avoids java 1.8 earlier on PATH)
if [[ -n "\${JAVA_HOME:-}" && -x "\$JAVA_HOME/bin/java" ]]; then
    export PATH="\$JAVA_HOME/bin:\$PATH"
fi

# Optional user bin: append so a stray ~/bin/java cannot shadow the JDK
[[ -d "\$HOME/bin" ]] && export PATH="\$PATH:\$HOME/bin"

# Add local Scala to PATH if it exists
if [[ -d "\$HOME/.local/share/rocket-chip-tools/scala/scala-$SCALA_VERSION" ]]; then
    export PATH="\$HOME/.local/share/rocket-chip-tools/scala/scala-$SCALA_VERSION/bin:\$PATH"
fi

# Add local SBT to PATH if it exists
if [[ -f "\$HOME/.local/share/rocket-chip-tools/sbt/sbt" ]]; then
    export PATH="\$HOME/.local/share/rocket-chip-tools/sbt:\$PATH"
fi

echo "Local Rocket Chip environment activated"
echo "JAVA_HOME: \$JAVA_HOME"
echo "PATH includes: \$HOME/.local/share/rocket-chip-tools (scala, sbt, ...)"
EOF

    chmod +x "$env_script"
    success "Environment setup script created at $env_script"
}

# Update environment script to include venv activation
update_env_script_venv() {
    local venv_dir="$1"
    local env_script="$PROJECT_ROOT/scripts/setup_local_env.sh"

    if [[ -f "$env_script" ]]; then
        if grep -q "rocket-chip-tools/venv/bin/activate" "$env_script" 2>/dev/null; then
            return 0
        fi
        cat >> "$env_script" << EOF

# Activate Python virtual environment if it exists
if [[ -d "$venv_dir" ]]; then
    export PATH="$venv_dir/bin:\$PATH"
    source "$venv_dir/bin/activate"
    echo "Python virtual environment activated: $venv_dir"
fi
EOF
        success "Environment script updated with venv support"
    fi
}

# Function to setup JAVA_HOME
setup_java_home() {
    local os=$(detect_os)
    local java_home=""
    
    # Try to detect JAVA_HOME automatically
    if [[ "$os" == "ubuntu" || "$os" == "debian" ]]; then
        java_home="/usr/lib/jvm/java-${JAVA_VERSION}-openjdk-amd64"
        if [[ ! -d "$java_home" ]]; then
            java_home="/usr/lib/jvm/java-${JAVA_VERSION}-openjdk-arm64"
        fi
        if [[ ! -d "$java_home" ]]; then
            java_home=$(find /usr/lib/jvm -maxdepth 1 -name "java-${JAVA_VERSION}-openjdk*" -type d 2>/dev/null | head -1)
        fi
    elif [[ "$os" == "macos" ]]; then
        java_home="/opt/homebrew/opt/openjdk@${JAVA_VERSION}"
        if [[ ! -d "$java_home" ]]; then
            java_home="/usr/local/opt/openjdk@${JAVA_VERSION}"
        fi
    elif [[ "$os" == "fedora" || "$os" == "rhel" || "$os" == "amazon" ]]; then
        java_home=$(find /usr/lib/jvm -maxdepth 1 -name "java-${JAVA_VERSION}-openjdk*" -type d 2>/dev/null | head -1)
    elif [[ "$os" == "arch" ]]; then
        java_home="/usr/lib/jvm/java-${JAVA_VERSION}-openjdk"
        if [[ ! -d "$java_home" ]]; then
            java_home=$(find /usr/lib/jvm -maxdepth 1 -type d -name "java-${JAVA_VERSION}-openjdk*" 2>/dev/null | head -1)
        fi
    elif [[ "$os" == "opensuse" ]]; then
        java_home=$(find /usr/lib/jvm -maxdepth 1 -name "java-${JAVA_VERSION}-openjdk*" -type d 2>/dev/null | head -1)
    fi
    
    # If auto-detection fails, try using java command
    if [[ -z "$java_home" || ! -d "$java_home" ]]; then
        if command_exists java; then
            java_home=$(readlink -f $(which java) | sed "s:/bin/java::")
        fi
    fi
    
    if [[ -n "$java_home" && -d "$java_home" ]]; then
        export JAVA_HOME="$java_home"
        export PATH="${JAVA_HOME}/bin:${PATH}"
        
        # Add to shell profile if not already present
        local shell_profile="$HOME/.bashrc"
        [[ "$SHELL" == *"zsh"* ]] && shell_profile="$HOME/.zshrc"
        
        if ! grep -q "JAVA_HOME.*$java_home" "$shell_profile" 2>/dev/null; then
            echo "export JAVA_HOME=\"$java_home\"" >> "$shell_profile"
        fi
        
        info "JAVA_HOME set to $java_home"
    else
        warning "Could not automatically detect JAVA_HOME. Please set it manually."
    fi
}

# Install Scala
install_scala() {
    log "Checking Scala installation..."
    
    if command_exists scala && [[ "$FORCE_REINSTALL" == "false" ]]; then
        local scala_version_output=$(scala -version 2>&1)
        local installed_version=$(echo "$scala_version_output" | grep -oE '[0-9]+\.[0-9]+\.[0-9]+' | head -1)
        
        if [[ -n "$installed_version" ]]; then
            # Compare versions (simplified - checks if major.minor matches)
            local required_major_minor=$(echo "$SCALA_VERSION" | cut -d'.' -f1-2)
            local installed_major_minor=$(echo "$installed_version" | cut -d'.' -f1-2)
            
            if [[ "$installed_major_minor" == "$required_major_minor" ]]; then
                success "✓ Scala $installed_version already installed (compatible with $SCALA_VERSION)"
                return 0
            else
                warning "Scala $installed_version found but version mismatch (required: $SCALA_VERSION)"
            fi
        fi
    fi
    
    log "Installing Scala $SCALA_VERSION..."
    
    # Check if already installed in local directory
    local install_dir="$HOME/.local/scala"
    if [[ -d "$install_dir/bin" && -x "$install_dir/bin/scala" ]] && [[ "$FORCE_REINSTALL" == "false" ]]; then
        local local_version=$("$install_dir/bin/scala" -version 2>&1 | grep -oE '[0-9]+\.[0-9]+\.[0-9]+' | head -1)
        if [[ "$local_version" == "$SCALA_VERSION" ]]; then
            info "Scala $SCALA_VERSION found in local directory, updating PATH..."
            setup_scala_path "$install_dir"
            return 0
        fi
    fi

    local rct_scala="$HOME/.local/share/rocket-chip-tools/scala/scala-$SCALA_VERSION"
    if [[ -d "$rct_scala/bin" && -x "$rct_scala/bin/scala" ]] && [[ "$FORCE_REINSTALL" == "false" ]]; then
        local local_version=$("$rct_scala/bin/scala" -version 2>&1 | grep -oE '[0-9]+\.[0-9]+\.[0-9]+' | head -1)
        if [[ "$local_version" == "$SCALA_VERSION" ]]; then
            info "Scala $SCALA_VERSION found under rocket-chip-tools, updating PATH..."
            setup_scala_path "$rct_scala"
            return 0
        fi
    fi
    
    # Download and install Scala
    local scala_url="https://github.com/scala/scala/releases/download/v${SCALA_VERSION}/scala-${SCALA_VERSION}.tgz"
    
    mkdir -p "$install_dir"
    info "Downloading Scala $SCALA_VERSION..."
    wget -q "$scala_url" -O "/tmp/scala-${SCALA_VERSION}.tgz" >> "$INSTALL_LOG" 2>&1
    
    info "Installing Scala to $install_dir..."
    tar -xzf "/tmp/scala-${SCALA_VERSION}.tgz" -C "$install_dir" --strip-components=1 >> "$INSTALL_LOG" 2>&1
    
    setup_scala_path "$install_dir"
    
    # Clean up
    rm -f "/tmp/scala-${SCALA_VERSION}.tgz"
    
    success "Scala $SCALA_VERSION installed successfully"
}

# Function to setup Scala PATH
setup_scala_path() {
    local install_dir="$1"
    
    # Add to PATH
    export PATH="$install_dir/bin:$PATH"
    
    # Add to shell profile if not already present
    local shell_profile="$HOME/.bashrc"
    [[ "$SHELL" == *"zsh"* ]] && shell_profile="$HOME/.zshrc"
    
    if ! grep -q "$install_dir/bin" "$shell_profile" 2>/dev/null; then
        echo "export PATH=\"$install_dir/bin:\$PATH\"" >> "$shell_profile"
        info "Added Scala to PATH in $shell_profile"
    fi
}

# Install SBT (Simple Build Tool)
install_sbt() {
    log "Checking SBT installation..."
    
    if command_exists sbt && [[ "$FORCE_REINSTALL" == "false" ]]; then
        local sbt_version_output
        sbt_version_output=$(score_rocket_run_in_install_scratch sbt --version 2>&1 | grep 'sbt version' | head -1)
        local installed_version=$(echo "$sbt_version_output" | grep -oE '[0-9]+\.[0-9]+\.[0-9]+' | head -1)
        
        if [[ -n "$installed_version" ]]; then
            # Compare major.minor versions
            local required_major_minor=$(echo "$SBT_VERSION" | cut -d'.' -f1-2)
            local installed_major_minor=$(echo "$installed_version" | cut -d'.' -f1-2)
            
            if [[ "$installed_major_minor" == "$required_major_minor" ]]; then
                success "✓ SBT $installed_version already installed (compatible with $SBT_VERSION)"
                return 0
            else
                warning "SBT $installed_version found but version mismatch (required: $SBT_VERSION)"
            fi
        fi
    fi
    
    log "Installing SBT $SBT_VERSION..."
    local os=$(detect_os)
    
    case "$os" in
        "ubuntu"|"debian")
            # Check if SBT repository is already added
            if [[ ! -f "/etc/apt/sources.list.d/sbt.list" ]]; then
                info "Adding SBT repository..."
                curl -fsSL "https://keyserver.ubuntu.com/pks/lookup?op=get&search=0x2EE0EA64E40A89B84B2DF73499E82A75642AC823" | run_priv_log gpg --dearmor -o /usr/share/keyrings/sbt-archive-keyring.gpg
                echo "deb [signed-by=/usr/share/keyrings/sbt-archive-keyring.gpg] https://repo.scala-sbt.org/scalasbt/debian all main" | run_priv_log tee /etc/apt/sources.list.d/sbt.list
                run_priv_log apt-get update
            else
                info "SBT repository already configured"
            fi
            run_priv_log apt-get install -y sbt
            ;;
        "fedora"|"rhel"|"amazon"|"opensuse"|"arch")
            # Check if already installed in /opt/sbt
            if [[ -f "/opt/sbt/bin/sbt" && -L "/usr/local/bin/sbt" ]] && [[ "$FORCE_REINSTALL" == "false" ]]; then
                local opt_version
                opt_version=$(score_rocket_run_in_install_scratch /opt/sbt/bin/sbt --version 2>&1 | grep 'sbt version' | grep -oE '[0-9]+\.[0-9]+\.[0-9]+' | head -1)
                if [[ "$opt_version" == "$SBT_VERSION" ]]; then
                    info "SBT $SBT_VERSION already installed in /opt/sbt"
                    return 0
                fi
            fi
            
            # Install via direct download (works across RPM, Arch, SUSE)
            info "Downloading SBT $SBT_VERSION..."
            curl -fsSL "https://github.com/sbt/sbt/releases/download/v${SBT_VERSION}/sbt-${SBT_VERSION}.tgz" -o "/tmp/sbt-${SBT_VERSION}.tgz" >> "$INSTALL_LOG" 2>&1
            
            info "Installing SBT to /opt/sbt..."
            run_priv_log tar -xzf "/tmp/sbt-${SBT_VERSION}.tgz" -C "/opt/"
            run_priv ln -sf "/opt/sbt/bin/sbt" "/usr/local/bin/sbt"
            
            rm -f "/tmp/sbt-${SBT_VERSION}.tgz"
            ;;
        "macos")
            # Check if installed via Homebrew
            if [[ -f "/opt/homebrew/bin/sbt" || -f "/usr/local/bin/sbt" ]] && command_exists brew; then
                local brew_version=$(brew list --versions sbt 2>/dev/null | grep -oE '[0-9]+\.[0-9]+\.[0-9]+' | head -1)
                if [[ -n "$brew_version" ]]; then
                    info "SBT $brew_version already installed via Homebrew"
                    if [[ "${brew_version%.*}" == "${SBT_VERSION%.*}" ]]; then
                        success "✓ SBT version compatible"
                        return 0
                    fi
                fi
            fi
            brew install sbt >> "$INSTALL_LOG" 2>&1
            ;;
        *)
            warning "No distro-specific SBT recipe for '$os'; installing official tarball to /opt/sbt"
            curl -fsSL "https://github.com/sbt/sbt/releases/download/v${SBT_VERSION}/sbt-${SBT_VERSION}.tgz" -o "/tmp/sbt-${SBT_VERSION}.tgz" >> "$INSTALL_LOG" 2>&1
            run_priv_log tar -xzf "/tmp/sbt-${SBT_VERSION}.tgz" -C "/opt/"
            run_priv ln -sf "/opt/sbt/bin/sbt" "/usr/local/bin/sbt"
            rm -f "/tmp/sbt-${SBT_VERSION}.tgz"
            ;;
    esac
    
    success "SBT $SBT_VERSION installed successfully"
}

# Install Mill Build Tool
install_mill() {
    log "Checking Mill installation..."
    
    if command_exists mill && [[ "$FORCE_REINSTALL" == "false" ]]; then
        local mill_version_output
        mill_version_output=$(score_rocket_run_in_install_scratch mill --version 2>&1 | head -1)
        local installed_version=$(echo "$mill_version_output" | grep -oE '[0-9]+\.[0-9]+\.[0-9]+' | head -1)
        
        if [[ -n "$installed_version" ]]; then
            # Compare major.minor versions
            local required_major_minor=$(echo "$MILL_VERSION" | cut -d'.' -f1-2)
            local installed_major_minor=$(echo "$installed_version" | cut -d'.' -f1-2)
            
            if [[ "$installed_major_minor" == "$required_major_minor" ]]; then
                success "✓ Mill $installed_version already installed (compatible with $MILL_VERSION)"
                return 0
            else
                warning "Mill $installed_version found but version mismatch (required: $MILL_VERSION)"
            fi
        fi
    fi
    
    # Check if Mill is installed in local user directory
    local local_mill="$HOME/.local/bin/mill"
    if [[ -x "$local_mill" ]] && [[ "$FORCE_REINSTALL" == "false" ]]; then
        local local_version
        local_version=$(score_rocket_run_in_install_scratch "$local_mill" --version 2>&1 | grep -oE '[0-9]+\.[0-9]+\.[0-9]+' | head -1)
        if [[ "$local_version" == "$MILL_VERSION" ]]; then
            info "Mill $MILL_VERSION found in user directory, updating PATH..."
            setup_mill_path
            return 0
        fi
    fi
    
    log "Installing Mill $MILL_VERSION..."
    
    # Determine installation method
    local install_global=true
    local mill_binary=""
    local mill_url="https://github.com/com-lihaoyi/mill/releases/download/${MILL_VERSION}/${MILL_VERSION}"
    
    # Try to install globally first, fallback to user directory if no root/sudo
    if [[ ${EUID:-$(id -u)} -ne 0 ]] && ! sudo -n true 2>/dev/null; then
        warning "No root/sudo non-interactive access, installing Mill to user directory"
        install_global=false
        mill_binary="$HOME/.local/bin/mill"
        mkdir -p "$HOME/.local/bin"
    else
        mill_binary="/usr/local/bin/mill"
    fi
    
    info "Downloading Mill $MILL_VERSION..."
    if [[ "$install_global" == "true" ]]; then
        run_priv_log curl -fsSL "$mill_url" -o "$mill_binary"
        run_priv chmod +x "$mill_binary"
    else
        curl -fsSL "$mill_url" -o "$mill_binary" >> "$INSTALL_LOG" 2>&1
        chmod +x "$mill_binary"
        setup_mill_path
    fi
    
    success "Mill $MILL_VERSION installed successfully"
}

# Function to setup Mill PATH for user installation
setup_mill_path() {
    local mill_dir="$HOME/.local/bin"
    
    # Add to PATH if not already present
    if [[ ":$PATH:" != *":$mill_dir:"* ]]; then
        export PATH="$mill_dir:$PATH"
        
        # Add to shell profile
        local shell_profile="$HOME/.bashrc"
        [[ "$SHELL" == *"zsh"* ]] && shell_profile="$HOME/.zshrc"
        
        if ! grep -q "$mill_dir" "$shell_profile" 2>/dev/null; then
            echo "export PATH=\"$mill_dir:\$PATH\"" >> "$shell_profile"
            info "Added Mill to PATH in $shell_profile"
        fi
    fi
}

# Install FIRRTL tools
install_firrtl() {
    log "Checking FIRRTL tools installation..."
    
    # Check if firtool is already available
    if command -v firtool >/dev/null 2>&1; then
        local version=$(firtool --version 2>&1 | head -n1)
        success "✓ FIRRTL already installed: $version"
        return 0
    fi
    
    log "Installing FIRRTL tools..."

    local os machine circt_version download_url temp_dir archive_file firtool_src
    os=$(detect_os)
    circt_version="1.62.0"
    machine=$(uname -m)
    download_url=""

    # Prefer CIRCT release tarballs where available (pip "circt" often lacks a firtool on PATH).
    case "$os" in
        "ubuntu"|"debian"|"linux"|"fedora"|"rhel"|"amazon"|"opensuse"|"arch")
            case "$machine" in
                x86_64|amd64)
                    download_url="https://github.com/llvm/circt/releases/download/firtool-${circt_version}/firrtl-bin-linux-x64.tar.gz"
                    ;;
            esac
            ;;
        "macos")
            download_url="https://github.com/llvm/circt/releases/download/firtool-${circt_version}/firrtl-bin-macos-x64.tar.gz"
            ;;
    esac

    if [[ -n "$download_url" ]]; then
        info "Installing prebuilt firtool from CIRCT releases..."
        temp_dir=$(mktemp -d)
        archive_file="$temp_dir/firrtl-bin.tar.gz"
        info "Downloading firtool from: $download_url"
        if curl -fsSL "$download_url" -o "$archive_file" >> "$INSTALL_LOG" 2>&1; then
            info "Extracting firtool..."
            if tar -xzf "$archive_file" -C "$temp_dir" >> "$INSTALL_LOG" 2>&1; then
                firtool_src=$(find "$temp_dir" -type f -path "*/bin/firtool" 2>/dev/null | head -1)
                if [[ -n "$firtool_src" && -f "$firtool_src" ]]; then
                    mkdir -p "$HOME/.local/bin"
                    cp -a "$(dirname "$firtool_src")"/* "$HOME/.local/bin/" >> "$INSTALL_LOG" 2>&1
                    chmod +x "$HOME/.local/bin/firtool"
                    export PATH="$HOME/.local/bin:$PATH"
                    hash -r 2>/dev/null || true
                    success "firtool installed to $HOME/.local/bin"
                    rm -rf "$temp_dir"
                    return 0
                fi
                error "firtool binary not found inside release archive"
            else
                error "Failed to extract CIRCT/firtool archive"
            fi
        else
            error "Failed to download firtool (check network or URL)"
        fi
        rm -rf "$temp_dir"
        info "Prebuilt install failed; trying pip as fallback..."
    else
        case "$os" in
            "ubuntu"|"debian"|"linux"|"fedora"|"rhel"|"amazon"|"opensuse"|"arch")
                case "$machine" in
                    aarch64|arm64)
                        info "No official firrtl-bin tarball for Linux $machine (CIRCT ${circt_version}); trying pip..."
                        ;;
                    *)
                        info "No prebuilt firtool for machine=$machine; trying pip..."
                        ;;
                esac
                ;;
            *)
                info "No prebuilt firtool for OS=$os; trying pip..."
                ;;
        esac
    fi

    # pip3 with venv (optional fallback)
    if command -v python3 >/dev/null 2>&1; then
        info "Attempting installation via pip3 with venv..."

        local venv_dir="$HOME/.local/share/rocket-chip-tools/venv"
        if [[ ! -d "$venv_dir" ]]; then
            python3 -m venv "$venv_dir" >> "$INSTALL_LOG" 2>&1
        fi

        source "$venv_dir/bin/activate" && pip install --upgrade pip >> "$INSTALL_LOG" 2>&1
        if source "$venv_dir/bin/activate" && pip install circt >> "$INSTALL_LOG" 2>&1; then
            hash -r 2>/dev/null || true
            if command -v firtool >/dev/null 2>&1; then
                success "FIRRTL installed successfully via pip3 with venv"
                update_env_script_venv "$venv_dir"
                return 0
            fi
            info "pip circt did not place firtool on PATH (typical for this package)."
        else
            info "pip venv circt install did not succeed; trying user pip..."
        fi
    fi

    if command -v pip3 >/dev/null 2>&1; then
        info "Attempting installation via pip3 (fallback)..."
        if pip3 install --user circt >> "$INSTALL_LOG" 2>&1; then
            hash -r 2>/dev/null || true
            if command -v firtool >/dev/null 2>&1; then
                success "FIRRTL installed successfully via pip3"
                return 0
            fi
            info "pip3 --user circt did not expose firtool on PATH."
        else
            info "pip3 --user circt install failed."
        fi
    fi

    if [[ "$OFFLINE_MODE" == "false" ]]; then
        warning "Could not install firtool automatically. Install a CIRCT release binary or build from source."
        warning "Rocket Chip generation can still use generator.elaborate without firtool on PATH."
    fi

    return 1
}

# Build and install Verilator from source into /usr/local (uses run_priv for install step).
verilator_install_from_source() {
    local ver_v="$VERILATOR_VERSION"
    info "Installing Verilator $ver_v from source (this may take a while)..."
    if ! wget -q "https://github.com/verilator/verilator/archive/v${ver_v}.tar.gz" -O "/tmp/verilator.tar.gz" >> "$INSTALL_LOG" 2>&1; then
        return 1
    fi
    tar -xzf "/tmp/verilator.tar.gz" -C "/tmp/" >> "$INSTALL_LOG" 2>&1
    pushd "/tmp/verilator-${ver_v}" >/dev/null || return 1
    autoconf >> "$INSTALL_LOG" 2>&1
    ./configure --prefix=/usr/local >> "$INSTALL_LOG" 2>&1
    make -j"$(nproc)" >> "$INSTALL_LOG" 2>&1
    run_priv_log make install
    popd >/dev/null || true
    rm -rf "/tmp/verilator.tar.gz" "/tmp/verilator-${ver_v}"
    return 0
}

# Install Verilator (optional, for simulation)
install_verilator() {
    if [[ "$INSTALL_VERILATOR" == "false" ]]; then
        return 0
    fi
    
    log "Checking Verilator installation..."
    
    if command_exists verilator && [[ "$FORCE_REINSTALL" == "false" ]]; then
        local verilator_version=$(verilator --version 2>&1 | head -n1 | grep -oE '[0-9]+\.[0-9]+' | head -1)
        local required_major=$(echo "$VERILATOR_VERSION" | cut -d'.' -f1)
        local installed_major=$(echo "$verilator_version" | cut -d'.' -f1)
        
        if [[ "$installed_major" -ge "$required_major" ]]; then
            success "✓ Verilator $verilator_version already installed (compatible with $VERILATOR_VERSION)"
            return 0
        else
            warning "Verilator $verilator_version found but version too old (required: $VERILATOR_VERSION+)"
        fi
    fi
    
    log "Installing Verilator $VERILATOR_VERSION..."
    local os=$(detect_os)
    local install_success=false
    
    case "$os" in
        "ubuntu"|"debian")
            if command_exists apt-cache; then
                local available_version
                available_version=$(apt-cache show verilator 2>/dev/null | grep -E '^Version:' | head -1 | grep -oE '[0-9]+\.[0-9]+' | head -1)
                local available_major
                available_major=$(echo "$available_version" | cut -d'.' -f1)
                local required_major
                required_major=$(echo "$VERILATOR_VERSION" | cut -d'.' -f1)
                
                if [[ -n "$available_version" && "$available_major" -ge "$required_major" ]]; then
                    info "Installing Verilator via apt..."
                    if run_priv_log apt-get install -y verilator; then
                        install_success=true
                    fi
                fi
            fi
            if [[ "$install_success" == "false" ]]; then
                if ! command_exists autoconf || ! command_exists make; then
                    warning "Missing build dependencies. Installing..."
                    run_priv_log apt-get install -y autoconf make g++
                fi
                if verilator_install_from_source; then
                    install_success=true
                fi
            fi
            ;;
        "fedora"|"rhel"|"amazon")
            local pkg_manager
            pkg_manager=$(rpm_pkg_manager)
            info "Trying Verilator from $pkg_manager..."
            if run_priv_log "$pkg_manager" install -y verilator; then
                install_success=true
            fi
            if [[ "$install_success" == "false" ]]; then
                if verilator_install_from_source; then
                    install_success=true
                fi
            fi
            ;;
        "arch")
            if run_priv_log pacman -S --needed --noconfirm verilator; then
                install_success=true
            fi
            if [[ "$install_success" == "false" ]] && verilator_install_from_source; then
                install_success=true
            fi
            ;;
        "opensuse")
            if run_priv_log zypper install -y verilator; then
                install_success=true
            fi
            if [[ "$install_success" == "false" ]] && verilator_install_from_source; then
                install_success=true
            fi
            ;;
        "macos")
            if command_exists brew; then
                info "Installing Verilator via Homebrew..."
                if brew install verilator >> "$INSTALL_LOG" 2>&1; then
                    install_success=true
                fi
            fi
            ;;
        "linux")
            warning "Generic Linux: attempting Verilator build from source..."
            if verilator_install_from_source; then
                install_success=true
            fi
            ;;
        *)
            warning "Verilator: unknown OS family '$os'; trying build from source..."
            if verilator_install_from_source; then
                install_success=true
            fi
            ;;
    esac
    
    if [[ "$install_success" == "true" ]]; then
        success "Verilator $VERILATOR_VERSION installed successfully"
    else
        warning "Verilator installation failed. This is optional for Rocket Chip RTL generation."
        warning "Verilator is only needed for simulation and verification."
    fi
}

# Initialize tools/rocket-chip from the SCORE repository root (works with gitlink submodules).
init_score_rocket_submodule() {
    if ! git -C "$PROJECT_ROOT" rev-parse --git-dir >/dev/null 2>&1; then
        warning "SCORE is not a git checkout; skip submodule init for $RELATIVE_SUBMODULE_PATH."
        return 0
    fi
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]] || ! grep -q 'path = tools/rocket-chip' "$PROJECT_ROOT/.gitmodules" 2>/dev/null; then
        info "No tools/rocket-chip entry in .gitmodules; skip SCORE-root submodule init."
        return 0
    fi
    log "git submodule update --init --recursive $RELATIVE_SUBMODULE_PATH (from SCORE root)"
    if ! git -C "$PROJECT_ROOT" submodule update --init --recursive "$RELATIVE_SUBMODULE_PATH" >> "$INSTALL_LOG" 2>&1; then
        error "Failed to init SCORE submodule $RELATIVE_SUBMODULE_PATH"
        error "Try: git submodule update --init --recursive $RELATIVE_SUBMODULE_PATH"
        return 1
    fi
    success "SCORE submodule $RELATIVE_SUBMODULE_PATH ready"
    return 0
}

# Setup nested Rocket Chip submodules (chisel, riscv-tools, etc.)
setup_rocket_chip() {
    log "Setting up Rocket Chip nested submodules..."
    
    if [[ ! -d "$ROCKET_CHIP_DIR" ]]; then
        error "Rocket Chip directory not found: $ROCKET_CHIP_DIR"
        return 1
    fi
    
    cd "$ROCKET_CHIP_DIR"
    
    # Initialize and update submodules
    git submodule update --init --recursive >> "$INSTALL_LOG" 2>&1
    
    success "Rocket Chip nested submodules initialized successfully"
    cd - >/dev/null
}

# Test installation
test_installation() {
    log "Testing Rocket Chip installation..."

    if [[ -n "${JAVA_HOME:-}" && -x "${JAVA_HOME}/bin/java" ]]; then
        export PATH="${JAVA_HOME}/bin:${PATH}"
    fi

    # Prefer rocket_chip_env (JDK 11 discovery) before setup_local_env
    if [[ -f "$PROJECT_ROOT/scripts/rocket_chip_env.sh" ]]; then
        # shellcheck source=/dev/null
        source "$PROJECT_ROOT/scripts/rocket_chip_env.sh"
    fi
    if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
        # shellcheck source=/dev/null
        source "$PROJECT_ROOT/scripts/setup_local_env.sh"
    fi

    # Test Java
    if ! command_exists java; then
        error "Java installation failed"
        return 1
    fi
    info "✓ Java: $(java -version 2>&1 | head -n1)"
    
    # Test Scala
    if ! command_exists scala; then
        error "Scala installation failed"
        return 1
    fi
    info "✓ Scala: $(scala -version 2>&1)"
    
    # Test SBT
    if ! command_exists sbt; then
        error "SBT installation failed"
        return 1
    fi
    info "✓ SBT: $(score_rocket_run_in_install_scratch sbt --version 2>&1 | grep 'sbt version')"
    
    # Test Mill
    if ! command_exists mill; then
        error "Mill installation failed"
        return 1
    fi
    info "✓ Mill: $(score_rocket_run_in_install_scratch mill --version 2>&1)"
    
    # Test FIRRTL (optional)
    if command_exists firtool; then
        info "✓ FIRRTL: $(firtool --version 2>&1)"
    else
        warning "FIRRTL tools not installed (optional)"
    fi
    
    # Test Verilator (optional)
    if command_exists verilator; then
        info "✓ Verilator: $(verilator --version 2>&1 | head -n1)"
    else
        info "Verilator not installed (optional, install with --verilator)"
    fi
    
    success "All core dependencies are properly installed"
}

# Create environment setup script
create_env_script() {
    local env_script="$PROJECT_ROOT/scripts/rocket_chip_env.sh"
    
    cat > "$env_script" << 'EOF'
#!/bin/bash

# Rocket Chip Environment Setup Script
# Source this script to set up the environment for Rocket Chip development

# When sourced from a parent with `set -u` (e.g. run_rocket_chip.sh), inherited
# nounset makes even guarded tests fragile across bash versions. Relax -u for
# this file only, then restore the caller's mode on return.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

_rc_java_major_from_exe() {
    local exe="$1" line v major
    [[ -z "$exe" || ! -x "$exe" ]] && echo 0 && return
    line=$("$exe" -version 2>&1 | head -n1)
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

_rc_pick_openjdk11_home() {
    if [[ -d "/usr/lib/jvm/java-11-openjdk-amd64" ]]; then
        echo "/usr/lib/jvm/java-11-openjdk-amd64"
        return
    fi
    local _d
    if compgen -G "/usr/lib/jvm/java-11-openjdk-*" >/dev/null 2>&1; then
        for _d in /usr/lib/jvm/java-11-openjdk-*; do
            [[ -d "$_d" && -x "$_d/bin/java" ]] || continue
            echo "$_d"
            return
        done
    fi
    if [[ -d "/opt/homebrew/opt/openjdk@11" ]]; then
        echo "/opt/homebrew/opt/openjdk@11"
        return
    fi
    if [[ -d "/usr/local/opt/openjdk@11" ]]; then
        echo "/usr/local/opt/openjdk@11"
        return
    fi
    echo ""
}

# Add local Scala installation to PATH if it exists
if [[ -d "$HOME/.local/scala/bin" ]]; then
    export PATH="$HOME/.local/scala/bin:$PATH"
fi

# Prefer OpenJDK 11 when JAVA_HOME is unset or points to JDK < 11 (stale JAVA_HOME=8 is common).
_rc_jh11="$(_rc_pick_openjdk11_home)"
if [[ -n "$_rc_jh11" ]]; then
    if [[ -z "${JAVA_HOME:-}" ]] || [[ "$(_rc_java_major_from_exe "${JAVA_HOME}/bin/java")" -lt 11 ]]; then
        export JAVA_HOME="$_rc_jh11"
    fi
fi
unset -v _rc_jh11

if [[ -z "${JAVA_HOME:-}" ]] && command -v java >/dev/null 2>&1; then
    _rc_java="$(readlink -f "$(command -v java)" 2>/dev/null || command -v java)"
    if [[ -n "$_rc_java" && -x "$_rc_java" ]]; then
        export JAVA_HOME="$(dirname "$(dirname "$_rc_java")")"
    fi
    unset _rc_java
fi

unset -f _rc_java_major_from_exe _rc_pick_openjdk11_home

# Put this JDK's java(1) before other copies on PATH
if [[ -n "${JAVA_HOME:-}" && -x "${JAVA_HOME}/bin/java" ]]; then
    export PATH="${JAVA_HOME}/bin:${PATH}"
fi

# Add user-local binaries to PATH (firtool, etc.)
export PATH="$HOME/.local/bin:$PATH"

# Rocket Chip specific environment variables
export ROCKET_CHIP_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/../tools/rocket-chip" && pwd)"

echo "Rocket Chip environment loaded"
echo "JAVA_HOME: ${JAVA_HOME:-<unset>}"
echo "ROCKET_CHIP_DIR: $ROCKET_CHIP_DIR"
EOF
    
    chmod +x "$env_script"
    info "Environment setup script created: $env_script"
    info "Run 'source $env_script' to load the environment"
}

# Prepend typical user-local tool locations so a fresh install run sees tools from a
# previous install before we source generated env scripts (Scala under rocket-chip-tools,
# firtool in ~/.local/bin, etc.).
rocket_chip_prepend_user_tool_paths() {
    local p
    for p in \
        "$HOME/.local/scala/bin" \
        "$HOME/.local/share/rocket-chip-tools/scala/scala-${SCALA_VERSION}/bin" \
        "$HOME/.local/share/rocket-chip-tools/sbt" \
        "$HOME/.local/bin" \
        "$HOME/mill"; do
        if [[ -d "$p" ]] || { [[ -f "$p" ]] && [[ -x "$p" ]]; }; then
            case ":$PATH:" in
                *":$p:"*) ;;
                *) export PATH="$p:$PATH" ;;
            esac
        fi
    done
    hash -r 2>/dev/null || true
}

# Check current environment status
check_environment_status() {
    log "===================================================================="
    log "Environment Status Check"
    log "===================================================================="
    
    rocket_chip_prepend_user_tool_paths
    prefer_openjdk11_for_checks || true
    
    local missing_components=()
    local optional_missing=()
    
    # Check Java
    if command_exists java; then
        local java_ver
        java_ver=$(java_major_version)
        if [[ "$java_ver" -ge "$JAVA_VERSION" ]]; then
            info "✓ Java: $(java -version 2>&1 | head -n1)"
        else
            warning "⚠ Java: version $java_ver found but $JAVA_VERSION+ required"
            missing_components+=("Java")
        fi
    else
        warning "✗ Java: Not found (required)"
        missing_components+=("Java")
    fi
    
    # Check Scala
    if command_exists scala; then
        local scala_output=$(scala -version 2>&1)
        local scala_ver=$(echo "$scala_output" | grep -oE '[0-9]+\.[0-9]+\.[0-9]+' | head -1)
        local required_major_minor=$(echo "$SCALA_VERSION" | cut -d'.' -f1-2)
        local installed_major_minor=$(echo "$scala_ver" | cut -d'.' -f1-2)
        
        if [[ "$installed_major_minor" == "$required_major_minor" ]]; then
            info "✓ Scala: $scala_ver"
        else
            warning "⚠ Scala: version $scala_ver found but $SCALA_VERSION compatible required"
            missing_components+=("Scala")
        fi
    else
        warning "✗ Scala: Not found (required)"
        missing_components+=("Scala")
    fi
    
    # Check SBT
    if command_exists sbt; then
        local sbt_output
        sbt_output=$(score_rocket_run_in_install_scratch sbt --version 2>&1 | grep 'sbt version' | head -1)
        local sbt_ver=$(echo "$sbt_output" | grep -oE '[0-9]+\.[0-9]+\.[0-9]+' | head -1)
        info "✓ SBT: $sbt_ver"
    else
        warning "✗ SBT: Not found (required)"
        missing_components+=("SBT")
    fi
    
    # Check Mill
    if command_exists mill; then
        local mill_ver
        mill_ver=$(score_rocket_run_in_install_scratch mill --version 2>&1 | grep -oE '[0-9]+\.[0-9]+\.[0-9]+' | head -1)
        info "✓ Mill: $mill_ver"
    else
        warning "✗ Mill: Not found (required)"
        missing_components+=("Mill")
    fi
    
    # Check FIRRTL (optional)
    if command_exists firtool; then
        local firrtl_ver=$(firtool --version 2>&1 | head -1)
        info "✓ FIRRTL: $firrtl_ver"
    else
        info "○ FIRRTL: Not found (optional)"
        [[ "$INSTALL_FIRRTL" == "true" ]] && optional_missing+=("FIRRTL")
    fi
    
    # Check Verilator (optional)
    if command_exists verilator; then
        local verilator_ver=$(verilator --version 2>&1 | head -n1)
        info "✓ Verilator: $verilator_ver"
    else
        info "○ Verilator: Not found (optional)"
        [[ "$INSTALL_VERILATOR" == "true" ]] && optional_missing+=("Verilator")
    fi
    
    # Check Rocket Chip submodules
    if [[ -d "$ROCKET_CHIP_DIR" ]]; then
        if [[ -f "$ROCKET_CHIP_DIR/src/main/scala/system/Configs.scala" ]]; then
            info "✓ Rocket Chip: Submodule properly initialized"
        else
            warning "⚠ Rocket Chip: Submodule not fully initialized"
            missing_components+=("Rocket Chip submodules")
        fi
    else
        warning "✗ Rocket Chip: Directory not found"
        missing_components+=("Rocket Chip submodules")
    fi
    
    log "===================================================================="
    
    # Summary
    if [[ ${#missing_components[@]} -eq 0 && ${#optional_missing[@]} -eq 0 ]]; then
        success "🎉 All components are properly installed!"
        success "Environment is ready for Rocket Chip development."
        return 0
    else
        if [[ ${#missing_components[@]} -gt 0 ]]; then
            warning "Missing required components: ${missing_components[*]}"
        fi
        if [[ ${#optional_missing[@]} -gt 0 ]]; then
            info "Missing optional components: ${optional_missing[*]}"
        fi
        
        if [[ "$FORCE_REINSTALL" == "false" && ${#missing_components[@]} -eq 0 ]]; then
            success "All required components are installed!"
            info "Only optional components are missing. You can proceed with installation or skip them."
        fi
        
        return 1
    fi
}

# Main installation function
main() {
    log "===================================================================="
    log "Rocket Chip Environment Installation Started"
    log "Log file: $INSTALL_LOG"
    log "===================================================================="
    info "Detected OS family: $(detect_os) (uname: $(uname -s) $(uname -m); adjust installs automatically)"

    if [[ "$CHECK_ONLY" != "true" ]]; then
        if ! init_score_rocket_submodule; then
            return 1
        fi
    fi

    rocket_chip_prepend_user_tool_paths
    
    # Check current environment status
    check_environment_status
    local env_status=$?
    
    # If check-only mode, exit after status check
    if [[ "$CHECK_ONLY" == "true" ]]; then
        log "===================================================================="
        if [[ $env_status -eq 0 ]]; then
            success "✅ Environment check passed - All components are ready!"
        else
            warning "❌ Environment check failed - Some components need installation"
            info "Run without --check-only to install missing components"
        fi
        log "===================================================================="
        return $env_status
    fi
    
    if [[ $env_status -eq 0 && "$FORCE_REINSTALL" == "false" ]]; then
        success "Environment already properly configured!"
        info "Use --force to reinstall components anyway."
        
        # Still create environment script and test installation
        create_env_script
        test_installation
        
        log "===================================================================="
        success "Environment check completed - No installation needed!"
        log "===================================================================="
        return 0
    fi
    
    log "Starting installation process..."
    debug "Environment status: $env_status"
    debug "Install flags: JAVA=$INSTALL_JAVA, SCALA=$INSTALL_SCALA, SBT=$INSTALL_SBT, MILL=$INSTALL_MILL, FIRRTL=$INSTALL_FIRRTL"
    
    # Install system dependencies if needed (skip for local install)
    if [[ $env_status -ne 0 && "$LOCAL_INSTALL" == "false" ]]; then
        if should_skip_system_package_step; then
            info "Skipping system package install (sufficient build tools and JDK present, or --no-system-deps / ROCKET_CHIP_SKIP_SYSTEM_DEPS=1)."
        else
            log "Installing system dependencies..."
            debug "Environment status indicates missing components, installing system dependencies"
            if ! install_system_dependencies; then
                if core_build_tools_sufficient && command_exists java && [[ "$(java_major_version)" -ge "$JAVA_VERSION" ]]; then
                    warning "System package step failed (often sudo or policy). Continuing with user-local Scala/SBT/Mill; install OS packages manually if something breaks."
                else
                    error "System dependencies installation failed"
                    return 1
                fi
            fi
        fi
    else
        if [[ "$LOCAL_INSTALL" == "true" ]]; then
            info "Skipping system dependencies (using local installation)"
        else
            info "Skipping system dependencies (environment already configured)"
        fi
        debug "Environment status indicates all components present"
    fi
    
    # Install core dependencies only if needed or forced
    if [[ "$LOCAL_INSTALL" == "true" ]]; then
        if ! install_tools_locally; then
            error "Local tools installation failed"
            return 1
        fi
    else
        if [[ "$INSTALL_JAVA" == "true" ]]; then
            if ! install_java; then
                error "Java installation failed"
                return 1
            fi
        fi

        if [[ "$INSTALL_SCALA" == "true" ]]; then
            if ! install_scala; then
                error "Scala installation failed"
                return 1
            fi
        fi

        if [[ "$INSTALL_SBT" == "true" ]]; then
            if ! install_sbt; then
                error "SBT installation failed"
                return 1
            fi
        fi

        if [[ "$INSTALL_MILL" == "true" ]]; then
            if ! install_mill; then
                error "Mill installation failed"
                return 1
            fi
        fi
    fi
    
    if [[ "$INSTALL_FIRRTL" == "true" ]]; then
        install_firrtl || warning "FIRRTL installation failed (optional)"
    fi
    
    if [[ "$INSTALL_VERILATOR" == "true" ]]; then
        install_verilator || warning "Verilator installation failed (optional)"
    fi
    
    # Setup Rocket Chip
    log "Setting up Rocket Chip submodules..."
    if ! setup_rocket_chip; then
        error "Rocket Chip setup failed"
        return 1
    fi
    
    # Environment script (JAVA_HOME + PATH); test step sources this
    log "Creating environment script..."
    create_env_script

    log "Testing installation..."
    if ! test_installation; then
        error "Installation verification failed"
        return 1
    fi
    
    log "===================================================================="
    success "Rocket Chip environment installation completed successfully!"
    log "===================================================================="
    log "Next steps:"
    log "1. Source the environment: source scripts/rocket_chip_env.sh"
    log "2. Run the generator: ./scripts/generate_rocket_chip.sh"
    log "3. Optional simulation: export RISCV=<riscv-tools prefix> (+ riscv-tests installed) then e.g."
    log "   ./scripts/generate_rocket_chip.sh --riscv-isa-smoke"
    log "   ./scripts/generate_rocket_chip.sh --mill-riscv-test-smoke   # CI-style suite, very slow"
    log "   ./scripts/generate_rocket_chip.sh --emulator-elf-smoke      # per-config mill .elf"
    log "===================================================================="
}

# Help function
show_help() {
    echo "Rocket Chip Environment Installation Script (SCORE)"
    echo ""
    echo "Usage: from SCORE repo root: $0 [OPTIONS]"
    echo ""
    echo "This script installs all dependencies required for Rocket Chip Generator."
    echo "OS detection uses /etc/os-release when present (Ubuntu/Debian, Fedora/RHEL family,"
    echo "Amazon Linux, Arch, openSUSE, macOS); unknown Linux falls back to best-effort steps."
    echo "Unless --check-only: runs git submodule update --init --recursive $RELATIVE_SUBMODULE_PATH from SCORE root"
    echo "when .gitmodules contains that path, then inits nested submodules inside tools/rocket-chip."
    echo ""
    echo "Options:"
    echo "  -h, --help              Show this help message"
    echo "  --check-only            Only check environment status, don't install anything"
    echo "  --debug                 Enable debug output for troubleshooting"
    echo "  --no-java               Skip Java installation"
    echo "  --no-scala              Skip Scala installation"
    echo "  --no-sbt                Skip SBT installation"
    echo "  --no-mill               Skip Mill installation"
    echo "  --no-firrtl             Skip FIRRTL tools installation"
    echo "  --verilator             Install Verilator for simulation"
    echo "  --force                 Force reinstall even if tools exist"
    echo "  --offline               Skip network-dependent installations"
    echo "  --no-system-deps        Skip apt/dnf/pacman/zypper steps (Scala/SBT/Mill in \$HOME; need JDK + build tools already)"
    echo ""
    echo "Environment:"
    echo "  ROCKET_CHIP_SKIP_SYSTEM_DEPS=1      Same as --no-system-deps"
    echo "  ROCKET_CHIP_SKIP_FULL_PKG_UPDATE=1  On RHEL/Fedora/Amazon, skip \"dnf/yum update -y\" (faster if you already updated)"
    echo "  ROCKET_CHIP_INSTALL_LOG_DIR=path    Install logs (default: datasets/rocket-chip/<sha>/logs/rocket_chip_install)"
    echo ""
    echo "Dependencies installed:"
    echo "  - OpenJDK $JAVA_VERSION"
    echo "  - Scala $SCALA_VERSION"
    echo "  - SBT $SBT_VERSION"
    echo "  - Mill $MILL_VERSION"
    echo "  - FIRRTL tools (optional)"
    echo "  - Verilator $VERILATOR_VERSION (optional)"
    echo ""
    echo "For generate_rocket_chip.sh --emulator-elf-smoke you also need:"
    echo "  - RISCV pointing to a riscv-tools install (libfesvr)"
    echo "  - clang, ninja, cmake (Rocket Chip Mill verilator backend)"
    echo ""
    echo "Examples:"
    echo "  $0                      # Full installation"
    echo "  $0 --check-only         # Check environment status only"
    echo "  $0 --local              # Install tools locally in user directory"
    echo "  $0 --verilator          # Include Verilator"
    echo "  $0 --no-firrtl          # Skip FIRRTL tools"
    echo "  $0 --force              # Force reinstall all"
}

# Parse command line arguments (kept in one function so the footer stays a simple call sequence).
parse_cli_args() {
    while [[ $# -gt 0 ]]; do
        case "${1:-}" in
            -h|--help)
                show_help
                exit 0
                ;;
            --check-only)
                CHECK_ONLY=true
                shift
                ;;
            --debug)
                DEBUG_MODE=true
                shift
                ;;
            --no-java)
                INSTALL_JAVA=false
                shift
                ;;
            --no-scala)
                INSTALL_SCALA=false
                shift
                ;;
            --no-sbt)
                INSTALL_SBT=false
                shift
                ;;
            --no-mill)
                INSTALL_MILL=false
                shift
                ;;
            --no-firrtl)
                INSTALL_FIRRTL=false
                shift
                ;;
            --verilator)
                INSTALL_VERILATOR=true
                shift
                ;;
            --force)
                FORCE_REINSTALL=true
                shift
                ;;
            --offline)
                OFFLINE_MODE=true
                shift
                ;;
            --local)
                LOCAL_INSTALL=true
                shift
                ;;
            --no-system-deps)
                INSTALL_SYSTEM_DEPS=false
                shift
                ;;
            *)
                error "Unknown option: $1"
                show_help
                exit 1
                ;;
        esac
    done
}

parse_cli_args "$@"
main
