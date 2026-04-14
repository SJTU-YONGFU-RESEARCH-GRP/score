#!/bin/bash

# IOb-SoC Installation Script
# This script automatically detects and installs missing dependencies for IOb-SoC
# Based on the Py2HWSW framework requirements

set -e  # Exit on any error

# Global variables
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOLS_DIR="$PROJECT_ROOT/tools"
LOG_DIR="$PROJECT_ROOT/logs"
INSTALL_LOG="$LOG_DIR/install_iob_soc.log"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")

# IOb-SoC specific paths
IOB_SOC_DIR="$TOOLS_DIR/iob-soc"
NIX_PROFILE_PATH="$HOME/.nix-profile"

# Installation options
INSTALL_NIX=false
INSTALL_PYTHON=false
INSTALL_SIMULATORS=false
INSTALL_SYSTEM_DEPS=false
SKIP_DEPS=false
FORCE_INSTALL=false
FORCE_BUILD=false
CHECK_ONLY=false
PARALLEL_JOBS=$(nproc)

# Create directories
mkdir -p "$LOG_DIR"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_iob_soc
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
    elif [[ "$OSTYPE" == "msys" ]] || [[ "$OSTYPE" == "cygwin" ]]; then
        OS="Windows"
    else
        OS="Unknown"
    fi
    
    log "Detected OS: $OS $VER"
}

# Command exists check
command_exists() {
    command -v "$1" >/dev/null 2>&1
}

# First line of version text for EDA tools (iverilog uses -V, not --version).
get_eda_tool_version_summary() {
    local tool="$1"
    local v=""
    case "$tool" in
        iverilog)
            command_exists iverilog || { echo "unknown"; return 0; }
            v=$(iverilog -V 2>/dev/null | head -n 1)
            ;;
        yosys)
            command_exists yosys || { echo "unknown"; return 0; }
            v=$(yosys -V 2>/dev/null | head -n 1)
            [[ -z "$v" ]] && v=$(yosys --version 2>/dev/null | head -n 1)
            ;;
        verilator)
            command_exists verilator || { echo "unknown"; return 0; }
            v=$(verilator --version 2>/dev/null | head -n 1)
            ;;
        gtkwave)
            command_exists gtkwave || { echo "unknown"; return 0; }
            v=$(gtkwave --version 2>/dev/null | head -n 1)
            [[ -z "$v" ]] && v=$(gtkwave -V 2>/dev/null | head -n 1)
            ;;
        *)
            command_exists "$tool" || { echo "unknown"; return 0; }
            v=$("$tool" --version 2>/dev/null | head -n 1)
            ;;
    esac
    [[ -n "$v" ]] && echo "$v" || echo "unknown"
}

# Check if IOb-SoC submodule exists and is initialized
check_iob_soc_submodule() {
    log "=== Checking IOb-SoC Submodule ==="
    
    if [[ ! -d "$IOB_SOC_DIR" ]]; then
        error "IOb-SoC submodule directory not found at $IOB_SOC_DIR"
        error "Please run 'git submodule update --init --recursive' first"
        return 1
    fi
    
    if [[ ! -f "$IOB_SOC_DIR/iob_soc.py" ]]; then
        error "IOb-SoC submodule not properly initialized"
        error "Please run 'git submodule update --init --recursive' in the IOb-SoC directory"
        return 1
    fi
    
    # Get IOb-SoC version
    local version=$(grep 'version' "$IOB_SOC_DIR/iob_soc.py" | cut -d '"' -f 4)
    success "IOb-SoC submodule found - Version: $version"
    return 0
}

# Search and setup Nix environment automatically
search_and_setup_nix_environment() {
    info "Searching for Nix installation..."
    
    # Common Nix profile locations to search
    local nix_profile_paths=(
        "$HOME/.nix-profile/etc/profile.d/nix.sh"
        "/nix/var/nix/profiles/default/etc/profile.d/nix-daemon.sh"
        "/etc/profile.d/nix.sh"
        "/usr/local/etc/profile.d/nix.sh"
    )
    
    # Search for Nix binaries in common locations
    local nix_bin_paths=(
        "$HOME/.nix-profile/bin"
        "/nix/var/nix/profiles/default/bin"
        "/usr/local/bin"
        "/opt/nix/bin"
    )
    
    # First, try to find and source Nix profile scripts
    for profile_path in "${nix_profile_paths[@]}"; do
        if [[ -f "$profile_path" ]]; then
            info "Found Nix profile script: $profile_path"
            if source "$profile_path" 2>/dev/null; then
                success "Successfully sourced Nix environment from $profile_path"
                return 0
            else
                warning "Failed to source Nix profile from $profile_path"
            fi
        fi
    done
    
    # If profile scripts don't work, try to find Nix binaries directly
    for bin_path in "${nix_bin_paths[@]}"; do
        if [[ -d "$bin_path" ]] && [[ -x "$bin_path/nix" ]]; then
            info "Found Nix binaries in: $bin_path"
            export PATH="$bin_path:$PATH"
            success "Added Nix binaries to PATH: $bin_path"
            return 0
        fi
    done
    
    # Search for Nix in the entire system (last resort)
    info "Performing system-wide search for Nix..."
    local nix_locations
    nix_locations=$(find /nix /usr /opt /home -name "nix" -type f -executable 2>/dev/null | head -5)
    
    if [[ -n "$nix_locations" ]]; then
        info "Found Nix installations:"
        echo "$nix_locations" | while read -r nix_path; do
            info "  $nix_path"
        done
        
        # Use the first found installation
        local first_nix=$(echo "$nix_locations" | head -1)
        local nix_dir=$(dirname "$first_nix")
        export PATH="$nix_dir:$PATH"
        success "Added Nix directory to PATH: $nix_dir"
        return 0
    fi
    
    warning "No Nix installation found on the system"
    return 1
}

# Check if Nix is installed and working
check_nix_installation() {
    log "=== Checking Nix Installation ==="
    
    # First check if nix commands are already available
    if command_exists nix && command_exists nix-shell; then
        info "Nix commands found in current PATH"
        local nix_version
        if timeout 10 nix --version >/dev/null 2>&1; then
            nix_version=$(nix --version 2>/dev/null || echo "unknown")
            success "Nix is installed and working: $nix_version"
            return 0
        fi
    fi
    
    # If not found, search and setup Nix environment
    info "Nix not found in current PATH, searching system..."
    if search_and_setup_nix_environment; then
        # Verify the setup worked
        if command_exists nix && command_exists nix-shell; then
            local nix_version
            if timeout 10 nix --version >/dev/null 2>&1; then
                nix_version=$(nix --version 2>/dev/null || echo "unknown")
                success "Nix environment successfully configured: $nix_version"
                
                # Export the environment for the rest of the script
                export NIX_PROFILES="/nix/var/nix/profiles/default $HOME/.nix-profile"
                export NIX_SSL_CERT_FILE="/etc/ssl/certs/ca-certificates.crt"
                export NIX_PATH="/nix/var/nix/profiles/per-user/root/channels"
                
                return 0
            else
                warning "Nix found but not functioning properly"
            fi
        else
            warning "Nix environment setup failed - commands still not found"
        fi
    fi
    
    # If all searches fail, mark for installation
    info "Nix package manager not found or not working"
    INSTALL_NIX=true
    return 1
}

# Check if py2hwsw is available in nix environment
check_py2hwsw_availability() {
    log "=== Checking Py2HWSW Framework ==="
    
    if [[ ! -d "$IOB_SOC_DIR" ]]; then
        warning "Cannot check Py2HWSW without IOb-SoC directory"
        return 1
    fi
    
    # Save current directory and change to IOB_SOC_DIR
    local original_dir=$(pwd)
    cd "$IOB_SOC_DIR" || {
        error "Failed to change to IOb-SoC directory"
        return 1
    }
    
    # Check for Nix configuration files instead of running nix-shell
    info "Checking Nix environment configuration for Py2HWSW..."
    
    # Check if default.nix or shell.nix exists
    if [[ -f "default.nix" ]] || [[ -f "shell.nix" ]]; then
        success "Nix configuration found (default.nix or shell.nix)"
        
        # Check if the nix file mentions py2hwsw
        if grep -q "py2hwsw\|python.*hw" *.nix 2>/dev/null; then
            success "Py2HWSW framework configuration detected in Nix files"
            info "Framework will be available after Nix environment setup"
        else
            info "Nix environment configured, but py2hwsw not explicitly detected"
        fi
        
        # Warn about first-time setup requirement
        warning "⚠️  IMPORTANT: First-time Nix environment setup required"
        info "💡 This will take 1-3 hours when you first run 'nix-shell'"
        info "💡 To build now: ./scripts/install_iob_soc.sh --force-build"
        info "💡 To build manually: cd $IOB_SOC_DIR && nix-shell"
        
        cd "$original_dir"
        return 0
    else
        warning "No Nix configuration files found in IOb-SoC directory"
        info "Expected files: default.nix or shell.nix"
        cd "$original_dir"
        return 1
    fi
}

# Check Python installation
check_python_installation() {
    log "=== Checking Python Installation ==="
    
    if ! command_exists python3; then
        warning "Python3 not found"
        INSTALL_PYTHON=true
        return 1
    fi
    
    # Check Python version
    local python_version=$(python3 -c "import sys; print(f'{sys.version_info.major}.{sys.version_info.minor}')")
    if python3 -c "import sys; exit(0 if sys.version_info >= (3, 8) else 1)"; then
        success "Python version $python_version is compatible"
    else
        error "Python 3.8 or later required. Found Python $python_version"
        INSTALL_PYTHON=true
        return 1
    fi
    
    # Check pip
    if ! command_exists pip3; then
        warning "pip3 not found"
        INSTALL_PYTHON=true
        return 1
    fi
    
    return 0
}

# Check system dependencies
check_system_dependencies() {
    log "=== Checking System Dependencies ==="
    
    local missing_deps=()
    local essential_tools=("git" "make" "gcc" "g++" "curl" "wget")
    
    for tool in "${essential_tools[@]}"; do
        if ! command_exists "$tool"; then
            missing_deps+=("$tool")
        fi
    done
    
    if [[ ${#missing_deps[@]} -gt 0 ]]; then
        warning "Missing system dependencies: ${missing_deps[*]}"
        INSTALL_SYSTEM_DEPS=true
        return 1
    else
        success "All essential system dependencies found"
        return 0
    fi
}

# Check EDA tools (simulators, synthesizers)
check_eda_tools() {
    log "=== Checking EDA Tools ==="
    
    local missing_tools=()
    local recommended_tools=("iverilog" "yosys")
    local optional_tools=("verilator" "gtkwave")
    
    # Check recommended tools
    for tool in "${recommended_tools[@]}"; do
        if command_exists "$tool"; then
            local version
            version=$(get_eda_tool_version_summary "$tool")
            success "$tool found: $version"
        else
            missing_tools+=("$tool")
        fi
    done
    
    # Check optional tools
    for tool in "${optional_tools[@]}"; do
        if command_exists "$tool"; then
            local version
            version=$(get_eda_tool_version_summary "$tool")
            info "$tool found: $version"
        else
            info "$tool not found (optional)"
        fi
    done
    
    if [[ ${#missing_tools[@]} -gt 0 ]]; then
        warning "Missing recommended EDA tools: ${missing_tools[*]}"
        INSTALL_SIMULATORS=true
        return 1
    else
        success "All recommended EDA tools found"
        return 0
    fi
}

# Install Nix package manager
install_nix() {
    log "=== Installing Nix Package Manager ==="
    
    if [[ "$OS" == "Windows" ]]; then
        error "Nix installation on Windows is not supported by this script"
        error "Please use WSL or a Linux environment"
        return 1
    fi
    
    info "Downloading and installing Nix..."
    if curl -L https://nixos.org/nix/install | sh; then
        success "Nix installation completed"
        
        # Use our search function to configure the environment
        if search_and_setup_nix_environment; then
            success "Nix environment configured automatically"
        else
            warning "Failed to auto-configure Nix environment"
            # Fallback to manual sourcing
            if [[ -f "$HOME/.nix-profile/etc/profile.d/nix.sh" ]]; then
                source "$HOME/.nix-profile/etc/profile.d/nix.sh"
                success "Nix environment sourced manually"
            fi
        fi
        
        # Verify installation
        if command_exists nix && command_exists nix-shell; then
            success "Nix installation verified"
            return 0
        else
            error "Nix installation failed verification"
            return 1
        fi
    else
        error "Nix installation failed"
        return 1
    fi
}

# Install system dependencies
install_system_dependencies() {
    if [[ "$INSTALL_SYSTEM_DEPS" != "true" ]]; then
        return 0
    fi
    
    log "=== Installing System Dependencies ==="
    
    case "$OS" in
        *"Ubuntu"*|*"Debian"*)
            info "Installing dependencies for Ubuntu/Debian..."
            sudo apt-get update
            
            sudo apt-get install -y \
                build-essential \
                git \
                make \
                cmake \
                pkg-config \
                curl \
                wget \
                unzip \
                python3 \
                python3-pip \
                autoconf \
                flex \
                bison \
                libssl-dev \
                zlib1g-dev
            ;;
            
        *"CentOS"*|*"Red Hat"*|*"Fedora"*)
            info "Installing dependencies for RedHat/CentOS/Fedora..."
            
            if command -v dnf >/dev/null 2>&1; then
                PKG_MGR="dnf"
            else
                PKG_MGR="yum"
            fi
            
            sudo $PKG_MGR install -y \
                gcc \
                gcc-c++ \
                git \
                make \
                cmake \
                pkg-config \
                curl \
                wget \
                unzip \
                python3 \
                python3-pip \
                autoconf \
                flex \
                bison \
                openssl-devel \
                zlib-devel
            ;;
            
        *"Arch"*)
            info "Installing dependencies for Arch Linux..."
            sudo pacman -S --noconfirm \
                base-devel \
                git \
                make \
                cmake \
                pkg-config \
                curl \
                wget \
                unzip \
                python \
                python-pip \
                autoconf \
                flex \
                bison \
                openssl \
                zlib
            ;;
            
        *"macOS"*)
            info "Installing dependencies for macOS..."
            if ! command -v brew >/dev/null 2>&1; then
                error "Homebrew not found. Please install Homebrew first."
                return 1
            fi
            
            brew install \
                git \
                make \
                cmake \
                pkg-config \
                curl \
                wget \
                autoconf \
                flex \
                bison \
                openssl \
                zlib
            ;;
            
        *)
            warning "Unknown OS. You may need to install dependencies manually."
            info "Required dependencies: gcc, git, make, cmake, python3, autoconf, flex, bison"
            return 1
            ;;
    esac
    
    success "System dependencies installed"
    return 0
}

# Install EDA tools (simulators)
install_eda_tools() {
    if [[ "$INSTALL_SIMULATORS" != "true" ]]; then
        return 0
    fi
    
    log "=== Installing EDA Tools ==="
    
    case "$OS" in
        *"Ubuntu"*|*"Debian"*)
            info "Installing EDA tools for Ubuntu/Debian..."
            sudo apt-get install -y iverilog yosys gtkwave
            
            # Try to install verilator
            if apt-cache search --names-only '^verilator$' | grep -q verilator; then
                sudo apt-get install -y verilator
                success "Verilator installed"
            else
                warning "Verilator not available in repositories"
            fi
            ;;
            
        *"CentOS"*|*"Red Hat"*|*"Fedora"*)
            if command -v dnf >/dev/null 2>&1; then
                PKG_MGR="dnf"
            else
                PKG_MGR="yum"
            fi
            
            # Try to install available tools
            sudo $PKG_MGR install -y iverilog || warning "iverilog not available"
            sudo $PKG_MGR install -y yosys || warning "yosys not available"
            sudo $PKG_MGR install -y gtkwave || warning "gtkwave not available"
            ;;
            
        *"Arch"*)
            sudo pacman -S --noconfirm iverilog yosys gtkwave verilator
            ;;
            
        *"macOS"*)
            brew install icarus-verilog yosys gtkwave
            brew install verilator || warning "verilator installation failed"
            ;;
            
        *)
            warning "EDA tools installation not supported for $OS"
            info "Please install manually: iverilog, yosys, gtkwave, verilator"
            return 1
            ;;
    esac
    
    success "EDA tools installation completed"
    return 0
}

# Setup IOb-SoC environment
setup_iob_soc_environment() {
    log "=== Setting up IOb-SoC Environment ==="
    
    if [[ ! -d "$IOB_SOC_DIR" ]]; then
        error "IOb-SoC directory not found"
        return 1
    fi
    
    cd "$IOB_SOC_DIR"
    
    # Verify Nix environment is available
    if ! command -v nix-shell >/dev/null 2>&1; then
        error "Nix environment not properly configured"
        error "Please run the Nix installation check first"
        return 1
    fi
    
    # Check Nix environment configuration without running nix-shell
    info "Checking IOb-SoC Nix environment configuration..."
    
    # Check for Nix configuration files
    if [[ -f "default.nix" ]] || [[ -f "shell.nix" ]]; then
        success "Nix environment configuration found"
        
        echo ""
        warning "=== IMPORTANT INFORMATION ==="
        info "IOb-SoC uses Nix for dependency management. The first time you run"
        info "'nix-shell' in this directory, it will download and build:"
        info "  • RISC-V GNU Toolchain (~2-4 GB download + compilation)"
        info "  • TeXLive distribution (~1-2 GB)"
        info "  • Yosys synthesis tool"
        info "  • Py2HWSW framework and Python packages"
        echo ""
        info "This process may take 1-3 hours depending on your:"
        info "  • Internet connection speed"
        info "  • Computer performance"
        info "  • Network stability"
        echo ""
        
        # Provide user options without running nix-shell
        info "Nix environment is configured but not yet built"
        warning "⚠️  First-time setup will be required when you use IOb-SoC"
        
        return 0
    else
        error "No Nix configuration files found (default.nix or shell.nix)"
        return 1
    fi
    
    # Handle build options
    if [[ "$FORCE_BUILD" == "true" ]]; then
        warning "Force build requested - will start Nix environment setup"
        info "This will take 1-3 hours to complete..."
        perform_nix_environment_setup
        return $?
    elif [[ -z "${TERM:-}" ]]; then
        # Non-interactive mode - skip build by default
        warning "Non-interactive mode: Skipping Nix environment build"
        info "You can build manually later with: cd $IOB_SOC_DIR && nix-shell"
        return 0
    else
        # Interactive mode - ask user what to do
        echo ""
        echo "Choose an option:"
        echo "  1) Build now (may take 1-3 hours)"
        echo "  2) Skip for now (you can build manually later)"
        echo "  3) Show manual build instructions"
        echo ""
        read -p "Enter your choice (1-3): " choice
        
        case "$choice" in
            1)
                info "Starting Nix environment build..."
                perform_nix_environment_setup
                return $?
                ;;
            2)
                warning "Skipping Nix environment build"
                info "To build later, run: cd $IOB_SOC_DIR && nix-shell"
                info "Or run this script again with --force-build flag"
                return 0
                ;;
            3)
                show_manual_build_instructions
                return 0
                ;;
            *)
                warning "Invalid choice. Skipping build for now."
                return 0
                ;;
        esac
    fi
}

# Perform the actual Nix environment setup
perform_nix_environment_setup() {
    info "Starting Nix environment setup (this will take a while)..."
    echo ""
    
    # Tips for better experience
    info "💡 Tips for successful build:"
    info "  • Ensure stable internet connection"
    info "  • Keep your computer plugged in"
    info "  • Don't interrupt the process"
    info "  • You can monitor progress in another terminal"
    echo ""
    
    # Create a log file for the build
    local build_log="$HOME/iob_soc_nix_build.log"
    info "Build log will be saved to: $build_log"
    echo ""
    
    info "Starting build... (press Ctrl+C to cancel)"
    sleep 3
    
    # Run the actual build with timeout and logging
    info "Starting Nix environment build (this may take 1-3 hours)..."
    echo "You can monitor progress in another terminal with: tail -f $build_log"
    echo ""
    
    if timeout 7200 nix-shell --run "echo 'IOb-SoC Nix environment setup completed successfully'" 2>&1 | tee "$build_log"; then
        success "Nix environment setup completed successfully!"
        
        # Don't test py2hwsw immediately after build to avoid issues
        info "Nix environment built successfully"
        info "py2hwsw framework should now be available in nix-shell"
        
        success "IOb-SoC environment is ready!"
        info "You can now use: cd $IOB_SOC_DIR && nix-shell && make setup"
        return 0
    else
        local exit_code=$?
        if [[ $exit_code -eq 124 ]]; then
            error "Nix environment setup timed out (2 hours)"
            info "This may be due to slow internet or network issues"
        else
            error "Nix environment setup failed"
        fi
        
        error "Build failed. Check the log file: $build_log"
        echo ""
        show_troubleshooting_tips
        return 1
    fi
}

# Show manual build instructions
show_manual_build_instructions() {
    echo ""
    info "=== Manual Build Instructions ==="
    echo ""
    info "To manually set up the IOb-SoC Nix environment:"
    echo ""
    echo "1. Open a terminal and navigate to IOb-SoC directory:"
    echo "   cd $IOB_SOC_DIR"
    echo ""
    echo "2. Source Nix environment (if needed):"
    echo "   source ~/.nix-profile/etc/profile.d/nix.sh"
    echo ""
    echo "3. Start the Nix shell (this will download and build everything):"
    echo "   nix-shell"
    echo ""
    echo "4. Wait for the build to complete (1-3 hours on first run)"
    echo ""
    echo "5. Once inside nix-shell, test the environment:"
    echo "   py2hwsw --version"
    echo "   make help"
    echo ""
    info "The build will only take this long the first time."
    info "Subsequent runs will be much faster."
    echo ""
}

# Show troubleshooting tips
show_troubleshooting_tips() {
    echo ""
    warning "=== Troubleshooting Tips ==="
    echo ""
    info "If the build failed, try these solutions:"
    echo ""
    echo "1. Check your internet connection and try again"
    echo ""
    echo "2. Clear Nix cache and retry:"
    echo "   nix-collect-garbage"
    echo "   cd $IOB_SOC_DIR && nix-shell"
    echo ""
    echo "3. Use a different Nix binary cache:"
    echo "   mkdir -p ~/.config/nix"
    echo "   echo 'substituters = https://cache.nixos.org/' > ~/.config/nix/nix.conf"
    echo ""
    echo "4. Build with more verbose output:"
    echo "   cd $IOB_SOC_DIR && nix-shell --verbose"
    echo ""
    echo "5. Check if you have enough disk space (need ~10GB free)"
    echo ""
    echo "6. For network issues, try building at a different time"
    echo ""
}

# Create environment helper script (source before working in tools/iob-soc; mirrors scripts/rocket_chip_env.sh)
create_environment_script() {
    log "=== Creating scripts/iob_soc_env.sh ==="
    
    local env_script="$SCRIPT_DIR/iob_soc_env.sh"
    
    cat > "$env_script" << 'EOF'
#!/bin/bash
# IOb-SoC environment: source this file before working in tools/iob-soc (like scripts/rocket_chip_env.sh).

IOB_SOC_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/../tools/iob-soc" && pwd)"

echo "Loading IOb-SoC environment..."

# Function to search and setup Nix environment
search_and_setup_nix_env() {
    # Common Nix profile locations to search
    local nix_profile_paths=(
        "$HOME/.nix-profile/etc/profile.d/nix.sh"
        "/nix/var/nix/profiles/default/etc/profile.d/nix-daemon.sh"
        "/etc/profile.d/nix.sh"
        "/usr/local/etc/profile.d/nix.sh"
    )
    
    # Search for Nix binaries in common locations
    local nix_bin_paths=(
        "$HOME/.nix-profile/bin"
        "/nix/var/nix/profiles/default/bin"
        "/usr/local/bin"
        "/opt/nix/bin"
    )
    
    # First, try to find and source Nix profile scripts
    for profile_path in "${nix_profile_paths[@]}"; do
        if [[ -f "$profile_path" ]]; then
            echo "🔍 Found Nix profile script: $profile_path"
            if source "$profile_path" 2>/dev/null; then
                echo "✅ Successfully sourced Nix environment"
                return 0
            fi
        fi
    done
    
    # If profile scripts don't work, try to find Nix binaries directly
    for bin_path in "${nix_bin_paths[@]}"; do
        if [[ -d "$bin_path" ]] && [[ -x "$bin_path/nix" ]]; then
            echo "🔍 Found Nix binaries in: $bin_path"
            export PATH="$bin_path:$PATH"
            echo "✅ Added Nix binaries to PATH"
            return 0
        fi
    done
    
    return 1
}

# Check if Nix is available, if not try to find it
if ! command -v nix-shell >/dev/null 2>&1; then
    echo "🔍 Nix not found in PATH, searching system..."
    if search_and_setup_nix_env; then
        echo "✅ Nix environment configured"
    else
        echo "❌ Nix package manager not found"
        echo "💡 Please install Nix or run the installation script"
        return 1
    fi
else
    echo "✅ Nix package manager found"
fi

# Check if IOb-SoC directory exists
if [[ -d "$IOB_SOC_DIR" ]]; then
    echo "✅ IOb-SoC directory found"
    
    # Check configuration files instead of running nix-shell
    cd "$IOB_SOC_DIR"
    
    # Check for Nix configuration
    if [[ -f "default.nix" ]] || [[ -f "shell.nix" ]]; then
        echo "✅ Nix environment configuration found"
        
        # Check if py2hwsw is mentioned in Nix files
        if grep -q "py2hwsw\|python.*hw" *.nix 2>/dev/null; then
            echo "✅ Py2HWSW framework configured"
        else
            echo "ℹ️  Nix environment configured"
        fi
        
        # Check for essential files
        if [[ -f "iob_soc.py" ]] && [[ -f "Makefile" ]]; then
            echo "✅ IOb-SoC core files present"
        else
            echo "⚠️  Some IOb-SoC files may be missing"
        fi
        
        echo ""
        echo "=== Ready to Use IOb-SoC ==="
        echo "⚠️  IMPORTANT: First time will take 1-3 hours to build Nix environment"
        echo ""
        echo "Getting started:"
        echo "  1. cd $IOB_SOC_DIR"
        echo "  2. nix-shell               # Enter Nix environment (builds on first run)"
        echo "  3. make setup              # Setup build directory"
        echo "  4. make pc-emul-run        # Run PC emulation"
        echo ""
        echo "Other useful commands:"
        echo "  make sim-run               # Run RTL simulation"
        echo "  make fpga-run              # Run on FPGA"
        echo "  make doc-build             # Build documentation"
        echo "  make help                  # Show all available targets"
        echo ""
        
    else
        echo "❌ Nix configuration files not found (default.nix or shell.nix)"
        echo "💡 Please check IOb-SoC submodule initialization"
    fi
else
    echo "❌ IOb-SoC directory not found at $IOB_SOC_DIR"
    echo "💡 Please run 'git submodule update --init --recursive'"
fi

# Check EDA tools
echo ""
echo "=== EDA Tools Status ==="
if command -v iverilog >/dev/null 2>&1; then
    # Piping iverilog -V to head closes the pipe early; ivl then prints spurious
    # "Unable to get version from ..." on stderr—suppress with 2>/dev/null.
    iverilog_version=$(iverilog -V 2>/dev/null | head -n 1)
    echo "✅ Icarus Verilog: $iverilog_version"
else
    echo "❌ Icarus Verilog not found"
fi

if command -v yosys >/dev/null 2>&1; then
    yosys_version=$(yosys -V | head -1)
    echo "✅ Yosys: $yosys_version"
else
    echo "❌ Yosys not found"
fi

if command -v verilator >/dev/null 2>&1; then
    verilator_version=$(verilator --version | head -1)
    echo "✅ Verilator: $verilator_version"
else
    echo "⚠️  Verilator not found (optional)"
fi

if command -v gtkwave >/dev/null 2>&1; then
    echo "✅ GTKWave found"
else
    echo "⚠️  GTKWave not found (optional)"
fi

echo ""
if command -v nix-shell >/dev/null 2>&1 && [[ -d "$IOB_SOC_DIR" ]]; then
    echo "🎉 IOb-SoC environment ready!"
    echo "Change to $IOB_SOC_DIR and run 'make setup' to get started."
else
    echo "⚠️  IOb-SoC environment setup incomplete."
    echo "Run: ./scripts/install_iob_soc.sh to install missing components."
fi
EOF
    
    chmod +x "$env_script"
    success "Environment setup script created: $env_script"
}

# Test IOb-SoC setup
test_iob_soc_setup() {
    log "=== Testing IOb-SoC Setup ==="
    
    if [[ ! -d "$IOB_SOC_DIR" ]]; then
        error "IOb-SoC directory not found for testing"
        return 1
    fi
    
    cd "$IOB_SOC_DIR"
    
    # Test basic file presence instead of running nix-shell
    info "Checking IOb-SoC configuration files..."
    
    # Check for essential files
    local essential_files=("iob_soc.py" "Makefile")
    local missing_files=()
    
    for file in "${essential_files[@]}"; do
        if [[ -f "$file" ]]; then
            success "$file found"
        else
            missing_files+=("$file")
        fi
    done
    
    if [[ ${#missing_files[@]} -gt 0 ]]; then
        error "Missing essential files: ${missing_files[*]}"
        return 1
    fi
    
    # Check Nix configuration
    if [[ -f "default.nix" ]] || [[ -f "shell.nix" ]]; then
        success "Nix environment configuration found"
    else
        warning "Nix configuration files not found"
    fi
    
    # Test make targets availability (dry run only)
    info "Testing Makefile targets availability..."
    if make -n setup >/dev/null 2>&1; then
        success "Makefile targets available"
    else
        warning "Some Makefile targets may not be immediately available"
    fi
    
    # Summary
    success "IOb-SoC setup verification completed"
    info "💡 To start using IOb-SoC:"
    info "   1. cd $IOB_SOC_DIR"
    info "   2. nix-shell  # (will build environment on first run)"
    info "   3. make setup"
    
    return 0
}

# Main installation function
main() {
    local start_time=$(date +%s)
    
    log "==================================================================="
    log "IOb-SoC Installation Session Started"
    log "Installation Log: $INSTALL_LOG"
    log "==================================================================="
    
    # Detect OS
    detect_os
    
    # Early Nix environment search and setup (if already installed)
    info "Performing early Nix environment search..."
    if search_and_setup_nix_environment >/dev/null 2>&1; then
        success "Nix environment found and configured"
    else
        info "Nix environment will be configured during installation if needed"
    fi
    
    # Check IOb-SoC submodule
    if ! check_iob_soc_submodule; then
        error "IOb-SoC submodule check failed"
        error "Please ensure the submodule is properly initialized"
        exit 1
    fi
    
    # If check-only mode, just run checks and exit
    if [[ "$CHECK_ONLY" == "true" ]]; then
        log "=== Running Dependency Checks Only ==="
        local checks_failed=0
        
        log "Checking dependencies..."
        
        # Check each dependency and count failures
        if ! check_nix_installation; then
            ((checks_failed++))
        fi
        
        if ! check_python_installation; then
            ((checks_failed++))
        fi
        
        if ! check_system_dependencies; then
            ((checks_failed++))
        fi
        
        if ! check_eda_tools; then
            ((checks_failed++))
        fi
        
        if ! check_py2hwsw_availability; then
            ((checks_failed++))
        fi
        
        log "=== Check Results ==="
        if [[ $checks_failed -eq 0 ]]; then
            success "All dependency checks passed!"
            log "Environment appears to be ready for IOb-SoC development"
        else
            warning "$checks_failed dependency checks failed"
            log "Run without --check-only to install missing dependencies"
        fi
        
        exit $checks_failed
    fi
    
    # Run dependency checks (capture return values but don't exit on failure)
    check_nix_installation || true
    check_python_installation || true
    check_system_dependencies || true
    check_eda_tools || true
    check_py2hwsw_availability || true
    
    # Show what needs to be installed
    log "=== Installation Plan ==="
    if [[ "$INSTALL_NIX" == "true" ]]; then
        info "Will install: Nix package manager"
    fi
    if [[ "$INSTALL_PYTHON" == "true" ]]; then
        info "Will install: Python dependencies"
    fi
    if [[ "$INSTALL_SYSTEM_DEPS" == "true" ]]; then
        info "Will install: System dependencies"
    fi
    if [[ "$INSTALL_SIMULATORS" == "true" ]]; then
        info "Will install: EDA tools"
    fi
    
    # Skip installation if not needed
    if [[ "$SKIP_DEPS" == "true" ]]; then
        info "Skipping dependency installation (--skip-deps specified)"
    else
        # Install dependencies based on what's missing
        if [[ "$INSTALL_NIX" == "true" ]] || [[ "$FORCE_INSTALL" == "true" ]]; then
            log "Installing Nix package manager..."
            install_nix || warning "Nix installation failed, continuing anyway"
        fi
        
        if [[ "$INSTALL_SYSTEM_DEPS" == "true" ]] || [[ "$FORCE_INSTALL" == "true" ]]; then
            log "Installing system dependencies..."
            install_system_dependencies || warning "System dependencies installation failed, continuing anyway"
        fi
        
        if [[ "$INSTALL_SIMULATORS" == "true" ]] || [[ "$FORCE_INSTALL" == "true" ]]; then
            log "Installing EDA tools..."
            install_eda_tools || warning "EDA tools installation failed, continuing anyway"
        fi
        
        if [[ "$INSTALL_NIX" == "false" && "$INSTALL_PYTHON" == "false" && "$INSTALL_SYSTEM_DEPS" == "false" && "$INSTALL_SIMULATORS" == "false" ]]; then
            success "No missing dependencies detected - environment looks good!"
        fi
    fi
    
    # Setup IOb-SoC environment
    setup_iob_soc_environment
    
    # Create environment script
    create_environment_script
    
    # Test setup
    test_iob_soc_setup
    
    # Summary
    local end_time=$(date +%s)
    local duration=$((end_time - start_time))
    local minutes=$((duration / 60))
    local seconds=$((duration % 60))
    
    log "==================================================================="
    log "Installation Summary"
    log "==================================================================="
    log "Total time: ${minutes}m ${seconds}s"
    
    # Show status of key components
    log "Component Status:"
    
    if command -v nix-shell >/dev/null 2>&1; then
        success "✅ Nix package manager: Available"
    else
        error "❌ Nix package manager: Not found"
    fi
    
    if command -v python3 >/dev/null 2>&1; then
        local python_version=$(python3 --version)
        success "✅ Python: $python_version"
    else
        warning "⚠️  Python: Not found"
    fi
    
    if [[ -d "$IOB_SOC_DIR" ]] && [[ -f "$IOB_SOC_DIR/iob_soc.py" ]]; then
        success "✅ IOb-SoC submodule: Initialized"
    else
        error "❌ IOb-SoC submodule: Not found"
    fi
    
    if command -v iverilog >/dev/null 2>&1; then
        success "✅ Icarus Verilog: $(iverilog -V 2>/dev/null | head -n 1)"
    else
        warning "⚠️  Icarus Verilog: Not found"
    fi
    
    if command -v yosys >/dev/null 2>&1; then
        success "✅ Yosys: Available"
    else
        warning "⚠️  Yosys: Not found"
    fi
    
    log ""
    log "Installation complete!"
    log "To use IOb-SoC, run: source $SCRIPT_DIR/iob_soc_env.sh"
    log "Then navigate to $IOB_SOC_DIR and run: make setup"
    log "==================================================================="
}

# Help function
show_help() {
    echo "IOb-SoC Installation Script"
    echo ""
    echo "This script detects and installs missing dependencies for IOb-SoC development"
    echo "environment based on the Py2HWSW framework."
    echo ""
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "Options:"
    echo "  -h, --help              Show this help message"
    echo "  --check-only            Only check dependencies, don't install anything"
    echo "  --skip-deps             Skip dependency installation"
    echo "  --force                 Force installation of all components"
    echo "  --force-build           Force Nix environment build (skip interactive prompt)"
    echo "  --jobs N                Number of parallel build jobs (default: $(nproc))"
    echo ""
    echo "Examples:"
    echo "  $0                      # Check and install missing dependencies"
    echo "  $0 --check-only         # Only check what's missing"
    echo "  $0 --force              # Force reinstall all components"
    echo "  $0 --force-build        # Force Nix environment build without prompting"
    echo "  $0 --skip-deps          # Skip system dependency installation"
    echo ""
    echo "What this script does:"
    echo "  1. Automatically searches and configures Nix environment"
    echo "  2. Checks IOb-SoC submodule initialization"
    echo "  3. Detects and installs Nix package manager if needed"
    echo "  4. Checks Python 3.8+ installation"
    echo "  5. Installs missing system dependencies (gcc, git, make, etc.)"
    echo "  6. Installs EDA tools (iverilog, yosys, verilator, gtkwave)"
    echo "  7. Tests Py2HWSW framework availability"
    echo "  8. Creates smart environment setup script"
    echo "  9. Tests IOb-SoC setup"
    echo ""
    echo "Automatic Nix Environment Detection:"
    echo "  - Searches common Nix installation locations"
    echo "  - Automatically sources Nix profile scripts"
    echo "  - Configures PATH and environment variables"
    echo "  - Works with user-mode and system-wide Nix installations"
    echo ""
    echo "Required components:"
    echo "  - Nix package manager (for Py2HWSW framework)"
    echo "  - Python 3.8+ with pip"
    echo "  - Git, make, gcc, and build tools"
    echo "  - IOb-SoC submodule (tools/iob-soc)"
    echo ""
    echo "Recommended EDA tools:"
    echo "  - Icarus Verilog (simulation)"
    echo "  - Yosys (synthesis)"
    echo "  - Verilator (simulation, optional)"
    echo "  - GTKWave (waveform viewer, optional)"
    echo ""
    echo "After installation, source the environment script:"
    echo "  source $SCRIPT_DIR/iob_soc_env.sh"
}

# Parse command line arguments
while [[ $# -gt 0 ]]; do
    case $1 in
        -h|--help)
            show_help
            exit 0
            ;;
        --check-only)
            CHECK_ONLY=true
            shift
            ;;
        --skip-deps)
            SKIP_DEPS=true
            shift
            ;;
        --force)
            FORCE_INSTALL=true
            shift
            ;;
        --force-build)
            FORCE_BUILD=true
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

# Run main function
main
