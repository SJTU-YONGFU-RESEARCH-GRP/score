#!/bin/bash

# Ibex RTL Generation Script for Benchmarking
# This script generates different Ibex core configurations for performance evaluation
# using the Ibex Makefile and organizes outputs in datasets/ibex/

set -e  # Exit on any error

# Global variables
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
# Ibex-specific variables
IBEX_DIR="$PROJECT_ROOT/tools/ibex"
IBEX_BUILD_DIR="$IBEX_DIR/build"

# Legacy Makefile-based suite (branch old-framework-2.x). Upstream main uses ACT4 (mise/uv), not wired here.
RISCV_COMPLIANCE_ROOT="${RISCV_COMPLIANCE_ROOT:-$PROJECT_ROOT/tools/riscv-compliance}"
RISCV_COMPLIANCE_REPO_URL="${RISCV_COMPLIANCE_REPO_URL:-https://github.com/riscv/riscv-compliance.git}"
RISCV_COMPLIANCE_BRANCH="${RISCV_COMPLIANCE_BRANCH:-old-framework-2.x}"

# Parallel execution settings
DEFAULT_PARALLEL_JOBS=4
PARALLEL_JOBS="$DEFAULT_PARALLEL_JOBS"
MAX_PARALLEL_JOBS=8  # Safety limit for Ibex builds

# Control flags
SKIP_VERILATOR_CHECK=false
# After each successful Verilator build, run upstream Makefile sims (and optional RISC-V compliance suite).
RUN_REGRESSION=true
# When RUN_REGRESSION is true, run the cloned riscv-compliance Makefile suite for riscv-compliance builds.
RUN_COMPLIANCE_SUITE=true

# Setup local environment if available
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

# Portable srecord / other host tools from install_ibex.sh — prepend before prerequisite checks.
score_prepend_ibex_host_tools_path() {
    local h="$PROJECT_ROOT/tools/ibex-host-tools"
    if [[ -d "$h/srecord/bin" ]]; then
        export PATH="$h/srecord/bin:$PATH"
    fi
}
score_prepend_ibex_host_tools_path
hash -r 2>/dev/null || true

# Create dataset directory structure (done after DATASET_DIR is defined)

# Function to check if command exists
command_exists() {
    command -v "$1" >/dev/null 2>&1
}

# Export VERILATOR_ROOT for .../share/verilator (requires portable install symlinks; see install_ibex).
export_verilator_root_from_path() {
    local vbin vbindir prefix
    if ! command_exists verilator; then
        return 1
    fi
    vbin=$(command -v verilator)
    vbindir=$(cd "$(dirname "$vbin")" && pwd)
    prefix=$(cd "$vbindir/.." && pwd)
    if [[ -f "$prefix/share/verilator/include/verilated.mk" ]]; then
        export VERILATOR_ROOT="$prefix/share/verilator"
        return 0
    fi
    return 1
}

# Match install_ibex.sh: silence Edalize Verilator backend deprecation on every FuseSoC run.
ensure_ibex_venv_sitecustomize() {
    local py="$IBEX_DIR/venv/bin/python3"
    local sp
    local sc

    [[ -x "$py" ]] || return 0
    sp=$("$py" -c "import sysconfig; print(sysconfig.get_path('purelib'))" 2>/dev/null) || return 0
    [[ -n "$sp" && -d "$sp" ]] || return 0
    sc="$sp/sitecustomize.py"
    if [[ -f "$sc" ]]; then
        if grep -q 'SCORE-ibex-edalize-quiet' "$sc" 2>/dev/null; then
            return 0
        fi
        return 0
    fi
    cat > "$sc" << 'PY'
# SCORE-ibex-edalize-quiet (install_ibex.sh / generate_ibex.sh; auto-loaded by Python in this venv).
import logging

try:
    logging.getLogger("edalize.verilator").setLevel(logging.ERROR)
except Exception:
    pass
PY
}

# Session timestamp (single value for the whole run)
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")

# Resolve Ibex git commit for dataset layout (submodule-safe; same idea as generate_rocket_chip.sh).
get_ibex_commit_id() {
    if [[ ! -d "$IBEX_DIR" ]]; then
        echo "unknown"
        return
    fi
    if git -C "$IBEX_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$IBEX_DIR" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

IBEX_COMMIT_ID="${IBEX_COMMIT_ID:-$(get_ibex_commit_id)}"
DATASET_DIR="${DATASET_DIR:-$PROJECT_ROOT/datasets/ibex/$IBEX_COMMIT_ID}"
LOG_DIR="$DATASET_DIR/logs"
BUILD_ARTIFACTS_DIR="$DATASET_DIR/build_artifacts"
MAIN_LOG="$LOG_DIR/main.log"
SESSION_LOG="$LOG_DIR/session_${TIMESTAMP}.log"
mkdir -p "$LOG_DIR" "$BUILD_ARTIFACTS_DIR" "$DATASET_DIR/rtl_designs" \
    "$DATASET_DIR/simulation_models" "$DATASET_DIR/configurations" \
    "$DATASET_DIR/regression_logs"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging_files generate_ibex "$MAIN_LOG" "$SESSION_LOG"

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

# Short description for a Makefile build target (logging only).
ibex_build_type_desc() {
    case "$1" in
        simple-system) echo "Simple System Verilator simulation" ;;
        riscv-compliance) echo "RISC-V compliance Verilator build" ;;
        csr-test) echo "CSR register testbench (Verilator)" ;;
        *) echo "$1" ;;
    esac
}

# --- Optional regression: run simulations after each successful Verilator build ---

ensure_riscv_compliance_tree() {
    local log_file="$1"
    if [[ -d "$RISCV_COMPLIANCE_ROOT/.git" ]]; then
        return 0
    fi
    if [[ -e "$RISCV_COMPLIANCE_ROOT" ]]; then
        echo "ERROR: $RISCV_COMPLIANCE_ROOT exists but is not a git clone; remove it or set RISCV_COMPLIANCE_ROOT" >>"$log_file"
        return 1
    fi
    mkdir -p "$(dirname "$RISCV_COMPLIANCE_ROOT")" || return 1
    {
        echo "Cloning $RISCV_COMPLIANCE_REPO_URL (branch $RISCV_COMPLIANCE_BRANCH) ..."
        git clone --depth 1 -b "$RISCV_COMPLIANCE_BRANCH" "$RISCV_COMPLIANCE_REPO_URL" "$RISCV_COMPLIANCE_ROOT"
    } >>"$log_file" 2>&1
}

run_riscv_compliance_verification() {
    local config_name="$1"
    local log_file="$2"
    local sim_path
    sim_path=$(find "$IBEX_BUILD_DIR" -name 'Vibex_riscv_compliance' -type f -executable -print -quit 2>/dev/null)
    if [[ -z "$sim_path" || ! -x "$sim_path" ]]; then
        echo "ERROR: Vibex_riscv_compliance not found under $IBEX_BUILD_DIR" >"$log_file"
        return 1
    fi
    if ! command_exists srec_cat; then
        echo "ERROR: srec_cat missing; run scripts/install_ibex.sh (portable tools/ibex-host-tools/srecord) or install OS package srecord." >"$log_file"
        return 1
    fi
    : >"$log_file"
    ensure_riscv_compliance_tree "$log_file" || return 1
    local abs_sim
    abs_sim=$(readlink -f "$sim_path")
    local jobs="${PARALLEL_JOBS:-4}"
    {
        echo "=== RISC-V compliance Makefile regression (IBEX_CONFIG=$config_name) ==="
        echo "TARGET_SIM=$abs_sim"
        cd "$RISCV_COMPLIANCE_ROOT" || exit 1
        export RISCV_PREFIX="${RISCV_PREFIX:-riscv32-unknown-elf-}"
        export TARGET_SIM="$abs_sim"
        export RISCV_DEVICE=rv32imc
        export RISCV_TARGET=ibex
        export PATH="$PROJECT_ROOT/tools/ibex-host-tools/riscv/bin:$PATH"
        make -j"$jobs" RISCV_ISA=rv32i &&
            make -j"$jobs" RISCV_ISA=rv32im &&
            make -j"$jobs" RISCV_ISA=rv32imc &&
            make -j"$jobs" RISCV_ISA=rv32Zicsr &&
            make -j"$jobs" RISCV_ISA=rv32Zifencei
    } >>"$log_file" 2>&1
}

activate_ibex_build_shell() {
    cd "$IBEX_DIR" || return 1
    if [[ -z "${VIRTUAL_ENV:-}" ]]; then
        # shellcheck source=/dev/null
        source "$IBEX_DIR/venv/bin/activate"
    fi
    export PATH="$IBEX_DIR/venv/bin:$PATH"
    local ibex_host="$PROJECT_ROOT/tools/ibex-host-tools"
    if [[ -d "$ibex_host/riscv/bin" ]]; then
        export PATH="$ibex_host/riscv/bin:$PATH"
    fi
    if [[ -d "$ibex_host/srecord/bin" ]]; then
        export PATH="$ibex_host/srecord/bin:$PATH"
    fi
    hash -r 2>/dev/null || true
    export MAKEFLAGS="${MAKEFLAGS:+$MAKEFLAGS }-e"
    if export_verilator_root_from_path; then
        :
    fi
}

run_ibex_verification() {
    local config_name="$1"
    local build_type="$2"
    local vrf_log="$LOG_DIR/${config_name}_${build_type}_verify_${TIMESTAMP}.log"
    local ok=0

    debug "run_ibex_verification: $config_name $build_type"
    log "Verification: $config_name ($build_type)"
    info "Verification log: $vrf_log"

    activate_ibex_build_shell || return 1

    case "$build_type" in
        simple-system)
            if ! command_exists srec_cat; then
                error "srec_cat not found — run scripts/install_ibex.sh (builds portable srecord under tools/ibex-host-tools/srecord) or install OS package srecord"
                echo "srec_cat missing" >"$vrf_log"
                return 1
            fi
            if make run-simple-system "IBEX_CONFIG=$config_name" >"$vrf_log" 2>&1; then
                success "Verification passed: $config_name (simple-system)"
            else
                error "Verification failed: $config_name (simple-system); see $vrf_log"
                tail -25 "$vrf_log" | tee -a "$SESSION_LOG" >&2 || true
                ok=1
            fi
            ;;
        csr-test)
            # FuseSoC `run` re-stages sim-verilator/ and deletes reg_dpi.so before launch; run the
            # Verilator binary directly (rebuild the DPI .so if the staging step removed it).
            if (
                echo "=== CSR test: direct ./Vtb_cs_registers (fusesoc run would drop reg_dpi.so) ==="
                sim_root="$IBEX_DIR/build/lowrisc_ibex_tb_cs_registers_0/sim-verilator"
                dpi_root="$sim_root/src/lowrisc_ibex_tb_cs_registers_0"
                dpi_so="$dpi_root/build/bin/reg_dpi.so"
                sim_bin="$sim_root/Vtb_cs_registers"
                if [[ ! -x "$sim_bin" ]]; then
                    echo "ERROR: $sim_bin not executable; build-csr-test must succeed first"
                    exit 1
                fi
                if [[ ! -f "$dpi_so" ]]; then
                    echo "INFO: Rebuilding reg_dpi.so (missing under $dpi_so)"
                    make -C "$dpi_root" || exit 1
                fi
                cd "$sim_root" || exit 1
                ./Vtb_cs_registers
            ) >"$vrf_log" 2>&1; then
                success "Verification passed: $config_name (csr-test)"
            else
                error "Verification failed: $config_name (csr-test); see $vrf_log"
                tail -25 "$vrf_log" | tee -a "$SESSION_LOG" >&2 || true
                ok=1
            fi
            ;;
        riscv-compliance)
            if [[ "$RUN_COMPLIANCE_SUITE" != "true" ]]; then
                info "Skipping RISC-V compliance Makefile suite (--no-compliance-suite)"
                echo "Skipped (--no-compliance-suite)" >"$vrf_log"
            elif run_riscv_compliance_verification "$config_name" "$vrf_log"; then
                success "Verification passed: $config_name (riscv-compliance suite)"
            else
                error "Verification failed: $config_name (riscv-compliance); see $vrf_log"
                tail -25 "$vrf_log" | tee -a "$SESSION_LOG" >&2 || true
                ok=1
            fi
            ;;
        *)
            info "No automated verification for build type $build_type"
            echo "N/A (no simulator run wired for this target)" >"$vrf_log"
            ;;
    esac

    [[ -f "$vrf_log" ]] && cp -f "$vrf_log" "$DATASET_DIR/regression_logs/$(basename "$vrf_log")" 2>/dev/null || true
    return "$ok"
}

# Function to check prerequisites
check_prerequisites() {
    log "Checking Ibex prerequisites..."
    local prereq_failed=0
    
    # Check if we're in the right directory structure
    if [[ ! -d "$IBEX_DIR" ]]; then
        error "Ibex directory not found at $IBEX_DIR"
        error "This script must be run from the score project root directory"
        exit 1
    fi
    
    # Check if Ibex Makefile exists
    if [[ ! -f "$IBEX_DIR/Makefile" ]]; then
        error "Ibex Makefile not found at $IBEX_DIR/Makefile"
        exit 1
    fi
    
    # Check essential tools
    if ! command_exists make; then
        error "Make build tool not found"
        ((prereq_failed++))
    else
        success "Make found: $(which make)"
    fi
    
    if ! command_exists python3; then
        error "Python 3 not found"
        ((prereq_failed++))
    else
        success "Python 3 found: $(which python3)"
    fi

    if [[ "$RUN_REGRESSION" == "true" ]]; then
        if ! command_exists srec_cat; then
            warning "srec_cat not in PATH — run scripts/install_ibex.sh (portable srecord under tools/ibex-host-tools/srecord) or install OS package srecord"
            ((prereq_failed++))
        else
            success "srec_cat found: $(command -v srec_cat)"
        fi
        if ! command_exists git; then
            warning "git not found — cannot clone the RISC-V compliance suite checkout"
            ((prereq_failed++))
        fi
    fi
    
    # Check if virtual environment exists
    if [[ ! -d "$IBEX_DIR/venv" ]]; then
        warning "Ibex virtual environment not found at $IBEX_DIR/venv"
        warning "Run the installation script first: ./scripts/install_ibex.sh"
        ((prereq_failed++))
    else
        success "Ibex virtual environment found"
    fi
    
    # Check if virtual environment activation script exists
    if [[ ! -f "$IBEX_DIR/venv/bin/activate" ]]; then
        warning "Ibex virtual environment activation script not found"
        warning "Run the installation script first: ./scripts/install_ibex.sh"
        ((prereq_failed++))
    else
        success "Ibex virtual environment activation script found"
    fi
    
    # Check for FuseSoC in virtual environment
    if [[ -f "$IBEX_DIR/venv/bin/fusesoc" ]]; then
        success "FuseSoC found in virtual environment"
    else
        warning "FuseSoC not found in virtual environment"
        warning "Make sure Ibex environment is properly installed"
        ((prereq_failed++))
    fi
    
    # Check for Verilator and its version
    if ! command_exists verilator; then
        warning "Verilator not found in PATH"
        warning "This may cause build failures"
        ((prereq_failed++))
    else
        success "Verilator found: $(which verilator)"
        
        # Check Verilator version (unless skipped)
        if [[ "$SKIP_VERILATOR_CHECK" == "false" ]]; then
            local verilator_version=$(verilator --version 2>/dev/null | grep -o '[0-9]\+\.[0-9]\+' | head -1)
            if [[ -n "$verilator_version" ]]; then
                info "Verilator version: $verilator_version"
                
                # Parse version for comparison (handle decimal numbers properly)
                local major=$(echo "$verilator_version" | cut -d. -f1)
                local minor=$(echo "$verilator_version" | cut -d. -f2)
                # Convert to decimal by removing leading zeros
                major=$(echo "$major" | sed 's/^0*//')
                minor=$(echo "$minor" | sed 's/^0*//')
                # Handle empty strings (all zeros)
                [[ -z "$major" ]] && major=0
                [[ -z "$minor" ]] && minor=0
                local version_num=$((major * 1000 + minor))
                
                if [[ $version_num -lt 4210 ]]; then
                    error "Verilator version too old: $verilator_version (need at least 4.210)"
                    error "Current version: $verilator_version"
                    error "Required version: 4.210 or higher"
                    echo ""
                    echo "To fix this, you can:"
                    echo "1. Update Verilator system-wide:"
                    echo "   sudo apt update && sudo apt install verilator"
                    echo "2. Or install a newer version from source:"
                    echo "   git clone git@github.com:verilator/verilator.git"
                    echo "   cd verilator"
                    echo "   git checkout v4.210"
                    echo "   autoconf"
                    echo "   ./configure"
                    echo "   make"
                    echo "   sudo make install"
                    echo "3. Or use the --skip-verilator-check flag to continue anyway"
                    echo ""
                    ((prereq_failed++))
                else
                    success "Verilator version $verilator_version is sufficient"
                fi
            else
                warning "Could not determine Verilator version"
            fi
        else
            warning "Skipping Verilator version check (--skip-verilator-check flag used)"
        fi
    fi
    
    return $prereq_failed
}

# Function to setup Ibex environment
setup_ibex_environment() {
    log "Setting up Ibex environment..."

    # Check if we're in the right directory structure
    if [[ ! -d "$IBEX_DIR" ]]; then
        error "This script must be run from the score project root directory"
        error "Current directory: $(pwd)"
        error "Expected to find: tools/ibex"
        exit 1
    fi

    # Ensure dataset tree exists (paths computed at startup; mkdir is idempotent).
    mkdir -p "$LOG_DIR" "$BUILD_ARTIFACTS_DIR" "$DATASET_DIR/rtl_designs" \
        "$DATASET_DIR/simulation_models" "$DATASET_DIR/configurations" \
        "$DATASET_DIR/regression_logs"

    # Set up Ibex environment variables
    export IBEX_ROOT="$IBEX_DIR"
    export IBEX_BUILD_DIR="$IBEX_BUILD_DIR"
    export DATASET_DIR="$DATASET_DIR"
    
    info "IBEX_ROOT: $IBEX_ROOT"
    info "IBEX_BUILD_DIR: $IBEX_BUILD_DIR"
    info "DATASET_DIR: $DATASET_DIR"
    info "LOG_DIR: $LOG_DIR"
    info "PARALLEL_JOBS: $PARALLEL_JOBS"
    
    # Activate virtual environment directly (do not pipe `source` through tee: that runs it in a
    # subshell and drops PATH / VIRTUAL_ENV changes in this shell).
    if [[ -f "$IBEX_DIR/venv/bin/activate" ]]; then
        # shellcheck source=/dev/null
        source "$IBEX_DIR/venv/bin/activate"
        export PATH="$IBEX_DIR/venv/bin:$PATH"
        hash -r 2>/dev/null || true
        success "Ibex virtual environment activated"
        
        # Verify FuseSoC is available
        if command -v fusesoc >/dev/null 2>&1; then
            success "FuseSoC found in virtual environment: $(which fusesoc)"
        else
            warning "FuseSoC not found in virtual environment"
        fi
        ensure_ibex_venv_sitecustomize
    else
        error "Cannot find virtual environment at $IBEX_DIR/venv/bin/activate"
        error "Run the installation script first: ./scripts/install_ibex.sh"
        exit 1
    fi
    
    # Add local Verilator installation to PATH if it exists
    local verilator_dir="$PROJECT_ROOT/tools/verilator"
    if [[ -d "$verilator_dir/install/bin" ]]; then
        export PATH="$verilator_dir/install/bin:$PATH"
        success "Local Verilator installation added to PATH: $verilator_dir/install/bin"
    fi

    # Portable Ibex prebuilts (install_ibex.sh non-Ubuntu path)
    local ibex_host="$PROJECT_ROOT/tools/ibex-host-tools"
    if [[ -d "$ibex_host/verilator" ]]; then
        local _v added_v=false
        for _v in "$ibex_host/verilator"/*; do
            if [[ -d "$_v/bin" ]]; then
                export PATH="$_v/bin:$PATH"
                added_v=true
            fi
        done
        if [[ "$added_v" == true ]]; then
            success "Portable Verilator added to PATH under $ibex_host/verilator"
        fi
    fi
    if [[ -d "$ibex_host/verible/bin" ]]; then
        export PATH="$ibex_host/verible/bin:$PATH"
    fi
    if [[ -d "$ibex_host/riscv/bin" ]]; then
        export PATH="$ibex_host/riscv/bin:$PATH"
    fi

    if export_verilator_root_from_path; then
        success "VERILATOR_ROOT set to $VERILATOR_ROOT"
    else
        warning "Could not derive VERILATOR_ROOT from PATH (non-standard Verilator layout?)"
    fi
    # Stale V*.mk may still hardcode /tools/verilator/... from an older prebuilt; let env win.
    export MAKEFLAGS="${MAKEFLAGS:+$MAKEFLAGS }-e"
    
    # Create build directory
    mkdir -p "$IBEX_BUILD_DIR"
    
    # Change to Ibex directory for builds
    cd "$IBEX_DIR"
    
    success "Ibex environment setup complete"
}

# Function to get available Ibex configurations
get_ibex_configurations() {
    echo "Discovering available Ibex configurations..." >&2
    
    # Check if ibex_configs.yaml exists
    if [[ -f "$IBEX_DIR/ibex_configs.yaml" ]]; then
        echo "Found ibex_configs.yaml, parsing configurations..." >&2
        
        # Parse top-level configuration names only (skip indented parameter lines like "  RV32E : ...").
        local configs=()
        while IFS= read -r line; do
            if [[ "$line" =~ ^([a-zA-Z0-9][a-zA-Z0-9_-]*): ]]; then
                local config_name="${BASH_REMATCH[1]}"
                configs+=("$config_name")
            fi
        done < "$IBEX_DIR/ibex_configs.yaml"
        
        if [[ ${#configs[@]} -gt 0 ]]; then
            echo "Found ${#configs[@]} configurations in ibex_configs.yaml" >&2
            for config in "${configs[@]}"; do
                echo "  - $config" >&2
            done
            printf '%s\n' "${configs[@]}"
            return 0
        fi
    fi
    
    # Fallback to default configurations if YAML parsing fails
    echo "Could not parse ibex_configs.yaml, using default configurations" >&2
    local default_configs=("small" "micro" "maxperf" "maxperf-pmp-bmfull")
    printf '%s\n' "${default_configs[@]}"
}

# Function to build Ibex configuration
build_ibex_config() {
    local config_name="$1"
    local build_type="$2"  # simple-system, riscv-compliance, csr-test, arty
    
    debug "build_ibex_config called with: config_name=$config_name, build_type=$build_type"
    
    local config_build_name="${config_name}_${build_type}"
    local build_log="$LOG_DIR/${config_build_name}_${TIMESTAMP}.log"
    local config_dir="$DATASET_DIR/rtl_designs/${config_name}/${build_type}"
    
    log "Building Ibex configuration: $config_name ($build_type)"
    info "Build log: $build_log"
    info "Output directory: $config_dir"
    
    # Create configuration-specific directories
    mkdir -p "$config_dir"
    
    # Change to Ibex directory
    cd "$IBEX_DIR"
    
    # Ensure environment is activated and this shell's python3 resolves to the venv (hash may
    # cache a pre-activate interpreter, e.g. another project venv on PATH).
    if [[ -z "$VIRTUAL_ENV" ]]; then
        # shellcheck source=/dev/null
        source venv/bin/activate
    fi
    export PATH="$IBEX_DIR/venv/bin:$PATH"
    hash -r 2>/dev/null || true
    
    # Build command varies by build type
    local build_cmd=""
    case "$build_type" in
        simple-system)
            build_cmd="make build-simple-system IBEX_CONFIG=$config_name"
            ;;
        riscv-compliance)
            build_cmd="make build-riscv-compliance IBEX_CONFIG=$config_name"
            ;;
        csr-test)
            build_cmd="make build-csr-test IBEX_CONFIG=$config_name"
            ;;
        *)
            error "Unknown build type: $build_type"
            return 1
            ;;
    esac
    
    debug "Command: $build_cmd"
    
    # Run build with comprehensive logging
    if eval "$build_cmd" > "$build_log" 2>&1; then
        success "Ibex $config_name ($build_type) build completed"
        organize_build_outputs "$config_name" "$build_type" "$config_dir"
        return 0
    else
        error "Ibex $config_name ($build_type) build failed"
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

# Function to organize build outputs
organize_build_outputs() {
    local config_name="$1"
    local build_type="$2"
    local config_dir="$3"
    
    debug "organize_build_outputs called with: config_name=$config_name, build_type=$build_type, config_dir=$config_dir"
    
    # Copy RTL files from build directory
    if [[ -d "$IBEX_BUILD_DIR" ]]; then
        info "Organizing build outputs for $config_name ($build_type)"
        
        # Find and copy RTL files
        find "$IBEX_BUILD_DIR" -name "*.v" -o -name "*.sv" -o -name "*.vh" 2>/dev/null | while read rtl_file; do
            if [[ -f "$rtl_file" ]]; then
                cp "$rtl_file" "$config_dir/" 2>/dev/null || true
            fi
        done
        
        # Find and copy simulation models
        find "$IBEX_BUILD_DIR" -name "V*" -type f -executable 2>/dev/null | while read sim_file; do
            if [[ -f "$sim_file" ]]; then
                cp "$sim_file" "$config_dir/" 2>/dev/null || true
            fi
        done
        
        # Copy core files
        if [[ -d "$IBEX_DIR/rtl" ]]; then
            find "$IBEX_DIR/rtl" -name "*.sv" | while read rtl_file; do
                if [[ -f "$rtl_file" ]]; then
                    cp "$rtl_file" "$config_dir/" 2>/dev/null || true
                fi
            done
        fi
        
        # Copy vendor files
        if [[ -d "$IBEX_DIR/vendor" ]]; then
            find "$IBEX_DIR/vendor" -name "*.sv" -o -name "*.v" | head -20 | while read vendor_file; do
                if [[ -f "$vendor_file" ]]; then
                    cp "$vendor_file" "$config_dir/" 2>/dev/null || true
                fi
            done
        fi
        
        # Create configuration summary
        cat > "$config_dir/config_summary.txt" << EOF
Configuration: $config_name
Build Type: $build_type
Generated: $(date)
Build Location: $IBEX_BUILD_DIR
Output Directory: $config_dir

Configuration Details:
- IBEX_CONFIG: $config_name
- Build Type: $build_type
- Build Directory: $IBEX_BUILD_DIR

Files:
- RTL Files: $(find "$config_dir" -name "*.v" -o -name "*.sv" | wc -l)
- Simulation Models: $(find "$config_dir" -name "V*" -type f -executable | wc -l)
- Total Files: $(find "$config_dir" -type f | wc -l)
EOF
        
        # Create file list
        find "$config_dir" -name "*.v" -o -name "*.sv" -o -name "*.vh" > "$config_dir/filelist.f"
        
        local rtl_file_count=$(find "$config_dir" -name "*.v" -o -name "*.sv" | wc -l)
        success "Organized outputs for $config_name ($build_type): $rtl_file_count RTL files"
    else
        warning "Build directory not found: $IBEX_BUILD_DIR"
    fi
}

# Verilator simulation targets supported by tools/ibex/Makefile (upstream removed Arty FPGA make targets).
declare -a IBEX_BUILD_TYPES=(
    "simple-system"
    "riscv-compliance"
    "csr-test"
)

# Function to create configuration metadata
create_configuration_metadata() {
    local config_name="$1"
    local config_dir="$DATASET_DIR/configurations/$config_name"
    
    mkdir -p "$config_dir"
    
    # Get configuration details from ibex_configs.yaml
    if [[ -f "$IBEX_DIR/ibex_configs.yaml" ]]; then
        # Extract configuration details (simplified parsing)
        local config_section=false
        while IFS= read -r line; do
            if [[ "$line" =~ ^[[:space:]]*${config_name}: ]]; then
                config_section=true
                echo "# Ibex Configuration: $config_name" > "$config_dir/config.yaml"
                echo "name: $config_name" >> "$config_dir/config.yaml"
                echo "generated: $(date)" >> "$config_dir/config.yaml"
                echo "source: $IBEX_DIR/ibex_configs.yaml" >> "$config_dir/config.yaml"
                echo "" >> "$config_dir/config.yaml"
                echo "parameters:" >> "$config_dir/config.yaml"
            elif [[ "$config_section" == "true" ]] && [[ "$line" =~ ^[[:space:]]*([a-zA-Z0-9_-]+):[[:space:]]*(.+)$ ]]; then
                local param="${BASH_REMATCH[1]}"
                local value="${BASH_REMATCH[2]}"
                echo "  $param: $value" >> "$config_dir/config.yaml"
            elif [[ "$config_section" == "true" ]] && [[ "$line" =~ ^[[:space:]]*[a-zA-Z] ]]; then
                config_section=false
                break
            fi
        done < "$IBEX_DIR/ibex_configs.yaml"
    fi
    
    # Create performance summary if available
    cat > "$config_dir/performance_summary.txt" << EOF
Ibex Configuration Performance Summary
=====================================

Configuration: $config_name
Generated: $(date)

Performance Characteristics:
- Core Type: RISC-V 32-bit
- ISA Extensions: I, M, C, B (depending on configuration)
- Pipeline Stages: 2-3 stages (depending on configuration)
- Branch Prediction: Static (depending on configuration)

Area Estimates (from Ibex documentation):
- Small config: ~26.60 kGE (Yosys synthesis)
- Micro config: ~16.85 kGE (Yosys synthesis)
- MaxPerf config: ~32.48 kGE (Yosys synthesis)

Performance Estimates (CoreMark/MHz):
- Small config: 2.47 CoreMark/MHz
- Micro config: 0.904 CoreMark/MHz
- MaxPerf config: 3.13 CoreMark/MHz

Note: Actual performance depends on specific configuration parameters
and target technology library.
EOF
}

# Emit one build type per line (avoid word-splitting on descriptions with spaces).
get_available_build_types() {
    local build_type=""
    for build_type in "${IBEX_BUILD_TYPES[@]}"; do
        case "$build_type" in
            simple-system|riscv-compliance|csr-test)
                if [[ "$SKIP_VERILATOR_CHECK" == "true" ]] || command_exists verilator; then
                    echo "$build_type"
                else
                    warning "Skipping $build_type (requires Verilator)" >&2
                fi
                ;;
            *)
                echo "$build_type"
                ;;
        esac
    done
}

# Enhanced main execution
main() {
    local start_time=$(date +%s)
    
    log "==================================================================="
    log "Ibex RTL Generation Session Started"
    log "Session ID: $TIMESTAMP"
    log "Ibex Commit ID: $IBEX_COMMIT_ID"
    log "Dataset Directory: $DATASET_DIR"
    log "Parallel Jobs: $PARALLEL_JOBS"
    log "==================================================================="
    
    # Setup environment
    setup_ibex_environment
    
    # Check prerequisites
    local prereq_failures=0
    check_prerequisites || prereq_failures=$?
    
    if [[ $prereq_failures -gt 0 ]]; then
        warning "$prereq_failures prerequisite checks failed, but continuing..."
        warning "Some builds may fail due to missing dependencies"
    fi
    
    # Get available configurations
    local configs=()
    mapfile -t configs < <(get_ibex_configurations)
    local available_build_types=()
    mapfile -t available_build_types < <(get_available_build_types)
    local total_configs=$((${#configs[@]} * ${#available_build_types[@]}))
    
    log "Starting Ibex RTL generation for benchmarking..."
    log "Total configurations to build: $total_configs"
    log "Configurations: ${configs[*]}"
    log "Available build types: ${#available_build_types[@]} types"

    if [[ "$RUN_REGRESSION" == "true" ]]; then
        log "Regression enabled (default): Makefile simulations after each successful build."
        if [[ "$RUN_COMPLIANCE_SUITE" == "true" ]]; then
            info "RISC-V compliance: will use $RISCV_COMPLIANCE_REPO_URL (branch $RISCV_COMPLIANCE_BRANCH) under $RISCV_COMPLIANCE_ROOT"
        fi
    else
        log "Regression disabled (--no-regression): Verilator builds and output organization only."
    fi
    
    if [[ ${#available_build_types[@]} -lt ${#IBEX_BUILD_TYPES[@]} ]]; then
        warning "Some build types were skipped due to missing tools"
        warning "Available build types:"
        local bt=""
        for bt in "${available_build_types[@]}"; do
            info "  - $bt: $(ibex_build_type_desc "$bt")"
        done
    fi
    
    local success_count=0
    local failure_count=0
    local verify_success_count=0
    local verify_failure_count=0
    
    # Sequential execution
    log "Running sequential builds..."
    
    local current=0
    for config_name in "${configs[@]}"; do
        for build_type in "${available_build_types[@]}"; do
            current=$((current + 1))
            
            log "Progress: $current/$total_configs - Processing: $config_name ($build_type)"
            
            if build_ibex_config "$config_name" "$build_type"; then
                success_count=$((success_count + 1))
                info "$current/$total_configs completed successfully"
                if [[ "$RUN_REGRESSION" == "true" ]]; then
                    if run_ibex_verification "$config_name" "$build_type"; then
                        verify_success_count=$((verify_success_count + 1))
                    else
                        verify_failure_count=$((verify_failure_count + 1))
                    fi
                fi
            else
                failure_count=$((failure_count + 1))
                warning "$current/$total_configs failed"
            fi
            echo "" | tee -a "$SESSION_LOG"
        done
    done
    
    # Create configuration metadata
    log "Creating configuration metadata..."
    for config_name in "${configs[@]}"; do
        create_configuration_metadata "$config_name"
    done
    
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
    log "Execution mode: Sequential"
    log "Total time: ${hours}h ${minutes}m ${seconds}s"
    log "Total configurations attempted: $total_configs"
    echo "" | tee -a "$SESSION_LOG"
    
    success "Total successful builds: $success_count"
    if [[ $failure_count -gt 0 ]]; then
        error "Total failed builds: $failure_count"
    else
        info "Total failed builds: 0"
    fi
    echo "" | tee -a "$SESSION_LOG"

    if [[ "$RUN_REGRESSION" == "true" ]]; then
        log "Regression (simulation / compliance) summary"
        success "Verification passed: $verify_success_count"
        if [[ $verify_failure_count -gt 0 ]]; then
            error "Verification failed: $verify_failure_count"
        else
            info "Verification failed: 0"
        fi
        echo "" | tee -a "$SESSION_LOG"
    fi
    
    log "Dataset directory: $DATASET_DIR"
    log "RTL designs: $DATASET_DIR/rtl_designs/"
    log "Simulation models: $DATASET_DIR/simulation_models/"
    log "Configuration metadata: $DATASET_DIR/configurations/"
    log "Build artifacts: $BUILD_ARTIFACTS_DIR"
    log "Session logs: $LOG_DIR"
    log "Main session log: $SESSION_LOG"
    log "Ibex source commit: $IBEX_COMMIT_ID"
    if [[ "$RUN_REGRESSION" == "true" ]]; then
        log "Regression logs: $DATASET_DIR/regression_logs/"
    fi
    
    if [[ $failure_count -gt 0 ]]; then
        error "Some builds failed. Check individual build logs for details."
        log "==================================================================="
        exit 1
    fi
    if [[ "$RUN_REGRESSION" == "true" ]] && [[ $verify_failure_count -gt 0 ]]; then
        error "One or more regression verifications failed (see regression_logs under the dataset directory)."
        log "==================================================================="
        exit 1
    fi
    success "All builds completed successfully!"
    if [[ "$RUN_REGRESSION" == "true" ]]; then
        success "All regression verifications passed."
    fi
    log "==================================================================="
}

# Enhanced help function
show_help() {
    echo "Ibex RTL Generation Script for Benchmarking"
    echo ""
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "This script generates RTL for ALL available Ibex core configurations"
    echo "suitable for benchmarking and performance evaluation."
    echo ""
    echo "Generated configurations:"
    echo "  - All configurations from ibex_configs.yaml (or defaults)"
    echo "  - Build types: simple-system, riscv-compliance, csr-test (Verilator targets from Ibex Makefile)"
    echo "  - Each configuration gets all build types"
    echo ""
    echo "Options:"
    echo "  -h, --help              Show this help message"
    echo "  --check                 Check prerequisites only"
    echo "  --skip-verilator-check  Skip Verilator version check (use with caution)"
    echo "  --no-regression         Skip simulations after builds (Verilator compile + organize outputs only)"
    echo "  --regression            Run simulations after each build (default; redundant if omitted)"
    echo "  --no-compliance-suite   During regression, skip cloning/running riscv-compliance (faster)"
    echo ""
    echo "Regression (default ON) runs after each successful Verilator build:"
    echo "    simple-system     -> make run-simple-system (needs srec_cat on PATH)"
    echo "    csr-test          -> ./Vtb_cs_registers in build/.../sim-verilator (not make run-csr-test;"
    echo "                         FuseSoC run would delete reg_dpi.so before launch)"
    echo "    riscv-compliance  -> legacy Makefile suite (see below)"
    echo ""
    echo "RISC-V compliance (during regression, unless --no-compliance-suite):"
    echo "  Clones $RISCV_COMPLIANCE_REPO_URL branch $RISCV_COMPLIANCE_BRANCH into:"
    echo "    RISCV_COMPLIANCE_ROOT (default: tools/riscv-compliance under repo root)"
    echo "  Upstream main uses ACT4/mise; SCORE uses the old Makefile flow Ibex documents."
    echo ""
    echo "Prerequisites:"
    echo "  - Ibex installation completed (run ./scripts/install_ibex.sh first)"
    echo "  - Python virtual environment activated"
    echo "  - FuseSoC available in virtual environment"
    echo "  - Verilator 4.210+ (recommended) or other simulator"
    echo "  - Run from score project root directory"
    echo ""
    echo "Output:"
    echo "  Dataset directory: datasets/ibex/COMMIT_ID/"
    echo "  RTL configurations: datasets/ibex/COMMIT_ID/rtl_designs/CONFIG/BUILD_TYPE/"
    echo "  Simulation models: datasets/ibex/COMMIT_ID/simulation_models/"
    echo "  Configuration metadata: datasets/ibex/COMMIT_ID/configurations/"
    echo "  Build logs: datasets/ibex/COMMIT_ID/logs/"
    echo "  Session log: datasets/ibex/COMMIT_ID/logs/session_TIMESTAMP.log"
    echo "  Regression logs: datasets/ibex/COMMIT_ID/regression_logs/"
    echo ""
    echo "Examples:"
    echo "  $0                               # Build all configs + regression (default)"
    echo "  $0 --no-regression               # Builds only, no simulation / compliance"
    echo "  $0 --no-compliance-suite         # Regression without external riscv-compliance clone"
    echo "  $0 --check                       # Check prerequisites only"
    echo "  $0 --skip-verilator-check        # Skip Verilator version check"
    echo ""
    echo "Common Issues:"
    echo "  - 'FuseSoC not found': Make sure Ibex virtual environment is properly installed"
    echo "  - 'Virtual environment not found': Run installation: ./scripts/install_ibex.sh"
    echo "  - 'Verilator version too old': Update Verilator or use --skip-verilator-check"
    echo "  - 'Verilator not found': Install Verilator with: ./scripts/install_ibex.sh --install-verilator"
    echo "  - Build failures: Check individual build logs for specific errors"
    echo ""
    echo "Verilator Installation:"
    echo "  If you need a newer version of Verilator, run:"
    echo "    ./scripts/install_ibex.sh --install-verilator"
    echo "  This will install Verilator v4.210 as a git submodule in tools/verilator"
}

# Parse command line arguments (any order; --check runs after all flags are read)
DO_CHECK_ONLY=false
while [[ $# -gt 0 ]]; do
    case $1 in
        -h|--help)
            show_help
            exit 0
            ;;
        --check)
            DO_CHECK_ONLY=true
            shift
            ;;
        --no-regression)
            RUN_REGRESSION=false
            shift
            ;;
        --regression)
            RUN_REGRESSION=true
            shift
            ;;
        --no-compliance-suite)
            RUN_COMPLIANCE_SUITE=false
            shift
            ;;
        --skip-verilator-check)
            SKIP_VERILATOR_CHECK=true
            shift
            ;;
        *)
            error "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

if [[ "$DO_CHECK_ONLY" == true ]]; then
    setup_ibex_environment
    echo "Checking prerequisites only..."
    check_prerequisites || true
    echo "Prerequisite check completed. See logs in: $LOG_DIR"
    exit 0
fi

main 