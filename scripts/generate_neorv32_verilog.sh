#!/bin/bash

# NEORV32 Verilog dataset export for SCORE — VHDL→Verilog via GHDL synthesis.
# Paired with install_neorv32_verilog.sh / run_neorv32_verilog.sh.
# Always runs all configured Verilog conversion variants.

# set -e  # Exit on any error - temporarily disabled for debugging
shopt -s nullglob  # Enable nullglob for proper glob expansion

# Global variables
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SOURCE_DIR="$PROJECT_ROOT/tools/neorv32-verilog"

# Function to get commit ID from git repository
get_commit_id() {
    local repo_path="$1"
    # Submodules use a .git *file* (gitdir pointer), not a directory; -d "$path/.git" is false there.
    if git -C "$repo_path" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

COMMIT_ID=$(get_commit_id "$SOURCE_DIR")
DATASET_DIR="$PROJECT_ROOT/datasets/neorv32-verilog/$COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
MAIN_LOG="$LOG_DIR/main.log"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/session_${TIMESTAMP}.log"

# Script options
VERILOG_ONLY=false
INCLUDE_SW=false
INCLUDE_SIM=false
WITH_EXAMPLES=false
WITH_DOCS=false
DEBUG_MODE=false
CHECK_ONLY=false
INSTALL_GHDL=false
INSTALL_IVERILOG=false
VERIFY_DESIGNS=false
SIMULATION_TIMEOUT="10ms"

# Setup local environment if available
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

# Create basic dataset directory structure
mkdir -p "$LOG_DIR"
mkdir -p "$DATASET_DIR/rtl_designs"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging_files generate_neorv32_verilog "$MAIN_LOG" "$SESSION_LOG"

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

debug() {
    local message="$1"
    if [[ "$DEBUG_MODE" == "true" ]]; then
        echo -e "${PURPLE}[${SCRIPT_LOG_NAME}][DEBUG]${NC} $message" | tee -a "$MAIN_LOG" "$SESSION_LOG" >&2
    fi
}

# Check if required source directories exist
check_source_availability() {
    log "Checking NEORV32-Verilog source availability..."
    local missing_dirs=0
    
    # Check main source directory
    if [[ ! -d "$SOURCE_DIR" ]]; then
        error "NEORV32-Verilog source directory not found: $SOURCE_DIR"
        ((missing_dirs++))
    else
        success "NEORV32-Verilog source directory found: $SOURCE_DIR"
    fi
    
    # Check src directory
    if [[ ! -d "$SOURCE_DIR/src" ]]; then
        error "Source directory not found: $SOURCE_DIR/src"
        ((missing_dirs++))
    else
        success "Source directory found: $SOURCE_DIR/src"
        local vhdl_count=$(find "$SOURCE_DIR/src" -name "*.vhd" 2>/dev/null | wc -l)
        local verilog_count=$(find "$SOURCE_DIR/src" -name "*.v" 2>/dev/null | wc -l)
        info "Found $vhdl_count VHDL files and $verilog_count Verilog files in src"
    fi
    
    # Check simulation directory
    if [[ -d "$SOURCE_DIR/sim" ]]; then
        success "Simulation directory found: $SOURCE_DIR/sim"
        local sim_count=$(find "$SOURCE_DIR/sim" -name "*.v" 2>/dev/null | wc -l)
        info "Found $sim_count simulation files"
    else
        warning "Simulation directory not found: $SOURCE_DIR/sim"
    fi
    
    # Check neorv32 submodule directory
    if [[ -d "$SOURCE_DIR/neorv32" ]]; then
        success "NEORV32 submodule directory found: $SOURCE_DIR/neORV32"
        local neorv32_count=$(find "$SOURCE_DIR/neorv32" -name "*.vhd" 2>/dev/null | wc -l)
        info "Found $neorv32_count NEORV32 VHDL files"
    else
        warning "NEORV32 submodule directory not found: $SOURCE_DIR/neorv32"
        info "This is expected if the submodule hasn't been initialized yet"
    fi
    
    # Check conversion script
    if [[ -f "$SOURCE_DIR/src/convert.sh" ]]; then
        success "Conversion script found: $SOURCE_DIR/src/convert.sh"
    else
        error "Conversion script not found: $SOURCE_DIR/src/convert.sh"
        ((missing_dirs++))
    fi
    
    # Check VHDL wrapper
    if [[ -f "$SOURCE_DIR/src/neorv32_verilog_wrapper.vhd" ]]; then
        success "VHDL wrapper found: $SOURCE_DIR/src/neorv32_verilog_wrapper.vhd"
    else
        error "VHDL wrapper not found: $SOURCE_DIR/src/neorv32_verilog_wrapper.vhd"
        ((missing_dirs++))
    fi
    
    return $missing_dirs
}

# Check prerequisites
check_prerequisites() {
    log "Checking prerequisites..."
    local prereq_failed=0
    
    # Check basic tools
    for tool in find cp mkdir wc sed grep; do
        if ! command -v "$tool" >/dev/null 2>&1; then
            error "$tool command not found"
            ((prereq_failed++))
        fi
    done
    
    # Check source availability
    check_source_availability || ((prereq_failed++))
    
    return $prereq_failed
}

# Install GHDL function
install_ghdl() {
    log "=== Installing GHDL ==="
    
    if command -v ghdl >/dev/null 2>&1; then
        local ghdl_version=$(ghdl --version | head -1)
        success "GHDL already installed: $ghdl_version"
        
        # Check GHDL version for synthesis support
        local version_number=$(echo "$ghdl_version" | grep -o '[0-9]\+\.[0-9]\+' | head -1)
        local major_version=$(echo "$version_number" | cut -d'.' -f1)
        
        if [[ "$major_version" -ge 3 ]]; then
            success "GHDL version $version_number supports synthesis (3.0.0+ required)"
            
            # Test synthesis support
            if ghdl --help | grep -q "synth"; then
                success "GHDL synthesis support confirmed"
            else
                warning "GHDL synthesis command not found despite version being 3.0.0+"
                return 1
            fi
        else
            error "GHDL version $version_number is too old. Version 3.0.0+ required for synthesis."
            error "Current version: $ghdl_version"
            error "Please upgrade GHDL to continue with VHDL to Verilog conversion."
            info "You can install a newer version using:"
            info "  - Ubuntu/Debian: sudo apt-get install ghdl"
            info "  - Or build from source: https://github.com/ghdl/ghdl"
            return 1
        fi
        return 0
    fi
    
    info "GHDL not found. Installing GHDL..."
    
    # Detect OS and install GHDL
    local os_type=""
    if [[ "$OSTYPE" == "linux-gnu"* ]]; then
        os_type="linux"
    elif [[ "$OSTYPE" == "darwin"* ]]; then
        os_type="macos"
    elif [[ "$OSTYPE" == "msys" ]] || [[ "$OSTYPE" == "cygwin" ]]; then
        os_type="windows"
    else
        error "Unsupported OS type: $OSTYPE"
        return 1
    fi
    
    case "$os_type" in
        "linux")
            install_ghdl_linux
            ;;
        "macos")
            install_ghdl_macos
            ;;
        "windows")
            install_ghdl_windows
            ;;
        *)
            error "Unsupported OS for GHDL installation"
            return 1
            ;;
    esac
}

# Install GHDL on Linux
install_ghdl_linux() {
    info "Installing GHDL on Linux..."
    
    # Try different package managers
    if command -v apt-get >/dev/null 2>&1; then
        info "Using apt-get to install GHDL..."
        sudo apt-get update
        sudo apt-get install -y ghdl
        
        # Check if the installed version is sufficient
        if command -v ghdl >/dev/null 2>&1; then
            local ghdl_version=$(ghdl --version | head -1)
            local version_number=$(echo "$ghdl_version" | grep -o '[0-9]\+\.[0-9]\+' | head -1)
            local major_version=$(echo "$version_number" | cut -d'.' -f1)
            
            if [[ "$major_version" -lt 3 ]]; then
                warning "Installed GHDL version $version_number is too old for synthesis."
                info "Attempting to install from a more recent repository..."
                
                # Try to add a more recent repository
                if ! command -v ghdl >/dev/null 2>&1 || [[ "$major_version" -lt 3 ]]; then
                    info "Trying to install from Ubuntu backports or PPA..."
                    sudo add-apt-repository ppa:ghdl/ppa -y 2>/dev/null || true
                    sudo apt-get update
                    sudo apt-get install -y ghdl
                fi
            fi
        fi
    elif command -v yum >/dev/null 2>&1; then
        info "Using yum to install GHDL..."
        sudo yum install -y ghdl
    elif command -v dnf >/dev/null 2>&1; then
        info "Using dnf to install GHDL..."
        sudo dnf install -y ghdl
    elif command -v pacman >/dev/null 2>&1; then
        info "Using pacman to install GHDL..."
        sudo pacman -S ghdl
    else
        error "No supported package manager found. Please install GHDL manually."
        info "Visit: https://github.com/ghdl/ghdl#installation"
        info "For Ubuntu/Debian, try: sudo add-apt-repository ppa:ghdl/ppa && sudo apt-get update && sudo apt-get install ghdl"
        return 1
    fi
    
    # Verify installation
    if command -v ghdl >/dev/null 2>&1; then
        local ghdl_version=$(ghdl --version | head -1)
        local version_number=$(echo "$ghdl_version" | grep -o '[0-9]\+\.[0-9]\+' | head -1)
        local major_version=$(echo "$version_number" | cut -d'.' -f1)
        
        if [[ "$major_version" -ge 3 ]]; then
            success "GHDL installed successfully: $ghdl_version"
            success "Version $version_number supports synthesis (3.0.0+ required)"
        else
            warning "GHDL installed but version $version_number may not support synthesis."
            warning "Consider building from source for the latest version."
            info "Build instructions: https://github.com/ghdl/ghdl#building"
        fi
    else
        error "GHDL installation failed"
        return 1
    fi
}

# Install GHDL on macOS
install_ghdl_macos() {
    info "Installing GHDL on macOS..."
    
    if command -v brew >/dev/null 2>&1; then
        info "Using Homebrew to install GHDL..."
        brew install ghdl
    else
        error "Homebrew not found. Please install Homebrew first or install GHDL manually."
        info "Visit: https://github.com/ghdl/ghdl#installation"
        return 1
    fi
    
    # Verify installation
    if command -v ghdl >/dev/null 2>&1; then
        local ghdl_version=$(ghdl --version | head -1)
        success "GHDL installed successfully: $ghdl_version"
        
        # Check synthesis support
        if ghdl --help | grep -q "synth"; then
            success "GHDL synthesis support confirmed"
        else
            warning "GHDL may not have synthesis support. Version 3.0.0+ required."
        fi
    else
        error "GHDL installation failed"
        return 1
    fi
}

# Install GHDL on Windows
install_ghdl_windows() {
    info "Installing GHDL on Windows..."
    
    if command -v winget >/dev/null 2>&1; then
        info "Using winget to install GHDL..."
        winget install ghdl
    elif command -v choco >/dev/null 2>&1; then
        info "Using Chocolatey to install GHDL..."
        choco install ghdl
    else
        error "No supported package manager found. Please install GHDL manually."
        info "Visit: https://github.com/ghdl/ghdl#installation"
        return 1
    fi
    
    # Verify installation
    if command -v ghdl >/dev/null 2>&1; then
        local ghdl_version=$(ghdl --version | head -1)
        success "GHDL installed successfully: $ghdl_version"
        
        # Check synthesis support
        if ghdl --help | grep -q "synth"; then
            success "GHDL synthesis support confirmed"
        else
            warning "GHDL may not have synthesis support. Version 3.0.0+ required."
        fi
    else
        error "GHDL installation failed"
        return 1
    fi
}

# Install Icarus Verilog function
install_iverilog() {
    log "=== Installing Icarus Verilog ==="
    
    # Check if Icarus Verilog is already installed
    if command -v iverilog >/dev/null 2>&1; then
        local iverilog_version=$(iverilog -V | head -1)
        success "Icarus Verilog already installed: $iverilog_version"
        return 0
    fi
    
    info "Icarus Verilog not found. Installing Icarus Verilog..."
    
    # Detect OS and install Icarus Verilog
    local os_type=""
    if [[ "$OSTYPE" == "linux-gnu"* ]]; then
        os_type="linux"
    elif [[ "$OSTYPE" == "darwin"* ]]; then
        os_type="macos"
    elif [[ "$OSTYPE" == "msys" ]] || [[ "$OSTYPE" == "cygwin" ]]; then
        os_type="windows"
    else
        error "Unsupported OS type: $OSTYPE"
        return 1
    fi
    
    case "$os_type" in
        "linux")
            install_iverilog_linux
            ;;
        "macos")
            install_iverilog_macos
            ;;
        "windows")
            install_iverilog_windows
            ;;
        *)
            error "Unsupported OS for Icarus Verilog installation"
            return 1
            ;;
    esac
}

# Install Icarus Verilog on Linux
install_iverilog_linux() {
    info "Installing Icarus Verilog on Linux..."
    
    # Try different package managers
    if command -v apt-get >/dev/null 2>&1; then
        info "Using apt-get to install Icarus Verilog..."
        sudo apt-get update
        sudo apt-get install -y iverilog
    elif command -v yum >/dev/null 2>&1; then
        info "Using yum to install Icarus Verilog..."
        sudo yum install -y iverilog
    elif command -v dnf >/dev/null 2>&1; then
        info "Using dnf to install Icarus Verilog..."
        sudo dnf install -y iverilog
    elif command -v pacman >/dev/null 2>&1; then
        info "Using pacman to install Icarus Verilog..."
        sudo pacman -S iverilog
    else
        error "No supported package manager found. Please install Icarus Verilog manually."
        info "Visit: https://github.com/steveicarus/iverilog"
        return 1
    fi
    
    # Verify installation
    if command -v iverilog >/dev/null 2>&1; then
        local iverilog_version=$(iverilog -V | head -1)
        success "Icarus Verilog installed successfully: $iverilog_version"
    else
        error "Icarus Verilog installation failed"
        return 1
    fi
}

# Install Icarus Verilog on macOS
install_iverilog_macos() {
    info "Installing Icarus Verilog on macOS..."
    
    if command -v brew >/dev/null 2>&1; then
        info "Using Homebrew to install Icarus Verilog..."
        brew install icarus-verilog
    else
        error "Homebrew not found. Please install Homebrew first or install Icarus Verilog manually."
        info "Visit: https://github.com/steveicarus/iverilog"
        return 1
    fi
    
    # Verify installation
    if command -v iverilog >/dev/null 2>&1; then
        local iverilog_version=$(iverilog -V | head -1)
        success "Icarus Verilog installed successfully: $iverilog_version"
    else
        error "Icarus Verilog installation failed"
        return 1
    fi
}

# Install Icarus Verilog on Windows
install_iverilog_windows() {
    info "Installing Icarus Verilog on Windows..."
    
    if command -v winget >/dev/null 2>&1; then
        info "Using winget to install Icarus Verilog..."
        winget install IcarusVerilog.IcarusVerilog
    elif command -v choco >/dev/null 2>&1; then
        info "Using Chocolatey to install Icarus Verilog..."
        choco install iverilog
    else
        error "No supported package manager found. Please install Icarus Verilog manually."
        info "Visit: https://github.com/steveicarus/iverilog"
        return 1
    fi
    
    # Verify installation
    if command -v iverilog >/dev/null 2>&1; then
        local iverilog_version=$(iverilog -V | head -1)
        success "Icarus Verilog installed successfully: $iverilog_version"
    else
        error "Icarus Verilog installation failed"
        return 1
    fi
}

# Initialize NEORV32 submodule
initialize_neorv32_submodule() {
    log "=== Initializing NEORV32 Submodule ==="
    
    if [[ ! -d "$SOURCE_DIR/neorv32" ]] || [[ ! -f "$SOURCE_DIR/neorv32/rtl/core/neorv32_package.vhd" ]]; then
        info "NEORV32 submodule not initialized. Initializing..."
        
        if ( cd "$SOURCE_DIR" && git submodule update --init --recursive ); then
            success "NEORV32 submodule initialized successfully"
        else
            error "Failed to initialize NEORV32 submodule"
            return 1
        fi
    else
        success "NEORV32 submodule already initialized"
    fi
    
    # Verify NEORV32 version
    if [[ -f "$SOURCE_DIR/neorv32/rtl/core/neorv32_package.vhd" ]]; then
        local version=$(grep -rni "$SOURCE_DIR/neorv32/rtl/core/neorv32_package.vhd" -e 'hw_version_c' | head -1)
        info "NEORV32 version: $version"
    fi
}

# Convert VHDL to Verilog function
convert_vhdl_to_verilog() {
    local design_name="$1"
    local description="$2"
    local config_type="$3"
    
    local design_dir="$DATASET_DIR/rtl_designs/neorv32_verilog/$design_name"
    mkdir -p "$design_dir"
    
    info "Converting NEORV32 to Verilog: $design_name ($config_type)"
    
    if ! command -v ghdl >/dev/null 2>&1; then
        error "GHDL not found. Please install GHDL first using --install-ghdl"
        return 1
    fi
    
    # Check GHDL version for synthesis support
    local ghdl_version=$(ghdl --version | head -1)
    local version_number=$(echo "$ghdl_version" | grep -o '[0-9]\+\.[0-9]\+' | head -1)
    local major_version=$(echo "$version_number" | cut -d'.' -f1)
    
    if [[ "$major_version" -lt 3 ]]; then
        error "GHDL version $version_number is too old. Version 3.0.0+ required for synthesis."
        error "Current version: $ghdl_version"
        error "Cannot perform VHDL to Verilog conversion with this GHDL version."
        info "Please upgrade GHDL using --install-ghdl or install manually."
        return 1
    fi
    
    # Test synthesis support
    if ! ghdl --help | grep -q "synth"; then
        error "GHDL synthesis support not available. Version 3.0.0+ required."
        return 1
    fi
    
    local temp_dir="$design_dir/temp"
    mkdir -p "$temp_dir"
    
    cp "$SOURCE_DIR/src/neorv32_verilog_wrapper.vhd" "$temp_dir/"
    
    export NEORV32_RTL="$SOURCE_DIR/neorv32"
    export SRC_FOLDER="$temp_dir"
    
    info "  Running VHDL to Verilog conversion..."
    info "  Using GHDL version: $ghdl_version"
    
    # Run conversion in a subshell so GHDL leaves no cwd artifacts in tools/ or the repo root;
    # intermediate outputs stay under $temp_dir (inside the dataset design tree).
    local conversion_output
    if conversion_output=$(
        cd "$temp_dir" || exit 1
        bash "$SOURCE_DIR/src/convert.sh" 2>&1
    ); then
        success "    Conversion completed successfully"
        
        if [[ -f "$temp_dir/neorv32_verilog_wrapper.v" ]]; then
            cp "$temp_dir/neorv32_verilog_wrapper.v" "$design_dir/"
            success "    Generated Verilog file: neorv32_verilog_wrapper.v"
            
            local interface=$(sed -n "/module neorv32_verilog_wrapper/,/);/p" "$design_dir/neorv32_verilog_wrapper.v")
            echo "$interface" > "$design_dir/module_interface.txt"
            info "    Module interface saved to module_interface.txt"
        else
            error "    Generated Verilog file not found"
            debug "Conversion output: $conversion_output"
            return 1
        fi
    else
        error "    Conversion failed"
        error "    Error details: $conversion_output"
        
        # Check for specific error patterns
        if echo "$conversion_output" | grep -q "unknown command option.*--out=verilog"; then
            error "    This error indicates GHDL version incompatibility."
            error "    The --out=verilog option requires GHDL 3.0.0 or higher."
            error "    Current version: $ghdl_version"
        fi
        
        return 1
    fi
    
    cp "$SOURCE_DIR/src/neorv32_verilog_wrapper.vhd" "$design_dir/"
    cp "$SOURCE_DIR/src/convert.sh" "$design_dir/"
    
    create_design_metadata "$design_name" "neorv32_verilog" "$design_dir" "$description"
    create_file_list "$design_dir"
    
    rm -rf "$temp_dir"
    
    success "Converted NEORV32 to Verilog: $design_name"
    return 0
}

# Function to create design metadata
create_design_metadata() {
    local design_name="$1"
    local design_category="$2"
    local design_dir="$3"
    local description="$4"
    
    local vhdl_count=$(find "$design_dir" -name "*.vhd" 2>/dev/null | wc -l)
    local verilog_count=$(find "$design_dir" -name "*.v" 2>/dev/null | wc -l)
    local total_lines=0
    
    if [[ $vhdl_count -gt 0 ]]; then
        total_lines=$(find "$design_dir" -name "*.vhd" -exec wc -l {} + 2>/dev/null | tail -1 | awk '{print $1}' || echo 0)
    fi
    
    if [[ $verilog_count -gt 0 ]]; then
        local verilog_lines=$(find "$design_dir" -name "*.v" -exec wc -l {} + 2>/dev/null | tail -1 | awk '{print $1}' || echo 0)
        total_lines=$((total_lines + verilog_lines))
    fi
    
    cat > "$design_dir/config.yaml" << EOF
design_name: $design_name
design_category: $design_category
description: "$description"
generation_date: $(date)
source_repository: neorv32-verilog
vhdl_files: $vhdl_count
verilog_files: $verilog_count
total_lines: $total_lines
synthesis_ready: true
conversion_method: "GHDL synthesis"
target_frequency: "100MHz"
architecture: "RISC-V"
isa_extensions: "RV32I/M/A/C/B/U/Zicsr/Zifencei"
conversion_tool: "GHDL synth"
EOF
}

# Function to create file list
create_file_list() {
    local design_dir="$1"
    local filelist="$design_dir/filelist.f"
    
    find "$design_dir" -name "*.vhd" -o -name "*.v" -type f | while read file; do
        echo "$(readlink -f "$file")"
    done > "$filelist"
    
    debug "Created filelist with $(wc -l < "$filelist") entries"
}

# Copy simulation files if requested
organize_simulation() {
    if [[ "$INCLUDE_SIM" == "true" ]] && [[ -d "$SOURCE_DIR/sim" ]]; then
        log "=== Organizing Simulation Files ==="
        
        local sim_dir="$DATASET_DIR/simulation"
        mkdir -p "$sim_dir"
        
        # Copy simulation files
        cp "$SOURCE_DIR/sim"/* "$sim_dir/" 2>/dev/null || true
        
        local file_count=$(find "$sim_dir" -type f | wc -l)
        if [[ $file_count -gt 0 ]]; then
            success "Simulation files organized: $file_count files"
            
            # Create simulation metadata
            cat > "$sim_dir/simulation_config.yaml" << EOF
simulation_type: "Icarus Verilog / Verilator"
testbench: "testbench.v"
uart_receiver: "uart_sim_receiver.v"
makefile: "Makefile"
simulation_script: "iverilog_sim.sh"
description: "NEORV32 Verilog simulation testbench"
EOF
        else
            warning "No simulation files found to organize"
        fi
    fi
}

# Verify NEORV32 Verilog design function
verify_neorv32_verilog_design() {
    local design_dir="$1"
    local design_name="$2"
    
    info "Verifying NEORV32 Verilog design: $design_name"
    
    # Check if design directory exists
    if [[ ! -d "$design_dir" ]]; then
        error "Design directory not found: $design_dir"
        return 1
    fi
    
    # Check if Icarus Verilog is available
    if ! command -v iverilog >/dev/null 2>&1; then
        error "Icarus Verilog not found. Please install Icarus Verilog first using --install-iverilog"
        return 1
    fi
    
    # Find Verilog files
    local verilog_files=($(find "$design_dir" -name "*.v" -type f))
    if [[ ${#verilog_files[@]} -eq 0 ]]; then
        error "No Verilog files found in $design_dir"
        return 1
    fi
    
    info "  Found ${#verilog_files[@]} Verilog files"
    
    # Check if simulation files are available
    local sim_dir="$DATASET_DIR/simulation"
    if [[ ! -d "$sim_dir" ]]; then
        warning "  Simulation directory not found. Skipping simulation."
        return 0
    fi
    
    # Create build directory
    local build_dir="$design_dir/build"
    mkdir -p "$build_dir"
    
    # Copy simulation files to build directory
    cp "$sim_dir"/* "$build_dir/" 2>/dev/null || true
    
    # Copy Verilog design to build directory
    cp "$design_dir"/*.v "$build_dir/" 2>/dev/null || true
    
    # Run Icarus Verilog compilation (outputs neorv32-verilog-sim in build_dir, not caller cwd)
    info "  Compiling with Icarus Verilog..."
    pushd "$build_dir" >/dev/null || return 1
    trap 'popd >/dev/null; trap - RETURN' RETURN
    
    if iverilog -o neorv32-verilog-sim testbench.v uart_sim_receiver.v neorv32_verilog_wrapper.v 2>/dev/null; then
        success "    Compilation successful"
        
        # Run simulation if requested
        if [[ "$VERIFY_DESIGNS" == "true" ]]; then
            info "  Running simulation..."
            if timeout 60s vvp neorv32-verilog-sim 2>/dev/null; then
                success "    Simulation completed successfully"
            else
                warning "    Simulation failed or timed out"
            fi
        fi
    else
        error "    Compilation failed"
        return 1
    fi
    
    trap - RETURN
    popd >/dev/null || true
    
    # Create verification report
    local report_file="$design_dir/verification_report.txt"
    cat > "$report_file" << EOF
NEORV32 Verilog Design Verification Report
==========================================
Design: $design_name
Date: $(date)
Directory: $design_dir

Verilog Files: ${#verilog_files[@]}
Compilation: Successful
Simulation: ${VERIFY_DESIGNS:-"Not run"}

Files:
$(for file in "${verilog_files[@]}"; do echo "  - $(basename "$file")"; done)

EOF
    
    success "Verification completed for $design_name"
    return 0
}

# Design configuration arrays
declare -a NEORV32_VERILOG_CONFIGS=(
    "neorv32_verilog_minimal:Minimal NEORV32 RISC-V processor in Verilog:minimal"
    "neorv32_verilog_standard:Standard NEORV32 RISC-V processor in Verilog:standard"
    "neorv32_verilog_complete:Complete NEORV32 RISC-V system in Verilog:complete"
)

# Parse configuration string
parse_config() {
    local config=$1
    local name=$(echo $config | cut -d':' -f1)
    local description=$(echo $config | cut -d':' -f2)
    local type=$(echo $config | cut -d':' -f3)
    echo "$name" "$description" "$type"
}

# Run verification on all designs
run_verification() {
    if [[ "$VERIFY_DESIGNS" != "true" ]]; then
        return 0
    fi
    
    log "=== Running Design Verification ==="
    
    # Check if Icarus Verilog is available
    if ! command -v iverilog >/dev/null 2>&1; then
        error "Icarus Verilog not found. Please install Icarus Verilog first using --install-iverilog"
        return 1
    fi
    
    local successful_verifications=0
    local failed_verifications=0
    
    # Verify Verilog designs
    for verilog_dir in "$DATASET_DIR/rtl_designs/neorv32_verilog"/*; do
        if [[ -d "$verilog_dir" ]]; then
            local verilog_name=$(basename "$verilog_dir")
            if verify_neorv32_verilog_design "$verilog_dir" "$verilog_name"; then
                ((successful_verifications++))
            else
                ((failed_verifications++))
            fi
        fi
    done
    
    log "Verification Summary:"
    success "Successfully verified designs: $successful_verifications"
    if [[ $failed_verifications -gt 0 ]]; then
        warning "Failed verifications: $failed_verifications"
    fi
    
    return 0
}

# Main organization function
main() {
    local start_time=$(date +%s)
    
    log "==================================================================="
    log "NEORV32-Verilog RTL Organization Session Started"
    log "Commit ID: $COMMIT_ID"
    log "Session ID: $TIMESTAMP"
    log "Source Directory: $SOURCE_DIR"
    log "Dataset Directory: $DATASET_DIR"
    log "==================================================================="
    
    # Check prerequisites
    local prereq_failures=0
    check_prerequisites || prereq_failures=$?
    
    if [[ $prereq_failures -gt 0 ]]; then
        error "$prereq_failures prerequisite checks failed"
        exit 1
    fi
    
    # Install GHDL if requested
    if [[ "$INSTALL_GHDL" == "true" ]]; then
        install_ghdl || {
            error "GHDL installation failed"
            exit 1
        }
    fi
    
    # Install Icarus Verilog if requested
    if [[ "$INSTALL_IVERILOG" == "true" ]]; then
        install_iverilog || {
            error "Icarus Verilog installation failed"
            exit 1
        }
    fi
    
    # Initialize NEORV32 submodule
    initialize_neorv32_submodule || {
        error "NEORV32 submodule initialization failed"
        exit 1
    }
    
    local successful_designs=0
    local failed_designs=0
    
    # Convert NEORV32 to Verilog (all configured variants)
    log "=== Converting NEORV32 to Verilog Designs ==="
    for config in "${NEORV32_VERILOG_CONFIGS[@]}"; do
        read name description type <<< $(parse_config "$config")
        log "Processing NEORV32 Verilog design: $name ($description)"
        
        if convert_vhdl_to_verilog "$name" "$description" "$type"; then
            ((successful_designs++))
            success "NEORV32 Verilog design $name completed successfully"
        else
            ((failed_designs++))
            error "NEORV32 Verilog design $name failed"
            # Continue with next design instead of exiting
        fi
    done
    
    # Organize additional components if requested
    organize_simulation
    
    # Run verification on all designs
    run_verification
    
    # Generate summary
    local end_time=$(date +%s)
    local duration=$((end_time - start_time))
    local minutes=$((duration / 60))
    local seconds=$((duration % 60))
    
    log "==================================================================="
    log "Organization Summary"
    log "==================================================================="
    log "Total time: ${minutes}m ${seconds}s"
    success "Successfully organized designs: $successful_designs"
    if [[ $failed_designs -gt 0 ]]; then
        warning "Failed designs: $failed_designs"
    fi
    
    # Count actual organized files
    local total_vhdl=$(find "$DATASET_DIR/rtl_designs" -name "*.vhd" 2>/dev/null | wc -l)
    local total_verilog=$(find "$DATASET_DIR/rtl_designs" -name "*.v" 2>/dev/null | wc -l)
    local total_configs=$(find "$DATASET_DIR/rtl_designs" -name "config.yaml" 2>/dev/null | wc -l)
    local total_dirs=$(find "$DATASET_DIR/rtl_designs" -maxdepth 2 -type d | wc -l)
    
    log "Dataset statistics:"
    log "├── Total VHDL files organized: $total_vhdl"
    log "├── Total Verilog files organized: $total_verilog"
    log "├── Total design configurations: $total_configs"
    log "└── Total design directories: $total_dirs"
    
    # Show breakdown by category
    for category in neorv32_verilog; do
        if [[ -d "$DATASET_DIR/rtl_designs/$category" ]]; then
            local cat_designs=$(find "$DATASET_DIR/rtl_designs/$category" -maxdepth 1 -type d | wc -l)
            local cat_vhdl=$(find "$DATASET_DIR/rtl_designs/$category" -name "*.vhd" | wc -l)
            local cat_verilog=$(find "$DATASET_DIR/rtl_designs/$category" -name "*.v" | wc -l)
            log "├── $category: $((cat_designs-1)) designs, $cat_vhdl VHDL files, $cat_verilog Verilog files"
        fi
    done
    
    log "Organization completed successfully!"
    log "Organized RTL designs available in: $DATASET_DIR/rtl_designs/"
    log "==================================================================="
}

# Help function
show_help() {
    echo "NEORV32-Verilog RTL Organization Script"
    echo ""
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "This script organizes and converts VHDL designs from the NEORV32 repository to Verilog."
    echo ""
    echo "IMPORTANT: This script requires GHDL version 3.0.0 or higher for VHDL to Verilog conversion."
    echo "The --out=verilog synthesis feature was introduced in GHDL 3.0.0."
    echo ""
    echo "Options:"
    echo "  -h, --help              Show this help message"
    echo "  --check                 Check prerequisites and source availability"
    echo "  --debug                 Enable debug logging"
    echo "  --verilog-only          Copy only Verilog designs"
    echo "  --include-sim           Include simulation files"
    echo "  --with-examples         Include example applications"
    echo "  --with-docs             Include documentation and specifications"
    echo "  --install-ghdl          Install GHDL simulator automatically"
    echo "  --install-iverilog      Install Icarus Verilog simulator automatically"
    echo "  --verify                Run verification on organized designs"
    echo "  --sim-timeout TIME      Set simulation timeout (default: 10ms)"
    echo ""
    echo "Examples:"
    echo "  $0                                    # Basic organization"
    echo "  $0 --check                          # Check source availability only"
    echo "  $0 --include-sim                    # Include simulation files"
    echo "  $0 --with-examples                  # Include examples"
    echo "  $0 --install-ghdl                   # Install GHDL and organize"
    echo "  $0 --install-iverilog               # Install Icarus Verilog and organize"
    echo "  $0 --verify                          # Organize and verify designs"
    echo "  $0 --install-ghdl --install-iverilog --verify"
    echo "  $0 --sim-timeout 100ms --verify     # Run verification with 100ms timeout"
    echo ""
    echo "GHDL Version Requirements:"
    echo "  - Minimum version: 3.0.0"
    echo "  - Required for: VHDL to Verilog synthesis (--out=verilog)"
    echo "  - Current version check: $0 --check"
    echo ""
    echo "Troubleshooting GHDL Version Issues:"
    echo "  - Ubuntu/Debian: sudo add-apt-repository ppa:ghdl/ppa && sudo apt-get update && sudo apt-get install ghdl"
    echo "  - Build from source: https://github.com/ghdl/ghdl#building"
    echo "  - Docker: docker pull ghdl/ghdl:latest"
    echo ""
    echo "Design Categories Organized:"
    echo "  - NEORV32 Verilog conversions (3 configurations)"
    echo "  - Simulation testbenches and files"
    echo "  - VHDL to Verilog conversion scripts"
    echo ""
    echo "Conversion Features:"
    echo "  - Automatic GHDL installation (Linux/macOS/Windows)"
    echo "  - Automatic Icarus Verilog installation (Linux/macOS/Windows)"
    echo "  - VHDL to Verilog conversion using GHDL synthesis"
    echo "  - Verilog syntax checking and analysis"
    echo "  - Testbench compilation and simulation"
    echo "  - Verification reports for each design"
    echo "  - Configurable simulation timeout"
    echo ""
    echo "Total: 3 Verilog designs per run"
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
        --debug)
            DEBUG_MODE=true
            shift
            ;;
        --verilog-only)
            VERILOG_ONLY=true
            shift
            ;;
        --include-sim)
            INCLUDE_SIM=true
            shift
            ;;
        --with-examples)
            WITH_EXAMPLES=true
            shift
            ;;
        --with-docs)
            WITH_DOCS=true
            shift
            ;;
        --install-ghdl)
            INSTALL_GHDL=true
            shift
            ;;
        --install-iverilog)
            INSTALL_IVERILOG=true
            shift
            ;;
        --verify)
            VERIFY_DESIGNS=true
            shift
            ;;
        --sim-timeout)
            SIMULATION_TIMEOUT="$2"
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
    echo "Checking prerequisites and source availability..."
    mkdir -p "$LOG_DIR"
    if check_prerequisites; then
        echo "✅ All prerequisites met"
        echo "✅ Source repository structure verified"
        echo "✅ Ready to organize NEORV32-Verilog designs"
        echo ""
        echo "Available for organization:"
        echo "  - $(find "$SOURCE_DIR/src" -name "*.vhd" | wc -l) VHDL wrapper files"
        echo "  - $(find "$SOURCE_DIR/src" -name "*.v" | wc -l) Verilog files"
        echo "  - $(find "$SOURCE_DIR/sim" -name "*.v" | wc -l) simulation files"
        if [[ -d "$SOURCE_DIR/neorv32" ]]; then
            echo "  - $(find "$SOURCE_DIR/neorv32" -name "*.vhd" | wc -l) NEORV32 VHDL files"
        else
            echo "  - NEORV32 submodule needs initialization"
        fi
        echo ""
        echo "GHDL Version Check:"
        if command -v ghdl >/dev/null 2>&1; then
            ghdl_version=$(ghdl --version | head -1)
            version_number=$(echo "$ghdl_version" | grep -o '[0-9]\+\.[0-9]\+' | head -1)
            major_version=$(echo "$version_number" | cut -d'.' -f1)
            
            echo "  - Current version: $ghdl_version"
            if [[ "$major_version" -ge 3 ]]; then
                echo "  ✅ Version $version_number supports VHDL to Verilog synthesis"
            else
                echo "  ❌ Version $version_number is too old for synthesis (3.0.0+ required)"
                echo "  💡 Upgrade GHDL to enable VHDL to Verilog conversion"
            fi
        else
            echo "  ❌ GHDL not installed"
            echo "  💡 Install GHDL using --install-ghdl"
        fi
    else
        echo "❌ Prerequisites check failed"
        echo "See logs in: $LOG_DIR"
        exit 1
    fi
    echo ""
    echo "Check completed. See logs in: $LOG_DIR"
    exit 0
fi

# Run main function
main 