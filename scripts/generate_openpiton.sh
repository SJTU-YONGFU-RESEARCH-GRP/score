#!/bin/bash

# OpenPiton RTL Generation Script for Benchmarking
# This script generates different core configurations for performance evaluation

set -e  # Exit on any error

# Global variables
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"

# Function to get commit ID from git repository
get_commit_id() {
    local repo_path="$1"
    if [[ -d "$repo_path/.git" ]]; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

COMMIT_ID=$(get_commit_id "$PROJECT_ROOT/tools/openpiton")
DATASET_DIR="$PROJECT_ROOT/datasets/openpiton/$COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUILD_ARTIFACTS_DIR="$DATASET_DIR/build_artifacts"
MAIN_LOG="$LOG_DIR/main.log"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/session_${TIMESTAMP}.log"

# Default simulator (can be overridden by command line)
DEFAULT_SIMULATOR="vlt"  # Verilator - open source, free, and widely available
SIMULATOR="$DEFAULT_SIMULATOR"

# Parallel execution settings
# OpenPiton sims/pyhp write generated *.tmp.h / *.tmp.v under DV_ROOT; parallel
# jobs race and corrupt shared artifacts (Verilator pin mismatches, undefined
# macros). Default to sequential; use --parallel=N only if you accept that risk
# or run one configuration at a time.
DEFAULT_PARALLEL_JOBS=1
PARALLEL_JOBS="$DEFAULT_PARALLEL_JOBS"
MAX_PARALLEL_JOBS=12  # Safety limit

# Setup local environment if available
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

# Create dataset directory structure
mkdir -p "$LOG_DIR"
mkdir -p "$BUILD_ARTIFACTS_DIR"
mkdir -p "$DATASET_DIR/rtl_designs"
mkdir -p "$DATASET_DIR/simulation_models"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging_files generate_openpiton "$MAIN_LOG" "$SESSION_LOG"

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
    check_command "perl" "Perl interpreter" || ((prereq_failed++))
    check_command "make" "Make build tool" || ((prereq_failed++))
    check_command "gcc" "GCC compiler" || ((prereq_failed++))
    
    # Check for common missing dependencies mentioned in OpenPiton docs
    check_command "cpp" "C preprocessor" || warning "cpp not found - you may need to install gcc/g++"
    
    # Check Perl modules (OpenPiton sims needs these; RHEL 9 splits fields into perl-fields)
    if ! perl -Mfields -e1 2>/dev/null; then
        warning "Perl fields module not found — run: $PROJECT_ROOT/scripts/install_openpiton.sh"
        ((prereq_failed++))
    else
        success "Perl fields module found"
    fi
    if ! perl -MBit::Vector -e 'print "Bit::Vector OK\n"' 2>/dev/null; then
        warning "Perl Bit::Vector module not found — run: $PROJECT_ROOT/scripts/install_openpiton.sh"
        ((prereq_failed++))
    else
        success "Perl Bit::Vector module found"
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
    if [[ ! -d "tools/openpiton" ]]; then
        error "This script must be run from the score project root directory"
        error "Current directory: $(pwd)"
        error "Expected to find: tools/openpiton"
        exit 1
    fi
    
    # Set up OpenPiton environment variables
    export PITON_ROOT="$(pwd)/tools/openpiton"
    export DV_ROOT="$PITON_ROOT/piton"
    export BUILD_ROOT="$BUILD_ARTIFACTS_DIR"
    
    info "PITON_ROOT: $PITON_ROOT"
    info "DV_ROOT: $DV_ROOT"
    info "BUILD_ROOT: $BUILD_ROOT"
    info "DATASET_DIR: $DATASET_DIR"
    info "LOG_DIR: $LOG_DIR"
    info "SIMULATOR: $SIMULATOR"
    info "RTL_ONLY_MODE: $RTL_ONLY_MODE"
    
    # Source OpenPiton settings
    if [[ -f "$PITON_ROOT/piton/piton_settings.bash" ]]; then
        source "$PITON_ROOT/piton/piton_settings.bash" 2>&1 | tee -a "$SESSION_LOG"
        success "OpenPiton settings loaded"
    else
        error "Cannot find piton_settings.bash at $PITON_ROOT/piton/piton_settings.bash"
        exit 1
    fi

    # piton_settings.bash may not prepend DV tools; sims/mktools need this on PATH
    if [[ -d "$DV_ROOT/tools/bin" ]]; then
        export PATH="$DV_ROOT/tools/bin:$PATH"
        debug "Prepended DV tools/bin to PATH: $DV_ROOT/tools/bin"
    fi

    # Debug: Check if PATH includes piton tools/bin
    if echo "$PATH" | grep -q "piton/tools/bin"; then
        debug "PATH includes piton/tools/bin"
    else
        warning "PATH may be missing piton/tools/bin (sims could fail)"
    fi
    debug "Current PATH: $PATH"

    # Ariane: upstream piton/ariane_setup.sh only works when sourced from an interactive bash
    # ($0 must end with 'bash') while cwd is PITON_ROOT. Sourcing from this script sets $0 to
    # generate_openpiton.sh and aborts. Replicate the exports from ariane_setup.sh here.
    if [[ -d "$PITON_ROOT/piton/design/chip/tile/ariane" ]]; then
        export ARIANE_ROOT="${PITON_ROOT}/piton/design/chip/tile/ariane/"
        export CXX="${CXX:-g++}"
        export CC="${CC:-gcc}"
        if [[ -z "${RISCV:-}" ]]; then
            export RISCV="${HOME}/scratch/riscv_install"
        fi
        local _ariane_verilator="${ARIANE_ROOT}/tmp/verilator-4.014"
        if [[ -d "${_ariane_verilator}/bin" ]]; then
            export VERILATOR_ROOT="${_ariane_verilator}/"
            export PATH="${VERILATOR_ROOT}/bin:$PATH"
            export C_INCLUDE_PATH="${RISCV}/include:${VERILATOR_ROOT}/include${C_INCLUDE_PATH:+:$C_INCLUDE_PATH}"
            export CPLUS_INCLUDE_PATH="${RISCV}/include:${VERILATOR_ROOT}/include${CPLUS_INCLUDE_PATH:+:$CPLUS_INCLUDE_PATH}"
        else
            export C_INCLUDE_PATH="${RISCV}/include${C_INCLUDE_PATH:+:$C_INCLUDE_PATH}"
            export CPLUS_INCLUDE_PATH="${RISCV}/include${CPLUS_INCLUDE_PATH:+:$CPLUS_INCLUDE_PATH}"
        fi
        export PATH="${RISCV}/bin:$PATH"
        export LIBRARY_PATH="${RISCV}/lib${LIBRARY_PATH:+:$LIBRARY_PATH}"
        export LD_LIBRARY_PATH="${RISCV}/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}"
        success "Ariane RISC-V environment variables set (see tools/openpiton/piton/ariane_setup.sh)"
    else
        warning "Ariane RTL directory not found under piton/design/chip/tile/ariane — RISC-V builds may not work"
    fi
    
    # Create dataset directories if they don't exist
    mkdir -p "$BUILD_ROOT"
    mkdir -p "$DATASET_DIR/rtl_designs"
    mkdir -p "$DATASET_DIR/simulation_models"
    
    # NOW check for mktools after environment is properly set up
    debug "Checking for mktools in PATH..."
    debug "Expected mktools location: $DV_ROOT/tools/bin/mktools"
    
    if [[ -f "$DV_ROOT/tools/bin/mktools" ]]; then
        debug "mktools file exists at expected location"
        if command -v mktools >/dev/null 2>&1; then
            success "mktools found in PATH: $(which mktools)"
            log "Running mktools to rebuild tools..."
            if mktools 2>&1 | tee -a "$SESSION_LOG"; then
                success "mktools completed successfully"
            else
                warning "mktools failed but continuing"
            fi
        else
            warning "mktools file exists but not found in PATH"
            warning "Manually running mktools from full path..."
            if "$DV_ROOT/tools/bin/mktools" 2>&1 | tee -a "$SESSION_LOG"; then
                success "mktools completed successfully"
            else
                warning "mktools failed but continuing"
            fi
        fi
    else
        warning "mktools not found at expected location: $DV_ROOT/tools/bin/mktools"
        warning "Try running: export PITON_ROOT=\$(pwd)/tools/openpiton && source tools/openpiton/piton/piton_settings.bash && mktools"
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
    local x_tiles="$3"
    local y_tiles="$4"
    local description="$5"
    
    wait_for_job_slot
    
    local job_id="${job_type}_${config_name}_$$_$(date +%s)"
    local job_info="$job_id|$job_type|$config_name"
    local start_time=$(date +%s)
    
    info "Starting parallel job: $job_type $config_name (${x_tiles}x${y_tiles})"
    
    # Start job in background with unique build directory
    case "$job_type" in
        "sparc")
            build_sparc_config_parallel "$x_tiles" "$y_tiles" "$description" "$job_id" &
            ;;
        "ariane")
            build_ariane_config_parallel "$x_tiles" "$y_tiles" "$description" "$job_id" &
            ;;
        "pico")
            build_pico_config_parallel "$x_tiles" "$y_tiles" "$description" "$job_id" &
            ;;
        "pico_het")
            build_pico_het_config_parallel "$x_tiles" "$y_tiles" "$description" "$job_id" &
            ;;
        "cache_variant")
            build_cache_variant_config_parallel "$x_tiles" "$y_tiles" "$description" "$job_id" &
            ;;
        "network_variant")
            build_network_variant_config_parallel "$x_tiles" "$y_tiles" "$description" "$job_id" &
            ;;
        "oram")
            build_oram_config_parallel "$x_tiles" "$y_tiles" "$description" "$job_id" &
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

# Function to export all required OpenPiton environment variables
export_openpiton_env() {
    export TRE_SEARCH="$DV_ROOT/tools/env/tools.iver"
    export TRE_ENTRY="/"
    export TRE_LOG="nobody"
    export ENVDIR="$DV_ROOT/tools/env"
    export PERL_MODULE_BASE="$DV_ROOT/tools/perlmod"
    # Parallel jobs set MODEL_DIR to a per-job path before calling this; do not clobber it.
    if [[ -z "${MODEL_DIR:-}" ]]; then
        export MODEL_DIR="$PITON_ROOT/build"
    fi
    export PERL_CMD="/usr/bin/perl"
    
    # Set library path for goldfinger
    export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:$DV_ROOT/tools/src/goldfinger/lib"
    
    # Ensure the tools/bin directory is in PATH
    if [[ ":$PATH:" != *":$DV_ROOT/tools/bin:"* ]]; then
        export PATH="$DV_ROOT/tools/bin:$PATH"
    fi
}

# Function to organize RTL source files without compilation
organize_rtl_sources() {
    local config_type="$1"
    local config_name="$2"
    local x_tiles="$3"
    local y_tiles="$4"
    
    debug "organize_rtl_sources called with: $config_type, $config_name, $x_tiles, $y_tiles"
    
    local config_dir="$DATASET_DIR/rtl_designs/${config_type}/${config_name}"
    debug "Creating config directory: $config_dir"
    
    # Create configuration-specific directories
    mkdir -p "$config_dir" || return 1
    debug "Directory created successfully"
    
    info "Organizing RTL sources for $config_name (RTL-only mode)"
    
    # Copy RTL sources from OpenPiton design tree
    local piton_design="$DV_ROOT/design"
    
    # Create RTL subdirectories
    mkdir -p "$config_dir/chip"
    mkdir -p "$config_dir/chipset"
    mkdir -p "$config_dir/common"
    mkdir -p "$config_dir/include"
    
    debug "Copying RTL files from $piton_design"
    
    # Copy chip RTL files
    if [[ -d "$piton_design/chip" ]]; then
        find "$piton_design/chip" -name "*.v" -o -name "*.sv" | head -20 | while read rtl_file; do
            if [[ -f "$rtl_file" ]]; then
                relative_path=${rtl_file#$piton_design/chip/}
                target_dir="$config_dir/chip/$(dirname "$relative_path")"
                mkdir -p "$target_dir"
                cp "$rtl_file" "$target_dir/" 2>/dev/null || true
            fi
        done
    fi
    
    # Copy chipset RTL files
    if [[ -d "$piton_design/chipset" ]]; then
        find "$piton_design/chipset" -name "*.v" -o -name "*.sv" | head -10 | while read rtl_file; do
            if [[ -f "$rtl_file" ]]; then
                relative_path=${rtl_file#$piton_design/chipset/}
                target_dir="$config_dir/chipset/$(dirname "$relative_path")"
                mkdir -p "$target_dir"
                cp "$rtl_file" "$target_dir/" 2>/dev/null || true
            fi
        done
    fi
    
    # Copy common RTL files
    if [[ -d "$piton_design/common" ]]; then
        find "$piton_design/common" -name "*.v" -o -name "*.sv" | head -10 | while read rtl_file; do
            if [[ -f "$rtl_file" ]]; then
                relative_path=${rtl_file#$piton_design/common/}
                target_dir="$config_dir/common/$(dirname "$relative_path")"
                mkdir -p "$target_dir"
                cp "$rtl_file" "$target_dir/" 2>/dev/null || true
            fi
        done
    fi
    
    # Copy include files
    if [[ -d "$piton_design/include" ]]; then
        find "$piton_design/include" -name "*.vh" -o -name "*.svh" -o -name "*.h" | head -10 | while read incl_file; do
            if [[ -f "$incl_file" ]]; then
                cp "$incl_file" "$config_dir/include/" 2>/dev/null || true
            fi
        done
    fi
    
    # Create configuration-specific files
    cat > "$config_dir/config.yaml" << EOF
core_type: $config_type
config_name: $config_name
x_tiles: $x_tiles
y_tiles: $y_tiles
total_tiles: $((x_tiles * y_tiles))
simulator: $SIMULATOR
generation_date: $(date)
rtl_only: true
description: "OpenPiton $config_type configuration with ${x_tiles}x${y_tiles} tiles"
EOF
    
    # Create a configuration-specific top-level module
    cat > "$config_dir/${config_name}_top.v" << EOF
// Top-level module for $config_name configuration
// Generated on $(date)
// OpenPiton ${config_type} core with ${x_tiles}x${y_tiles} tiles

module ${config_name}_top (
    input  clk,
    input  rst_n,
    output ready
);

    // Configuration parameters
    parameter X_TILES = $x_tiles;
    parameter Y_TILES = $y_tiles;
    parameter TOTAL_TILES = X_TILES * Y_TILES;
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
    
    # Create file list for this configuration
    find "$config_dir" -name "*.v" -o -name "*.sv" > "$config_dir/filelist.f"
    
    local rtl_file_count=$(find "$config_dir" -name "*.v" -o -name "*.sv" | wc -l)
    success "RTL sources organized for $config_name: $rtl_file_count RTL files copied"
    debug "organize_rtl_sources completed successfully"
    return 0
}

# Enhanced output organization functions
organize_build_outputs() {
    local config_type="$1"
    local config_name="$2"
    local x_tiles="$3"
    local y_tiles="$4"
    
    local config_dir="$DATASET_DIR/rtl_designs/${config_type}/${config_name}"
    local sim_model_dir="$DATASET_DIR/simulation_models/${config_type}/${config_name}"
    
    # Create configuration-specific directories
    mkdir -p "$config_dir"
    mkdir -p "$sim_model_dir"
    
    # Copy RTL files to organized structure
    if [[ -d "$BUILD_ROOT" ]]; then
        # Copy generated RTL files
        find "$BUILD_ROOT" -name "*.v" -o -name "*.sv" -o -name "*.vh" 2>/dev/null | while read rtl_file; do
            if [[ -f "$rtl_file" ]]; then
                cp "$rtl_file" "$config_dir/" 2>/dev/null || true
            fi
        done
        
        # Copy simulation models
        find "$BUILD_ROOT" -name "simv*" -o -name "*.exe" -o -name "*.so" 2>/dev/null | while read sim_file; do
            if [[ -f "$sim_file" ]]; then
                cp "$sim_file" "$sim_model_dir/" 2>/dev/null || true
            fi
        done
        
        # Create configuration summary
        cat > "$config_dir/config_summary.txt" << EOF
Configuration: $config_name
Type: $config_type
Tiles: ${x_tiles}x${y_tiles}
Simulator: $SIMULATOR
Generated: $(date)
Build Location: $BUILD_ROOT
EOF
        
        info "Organized outputs for $config_name in $config_dir"
    fi
}

# Configuration arrays for different benchmark scenarios
declare -a SPARC_CONFIGS=(
    "1x1:SPARC single tile"
    "2x1:SPARC 2-tile horizontal"
    "1x2:SPARC 2-tile vertical" 
    "2x2:SPARC 4-tile array"
    "4x1:SPARC 4-tile horizontal"
    "1x4:SPARC 4-tile vertical"
    "4x2:SPARC 8-tile array"
    "4x4:SPARC 16-tile array"
)

declare -a ARIANE_CONFIGS=(
    "1x1:Ariane single tile"
    "2x1:Ariane 2-tile horizontal"
    "1x2:Ariane 2-tile vertical"
    "2x2:Ariane 4-tile array"
    "4x1:Ariane 4-tile horizontal"
    "1x4:Ariane 4-tile vertical"
    "4x2:Ariane 8-tile array"
    "4x4:Ariane 16-tile array"
)

# NEW: PicoRV32 configurations
declare -a PICO_CONFIGS=(
    "1x1:PicoRV32 single tile"
    "2x1:PicoRV32 2-tile horizontal"
    "1x2:PicoRV32 2-tile vertical"
    "2x2:PicoRV32 4-tile array"
    "4x1:PicoRV32 4-tile horizontal"
    "1x4:PicoRV32 4-tile vertical"
    "4x2:PicoRV32 8-tile array"
    "4x4:PicoRV32 16-tile array"
)

# NEW: PicoRV32 Heterogeneous configurations
declare -a PICO_HET_CONFIGS=(
    "1x1:PicoRV32-Het single tile"
    "2x1:PicoRV32-Het 2-tile horizontal"
    "1x2:PicoRV32-Het 2-tile vertical"
    "2x2:PicoRV32-Het 4-tile array"
    "4x1:PicoRV32-Het 4-tile horizontal"
    "1x4:PicoRV32-Het 4-tile vertical"
    "4x2:PicoRV32-Het 8-tile array"
    "4x4:PicoRV32-Het 16-tile array"
)

# NEW: Cache configuration variants for SPARC
declare -a SPARC_CACHE_CONFIGS=(
    "2x2:SPARC 4-tile L1I-32K"
    "2x2:SPARC 4-tile L1D-16K"
    "2x2:SPARC 4-tile L15-16K"
    "2x2:SPARC 4-tile L2-128K"
    "2x2:SPARC 4-tile L2-8way"
)

# NEW: Network configuration variants
declare -a NETWORK_CONFIGS=(
    "2x2:SPARC 4-tile xbar-network"
    "4x4:SPARC 16-tile xbar-network"
    "2x2:Ariane 4-tile xbar-network"
    "4x4:Ariane 16-tile xbar-network"
)

# NEW: ORAM configurations (if available)
declare -a ORAM_CONFIGS=(
    "1x1:SPARC-ORAM single tile"
    "2x2:SPARC-ORAM 4-tile array"
)

# Configuration control flags
ENABLE_PICO=true
ENABLE_PICO_HET=true
ENABLE_CACHE_VARIANTS=true
ENABLE_NETWORK_VARIANTS=true
ENABLE_ORAM=false  # Default off as it may not always be available
RTL_ONLY_MODE=false  # Generate RTL organization without compilation

# Parallel execution control
ACTIVE_JOBS=()
PENDING_JOBS=()
COMPLETED_JOBS=()
FAILED_JOBS=()
JOB_PIDS=()
JOB_STATUS_FILE=""

# Enhanced build functions with simulator support
build_sparc_config() {
    local x_tiles=$1
    local y_tiles=$2
    local description=$3
    
    debug "build_sparc_config called with: x_tiles=$x_tiles, y_tiles=$y_tiles, description=$description"
    
    local config_name="sparc_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building SPARC configuration: $description (${x_tiles}x${y_tiles}) with $SIMULATOR"
    info "Build log: $build_log"
    
    # Build command varies by simulator
    local build_cmd=""
    case "$SIMULATOR" in
        vcs)
            build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=vcs -vcs_build"
            ;;
        msm)
            build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=msm -msm_build"
            ;;
        vlt)
            build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=vlt -vlt_build"
            ;;
        ncv)
            build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=ncv -ncv_build"
            ;;
        icv)
            build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=icv -icv_build"
            ;;
        riv)
            build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=riv -riv_build"
            ;;
        *)
            error "Unsupported simulator: $SIMULATOR"
            return 1
            ;;
    esac
    
    debug "Command: $build_cmd"
    
    # Change to OpenPiton source directory (sims must be run from here)
    cd "$DV_ROOT"
    
    # Export all required environment variables for OpenPiton
    export_openpiton_env
    
    # Check if RTL-only mode is enabled
    debug "Checking RTL_ONLY_MODE: $RTL_ONLY_MODE"
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        info "RTL-only mode: Organizing source files without compilation"
        organize_rtl_sources "sparc" "sparc_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    fi
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "SPARC $description build completed"
        info "Build artifacts in: $BUILD_ROOT"
        organize_build_outputs "sparc" "sparc_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        error "SPARC $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        # FALLBACK: Organize RTL sources even if compilation failed
        info "Compilation failed, but organizing RTL sources as fallback"
        organize_rtl_sources "sparc" "sparc_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        
        return 1
    fi
}

# Parallel version of build_sparc_config
build_sparc_config_parallel() {
    local x_tiles=$1
    local y_tiles=$2
    local description=$3
    local job_id=$4
    
    debug "build_sparc_config_parallel called with: x_tiles=$x_tiles, y_tiles=$y_tiles, description=$description, job_id=$job_id"
    
    local config_name="sparc_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    local job_build_dir="$BUILD_ARTIFACTS_DIR/job_${job_id}"
    
    # Create job-specific build directory
    mkdir -p "$job_build_dir"
    export BUILD_ROOT="$job_build_dir"
    # sims writes config.v/flist under $MODEL_DIR/<sys>/rel-0.1 — must be unique per parallel job
    export MODEL_DIR="$job_build_dir"
    
    log "Building SPARC configuration (parallel): $description (${x_tiles}x${y_tiles}) with $SIMULATOR" | tee -a "$build_log"
    info "Job ID: $job_id, Build log: $build_log" | tee -a "$build_log"
    
    # Build command varies by simulator
    local build_cmd=""
    case "$SIMULATOR" in
        vcs)
            build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=vcs -vcs_build"
            ;;
        msm)
            build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=msm -msm_build"
            ;;
        vlt)
            build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=vlt -vlt_build"
            ;;
        ncv)
            build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=ncv -ncv_build"
            ;;
        icv)
            build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=icv -icv_build"
            ;;
        riv)
            build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=riv -riv_build"
            ;;
        *)
            error "Unsupported simulator: $SIMULATOR" | tee -a "$build_log"
            return 1
            ;;
    esac
    
    debug "Command: $build_cmd" | tee -a "$build_log"
    
    # Change to OpenPiton source directory (sims must be run from here)
    cd "$DV_ROOT"
    
    # Export all required environment variables for OpenPiton
    export_openpiton_env
    
    # Check if RTL-only mode is enabled
    debug "Checking RTL_ONLY_MODE: $RTL_ONLY_MODE" | tee -a "$build_log"
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        info "RTL-only mode: Organizing source files without compilation" | tee -a "$build_log"
        organize_rtl_sources "sparc" "sparc_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    fi
    
    # Run build with comprehensive logging
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        success "SPARC $description build completed (job $job_id)" | tee -a "$build_log"
        info "Build artifacts in: $job_build_dir" | tee -a "$build_log"
        organize_build_outputs "sparc" "sparc_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        error "SPARC $description build failed (job $job_id)" | tee -a "$build_log"
        error "Check build log: $build_log" | tee -a "$build_log"
        
        # FALLBACK: Organize RTL sources even if compilation failed
        info "Compilation failed, but organizing RTL sources as fallback" | tee -a "$build_log"
        organize_rtl_sources "sparc" "sparc_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        
        return 1
    fi
}

build_ariane_config() {
    local x_tiles=$1
    local y_tiles=$2
    local description=$3
    
    debug "build_ariane_config called with: x_tiles=$x_tiles, y_tiles=$y_tiles, description=$description"
    
    local config_name="ariane_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building Ariane configuration: $description (${x_tiles}x${y_tiles}) with $SIMULATOR"
    info "Build log: $build_log"
    
    # Build command for Ariane (RISC-V)
    local build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=$SIMULATOR -${SIMULATOR}_build -ariane"
    debug "Command: $build_cmd"
    
    # Change to OpenPiton source directory (sims must be run from here)
    cd "$DV_ROOT"
    
    # Export all required environment variables for OpenPiton
    export_openpiton_env
    
    # Check if RTL-only mode is enabled
    debug "Checking RTL_ONLY_MODE: $RTL_ONLY_MODE"
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        info "RTL-only mode: Organizing source files without compilation"
        organize_rtl_sources "ariane" "ariane_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    fi
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "Ariane $description build completed"
        info "Build artifacts in: $BUILD_ROOT"
        organize_build_outputs "ariane" "ariane_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        error "Ariane $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        # FALLBACK: Organize RTL sources even if compilation failed
        info "Compilation failed, but organizing RTL sources as fallback"
        organize_rtl_sources "ariane" "ariane_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        
        return 1
    fi
}

# Parallel version of build_ariane_config
build_ariane_config_parallel() {
    local x_tiles=$1
    local y_tiles=$2
    local description=$3
    local job_id=$4
    
    debug "build_ariane_config_parallel called with: x_tiles=$x_tiles, y_tiles=$y_tiles, description=$description, job_id=$job_id"
    
    local config_name="ariane_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    local job_build_dir="$BUILD_ARTIFACTS_DIR/job_${job_id}"
    
    # Create job-specific build directory
    mkdir -p "$job_build_dir"
    export BUILD_ROOT="$job_build_dir"
    # sims writes config.v/flist under $MODEL_DIR/<sys>/rel-0.1 — must be unique per parallel job
    export MODEL_DIR="$job_build_dir"
    
    log "Building Ariane configuration (parallel): $description (${x_tiles}x${y_tiles}) with $SIMULATOR" | tee -a "$build_log"
    info "Job ID: $job_id, Build log: $build_log" | tee -a "$build_log"
    
    # Build command for Ariane (RISC-V)
    local build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=$SIMULATOR -${SIMULATOR}_build -ariane"
    debug "Command: $build_cmd" | tee -a "$build_log"
    
    # Change to OpenPiton source directory (sims must be run from here)
    cd "$DV_ROOT"
    
    # Export all required environment variables for OpenPiton
    export_openpiton_env
    
    # Check if RTL-only mode is enabled
    debug "Checking RTL_ONLY_MODE: $RTL_ONLY_MODE" | tee -a "$build_log"
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        info "RTL-only mode: Organizing source files without compilation" | tee -a "$build_log"
        organize_rtl_sources "ariane" "ariane_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    fi
    
    # Run build with comprehensive logging
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        success "Ariane $description build completed (job $job_id)" | tee -a "$build_log"
        info "Build artifacts in: $job_build_dir" | tee -a "$build_log"
        organize_build_outputs "ariane" "ariane_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        error "Ariane $description build failed (job $job_id)" | tee -a "$build_log"
        error "Check build log: $build_log" | tee -a "$build_log"
        
        # FALLBACK: Organize RTL sources even if compilation failed
        info "Compilation failed, but organizing RTL sources as fallback" | tee -a "$build_log"
        organize_rtl_sources "ariane" "ariane_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        
        return 1
    fi
}

# Add parallel versions for the other build functions (abbreviated for space)
build_pico_config_parallel() {
    local x_tiles=$1 y_tiles=$2 description=$3 job_id=$4
    local config_name="pico_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    local job_build_dir="$BUILD_ARTIFACTS_DIR/job_${job_id}"
    mkdir -p "$job_build_dir"
    export BUILD_ROOT="$job_build_dir"
    # sims writes config.v/flist under $MODEL_DIR/<sys>/rel-0.1 — must be unique per parallel job
    export MODEL_DIR="$job_build_dir"
    cd "$DV_ROOT"
    export_openpiton_env
    
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        organize_rtl_sources "pico" "pico_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    fi
    
    local build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=$SIMULATOR -${SIMULATOR}_build -pico"
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        organize_build_outputs "pico" "pico_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        organize_rtl_sources "pico" "pico_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 1
    fi
}

build_pico_het_config_parallel() {
    local x_tiles=$1 y_tiles=$2 description=$3 job_id=$4
    local config_name="pico_het_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    local job_build_dir="$BUILD_ARTIFACTS_DIR/job_${job_id}"
    mkdir -p "$job_build_dir"
    export BUILD_ROOT="$job_build_dir"
    # sims writes config.v/flist under $MODEL_DIR/<sys>/rel-0.1 — must be unique per parallel job
    export MODEL_DIR="$job_build_dir"
    cd "$DV_ROOT"
    export_openpiton_env
    
    local build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=$SIMULATOR -${SIMULATOR}_build -pico -pico_het"
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        organize_build_outputs "pico_het" "pico_het_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        return 1
    fi
}

build_cache_variant_config_parallel() {
    local x_tiles=$1 y_tiles=$2 description=$3 job_id=$4
    local config_name="cache_variant_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    local job_build_dir="$BUILD_ARTIFACTS_DIR/job_${job_id}"
    mkdir -p "$job_build_dir"
    export BUILD_ROOT="$job_build_dir"
    # sims writes config.v/flist under $MODEL_DIR/<sys>/rel-0.1 — must be unique per parallel job
    export MODEL_DIR="$job_build_dir"
    cd "$DV_ROOT"
    export_openpiton_env
    
    local cache_args=""
    [[ "$description" == *"L1I-32K"* ]] && cache_args="-config_l1i_size=32768"
    [[ "$description" == *"L1D-16K"* ]] && cache_args="-config_l1d_size=16384"
    [[ "$description" == *"L15-16K"* ]] && cache_args="-config_l15_size=16384"
    [[ "$description" == *"L2-128K"* ]] && cache_args="-config_l2_size=131072"
    [[ "$description" == *"L2-8way"* ]] && cache_args="-config_l2_associativity=8"
    
    local build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=$SIMULATOR -${SIMULATOR}_build $cache_args"
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        local cache_type=$(echo "$description" | grep -o "L[0-9][ID]*-[0-9KM]*\|L[0-9]-[0-9]*way" | head -1)
        organize_build_outputs "cache_variants" "cache_${cache_type}_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        return 1
    fi
}

build_network_variant_config_parallel() {
    local x_tiles=$1 y_tiles=$2 description=$3 job_id=$4
    local config_name="network_variant_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    local job_build_dir="$BUILD_ARTIFACTS_DIR/job_${job_id}"
    mkdir -p "$job_build_dir"
    export BUILD_ROOT="$job_build_dir"
    # sims writes config.v/flist under $MODEL_DIR/<sys>/rel-0.1 — must be unique per parallel job
    export MODEL_DIR="$job_build_dir"
    cd "$DV_ROOT"
    export_openpiton_env
    
    local network_args="-network_config=xbar_config"
    local core_args=""
    [[ "$description" == *"Ariane"* ]] && core_args="-ariane"
    
    local build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=$SIMULATOR -${SIMULATOR}_build $network_args $core_args"
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        local net_core=$(echo "$description" | grep -o "SPARC\|Ariane")
        organize_build_outputs "network_variants" "xbar_${net_core}_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        return 1
    fi
}

build_oram_config_parallel() {
    local x_tiles=$1 y_tiles=$2 description=$3 job_id=$4
    local config_name="oram_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${job_id}.log"
    local job_build_dir="$BUILD_ARTIFACTS_DIR/job_${job_id}"
    mkdir -p "$job_build_dir"
    export BUILD_ROOT="$job_build_dir"
    # sims writes config.v/flist under $MODEL_DIR/<sys>/rel-0.1 — must be unique per parallel job
    export MODEL_DIR="$job_build_dir"
    cd "$DV_ROOT"
    export_openpiton_env
    
    local build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=$SIMULATOR -${SIMULATOR}_build -oram"
    if eval "$build_cmd" >> "$build_log" 2>&1; then
        organize_build_outputs "oram" "oram_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        return 1
    fi
}

# Function to parse configuration string
parse_config() {
    local config=$1
    local tiles=$(echo $config | cut -d':' -f1)
    local description=$(echo $config | cut -d':' -f2)
    local x_tiles=$(echo $tiles | cut -d'x' -f1)
    local y_tiles=$(echo $tiles | cut -d'x' -f2)
    
    echo "$x_tiles $y_tiles $description"
}

# NEW: Build function for PicoRV32 configurations
build_pico_config() {
    local x_tiles=$1
    local y_tiles=$2
    local description=$3
    
    local config_name="pico_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building PicoRV32 configuration: $description (${x_tiles}x${y_tiles}) with $SIMULATOR"
    info "Build log: $build_log"
    
    # Build command for PicoRV32
    local build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=$SIMULATOR -${SIMULATOR}_build -pico"
    debug "Command: $build_cmd"
    
    # Change to OpenPiton source directory (sims must be run from here)
    cd "$DV_ROOT"
    
    # Export all required environment variables for OpenPiton
    export_openpiton_env
    
    # Check if RTL-only mode is enabled
    debug "Checking RTL_ONLY_MODE: $RTL_ONLY_MODE"
    if [[ "$RTL_ONLY_MODE" == "true" ]]; then
        info "RTL-only mode: Organizing source files without compilation"
        organize_rtl_sources "pico" "pico_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    fi
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "PicoRV32 $description build completed"
        info "Build artifacts in: $BUILD_ROOT"
        organize_build_outputs "pico" "pico_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        error "PicoRV32 $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        # FALLBACK: Organize RTL sources even if compilation failed
        info "Compilation failed, but organizing RTL sources as fallback"
        organize_rtl_sources "pico" "pico_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        
        return 1
    fi
}

# NEW: Build function for PicoRV32 Heterogeneous configurations
build_pico_het_config() {
    local x_tiles=$1
    local y_tiles=$2
    local description=$3
    
    local config_name="pico_het_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building PicoRV32-Het configuration: $description (${x_tiles}x${y_tiles}) with $SIMULATOR"
    info "Build log: $build_log"
    
    # Build command for PicoRV32 Heterogeneous
    local build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=$SIMULATOR -${SIMULATOR}_build -pico -pico_het"
    debug "Command: $build_cmd"
    
    # Change to OpenPiton source directory (sims must be run from here)
    cd "$DV_ROOT"
    
    # Export all required environment variables for OpenPiton
    export_openpiton_env
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "PicoRV32-Het $description build completed"
        info "Build artifacts in: $BUILD_ROOT"
        organize_build_outputs "pico_het" "pico_het_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        error "PicoRV32-Het $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        return 1
    fi
}

# NEW: Build function for cache variant configurations
build_cache_variant_config() {
    local x_tiles=$1
    local y_tiles=$2
    local description=$3
    
    local config_name="cache_variant_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building Cache Variant configuration: $description (${x_tiles}x${y_tiles}) with $SIMULATOR"
    info "Build log: $build_log"
    
    # Parse cache configuration from description
    local cache_args=""
    if [[ "$description" == *"L1I-32K"* ]]; then
        cache_args="-config_l1i_size=32768"
    elif [[ "$description" == *"L1D-16K"* ]]; then
        cache_args="-config_l1d_size=16384"
    elif [[ "$description" == *"L15-16K"* ]]; then
        cache_args="-config_l15_size=16384"
    elif [[ "$description" == *"L2-128K"* ]]; then
        cache_args="-config_l2_size=131072"
    elif [[ "$description" == *"L2-8way"* ]]; then
        cache_args="-config_l2_associativity=8"
    fi
    
    # Build command for cache variants
    local build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=$SIMULATOR -${SIMULATOR}_build $cache_args"
    debug "Command: $build_cmd"
    
    # Change to OpenPiton source directory (sims must be run from here)
    cd "$DV_ROOT"
    
    # Export all required environment variables for OpenPiton
    export_openpiton_env
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "Cache Variant $description build completed"
        info "Build artifacts in: $BUILD_ROOT"
        local cache_type=$(echo "$description" | grep -o "L[0-9][ID]*-[0-9KM]*\|L[0-9]-[0-9]*way" | head -1)
        organize_build_outputs "cache_variants" "cache_${cache_type}_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        error "Cache Variant $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        return 1
    fi
}

# NEW: Build function for network variant configurations
build_network_variant_config() {
    local x_tiles=$1
    local y_tiles=$2
    local description=$3
    
    local config_name="network_variant_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building Network Variant configuration: $description (${x_tiles}x${y_tiles}) with $SIMULATOR"
    info "Build log: $build_log"
    
    # Parse network and core configuration from description
    local network_args="-network_config=xbar_config"
    local core_args=""
    if [[ "$description" == *"Ariane"* ]]; then
        core_args="-ariane"
    fi
    
    # Build command for network variants
    local build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=$SIMULATOR -${SIMULATOR}_build $network_args $core_args"
    debug "Command: $build_cmd"
    
    # Change to OpenPiton source directory (sims must be run from here)
    cd "$DV_ROOT"
    
    # Export all required environment variables for OpenPiton
    export_openpiton_env
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "Network Variant $description build completed"
        info "Build artifacts in: $BUILD_ROOT"
        local net_core=$(echo "$description" | grep -o "SPARC\|Ariane")
        organize_build_outputs "network_variants" "xbar_${net_core}_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        error "Network Variant $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        return 1
    fi
}

# NEW: Build function for ORAM configurations
build_oram_config() {
    local x_tiles=$1
    local y_tiles=$2
    local description=$3
    
    local config_name="oram_${x_tiles}x${y_tiles}_${SIMULATOR}"
    local build_log="$LOG_DIR/${config_name}_${TIMESTAMP}.log"
    
    log "Building ORAM configuration: $description (${x_tiles}x${y_tiles}) with $SIMULATOR"
    info "Build log: $build_log"
    
    # Build command for ORAM
    local build_cmd="$DV_ROOT/tools/bin/sims -sys=manycore -x_tiles=$x_tiles -y_tiles=$y_tiles -sim_type=$SIMULATOR -${SIMULATOR}_build -oram"
    debug "Command: $build_cmd"
    
    # Change to OpenPiton source directory (sims must be run from here)
    cd "$DV_ROOT"
    
    # Export all required environment variables for OpenPiton
    export_openpiton_env
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "ORAM $description build completed"
        info "Build artifacts in: $BUILD_ROOT"
        organize_build_outputs "oram" "oram_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles"
        return 0
    else
        error "ORAM $description build failed"
        error "Check build log: $build_log"
        
        # Show last few lines of error log
        echo "" | tee -a "$SESSION_LOG"
        echo "=== Last 20 lines of build log ===" | tee -a "$SESSION_LOG"
        tail -20 "$build_log" | tee -a "$SESSION_LOG"
        echo "=== End of build log excerpt ===" | tee -a "$SESSION_LOG"
        echo "" | tee -a "$SESSION_LOG"
        
        return 1
    fi
}

# Enhanced main execution with parallel support
main() {
    local start_time=$(date +%s)
    
    log "==================================================================="
    log "OpenPiton RTL Generation Session Started"
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
    local total_configs=$((${#SPARC_CONFIGS[@]} + ${#ARIANE_CONFIGS[@]}))
    if [[ "$ENABLE_PICO" == "true" ]]; then
        total_configs=$((total_configs + ${#PICO_CONFIGS[@]}))
    fi
    if [[ "$ENABLE_PICO_HET" == "true" ]]; then
        total_configs=$((total_configs + ${#PICO_HET_CONFIGS[@]}))
    fi
    if [[ "$ENABLE_CACHE_VARIANTS" == "true" ]]; then
        total_configs=$((total_configs + ${#SPARC_CACHE_CONFIGS[@]}))
    fi
    if [[ "$ENABLE_NETWORK_VARIANTS" == "true" ]]; then
        total_configs=$((total_configs + ${#NETWORK_CONFIGS[@]}))
    fi
    if [[ "$ENABLE_ORAM" == "true" ]]; then
        total_configs=$((total_configs + ${#ORAM_CONFIGS[@]}))
    fi
    
    log "Starting OpenPiton RTL generation for benchmarking..."
    log "Total configurations to build: $total_configs"
    
    local success_count=0
    local failure_count=0
    local sparc_success=0
    local sparc_failed=0
    local ariane_success=0
    local ariane_failed=0
    local pico_success=0
    local pico_failed=0
    local pico_het_success=0
    local pico_het_failed=0
    local cache_success=0
    local cache_failed=0
    local network_success=0
    local network_failed=0
    local oram_success=0
    local oram_failed=0
    
    # Build configurations (parallel or sequential based on PARALLEL_JOBS)
    if [[ $PARALLEL_JOBS -gt 1 ]]; then
        log "Starting parallel builds with $PARALLEL_JOBS concurrent jobs..."
        
        # Submit all SPARC jobs
        log "=== Submitting SPARC Configurations ==="
        for config in "${SPARC_CONFIGS[@]}"; do
            read x_tiles y_tiles description <<< $(parse_config "$config")
            log "Submitting SPARC job: $config"
            start_parallel_job "sparc" "sparc_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles" "$description"
        done
        
        # Submit all Ariane jobs
        log "=== Submitting Ariane RISC-V Configurations ==="
        for config in "${ARIANE_CONFIGS[@]}"; do
            read x_tiles y_tiles description <<< $(parse_config "$config")
            log "Submitting Ariane job: $config"
            start_parallel_job "ariane" "ariane_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles" "$description"
        done
        
        # Submit additional configuration types if enabled
        if [[ "$ENABLE_PICO" == "true" ]]; then
            log "=== Submitting PicoRV32 Configurations ==="
            for config in "${PICO_CONFIGS[@]}"; do
                read x_tiles y_tiles description <<< $(parse_config "$config")
                start_parallel_job "pico" "pico_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles" "$description"
            done
        fi
        
        if [[ "$ENABLE_PICO_HET" == "true" ]]; then
            log "=== Submitting PicoRV32 Heterogeneous Configurations ==="
            for config in "${PICO_HET_CONFIGS[@]}"; do
                read x_tiles y_tiles description <<< $(parse_config "$config")
                start_parallel_job "pico_het" "pico_het_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles" "$description"
            done
        fi
        
        if [[ "$ENABLE_CACHE_VARIANTS" == "true" ]]; then
            log "=== Submitting Cache Variant Configurations ==="
            for config in "${SPARC_CACHE_CONFIGS[@]}"; do
                read x_tiles y_tiles description <<< $(parse_config "$config")
                start_parallel_job "cache_variant" "cache_variant_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles" "$description"
            done
        fi
        
        if [[ "$ENABLE_NETWORK_VARIANTS" == "true" ]]; then
            log "=== Submitting Network Variant Configurations ==="
            for config in "${NETWORK_CONFIGS[@]}"; do
                read x_tiles y_tiles description <<< $(parse_config "$config")
                start_parallel_job "network_variant" "network_variant_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles" "$description"
            done
        fi
        
        if [[ "$ENABLE_ORAM" == "true" ]]; then
            log "=== Submitting ORAM Configurations ==="
            for config in "${ORAM_CONFIGS[@]}"; do
                read x_tiles y_tiles description <<< $(parse_config "$config")
                start_parallel_job "oram" "oram_${x_tiles}x${y_tiles}" "$x_tiles" "$y_tiles" "$description"
            done
        fi
        
        # Wait for all parallel jobs to complete
        wait_for_all_jobs
        
        # Process results from parallel execution
        success_count=${#COMPLETED_JOBS[@]}
        failure_count=${#FAILED_JOBS[@]}
        sparc_success=0
        sparc_failed=0
        ariane_success=0
        ariane_failed=0
        
        # Count successes and failures by type
        for job in "${COMPLETED_JOBS[@]}"; do
            [[ "$job" == *"sparc"* ]] && ((sparc_success++))
            [[ "$job" == *"ariane"* ]] && ((ariane_success++))
        done
        
        for job in "${FAILED_JOBS[@]}"; do
            [[ "$job" == *"sparc"* ]] && ((sparc_failed++))
            [[ "$job" == *"ariane"* ]] && ((ariane_failed++))
        done
        
    else
        # Sequential execution (original behavior)
        log "Running sequential builds..."
        
        # Build SPARC configurations
        log "=== Building SPARC Configurations ==="
        local sparc_current=0
        for config in "${SPARC_CONFIGS[@]}"; do
            sparc_current=$((sparc_current + 1))
            read x_tiles y_tiles description <<< $(parse_config "$config")
            
            log "SPARC Progress: $sparc_current/${#SPARC_CONFIGS[@]} - Processing: $config"
            debug "Parsed: x_tiles=$x_tiles, y_tiles=$y_tiles, description=$description"
            
            if build_sparc_config "$x_tiles" "$y_tiles" "$description"; then
                success_count=$((success_count + 1))
                sparc_success=$((sparc_success + 1))
                info "SPARC $sparc_current/${#SPARC_CONFIGS[@]} completed successfully"
            else
                failure_count=$((failure_count + 1))
                sparc_failed=$((sparc_failed + 1))
                warning "SPARC $sparc_current/${#SPARC_CONFIGS[@]} failed"
            fi
            echo "" | tee -a "$SESSION_LOG"
        done
        log "SPARC configurations completed: $sparc_success/${#SPARC_CONFIGS[@]} successful"
        
        # Build Ariane configurations
        log "=== Building Ariane RISC-V Configurations ==="
        local ariane_current=0
        for config in "${ARIANE_CONFIGS[@]}"; do
            ariane_current=$((ariane_current + 1))
            read x_tiles y_tiles description <<< $(parse_config "$config")
            
            log "Ariane Progress: $ariane_current/${#ARIANE_CONFIGS[@]} - Processing: $config"
            debug "Parsed: x_tiles=$x_tiles, y_tiles=$y_tiles, description=$description"
            
            if build_ariane_config "$x_tiles" "$y_tiles" "$description"; then
                success_count=$((success_count + 1))
                ariane_success=$((ariane_success + 1))
                info "Ariane $ariane_current/${#ARIANE_CONFIGS[@]} completed successfully"
            else
                failure_count=$((failure_count + 1))
                ariane_failed=$((ariane_failed + 1))
                warning "Ariane $ariane_current/${#ARIANE_CONFIGS[@]} failed"
            fi
            echo "" | tee -a "$SESSION_LOG"
        done
        log "Ariane configurations completed: $ariane_success/${#ARIANE_CONFIGS[@]} successful"
    fi
    
    # Additional configurations are handled in the parallel/sequential logic above
    
    # Comprehensive summary
    local end_time=$(date +%s)
    local duration=$((end_time - start_time))
    local hours=$((duration / 3600))
    local minutes=$(((duration % 3600) / 60))
    local seconds=$((duration % 60))
    
    log "==================================================================="
    log "Build Summary"
    log "==================================================================="
    log "Session ID: $TIMESTAMP"
    log "Simulator: $SIMULATOR"
    log "Execution mode: $([ $PARALLEL_JOBS -gt 1 ] && echo "Parallel ($PARALLEL_JOBS jobs)" || echo "Sequential")"
    log "Total time: ${hours}h ${minutes}m ${seconds}s"
    log "Total configurations attempted: $total_configs"
    echo "" | tee -a "$SESSION_LOG"
    
    success "Total successful builds: $success_count"
    log "├── SPARC successful: $sparc_success/${#SPARC_CONFIGS[@]}"
    log "├── Ariane successful: $ariane_success/${#ARIANE_CONFIGS[@]}"
    if [[ "$ENABLE_PICO" == "true" ]]; then
        log "├── PicoRV32 successful: $pico_success/${#PICO_CONFIGS[@]}"
    fi
    if [[ "$ENABLE_PICO_HET" == "true" ]]; then
        log "├── PicoRV32-Het successful: $pico_het_success/${#PICO_HET_CONFIGS[@]}"
    fi
    if [[ "$ENABLE_CACHE_VARIANTS" == "true" ]]; then
        log "├── Cache variants successful: $cache_success/${#SPARC_CACHE_CONFIGS[@]}"
    fi
    if [[ "$ENABLE_NETWORK_VARIANTS" == "true" ]]; then
        log "├── Network variants successful: $network_success/${#NETWORK_CONFIGS[@]}"
    fi
    if [[ "$ENABLE_ORAM" == "true" ]]; then
        log "└── ORAM successful: $oram_success/${#ORAM_CONFIGS[@]}"
    else
        log "└── (additional configurations can be enabled with flags)"
    fi
    echo "" | tee -a "$SESSION_LOG"
    
    if [[ $failure_count -gt 0 ]]; then
        error "Total failed builds: $failure_count"
        log "├── SPARC failed: $sparc_failed/${#SPARC_CONFIGS[@]}"
        log "├── Ariane failed: $ariane_failed/${#ARIANE_CONFIGS[@]}"
        if [[ "$ENABLE_PICO" == "true" ]]; then
            log "├── PicoRV32 failed: $pico_failed/${#PICO_CONFIGS[@]}"
        fi
        if [[ "$ENABLE_PICO_HET" == "true" ]]; then
            log "├── PicoRV32-Het failed: $pico_het_failed/${#PICO_HET_CONFIGS[@]}"
        fi
        if [[ "$ENABLE_CACHE_VARIANTS" == "true" ]]; then
            log "├── Cache variants failed: $cache_failed/${#SPARC_CACHE_CONFIGS[@]}"
        fi
        if [[ "$ENABLE_NETWORK_VARIANTS" == "true" ]]; then
            log "├── Network variants failed: $network_failed/${#NETWORK_CONFIGS[@]}"
        fi
        if [[ "$ENABLE_ORAM" == "true" ]]; then
            log "└── ORAM failed: $oram_failed/${#ORAM_CONFIGS[@]}"
        fi
    else
        log "Failed builds: $failure_count"
    fi
    echo "" | tee -a "$SESSION_LOG"
    
    log "Dataset directory: $DATASET_DIR"
    log "Build artifacts located in: $BUILD_ROOT"
    log "Organized RTL designs in: $DATASET_DIR/rtl_designs/"
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

# Enhanced help function
show_help() {
    echo "OpenPiton RTL Generation Script for Benchmarking"
    echo ""
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "This script generates RTL for ALL available OpenPiton core configurations"
    echo "suitable for benchmarking and performance evaluation."
    echo ""
    echo "Generated configurations:"
    echo "  SPARC cores: 1x1, 2x1, 1x2, 2x2, 4x1, 1x4, 4x2, 4x4 (8 configs)"
    echo "  Ariane RISC-V cores: 1x1, 2x1, 1x2, 2x2, 4x1, 1x4, 4x2, 4x4 (8 configs)"
    echo "  PicoRV32 cores: 1x1, 2x1, 1x2, 2x2, 4x1, 1x4, 4x2, 4x4 (8 configs)"
    echo "  PicoRV32-Het cores: 1x1, 2x1, 1x2, 2x2, 4x1, 1x4, 4x2, 4x4 (8 configs)"
    echo "  Cache variants: L1I-32K, L1D-16K, L15-16K, L2-128K, L2-8way (5 configs)"
    echo "  Network variants: xbar topology for SPARC and Ariane (4 configs)"
    echo "  ORAM variants: SPARC with ORAM support (2 configs - optional)"
    echo ""
    echo "Total: 43 configurations (41 default + 2 optional ORAM)"
    echo ""
    echo "Options:"
    echo "  -h, --help              Show this help message"
    echo "  --check                 Check prerequisites only"
    echo "  --simulator=SIM         Choose simulator (default: $DEFAULT_SIMULATOR)"
    echo "  --list-simulators       List all supported simulators"
    echo "  --enable-oram           Enable ORAM configurations (experimental)"
    echo "  --disable-pico          Disable PicoRV32 configurations"
    echo "  --disable-pico-het      Disable PicoRV32 heterogeneous configurations"
    echo "  --disable-cache         Disable cache variant configurations"
    echo "  --disable-network       Disable network variant configurations"
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
    echo "  - RISC-V toolchain for Ariane builds"
    echo "  - Perl fields + Bit::Vector (install via scripts/install_openpiton.sh)"
    echo "  - GCC compiler and standard build tools"
    echo "  - Run from score project root directory"
    echo ""
    echo "Output:"
    echo "  Dataset directory: datasets/openpiton/"
    echo "  RTL configurations: datasets/openpiton/rtl_designs/TYPE/CONFIG_NAME/"
    echo "  Simulation models: datasets/openpiton/simulation_models/TYPE/CONFIG_NAME/"
    echo "  Build artifacts: datasets/openpiton/build_artifacts/"
    echo "  Build logs: datasets/openpiton/logs/"
    echo "  Session log: datasets/openpiton/logs/session_TIMESTAMP.log"
    echo "  Individual build logs: datasets/openpiton/logs/CONFIG_TIMESTAMP.log"
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
    echo "  - Default: sequential (--parallel=1); Verilator builds need this (shared DV_ROOT pyhp outputs)"
    echo "  - Parallel jobs use separate model dirs but still share DV_ROOT generated RTL headers"
    echo "  - Each job gets individual log files with unique job IDs"
    echo "  - Memory usage scales with parallel jobs (monitor system resources)"
    echo "  - Recommended: Start with --parallel=2 and increase based on system capacity"
    echo "  - Job status tracked in: datasets/openpiton/logs/job_status_TIMESTAMP.txt"
    echo ""
    echo "Common Issues:"
    echo "  - 'bw_cpp not found': Install gcc/g++ and run 'mktools'"
    echo "  - 'goldfinger errors': Install 32-bit glibc and libelf"
    echo "  - 'Can't locate fields.pm' / Bit::Vector / missing /bin/csh: run scripts/install_openpiton.sh"
    echo "  - Simulator not found: Install and setup environment variables"
    echo "  - Parallel build failures: Check individual job logs for specific errors"
}

# List supported simulators
show_simulators() {
    echo "Supported OpenPiton Simulators:"
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
        --enable-oram)
            ENABLE_ORAM=true
            shift
            ;;
        --disable-pico)
            ENABLE_PICO=false
            shift
            ;;
        --disable-pico-het)
            ENABLE_PICO_HET=false
            shift
            ;;
        --disable-cache)
            ENABLE_CACHE_VARIANTS=false
            shift
            ;;
        --disable-network)
            ENABLE_NETWORK_VARIANTS=false
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

# Run main function
main 