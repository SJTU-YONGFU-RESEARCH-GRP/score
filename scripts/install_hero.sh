#!/bin/bash

# HERO Installation and Environment Setup Script
# This script detects and configures the HERO (Heterogeneous Research Platform) environment
# including all necessary dependencies and tools for RTL compilation and verification

set -e  # Exit on any error

# Global variables
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOLS_DIR="$PROJECT_ROOT/tools"
HERO_DIR="$TOOLS_DIR/hero"
LOG_DIR="$PROJECT_ROOT/logs"
INSTALL_LOG="$LOG_DIR/install_hero.log"

# Installation options
INSTALL_BENDER=true
INSTALL_VERILATOR=true
INSTALL_QUESTASIM=false
INSTALL_VIVADO=false
CHECK_ONLY=false
CLEAN_INSTALL=false
SKIP_DEPS=false
FORCE_INSTALL=false
AUTO_INSTALL=false
PARALLEL_JOBS=$(nproc)

# Create directories
mkdir -p "$LOG_DIR"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_hero
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

# Detect OS and package manager
detect_os() {
    if [[ -f /etc/os-release ]]; then
        . /etc/os-release
        OS=$NAME
        VER=$VERSION_ID
    elif type lsb_release >/dev/null 2>&1; then
        OS=$(lsb_release -si)
        VER=$(lsb_release -sr)
    elif [[ -f /etc/redhat-release ]]; then
        OS="Red Hat Enterprise Linux"
    elif [[ "$OSTYPE" == "darwin"* ]]; then
        OS="macOS"
    else
        OS="Unknown"
    fi
    
    log "Detected OS: $OS $VER"
}

# Check HERO submodule availability
check_hero_availability() {
    log "Checking HERO submodule availability..."
    
    if [[ ! -d "$HERO_DIR" ]]; then
        error "HERO directory not found: $HERO_DIR"
        error "Please ensure HERO submodule is initialized:"
        error "  git submodule update --init tools/hero && bash scripts/hero_submodule_remotes.sh"
        return 1
    fi
    
    if [[ ! -f "$HERO_DIR/Makefile" ]]; then
        error "HERO Makefile not found. HERO submodule may not be properly initialized."
        return 1
    fi
    
    if [[ ! -f "$HERO_DIR/hardware/Bender.yml" ]]; then
        error "HERO Bender configuration not found. Hardware submodules may not be initialized."
        return 1
    fi
    
    success "HERO submodule structure verified"
    
    # Check HERO version
    local hero_readme="$HERO_DIR/README.md"
    if [[ -f "$hero_readme" ]]; then
        local hero_description=$(head -5 "$hero_readme" | grep -i "heterogeneous" || echo "HERO Platform")
        info "HERO Description: $hero_description"
    fi
    
    return 0
}

# Check prerequisites
check_prerequisites() {
    log "Checking prerequisites..."
    local prereq_failed=0
    
    # Check basic tools
    for tool in git make curl wget; do
        if ! command -v "$tool" >/dev/null 2>&1; then
            error "$tool command not found"
            ((prereq_failed++))
        fi
    done
    
    # Check HERO availability
    check_hero_availability || ((prereq_failed++))
    
    return $prereq_failed
}

# Enhanced environment detection function
detect_environment_status() {
    log "=== Detecting Current Environment Status ==="
    
    # Initialize status tracking
    local rust_installed=false
    local bender_installed=false
    local verilator_installed=false
    local hero_env_setup=false
    local hero_hardware_init=false
    local system_deps_ok=true
    
    # Check Rust installation
    if command -v rustc >/dev/null 2>&1; then
        local rust_version=$(rustc --version)
        success "✅ Rust: $rust_version"
        rust_installed=true
    else
        warning "❌ Rust: Not installed"
    fi
    
    # Check Bender installation
    if command -v bender >/dev/null 2>&1; then
        local bender_version=$(bender --version 2>/dev/null || echo "unknown")
        success "✅ Bender: $bender_version"
        bender_installed=true
    else
        warning "❌ Bender: Not installed"
    fi
    
    # Check Verilator installation
    if command -v verilator >/dev/null 2>&1; then
        local verilator_version=$(verilator --version | head -1)
        success "✅ Verilator: $verilator_version"
        verilator_installed=true
    else
        warning "❌ Verilator: Not installed"
    fi
    
    # Check HERO environment setup
    if [[ -f "$PROJECT_ROOT/setup_hero_env.sh" ]]; then
        success "✅ HERO environment script: Available"
        hero_env_setup=true
    else
        warning "❌ HERO environment script: Missing"
    fi
    
    # Check HERO hardware initialization
    if [[ -f "$HERO_DIR/hardware/bender" ]]; then
        success "✅ HERO hardware tools: Initialized"
        hero_hardware_init=true
    else
        warning "❌ HERO hardware tools: Not initialized"
    fi
    
    # Check system dependencies
    local missing_deps=()
    case "$OS" in
        *"Ubuntu"*|*"Debian"*)
            local deps=("build-essential" "cmake" "python3" "tcl")
            for dep in "${deps[@]}"; do
                if ! dpkg -l | grep -q "^ii  $dep "; then
                    missing_deps+=("$dep")
                    system_deps_ok=false
                fi
            done
            ;;
        *)
            info "Skipping detailed system dependency check for $OS"
            ;;
    esac
    
    if [[ $system_deps_ok == true ]]; then
        success "✅ System dependencies: Available"
    else
        warning "❌ System dependencies: Missing ${missing_deps[*]}"
    fi
    
    # Set global status variables
    if [[ $rust_installed == true ]]; then
        export RUST_NEEDS_INSTALL=false
    else
        export RUST_NEEDS_INSTALL=true
    fi
    
    if [[ $bender_installed == true ]]; then
        export BENDER_NEEDS_INSTALL=false
    else
        export BENDER_NEEDS_INSTALL=true
    fi
    
    if [[ $verilator_installed == true ]]; then
        export VERILATOR_NEEDS_INSTALL=false
    else
        export VERILATOR_NEEDS_INSTALL=true
    fi
    
    if [[ $hero_env_setup == true ]]; then
        export HERO_ENV_NEEDS_SETUP=false
    else
        export HERO_ENV_NEEDS_SETUP=true
    fi
    
    if [[ $hero_hardware_init == true ]]; then
        export HERO_HW_NEEDS_INIT=false
    else
        export HERO_HW_NEEDS_INIT=true
    fi
    
    if [[ $system_deps_ok == true ]]; then
        export SYSTEM_DEPS_NEEDED=false
    else
        export SYSTEM_DEPS_NEEDED=true
    fi
    
    log ""
    log "=== Installation Plan ==="
    if [[ $SYSTEM_DEPS_NEEDED == true ]]; then
        info "📦 Will install: System dependencies"
    else
        info "⏭️  Will skip: System dependencies (already installed)"
    fi
    
    if [[ $RUST_NEEDS_INSTALL == true ]]; then
        info "📦 Will install: Rust"
    else
        info "⏭️  Will skip: Rust (already installed)"
    fi
    
    if [[ $BENDER_NEEDS_INSTALL == true ]]; then
        info "📦 Will install: Bender"
    else
        info "⏭️  Will skip: Bender (already installed)"
    fi
    
    if [[ $VERILATOR_NEEDS_INSTALL == true && $INSTALL_VERILATOR == true ]]; then
        info "📦 Will install: Verilator"
    else
        info "⏭️  Will skip: Verilator (already installed or disabled)"
    fi
    
    if [[ $HERO_ENV_NEEDS_SETUP == true ]]; then
        info "📦 Will setup: HERO environment"
    else
        info "⏭️  Will skip: HERO environment setup (already done)"
    fi
    
    if [[ $HERO_HW_NEEDS_INIT == true ]]; then
        info "📦 Will initialize: HERO hardware dependencies"
    else
        info "⏭️  Will skip: HERO hardware initialization (already done)"
    fi
    
    # Calculate what actually needs to be done
    local needs_work=false
    if [[ $SYSTEM_DEPS_NEEDED == true && $SKIP_DEPS != true ]] || \
       [[ $RUST_NEEDS_INSTALL == true ]] || \
       [[ $BENDER_NEEDS_INSTALL == true && $INSTALL_BENDER == true ]] || \
       [[ $VERILATOR_NEEDS_INSTALL == true && $INSTALL_VERILATOR == true ]] || \
       [[ $HERO_ENV_NEEDS_SETUP == true ]] || \
       [[ $HERO_HW_NEEDS_INIT == true ]]; then
        needs_work=true
    fi
    
    if [[ $needs_work == false ]]; then
        success "🎉 All components are already installed and configured!"
        info "You can run: source $PROJECT_ROOT/setup_hero_env.sh"
        info "Then use: ./scripts/generate_hero.sh"
        return 1  # Signal that no installation is needed
    fi
    
    return 0  # Signal that installation is needed
}

# Install Rust (required for Bender) - only if needed
install_rust() {
    if [[ $RUST_NEEDS_INSTALL != true ]]; then
        info "Skipping Rust installation (already available)"
        return 0
    fi
    
    log "=== Installing Rust (required for Bender) ==="
    
    info "Installing Rust via rustup..."
    curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y
    
    # Source the Rust environment
    source "$HOME/.cargo/env" 2>/dev/null || true
    
    if command -v rustc >/dev/null 2>&1; then
        local rust_version=$(rustc --version)
        success "Rust installed: $rust_version"
    else
        error "Rust installation failed"
        return 1
    fi
}

# Install Bender (RTL dependency manager) - only if needed
install_bender() {
    if [[ $BENDER_NEEDS_INSTALL != true ]]; then
        info "Skipping Bender installation (already available)"
        return 0
    fi
    
    log "=== Installing Bender RTL Dependency Manager ==="
    
    # Install via cargo
    if command -v cargo >/dev/null 2>&1; then
        info "Installing Bender via cargo..."
        cargo install bender
    else
        # Download binary release
        info "Downloading Bender binary..."
        local bender_url="https://github.com/fabianschuiki/bender/releases/latest/download/bender-linux64"
        if [[ "$OS" == "macOS" ]]; then
            bender_url="https://github.com/fabianschuiki/bender/releases/latest/download/bender-macos"
        fi
        
        mkdir -p "$HOME/.local/bin"
        wget -O "$HOME/.local/bin/bender" "$bender_url"
        chmod +x "$HOME/.local/bin/bender"
        
        # Add to PATH if not already there
        if ! echo "$PATH" | grep -q "$HOME/.local/bin"; then
            export PATH="$HOME/.local/bin:$PATH"
            echo 'export PATH="$HOME/.local/bin:$PATH"' >> "$HOME/.bashrc"
        fi
    fi
    
    if command -v bender >/dev/null 2>&1; then
        local bender_version=$(bender --version 2>/dev/null || echo "installed")
        success "Bender installed: $bender_version"
    else
        error "Bender installation failed"
        return 1
    fi
}

# Install Verilator (open source SystemVerilog simulator) - only if needed
install_verilator() {
    if [[ $VERILATOR_NEEDS_INSTALL != true ]]; then
        info "Skipping Verilator installation (already available)"
        return 0
    fi
    
    log "=== Installing Verilator ==="
    
    case "$OS" in
        *"Ubuntu"*|*"Debian"*)
            # Try package manager first
            if sudo apt-get install -y verilator; then
                success "Verilator installed via package manager"
                return 0
            fi
            ;;
        *"macOS"*)
            if brew install verilator; then
                success "Verilator installed via Homebrew"
                return 0
            fi
            ;;
    esac
    
    # Build from source if package manager failed
    warning "Building Verilator from source..."
    local verilator_dir="$TOOLS_DIR/verilator"
    
    if [[ ! -d "$verilator_dir" ]]; then
        git clone git@github.com:verilator/verilator "$verilator_dir"
    fi
    
    cd "$verilator_dir"
    autoconf
    ./configure --prefix="$TOOLS_DIR/verilator-install"
    make -j$PARALLEL_JOBS
    make install
    
    # Add to PATH
    export PATH="$TOOLS_DIR/verilator-install/bin:$PATH"
    
    if command -v verilator >/dev/null 2>&1; then
        local verilator_version=$(verilator --version | head -1)
        success "Verilator built and installed: $verilator_version"
    else
        error "Verilator installation failed"
        return 1
    fi
}

# Check and install system dependencies - only if needed
install_system_dependencies() {
    if [[ $SYSTEM_DEPS_NEEDED != true ]]; then
        info "Skipping system dependencies installation (already available)"
        return 0
    fi
    
    log "=== Installing Missing System Dependencies ==="
    
    case "$OS" in
        *"Ubuntu"*|*"Debian"*)
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
                unzip \
                python3 \
                python3-pip \
                tcl \
                expect
            
            # RTL simulation tools (if available)
            if apt-cache search --names-only '^iverilog$' | grep -q iverilog; then
                sudo apt-get install -y iverilog
                success "Icarus Verilog installed"
            fi
            
            if apt-cache search --names-only '^gtkwave$' | grep -q gtkwave; then
                sudo apt-get install -y gtkwave
                success "GTKWave installed"
            fi
            ;;
            
        *"CentOS"*|*"Red Hat"*|*"Fedora"*|*"AlmaLinux"*|*"Rocky Linux"*|*"Oracle Linux"*)
            info "Installing dependencies for Red Hat family ($OS)..."
            
            if command -v dnf >/dev/null 2>&1; then
                PKG_MGR="dnf"
            else
                PKG_MGR="yum"
            fi
            
            # redhat-lsb-core provides lsb_release; HERO's Makefile uses fabianschuiki/bender init which requires it.
            sudo $PKG_MGR install -y \
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
                redhat-lsb-core
            ;;
            
        *"Arch"*)
            info "Installing dependencies for Arch Linux..."
            sudo pacman -S --noconfirm \
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
                expect
            ;;
            
        *"macOS"*)
            info "Installing dependencies for macOS..."
            if ! command -v brew >/dev/null 2>&1; then
                error "Homebrew not found. Please install Homebrew first."
                return 1
            fi
            
            brew install \
                git \
                cmake \
                pkg-config \
                python3 \
                tcl-tk
            ;;
            
        *)
            warning "Unknown OS. You may need to install dependencies manually."
            info "Required dependencies: gcc, git, cmake, python3, tcl"
            ;;
    esac
    
    success "System dependencies installed"
}

# Setup HERO environment - only if needed
setup_hero_environment() {
    if [[ $HERO_ENV_NEEDS_SETUP != true ]]; then
        info "Skipping HERO environment setup (already configured)"
        return 0
    fi
    
    log "=== Setting up HERO Environment ==="
    
    # Set required HERO environment variables
    export HERO_INSTALL="$TOOLS_DIR/hero-install"
    mkdir -p "$HERO_INSTALL"
    
    info "HERO_INSTALL set to: $HERO_INSTALL"
    
    # Initialize HERO nested submodules (SCORE: HerculesCompiler skipped by default; buildroot via GitHub mirror)
    cd "$HERO_DIR"
    log "Initializing HERO submodules..."
    bash "$SCRIPT_DIR/hero_submodule_remotes.sh"
    
    # Check HERO environment
    if [[ -f "$HERO_DIR/env/check_environment.sh" ]]; then
        info "Running HERO environment check..."
        if bash "$HERO_DIR/env/check_environment.sh"; then
            success "HERO environment check passed"
        else
            warning "HERO environment check failed - some features may not work"
        fi
    fi
    
    success "HERO environment setup completed"
}

# Install ./bender under tools/hero/hardware (see scripts/hero_hardware_bender_install.sh).
install_hero_hardware_bender() {
    if bash "$SCRIPT_DIR/hero_hardware_bender_install.sh" "$HERO_DIR/hardware"; then
        success "HERO hardware bender ready under $HERO_DIR/hardware"
        return 0
    fi
    error "HERO hardware bender install failed (see log above)"
    return 1
}

# Initialize HERO hardware dependencies - only if needed
initialize_hero_hardware() {
    if [[ $HERO_HW_NEEDS_INIT != true ]]; then
        info "Skipping HERO hardware initialization (already done)"
        return 0
    fi
    
    log "=== Initializing HERO Hardware Dependencies ==="
    
    cd "$HERO_DIR/hardware"
    
    install_hero_hardware_bender || return 1
    
    # Initialize hardware dependencies using Bender
    info "Fetching HERO hardware dependencies..."
    ./bender update
    
    # Generate compilation scripts
    info "Generating RTL compilation scripts..."
    make vsim/compile.tcl
    
    success "HERO hardware dependencies initialized"
}

# Create HERO environment script
create_hero_env_script() {
    log "=== Creating HERO Environment Script ==="
    
    local env_script="$PROJECT_ROOT/setup_hero_env.sh"
    
    cat > "$env_script" << 'EOF'
#!/bin/bash
# HERO Environment Setup Script
# Source this script to set up the HERO development environment

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TOOLS_DIR="$SCRIPT_DIR/tools"
HERO_DIR="$TOOLS_DIR/hero"

echo "Setting up HERO development environment..."

# Set HERO environment variables
export HERO_INSTALL="$TOOLS_DIR/hero-install"
export HERO_ROOT="$HERO_DIR"

# Add Rust and Cargo to PATH
if [[ -f "$HOME/.cargo/env" ]]; then
    source "$HOME/.cargo/env"
fi

# Add local bin to PATH
if [[ -d "$HOME/.local/bin" ]]; then
    export PATH="$HOME/.local/bin:$PATH"
fi

# Add Verilator to PATH if installed locally
if [[ -d "$TOOLS_DIR/verilator-install/bin" ]]; then
    export PATH="$TOOLS_DIR/verilator-install/bin:$PATH"
fi

# Add HERO install directory to PATH
if [[ -d "$HERO_INSTALL/bin" ]]; then
    export PATH="$HERO_INSTALL/bin:$PATH"
fi

echo ""
echo "=== HERO Environment Status ==="

# Check HERO availability
if [[ -d "$HERO_DIR" && -f "$HERO_DIR/Makefile" ]]; then
    echo "✅ HERO: Available in $HERO_DIR"
    echo "  HERO_INSTALL: $HERO_INSTALL"
else
    echo "❌ HERO: Not found or not initialized"
fi

# Check tools
if command -v bender >/dev/null 2>&1; then
    local bender_version=$(bender --version 2>/dev/null || echo "unknown")
    echo "✅ Bender: $bender_version"
else
    echo "❌ Bender: Not found"
fi

if command -v verilator >/dev/null 2>&1; then
    local verilator_version=$(verilator --version 2>/dev/null | head -1)
    echo "✅ Verilator: $verilator_version"
else
    echo "⚠️  Verilator: Not found (optional)"
fi

if command -v rustc >/dev/null 2>&1; then
    local rust_version=$(rustc --version)
    echo "✅ Rust: $rust_version"
else
    echo "❌ Rust: Not found (required for Bender)"
fi

echo ""
if [[ -d "$HERO_DIR" ]] && command -v bender >/dev/null 2>&1; then
    echo "🎉 HERO environment ready!"
    echo "You can now run: ./scripts/generate_hero.sh"
else
    echo "⚠️  HERO environment incomplete. Run: ./scripts/install_hero.sh"
fi
EOF
    
    chmod +x "$env_script"
    success "HERO environment script created: $env_script"
}

# Test HERO functionality
test_hero_functionality() {
    log "=== Testing HERO Functionality ==="
    
    # Source the environment
    source "$PROJECT_ROOT/setup_hero_env.sh" >/dev/null 2>&1
    
    cd "$HERO_DIR/hardware"
    
    # Test Bender functionality
    info "Testing Bender dependency resolution..."
    if ./bender deps; then
        success "Bender dependency resolution working"
    else
        warning "Bender dependency resolution failed"
    fi
    
    # Test RTL compilation script generation
    info "Testing RTL compilation script generation..."
    if make vsim/compile.tcl; then
        success "RTL compilation scripts generated successfully"
        
        local tcl_lines=$(wc -l < vsim/compile.tcl)
        info "Generated compile.tcl with $tcl_lines lines"
    else
        error "RTL compilation script generation failed"
        return 1
    fi
    
    success "HERO functionality tests completed"
}

# Main installation function
main() {
    local start_time=$(date +%s)
    
    log "==================================================================="
    log "HERO Installation and Setup Session Started"
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
    install_rust
    
    if [[ "$INSTALL_BENDER" == "true" ]]; then
        install_bender
    fi
    
    if [[ "$INSTALL_VERILATOR" == "true" ]]; then
        install_verilator
    fi
    
    # Setup HERO environment (only if needed)
    setup_hero_environment
    
    # Initialize HERO hardware (only if needed)
    initialize_hero_hardware
    
    # Create environment script (always do this as it's quick)
    create_hero_env_script
    
    # Test functionality
    test_hero_functionality
    
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
    source "$PROJECT_ROOT/setup_hero_env.sh" >/dev/null 2>&1
    
    log "Installed components:"
    success "✅ HERO Platform: $HERO_DIR"
    success "✅ HERO Install: $HERO_INSTALL"
    
    if command -v bender >/dev/null 2>&1; then
        success "✅ Bender: $(bender --version 2>/dev/null || echo 'installed')"
    else
        error "❌ Bender: Not found"
    fi
    
    if command -v verilator >/dev/null 2>&1; then
        success "✅ Verilator: $(verilator --version | head -1)"
    else
        warning "⚠️  Verilator: Not installed"
    fi
    
    log ""
    log "Installation complete!"
    log "To use HERO, run: source $PROJECT_ROOT/setup_hero_env.sh"
    log "Then you can use: $PROJECT_ROOT/scripts/generate_hero.sh"
    log "==================================================================="
}

# Help function
show_help() {
    echo "HERO Installation and Environment Setup Script"
    echo ""
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "This script installs and configures the HERO (Heterogeneous Research Platform)"
    echo "environment including all necessary tools for RTL compilation and verification."
    echo ""
    echo "Options:"
    echo "  -h, --help              Show this help message"
    echo "  --check                 Check prerequisites and HERO availability only"
    echo "  --skip-bender           Skip Bender installation"
    echo "  --skip-verilator        Skip Verilator installation"
    echo "  --skip-deps             Skip system dependencies installation"
    echo "  --clean                 Clean previous installations"
    echo "  --force                 Force reinstallation even if tools exist"
    echo "  --auto                  Automatic installation without user confirmation"
    echo "  --jobs N                Number of parallel build jobs (default: $(nproc))"
    echo ""
    echo "Examples:"
    echo "  $0                      # Interactive HERO installation"
    echo "  $0 --check              # Check prerequisites only"
    echo "  $0 --auto               # Automatic installation without confirmation"
    echo "  $0 --skip-deps          # Skip system dependencies"
    echo "  $0 --clean              # Clean install"
    echo ""
    echo "What this script does:"
    echo "  1. Installs system dependencies (build tools, git, cmake, etc.)"
    echo "  2. Installs Rust (required for Bender)"
    echo "  3. Installs Bender RTL dependency manager"
    echo "  4. Installs Verilator SystemVerilog simulator"
    echo "  5. Sets up HERO environment and submodules"
    echo "  6. Initializes HERO hardware dependencies"
    echo "  7. Creates environment setup script"
    echo "  8. Tests HERO functionality"
    echo ""
    echo "After installation, source the environment script:"
    echo "  source $PROJECT_ROOT/setup_hero_env.sh"
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
        --skip-bender)
            INSTALL_BENDER=false
            shift
            ;;
        --skip-verilator)
            INSTALL_VERILATOR=false
            shift
            ;;
        --skip-deps)
            SKIP_DEPS=true
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
    echo "Checking HERO prerequisites and availability..."
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
        echo "🎉 Perfect! Your HERO environment is completely set up and ready to use."
        echo ""
        echo "Next steps:"
        echo "  1. Source the environment: source $PROJECT_ROOT/setup_hero_env.sh"
        echo "  2. Run RTL generation: ./scripts/generate_hero.sh"
        exit 0
    else
        echo ""
        echo "📋 Some components need to be installed or configured."
        echo ""
        echo "To install missing components, run:"
        echo "  ./scripts/install_hero.sh"
        echo ""
        echo "To install specific components, use options like:"
        echo "  ./scripts/install_hero.sh --skip-deps    # Skip system dependencies"
        echo "  ./scripts/install_hero.sh --skip-verilator  # Skip Verilator"
        exit 0
    fi
fi

# Run main function
main
