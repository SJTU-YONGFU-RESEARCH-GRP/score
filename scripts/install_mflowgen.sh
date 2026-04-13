#!/bin/bash

# MFlowGen Installation and Environment Setup Script
# This script detects and installs all dependencies required for MFlowGen

set -e  # Exit on any error
shopt -s nullglob  # Enable nullglob for proper glob expansion

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
MFLOWGEN_DIR="$PROJECT_ROOT/tools/mflowgen"
LOG_DIR="$PROJECT_ROOT/logs/install_mflowgen"
MAIN_LOG="$LOG_DIR/install.log"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/session_${TIMESTAMP}.log"

# Installation options
INSTALL_PYTHON=false
INSTALL_SYSTEM_DEPS=false
INSTALL_EDA_TOOLS=false
CHECK_ONLY=false
DEBUG_MODE=false
FORCE_INSTALL=false

# Minimum version requirements
MIN_PYTHON_VERSION="3.7"
MIN_MAKE_VERSION="3.81"
MIN_GIT_VERSION="2.0"

# Create log directory
mkdir -p "$LOG_DIR"

# Logging functions
log() {
    local message="$1"
    local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${BLUE}[$timestamp]${NC} $message" | tee -a "$MAIN_LOG" "$SESSION_LOG"
}

error() {
    local message="$1"
    local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${RED}[ERROR $timestamp]${NC} $message" | tee -a "$MAIN_LOG" "$SESSION_LOG" >&2
}

success() {
    local message="$1"
    local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${GREEN}[SUCCESS $timestamp]${NC} $message" | tee -a "$MAIN_LOG" "$SESSION_LOG"
}

warning() {
    local message="$1"
    local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${YELLOW}[WARNING $timestamp]${NC} $message" | tee -a "$MAIN_LOG" "$SESSION_LOG"
}

info() {
    local message="$1"
    local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    echo -e "${CYAN}[INFO $timestamp]${NC} $message" | tee -a "$MAIN_LOG" "$SESSION_LOG"
}

debug() {
    local message="$1"
    local timestamp="$(date +'%Y-%m-%d %H:%M:%S')"
    if [[ "$DEBUG_MODE" == "true" ]]; then
        echo -e "${PURPLE}[DEBUG $timestamp]${NC} $message" | tee -a "$MAIN_LOG" "$SESSION_LOG" >&2
    fi
}

# Version comparison function
version_compare() {
    local version1=$1
    local version2=$2
    printf '%s\n%s\n' "$version1" "$version2" | sort -V | head -n1
}

# Check if version1 >= version2
version_ge() {
    local version1=$1
    local version2=$2
    [[ "$(version_compare "$version1" "$version2")" == "$version2" ]]
}

# Detect operating system
detect_os() {
    local os_type=""
    if [[ "$OSTYPE" == "linux-gnu"* ]]; then
        if [[ -f /etc/os-release ]]; then
            . /etc/os-release
            os_type="$ID"
        else
            os_type="linux"
        fi
    elif [[ "$OSTYPE" == "darwin"* ]]; then
        os_type="macos"
    elif [[ "$OSTYPE" == "msys" ]] || [[ "$OSTYPE" == "cygwin" ]]; then
        os_type="windows"
    else
        os_type="unknown"
    fi
    echo "$os_type"
}

# Check Python installation and version
check_python() {
    log "=== Checking Python Installation ==="
    
    local python_cmd=""
    local python_version=""
    
    # Try different Python commands
    for cmd in python3 python; do
        if command -v "$cmd" >/dev/null 2>&1; then
            python_cmd="$cmd"
            python_version=$($cmd --version 2>&1 | grep -o '[0-9]\+\.[0-9]\+\.[0-9]\+' | head -1)
            break
        fi
    done
    
    if [[ -z "$python_cmd" ]]; then
        error "Python not found"
        return 1
    fi
    
    info "Found Python: $python_cmd (version $python_version)"
    
    # Check version
    if version_ge "$python_version" "$MIN_PYTHON_VERSION"; then
        success "Python version $python_version meets minimum requirement ($MIN_PYTHON_VERSION)"
        echo "$python_cmd" > "$LOG_DIR/python_cmd.txt"
        return 0
    else
        error "Python version $python_version is too old (minimum: $MIN_PYTHON_VERSION)"
        return 1
    fi
}

# Install Python on different systems
install_python() {
    log "=== Installing Python ==="
    
    local os_type=$(detect_os)
    
    case "$os_type" in
        "ubuntu"|"debian")
            info "Installing Python on Ubuntu/Debian..."
            sudo apt-get update
            sudo apt-get install -y python3 python3-pip python3-venv python3-dev
            ;;
        "centos"|"rhel"|"fedora")
            info "Installing Python on CentOS/RHEL/Fedora..."
            if command -v dnf >/dev/null 2>&1; then
                sudo dnf install -y python3 python3-pip python3-devel
            else
                sudo yum install -y python3 python3-pip python3-devel
            fi
            ;;
        "arch"|"manjaro")
            info "Installing Python on Arch/Manjaro..."
            sudo pacman -S python python-pip
            ;;
        "macos")
            info "Installing Python on macOS..."
            if command -v brew >/dev/null 2>&1; then
                brew install python3
            else
                error "Homebrew not found. Please install Homebrew first or install Python manually."
                return 1
            fi
            ;;
        *)
            error "Unsupported OS for automatic Python installation: $os_type"
            info "Please install Python 3.7+ manually"
            return 1
            ;;
    esac
    
    # Verify installation
    if check_python; then
        success "Python installed successfully"
        return 0
    else
        error "Python installation failed"
        return 1
    fi
}

# Check basic system dependencies
check_system_dependencies() {
    log "=== Checking System Dependencies ==="
    
    local missing_deps=()
    
    # Check basic tools
    local required_tools=("make" "git" "gcc" "g++" "cmake" "flex" "bison")
    
    for tool in "${required_tools[@]}"; do
        if ! command -v "$tool" >/dev/null 2>&1; then
            missing_deps+=("$tool")
            error "Required tool not found: $tool"
        else
            local version=""
            case "$tool" in
                "make")
                    version=$(make --version | head -1 | grep -o '[0-9]\+\.[0-9]\+' | head -1)
                    if version_ge "$version" "$MIN_MAKE_VERSION"; then
                        success "Found $tool: version $version"
                    else
                        error "$tool version $version is too old (minimum: $MIN_MAKE_VERSION)"
                        missing_deps+=("$tool")
                    fi
                    ;;
                "git")
                    version=$(git --version | grep -o '[0-9]\+\.[0-9]\+\.[0-9]\+' | head -1)
                    if version_ge "$version" "$MIN_GIT_VERSION"; then
                        success "Found $tool: version $version"
                    else
                        error "$tool version $version is too old (minimum: $MIN_GIT_VERSION)"
                        missing_deps+=("$tool")
                    fi
                    ;;
                *)
                    success "Found $tool"
                    ;;
            esac
        fi
    done
    
    # Check additional libraries
    local required_libs=("zlib" "openssl")
    
    for lib in "${required_libs[@]}"; do
        case "$lib" in
            "zlib")
                if ! ldconfig -p | grep -q "libz\.so"; then
                    missing_deps+=("zlib1g-dev")
                    error "Required library not found: zlib"
                else
                    success "Found library: zlib"
                fi
                ;;
            "openssl")
                if ! ldconfig -p | grep -q "libssl\.so"; then
                    missing_deps+=("libssl-dev")
                    error "Required library not found: openssl"
                else
                    success "Found library: openssl"
                fi
                ;;
        esac
    done
    
    if [[ ${#missing_deps[@]} -eq 0 ]]; then
        success "All system dependencies are satisfied"
        return 0
    else
        error "Missing dependencies: ${missing_deps[*]}"
        return 1
    fi
}

# Install system dependencies
install_system_dependencies() {
    log "=== Installing System Dependencies ==="
    
    local os_type=$(detect_os)
    
    case "$os_type" in
        "ubuntu"|"debian")
            info "Installing system dependencies on Ubuntu/Debian..."
            sudo apt-get update
            sudo apt-get install -y \
                build-essential \
                make \
                git \
                cmake \
                flex \
                bison \
                zlib1g-dev \
                libssl-dev \
                pkg-config \
                autotools-dev \
                autoconf \
                automake \
                libtool
            ;;
        "centos"|"rhel"|"fedora")
            info "Installing system dependencies on CentOS/RHEL/Fedora..."
            if command -v dnf >/dev/null 2>&1; then
                sudo dnf groupinstall -y "Development Tools"
                sudo dnf install -y \
                    make \
                    git \
                    cmake \
                    flex \
                    bison \
                    zlib-devel \
                    openssl-devel \
                    pkgconfig \
                    autoconf \
                    automake \
                    libtool
            else
                sudo yum groupinstall -y "Development Tools"
                sudo yum install -y \
                    make \
                    git \
                    cmake \
                    flex \
                    bison \
                    zlib-devel \
                    openssl-devel \
                    pkgconfig \
                    autoconf \
                    automake \
                    libtool
            fi
            ;;
        "arch"|"manjaro")
            info "Installing system dependencies on Arch/Manjaro..."
            sudo pacman -S --needed \
                base-devel \
                make \
                git \
                cmake \
                flex \
                bison \
                zlib \
                openssl \
                pkg-config \
                autoconf \
                automake \
                libtool
            ;;
        "macos")
            info "Installing system dependencies on macOS..."
            if command -v brew >/dev/null 2>&1; then
                brew install \
                    make \
                    git \
                    cmake \
                    flex \
                    bison \
                    zlib \
                    openssl \
                    pkg-config \
                    autoconf \
                    automake \
                    libtool
            else
                error "Homebrew not found. Please install Homebrew first."
                return 1
            fi
            ;;
        *)
            error "Unsupported OS for automatic dependency installation: $os_type"
            info "Please install the following dependencies manually:"
            info "  - build-essential (gcc, g++, make)"
            info "  - git, cmake, flex, bison"
            info "  - zlib, openssl development libraries"
            info "  - autotools (autoconf, automake, libtool)"
            return 1
            ;;
    esac
    
    # Verify installation
    if check_system_dependencies; then
        success "System dependencies installed successfully"
        return 0
    else
        error "System dependencies installation failed"
        return 1
    fi
}

# Check EDA tools
check_eda_tools() {
    log "=== Checking EDA Tools ==="
    
    local found_tools=()
    local missing_tools=()
    
    # Common EDA tools
    local eda_tools=(
        "iverilog:Icarus Verilog"
        "verilator:Verilator"
        "yosys:Yosys"
        "ghdl:GHDL"
        "gtkwave:GTKWave"
    )
    
    for tool_info in "${eda_tools[@]}"; do
        local tool_cmd=$(echo "$tool_info" | cut -d':' -f1)
        local tool_name=$(echo "$tool_info" | cut -d':' -f2)
        
        if command -v "$tool_cmd" >/dev/null 2>&1; then
            local version=$($tool_cmd --version 2>/dev/null | head -1 || echo "unknown")
            found_tools+=("$tool_name")
            success "Found $tool_name: $version"
        else
            missing_tools+=("$tool_name")
            warning "Optional EDA tool not found: $tool_name"
        fi
    done
    
    info "Found EDA tools: ${found_tools[*]:-none}"
    if [[ ${#missing_tools[@]} -gt 0 ]]; then
        info "Missing EDA tools: ${missing_tools[*]}"
        info "These tools are optional but recommended for full functionality"
    fi
    
    return 0
}

# Install basic EDA tools
install_eda_tools() {
    log "=== Installing Basic EDA Tools ==="
    
    local os_type=$(detect_os)
    
    case "$os_type" in
        "ubuntu"|"debian")
            info "Installing EDA tools on Ubuntu/Debian..."
            sudo apt-get update
            sudo apt-get install -y \
                iverilog \
                verilator \
                gtkwave
            
            # Try to install yosys and ghdl if available
            sudo apt-get install -y yosys ghdl 2>/dev/null || warning "Some EDA tools not available in repositories"
            ;;
        "centos"|"rhel"|"fedora")
            info "Installing EDA tools on CentOS/RHEL/Fedora..."
            if command -v dnf >/dev/null 2>&1; then
                sudo dnf install -y iverilog verilator gtkwave 2>/dev/null || warning "Some EDA tools not available in repositories"
            else
                sudo yum install -y iverilog verilator gtkwave 2>/dev/null || warning "Some EDA tools not available in repositories"
            fi
            ;;
        "arch"|"manjaro")
            info "Installing EDA tools on Arch/Manjaro..."
            sudo pacman -S --needed iverilog verilator gtkwave 2>/dev/null || warning "Some EDA tools not available in repositories"
            ;;
        "macos")
            info "Installing EDA tools on macOS..."
            if command -v brew >/dev/null 2>&1; then
                brew install iverilog verilator gtkwave
            else
                error "Homebrew not found."
                return 1
            fi
            ;;
        *)
            warning "Automatic EDA tools installation not supported on: $os_type"
            info "Please install EDA tools manually if needed"
            ;;
    esac
    
    check_eda_tools
    return 0
}

# Check MFlowGen submodule
check_mflowgen_submodule() {
    log "=== Checking MFlowGen Submodule ==="
    
    if [[ ! -d "$MFLOWGEN_DIR" ]]; then
        error "MFlowGen directory not found: $MFLOWGEN_DIR"
        return 1
    fi
    
    # Check if submodule is initialized
    if [[ ! -f "$MFLOWGEN_DIR/setup.py" ]]; then
        warning "MFlowGen submodule not initialized"
        info "Initializing MFlowGen submodule..."
        
        cd "$PROJECT_ROOT"
        if git submodule update --init --recursive tools/mflowgen; then
            success "MFlowGen submodule initialized successfully"
        else
            error "Failed to initialize MFlowGen submodule"
            return 1
        fi
    else
        success "MFlowGen submodule already initialized"
    fi
    
    # Check MFlowGen version
    if [[ -f "$MFLOWGEN_DIR/mflowgen/version.py" ]]; then
        local version=$(grep -o '__version__ = .*' "$MFLOWGEN_DIR/mflowgen/version.py" | cut -d'"' -f2)
        info "MFlowGen version: $version"
    fi
    
    return 0
}

# Install MFlowGen Python package
install_mflowgen() {
    log "=== Installing MFlowGen ==="
    
    # Check Python first
    if ! check_python; then
        if [[ "$INSTALL_PYTHON" == "true" ]]; then
            install_python || return 1
        else
            error "Python installation required but not enabled"
            return 1
        fi
    fi
    
    local python_cmd=$(cat "$LOG_DIR/python_cmd.txt" 2>/dev/null || echo "python3")
    
    # Create virtual environment for MFlowGen
    local venv_dir="$PROJECT_ROOT/mflowgen-venv"
    info "Creating Python virtual environment: $venv_dir"
    
    $python_cmd -m venv "$venv_dir" || {
        error "Failed to create virtual environment"
        return 1
    }
    
    # Activate virtual environment
    source "$venv_dir/bin/activate"
    
    # Upgrade pip
    pip install --upgrade pip
    
    # Install MFlowGen in development mode
    cd "$MFLOWGEN_DIR"
    
    info "Installing MFlowGen dependencies..."
    pip install -r requirements/dev.txt
    
    info "Installing MFlowGen in development mode..."
    pip install -e .
    
    # Verify installation
    if mflowgen --help >/dev/null 2>&1; then
        success "MFlowGen installed successfully"
        
        # Save virtual environment path
        echo "$venv_dir" > "$LOG_DIR/venv_path.txt"
        
        # Create activation script
        cat > "$PROJECT_ROOT/activate_mflowgen.sh" << 'EOF'
#!/bin/bash
# MFlowGen Environment Activation Script
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
VENV_PATH="$SCRIPT_DIR/mflowgen-venv"

if [[ -f "$VENV_PATH/bin/activate" ]]; then
    source "$VENV_PATH/bin/activate"
    echo "MFlowGen environment activated"
    echo "Use 'deactivate' to exit the environment"
else
    echo "Error: MFlowGen virtual environment not found"
    exit 1
fi
EOF
        chmod +x "$PROJECT_ROOT/activate_mflowgen.sh"
        
        info "Created activation script: $PROJECT_ROOT/activate_mflowgen.sh"
        return 0
    else
        error "MFlowGen installation verification failed"
        return 1
    fi
}

# Run comprehensive environment check
check_environment() {
    log "=== Running Environment Check ==="
    
    local check_failed=0
    
    # Check submodule
    check_mflowgen_submodule || ((check_failed++))
    
    # Check Python
    check_python || ((check_failed++))
    
    # Check system dependencies
    check_system_dependencies || ((check_failed++))
    
    # Check EDA tools (optional)
    check_eda_tools
    
    # Check if MFlowGen is already installed
    if [[ -f "$PROJECT_ROOT/mflowgen-venv/bin/activate" ]]; then
        info "Checking existing MFlowGen installation..."
        source "$PROJECT_ROOT/mflowgen-venv/bin/activate" 2>/dev/null || true
        if command -v mflowgen >/dev/null 2>&1; then
            local version=$(mflowgen --version 2>/dev/null || echo "unknown")
            success "MFlowGen already installed: $version"
        else
            warning "MFlowGen virtual environment exists but mflowgen command not found"
            ((check_failed++))
        fi
        deactivate 2>/dev/null || true
    else
        warning "MFlowGen not installed"
        ((check_failed++))
    fi
    
    return $check_failed
}

# Show environment status
show_environment_status() {
    echo ""
    echo "==================================================================="
    echo "MFlowGen Environment Status"
    echo "==================================================================="
    
    # OS Information
    local os_type=$(detect_os)
    echo "Operating System: $os_type"
    
    # Python
    if check_python >/dev/null 2>&1; then
        local python_cmd=$(cat "$LOG_DIR/python_cmd.txt" 2>/dev/null || echo "python3")
        local python_version=$($python_cmd --version 2>&1 | grep -o '[0-9]\+\.[0-9]\+\.[0-9]\+')
        echo "✅ Python: $python_version"
    else
        echo "❌ Python: Not installed or version too old"
    fi
    
    # System Dependencies
    if check_system_dependencies >/dev/null 2>&1; then
        echo "✅ System Dependencies: All satisfied"
    else
        echo "❌ System Dependencies: Missing dependencies"
    fi
    
    # MFlowGen
    if [[ -f "$PROJECT_ROOT/mflowgen-venv/bin/activate" ]]; then
        source "$PROJECT_ROOT/mflowgen-venv/bin/activate" 2>/dev/null || true
        if command -v mflowgen >/dev/null 2>&1; then
            local version=$(mflowgen --version 2>/dev/null || echo "unknown")
            echo "✅ MFlowGen: $version"
        else
            echo "❌ MFlowGen: Installation corrupted"
        fi
        deactivate 2>/dev/null || true
    else
        echo "❌ MFlowGen: Not installed"
    fi
    
    # EDA Tools
    echo "EDA Tools:"
    for tool in iverilog verilator yosys ghdl gtkwave; do
        if command -v "$tool" >/dev/null 2>&1; then
            local version=$($tool --version 2>/dev/null | head -1 || echo "unknown")
            echo "  ✅ $tool: $version"
        else
            echo "  ❌ $tool: Not installed"
        fi
    done
    
    echo "==================================================================="
}

# Help function
show_help() {
    echo "MFlowGen Installation and Environment Setup Script"
    echo ""
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "This script intelligently detects and installs only the missing dependencies"
    echo "required for MFlowGen. It checks the environment first and only installs"
    echo "components that are missing or don't meet requirements."
    echo ""
    echo "Options:"
    echo "  -h, --help              Show this help message"
    echo "  --check                 Check environment only (no installation)"
    echo "  --install-python        Allow Python installation if needed"
    echo "  --install-system-deps   Allow system dependencies installation if needed"
    echo "  --install-eda-tools     Install basic EDA tools (always optional)"
    echo "  --install-all           Allow installation of all components if needed"
    echo "  --force                 Force reinstallation even if already installed"
    echo "  --debug                 Enable debug logging"
    echo ""
    echo "Smart Installation Behavior:"
    echo "  - Without options: Automatically installs only missing required components"
    echo "  - With specific options: Only allows installation of explicitly enabled components"
    echo "  - Already satisfied components are skipped (unless --force is used)"
    echo "  - EDA tools are only installed when explicitly requested"
    echo ""
    echo "Examples:"
    echo "  $0                          # Smart install - only missing components"
    echo "  $0 --check                 # Check environment status only"
    echo "  $0 --install-all           # Allow installation of all missing components"
    echo "  $0 --install-system-deps   # Only allow system dependencies if missing"
    echo "  $0 --install-eda-tools     # Install EDA tools (in addition to missing components)"
    echo "  $0 --force                 # Force reinstall MFlowGen even if present"
    echo ""
    echo "Required Components:"
    echo "  - Python 3.7+"
    echo "  - Make 3.81+"
    echo "  - Git 2.0+"
    echo "  - GCC/G++ (build tools)"
    echo "  - CMake, Flex, Bison"
    echo "  - Development libraries (zlib, openssl)"
    echo "  - MFlowGen Python package"
    echo ""
    echo "Optional EDA Tools:"
    echo "  - Icarus Verilog (for Verilog simulation)"
    echo "  - Verilator (for fast Verilog simulation)"
    echo "  - Yosys (for synthesis)"
    echo "  - GHDL (for VHDL simulation)"
    echo "  - GTKWave (for waveform viewing)"
}

# Main installation function
main() {
    local start_time=$(date +%s)
    
    log "==================================================================="
    log "MFlowGen Installation Session Started"
    log "Session ID: $TIMESTAMP"
    log "Project Root: $PROJECT_ROOT"
    log "MFlowGen Directory: $MFLOWGEN_DIR"
    log "==================================================================="
    
    # Run environment check first to determine what needs to be installed
    log "Analyzing environment to determine missing components..."
    
    # Check individual components
    local need_python=false
    local need_system_deps=false
    local need_mflowgen=false
    local install_eda_tools_requested=false
    
    # Check MFlowGen submodule first
    if ! check_mflowgen_submodule >/dev/null 2>&1; then
        error "MFlowGen submodule check failed - this is required"
        exit 1
    fi
    
    # Check Python
    if ! check_python >/dev/null 2>&1; then
        need_python=true
        warning "Python installation required"
    else
        success "Python requirements satisfied"
    fi
    
    # Check system dependencies
    if ! check_system_dependencies >/dev/null 2>&1; then
        need_system_deps=true
        warning "System dependencies installation required"
    else
        success "System dependencies satisfied"
    fi
    
    # Check MFlowGen installation
    local mflowgen_installed=false
    if [[ -f "$PROJECT_ROOT/mflowgen-venv/bin/activate" ]]; then
        source "$PROJECT_ROOT/mflowgen-venv/bin/activate" 2>/dev/null || true
        if command -v mflowgen >/dev/null 2>&1; then
            local version=$(mflowgen --version 2>/dev/null || echo "unknown")
            success "MFlowGen already installed: $version"
            mflowgen_installed=true
        else
            warning "MFlowGen virtual environment exists but mflowgen command not found"
            need_mflowgen=true
        fi
        deactivate 2>/dev/null || true
    else
        warning "MFlowGen not installed"
        need_mflowgen=true
    fi
    
    # Check if force install is requested
    if [[ "$FORCE_INSTALL" == "true" ]]; then
        log "Force installation requested - will reinstall MFlowGen"
        need_mflowgen=true
    fi
    
    # Check if EDA tools installation was specifically requested
    if [[ "$INSTALL_EDA_TOOLS" == "true" ]]; then
        install_eda_tools_requested=true
    fi
    
    # If this is check-only mode, show status and exit
    if [[ "$CHECK_ONLY" == "true" ]]; then
        check_eda_tools  # Show EDA tools status
        show_environment_status
        if [[ "$need_python" == "false" ]] && [[ "$need_system_deps" == "false" ]] && [[ "$need_mflowgen" == "false" ]]; then
            success "Environment check passed - all required components are satisfied"
            exit 0
        else
            error "Environment check failed - missing components detected"
            exit 1
        fi
    fi
    
    # Smart installation logic - only install what's needed
    local install_failed=0
    local components_installed=0
    
    log "==================================================================="
    log "Smart Installation Plan:"
    if [[ "$need_python" == "true" ]]; then
        log "  ➤ Python installation required"
    fi
    if [[ "$need_system_deps" == "true" ]]; then
        log "  ➤ System dependencies installation required"
    fi
    if [[ "$need_mflowgen" == "true" ]]; then
        log "  ➤ MFlowGen installation required"
    fi
    if [[ "$install_eda_tools_requested" == "true" ]]; then
        log "  ➤ EDA tools installation requested"
    fi
    if [[ "$need_python" == "false" ]] && [[ "$need_system_deps" == "false" ]] && [[ "$need_mflowgen" == "false" ]] && [[ "$install_eda_tools_requested" == "false" ]]; then
        log "  ➤ No installations needed - environment is complete"
    fi
    log "==================================================================="
    
    # Install Python if needed and allowed
    if [[ "$need_python" == "true" ]]; then
        if [[ "$INSTALL_PYTHON" == "true" ]] || [[ "$INSTALL_PYTHON" == "false" && "$INSTALL_SYSTEM_DEPS" == "false" && "$INSTALL_EDA_TOOLS" == "false" ]]; then
            log "Installing Python..."
            if install_python; then
                ((components_installed++))
            else
                ((install_failed++))
            fi
        else
            error "Python installation required but not enabled with --install-python"
            ((install_failed++))
        fi
    fi
    
    # Install system dependencies if needed and allowed
    if [[ "$need_system_deps" == "true" ]]; then
        if [[ "$INSTALL_SYSTEM_DEPS" == "true" ]] || [[ "$INSTALL_PYTHON" == "false" && "$INSTALL_SYSTEM_DEPS" == "false" && "$INSTALL_EDA_TOOLS" == "false" ]]; then
            log "Installing system dependencies..."
            if install_system_dependencies; then
                ((components_installed++))
            else
                ((install_failed++))
            fi
        else
            error "System dependencies installation required but not enabled with --install-system-deps"
            ((install_failed++))
        fi
    fi
    
    # Install EDA tools if specifically requested
    if [[ "$install_eda_tools_requested" == "true" ]]; then
        log "Installing EDA tools..."
        if install_eda_tools; then
            ((components_installed++))
        else
            ((install_failed++))
        fi
    fi
    
    # Install MFlowGen if needed
    if [[ "$need_mflowgen" == "true" ]]; then
        log "Installing MFlowGen..."
        if install_mflowgen; then
            ((components_installed++))
        else
            ((install_failed++))
        fi
    fi
    
    # Final environment check
    local final_check_failures=0
    check_environment >/dev/null 2>&1 || final_check_failures=$?
    
    # Generate summary
    local end_time=$(date +%s)
    local duration=$((end_time - start_time))
    local minutes=$((duration / 60))
    local seconds=$((duration % 60))
    
    log "==================================================================="
    log "Installation Summary"
    log "==================================================================="
    log "Total time: ${minutes}m ${seconds}s"
    log "Components installed: $components_installed"
    
    if [[ $components_installed -eq 0 ]] && [[ $install_failed -eq 0 ]]; then
        success "No installation required - environment was already complete"
        log ""
        log "To use MFlowGen, run:"
        log "  source $PROJECT_ROOT/activate_mflowgen.sh"
        log "  mflowgen --help"
        log ""
        show_environment_status
        exit 0
    elif [[ $install_failed -eq 0 ]] && [[ $final_check_failures -eq 0 ]]; then
        success "All required components installed successfully"
        log ""
        log "To use MFlowGen, run:"
        log "  source $PROJECT_ROOT/activate_mflowgen.sh"
        log "  mflowgen --help"
        log ""
        show_environment_status
        exit 0
    else
        error "Installation completed with issues"
        error "Install failures: $install_failed"
        error "Check failures: $final_check_failures"
        show_environment_status
        exit 1
    fi
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
        --install-python)
            INSTALL_PYTHON=true
            shift
            ;;
        --install-system-deps)
            INSTALL_SYSTEM_DEPS=true
            shift
            ;;
        --install-eda-tools)
            INSTALL_EDA_TOOLS=true
            shift
            ;;
        --install-all)
            INSTALL_PYTHON=true
            INSTALL_SYSTEM_DEPS=true
            INSTALL_EDA_TOOLS=true
            shift
            ;;
        --force)
            FORCE_INSTALL=true
            shift
            ;;
        --debug)
            DEBUG_MODE=true
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
    main
    exit $?
fi

# Smart default: if no installation options specified, allow installation of missing components
if [[ "$INSTALL_PYTHON" == "false" ]] && [[ "$INSTALL_SYSTEM_DEPS" == "false" ]] && [[ "$INSTALL_EDA_TOOLS" == "false" ]]; then
    info "No specific installation options specified, enabling smart installation mode"
    info "Will automatically install only missing required components"
    # Note: INSTALL_EDA_TOOLS remains false unless explicitly requested
    # The main() function will handle smart installation based on environment check
fi

# Run main function
main
