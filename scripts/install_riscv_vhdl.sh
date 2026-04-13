#!/bin/bash

# RISC-V VHDL Environment Installation Script
# This script installs and configures all dependencies required for RISC-V VHDL SoC Generator

# Note: Removed set -e to allow better error handling

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
RISCV_VHDL_DIR="$PROJECT_ROOT/tools/riscv_vhdl"
LOG_DIR="$PROJECT_ROOT/logs/riscv_vhdl_install"
INSTALL_LOG="$LOG_DIR/install_$(date +%Y%m%d_%H%M%S).log"

# Installation options
INSTALL_GHDL=true
INSTALL_GTKWAVE=true
INSTALL_PYTHON_DEPS=true
INSTALL_VERILATOR=true
INSTALL_IVERILOG=true
INSTALL_YOSYS=false
FORCE_REINSTALL=false
OFFLINE_MODE=false
CHECK_ONLY=false
DEBUG_MODE=false

# Version specifications
GHDL_VERSION="4.0.0"
GTKWAVE_VERSION="3.3.104"
IVERILOG_VERSION="12.0"
YOSYS_VERSION="0.35"

# Create log directory
mkdir -p "$LOG_DIR"

# Logging functions
log() {
    local message="$1"
    local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${BLUE}[$timestamp]${NC} $message" | tee -a "$INSTALL_LOG"
}

log_info() {
    local message="$1"
    echo -e "${CYAN}[INFO]${NC} $message" | tee -a "$INSTALL_LOG"
}

log_success() {
    local message="$1"
    echo -e "${GREEN}[SUCCESS]${NC} $message" | tee -a "$INSTALL_LOG"
}

log_warning() {
    local message="$1"
    echo -e "${YELLOW}[WARNING]${NC} $message" | tee -a "$INSTALL_LOG"
}

log_error() {
    local message="$1"
    echo -e "${RED}[ERROR]${NC} $message" | tee -a "$INSTALL_LOG"
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
    echo "  RISC-V VHDL Environment Installation Script"
    echo "  Portable RISC-V SoC Implementation"
    echo "=================================================================="
    echo -e "${NC}"
    log "Starting RISC-V VHDL installation"
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

    # Check available disk space (need at least 2GB)
    local available_space
    available_space=$(df "$PROJECT_ROOT" | awk 'NR==2 {print $4}')
    if [ "$available_space" -gt 2097152 ]; then  # 2GB in KB
        log_success "Sufficient disk space available"
    else
        log_warning "Low disk space - RISC-V VHDL may require up to 2GB"
    fi

    # Check RAM (recommend at least 2GB)
    local total_ram
    total_ram=$(grep MemTotal /proc/meminfo | awk '{print $2}')
    if [ "$total_ram" -gt 2097152 ]; then  # 2GB in KB
        log_success "Sufficient RAM available"
    else
        log_warning "Limited RAM - compilation may be slow"
    fi
}

# Install system packages
install_system_packages() {
    log_info "Installing system packages..."

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
            verilator \
            iverilog \
            yosys || log_warning "Some packages may have failed to install"
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
            pangocairo-devel \
            verilator \
            iverilog \
            yosys || log_warning "Some packages may have failed to install"
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
            verilator \
            iverilog \
            yosys || log_warning "Some packages may have failed to install"
    else
        log_error "Unsupported package manager. Please install required packages manually."
        exit 1
    fi

    log_success "System packages installation completed"
}

# Install GHDL (VHDL simulator)
install_ghdl() {
    if [ "$INSTALL_GHDL" = false ]; then
        log_info "Skipping GHDL installation"
        return
    fi

    log_info "Installing GHDL $GHDL_VERSION..."

    if command_exists ghdl; then
        local ghdl_version
        ghdl_version=$(ghdl --version | head -1 | cut -d' ' -f3)
        log_success "GHDL $ghdl_version already installed"
    else
        log_info "Installing GHDL from source..."

        cd /tmp
        wget -q https://github.com/ghdl/ghdl/archive/refs/tags/v$GHDL_VERSION.tar.gz -O ghdl-$GHDL_VERSION.tar.gz

        tar -xzf ghdl-$GHDL_VERSION.tar.gz
        cd ghdl-$GHDL_VERSION

        mkdir -p build
        cd build

        # Configure and build GHDL
        ../configure --prefix=/usr/local/ghdl-$GHDL_VERSION --enable-synth
        make -j$(nproc)
        sudo make install

        # Create symbolic link
        sudo ln -sf /usr/local/ghdl-$GHDL_VERSION/bin/ghdl /usr/local/bin/ghdl

        cd "$PROJECT_ROOT"
        log_success "GHDL $GHDL_VERSION installation completed"
    fi
}

# Install GTKWave (waveform viewer)
install_gtkwave() {
    if [ "$INSTALL_GTKWAVE" = false ]; then
        log_info "Skipping GTKWave installation"
        return
    fi

    log_info "Installing GTKWave $GTKWAVE_VERSION..."

    if command_exists gtkwave; then
        local gtkwave_version
        gtkwave_version=$(gtkwave --version | cut -d' ' -f2)
        log_success "GTKWave $gtkwave_version already installed"
    else
        if command_exists apt-get; then
            sudo apt-get install -y gtkwave
        elif command_exists yum; then
            sudo yum install -y gtkwave
        elif command_exists pacman; then
            sudo pacman -S gtkwave
        else
            log_warning "Please install GTKWave manually"
            return 1
        fi
        log_success "GTKWave installation completed"
    fi
}

# Install Python dependencies
install_python_deps() {
    if [ "$INSTALL_PYTHON_DEPS" = false ]; then
        log_info "Skipping Python dependencies installation"
        return
    fi

    log_info "Installing Python dependencies..."

    # Upgrade pip
    pip3 install --upgrade pip

    # Install required Python packages
    pip3 install \
        setuptools \
        wheel \
        pyvhdl \
        vunit-hdl \
        cocotb \
        pytest \
        pytest-cov \
        mypy \
        black \
        flake8 || log_warning "Some Python packages may have failed to install"

    log_success "Python dependencies installation completed"
}

# Install Verilator
install_verilator() {
    if [ "$INSTALL_VERILATOR" = false ]; then
        log_info "Skipping Verilator installation"
        return
    fi

    log_info "Installing Verilator..."

    if command_exists verilator; then
        local verilator_version
        verilator_version=$(verilator --version | cut -d' ' -f2)
        log_success "Verilator $verilator_version already installed"
    else
        if command_exists apt-get; then
            sudo apt-get install -y verilator
        elif command_exists yum; then
            sudo yum install -y verilator
        elif command_exists pacman; then
            sudo pacman -S verilator
        else
            log_warning "Please install Verilator manually"
            return 1
        fi
        log_success "Verilator installation completed"
    fi
}

# Install Icarus Verilog
install_iverilog() {
    if [ "$INSTALL_IVERILOG" = false ]; then
        log_info "Skipping Icarus Verilog installation"
        return
    fi

    log_info "Installing Icarus Verilog $IVERILOG_VERSION..."

    if command_exists iverilog; then
        local iverilog_version
        iverilog_version=$(iverilog -V | head -1 | cut -d' ' -f2)
        log_success "Icarus Verilog $iverilog_version already installed"
    else
        if command_exists apt-get; then
            sudo apt-get install -y iverilog
        elif command_exists yum; then
            sudo yum install -y iverilog
        elif command_exists pacman; then
            sudo pacman -S iverilog
        else
            log_warning "Please install Icarus Verilog manually"
            return 1
        fi
        log_success "Icarus Verilog installation completed"
    fi
}

# Install Yosys (optional)
install_yosys() {
    if [ "$INSTALL_YOSYS" = false ]; then
        log_info "Skipping Yosys installation"
        return
    fi

    log_info "Installing Yosys $YOSYS_VERSION..."

    if command_exists yosys; then
        local yosys_version
        yosys_version=$(yosys -V | cut -d' ' -f2)
        log_success "Yosys $yosys_version already installed"
    else
        if command_exists apt-get; then
            sudo apt-get install -y yosys
        elif command_exists yum; then
            sudo yum install -y yosys
        elif command_exists pacman; then
            sudo pacman -S yosys
        else
            log_warning "Please install Yosys manually"
            return 1
        fi
        log_success "Yosys installation completed"
    fi
}

# Setup RISC-V VHDL environment
setup_riscv_vhdl() {
    log_info "Setting up RISC-V VHDL environment..."

    if [ ! -d "$RISCV_VHDL_DIR" ]; then
        log_error "RISC-V VHDL directory not found: $RISCV_VHDL_DIR"
        exit 1
    fi

    cd "$RISCV_VHDL_DIR"

    # Initialize submodules
    if [ -f ".gitmodules" ]; then
        log_info "Initializing RISC-V VHDL submodules..."
        git submodule update --init --recursive
    fi

    # Create build directory
    mkdir -p build

    # Create simulation directory
    mkdir -p sim

    # Set environment variables for RISC-V VHDL
    export RISCV_VHDL_ROOT="$RISCV_VHDL_DIR"

    log_success "RISC-V VHDL environment setup completed"
}

# Verify installation
verify_installation() {
    log_info "Verifying RISC-V VHDL installation..."

    local errors=0

    # Check if RISC-V VHDL directory exists
    if [ ! -d "$RISCV_VHDL_DIR" ]; then
        log_error "RISC-V VHDL directory not found"
        ((errors++))
    fi

    # Check if build directory exists
    if [ ! -d "$RISCV_VHDL_DIR/build" ]; then
        log_error "RISC-V VHDL build directory not found"
        ((errors++))
    fi

    # Check if required tools are available
    if ! command_exists ghdl; then
        log_error "GHDL not found"
        ((errors++))
    fi

    if ! command_exists gtkwave; then
        log_warning "GTKWave not found"
    fi

    if ! command_exists verilator; then
        log_warning "Verilator not found"
    fi

    if ! command_exists iverilog; then
        log_warning "Icarus Verilog not found"
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

OPTIONS:
    -h, --help              Show this help message
    --no-ghdl              Skip GHDL installation
    --no-gtkwave           Skip GTKWave installation
    --no-python            Skip Python dependencies installation
    --no-verilator         Skip Verilator installation
    --no-iverilog          Skip Icarus Verilog installation
    --no-yosys             Skip Yosys installation
    --force-reinstall      Force reinstallation of all components
    --offline              Offline installation mode
    --check-only           Only check if installation is complete
    --debug               Enable debug mode
    --version              Show script version

EXAMPLES:
    $0                     Install all components
    $0 --no-yosys          Install without Yosys
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
            --no-ghdl)
                INSTALL_GHDL=false
                shift
                ;;
            --no-gtkwave)
                INSTALL_GTKWAVE=false
                shift
                ;;
            --no-python)
                INSTALL_PYTHON_DEPS=false
                shift
                ;;
            --no-verilator)
                INSTALL_VERILATOR=false
                shift
                ;;
            --no-iverilog)
                INSTALL_IVERILOG=false
                shift
                ;;
            --no-yosys)
                INSTALL_YOSYS=false
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
                echo "RISC-V VHDL Installation Script v1.0.0"
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

    log_info "Starting RISC-V VHDL installation with the following configuration:"
    log_info "  GHDL: $INSTALL_GHDL"
    log_info "  GTKWave: $INSTALL_GTKWAVE"
    log_info "  Python deps: $INSTALL_PYTHON_DEPS"
    log_info "  Verilator: $INSTALL_VERILATOR"
    log_info "  Icarus Verilog: $INSTALL_IVERILOG"
    log_info "  Yosys: $INSTALL_YOSYS"
    log_info "  Force reinstall: $FORCE_REINSTALL"
    log_info "  Offline mode: $OFFLINE_MODE"
    log_info "  Debug mode: $DEBUG_MODE"

    # Check system requirements
    check_system_requirements

    # Install system packages
    install_system_packages

    # Install GHDL
    install_ghdl

    # Install GTKWave
    install_gtkwave

    # Install Python dependencies
    install_python_deps

    # Install Verilator
    install_verilator

    # Install Icarus Verilog
    install_iverilog

    # Install Yosys (optional)
    install_yosys

    # Setup RISC-V VHDL environment
    setup_riscv_vhdl

    # Verify installation
    if verify_installation; then
        log_success "RISC-V VHDL installation completed successfully!"
        log "Installation log saved to: $INSTALL_LOG"
        log "You can now use RISC-V VHDL to generate RTL designs"
    else
        log_error "Installation completed with errors. Please check the log file: $INSTALL_LOG"
        exit 1
    fi
}

# Run main function with all arguments
main "$@"
