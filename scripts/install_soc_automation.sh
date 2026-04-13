#!/bin/bash

# SoC Automation Environment Installation Script
# This script installs and configures all dependencies required for SoC Automation Generator

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
SOC_AUTOMATION_DIR="$PROJECT_ROOT/tools/SoC_Automation"
LOG_DIR="$PROJECT_ROOT/logs/soc_automation_install"
INSTALL_LOG="$LOG_DIR/install_$(date +%Y%m%d_%H%M%S).log"

# Installation options
INSTALL_PYTHON_DEPS=true
INSTALL_VERILOG=true
INSTALL_SYSTEMC=false
INSTALL_TCL=true
INSTALL_JSON_LIBS=true
INSTALL_IP_XACT=false
FORCE_REINSTALL=false
OFFLINE_MODE=false
CHECK_ONLY=false
DEBUG_MODE=false

# Version specifications
PYTHON_VERSION="3.8+"
VERILOG_VERSION="systemverilog"
SYSTEMC_VERSION="2.3.3"
TCL_VERSION="8.6"
RAPIDJSON_VERSION="1.1.0"
NLOHMANN_JSON_VERSION="3.11.2"

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
    echo "  SoC Automation Environment Installation Script"
    echo "  JSON-Driven SoC Generator"
    echo "=================================================================="
    echo -e "${NC}"
    log "Starting SoC Automation installation"
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

    # Check available disk space (need at least 1GB)
    local available_space
    available_space=$(df "$PROJECT_ROOT" | awk 'NR==2 {print $4}')
    if [ "$available_space" -gt 1048576 ]; then  # 1GB in KB
        log_success "Sufficient disk space available"
    else
        log_warning "Low disk space - SoC Automation may require up to 1GB"
    fi

    # Check RAM (recommend at least 2GB)
    local total_ram
    total_ram=$(grep MemTotal /proc/meminfo | awk '{print $2}')
    if [ "$total_ram" -gt 2097152 ]; then  # 2GB in KB
        log_success "Sufficient RAM available"
    else
        log_warning "Limited RAM - compilation may be slow"
    fi

    # Check Python version
    if command_exists python3; then
        local python_version
        python_version=$(python3 --version | cut -d' ' -f2 | cut -d'.' -f1,2)
        if [[ "$(printf '%s\n' "$PYTHON_VERSION" "$python_version" | sort -V | head -n1)" == "$PYTHON_VERSION" ]]; then
            log_success "Python $python_version meets requirements"
        else
            log_warning "Python $python_version may not be fully compatible (need $PYTHON_VERSION+)"
        fi
    else
        log_error "Python 3 not found"
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
            python3-venv \
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
            cmake \
            ninja-build \
            libtcl8.6 \
            tcl8.6-dev || log_warning "Some packages may have failed to install"
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
            cmake \
            ninja-build \
            tcl-devel \
            tcl || log_warning "Some packages may have failed to install"
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
            cmake \
            ninja \
            tcl || log_warning "Some packages may have failed to install"
    else
        log_error "Unsupported package manager. Please install required packages manually."
        exit 1
    fi

    log_success "System packages installation completed"
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

    # Install required Python packages for SoC Automation
    pip3 install \
        setuptools \
        wheel \
        pyyaml \
        jinja2 \
        json5 \
        click \
        rich \
        pydantic \
        typing-extensions \
        pytest \
        pytest-cov \
        mypy \
        black \
        flake8 \
        isort \
        pre-commit \
        requests \
        lxml \
        python-dateutil \
        jsonschema || log_warning "Some Python packages may have failed to install"

    log_success "Python dependencies installation completed"
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

# Install SystemC (optional)
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

# Install Tcl
install_tcl() {
    if [ "$INSTALL_TCL" = false ]; then
        log_info "Skipping Tcl installation"
        return
    fi

    log_info "Installing Tcl $TCL_VERSION..."

    if command_exists tclsh; then
        local tcl_version
        tcl_version=$(echo 'puts $tcl_version' | tclsh)
        log_success "Tcl $tcl_version already installed"
    else
        if command_exists apt-get; then
            sudo apt-get install -y tcl8.6 tcl8.6-dev
        elif command_exists yum; then
            sudo yum install -y tcl tcl-devel
        elif command_exists pacman; then
            sudo pacman -S tcl
        else
            log_warning "Please install Tcl manually"
            return 1
        fi
        log_success "Tcl installation completed"
    fi
}

# Install JSON libraries
install_json_libs() {
    if [ "$INSTALL_JSON_LIBS" = false ]; then
        log_info "Skipping JSON libraries installation"
        return
    fi

    log_info "Installing JSON libraries..."

    # Install RapidJSON
    if [ ! -d "/usr/local/include/rapidjson" ]; then
        cd /tmp
        wget -q https://github.com/Tencent/rapidjson/archive/refs/tags/v$RAPIDJSON_VERSION.tar.gz -O rapidjson-$RAPIDJSON_VERSION.tar.gz
        tar -xzf rapidjson-$RAPIDJSON_VERSION.tar.gz
        cd rapidjson-$RAPIDJSON_VERSION
        mkdir -p build
        cd build
        cmake .. -DCMAKE_INSTALL_PREFIX=/usr/local
        sudo make install
        cd "$PROJECT_ROOT"
        log_success "RapidJSON installation completed"
    else
        log_success "RapidJSON already installed"
    fi

    # Install nlohmann/json (header-only)
    if [ ! -d "/usr/local/include/nlohmann" ]; then
        cd /tmp
        wget -q https://github.com/nlohmann/json/releases/download/v$NLOHMANN_JSON_VERSION/json.hpp -O json.hpp
        sudo mkdir -p /usr/local/include/nlohmann
        sudo mv json.hpp /usr/local/include/nlohmann/
        cd "$PROJECT_ROOT"
        log_success "nlohmann/json installation completed"
    else
        log_success "nlohmann/json already installed"
    fi
}

# Install IP-XACT (optional)
install_ip_xact() {
    if [ "$INSTALL_IP_XACT" = false ]; then
        log_info "Skipping IP-XACT installation"
        return
    fi

    log_info "Installing IP-XACT support..."

    # Install Spirit-PoC IP-XACT utilities
    if [ ! -d "$PROJECT_ROOT/tools/spirit-poc" ]; then
        cd "$PROJECT_ROOT/tools"
        git clone git@github.com:VLSI-EDA/spirit-poc.git
        cd spirit-poc
        pip3 install -r requirements.txt || log_warning "Failed to install some IP-XACT dependencies"
        cd "$PROJECT_ROOT"
        log_success "IP-XACT utilities installation completed"
    else
        log_success "IP-XACT utilities already installed"
    fi
}

# Setup SoC Automation environment
setup_soc_automation() {
    log_info "Setting up SoC Automation environment..."

    if [ ! -d "$SOC_AUTOMATION_DIR" ]; then
        log_error "SoC Automation directory not found: $SOC_AUTOMATION_DIR"
        exit 1
    fi

    cd "$SOC_AUTOMATION_DIR"

    # Initialize submodules
    if [ -f ".gitmodules" ]; then
        log_info "Initializing SoC Automation submodules..."
        git submodule update --init --recursive
    fi

    # Create build directory
    mkdir -p build

    # Create output directory for generated RTL
    mkdir -p output

    # Create templates directory if it doesn't exist
    mkdir -p templates

    # Create configuration directory
    mkdir -p configs

    # Set environment variables for SoC Automation
    export SOC_AUTOMATION_ROOT="$SOC_AUTOMATION_DIR"

    log_success "SoC Automation environment setup completed"
}

# Verify installation
verify_installation() {
    log_info "Verifying SoC Automation installation..."

    local errors=0

    # Check if SoC Automation directory exists
    if [ ! -d "$SOC_AUTOMATION_DIR" ]; then
        log_error "SoC Automation directory not found"
        ((errors++))
    fi

    # Check if build directory exists
    if [ ! -d "$SOC_AUTOMATION_DIR/build" ]; then
        log_error "SoC Automation build directory not found"
        ((errors++))
    fi

    # Check if Python is available
    if ! command_exists python3; then
        log_error "Python 3 not found"
        ((errors++))
    fi

    # Check if required Python packages are installed
    if ! python3 -c "import yaml, jinja2, json5" 2>/dev/null; then
        log_warning "Required Python packages not available"
    fi

    # Check if Verilog compiler is available
    if ! command_exists verilator; then
        log_warning "Verilator not found"
    fi

    # Check if Tcl is available
    if ! command_exists tclsh; then
        log_warning "Tcl not found"
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
    --no-python            Skip Python dependencies installation
    --no-verilog           Skip Verilog installation
    --no-systemc           Skip SystemC installation
    --no-tcl               Skip Tcl installation
    --no-json              Skip JSON libraries installation
    --no-ipxact            Skip IP-XACT installation
    --force-reinstall      Force reinstallation of all components
    --offline              Offline installation mode
    --check-only           Only check if installation is complete
    --debug               Enable debug mode
    --version              Show script version

EXAMPLES:
    $0                     Install all components
    $0 --no-systemc        Install without SystemC
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
            --no-python)
                INSTALL_PYTHON_DEPS=false
                shift
                ;;
            --no-verilog)
                INSTALL_VERILOG=false
                shift
                ;;
            --no-systemc)
                INSTALL_SYSTEMC=false
                shift
                ;;
            --no-tcl)
                INSTALL_TCL=false
                shift
                ;;
            --no-json)
                INSTALL_JSON_LIBS=false
                shift
                ;;
            --no-ipxact)
                INSTALL_IP_XACT=false
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
                echo "SoC Automation Installation Script v1.0.0"
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

    log_info "Starting SoC Automation installation with the following configuration:"
    log_info "  Python deps: $INSTALL_PYTHON_DEPS"
    log_info "  Verilog: $INSTALL_VERILOG"
    log_info "  SystemC: $INSTALL_SYSTEMC"
    log_info "  Tcl: $INSTALL_TCL"
    log_info "  JSON libs: $INSTALL_JSON_LIBS"
    log_info "  IP-XACT: $INSTALL_IP_XACT"
    log_info "  Force reinstall: $FORCE_REINSTALL"
    log_info "  Offline mode: $OFFLINE_MODE"
    log_info "  Debug mode: $DEBUG_MODE"

    # Check system requirements
    check_system_requirements

    # Install system packages
    install_system_packages

    # Install Python dependencies
    install_python_deps

    # Install Verilog compiler
    install_verilog

    # Install SystemC (optional)
    install_systemc

    # Install Tcl
    install_tcl

    # Install JSON libraries
    install_json_libs

    # Install IP-XACT (optional)
    install_ip_xact

    # Setup SoC Automation environment
    setup_soc_automation

    # Verify installation
    if verify_installation; then
        log_success "SoC Automation installation completed successfully!"
        log "Installation log saved to: $INSTALL_LOG"
        log "You can now use SoC Automation to generate RTL designs"
    else
        log_error "Installation completed with errors. Please check the log file: $INSTALL_LOG"
        exit 1
    fi
}

# Run main function with all arguments
main "$@"
