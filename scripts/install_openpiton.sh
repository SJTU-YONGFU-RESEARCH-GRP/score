#!/bin/bash

# OpenPiton Environment Installation Script
# This script installs and configures all dependencies required for OpenPiton SoC Generator

# Note: Removed set -e to allow better error handling

# Global variables
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
OPENPITON_DIR="$PROJECT_ROOT/tools/openpiton"
LOG_DIR="$PROJECT_ROOT/logs/openpiton_install"

# Installation options
INSTALL_VERILOG=true
INSTALL_SYSTEMC=true
INSTALL_DRAMSIM2=true
INSTALL_NOCULATOR=true
INSTALL_GEM5=false
INSTALL_RISCV_TOOLCHAIN=true
FORCE_REINSTALL=false
OFFLINE_MODE=false
CHECK_ONLY=false
DEBUG_MODE=false

# OpenPiton Ariane bootrom expects riscv64-unknown-elf-gcc (same default as generate_openpiton.sh RISCV)
RISCV_INSTALL_DIR="${RISCV_INSTALL_DIR:-$HOME/scratch/riscv_install}"
XPACK_RISCV_NONE_ELF_VERSION="${XPACK_RISCV_NONE_ELF_VERSION:-14.2.0-3}"

# Version specifications
VERILOG_VERSION="systemverilog"
SYSTEMC_VERSION="2.3.3"
DRAMSIM2_VERSION="2.2.2"
NOCULATOR_VERSION="latest"

# Create log directory
mkdir -p "$LOG_DIR"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_openpiton openpiton_install
INSTALL_LOG="$SCRIPT_LOG_FILE"

log() {
    log_info "$@"
}

# Error handling function
handle_error() {
    local exit_code=$?
    local command="$BASH_COMMAND"
    log_error "Command failed with exit code $exit_code: $command"
    if [ "$DEBUG_MODE" = true ]; then
        log_error "Debug information:"
        log_error "  Last command: $command"
        log_error "  Exit code: $exit_code"
        log_error "  Working directory: $(pwd)"
        log_error "  User: $(whoami)"
    fi
    exit $exit_code
}

# Trap to catch errors
trap handle_error ERR

# Print banner
print_banner() {
    echo -e "${PURPLE}"
    echo "=================================================================="
    echo "  OpenPiton Environment Installation Script"
    echo "  Manycore Research Processor Generator"
    echo "=================================================================="
    echo -e "${NC}"
    log "Starting OpenPiton installation"
}

# Check if command exists
command_exists() {
    command -v "$1" >/dev/null 2>&1
}

# Check system requirements
check_system_requirements() {
    log_info "Checking system requirements..."

    # Check operating system
    if [[ "$OSTYPE" == "linux-gnu"* ]]; then
        log_success "Linux system detected"
    elif [[ "$OSTYPE" == "darwin"* ]]; then
        log_warning "macOS detected - some features may not work correctly"
    else
        log_warning "Unsupported OS: $OSTYPE"
    fi

    # Check available disk space (need at least 5GB)
    local available_space
    available_space=$(df "$PROJECT_ROOT" | awk 'NR==2 {print $4}')
    if [ "$available_space" -gt 5242880 ]; then  # 5GB in KB
        log_success "Sufficient disk space available"
    else
        log_warning "Low disk space - OpenPiton may require up to 5GB"
    fi

    # Check RAM (recommend at least 4GB)
    local total_ram
    total_ram=$(grep MemTotal /proc/meminfo | awk '{print $2}')
    if [ "$total_ram" -gt 4194304 ]; then  # 4GB in KB
        log_success "Sufficient RAM available"
    else
        log_warning "Limited RAM - compilation may be slow"
    fi
}

# Install system packages (includes OpenPiton piton/tools/sims and mktools: tcsh, Perl fields/Bit::Vector, Python Tk).
install_system_packages() {
    log_info "Installing system packages (build tools + OpenPiton sims/mktools prerequisites)..."

    if command_exists apt-get; then
        # Ubuntu/Debian
        log_info "Installing packages via apt-get..."
        sudo apt-get update
        sudo apt-get install -y \
            build-essential \
            git \
            wget \
            curl \
            python3 \
            python3-pip \
            python3-dev \
            g++ \
            gcc \
            make \
            autoconf \
            automake \
            libtool \
            bison \
            flex \
            gawk \
            tcl-dev \
            libffi-dev \
            libreadline-dev \
            pkg-config \
            zlib1g-dev \
            libboost-all-dev \
            libssl-dev \
            libbz2-dev \
            libsqlite3-dev \
            llvm \
            libncurses5-dev \
            libncursesw5-dev \
            libreadline6-dev \
            libdb5.3-dev \
            libgdbm-dev \
            liblzma-dev \
            libexpat1-dev \
            libmpfr-dev \
            libmpc-dev \
            libgmp-dev \
            texinfo \
            libgtk-3-dev \
            libcairo2-dev \
            libpango1.0-dev \
            libatk1.0-dev \
            libgdk-pixbuf2.0-dev \
            libpangocairo-1.0-dev \
            tcsh \
            libbit-vector-perl \
            python3-tk \
            verilator \
            libelf-dev \
            device-tree-compiler || log_warning "Some packages may have failed to install"
    elif command_exists yum; then
        # RHEL/CentOS/Fedora
        log_info "Installing packages via yum..."
        sudo yum groupinstall -y "Development Tools"
        sudo yum install -y \
            git \
            wget \
            curl \
            python3 \
            python3-pip \
            python3-devel \
            gcc-c++ \
            make \
            autoconf \
            automake \
            libtool \
            bison \
            flex \
            gawk \
            tcl-devel \
            libffi-devel \
            readline-devel \
            pkgconfig \
            zlib-devel \
            boost-devel \
            openssl-devel \
            bzip2-devel \
            sqlite-devel \
            llvm \
            ncurses-devel \
            gdbm-devel \
            xz-devel \
            expat-devel \
            mpfr-devel \
            libmpc-devel \
            gmp-devel \
            texinfo \
            gtk3-devel \
            cairo-devel \
            pango-devel \
            atk-devel \
            gdk-pixbuf2-devel \
            tcsh \
            perl-fields \
            perl-Bit-Vector \
            python3-tkinter \
            verilator \
            elfutils-libelf-devel \
            dtc || log_warning "Some packages may have failed to install"
    elif command_exists pacman; then
        # Arch Linux
        log_info "Installing packages via pacman..."
        sudo pacman -S --needed \
            base-devel \
            git \
            wget \
            curl \
            python \
            python-pip \
            gcc \
            make \
            autoconf \
            automake \
            libtool \
            bison \
            flex \
            gawk \
            tcl \
            libffi \
            readline \
            pkg-config \
            zlib \
            boost \
            openssl \
            bzip2 \
            sqlite \
            llvm \
            ncurses \
            gdbm \
            xz \
            expat \
            mpfr \
            libmpc \
            gmp \
            texinfo \
            gtk3 \
            cairo \
            pango \
            atk \
            gdk-pixbuf2 \
            tcsh \
            perl-bit-vector \
            tk \
            verilator || log_warning "Some packages may have failed to install"
    else
        log_error "Unsupported package manager. Please install required packages manually."
        exit 1
    fi

    log_success "System packages installation completed"
}

# Install prebuilt RISC-V embedded GCC (riscv64-unknown-elf-*) for OpenPiton Ariane bootrom.
# Uses xPack riscv-none-elf-gcc and adds symlinks so OpenPiton Makefiles find riscv64-unknown-elf-gcc.
install_riscv_embedded_toolchain() {
    if [ "$INSTALL_RISCV_TOOLCHAIN" != true ]; then
        log_info "Skipping RISC-V embedded toolchain (--no-riscv-toolchain)"
        return 0
    fi
    if [ "$OFFLINE_MODE" = true ]; then
        log_info "Offline mode: skipping RISC-V toolchain download (set RISCV or install riscv64-unknown-elf-gcc)"
        return 0
    fi
    if command -v riscv64-unknown-elf-gcc >/dev/null 2>&1; then
        log_success "riscv64-unknown-elf-gcc already on PATH: $(command -v riscv64-unknown-elf-gcc)"
        return 0
    fi
    local dest="$RISCV_INSTALL_DIR"
    if [ -x "$dest/bin/riscv64-unknown-elf-gcc" ]; then
        log_success "RISC-V toolchain already present at $dest/bin/riscv64-unknown-elf-gcc"
        return 0
    fi

    local ver="$XPACK_RISCV_NONE_ELF_VERSION"
    local base="xpack-riscv-none-elf-gcc-${ver}"
    local tarball="${base}-linux-x64.tar.gz"
    local url="https://github.com/xpack-dev-tools/riscv-none-elf-gcc-xpack/releases/download/v${ver}/${tarball}"
    local tmpdir
    tmpdir="$(mktemp -d "${TMPDIR:-/tmp}/openpiton-riscv.XXXXXX")" || {
        log_error "Could not create temp directory for RISC-V toolchain"
        return 1
    }
    log_info "Installing RISC-V embedded toolchain to $dest (xPack v${ver})..."
    (
        cd "$tmpdir" || exit 1
        if command_exists curl; then
            curl -fsSL -o "$tarball" "$url" || exit 1
        elif command_exists wget; then
            wget -q -O "$tarball" "$url" || exit 1
        else
            log_error "Need curl or wget to download RISC-V toolchain"
            exit 1
        fi
        tar -xzf "$tarball" || exit 1
        if [ ! -d "$tmpdir/$base" ]; then
            log_error "Unexpected tarball layout: missing $base"
            exit 1
        fi
        mkdir -p "$dest"
        # Merge xpack tree into dest (bin, lib, etc.)
        cp -a "$tmpdir/$base/." "$dest/" || exit 1
    ) || {
        log_error "RISC-V toolchain download or install failed (URL: $url)"
        rm -rf "$tmpdir"
        return 1
    }
    rm -rf "$tmpdir"

    local b
    for b in gcc g++ cpp ld ar as nm objcopy objdump ranlib strip gdb; do
        local src="riscv-none-elf-${b}"
        local dst="riscv64-unknown-elf-${b}"
        if [ -f "$dest/bin/$src" ] && [ ! -e "$dest/bin/$dst" ]; then
            ln -s "$src" "$dest/bin/$dst"
        fi
    done

    if [ ! -x "$dest/bin/riscv64-unknown-elf-gcc" ]; then
        log_error "Symlink step failed: $dest/bin/riscv64-unknown-elf-gcc missing"
        return 1
    fi
    log_success "RISC-V toolchain installed; add to PATH for Ariane: export RISCV=\"$dest\" PATH=\"\$RISCV/bin:\$PATH\""
    return 0
}

# Install Verilog compiler
install_verilog() {
    if [ "$INSTALL_VERILOG" = false ]; then
        log_info "Skipping Verilog installation"
        return
    fi

    log_info "Installing Verilog compiler..."

    if command_exists verilator; then
        local verilator_version
        verilator_version=$(verilator --version | cut -d' ' -f2)
        log_success "Verilator $verilator_version already installed"
    else
        log_info "Installing Verilator..."
        if command_exists apt-get; then
            sudo apt-get install -y verilator
        elif command_exists yum; then
            sudo yum install -y verilator
        elif command_exists pacman; then
            sudo pacman -S verilator
        else
            log_error "Please install Verilator manually"
            return 1
        fi
        log_success "Verilator installation completed"
    fi
}

# Install SystemC
install_systemc() {
    if [ "$INSTALL_SYSTEMC" = false ]; then
        log_info "Skipping SystemC installation"
        return
    fi

    log_info "Installing SystemC $SYSTEMC_VERSION..."

    if [ -d "/usr/local/systemc-$SYSTEMC_VERSION" ]; then
        log_success "SystemC $SYSTEMC_VERSION already installed"
        return
    fi

    cd /tmp
    wget -q http://www.accellera.org/images/downloads/standards/systemc/systemc-$SYSTEMC_VERSION.tar.gz || {
        log_warning "Failed to download SystemC, trying alternative source..."
        wget -q https://github.com/accellera-official/systemc/archive/refs/tags/$SYSTEMC_VERSION.tar.gz -O systemc-$SYSTEMC_VERSION.tar.gz
    }

    tar -xzf systemc-$SYSTEMC_VERSION.tar.gz
    cd systemc-$SYSTEMC_VERSION

    mkdir -p objdir
    cd objdir

    export CXX=g++
    ../configure --prefix=/usr/local/systemc-$SYSTEMC_VERSION --enable-debug --enable-optimization
    make -j$(nproc) || make
    sudo make install

    # Set environment variables
    echo "export SYSTEMC_HOME=/usr/local/systemc-$SYSTEMC_VERSION" | sudo tee /etc/profile.d/systemc.sh
    echo "export LD_LIBRARY_PATH=\$LD_LIBRARY_PATH:/usr/local/systemc-$SYSTEMC_VERSION/lib-linux64" | sudo tee -a /etc/profile.d/systemc.sh

    cd "$PROJECT_ROOT"
    log_success "SystemC $SYSTEMC_VERSION installation completed"
}

# Install DRAMSim2
install_dramsim2() {
    if [ "$INSTALL_DRAMSIM2" = false ]; then
        log_info "Skipping DRAMSim2 installation"
        return
    fi

    log_info "Installing DRAMSim2 $DRAMSIM2_VERSION..."

    if [ -d "$PROJECT_ROOT/tools/dramsim2" ]; then
        log_success "DRAMSim2 already installed"
        return
    fi

    cd "$PROJECT_ROOT/tools"
    git clone git@github.com:umd-memsys/DRAMSim2.git dramsim2
    cd dramsim2

    make -j$(nproc)
    log_success "DRAMSim2 installation completed"
}

# Install Noculator (public fork: PrincetonUniversity/noculator is not available on GitHub)
install_noculator() {
    if [ "$INSTALL_NOCULATOR" = false ]; then
        log_info "Skipping Noculator installation"
        return
    fi

    log_info "Installing Noculator..."

    if [ -d "$PROJECT_ROOT/tools/noculator" ]; then
        log_success "Noculator already installed"
        return
    fi

    cd "$PROJECT_ROOT/tools"
    local noc_src="noculator"
    # HTTPS avoids SSH key requirements; CMU-SAFARI hosts the maintained public repo.
    if ! git clone https://github.com/cmu-safari/noculator.git "$noc_src"; then
        log_error "Noculator clone failed (see https://github.com/cmu-safari/noculator)"
        return 1
    fi
    if [ ! -d "$noc_src" ]; then
        log_error "Noculator directory missing after clone"
        return 1
    fi
    cd "$noc_src"

    log_success "Noculator installation completed"
}

# Install GEM5 simulator (optional)
install_gem5() {
    if [ "$INSTALL_GEM5" = false ]; then
        log_info "Skipping GEM5 installation"
        return
    fi

    log_info "Installing GEM5 simulator..."

    if [ -d "$PROJECT_ROOT/tools/gem5" ]; then
        log_success "GEM5 already installed"
        return
    fi

    cd "$PROJECT_ROOT/tools"
    git clone git@github.com:gem5/gem5.git
    cd gem5

    # Build GEM5
    scons build/X86/gem5.opt -j$(nproc) || log_warning "GEM5 build may have failed"

    log_success "GEM5 installation completed"
}

# Setup OpenPiton environment
setup_openpiton() {
    log_info "Setting up OpenPiton environment..."

    if [ ! -d "$OPENPITON_DIR" ]; then
        log_error "OpenPiton directory not found: $OPENPITON_DIR"
        exit 1
    fi

    cd "$OPENPITON_DIR"

    # Initialize submodules
    if [ -f ".gitmodules" ]; then
        log_info "Initializing OpenPiton submodules..."
        git submodule update --init --recursive
    fi

    # Create build directory
    mkdir -p build

    # Set environment variables for OpenPiton
    export OPENPITON_ROOT="$OPENPITON_DIR"
    export PITON_ROOT="$OPENPITON_DIR/piton"

    # Update PATH
    export PATH="$PATH:$OPENPITON_DIR/build/tools/bin"

    log_success "OpenPiton environment setup completed"
}

# Verify installation
verify_installation() {
    log_info "Verifying OpenPiton installation..."

    local errors=0

    # Check if OpenPiton directory exists
    if [ ! -d "$OPENPITON_DIR" ]; then
        log_error "OpenPiton directory not found"
        ((errors++))
    fi

    # Check if build directory exists
    if [ ! -d "$OPENPITON_DIR/build" ]; then
        log_error "OpenPiton build directory not found"
        ((errors++))
    fi

    # Check if required tools are available
    if ! command_exists verilator; then
        log_error "Verilator not found"
        ((errors++))
    fi

    # OpenPiton mktools (csh) and sims (Perl)
    if [[ ! -x /bin/csh ]]; then
        log_error "/bin/csh not found (install tcsh via this script: install_system_packages)"
        ((errors++))
    fi
    if ! perl -Mfields -e1 2>/dev/null; then
        log_error "Perl module 'fields' missing (RHEL: perl-fields) — re-run: $PROJECT_ROOT/scripts/install_openpiton.sh"
        ((errors++))
    fi
    if ! perl -MBit::Vector -e1 2>/dev/null; then
        log_error "Perl module Bit::Vector missing — re-run: $PROJECT_ROOT/scripts/install_openpiton.sh"
        ((errors++))
    fi

    if [ ! -d "/usr/local/systemc-$SYSTEMC_VERSION" ]; then
        log_warning "SystemC installation not found"
    fi

    if [ ! -d "$PROJECT_ROOT/tools/dramsim2" ]; then
        log_warning "DRAMSim2 installation not found"
    fi

    if [ $errors -eq 0 ]; then
        log_success "Installation verification completed successfully"
        return 0
    else
        log_error "Installation verification failed with $errors errors"
        return 1
    fi
}

# Print usage information
print_usage() {
    cat << EOF
Usage: $0 [OPTIONS]

This script installs all distro packages required for OpenPiton (including sims/mktools:
tcsh, perl-fields, perl-Bit-Vector / libbit-vector-perl, and Python Tk). Use it instead
of manual apt/yum commands.

OPTIONS:
    -h, --help              Show this help message
    --no-verilog           Skip Verilog installation
    --no-systemc           Skip SystemC installation
    --no-dramsim2          Skip DRAMSim2 installation
    --no-noculator         Skip Noculator installation
    --no-gem5              Skip GEM5 installation
    --no-riscv-toolchain   Skip RISC-V embedded GCC (Ariane bootrom needs riscv64-unknown-elf-gcc)
    --force-reinstall      Force reinstallation of all components
    --offline              Offline installation mode
    --check-only           Only check if installation is complete
    --debug               Enable debug mode
    --version              Show script version

EXAMPLES:
    $0                     Install all components
    $0 --no-gem5           Install without GEM5 simulator
    $0 --check-only        Verify existing installation
    $0 --force-reinstall   Reinstall all components

EOF
}

# Parse command line arguments
parse_args() {
    while [[ $# -gt 0 ]]; do
        case $1 in
            -h|--help)
                print_usage
                exit 0
                ;;
            --no-verilog)
                INSTALL_VERILOG=false
                shift
                ;;
            --no-systemc)
                INSTALL_SYSTEMC=false
                shift
                ;;
            --no-dramsim2)
                INSTALL_DRAMSIM2=false
                shift
                ;;
            --no-noculator)
                INSTALL_NOCULATOR=false
                shift
                ;;
            --no-gem5)
                INSTALL_GEM5=false
                shift
                ;;
            --no-riscv-toolchain)
                INSTALL_RISCV_TOOLCHAIN=false
                shift
                ;;
            --force-reinstall)
                FORCE_REINSTALL=true
                shift
                ;;
            --offline)
                OFFLINE_MODE=true
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
            --version)
                echo "OpenPiton Installation Script v1.0.0"
                exit 0
                ;;
            *)
                log_error "Unknown option: $1"
                print_usage
                exit 1
                ;;
        esac
    done
}

# Main installation function
main() {
    print_banner

    # Parse command line arguments
    parse_args "$@"

    # Check if only verification is needed
    if [ "$CHECK_ONLY" = true ]; then
        verify_installation
        return $?
    fi

    log_info "Starting OpenPiton installation with the following configuration:"
    log_info "  Verilog: $INSTALL_VERILOG"
    log_info "  SystemC: $INSTALL_SYSTEMC"
    log_info "  DRAMSim2: $INSTALL_DRAMSIM2"
    log_info "  Noculator: $INSTALL_NOCULATOR"
    log_info "  GEM5: $INSTALL_GEM5"
    log_info "  RISC-V embedded toolchain (Ariane): $INSTALL_RISCV_TOOLCHAIN → $RISCV_INSTALL_DIR"
    log_info "  Distro packages include OpenPiton sims deps: tcsh (/bin/csh), perl-fields, perl-Bit-Vector, Python Tk"
    log_info "  Force reinstall: $FORCE_REINSTALL"
    log_info "  Offline mode: $OFFLINE_MODE"
    log_info "  Debug mode: $DEBUG_MODE"

    # Check system requirements
    check_system_requirements

    # Install system packages
    install_system_packages

    install_riscv_embedded_toolchain

    # Install Verilog compiler
    install_verilog

    # Install SystemC
    install_systemc

    # Install DRAMSim2
    install_dramsim2

    # Install Noculator
    if ! install_noculator; then
        log_error "Noculator installation failed (use --no-noculator to skip)"
        exit 1
    fi

    # Install GEM5 (optional)
    install_gem5

    # Setup OpenPiton environment
    setup_openpiton

    # Verify installation
    if verify_installation; then
        log_success "OpenPiton installation completed successfully!"
        log "Installation log saved to: $INSTALL_LOG"
        log "You can now use OpenPiton to generate RTL designs"
    else
        log_error "Installation completed with errors. Please check the log file: $INSTALL_LOG"
        exit 1
    fi
}

# Run main function with all arguments
main "$@"
