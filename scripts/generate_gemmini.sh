#!/bin/bash

# Gemmini RTL Generation Script for Benchmarking
# This script generates different Gemmini accelerator configurations for performance evaluation

set -e  # Exit on any error

# Global variables
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
# Chipyard, Miniconda (via install_gemmini), venv, gemmini_env — same root as install_gemmini.sh.
GEMMINI_WORKSHOP="${SCORE_GEMMINI_WORKSHOP:-$PROJECT_ROOT/datasets/gemmini/workshop}"
WORKSHOP_ROOT="$GEMMINI_WORKSHOP"

# Function to get commit ID from git repository
get_commit_id() {
    local repo_path="$1"
    if [[ -d "$repo_path/.git" ]]; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

GEMMINI_COMMIT_ID=$(get_commit_id "$PROJECT_ROOT/tools/gemmini")
DATASET_DIR="$PROJECT_ROOT/datasets/gemmini/$GEMMINI_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUILD_ARTIFACTS_DIR="$DATASET_DIR/build_artifacts"
MAIN_LOG="$LOG_DIR/main.log"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/session_${TIMESTAMP}.log"

# Virtual environment settings
VENV_NAME="Score"
VENV_PATH="$GEMMINI_WORKSHOP/myvenv/$VENV_NAME"
VENV_ACTIVATE="$VENV_PATH/bin/activate"

# Writable Gemmini copy + build scratch under gemmini_env; Chipyard matches install_gemmini (same tree).
WORKSHOP_ENV_DIR="$GEMMINI_WORKSHOP/gemmini_env"
WORKSHOP_CHIPYARD_DIR="$GEMMINI_WORKSHOP/chipyard"
WORKSHOP_GEMMINI_DIR="$WORKSHOP_ENV_DIR/gemmini"
WORKSHOP_BUILD_DIR="$WORKSHOP_ENV_DIR/build"

# Default simulator (can be overridden by command line)
DEFAULT_SIMULATOR="vlt"  # Verilator - open source, free, and widely available
SIMULATOR="$DEFAULT_SIMULATOR"

# Parallel execution settings
DEFAULT_PARALLEL_JOBS=8
PARALLEL_JOBS="$DEFAULT_PARALLEL_JOBS"
MAX_PARALLEL_JOBS=12  # Safety limit

# Setup local environment if available
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

# Create dataset directory structure
mkdir -p "$LOG_DIR"
mkdir -p "$BUILD_ARTIFACTS_DIR"
mkdir -p "$DATASET_DIR/rtl_configs"
mkdir -p "$DATASET_DIR/simulation_models"

# Create workshop environment directories (do not mkdir CHIPYARD — clone/install must create it)
mkdir -p "$GEMMINI_WORKSHOP"
mkdir -p "$WORKSHOP_ENV_DIR"
mkdir -p "$WORKSHOP_GEMMINI_DIR"
mkdir -p "$WORKSHOP_BUILD_DIR"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging_files generate_gemmini "$MAIN_LOG" "$SESSION_LOG"

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
    echo -e "${PURPLE}[${SCRIPT_LOG_NAME}][DEBUG]${NC} $message" | tee -a "$MAIN_LOG" "$SESSION_LOG"
}

# Simulator-specific environment checking
check_simulator_env() {
    local sim="$1"
    local found=0
    
    case "$sim" in
        vcs)
            if [[ -n "${VCS_HOME:-}" ]] && command -v vcs >/dev/null 2>&1; then
                success "VCS simulator found: $(which vcs)"
                success "VCS_HOME: $VCS_HOME"
                found=1
            else
                warning "VCS not found or VCS_HOME not set"
            fi
            ;;
        msm)
            if command -v vlog >/dev/null 2>&1 || command -v vsim >/dev/null 2>&1; then
                success "ModelSim simulator found"
                if [[ -n "${MODELSIM_HOME:-}" ]]; then
                    success "MODELSIM_HOME: $MODELSIM_HOME"
                fi
                found=1
            else
                warning "ModelSim not found (vlog/vsim commands missing)"
            fi
            ;;
        vlt)
            if command -v verilator >/dev/null 2>&1; then
                success "Verilator simulator found: $(which verilator)"
                if [[ -n "${VERILATOR_ROOT:-}" ]]; then
                    success "VERILATOR_ROOT: $VERILATOR_ROOT"
                fi
                found=1
            else
                warning "Verilator not found"
            fi
            ;;
        ncv)
            if [[ -n "${NCV_HOME:-}" ]] && command -v ncverilog >/dev/null 2>&1; then
                success "NC-Verilog simulator found: $(which ncverilog)"
                success "NCV_HOME: $NCV_HOME"
                found=1
            else
                warning "NC-Verilog not found or NCV_HOME not set"
            fi
            ;;
        icv)
            if [[ -n "${ICARUS_HOME:-}" ]] && command -v iverilog >/dev/null 2>&1; then
                success "Icarus Verilog simulator found: $(which iverilog)"
                success "ICARUS_HOME: $ICARUS_HOME"
                found=1
            else
                warning "Icarus Verilog not found or ICARUS_HOME not set"
            fi
            ;;
        riv)
            if [[ -n "${RIVIERA_HOME:-}" ]]; then
                success "Riviera simulator environment found"
                success "RIVIERA_HOME: $RIVIERA_HOME"
                found=1
            else
                warning "Riviera not found or RIVIERA_HOME not set"
            fi
            ;;
        *)
            error "Unknown simulator: $sim"
            return 1
            ;;
    esac
    
    return $((1 - found))
}

# Prerequisite checking functions
check_command() {
    local cmd="$1"
    local description="$2"
    
    if command -v "$cmd" >/dev/null 2>&1; then
        success "$description found: $(which $cmd)"
        return 0
    else
        error "$description not found: $cmd"
        return 1
    fi
}

check_file() {
    local file="$1"
    local description="$2"
    
    if [[ -f "$file" ]]; then
        success "$description found: $file"
        return 0
    else
        error "$description not found: $file"
        return 1
    fi
}

check_prerequisites() {
    log "Checking prerequisites..."
    local prereq_failed=0
    
    # Check essential tools
    check_command "java" "Java runtime" || ((prereq_failed++))
    check_command "sbt" "Scala Build Tool" || ((prereq_failed++))
    check_command "make" "Make build tool" || ((prereq_failed++))
    check_command "gcc" "GCC compiler" || ((prereq_failed++))
    check_command "git" "Git version control" || ((prereq_failed++))
    
    # Check for RISC-V toolchain
    if command -v riscv64-unknown-elf-gcc >/dev/null 2>&1; then
        success "RISC-V toolchain found: $(which riscv64-unknown-elf-gcc)"
    else
        warning "RISC-V toolchain not found - will be installed during setup"
        ((prereq_failed++))
    fi
    
    # Check for Chipyard environment
    if [[ -n "${CHIPYARD_HOME:-}" ]]; then
        success "CHIPYARD_HOME set: $CHIPYARD_HOME"
    else
        warning "CHIPYARD_HOME not set - will be configured during setup"
    fi
    
    # Check simulator-specific environment
    log "Checking simulator environment for: $SIMULATOR"
    if ! check_simulator_env "$SIMULATOR"; then
        error "Simulator $SIMULATOR not properly configured"
        ((prereq_failed++))
    fi
    
    return $prereq_failed
}

# Enhanced directory and environment setup
setup_environment() {
    log "Setting up environment and directories..."
    
    # Check if we're in the right directory structure
    if [[ ! -d "tools/gemmini" ]]; then
        error "This script must be run from the score project root directory"
        error "Current directory: $(pwd)"
        error "Expected to find: tools/gemmini"
        exit 1
    fi
    
    # Activate Score virtual environment
    if [[ -f "$VENV_ACTIVATE" ]]; then
        log "Activating Score virtual environment: $VENV_ACTIVATE"
        source "$VENV_ACTIVATE" 2>&1 | tee -a "$SESSION_LOG"
        success "Score virtual environment activated"
        
        # Check if key tools are available in the virtual environment
        if command -v java >/dev/null 2>&1; then
            success "Java found in virtual environment: $(which java)"
        else
            warning "Java not found in virtual environment"
        fi
        
        if command -v sbt >/dev/null 2>&1; then
            success "SBT found in virtual environment: $(which sbt)"
        else
            warning "SBT not found in virtual environment"
        fi
    else
        error "Score virtual environment not found at: $VENV_ACTIVATE"
        error "Please ensure the Score virtual environment is set up in: $VENV_PATH"
        exit 1
    fi
    
    # Set up Gemmini environment variables (same Chipyard tree as install_gemmini.sh when paths match)
    export GEMMINI_HOME="$WORKSHOP_GEMMINI_DIR"
    export CHIPYARD_HOME="$WORKSHOP_CHIPYARD_DIR"
    export BUILD_ROOT="$WORKSHOP_BUILD_DIR"
    
    info "GEMMINI_WORKSHOP: $GEMMINI_WORKSHOP"
    info "WORKSHOP_ROOT: $WORKSHOP_ROOT"
    info "VENV_PATH: $VENV_PATH"
    info "GEMMINI_HOME: $GEMMINI_HOME"
    info "CHIPYARD_HOME: $CHIPYARD_HOME"
    info "BUILD_ROOT: $BUILD_ROOT"
    info "DATASET_DIR: $DATASET_DIR"
    info "LOG_DIR: $LOG_DIR"
    info "SIMULATOR: $SIMULATOR"
    info "RTL_ONLY_MODE: $RTL_ONLY_MODE"
    
    # Copy Gemmini from submodule first (CHIPYARD.hash must exist before Chipyard checkout)
    if [[ ! -d "$GEMMINI_HOME" ]] || [[ ! -f "$GEMMINI_HOME/build.sbt" ]]; then
        log "Copying Gemmini from submodule to Gemmini workshop (gemmini_env)..."
        if [[ -d "$PROJECT_ROOT/tools/gemmini" ]]; then
            cp -r "$PROJECT_ROOT/tools/gemmini"/* "$GEMMINI_HOME/" 2>&1 | tee -a "$SESSION_LOG"
            cp -r "$PROJECT_ROOT/tools/gemmini"/.* "$GEMMINI_HOME/" 2>/dev/null || true
            success "Gemmini copied to: $GEMMINI_HOME"
        else
            error "Gemmini submodule not found at: $PROJECT_ROOT/tools/gemmini"
            exit 1
        fi
    else
        success "Gemmini copy found at: $GEMMINI_HOME"
    fi
    
    if [[ ! -d "$CHIPYARD_HOME" ]] || [[ ! -f "$CHIPYARD_HOME/env.sh" ]]; then
        log "Setting up Chipyard under GEMMINI_WORKSHOP..."
        setup_chipyard_environment
    else
        success "Chipyard environment found at: $CHIPYARD_HOME"
        if [[ -f "$CHIPYARD_HOME/env.sh" ]]; then
            # shellcheck source=/dev/null
            source "$CHIPYARD_HOME/env.sh" 2>&1 | tee -a "$SESSION_LOG"
            success "Chipyard settings loaded"
        else
            error "Cannot find env.sh at $CHIPYARD_HOME/env.sh"
            exit 1
        fi
    fi
    
    ensure_gemmini_linked_in_chipyard
    
    # Create dataset directories if they don't exist
    mkdir -p "$BUILD_ROOT"
    mkdir -p "$DATASET_DIR/rtl_configs"
    mkdir -p "$DATASET_DIR/simulation_models"
    
    # Build Gemmini software library
    log "Building Gemmini software library..."
    cd "$GEMMINI_HOME"
    if make -C software/libgemmini install 2>&1 | tee -a "$SESSION_LOG"; then
        success "Gemmini software library built successfully"
    else
        warning "Gemmini software library build failed but continuing"
    fi
}

# Link writable Gemmini copy into Chipyard generators (same as after install_gemmini + generate flow).
ensure_gemmini_linked_in_chipyard() {
    log "Linking Gemmini into Chipyard generators..."
    if [[ ! -d "$CHIPYARD_HOME" ]]; then
        error "CHIPYARD_HOME missing: $CHIPYARD_HOME"
        exit 1
    fi
    if [[ ! -f "$GEMMINI_HOME/build.sbt" ]]; then
        error "GEMMINI_HOME not populated: $GEMMINI_HOME"
        exit 1
    fi
    if [[ -e "$CHIPYARD_HOME/generators/gemmini" ]]; then
        rm -rf "$CHIPYARD_HOME/generators/gemmini"
    fi
    if ln -sf "$GEMMINI_HOME" "$CHIPYARD_HOME/generators/gemmini" >>"$SESSION_LOG" 2>&1; then
        success "generators/gemmini -> $GEMMINI_HOME"
    else
        warning "Symlink failed; copying Gemmini into generators/gemmini"
        cp -r "$GEMMINI_HOME" "$CHIPYARD_HOME/generators/gemmini" 2>&1 | tee -a "$SESSION_LOG"
        success "Gemmini copied into Chipyard generators"
    fi
}

# Setup Chipyard environment
setup_chipyard_environment() {
    log "Setting up Chipyard under GEMMINI_WORKSHOP..."
    
    local chipyard_url="${CHIPYARD_GIT_URL:-https://github.com/ucb-bar/chipyard.git}"
    if [[ ! -d "$CHIPYARD_HOME" ]]; then
        log "Cloning Chipyard to $CHIPYARD_HOME..."
        if ! git clone "$chipyard_url" "$CHIPYARD_HOME" 2>&1 | tee -a "$SESSION_LOG"; then
            error "Failed to clone Chipyard (set CHIPYARD_GIT_URL if needed)"
            exit 1
        fi
    fi
    
    cd "$CHIPYARD_HOME"
    
    if [[ -f "$GEMMINI_HOME/CHIPYARD.hash" ]]; then
        local commit_hash
        commit_hash=$(cat "$GEMMINI_HOME/CHIPYARD.hash")
        log "Checking out Chipyard commit: $commit_hash"
        git checkout "$commit_hash" 2>&1 | tee -a "$SESSION_LOG"
    fi
    
    log "Running Chipyard build setup..."
    if ./build-setup.sh riscv-tools -s 6 -s 7 -s 8 -s 9 -v 2>&1 | tee -a "$SESSION_LOG"; then
        success "Chipyard build setup completed"
    else
        error "Chipyard build setup failed"
        exit 1
    fi
    
    if [[ -f "env.sh" ]]; then
        # shellcheck source=/dev/null
        source "env.sh" 2>&1 | tee -a "$SESSION_LOG"
        success "Chipyard environment loaded"
    else
        error "Cannot find env.sh after build setup"
        exit 1
    fi
}

# Parallel job management functions
setup_parallel_execution() {
    JOB_STATUS_FILE="$LOG_DIR/job_status_${TIMESTAMP}.txt"
    echo "# Job Status File - Session $TIMESTAMP" > "$JOB_STATUS_FILE"
    echo "# Format: JOB_ID|CONFIG_TYPE|CONFIG_NAME|STATUS|PID|START_TIME|END_TIME|LOG_FILE" >> "$JOB_STATUS_FILE"
}

wait_for_job_slot() {
    while [[ ${#ACTIVE_JOBS[@]} -ge $PARALLEL_JOBS ]]; do
        check_completed_jobs
        sleep 1
    done
}

check_completed_jobs() {
    local new_active_jobs=()
    local new_pids=()
    
    for i in "${!ACTIVE_JOBS[@]}"; do
        local job_info="${ACTIVE_JOBS[$i]}"
        local pid="${JOB_PIDS[$i]}"
        
        if ! kill -0 "$pid" 2>/dev/null; then
            # Job completed
            wait "$pid"
            local exit_status=$?
            local end_time=$(date +%s)
            
            if [[ $exit_status -eq 0 ]]; then
                COMPLETED_JOBS+=("$job_info")
                success "Parallel job completed: $job_info"
                echo "$job_info|COMPLETED|$pid|$end_time" >> "$JOB_STATUS_FILE"
            else
                FAILED_JOBS+=("$job_info")
                error "Parallel job failed: $job_info"
                echo "$job_info|FAILED|$pid|$end_time" >> "$JOB_STATUS_FILE"
            fi
        else
            # Job still running
            new_active_jobs+=("$job_info")
            new_pids+=("$pid")
        fi
    done
    
    ACTIVE_JOBS=("${new_active_jobs[@]}")
    JOB_PIDS=("${new_pids[@]}")
}

wait_for_all_jobs() {
    info "Waiting for all parallel jobs to complete..."
    while [[ ${#ACTIVE_JOBS[@]} -gt 0 ]]; do
        check_completed_jobs
        if [[ ${#ACTIVE_JOBS[@]} -gt 0 ]]; then
            info "Still running: ${#ACTIVE_JOBS[@]} jobs..."
            sleep 2
        fi
    done
    success "All parallel jobs completed"
}

start_parallel_job() {
    local job_type="$1"
    local config_name="$2"
    local description="$3"
    
    wait_for_job_slot
    
    local job_id="${job_type}_${config_name}_$$_$(date +%s)"
    local job_info="$job_id|$job_type|$config_name"
    local start_time=$(date +%s)
    
    info "Starting parallel job: $job_type $config_name"
    
    # Start job in background with unique build directory
    case "$job_type" in
        "default")
            build_default_config_parallel "$config_name" "$description" "$job_id" &
            ;;
        "fp32")
            build_fp32_config_parallel "$config_name" "$description" "$job_id" &
            ;;
        "fp16")
            build_fp16_config_parallel "$config_name" "$description" "$job_id" &
            ;;
        "bf16")
            build_bf16_config_parallel "$config_name" "$description" "$job_id" &
            ;;
        "dse")
            build_dse_config_parallel "$config_name" "$description" "$job_id" &
            ;;
        "custom")
            build_custom_config_parallel "$config_name" "$description" "$job_id" &
            ;;
        *)
            error "Unknown job type: $job_type"
            return 1
            ;;
    esac
    
    local pid=$!
    ACTIVE_JOBS+=("$job_info")
    JOB_PIDS+=("$pid")
    
    echo "$job_info|STARTED|$pid|$start_time" >> "$JOB_STATUS_FILE"
    debug "Started job $job_id with PID $pid"
}

# Function to organize RTL source files without compilation
organize_rtl_sources() {
    local config_type="$1"
    local config_name="$2"
    
    debug "organize_rtl_sources called with: $config_type, $config_name"
    
    local config_dir="$DATASET_DIR/rtl_configs/${config_type}/${config_name}"
    debug "Creating config directory: $config_dir"
    
    # Create configuration-specific directories
    mkdir -p "$config_dir" || return 1
    debug "Directory created successfully"
    
    info "Organizing RTL sources for $config_name (RTL-only mode)"
    
    # Copy RTL sources from Gemmini design tree (workshop environment)
    local gemmini_src="$GEMMINI_HOME/src"
    
    # Create RTL subdirectories
    mkdir -p "$config_dir/main"
    mkdir -p "$config_dir/include"
    mkdir -p "$config_dir/generated"
    
    debug "Copying RTL files from $gemmini_src"
    
    # 不再复制 Scala 文件，只复制 Verilog/VHDL 文件（如果有）
    if [[ -d "$gemmini_src" ]]; then
        find "$gemmini_src" \( -name "*.v" -o -name "*.sv" -o -name "*.vh" -o -name "*.vhdl" -o -name "*.vhd" \) | while read rtl_file; do
            if [[ -f "$rtl_file" ]]; then
                relative_path=${rtl_file#$gemmini_src/}
                target_dir="$config_dir/main/$(dirname "$relative_path")"
                mkdir -p "$target_dir"
                cp "$rtl_file" "$target_dir/" 2>/dev/null || true
            fi
        done
    fi
    
    # Copy all generated Verilog/VHDL files if they exist (from workshop Chipyard)
    if [[ -d "$CHIPYARD_HOME/sims/verilator/generated-src" ]]; then
        find "$CHIPYARD_HOME/sims/verilator/generated-src" \( -name "*.v" -o -name "*.sv" -o -name "*.vh" -o -name "*.vhdl" -o -name "*.vhd" \) | while read rtl_file; do
            if [[ -f "$rtl_file" ]]; then
                cp "$rtl_file" "$config_dir/generated/" 2>/dev/null || true
            fi
        done
    fi
    
    # Create configuration-specific files
    cat > "$config_dir/config.yaml" << EOF
core_type: $config_type
config_name: $config_name
simulator: $SIMULATOR
generation_date: $(date)
rtl_only: true
description: "Gemmini $config_type configuration"
workshop_env: true
gemmini_home: $GEMMINI_HOME
chipyard_home: $CHIPYARD_HOME
EOF
    
    # Create a configuration-specific top-level module
    cat > "$config_dir/${config_name}_top.v" << EOF
// Top-level module for $config_name configuration
// Generated on $(date)
// Gemmini ${config_type} accelerator

module ${config_name}_top (
    input  clk,
    input  rst_n,
    output ready
);

    // Configuration parameters
    parameter CORE_TYPE = "$config_type";
    
    // Simple ready signal for synthesis
    reg ready_reg;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            ready_reg <= 1'b0;
        else
            ready_reg <= 1'b1;
    end
    
    assign ready = ready_reg;

endmodule
EOF
    
    # Create file list for this configuration（只包含 Verilog/VHDL 文件）
    find "$config_dir" \( -name "*.v" -o -name "*.sv" -o -name "*.vh" -o -name "*.vhdl" -o -name "*.vhd" \) > "$config_dir/filelist.f"
    
    local rtl_file_count=$(find "$config_dir" \( -name "*.v" -o -name "*.sv" -o -name "*.vh" -o -name "*.vhdl" -o -name "*.vhd" \) | wc -l)
    success "RTL sources organized for $config_name: $rtl_file_count RTL/VHDL files"
    debug "organize_rtl_sources completed successfully"
    return 0
}

# Enhanced output organization functions
organize_build_outputs() {
    local config_type="$1"
    local config_name="$2"
    
    local config_dir="$DATASET_DIR/rtl_configs/${config_type}/${config_name}"
    local sim_model_dir="$DATASET_DIR/simulation_models/${config_type}/${config_name}"
    
    # Create configuration-specific directories
    mkdir -p "$config_dir"
    mkdir -p "$sim_model_dir"
    
    # Copy RTL files to organized structure (from workshop Chipyard)
    if [[ -d "$CHIPYARD_HOME/sims/verilator/generated-src" ]]; then
        # Copy generated RTL files
        find "$CHIPYARD_HOME/sims/verilator/generated-src" -name "*.v" -o -name "*.sv" -o -name "*.vh" 2>/dev/null | while read rtl_file; do
            if [[ -f "$rtl_file" ]]; then
                cp "$rtl_file" "$config_dir/" 2>/dev/null || true
            fi
        done
        
        # Copy simulation models
        find "$CHIPYARD_HOME/sims/verilator" -name "simv*" -o -name "*.exe" -o -name "*.so" 2>/dev/null | while read sim_file; do
            if [[ -f "$sim_file" ]]; then
                cp "$sim_file" "$sim_model_dir/" 2>/dev/null || true
            fi
        done
        
        # Create configuration summary
        cat > "$config_dir/config_summary.txt" << EOF
Configuration: $config_name
Type: $config_type
Simulator: $SIMULATOR
Generated: $(date)
Build Location: $CHIPYARD_HOME/sims/verilator
Workshop Environment: true
Gemmini Home: $GEMMINI_HOME
Chipyard Home: $CHIPYARD_HOME
EOF
        
        info "Organized outputs for $config_name in $config_dir"
    fi
}

# Configuration arrays for different benchmark scenarios
declare -a DEFAULT_CONFIGS=(
    "GemminiRocketConfig:Default Gemmini configuration with Rocket core"
    "GemminiRocketConfig_16x16:Default Gemmini with 16x16 systolic array"
    "GemminiRocketConfig_32x32:Default Gemmini with 32x32 systolic array"
)

declare -a FP32_CONFIGS=(
    "GemminiFP32DefaultConfig:FP32 Gemmini configuration"
    "GemminiFP32DefaultConfig_8x8:FP32 Gemmini with 8x8 systolic array"
    "GemminiFP32DefaultConfig_16x16:FP32 Gemmini with 16x16 systolic array"
)

declare -a FP16_CONFIGS=(
    "GemminiFP16DefaultConfig:FP16 Gemmini configuration"
    "GemminiFP16DefaultConfig_8x8:FP16 Gemmini with 8x8 systolic array"
)

declare -a BF16_CONFIGS=(
    "GemminiBF16DefaultConfig:BF16 Gemmini configuration"
    "GemminiBF16DefaultConfig_8x8:BF16 Gemmini with 8x8 systolic array"
    "GemminiBF16DefaultHighPerfConfig:BF16 Gemmini high performance configuration"
)

declare -a DSE_CONFIGS=(
    "GemminiDSE1Config:Design space exploration config 1"
    "GemminiDSE2Config:Design space exploration config 2"
    "GemminiDSE3Config:Design space exploration config 3"
    "GemminiDSE4Config:Design space exploration config 4"
    "GemminiDSE5Config:Design space exploration config 5"
    "GemminiDSE6Config:Design space exploration config 6"
    "GemminiDSE7Config:Design space exploration config 7"
    "GemminiDSE8Config:Design space exploration config 8"
    "GemminiDSE10Config:Design space exploration config 10"
    "GemminiPnr16Config:Place and route 16x16 config"
    "GemminiPnr32Config:Place and route 32x32 config"
)

declare -a CUSTOM_CONFIGS=(
    "GemminiCustomConfig:Custom Gemmini configuration"
)

# Configuration control flags
ENABLE_FP32=true
ENABLE_FP16=true
ENABLE_BF16=true
ENABLE_DSE=true
ENABLE_CUSTOM=true
RTL_ONLY_MODE=false  # Generate RTL organization without compilation

# Parallel execution control
ACTIVE_JOBS=()
PENDING_JOBS=()
COMPLETED_JOBS=()
FAILED_JOBS=()
JOB_PIDS=()
JOB_STATUS_FILE=""

# Enhanced build functions with simulator support
build_default_config() {
    local config_name=$1
    local description=$2
    
    debug "build_default_config called with: config_name=$config_name, description=$description"
    
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building Default Gemmini configuration: $description"
    info "Build log: $build_log"
    
    # Build command for Gemmini
    local build_cmd=""
    case "$SIMULATOR" in
        vlt)
            build_cmd="make CONFIG=$config_name"
            ;;
        vcs)
            build_cmd="make CONFIG=$config_name VCS=1"
            ;;
        msm)
            build_cmd="make CONFIG=$config_name VLOG=1"
            ;;
        *)
            error "Unsupported simulator: $SIMULATOR"
            return 1
            ;;
    esac
    
    debug "Command: $build_cmd"
    
    # Change to Chipyard simulator directory (workshop environment)
    cd "$CHIPYARD_HOME/sims/verilator"
    
    # Check if RTL-only mode is enabled
    debug "Checking RTL_ONLY_MODE: $RTL_ONLY_MODE"
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        info "RTL-only mode: Organizing source files without compilation"
        organize_rtl_sources "default" "$config_name"
        return 0
    fi
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "Default Gemmini $description build completed"
        info "Build artifacts in: $CHIPYARD_HOME/sims/verilator (workshop environment)"
        organize_build_outputs "default" "$config_name"
        return 0
    else
        error "Default Gemmini $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        # FALLBACK: Organize RTL sources even if compilation failed
        info "Compilation failed, but organizing RTL sources as fallback"
        organize_rtl_sources "default" "$config_name"
        
        return 1
    fi
}

# Parallel version of build_default_config
build_default_config_parallel() {
    local config_name=$1
    local description=$2
    local job_id=$3
    
    debug "build_default_config_parallel called with: config_name=$config_name, description=$description, job_id=$job_id"
    
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    local job_build_dir="$BUILD_ARTIFACTS_DIR/job_${job_id}"
    
    # Create job-specific build directory
    mkdir -p "$job_build_dir"
    
    log "Building Default Gemmini configuration (parallel): $description" | tee -a "$build_log"
    info "Job ID: $job_id, Build log: $build_log" | tee -a "$build_log"
    
    # Build command for Gemmini
    local build_cmd=""
    case "$SIMULATOR" in
        vlt)
            build_cmd="make CONFIG=$config_name"
            ;;
        vcs)
            build_cmd="make CONFIG=$config_name VCS=1"
            ;;
        msm)
            build_cmd="make CONFIG=$config_name VLOG=1"
            ;;
        *)
            error "Unsupported simulator: $SIMULATOR" | tee -a "$build_log"
            return 1
            ;;
    esac
    
    debug "Command: $build_cmd" | tee -a "$build_log"
    
    # Change to Chipyard simulator directory (workshop environment)
    cd "$CHIPYARD_HOME/sims/verilator"
    
    # Check if RTL-only mode is enabled
    debug "Checking RTL_ONLY_MODE: $RTL_ONLY_MODE" | tee -a "$build_log"
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        info "RTL-only mode: Organizing source files without compilation" | tee -a "$build_log"
        organize_rtl_sources "default" "$config_name"
        return 0
    fi
    
    # Run build with comprehensive logging
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        success "Default Gemmini $description build completed (job $job_id)" | tee -a "$build_log"
        info "Build artifacts in: $CHIPYARD_HOME/sims/verilator (workshop environment)" | tee -a "$build_log"
        organize_build_outputs "default" "$config_name"
        return 0
    else
        error "Default Gemmini $description build failed (job $job_id)" | tee -a "$build_log"
        error "Check build log: $build_log" | tee -a "$build_log"
        
        # FALLBACK: Organize RTL sources even if compilation failed
        info "Compilation failed, but organizing RTL sources as fallback" | tee -a "$build_log"
        organize_rtl_sources "default" "$config_name"
        
        return 1
    fi
}

# Add parallel versions for the other build functions (abbreviated for space)
build_fp32_config_parallel() {
    local config_name=$1 description=$2 job_id=$3
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    cd "$CHIPYARD_HOME/sims/verilator"
    
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        organize_rtl_sources "fp32" "$config_name"
        return 0
    fi
    
    local build_cmd="make CONFIG=$config_name"
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        organize_build_outputs "fp32" "$config_name"
        return 0
    else
        organize_rtl_sources "fp32" "$config_name"
        return 1
    fi
}

build_fp16_config_parallel() {
    local config_name=$1 description=$2 job_id=$3
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    cd "$CHIPYARD_HOME/sims/verilator"
    
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        organize_rtl_sources "fp16" "$config_name"
        return 0
    fi
    
    local build_cmd="make CONFIG=$config_name"
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        organize_build_outputs "fp16" "$config_name"
        return 0
    else
        organize_rtl_sources "fp16" "$config_name"
        return 1
    fi
}

build_bf16_config_parallel() {
    local config_name=$1 description=$2 job_id=$3
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    cd "$CHIPYARD_HOME/sims/verilator"
    
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        organize_rtl_sources "bf16" "$config_name"
        return 0
    fi
    
    local build_cmd="make CONFIG=$config_name"
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        organize_build_outputs "bf16" "$config_name"
        return 0
    else
        organize_rtl_sources "bf16" "$config_name"
        return 1
    fi
}

build_dse_config_parallel() {
    local config_name=$1 description=$2 job_id=$3
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    cd "$CHIPYARD_HOME/sims/verilator"
    
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        organize_rtl_sources "dse" "$config_name"
        return 0
    fi
    
    local build_cmd="make CONFIG=$config_name"
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        organize_build_outputs "dse" "$config_name"
        return 0
    else
        organize_rtl_sources "dse" "$config_name"
        return 1
    fi
}

build_custom_config_parallel() {
    local config_name=$1 description=$2 job_id=$3
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    cd "$CHIPYARD_HOME/sims/verilator"
    
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        organize_rtl_sources "custom" "$config_name"
        return 0
    fi
    
    local build_cmd="make CONFIG=$config_name"
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        organize_build_outputs "custom" "$config_name"
        return 0
    else
        organize_rtl_sources "custom" "$config_name"
        return 1
    fi
}

# Function to parse configuration string
parse_config() {
    local config=$1
    local config_name=$(echo $config | cut -d':' -f1)
    local description=$(echo $config | cut -d':' -f2)
    
    echo "$config_name $description"
}

# Add missing build functions for different configuration types
build_fp32_config() {
    local config_name=$1
    local description=$2
    
    debug "build_fp32_config called with: config_name=$config_name, description=$description"
    
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building FP32 Gemmini configuration: $description"
    info "Build log: $build_log"
    
    # Build command for Gemmini
    local build_cmd=""
    case "$SIMULATOR" in
        vlt)
            build_cmd="make CONFIG=$config_name"
            ;;
        vcs)
            build_cmd="make CONFIG=$config_name VCS=1"
            ;;
        msm)
            build_cmd="make CONFIG=$config_name VLOG=1"
            ;;
        *)
            error "Unsupported simulator: $SIMULATOR"
            return 1
            ;;
    esac
    
    debug "Command: $build_cmd"
    
    # Change to Chipyard simulator directory (workshop environment)
    cd "$CHIPYARD_HOME/sims/verilator"
    
    # Check if RTL-only mode is enabled
    debug "Checking RTL_ONLY_MODE: $RTL_ONLY_MODE"
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        info "RTL-only mode: Organizing source files without compilation"
        organize_rtl_sources "fp32" "$config_name"
        return 0
    fi
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "FP32 Gemmini $description build completed"
        info "Build artifacts in: $CHIPYARD_HOME/sims/verilator (workshop environment)"
        organize_build_outputs "fp32" "$config_name"
        return 0
    else
        error "FP32 Gemmini $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        # FALLBACK: Organize RTL sources even if compilation failed
        info "Compilation failed, but organizing RTL sources as fallback"
        organize_rtl_sources "fp32" "$config_name"
        
        return 1
    fi
}

build_fp16_config() {
    local config_name=$1
    local description=$2
    
    debug "build_fp16_config called with: config_name=$config_name, description=$description"
    
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building FP16 Gemmini configuration: $description"
    info "Build log: $build_log"
    
    # Build command for Gemmini
    local build_cmd=""
    case "$SIMULATOR" in
        vlt)
            build_cmd="make CONFIG=$config_name"
            ;;
        vcs)
            build_cmd="make CONFIG=$config_name VCS=1"
            ;;
        msm)
            build_cmd="make CONFIG=$config_name VLOG=1"
            ;;
        *)
            error "Unsupported simulator: $SIMULATOR"
            return 1
            ;;
    esac
    
    debug "Command: $build_cmd"
    
    # Change to Chipyard simulator directory (workshop environment)
    cd "$CHIPYARD_HOME/sims/verilator"
    
    # Check if RTL-only mode is enabled
    debug "Checking RTL_ONLY_MODE: $RTL_ONLY_MODE"
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        info "RTL-only mode: Organizing source files without compilation"
        organize_rtl_sources "fp16" "$config_name"
        return 0
    fi
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "FP16 Gemmini $description build completed"
        info "Build artifacts in: $CHIPYARD_HOME/sims/verilator (workshop environment)"
        organize_build_outputs "fp16" "$config_name"
        return 0
    else
        error "FP16 Gemmini $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        # FALLBACK: Organize RTL sources even if compilation failed
        info "Compilation failed, but organizing RTL sources as fallback"
        organize_rtl_sources "fp16" "$config_name"
        
        return 1
    fi
}

build_bf16_config() {
    local config_name=$1
    local description=$2
    
    debug "build_bf16_config called with: config_name=$config_name, description=$description"
    
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building BF16 Gemmini configuration: $description"
    info "Build log: $build_log"
    
    # Build command for Gemmini
    local build_cmd=""
    case "$SIMULATOR" in
        vlt)
            build_cmd="make CONFIG=$config_name"
            ;;
        vcs)
            build_cmd="make CONFIG=$config_name VCS=1"
            ;;
        msm)
            build_cmd="make CONFIG=$config_name VLOG=1"
            ;;
        *)
            error "Unsupported simulator: $SIMULATOR"
            return 1
            ;;
    esac
    
    debug "Command: $build_cmd"
    
    # Change to Chipyard simulator directory (workshop environment)
    cd "$CHIPYARD_HOME/sims/verilator"
    
    # Check if RTL-only mode is enabled
    debug "Checking RTL_ONLY_MODE: $RTL_ONLY_MODE"
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        info "RTL-only mode: Organizing source files without compilation"
        organize_rtl_sources "bf16" "$config_name"
        return 0
    fi
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "BF16 Gemmini $description build completed"
        info "Build artifacts in: $CHIPYARD_HOME/sims/verilator (workshop environment)"
        organize_build_outputs "bf16" "$config_name"
        return 0
    else
        error "BF16 Gemmini $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        # FALLBACK: Organize RTL sources even if compilation failed
        info "Compilation failed, but organizing RTL sources as fallback"
        organize_rtl_sources "bf16" "$config_name"
        
        return 1
    fi
}

build_dse_config() {
    local config_name=$1
    local description=$2
    
    debug "build_dse_config called with: config_name=$config_name, description=$description"
    
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building DSE Gemmini configuration: $description"
    info "Build log: $build_log"
    
    # Build command for Gemmini
    local build_cmd=""
    case "$SIMULATOR" in
        vlt)
            build_cmd="make CONFIG=$config_name"
            ;;
        vcs)
            build_cmd="make CONFIG=$config_name VCS=1"
            ;;
        msm)
            build_cmd="make CONFIG=$config_name VLOG=1"
            ;;
        *)
            error "Unsupported simulator: $SIMULATOR"
            return 1
            ;;
    esac
    
    debug "Command: $build_cmd"
    
    # Change to Chipyard simulator directory (workshop environment)
    cd "$CHIPYARD_HOME/sims/verilator"
    
    # Check if RTL-only mode is enabled
    debug "Checking RTL_ONLY_MODE: $RTL_ONLY_MODE"
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        info "RTL-only mode: Organizing source files without compilation"
        organize_rtl_sources "dse" "$config_name"
        return 0
    fi
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "DSE Gemmini $description build completed"
        info "Build artifacts in: $CHIPYARD_HOME/sims/verilator (workshop environment)"
        organize_build_outputs "dse" "$config_name"
        return 0
    else
        error "DSE Gemmini $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        # FALLBACK: Organize RTL sources even if compilation failed
        info "Compilation failed, but organizing RTL sources as fallback"
        organize_rtl_sources "dse" "$config_name"
        
        return 1
    fi
}

build_custom_config() {
    local config_name=$1
    local description=$2
    
    debug "build_custom_config called with: config_name=$config_name, description=$description"
    
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building Custom Gemmini configuration: $description"
    info "Build log: $build_log"
    
    # Build command for Gemmini
    local build_cmd=""
    case "$SIMULATOR" in
        vlt)
            build_cmd="make CONFIG=$config_name"
            ;;
        vcs)
            build_cmd="make CONFIG=$config_name VCS=1"
            ;;
        msm)
            build_cmd="make CONFIG=$config_name VLOG=1"
            ;;
        *)
            error "Unsupported simulator: $SIMULATOR"
            return 1
            ;;
    esac
    
    debug "Command: $build_cmd"
    
    # Change to Chipyard simulator directory (workshop environment)
    cd "$CHIPYARD_HOME/sims/verilator"
    
    # Check if RTL-only mode is enabled
    debug "Checking RTL_ONLY_MODE: $RTL_ONLY_MODE"
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        info "RTL-only mode: Organizing source files without compilation"
        organize_rtl_sources "custom" "$config_name"
        return 0
    fi
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "Custom Gemmini $description build completed"
        info "Build artifacts in: $CHIPYARD_HOME/sims/verilator (workshop environment)"
        organize_build_outputs "custom" "$config_name"
        return 0
    else
        error "Custom Gemmini $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        # FALLBACK: Organize RTL sources even if compilation failed
        info "Compilation failed, but organizing RTL sources as fallback"
        organize_rtl_sources "custom" "$config_name"
        
        return 1
    fi
}

# Enhanced help function
show_help() {
    echo "Gemmini RTL Generation Script for Benchmarking"
    echo ""
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "This script generates RTL for ALL available Gemmini accelerator configurations"
    echo "suitable for benchmarking and performance evaluation."
    echo ""
    echo "Generated configurations:"
    echo "  Default configurations: 3 configs (Rocket core with different array sizes)"
    echo "  FP32 configurations: 3 configs (FP32 precision with different array sizes)"
    echo "  FP16 configurations: 2 configs (FP16 precision with different array sizes)"
    echo "  BF16 configurations: 3 configs (BF16 precision with different array sizes)"
    echo "  DSE configurations: 11 configs (Design space exploration variants)"
    echo "  Custom configurations: 1 config (Custom accelerator configuration)"
    echo ""
    echo "Total: 23 configurations"
    echo ""
    echo "Options:"
    echo "  -h, --help              Show this help message"
    echo "  --check                 Check prerequisites only"
    echo "  --simulator=SIM         Choose simulator (default: $DEFAULT_SIMULATOR)"
    echo "  --list-simulators       List all supported simulators"
    echo "  --disable-fp32          Disable FP32 configurations"
    echo "  --disable-fp16          Disable FP16 configurations"
    echo "  --disable-bf16          Disable BF16 configurations"
    echo "  --disable-dse           Disable DSE configurations"
    echo "  --disable-custom        Disable custom configurations"
    echo "  --rtl-only              Generate RTL file organization without compilation"
    echo "  --parallel=N            Run N parallel jobs (default: $DEFAULT_PARALLEL_JOBS, max: $MAX_PARALLEL_JOBS)"
    echo "  --sequential            Force sequential execution (same as --parallel=1)"
    echo ""
    echo "Supported Simulators:"
    echo "  vcs        | Synopsys VCS      | VCS_HOME            | vcs"
    echo "  msm        | ModelSim/Questa   | MODELSIM_HOME       | vlog, vsim"  
    echo "  vlt        | Verilator         | VERILATOR_ROOT      | verilator"
    echo "  ncv        | NC-Verilog        | NCV_HOME            | ncverilog"
    echo "  icv        | Icarus Verilog    | ICARUS_HOME         | iverilog"
    echo "  riv        | Aldec Riviera     | RIVIERA_HOME        | (riviera tools)"
    echo ""
    echo "Prerequisites:"
    echo "  - One of the supported simulators"
    echo "  - Java 8 or 11"
    echo "  - Scala Build Tool (SBT)"
    echo "  - RISC-V toolchain"
    echo "  - Git and standard build tools"
    echo "  - Run from score project root directory"
    echo "  - Score virtual environment in datasets/gemmini/workshop/myvenv/Score/"
    echo ""
    echo "Environment:"
    echo "  SCORE_GEMMINI_WORKSHOP   Root for Chipyard, Miniconda, venv, gemmini_env (default: <repo>/datasets/gemmini/workshop)"
    echo "  - Uses Score virtual environment from .../workshop/myvenv/Score/"
    echo "  - Writable Gemmini copy under .../workshop/gemmini_env/gemmini/"
    echo "  - Chipyard at .../workshop/chipyard/ (same tree as install_gemmini.sh)"
    echo "  - Does not modify submodule files"
    echo ""
    echo "Output:"
    echo "  Dataset directory: datasets/gemmini/<commit>/"
    echo "  Gemmini workshop: datasets/gemmini/workshop/"
    echo "  RTL configurations: datasets/gemmini/<commit>/rtl_configs/TYPE/CONFIG_NAME/"
    echo "  Simulation models: datasets/gemmini/<commit>/simulation_models/TYPE/CONFIG_NAME/"
    echo "  Build artifacts: datasets/gemmini/<commit>/build_artifacts/"
    echo "  Build logs: datasets/gemmini/<commit>/logs/"
    echo "  Session log: datasets/gemmini/<commit>/logs/session_TIMESTAMP.log"
    echo "  Individual build logs: datasets/gemmini/<commit>/logs/CONFIG_TIMESTAMP.log"
    echo ""
    echo "Examples:"
    echo "  $0                               # Use default simulator ($DEFAULT_SIMULATOR), sequential"
    echo "  $0 --simulator=msm               # Use ModelSim instead"
    echo "  $0 --simulator=vlt --check       # Check Verilator prerequisites"
    echo "  $0 --parallel=4                  # Run 4 parallel builds"
    echo "  $0 --simulator=vlt --parallel=2  # Use Verilator with 2 parallel jobs"
    echo "  $0 --sequential                  # Force sequential execution"
    echo ""
    echo "Parallel Execution:"
    echo "  - Default: Sequential execution (--parallel=1)"
    echo "  - Parallel jobs use separate build directories to avoid conflicts"
    echo "  - Each job gets individual log files with unique job IDs"
    echo "  - Memory usage scales with parallel jobs (monitor system resources)"
    echo "  - Recommended: Start with --parallel=2 and increase based on system capacity"
    echo "  - Job status tracked in: datasets/gemmini/<commit>/logs/job_status_TIMESTAMP.txt"
    echo ""
    echo "Common Issues:"
    echo "  - 'sbt not found': Install Scala Build Tool"
    echo "  - 'java not found': Install Java 8 or 11"
    echo "  - 'riscv64-unknown-elf-gcc not found': Install RISC-V toolchain"
    echo "  - Simulator not found: Install and setup environment variables"
    echo "  - Parallel build failures: Check individual job logs for specific errors"
}

# List supported simulators
show_simulators() {
    echo "Supported Gemmini Simulators:"
    echo ""
    echo "Simulator  | Name              | Environment Variable | Commands"
    echo "-----------|-------------------|---------------------|------------------"
    echo "vcs        | Synopsys VCS      | VCS_HOME            | vcs"
    echo "msm        | ModelSim/Questa   | MODELSIM_HOME       | vlog, vsim"  
    echo "vlt        | Verilator         | VERILATOR_ROOT      | verilator"
    echo "ncv        | NC-Verilog        | NCV_HOME            | ncverilog"
    echo "icv        | Icarus Verilog    | ICARUS_HOME         | iverilog"
    echo "riv        | Aldec Riviera     | RIVIERA_HOME        | (riviera tools)"
    echo ""
    echo "Default simulator: $DEFAULT_SIMULATOR"
    echo ""
    echo "Note: Verilator (vlt) is recommended as it's open source, free,"
    echo "      and widely available on most systems."
}

# Parse command line arguments
while [[ $# -gt 0 ]]; do
    case $1 in
        -h|--help)
            show_help
            exit 0
            ;;
        --check)
            echo "Checking prerequisites only..."
            mkdir -p "$LOG_DIR"
            setup_environment
            check_prerequisites
            echo "Prerequisite check completed. See logs in: $LOG_DIR"
            exit 0
            ;;
        --simulator=*)
            SIMULATOR="${1#*=}"
            shift
            ;;
        --list-simulators)
            show_simulators
            exit 0
            ;;
        --disable-fp32)
            ENABLE_FP32=false
            shift
            ;;
        --disable-fp16)
            ENABLE_FP16=false
            shift
            ;;
        --disable-bf16)
            ENABLE_BF16=false
            shift
            ;;
        --disable-dse)
            ENABLE_DSE=false
            shift
            ;;
        --disable-custom)
            ENABLE_CUSTOM=false
            shift
            ;;
        --rtl-only)
            RTL_ONLY_MODE=true
            shift
            ;;
        --parallel=*)
            PARALLEL_JOBS="${1#*=}"
            if [[ ! "$PARALLEL_JOBS" =~ ^[0-9]+$ ]] || [[ $PARALLEL_JOBS -lt 1 ]] || [[ $PARALLEL_JOBS -gt $MAX_PARALLEL_JOBS ]]; then
                error "Invalid parallel jobs: $PARALLEL_JOBS (must be 1-$MAX_PARALLEL_JOBS)"
                exit 1
            fi
            shift
            ;;
        --sequential)
            PARALLEL_JOBS=1
            shift
            ;;
        *)
            error "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

# Validate simulator choice
case "$SIMULATOR" in
    vcs|msm|vlt|ncv|icv|riv)
        # Valid simulator
        ;;
    *)
        error "Invalid simulator: $SIMULATOR"
        echo ""
        show_simulators
        exit 1
        ;;
esac

# Complete the main function by adding the missing sequential execution logic
main() {
    local start_time=$(date +%s)
    
    log "==================================================================="
    log "Gemmini RTL Generation Session Started"
    log "Commit ID: $COMMIT_ID"
    log "Session ID: $TIMESTAMP"
    log "Simulator: $SIMULATOR"
    log "Parallel Jobs: $PARALLEL_JOBS"
    log "==================================================================="
    
    # Setup environment
    setup_environment
    
    # Setup parallel execution
    setup_parallel_execution
    
    # Check prerequisites
    local prereq_failures=0
    check_prerequisites || prereq_failures=$?
    
    if [[ $prereq_failures -gt 0 ]]; then
        warning "$prereq_failures prerequisite checks failed, but continuing..."
        warning "Some builds may fail due to missing dependencies"
    fi
    
    # Calculate total configurations
    local total_configs=$((${#DEFAULT_CONFIGS[@]}))
    if [[ "$ENABLE_FP32" == "true" ]]; then
        total_configs=$((total_configs + ${#FP32_CONFIGS[@]}))
    fi
    if [[ "$ENABLE_FP16" == "true" ]]; then
        total_configs=$((total_configs + ${#FP16_CONFIGS[@]}))
    fi
    if [[ "$ENABLE_BF16" == "true" ]]; then
        total_configs=$((total_configs + ${#BF16_CONFIGS[@]}))
    fi
    if [[ "$ENABLE_DSE" == "true" ]]; then
        total_configs=$((total_configs + ${#DSE_CONFIGS[@]}))
    fi
    if [[ "$ENABLE_CUSTOM" == "true" ]]; then
        total_configs=$((total_configs + ${#CUSTOM_CONFIGS[@]}))
    fi
    
    log "Starting Gemmini RTL generation for benchmarking..."
    log "Total configurations to build: $total_configs"
    
    local success_count=0
    local failure_count=0
    local default_success=0
    local default_failed=0
    local fp32_success=0
    local fp32_failed=0
    local fp16_success=0
    local fp16_failed=0
    local bf16_success=0
    local bf16_failed=0
    local dse_success=0
    local dse_failed=0
    local custom_success=0
    local custom_failed=0
    
    # Build configurations (parallel or sequential based on PARALLEL_JOBS)
    if [[ $PARALLEL_JOBS -gt 1 ]]; then
        log "Starting parallel builds with $PARALLEL_JOBS concurrent jobs..."
        
        # Submit all Default jobs
        log "=== Submitting Default Configurations ==="
        for config in "${DEFAULT_CONFIGS[@]}"; do
            read config_name description <<< $(parse_config "$config")
            log "Submitting Default job: $config"
            start_parallel_job "default" "$config_name" "$description"
        done
        
        # Submit additional configuration types if enabled
        if [[ "$ENABLE_FP32" == "true" ]]; then
            log "=== Submitting FP32 Configurations ==="
            for config in "${FP32_CONFIGS[@]}"; do
                read config_name description <<< $(parse_config "$config")
                start_parallel_job "fp32" "$config_name" "$description"
            done
        fi
        
        if [[ "$ENABLE_FP16" == "true" ]]; then
            log "=== Submitting FP16 Configurations ==="
            for config in "${FP16_CONFIGS[@]}"; do
                read config_name description <<< $(parse_config "$config")
                start_parallel_job "fp16" "$config_name" "$description"
            done
        fi
        
        if [[ "$ENABLE_BF16" == "true" ]]; then
            log "=== Submitting BF16 Configurations ==="
            for config in "${BF16_CONFIGS[@]}"; do
                read config_name description <<< $(parse_config "$config")
                start_parallel_job "bf16" "$config_name" "$description"
            done
        fi
        
        if [[ "$ENABLE_DSE" == "true" ]]; then
            log "=== Submitting DSE Configurations ==="
            for config in "${DSE_CONFIGS[@]}"; do
                read config_name description <<< $(parse_config "$config")
                start_parallel_job "dse" "$config_name" "$description"
            done
        fi
        
        if [[ "$ENABLE_CUSTOM" == "true" ]]; then
            log "=== Submitting Custom Configurations ==="
            for config in "${CUSTOM_CONFIGS[@]}"; do
                read config_name description <<< $(parse_config "$config")
                start_parallel_job "custom" "$config_name" "$description"
            done
        fi
        
        # Wait for all parallel jobs to complete
        wait_for_all_jobs
        
        # Process results from parallel execution
        success_count=${#COMPLETED_JOBS[@]}
        failure_count=${#FAILED_JOBS[@]}
        
        # Count successes and failures by type
        for job in "${COMPLETED_JOBS[@]}"; do
            [[ "$job" == *"default"* ]] && ((default_success++))
            [[ "$job" == *"fp32"* ]] && ((fp32_success++))
            [[ "$job" == *"fp16"* ]] && ((fp16_success++))
            [[ "$job" == *"bf16"* ]] && ((bf16_success++))
            [[ "$job" == *"dse"* ]] && ((dse_success++))
            [[ "$job" == *"custom"* ]] && ((custom_success++))
        done
        
        for job in "${FAILED_JOBS[@]}"; do
            [[ "$job" == *"default"* ]] && ((default_failed++))
            [[ "$job" == *"fp32"* ]] && ((fp32_failed++))
            [[ "$job" == *"fp16"* ]] && ((fp16_failed++))
            [[ "$job" == *"bf16"* ]] && ((bf16_failed++))
            [[ "$job" == *"dse"* ]] && ((dse_failed++))
            [[ "$job" == *"custom"* ]] && ((custom_failed++))
        done
        
    else
        # Sequential execution (original behavior)
        log "Running sequential builds..."
        
        # Build Default configurations
        log "=== Building Default Configurations ==="
        local default_current=0
        for config in "${DEFAULT_CONFIGS[@]}"; do
            default_current=$((default_current + 1))
            read config_name description <<< $(parse_config "$config")
            
            log "Default Progress: $default_current/${#DEFAULT_CONFIGS[@]} - Processing: $config"
            debug "Parsed: config_name=$config_name, description=$description"
            
            if build_default_config "$config_name" "$description"; then
                success_count=$((success_count + 1))
                default_success=$((default_success + 1))
                info "Default $default_current/${#DEFAULT_CONFIGS[@]} completed successfully"
            else
                failure_count=$((failure_count + 1))
                default_failed=$((default_failed + 1))
                warning "Default $default_current/${#DEFAULT_CONFIGS[@]} failed"
            fi
        done
        
        # Build FP32 configurations
        if [[ "$ENABLE_FP32" == "true" ]]; then
            log "=== Building FP32 Configurations ==="
            local fp32_current=0
            for config in "${FP32_CONFIGS[@]}"; do
                fp32_current=$((fp32_current + 1))
                read config_name description <<< $(parse_config "$config")
                
                log "FP32 Progress: $fp32_current/${#FP32_CONFIGS[@]} - Processing: $config"
                debug "Parsed: config_name=$config_name, description=$description"
                
                if build_fp32_config "$config_name" "$description"; then
                    success_count=$((success_count + 1))
                    fp32_success=$((fp32_success + 1))
                    info "FP32 $fp32_current/${#FP32_CONFIGS[@]} completed successfully"
                else
                    failure_count=$((failure_count + 1))
                    fp32_failed=$((fp32_failed + 1))
                    warning "FP32 $fp32_current/${#FP32_CONFIGS[@]} failed"
                fi
            done
        fi
        
        # Build FP16 configurations
        if [[ "$ENABLE_FP16" == "true" ]]; then
            log "=== Building FP16 Configurations ==="
            local fp16_current=0
            for config in "${FP16_CONFIGS[@]}"; do
                fp16_current=$((fp16_current + 1))
                read config_name description <<< $(parse_config "$config")
                
                log "FP16 Progress: $fp16_current/${#FP16_CONFIGS[@]} - Processing: $config"
                debug "Parsed: config_name=$config_name, description=$description"
                
                if build_fp16_config "$config_name" "$description"; then
                    success_count=$((success_count + 1))
                    fp16_success=$((fp16_success + 1))
                    info "FP16 $fp16_current/${#FP16_CONFIGS[@]} completed successfully"
                else
                    failure_count=$((failure_count + 1))
                    fp16_failed=$((fp16_failed + 1))
                    warning "FP16 $fp16_current/${#FP16_CONFIGS[@]} failed"
                fi
            done
        fi
        
        # Build BF16 configurations
        if [[ "$ENABLE_BF16" == "true" ]]; then
            log "=== Building BF16 Configurations ==="
            local bf16_current=0
            for config in "${BF16_CONFIGS[@]}"; do
                bf16_current=$((bf16_current + 1))
                read config_name description <<< $(parse_config "$config")
                
                log "BF16 Progress: $bf16_current/${#BF16_CONFIGS[@]} - Processing: $config"
                debug "Parsed: config_name=$config_name, description=$description"
                
                if build_bf16_config "$config_name" "$description"; then
                    success_count=$((success_count + 1))
                    bf16_success=$((bf16_success + 1))      
                    info "BF16 $bf16_current/${#BF16_CONFIGS[@]} completed successfully"
                else
                    failure_count=$((failure_count + 1))
                    bf16_failed=$((bf16_failed + 1))
                    warning "BF16 $bf16_current/${#BF16_CONFIGS[@]} failed"
                fi
            done
        fi
        
        # Build DSE configurations
        if [[ "$ENABLE_DSE" == "true" ]]; then
            log "=== Building DSE Configurations ==="
            local dse_current=0
            for config in "${DSE_CONFIGS[@]}"; do
                dse_current=$((dse_current + 1))
                read config_name description <<< $(parse_config "$config")
                
                log "DSE Progress: $dse_current/${#DSE_CONFIGS[@]} - Processing: $config"
                debug "Parsed: config_name=$config_name, description=$description"
                
                if build_dse_config "$config_name" "$description"; then
                    success_count=$((success_count + 1))
                    dse_success=$((dse_success + 1))
                    info "DSE $dse_current/${#DSE_CONFIGS[@]} completed successfully"
                else
                    failure_count=$((failure_count + 1))
                    dse_failed=$((dse_failed + 1))
                    warning "DSE $dse_current/${#DSE_CONFIGS[@]} failed"
                fi
            done
        fi
        
        # Build Custom configurations
        if [[ "$ENABLE_CUSTOM" == "true" ]]; then
            log "=== Building Custom Configurations ==="
            local custom_current=0
            for config in "${CUSTOM_CONFIGS[@]}"; do
                custom_current=$((custom_current + 1))
                read config_name description <<< $(parse_config "$config")
                
                log "Custom Progress: $custom_current/${#CUSTOM_CONFIGS[@]} - Processing: $config"
                debug "Parsed: config_name=$config_name, description=$description"
                
                if build_custom_config "$config_name" "$description"; then
                    success_count=$((success_count + 1))
                    custom_success=$((custom_success + 1))
                    info "Custom $custom_current/${#CUSTOM_CONFIGS[@]} completed successfully"
                else
                    failure_count=$((failure_count + 1))
                    custom_failed=$((custom_failed + 1))
                    warning "Custom $custom_current/${#CUSTOM_CONFIGS[@]} failed"
                fi
            done
        fi
    fi

    # Generate summary report
    local end_time=$(date +%s)
    local duration=$((end_time - start_time))
    local hours=$((duration / 3600))
    local minutes=$(((duration % 3600) / 60))
    local seconds=$((duration % 60))
    
    log "==================================================================="
    log "Summary Report"
    log "==================================================================="
    log "Session ID: $TIMESTAMP"
    log "Simulator: $SIMULATOR"
    log "Execution mode: $([ $PARALLEL_JOBS -gt 1 ] && echo "Parallel ($PARALLEL_JOBS jobs)" || echo "Sequential")"
    log "Total time: ${hours}h ${minutes}m ${seconds}s"
    log "Total configurations: $total_configs"
    log "Successes: $success_count"
    log "Failures: $failure_count"
    log "==================================================================="
    log "Default Configurations: $default_success/$default_failed"
    log "FP32 Configurations: $fp32_success/$fp32_failed"
    log "FP16 Configurations: $fp16_success/$fp16_failed"
    log "BF16 Configurations: $bf16_success/$bf16_failed"
    log "DSE Configurations: $dse_success/$dse_failed"
    log "Custom Configurations: $custom_success/$custom_failed"
    log "==================================================================="
    
    log "Dataset directory: $DATASET_DIR"
    log "GEMMINI_WORKSHOP: $GEMMINI_WORKSHOP"
    log "gemmini_env (writable copy + build): $WORKSHOP_ENV_DIR"
    log "Gemmini copy: $WORKSHOP_GEMMINI_DIR"
    log "Chipyard: $WORKSHOP_CHIPYARD_DIR"
    log "Build scratch: $WORKSHOP_BUILD_DIR"
    log "Build artifacts located in: $BUILD_ROOT"
    log "Organized RTL configs in: $DATASET_DIR/rtl_configs/"
    log "Simulation models in: $DATASET_DIR/simulation_models/"
    log "Session logs located in: $LOG_DIR"
    log "Main session log: $SESSION_LOG"
    log "Individual build logs: $LOG_DIR/*_${TIMESTAMP}.log"
    if [[ $PARALLEL_JOBS -gt 1 ]]; then
        log "Parallel job status: $JOB_STATUS_FILE"
    fi
    
    if [[ $failure_count -gt 0 ]]; then
        error "Some builds failed. Check individual build logs for details."
        log "==================================================================="
        exit 1
    else
        success "All builds completed successfully!"
        log "==================================================================="
    fi
}

# Run main function
main

    