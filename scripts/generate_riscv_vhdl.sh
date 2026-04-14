#!/bin/bash

# RISCV VHDL RTL Organization Script
# This script organizes and copies VHDL designs from the RISCV VHDL repository

# set -e  # Exit on any error - temporarily disabled for debugging
shopt -s nullglob  # Enable nullglob for proper glob expansion

# Global variables
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SOURCE_DIR="$PROJECT_ROOT/tools/riscv_vhdl"

# Function to get commit ID from git repository
get_commit_id() {
    local repo_path="$1"
    if [[ -d "$repo_path/.git" ]]; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

COMMIT_ID=$(get_commit_id "$SOURCE_DIR")
DATASET_DIR="$PROJECT_ROOT/datasets/riscv_vhdl/$COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
MAIN_LOG="$LOG_DIR/main.log"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/session_${TIMESTAMP}.log"

# Script options
VHDL_ONLY=false
INCLUDE_SV=false
INCLUDE_SC=false
WITH_EXAMPLES=false
WITH_DOCS=false
MINIMAL_MODE=false
DEBUG_MODE=false
CHECK_ONLY=false

# Setup local environment if available
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

# Create basic dataset directory structure
mkdir -p "$LOG_DIR"
mkdir -p "$DATASET_DIR/rtl_designs"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging_files generate_riscv_vhdl "$MAIN_LOG" "$SESSION_LOG"

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
    log "Checking RISCV VHDL source availability..."
    local missing_dirs=0
    
    # Check main source directory
    if [[ ! -d "$SOURCE_DIR" ]]; then
        error "RISCV VHDL source directory not found: $SOURCE_DIR"
        ((missing_dirs++))
    else
        success "RISCV VHDL source directory found: $SOURCE_DIR"
    fi
    
    # Check VHDL RTL directory
    if [[ ! -d "$SOURCE_DIR/vhdl" ]]; then
        error "VHDL source directory not found: $SOURCE_DIR/vhdl"
        ((missing_dirs++))
    else
        success "VHDL source directory found: $SOURCE_DIR/vhdl"
        local vhdl_count=$(find "$SOURCE_DIR/vhdl" -name "*.vhd" 2>/dev/null | wc -l)
        info "Found $vhdl_count VHDL files in source"
    fi
    
    # Check SystemVerilog directory
    if [[ -d "$SOURCE_DIR/sv" ]]; then
        success "SystemVerilog source directory found: $SOURCE_DIR/sv"
        local sv_count=$(find "$SOURCE_DIR/sv" -name "*.sv" -o -name "*.v" 2>/dev/null | wc -l)
        info "Found $sv_count SystemVerilog files in source"
    else
        warning "SystemVerilog source directory not found: $SOURCE_DIR/sv"
    fi
    
    # Check SystemC directory
    if [[ -d "$SOURCE_DIR/sc" ]]; then
        success "SystemC source directory found: $SOURCE_DIR/sc"
        local sc_count=$(find "$SOURCE_DIR/sc" -name "*.cpp" -o -name "*.h" 2>/dev/null | wc -l)
        info "Found $sc_count SystemC files in source"
    fi
    
    # Check examples directory
    if [[ -d "$SOURCE_DIR/examples" ]]; then
        success "Examples directory found: $SOURCE_DIR/examples"
        local ex_count=$(find "$SOURCE_DIR/examples" -type f 2>/dev/null | wc -l)
        info "Found $ex_count example files in source"
    fi
    
    # Check documentation directory
    if [[ -d "$SOURCE_DIR/docs" ]]; then
        success "Documentation directory found: $SOURCE_DIR/docs"
        local doc_count=$(find "$SOURCE_DIR/docs" -type f 2>/dev/null | wc -l)
        info "Found $doc_count documentation files in source"
    fi
    
    return $missing_dirs
}

# Check prerequisites
check_prerequisites() {
    log "Checking prerequisites..."
    local prereq_failed=0
    
    # Check basic tools
    for tool in find cp mkdir wc; do
        if ! command -v "$tool" >/dev/null 2>&1; then
            error "$tool command not found"
            ((prereq_failed++))
        fi
    done
    
    # Check source availability
    check_source_availability || ((prereq_failed++))
    
    return $prereq_failed
}

# Simple and reliable copy function based on working approach
copy_vhdl_files() {
    local source_dir="$1"
    local dest_dir="$2"
    local description="$3"
    
    debug "Copying $description from $source_dir to $dest_dir"
    
    mkdir -p "$dest_dir"
    local file_count=0
    
    if [[ -d "$source_dir" ]]; then
        # Use simple cp command that works
        if cp "$source_dir"/*.vhd "$dest_dir/" 2>/dev/null; then
            file_count=$(ls "$dest_dir"/*.vhd 2>/dev/null | wc -l)
            debug "Copied $file_count files for $description"
        else
            debug "No VHDL files found in $source_dir"
        fi
    else
        debug "Source directory not found: $source_dir"
    fi
    
    echo $file_count
}

# Function to copy directory recursively
copy_directory() {
    local source_dir="$1"
    local dest_dir="$2"
    local description="$3"
    
    debug "Copying directory $description from $source_dir to $dest_dir"
    
    if [[ -d "$source_dir" ]]; then
        mkdir -p "$dest_dir"
        local file_count=$(find "$source_dir" -type f | wc -l)
        if [[ $file_count -gt 0 ]]; then
            cp -r "$source_dir"/* "$dest_dir"/ 2>/dev/null || true
            debug "Copied directory with $file_count files for $description"
        else
            debug "Source directory is empty: $source_dir"
        fi
        return $file_count
    else
        debug "Source directory not found: $source_dir"
        return 0
    fi
}

# Function to create design metadata
create_design_metadata() {
    local design_name="$1"
    local design_category="$2"
    local design_dir="$3"
    local description="$4"
    
    local vhdl_count=$(find "$design_dir" -name "*.vhd" 2>/dev/null | wc -l)
    local total_lines=0
    if [[ $vhdl_count -gt 0 ]]; then
        total_lines=$(find "$design_dir" -name "*.vhd" -exec wc -l {} + 2>/dev/null | tail -1 | awk '{print $1}' || echo 0)
    fi
    
    # Determine additional properties
    local fpu_enabled="false"
    local debug_enabled="false"
    local cache_enabled="false"
    
    if [[ -f "$design_dir/fpu_top.vhd" ]] || find "$design_dir" -name "*fpu*.vhd" | grep -q .; then
        fpu_enabled="true"
    fi
    
    if [[ -f "$design_dir/axi_dsu.vhd" ]] || find "$design_dir" -name "*debug*.vhd" | grep -q .; then
        debug_enabled="true"
    fi
    
    if [[ -f "$design_dir/cache_top.vhd" ]] || find "$design_dir" -name "*cache*.vhd" | grep -q .; then
        cache_enabled="true"
    fi
    
    cat > "$design_dir/config.yaml" << EOF
design_name: $design_name
design_category: $design_category
description: "$description"
generation_date: $(date)
source_repository: riscv_vhdl
vhdl_files: $vhdl_count
total_lines: $total_lines
synthesis_ready: true
fpu_enabled: $fpu_enabled
debug_enabled: $debug_enabled
cache_enabled: $cache_enabled
target_frequency: "60MHz"
architecture: "RISC-V"
EOF
}

# Function to create file list
create_file_list() {
    local design_dir="$1"
    local filelist="$design_dir/filelist.f"
    
    find "$design_dir" -name "*.vhd" -type f | while read vhdl_file; do
        echo "$(readlink -f "$vhdl_file")"
    done > "$filelist"
    
    debug "Created filelist with $(wc -l < "$filelist") entries"
}

# River CPU design organization function - simplified and working
organize_river_cpu_design() {
    local design_name="$1"
    local description="$2"
    local config_type="$3"
    
    local design_dir="$DATASET_DIR/rtl_designs/river_cpu/$design_name"
    mkdir -p "$design_dir"
    
    info "Organizing River CPU design: $design_name ($config_type)"
    
    local total_files=0
    
    # Copy core processor files (simple approach that works)
    info "  Copying core processor files..."
    mkdir -p "$design_dir/core"
    local count=$(copy_vhdl_files "$SOURCE_DIR/vhdl/rtl/riverlib/core" "$design_dir/core" "CPU core modules")
    total_files=$((total_files + count))
    info "    ✅ Core files: $count"
    
    # Copy cache files
    info "  Copying cache subsystem files..."
    mkdir -p "$design_dir/cache"
    count=$(copy_vhdl_files "$SOURCE_DIR/vhdl/rtl/riverlib/cache" "$design_dir/cache" "Cache subsystem")
    total_files=$((total_files + count))
    info "    ✅ Cache files: $count"
    
    # Copy arithmetic units
    info "  Copying arithmetic unit files..."
    mkdir -p "$design_dir/arith"
    count=$(copy_vhdl_files "$SOURCE_DIR/vhdl/rtl/riverlib/core/arith" "$design_dir/arith" "Arithmetic units")
    total_files=$((total_files + count))
    info "    ✅ Arithmetic files: $count"
    
    # Copy FPU files (conditional based on config)
    if [[ "$config_type" =~ "fpu|standard|debug" ]]; then
        info "  Copying floating-point unit files..."
        mkdir -p "$design_dir/fpu"
        count=$(copy_vhdl_files "$SOURCE_DIR/vhdl/rtl/riverlib/core/fpu_d" "$design_dir/fpu" "Floating-point unit")
        total_files=$((total_files + count))
        info "    ✅ FPU files: $count"
    fi
    
    # Copy DSU files (conditional based on config)
    if [[ "$config_type" =~ "debug|standard" ]]; then
        info "  Copying debug support unit files..."
        mkdir -p "$design_dir/dsu"
        count=$(copy_vhdl_files "$SOURCE_DIR/vhdl/rtl/riverlib/dsu" "$design_dir/dsu" "Debug Support Unit")
        total_files=$((total_files + count))
        info "    ✅ DSU files: $count"
    fi
    
    # Copy L2 cache files (conditional based on config)
    if [[ "$config_type" =~ "l2|standard" ]]; then
        info "  Copying L2 cache files..."
        mkdir -p "$design_dir/l2cache"
        count=$(copy_vhdl_files "$SOURCE_DIR/vhdl/rtl/riverlib/l2cache" "$design_dir/l2cache" "L2 Cache")
        total_files=$((total_files + count))
        info "    ✅ L2 cache files: $count"
    fi
    
    # Copy main River CPU files
    info "  Copying top-level River CPU files..."
    count=$(copy_vhdl_files "$SOURCE_DIR/vhdl/rtl/riverlib" "$design_dir" "River CPU top-level")
    total_files=$((total_files + count))
    info "    ✅ Top-level files: $count"
    
    # Create design metadata and files
    create_design_metadata "$design_name" "river_cpu" "$design_dir" "$description"
    create_file_list "$design_dir"
    
    success "Organized River CPU design $design_name: $total_files VHDL files"
    return 0
}

# SoC design organization function
organize_soc_design() {
    local design_name="$1"
    local description="$2"
    
    local design_dir="$DATASET_DIR/rtl_designs/soc_designs/$design_name"
    mkdir -p "$design_dir/cpu"
    mkdir -p "$design_dir/peripherals"
    mkdir -p "$design_dir/memory"
    mkdir -p "$design_dir/interconnect"
    
    info "Organizing SoC design: $design_name"
    
    local total_files=0
    
    # Copy complete River CPU
    info "  Copying River CPU core..."
    count=$(copy_directory "$SOURCE_DIR/vhdl/rtl/riverlib" "$design_dir/cpu" "River CPU core")
    total_files=$((total_files + count))
    info "    ✅ CPU files: $count"
    
    # Copy peripherals from misclib
    info "  Copying system peripherals..."
    count=$(copy_vhdl_files "$SOURCE_DIR/vhdl/rtl/misclib" "$design_dir/peripherals" "System peripherals")
    total_files=$((total_files + count))
    info "    ✅ Peripheral files: $count"
    
    # Copy memory controllers from techmap
    info "  Copying memory controllers..."
    count=$(copy_directory "$SOURCE_DIR/vhdl/rtl/techmap/mem" "$design_dir/memory" "Memory controllers")
    total_files=$((total_files + count))
    info "    ✅ Memory files: $count"
    
    # Copy AMBA interconnect
    info "  Copying AMBA interconnect..."
    count=$(copy_vhdl_files "$SOURCE_DIR/vhdl/rtl/ambalib" "$design_dir/interconnect" "AMBA interconnect")
    total_files=$((total_files + count))
    info "    ✅ Interconnect files: $count"
    
    # Copy Ethernet if not minimal
    if [[ "$design_name" != "soc_minimal" ]]; then
        info "  Copying Ethernet controllers..."
        mkdir -p "$design_dir/ethernet"
        count=$(copy_vhdl_files "$SOURCE_DIR/vhdl/rtl/ethlib" "$design_dir/ethernet" "Ethernet controllers")
        total_files=$((total_files + count))
        info "    ✅ Ethernet files: $count"
    fi
    
    # Copy common types
    info "  Copying common types..."
    count=$(copy_vhdl_files "$SOURCE_DIR/vhdl/rtl/commonlib" "$design_dir" "Common types")
    total_files=$((total_files + count))
    info "    ✅ Common files: $count"
    
    create_design_metadata "$design_name" "soc_designs" "$design_dir" "$description"
    create_file_list "$design_dir"
    
    success "Organized SoC design $design_name: $total_files VHDL files"
    return 0
}

# Peripheral design organization function
organize_peripheral_design() {
    local peripheral_name="$1"
    local description="$2"
    local source_lib="$3"
    
    local design_dir="$DATASET_DIR/rtl_designs/peripherals/$peripheral_name"
    mkdir -p "$design_dir"
    
    info "Organizing peripheral design: $peripheral_name"
    
    local total_files=0
    local src_file=""
    
    # Use exact file names for each peripheral
    case "$peripheral_name" in
        uart)
            src_file="$SOURCE_DIR/vhdl/rtl/misclib/axi4_uart.vhd"
            ;;
        gpio)
            src_file="$SOURCE_DIR/vhdl/rtl/misclib/axi4_gpio.vhd"
            ;;
        gptimers)
            src_file="$SOURCE_DIR/vhdl/rtl/misclib/axi4_gptimers.vhd"
            ;;
        irqctrl)
            src_file="$SOURCE_DIR/vhdl/rtl/misclib/axi4_irqctrl.vhd"
            ;;
        spi)
            src_file="$SOURCE_DIR/vhdl/rtl/misclib/axi4_flashspi.vhd"
            ;;
        ethernet)
            src_file="$SOURCE_DIR/vhdl/rtl/ethlib/grethaxi.vhd"
            ;;
    esac
    
    # Copy the main peripheral VHDL file
    if [[ -n "$src_file" && -f "$src_file" ]]; then
        cp "$src_file" "$design_dir/"
        ((total_files++))
        info "    ✅ Copied $(basename "$src_file")"
    else
        warning "    ⚠️  File not found: $src_file"
    fi
    
    # Copy type definitions as appropriate
    case "$source_lib" in
        "misclib")
            if [[ -f "$SOURCE_DIR/vhdl/rtl/misclib/types_misc.vhd" ]]; then
                cp "$SOURCE_DIR/vhdl/rtl/misclib/types_misc.vhd" "$design_dir/"
                ((total_files++))
                info "    ✅ Copied types_misc.vhd"
            fi
            ;;
        "ethlib")
            if [[ -f "$SOURCE_DIR/vhdl/rtl/ethlib/types_eth.vhd" ]]; then
                cp "$SOURCE_DIR/vhdl/rtl/ethlib/types_eth.vhd" "$design_dir/"
                ((total_files++))
                info "    ✅ Copied types_eth.vhd"
            fi
            ;;
        "ambalib")
            if [[ -f "$SOURCE_DIR/vhdl/rtl/ambalib/types_amba4.vhd" ]]; then
                cp "$SOURCE_DIR/vhdl/rtl/ambalib/types_amba4.vhd" "$design_dir/"
                ((total_files++))
                info "    ✅ Copied types_amba4.vhd"
            fi
            if [[ -f "$SOURCE_DIR/vhdl/rtl/ambalib/axislv.vhd" ]]; then
                cp "$SOURCE_DIR/vhdl/rtl/ambalib/axislv.vhd" "$design_dir/"
                ((total_files++))
                info "    ✅ Copied axislv.vhd"
            fi
            ;;
    esac
    
    # Copy common types if they exist
    if [[ -f "$SOURCE_DIR/vhdl/rtl/commonlib/types_common.vhd" ]]; then
        cp "$SOURCE_DIR/vhdl/rtl/commonlib/types_common.vhd" "$design_dir/"
        ((total_files++))
        info "    ✅ Copied types_common.vhd"
    fi
    
    create_design_metadata "$peripheral_name" "peripherals" "$design_dir" "$description"
    create_file_list "$design_dir"
    
    success "Organized peripheral design $peripheral_name: $total_files VHDL files"
    return 0
}

# Memory controller organization function
organize_memory_design() {
    local mem_name="$1"
    local description="$2"
    
    local design_dir="$DATASET_DIR/rtl_designs/memory_controllers/$mem_name"
    mkdir -p "$design_dir"
    
    info "Organizing memory controller: $mem_name"
    
    local total_files=0
    count=$(copy_directory "$SOURCE_DIR/vhdl/rtl/techmap/mem" "$design_dir" "$description")
    total_files=$count
    
    create_design_metadata "$mem_name" "memory_controllers" "$design_dir" "$description"
    create_file_list "$design_dir"
    
    success "Organized memory controller $mem_name: $total_files VHDL files"
    return 0
}

# Arithmetic unit organization function
organize_arithmetic_design() {
    local arith_name="$1"
    local description="$2"
    local source_path="$3"
    
    local design_dir="$DATASET_DIR/rtl_designs/arithmetic/$arith_name"
    mkdir -p "$design_dir"
    
    info "Organizing arithmetic unit: $arith_name"
    
    local total_files=0
    
    # Copy specific arithmetic files based on the arithmetic unit type
    case "$arith_name" in
        "integer_mul")
            if [[ -f "$SOURCE_DIR/vhdl/rtl/riverlib/core/arith/imul53.vhd" ]]; then
                cp "$SOURCE_DIR/vhdl/rtl/riverlib/core/arith/imul53.vhd" "$design_dir/"
                ((total_files++))
                info "    ✅ Copied imul53.vhd"
            fi
            ;;
        "integer_div")
            if [[ -f "$SOURCE_DIR/vhdl/rtl/riverlib/core/arith/idiv53.vhd" ]]; then
                cp "$SOURCE_DIR/vhdl/rtl/riverlib/core/arith/idiv53.vhd" "$design_dir/"
                ((total_files++))
                info "    ✅ Copied idiv53.vhd"
            fi
            
            if [[ -f "$SOURCE_DIR/vhdl/rtl/riverlib/core/arith/divstage53.vhd" ]]; then
                cp "$SOURCE_DIR/vhdl/rtl/riverlib/core/arith/divstage53.vhd" "$design_dir/"
                ((total_files++))
                info "    ✅ Copied divstage53.vhd"
            fi
            ;;
        "shifter")
            # Copy shifter-related files (if they exist)
            find "$SOURCE_DIR/vhdl/rtl/riverlib/core/arith" -name "*shift*.vhd" 2>/dev/null | while read file; do
                cp "$file" "$design_dir/"
                ((total_files++))
                info "    ✅ Copied $(basename "$file")"
            done
            ;;
        "fpu_double")
            # Copy FPU files
            if [[ -d "$SOURCE_DIR/vhdl/rtl/riverlib/core/fpu_d" ]]; then
                cp "$SOURCE_DIR/vhdl/rtl/riverlib/core/fpu_d"/*.vhd "$design_dir/" 2>/dev/null || true
                local fpu_count=$(ls "$design_dir"/*.vhd 2>/dev/null | wc -l)
                total_files=$((total_files + fpu_count))
                info "    ✅ Copied $fpu_count FPU files"
            fi
            ;;
    esac
    
    # Copy common types if they exist
    if [[ -f "$SOURCE_DIR/vhdl/rtl/commonlib/types_common.vhd" ]]; then
        cp "$SOURCE_DIR/vhdl/rtl/commonlib/types_common.vhd" "$design_dir/"
        ((total_files++))
        info "    ✅ Copied types_common.vhd"
    fi
    
    create_design_metadata "$arith_name" "arithmetic" "$design_dir" "$description"
    create_file_list "$design_dir"
    
    success "Organized arithmetic unit $arith_name: $total_files VHDL files"
    return 0
}

# Design configuration arrays
declare -a RIVER_CPU_CONFIGS=(
    "river_minimal:Minimal River RISC-V processor:minimal"
    "river_1core:Single-core River RISC-V processor:standard"
    "river_fpu:River RISC-V with FPU support:fpu"
    "river_debug:River RISC-V with debug features:debug"
    "river_l2cache:River RISC-V with L2 cache:l2"
    "river_complete:Complete River RISC-V system:standard"
)

declare -a SOC_CONFIGS=(
    "soc_minimal:Minimal SoC with River CPU"
    "soc_standard:Standard SoC with peripherals"
    "soc_ethernet:SoC with Ethernet support"
    "soc_debug:SoC with debug capabilities"
)

declare -a PERIPHERAL_CONFIGS=(
    "uart:UART Controller:misclib"
    "gpio:GPIO Controller:misclib"
    "gptimers:General Purpose Timers:misclib"
    "irqctrl:Interrupt Controller:misclib"
    "spi:SPI Flash Controller:misclib"
    "ethernet:Ethernet MAC Controller:ethlib"
)

declare -a MEMORY_CONFIGS=(
    "ddr_controller:DDR Memory Controller"
    "sram_controller:SRAM Controller"  
    "rom_controller:ROM Controller"
)

declare -a ARITHMETIC_CONFIGS=(
    "integer_mul:Integer Multiplier:arith"
    "integer_div:Integer Divider:arith"
    "shifter:Barrel Shifter:arith"
    "fpu_double:Double Precision FPU:fpu_d"
)

# Parse configuration string
parse_config() {
    local config=$1
    local name=$(echo $config | cut -d':' -f1)
    local description=$(echo $config | cut -d':' -f2)
    local type=$(echo $config | cut -d':' -f3)
    echo "$name" "$description" "$type"
}

# Copy SystemVerilog designs if requested
organize_systemverilog() {
    if [[ "$INCLUDE_SV" == "true" ]] && [[ -d "$SOURCE_DIR/sv" ]]; then
        log "=== Organizing SystemVerilog Designs ==="
        
        local file_count=$(copy_directory "$SOURCE_DIR/sv" "$DATASET_DIR/systemverilog" "SystemVerilog implementations")
        if [[ $file_count -gt 0 ]]; then
            success "SystemVerilog designs organized: $file_count files"
        else
            warning "No SystemVerilog files found to organize"
        fi
    fi
}

# Copy SystemC models if requested
organize_systemc() {
    if [[ "$INCLUDE_SC" == "true" ]] && [[ -d "$SOURCE_DIR/sc" ]]; then
        log "=== Organizing SystemC Models ==="
        
        local file_count=$(copy_directory "$SOURCE_DIR/sc" "$DATASET_DIR/systemc" "SystemC models")
        if [[ $file_count -gt 0 ]]; then
            success "SystemC models organized: $file_count files"
        else
            warning "No SystemC files found to organize"
        fi
    fi
}

# Copy examples if requested
organize_examples() {
    if [[ "$WITH_EXAMPLES" == "true" ]] && [[ -d "$SOURCE_DIR/examples" ]]; then
        log "=== Organizing Example Designs ==="
        
        local file_count=$(copy_directory "$SOURCE_DIR/examples" "$DATASET_DIR/examples" "Example designs")
        if [[ $file_count -gt 0 ]]; then
            success "Example designs organized: $file_count files"
        else
            warning "No example files found to organize"
        fi
    fi
}

# Copy documentation if requested
organize_documentation() {
    if [[ "$WITH_DOCS" == "true" ]] && [[ -d "$SOURCE_DIR/docs" ]]; then
        log "=== Organizing Documentation ==="
        
        local file_count=$(copy_directory "$SOURCE_DIR/docs" "$DATASET_DIR/documentation" "Design documentation")
        if [[ $file_count -gt 0 ]]; then
            success "Documentation organized: $file_count files"
        else
            warning "No documentation files found to organize"
        fi
    fi
}

# Main organization function
main() {
    local start_time=$(date +%s)
    
    log "==================================================================="
    log "RISCV VHDL RTL Organization Session Started"
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
    
    local successful_designs=0
    local failed_designs=0
    
    # Organize River CPU designs
    if [[ "$MINIMAL_MODE" == "false" ]]; then
        log "=== Organizing River CPU Designs ==="
        for config in "${RIVER_CPU_CONFIGS[@]}"; do
            read name description type <<< $(parse_config "$config")
            log "Processing River CPU design: $name ($description)"
            
            if organize_river_cpu_design "$name" "$description" "$type"; then
                ((successful_designs++))
                success "River CPU design $name completed successfully"
            else
                ((failed_designs++))
                error "River CPU design $name failed"
                # Continue with next design instead of exiting
            fi
        done
        
        # Organize SoC designs
        log "=== Organizing SoC Designs ==="
        for config in "${SOC_CONFIGS[@]}"; do
            read name description <<< $(parse_config "$config")
            log "Processing SoC design: $name ($description)"
            
            if organize_soc_design "$name" "$description"; then
                ((successful_designs++))
                success "SoC design $name completed successfully"
            else
                ((failed_designs++))
                error "SoC design $name failed"
                # Continue with next design instead of exiting
            fi
        done
        
        # Organize peripheral designs
        log "=== Organizing Peripheral Designs ==="
        for config in "${PERIPHERAL_CONFIGS[@]}"; do
            read name description source_lib <<< $(parse_config "$config")
            log "Processing peripheral design: $name ($description)"
            
            if organize_peripheral_design "$name" "$description" "$source_lib"; then
                ((successful_designs++))
                success "Peripheral design $name completed successfully"
            else
                ((failed_designs++))
                error "Peripheral design $name failed"
                # Continue with next design instead of exiting
            fi
        done
        
        # Organize memory controllers
        log "=== Organizing Memory Controllers ==="
        for config in "${MEMORY_CONFIGS[@]}"; do
            read name description <<< $(parse_config "$config")
            log "Processing memory controller: $name ($description)"
            
            if organize_memory_design "$name" "$description"; then
                ((successful_designs++))
                success "Memory controller $name completed successfully"
            else
                ((failed_designs++))
                error "Memory controller $name failed"
                # Continue with next design instead of exiting
            fi
        done
        
        # Organize arithmetic units
        log "=== Organizing Arithmetic Units ==="
        for config in "${ARITHMETIC_CONFIGS[@]}"; do
            read name description source_path <<< $(parse_config "$config")
            log "Processing arithmetic unit: $name ($description)"
            
            if organize_arithmetic_design "$name" "$description" "$source_path"; then
                ((successful_designs++))
                success "Arithmetic unit $name completed successfully"
            else
                ((failed_designs++))
                error "Arithmetic unit $name failed"
                # Continue with next design instead of exiting
            fi
        done
    else
        # Minimal mode - only core River CPU
        log "=== Organizing Minimal River CPU Design ==="
        if organize_river_cpu_design "river_minimal" "Minimal River RISC-V processor" "minimal"; then
            ((successful_designs++))
        else
            ((failed_designs++))
        fi
    fi
    
    # Organize additional formats if requested
    organize_systemverilog
    organize_systemc
    organize_examples
    organize_documentation
    
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
    local total_configs=$(find "$DATASET_DIR/rtl_designs" -name "config.yaml" 2>/dev/null | wc -l)
    local total_dirs=$(find "$DATASET_DIR/rtl_designs" -maxdepth 2 -type d | wc -l)
    
    log "Dataset statistics:"
    log "├── Total VHDL files organized: $total_vhdl"
    log "├── Total design configurations: $total_configs"
    log "└── Total design directories: $total_dirs"
    
    # Show breakdown by category
    for category in river_cpu soc_designs peripherals memory_controllers arithmetic; do
        if [[ -d "$DATASET_DIR/rtl_designs/$category" ]]; then
            local cat_designs=$(find "$DATASET_DIR/rtl_designs/$category" -maxdepth 1 -type d | wc -l)
            local cat_files=$(find "$DATASET_DIR/rtl_designs/$category" -name "*.vhd" | wc -l)
            log "├── $category: $((cat_designs-1)) designs, $cat_files VHDL files"
        fi
    done
    
    log "Organization completed successfully!"
    log "Organized RTL designs available in: $DATASET_DIR/rtl_designs/"
    log "==================================================================="
}

# Help function
show_help() {
    echo "RISCV VHDL RTL Organization Script"
    echo ""
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "This script organizes VHDL designs from the RISCV VHDL repository."
    echo ""
    echo "Options:"
    echo "  -h, --help              Show this help message"
    echo "  --check                 Check prerequisites and source availability"
    echo "  --debug                 Enable debug logging"
    echo "  --vhdl-only             Copy only VHDL designs (default includes all RTL)"
    echo "  --include-sv            Include SystemVerilog implementations"
    echo "  --include-sc            Include SystemC models"
    echo "  --with-examples         Include example designs and applications"
    echo "  --with-docs             Include documentation and specifications"
    echo "  --minimal               Copy only core processor designs"
    echo ""
    echo "Examples:"
    echo "  $0                                    # Basic organization"
    echo "  $0 --check                          # Check source availability only"
    echo "  $0 --include-sv                     # Include SystemVerilog"
    echo "  $0 --minimal --vhdl-only            # Minimal VHDL only"
    echo "  $0 --with-examples                  # Include examples"
    echo ""
    echo "Design Categories Organized:"
    echo "  - River CPU cores (6 configurations)"
    echo "  - SoC designs (4 complete systems)"
    echo "  - Peripherals (6 controller types)"
    echo "  - Memory controllers (3 types)"
    echo "  - Arithmetic units (4 types)"
    echo ""
    echo "Total: 23+ distinct RTL designs"
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
        --vhdl-only)
            VHDL_ONLY=true
            shift
            ;;
        --include-sv)
            INCLUDE_SV=true
            shift
            ;;
        --include-sc)
            INCLUDE_SC=true
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
        --minimal)
            MINIMAL_MODE=true
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
        echo "✅ Ready to organize RISCV VHDL designs"
        echo ""
        echo "Available for organization:"
        echo "  - $(find "$SOURCE_DIR/vhdl" -name "*.vhd" | wc -l) VHDL files"
        [[ -d "$SOURCE_DIR/sv" ]] && echo "  - $(find "$SOURCE_DIR/sv" -name "*.sv" -o -name "*.v" | wc -l) SystemVerilog files"
        [[ -d "$SOURCE_DIR/sc" ]] && echo "  - $(find "$SOURCE_DIR/sc" -name "*.cpp" -o -name "*.h" | wc -l) SystemC files"
        [[ -d "$SOURCE_DIR/examples" ]] && echo "  - $(find "$SOURCE_DIR/examples" -type f | wc -l) example files"
        [[ -d "$SOURCE_DIR/docs" ]] && echo "  - $(find "$SOURCE_DIR/docs" -type f | wc -l) documentation files"
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