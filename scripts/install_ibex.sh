#!/usr/bin/env bash

# Ibex Full Installation Script
# This script performs a complete installation of the Ibex RISC-V core
# including dependencies, virtual environment, and build setup
#
# USAGE: This script should be executed from the SCORE project root directory
#        (the directory containing tools/, scripts/, datasets/, etc.)
#        Example: ./scripts/install_ibex.sh

set -e  # Exit on any error
set -o pipefail  # Exit on pipe failures

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
INSTALL_SYSTEM_DEPS=true

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Function to print colored output
print_status() {
    echo -e "${BLUE}[INFO]${NC} $1"
}

print_success() {
    echo -e "${GREEN}[SUCCESS]${NC} $1"
}

print_warning() {
    echo -e "${YELLOW}[WARNING]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

# Function to check if command exists
command_exists() {
    command -v "$1" >/dev/null 2>&1
}

# Detect OS family (same strategy as scripts/install_rocket_chip.sh).
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

rpm_pkg_manager() {
    if command -v dnf >/dev/null 2>&1; then
        echo "dnf"
    else
        echo "yum"
    fi
}

run_priv() {
    if [[ ${EUID:-$(id -u)} -eq 0 ]]; then
        "$@"
    else
        sudo "$@"
    fi
}

# Install distro packages needed to build Ibex (and optional native tools).
install_ibex_system_dependencies() {
    local os
    os=$(detect_os)
    print_status "Installing Ibex system packages for OS family: $os"
    if [[ ${EUID:-$(id -u)} -ne 0 ]] && command_exists sudo; then
        print_status "If sudo asks for a password, enter it in this terminal."
    fi

    case "$os" in
        ubuntu|debian)
            if ! run_priv apt-get update; then
                print_error "apt-get update failed"
                return 1
            fi
            if ! run_priv apt-get install -y \
                curl wget git build-essential autoconf flex bison make g++ \
                zlib1g-dev python3 python3-pip python3-venv python3-dev \
                python3-setuptools python3-wheel python3-yaml \
                device-tree-compiler xz-utils libelf-dev libcairo2-dev \
                srecord pkg-config; then
                print_error "apt-get install failed"
                return 1
            fi
            ;;
        fedora|rhel|amazon)
            local pm
            pm=$(rpm_pkg_manager)
            if [[ "${IBEX_SKIP_FULL_PKG_UPDATE:-0}" != "1" ]]; then
                run_priv "$pm" update -y || print_warning "Distro update failed; continuing..."
            fi
            run_priv "$pm" groupinstall -y "Development Tools" || true
            if ! run_priv "$pm" install -y \
                curl wget git autoconf flex bison make gcc-c++ zlib-devel \
                python3 python3-pip python3-devel \
                elfutils-libelf-devel dtc xz \
                cairo-devel pkgconfig srecord; then
                print_error "$pm install failed"
                return 1
            fi
            ;;
        arch)
            if ! run_priv pacman -Sy --noconfirm; then
                return 1
            fi
            if ! run_priv pacman -S --needed --noconfirm \
                base-devel git curl wget autoconf flex bison make gcc zlib \
                python python-pip libelf dtc cairo pkgconf srecord; then
                return 1
            fi
            ;;
        opensuse)
            run_priv zypper refresh -y || true
            run_priv zypper install -y -t pattern devel_basis || true
            if ! run_priv zypper install -y \
                git curl wget autoconf flex bison make gcc gcc-c++ zlib-devel \
                python3 python3-pip python3-devel \
                libelf-devel dtc cairo-devel pkg-config srecord; then
                return 1
            fi
            ;;
        macos)
            if ! command_exists brew; then
                print_error "Homebrew not found. Install from https://brew.sh"
                return 1
            fi
            if ! brew install curl wget git autoconf flex bison make python3 \
                dtc xz pkg-config cairo libelf srecord; then
                return 1
            fi
            ;;
        *)
            print_warning "Unknown OS family '$os'. Install build tools, git, python3, autoconf, flex, bison manually."
            return 0
            ;;
    esac
    print_success "System package step finished for $os"
    return 0
}

ibex_can_use_upstream_ci_deps() {
    [[ -f /etc/os-release ]] || return 1
    # shellcheck source=/dev/null
    . /etc/os-release
    [[ "${ID:-}" == "ubuntu" ]] || return 1
    case "${VERSION_ID:-}" in
        20.04|22.04) return 0 ;;
        *) return 1 ;;
    esac
}

# Project-local prebuilts (Linux x86_64) when upstream ci/install-build-deps.sh is Ubuntu-only.
install_ibex_portable_host_tools() {
    print_status "Installing Ibex host tools into ${PROJECT_ROOT}/tools/ibex-host-tools (no sudo)..."
    local root="${PROJECT_ROOT}/tools/ibex-host-tools"
    local cache="$root/build-cache"
    local kernel machine
    kernel=$(uname -s)
    machine=$(uname -m)

    mkdir -p "$cache" "$root"

    if [[ "$kernel" == "Linux" ]] && [[ "$machine" == "x86_64" ]]; then
        local tc_url="https://github.com/lowRISC/lowrisc-toolchains/releases/download/${RISCV_TOOLCHAIN_TAR_VERSION}/${RISCV_TOOLCHAIN_TAR_VARIANT}-${RISCV_TOOLCHAIN_TAR_VERSION}.tar.xz"
        local tc_file="$cache/rv32-toolchain.tar.xz"
        if [[ ! -x "$root/riscv/bin/riscv32-unknown-elf-gcc" ]] && [[ ! -x "$root/riscv/bin/riscv32-elf-gcc" ]]; then
            print_status "Downloading lowRISC RISC-V toolchain..."
            curl -fsSL "$tc_url" -o "$tc_file"
            mkdir -p "$root/riscv"
            tar -C "$root/riscv" -xf "$tc_file" --strip-components=1
            print_success "Toolchain installed to $root/riscv"
        else
            print_status "lowRISC toolchain already present under $root/riscv"
        fi

        local cosim_url="https://storage.googleapis.com/ibex-cosim-builds/ibex-cosim-${IBEX_COSIM_VERSION}.tar.gz"
        local cosim_file="$cache/ibex-cosim-${IBEX_COSIM_VERSION}.tar.gz"
        if [[ ! -d "$root/riscv-isa-sim/bin" ]]; then
            print_status "Downloading Ibex cosim (Spike)..."
            curl -fsSL "$cosim_url" -o "$cosim_file"
            mkdir -p "$root/riscv-isa-sim"
            tar -C "$root/riscv-isa-sim" -xzf "$cosim_file" --strip-components=1
            print_success "Cosim installed to $root/riscv-isa-sim"
        else
            print_status "Cosim already present under $root/riscv-isa-sim"
        fi

        local ver_url="https://storage.googleapis.com/verilator-builds/verilator-${VERILATOR_VERSION}.tar.gz"
        local ver_file="$cache/verilator-${VERILATOR_VERSION}.tar.gz"
        if [[ ! -d "$root/verilator/${VERILATOR_VERSION}/bin" ]]; then
            print_status "Downloading Verilator ${VERILATOR_VERSION}..."
            curl -fsSL "$ver_url" -o "$ver_file"
            mkdir -p "$root/verilator"
            tar -C "$root/verilator" -xzf "$ver_file"
            print_success "Verilator prebuilt extracted under $root/verilator"
        else
            print_status "Verilator ${VERILATOR_VERSION} already present under $root/verilator"
        fi
        # lowRISC tarball puts verilator under prefix/bin only; generated makefiles use
        # $(VERILATOR_ROOT)/bin/verilator with VERILATOR_ROOT=.../share/verilator. Add symlinks so
        # perl, codegen, and make agree on one tree (SCORE sets VERILATOR_ROOT to share/verilator).
        local _vpre="$root/verilator/${VERILATOR_VERSION}"
        if [[ -x "$_vpre/bin/verilator" && -d "$_vpre/share/verilator/bin" ]]; then
            ln -sfn ../../../bin/verilator "$_vpre/share/verilator/bin/verilator"
            ln -sfn ../../../bin/verilator_bin "$_vpre/share/verilator/bin/verilator_bin"
        fi

        local verb_url="https://github.com/chipsalliance/verible/releases/download/${VERIBLE_VERSION}/verible-${VERIBLE_VERSION}-linux-static-x86_64.tar.gz"
        local verb_file="$cache/verible-${VERIBLE_VERSION}.tar.gz"
        if [[ ! -d "$root/verible/bin" ]]; then
            print_status "Downloading Verible ${VERIBLE_VERSION}..."
            curl -fsSL "$verb_url" -o "$verb_file"
            mkdir -p "$root/verible"
            tar -C "$root/verible" -xzf "$verb_file" --strip-components=1
            chmod 755 "$root/verible/bin" 2>/dev/null || true
            print_success "Verible installed to $root/verible"
        else
            print_status "Verible already present under $root/verible"
        fi
    else
        print_warning "Prebuilt Verilator/Verible/cosim/toolchain tarballs target Linux x86_64."
        print_warning "On ${kernel} ${machine}: install Verilator (e.g. brew install verilator), Verible, and a rv32 RISC-V toolchain; set RISCV if needed."
    fi

    print_success "Portable host tools step finished"
}

# Function to validate execution directory
validate_execution_directory() {
    print_status "Validating execution directory..."
    
    # Check if we're in the correct directory
    if [ ! -d "tools/ibex" ]; then
        print_error "This script must be executed from the SCORE project root directory"
        print_error "Current directory: $(pwd)"
        print_error ""
        print_error "Expected directory structure:"
        print_error "  score/"
        print_error "  ├── tools/"
        print_error "  │   └── ibex/"
        print_error "  ├── scripts/"
        print_error "  │   └── install_ibex.sh  <- this script"
        print_error "  ├── datasets/"
        print_error "  └── ..."
        print_error ""
        print_error "Please run this script from the score/ directory:"
        print_error "  cd /path/to/score"
        print_error "  ./scripts/install_ibex.sh"
        exit 1
    fi
    
    if [ ! -f "scripts/install_ibex.sh" ]; then
        print_error "This script must be executed from the SCORE project root directory"
        print_error "Script not found at: scripts/install_ibex.sh"
        exit 1
    fi
    
    print_success "Execution directory validated"
    print_status "Running from: $(pwd)"
}

# Function to check system requirements
check_system_requirements() {
    print_status "Checking system requirements..."
    
    # Check Python 3
    if ! command_exists python3; then
        print_error "Python 3 is required but not found. Please install Python 3.8 or later."
        exit 1
    fi
    
    # Check Python version
    PYTHON_VERSION=$(python3 -c "import sys; print(f'{sys.version_info.major}.{sys.version_info.minor}')")
    if python3 -c "import sys; exit(0 if sys.version_info >= (3, 8) else 1)"; then
        print_success "Python version $PYTHON_VERSION is compatible"
    else
        print_error "Python 3.8 or later is required. Found Python $PYTHON_VERSION"
        exit 1
    fi
    
    # Check git
    if ! command_exists git; then
        print_error "Git is required but not found. Please install git."
        exit 1
    fi
    
    # pip (venv uses python -m pip; system pip3 name varies)
    if ! command_exists pip3 && ! python3 -m pip --version >/dev/null 2>&1; then
        print_error "pip for Python 3 is required. Try: python3 -m ensurepip --upgrade"
        exit 1
    fi
    
    print_success "System requirements check passed"
}

# Function to setup environment variables for install-build-deps.sh
setup_environment_variables() {
    print_status "Setting up environment variables for build dependencies..."
    
    # Portable prebuilts (non-Ubuntu path) must match URLs that still exist on
    # lowRISC / Google Storage / Verible releases. Keep these in sync with
    # tools/ibex/ci/vars.env when bumping the Ibex submodule.
    export VERILATOR_VERSION="v4.210"
    export VERIBLE_VERSION="v0.0-3622-g07b310a3"
    export RISCV_TOOLCHAIN_TAR_VERSION="20220210-1"
    export RISCV_TOOLCHAIN_TAR_VARIANT="lowrisc-toolchain-gcc-rv32imcb"
    export IBEX_COSIM_VERSION="6d5b660"
    
    print_success "Environment variables set"
}

# Function to update Ibex repository
update_ibex_repository() {
    print_status "Updating Ibex repository..."
    
    IBEX_DIR="tools/ibex"
    
    if [ ! -d "$IBEX_DIR" ]; then
        print_error "Ibex directory not found at $IBEX_DIR"
        exit 1
    fi
    
    # Check if this is a git submodule
    if [ -f "$IBEX_DIR/.git" ]; then
        print_status "Detected git submodule at $IBEX_DIR"
        
        # Update the submodule from the parent repository
        print_status "Updating git submodule..."
        git submodule update --init --recursive "$IBEX_DIR"
        
        # Go into the submodule directory to pull latest changes
        cd "$IBEX_DIR"

        print_status "Current directory: $(pwd)"
        
        # Check if we can access the git repository
        if git status >/dev/null 2>&1; then
            print_status "Fetching latest changes..."
            git fetch origin
            
            # Check current branch
            CURRENT_BRANCH=$(git branch --show-current)
            print_status "Current branch: $CURRENT_BRANCH"
            
            # Pull latest changes
            print_status "Pulling latest changes..."
            git pull origin "$CURRENT_BRANCH"
            
            # Update submodules if they exist
            if [ -f ".gitmodules" ]; then
                print_status "Updating submodules..."
                git submodule update --init --recursive
            fi
            
            print_success "Ibex submodule updated successfully"
        else
            print_warning "Cannot access git repository in submodule. This might be a shallow clone."
            print_warning "Consider running: git submodule update --init --recursive tools/ibex"
        fi
        
        # Return to original directory
        cd - > /dev/null
        
    elif [ -d "$IBEX_DIR/.git" ]; then
        # This is a standalone git repository
        print_status "Detected standalone git repository at $IBEX_DIR"
        cd "$IBEX_DIR"
        
        # Fetch latest changes
        print_status "Fetching latest changes..."
        git fetch origin
        
        # Check current branch
        CURRENT_BRANCH=$(git branch --show-current)
        print_status "Current branch: $CURRENT_BRANCH"
        
        # Pull latest changes
        print_status "Pulling latest changes..."
        git pull origin "$CURRENT_BRANCH"
        
        # Update submodules if they exist
        if [ -f ".gitmodules" ]; then
            print_status "Updating submodules..."
            git submodule update --init --recursive
        fi
        
        print_success "Ibex repository updated successfully"
        
        # Return to original directory
        cd - > /dev/null
        
    else
        print_error "Not a git repository or submodule. Please ensure Ibex is properly cloned."
        print_error "Current directory: $(pwd)"
        print_error ""
        print_error "This could mean:"
        print_error "  1. Ibex was not added as a git submodule"
        print_error "  2. The .git directory/file is missing"
        print_error "  3. Files were copied instead of cloned"
        print_error ""
        print_error "To fix this, you can:"
        print_error "  1. Add Ibex as a submodule: git submodule add git@github.com:lowrisc/ibex.git tools/ibex"
        print_error "  2. Or clone it manually: git clone git@github.com:lowrisc/ibex.git tools/ibex"
        print_error "  3. Or skip the update with: --skip-update"
        exit 1
    fi
}

# Function to create and activate virtual environment
setup_virtual_environment() {
    print_status "Setting up Python virtual environment..."
    
    IBEX_DIR="tools/ibex"
    VENV_DIR="$IBEX_DIR/venv"
    
    cd "$IBEX_DIR"
    
    # Check if venv already exists
    if [ -d "venv" ]; then
        print_warning "Virtual environment already exists at $VENV_DIR"
        read -p "Do you want to recreate it? (y/N): " -n 1 -r
        echo
        if [[ $REPLY =~ ^[Yy]$ ]]; then
            print_status "Removing existing virtual environment..."
            rm -rf venv
        else
            print_status "Using existing virtual environment"
            cd - > /dev/null
            return 0
        fi
    fi
    
    # Create virtual environment
    print_status "Creating virtual environment..."
    python3 -m venv venv
    
    # Activate virtual environment
    print_status "Activating virtual environment..."
    source venv/bin/activate
    
    # Upgrade pip
    print_status "Upgrading pip..."
    pip install --upgrade pip setuptools wheel
    
    print_success "Virtual environment created and activated"
    
    # Return to original directory
    cd - > /dev/null
}

# Function to install Python dependencies
install_python_dependencies() {
    print_status "Installing Python dependencies..."
    
    IBEX_DIR="tools/ibex"
    cd "$IBEX_DIR"
    
    # Activate virtual environment if not already activated
    if [ -z "$VIRTUAL_ENV" ]; then
        source venv/bin/activate
    fi
    
    # Install Python requirements
    if [ -f "python-requirements.txt" ]; then
        print_status "Installing requirements from python-requirements.txt..."
        pip install -r python-requirements.txt
    else
        print_warning "python-requirements.txt not found"
    fi
    
    print_success "Python dependencies installed"
    
    # Return to original directory
    cd - > /dev/null
}

# Install venv sitecustomize to silence Edalize's per-run Verilator "tool API deprecated" warning.
# Ibex cores still use the classic backend; the message is noise until upstream migrates.
install_ibex_venv_sitecustomize() {
    local ibex_dir="$PROJECT_ROOT/tools/ibex"
    local py="$ibex_dir/venv/bin/python3"
    local site_pkg

    if [[ ! -x "$py" ]]; then
        return 0
    fi
    site_pkg=$("$py" -c "import sysconfig; print(sysconfig.get_path('purelib'))")
    if [[ -z "$site_pkg" || ! -d "$site_pkg" ]]; then
        print_warning "Could not resolve venv site-packages; skipping sitecustomize"
        return 0
    fi

    if [[ -f "$site_pkg/sitecustomize.py" ]] && ! grep -q 'SCORE-ibex-edalize-quiet' "$site_pkg/sitecustomize.py" 2>/dev/null; then
        print_warning "Leaving existing sitecustomize.py unchanged (not managed by SCORE)."
        return 0
    fi

    print_status "Writing venv sitecustomize (quiet Edalize Verilator deprecation notice)..."
    cat > "$site_pkg/sitecustomize.py" << 'PY'
# SCORE-ibex-edalize-quiet (install_ibex.sh / generate_ibex.sh; auto-loaded by Python in this venv).
import logging

try:
    logging.getLogger("edalize.verilator").setLevel(logging.ERROR)
except Exception:
    pass
PY
    print_success "sitecustomize installed: $site_pkg/sitecustomize.py"
}

# Function to run the build dependencies installation
run_build_deps_installation() {
    print_status "Installing build dependencies..."
    
    IBEX_DIR="tools/ibex"
    cd "$IBEX_DIR"
    
    # Activate virtual environment if not already activated
    if [ -z "$VIRTUAL_ENV" ]; then
        source venv/bin/activate
    fi
    
    if [ ! -f "ci/install-build-deps.sh" ]; then
        print_error "install-build-deps.sh not found at ci/install-build-deps.sh"
        exit 1
    fi
    chmod +x ci/install-build-deps.sh

    if ibex_can_use_upstream_ci_deps; then
        print_status "Using upstream ci/install-build-deps.sh (Ubuntu 20.04/22.04)."
        ./ci/install-build-deps.sh
    else
        print_status "Host is not Ubuntu 20.04/22.04; using portable prebuilts + venv Python deps."
        print_status "Detected OS: $(detect_os); uname: $(uname -s) $(uname -m)"
        install_ibex_portable_host_tools
    fi
    
    print_success "Build dependencies installed"
    
    # Return to original directory
    cd - > /dev/null
}

# Function to setup environment for Ibex
setup_ibex_environment() {
    print_status "Setting up Ibex environment..."
    
    IBEX_DIR="tools/ibex"
    VERILATOR_DIR="tools/verilator"
    cd "$IBEX_DIR"
    
    # Create environment setup script
    cat > setup_env.sh << EOF
#!/usr/bin/env bash

# Ibex Environment Setup Script
# Source this script to activate the Ibex environment
# Usage: source setup_env.sh

IBEX_DIR="\$(cd "\$(dirname "\${BASH_SOURCE[0]}")" && pwd)"
TOOLS_DIR="\$(dirname "\$IBEX_DIR")"
VERILATOR_DIR="\$TOOLS_DIR/verilator"
IBEX_HOST_TOOLS="\$TOOLS_DIR/ibex-host-tools"

# Activate virtual environment
if [ -d "\$IBEX_DIR/venv" ]; then
    source "\$IBEX_DIR/venv/bin/activate"
    echo "Virtual environment activated"
else
    echo "Warning: Virtual environment not found at \$IBEX_DIR/venv"
fi

# Set Ibex-specific environment variables
export IBEX_ROOT="\$IBEX_DIR"
export PATH="\$IBEX_DIR/venv/bin:\$PATH"

# SCORE project-local prebuilts (portable install path)
if [ -d "\$IBEX_HOST_TOOLS/riscv/bin" ]; then
    export RISCV="\$IBEX_HOST_TOOLS/riscv"
    export PATH="\$RISCV/bin:\$PATH"
fi
if [ -d "\$IBEX_HOST_TOOLS/riscv-isa-sim/bin" ]; then
    export PATH="\$IBEX_HOST_TOOLS/riscv-isa-sim/bin:\$PATH"
fi
if [ -d "\$IBEX_HOST_TOOLS/verilator" ]; then
    for _v in "\$IBEX_HOST_TOOLS/verilator"/*; do
        [ -d "\$_v/bin" ] && export PATH="\$_v/bin:\$PATH"
    done
fi
if [ -d "\$IBEX_HOST_TOOLS/verible/bin" ]; then
    export PATH="\$IBEX_HOST_TOOLS/verible/bin:\$PATH"
fi

# Add local Verilator installation to PATH if it exists
if [ -d "\$VERILATOR_DIR/install/bin" ]; then
    export PATH="\$VERILATOR_DIR/install/bin:\$PATH"
    echo "Local Verilator installation added to PATH"
fi

# Upstream CI paths (/tools/...) when install-build-deps.sh was used with sudo
if [ -d "/tools/riscv-isa-sim/bin" ]; then
    export PATH="/tools/riscv-isa-sim/bin:\$PATH"
fi
if [ -d "/tools/verilator/bin" ]; then
    export PATH="/tools/verilator/bin:\$PATH"
fi
if [ -d "/tools/verible/bin" ]; then
    export PATH="/tools/verible/bin:\$PATH"
fi
if [ -d "/tools/riscv/bin" ]; then
    export RISCV="/tools/riscv"
    export PATH="\$RISCV/bin:\$PATH"
fi

# Prebuilts above prepend to PATH; put the Ibex venv back in front so \`python3\` and FuseSoC
# pre_build hooks use the venv (packaging, edalize, etc.).
export PATH="\$IBEX_DIR/venv/bin:\$PATH"

# Portable Verilator prebuilts embed CI paths in generated makefiles unless VERILATOR_ROOT points at
# the real .../share/verilator tree. install_ibex_portable_host_tools adds symlinks under
# share/verilator/bin so the perl driver and V*.mk recipes both resolve.
if command -v verilator >/dev/null 2>&1; then
    _VER_BIN="\$(command -v verilator)"
    _VER_PREFIX="\$(cd "\$(dirname "\$_VER_BIN")/.." && pwd)"
    if [ -f "\$_VER_PREFIX/share/verilator/include/verilated.mk" ]; then
        export VERILATOR_ROOT="\$_VER_PREFIX/share/verilator"
    fi
    unset _VER_BIN _VER_PREFIX
fi
export MAKEFLAGS="\${MAKEFLAGS:+\$MAKEFLAGS }-e"

echo "Ibex environment setup complete"
echo "IBEX_ROOT: \$IBEX_ROOT"
echo "Python: \$(command -v python)"
echo "Python3: \$(command -v python3)"
echo "Verilator: \$(command -v verilator 2>/dev/null || echo 'not found')"
if [ -n "\$(which verilator 2>/dev/null)" ]; then
    echo "Verilator version: \$(verilator --version 2>/dev/null | grep -o '[0-9]\+\.[0-9]\+' | head -1)"
fi
EOF
    
    chmod +x setup_env.sh
    
    print_success "Environment setup script created at $IBEX_DIR/setup_env.sh"
    
    # Return to original directory
    cd - > /dev/null
}

# Function to test the installation
test_installation() {
    print_status "Testing Ibex installation..."
    
    IBEX_DIR="tools/ibex"
    cd "$IBEX_DIR"
    
    # Match user workflow: PATH, portable prebuilts, and VERILATOR_ROOT (see setup_env.sh).
    if [[ -f ./setup_env.sh ]]; then
        # shellcheck source=/dev/null
        source ./setup_env.sh
    else
        print_warning "setup_env.sh not found; activating venv only (Verilator paths may be wrong)"
        # shellcheck source=/dev/null
        source venv/bin/activate
        export PATH="$PWD/venv/bin:$PATH"
    fi
    
    # Test Python packages
    print_status "Testing Python packages..."
    # FuseSoC 2.x does not set fusesoc.__version__; use package metadata.
    python -c "import importlib.metadata as m; print('FuseSoC version:', m.version('fusesoc'))"
    
    # Test if we can build a simple system
    print_status "Testing simple system build..."
    if command_exists fusesoc; then
        print_status "FuseSoC is available"
        
        # Try to build a simple system (this might take a while)
        print_status "Building simple system (this may take several minutes)..."
        if fusesoc --cores-root=. run --target=sim --setup --build \
            lowrisc:ibex:ibex_simple_system --RV32E=0 --RV32M=ibex_pkg::RV32MFast; then
            print_success "Simple system build successful"
        else
            print_warning "Simple system build failed (this might be due to missing system dependencies)"
        fi
    else
        print_warning "FuseSoC not found in PATH"
    fi
    
    print_success "Installation test completed"
    
    # Return to original directory
    cd - > /dev/null
}

# Function to display usage information
show_usage() {
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "IMPORTANT: This script must be executed from the SCORE project root directory"
    echo "           (the directory containing tools/, scripts/, datasets/, etc.)"
    echo ""
    echo "Example:"
    echo "  cd /path/to/score"
    echo "  ./scripts/install_ibex.sh"
    echo ""
    echo "Options:"
    echo "  --help, -h           Show this help message"
    echo "  --skip-update        Skip updating the Ibex repository"
    echo "  --skip-venv          Skip virtual environment setup"
    echo "  --skip-deps          Skip Python dependencies installation"
    echo "  --skip-build-deps    Skip build dependencies installation"
    echo "  --skip-test          Skip installation testing"
    echo "  --no-system-deps     Skip apt/dnf/pacman/zypper/brew package install (need compilers + python3 already)"
    echo "  --install-verilator  Install Verilator from GitHub (v4.210)"
    echo "  --update-verilator   Update existing Verilator installation"
    echo "  --check-verilator    Check Verilator installation status only"
    echo "  --verbose, -v        Enable verbose output"
    echo ""
    echo "This script will:"
    echo "  1. Validate execution directory"
    echo "  2. Check system requirements"
    echo "  2b. Install OS packages (unless --no-system-deps; Ubuntu/Debian, Fedora/RHEL, Arch, SUSE, macOS)"
    echo "  3. Update Ibex repository (unless --skip-update)"
    echo "  4. Install or update Verilator (if requested)"
    echo "  5. Create Python virtual environment (unless --skip-venv)"
    echo "  6. Install Python dependencies (unless --skip-deps)"
    echo "  7. Install build dependencies (unless --skip-build-deps)"
    echo "  8. Setup environment (always)"
    echo "  9. Test installation (unless --skip-test)"
    echo ""
    echo "Verilator Installation:"
    echo "  - Verilator v4.210 will be installed as a git submodule in tools/verilator"
    echo "  - The installation includes building from source"
    echo "  - A symlink will be created in /usr/local/bin if possible"
    echo "  - The environment setup script will include the local Verilator path"
}

# Function to install Verilator from GitHub
install_verilator_from_github() {
    print_status "Installing Verilator from GitHub..."
    
    VERILATOR_DIR="tools/verilator"
    VERILATOR_VERSION="v4.210"  # Use the required version for Ibex
    
    # Check if Verilator directory already exists
    if [ -d "$VERILATOR_DIR" ]; then
        print_warning "Verilator directory already exists at $VERILATOR_DIR"
        read -p "Do you want to recreate it? (y/N): " -n 1 -r
        echo
        if [[ $REPLY =~ ^[Yy]$ ]]; then
            print_status "Removing existing Verilator directory..."
            rm -rf "$VERILATOR_DIR"
            
            # If it was a submodule, remove it from git
            if git ls-files --error-unmatch "$VERILATOR_DIR" >/dev/null 2>&1; then
                print_status "Removing Verilator from git index..."
                git rm -rf "$VERILATOR_DIR" 2>/dev/null || true
                git commit -m "Remove existing Verilator directory" 2>/dev/null || true
            fi
        else
            print_status "Using existing Verilator directory"
            return 0
        fi
    fi
    
    # Create tools directory if it doesn't exist
    mkdir -p tools
    
    # Check if this should be a git submodule
    if [ -d ".git" ]; then
        print_status "Adding Verilator as git submodule..."
        
        # Check if it's already in the git index
        if git ls-files --error-unmatch "$VERILATOR_DIR" >/dev/null 2>&1; then
            print_warning "Verilator already exists in git index"
            print_status "Updating existing submodule..."
            
            # Update the existing submodule
            git submodule update --init --recursive "$VERILATOR_DIR"
            
            # Go into the Verilator directory
            cd "$VERILATOR_DIR"
            
            # Checkout the specific version
            print_status "Checking out Verilator version $VERILATOR_VERSION..."
            git checkout "$VERILATOR_VERSION"
            
            # Update submodules if they exist
            if [ -f ".gitmodules" ]; then
                print_status "Updating Verilator submodules..."
                git submodule update --init --recursive
            fi
            
            print_success "Verilator submodule updated to version $VERILATOR_VERSION"
            
        else
            # Add Verilator as a new submodule
            git submodule add git@github.com:verilator/verilator.git "$VERILATOR_DIR"
            
            # Go into the Verilator directory
            cd "$VERILATOR_DIR"
            
            # Checkout the specific version
            print_status "Checking out Verilator version $VERILATOR_VERSION..."
            git checkout "$VERILATOR_VERSION"
            
            # Update submodules if they exist
            if [ -f ".gitmodules" ]; then
                print_status "Updating Verilator submodules..."
                git submodule update --init --recursive
            fi
            
            print_success "Verilator submodule added and checked out version $VERILATOR_VERSION"
        fi
        
    else
        print_status "Cloning Verilator as standalone repository..."
        
        # Clone Verilator directly
        git clone git@github.com:verilator/verilator.git "$VERILATOR_DIR"
        
        # Go into the Verilator directory
        cd "$VERILATOR_DIR"
        
        # Checkout the specific version
        print_status "Checking out Verilator version $VERILATOR_VERSION..."
        git checkout "$VERILATOR_VERSION"
        
        # Update submodules if they exist
        if [ -f ".gitmodules" ]; then
            print_status "Updating Verilator submodules..."
            git submodule update --init --recursive
        fi
        
        print_success "Verilator cloned and checked out version $VERILATOR_VERSION"
    fi
    
    # Build and install Verilator
    print_status "Building Verilator (this may take several minutes)..."
    
    # Check if autoconf is available
    if ! command_exists autoconf; then
        print_error "autoconf is required to build Verilator"
        print_error "Please install it with: sudo apt install autoconf"
        exit 1
    fi
    
    # Generate configure script
    print_status "Generating configure script..."
    autoconf
    
    # Configure with absolute path
    print_status "Configuring Verilator..."
    VERILATOR_ABS_DIR="$(cd "$VERILATOR_DIR" && pwd)"
    ./configure --prefix="$VERILATOR_ABS_DIR/install"
    
    # Build
    print_status "Building Verilator..."
    make -j$(nproc)
    
    # Install
    print_status "Installing Verilator..."
    make install
    
    print_success "Verilator built and installed successfully"
    
    # Create a symlink to make it available system-wide (optional)
    print_status "Creating symlink for system-wide access..."
    if [ -w "/usr/local/bin" ]; then
        ln -sf "$VERILATOR_DIR/install/bin/verilator" "/usr/local/bin/verilator"
        print_success "Verilator symlink created in /usr/local/bin"
    else
        print_warning "Cannot create symlink in /usr/local/bin (permission denied)"
        print_warning "You can manually create it with: sudo ln -sf $VERILATOR_DIR/install/bin/verilator /usr/local/bin/verilator"
    fi
    
    # Return to original directory
    cd - > /dev/null
}

# Function to update Verilator submodule
update_verilator_submodule() {
    print_status "Updating Verilator submodule..."
    
    VERILATOR_DIR="tools/verilator"
    VERILATOR_VERSION="v4.210"
    
    if [ ! -d "$VERILATOR_DIR" ]; then
        print_error "Verilator directory not found at $VERILATOR_DIR"
        print_error "Run the installation first or use --install-verilator"
        return 1
    fi
    
    # Check if this is a git submodule
    if [ -f "$VERILATOR_DIR/.git" ]; then
        print_status "Detected Verilator as git submodule"
        
        # Update the submodule from the parent repository
        print_status "Updating git submodule..."
        git submodule update --init --recursive "$VERILATOR_DIR"
        
        # Go into the submodule directory
        cd "$VERILATOR_DIR"
        
        # Check if we can access the git repository
        if git status >/dev/null 2>&1; then
            print_status "Fetching latest changes..."
            git fetch origin
            
            # Checkout the specific version
            print_status "Checking out Verilator version $VERILATOR_VERSION..."
            git checkout "$VERILATOR_VERSION"
            
            # Update submodules if they exist
            if [ -f ".gitmodules" ]; then
                print_status "Updating submodules..."
                git submodule update --init --recursive
            fi
            
            print_success "Verilator submodule updated successfully"
        else
            print_warning "Cannot access git repository in submodule"
            return 1
        fi
        
        # Return to original directory
        cd - > /dev/null
        
    elif [ -d "$VERILATOR_DIR/.git" ]; then
        # This is a standalone git repository
        print_status "Detected Verilator as standalone git repository"
        cd "$VERILATOR_DIR"
        
        # Fetch latest changes
        print_status "Fetching latest changes..."
        git fetch origin
        
        # Checkout the specific version
        print_status "Checking out Verilator version $VERILATOR_VERSION..."
        git checkout "$VERILATOR_VERSION"
        
        # Update submodules if they exist
        if [ -f ".gitmodules" ]; then
            print_status "Updating submodules..."
            git submodule update --init --recursive
        fi
        
        print_success "Verilator repository updated successfully"
        
        # Return to original directory
        cd - > /dev/null
        
    else
        print_error "Not a git repository or submodule"
        return 1
    fi
    
    # Rebuild Verilator if needed
    if [ -f "$VERILATOR_DIR/install/bin/verilator" ]; then
        print_status "Verilator already built. Checking if rebuild is needed..."
        
        # Check if the binary is up to date
        if [ "$VERILATOR_DIR/install/bin/verilator" -ot "$VERILATOR_DIR/verilator.cpp" ]; then
            print_status "Rebuilding Verilator..."
            cd "$VERILATOR_DIR"
            make -j$(nproc)
            make install
            cd - > /dev/null
            print_success "Verilator rebuilt successfully"
        else
            print_success "Verilator is up to date"
        fi
    else
        print_status "Building Verilator..."
        cd "$VERILATOR_DIR"
        autoconf
        VERILATOR_ABS_DIR="$(pwd)"
        ./configure --prefix="$VERILATOR_ABS_DIR/install"
        make -j$(nproc)
        make install
        cd - > /dev/null
        print_success "Verilator built successfully"
    fi
}

# Function to check if Verilator is already properly installed
check_verilator_installation() {
    print_status "Checking Verilator installation..."
    
    VERILATOR_DIR="tools/verilator"
    
    # Check if local Verilator installation exists and works
    if [ -f "$VERILATOR_DIR/install/bin/verilator" ]; then
        print_status "Local Verilator installation found at $VERILATOR_DIR/install/bin/verilator"
        
        # Check version
        local verilator_version=$("$VERILATOR_DIR/install/bin/verilator" --version 2>/dev/null | grep -o '[0-9]\+\.[0-9]\+' | head -1)
        if [ -n "$verilator_version" ]; then
            print_status "Local Verilator version: $verilator_version"
            
            # Parse version for comparison
            local major=$(echo "$verilator_version" | cut -d. -f1)
            local minor=$(echo "$verilator_version" | cut -d. -f2)
            # Convert to decimal by removing leading zeros
            major=$(echo "$major" | sed 's/^0*//')
            minor=$(echo "$minor" | sed 's/^0*//')
            # Handle empty strings (all zeros)
            [[ -z "$major" ]] && major=0
            [[ -z "$minor" ]] && minor=0
            local version_num=$((major * 1000 + minor))
            
            if [ $version_num -ge 4210 ]; then
                print_success "Local Verilator version $verilator_version is sufficient"
                return 0
            else
                print_warning "Local Verilator version $verilator_version is too old (need 4.210+)"
                return 1
            fi
        else
            print_warning "Could not determine local Verilator version"
            return 1
        fi
    else
        print_status "No local Verilator installation found"
        return 1
    fi
}

# Main function
main() {
    # Parse command line arguments
    SKIP_UPDATE=false
    SKIP_VENV=false
    SKIP_DEPS=false
    SKIP_BUILD_DEPS=false
    SKIP_TEST=false
    INSTALL_VERILATOR=false
    UPDATE_VERILATOR=false
    CHECK_VERILATOR=false
    VERBOSE=false

    if [[ "${IBEX_SKIP_SYSTEM_DEPS:-}" == "1" ]]; then
        INSTALL_SYSTEM_DEPS=false
    fi

    while [[ $# -gt 0 ]]; do
        case $1 in
            --help|-h)
                show_usage
                exit 0
                ;;
            --skip-update)
                SKIP_UPDATE=true
                shift
                ;;
            --skip-venv)
                SKIP_VENV=true
                shift
                ;;
            --skip-deps)
                SKIP_DEPS=true
                shift
                ;;
            --skip-build-deps)
                SKIP_BUILD_DEPS=true
                shift
                ;;
            --skip-test)
                SKIP_TEST=true
                shift
                ;;
            --no-system-deps)
                INSTALL_SYSTEM_DEPS=false
                shift
                ;;
            --install-verilator)
                INSTALL_VERILATOR=true
                shift
                ;;
            --update-verilator)
                UPDATE_VERILATOR=true
                shift
                ;;
            --check-verilator)
                CHECK_VERILATOR=true
                shift
                ;;
            --verbose|-v)
                VERBOSE=true
                set -x
                shift
                ;;
            *)
                print_error "Unknown option: $1"
                show_usage
                exit 1
                ;;
        esac
    done
    
    # Print header
    echo "=========================================="
    echo "    Ibex RISC-V Core Installation"
    echo "=========================================="
    echo ""
    echo "IMPORTANT: This script must be executed from the SCORE project root directory"
    echo "Current directory: $(pwd)"
    echo ""
    
    # Step 1: Validate execution directory
    validate_execution_directory
    
    # Step 2: Check system requirements
    check_system_requirements

    # Step 2b: Distro packages (Rocket-style multi-OS)
    if [ "$INSTALL_SYSTEM_DEPS" = true ]; then
        install_ibex_system_dependencies || print_warning "System package install reported errors; continuing if build tools exist."
    else
        print_status "Skipping system package installation (--no-system-deps or IBEX_SKIP_SYSTEM_DEPS=1)"
    fi
    
    # Step 3: Update repository (unless skipped)
    if [ "$SKIP_UPDATE" = false ]; then
        update_ibex_repository
    else
        print_status "Skipping repository update"
    fi
    
    # Step 4: Install or update Verilator (if requested)
    if [ "$CHECK_VERILATOR" = true ]; then
        check_verilator_installation
        exit 0
    elif [ "$INSTALL_VERILATOR" = true ]; then
        # Check if Verilator is already properly installed
        if check_verilator_installation; then
            print_success "Verilator is already properly installed"
            print_status "Skipping Verilator installation"
        else
            install_verilator_from_github
        fi
    elif [ "$UPDATE_VERILATOR" = true ]; then
        update_verilator_submodule
    fi
    
    # Step 5: Setup environment variables
    setup_environment_variables
    
    # Step 6: Setup virtual environment (unless skipped)
    if [ "$SKIP_VENV" = false ]; then
        setup_virtual_environment
    else
        print_status "Skipping virtual environment setup"
    fi
    
    # Step 7: Install Python dependencies (unless skipped)
    if [ "$SKIP_DEPS" = false ]; then
        install_python_dependencies
    else
        print_status "Skipping Python dependencies installation"
    fi

    # Step 7b: Tune logging for this venv (safe to re-run)
    if [ -d "$PROJECT_ROOT/tools/ibex/venv" ]; then
        install_ibex_venv_sitecustomize
    fi
    
    # Step 8: Install build dependencies (unless skipped)
    if [ "$SKIP_BUILD_DEPS" = false ]; then
        run_build_deps_installation
    else
        print_status "Skipping build dependencies installation"
    fi
    
    # Step 9: Setup environment
    setup_ibex_environment
    
    # Step 10: Test installation (unless skipped)
    if [ "$SKIP_TEST" = false ]; then
        test_installation
    else
        print_status "Skipping installation test"
    fi
    
    # Print completion message
    echo ""
    echo "=========================================="
    print_success "Ibex installation completed successfully!"
    echo "=========================================="
    echo ""
    echo "To activate the Ibex environment in the future, run:"
    echo "  cd tools/ibex"
    echo "  source setup_env.sh"
    echo ""
    if [ "$INSTALL_VERILATOR" = true ] || [ "$UPDATE_VERILATOR" = true ]; then
        echo "Verilator v4.210 has been installed locally at:"
        echo "  tools/verilator/install/bin/verilator"
        echo ""
        echo "To verify Verilator installation:"
        echo "  cd tools/ibex"
        echo "  source setup_env.sh"
        echo "  verilator --version"
        echo ""
    fi
    echo "To build and run a simple system:"
    echo "  cd tools/ibex"
    echo "  source setup_env.sh"
    echo "  make build-simple-system"
    echo "  make run-simple-system"
    echo ""
    echo "For more information, see:"
    echo "  tools/ibex/README.md"
    echo "  tools/ibex/examples/simple_system/README.md"
    echo ""
}

# Run main function with all arguments
main "$@"