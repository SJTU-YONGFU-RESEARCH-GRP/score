#!/usr/bin/env bash
#
# Rocket Chip RTL generation for SCORE (docs/PROMPTS.md: datasets, verification, logs).
# Upstream: https://github.com/chipsalliance/rocket-chip
#
# Run from SCORE repository root; the script changes to PROJECT_ROOT at startup.

set -euo pipefail

# Global variables
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
ROCKET_CHIP_DIR="$PROJECT_ROOT/tools/rocket-chip"
# Get commit ID using inline function
get_commit_id() {
    local repo_path="$1"
    # Submodules use a .git *file* (gitdir pointer), not a directory; -d "$path/.git" is false there.
    if git -C "$repo_path" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}
ROCKET_CHIP_COMMIT_ID=$(get_commit_id "$ROCKET_CHIP_DIR")
DATASET_DIR="$PROJECT_ROOT/datasets/rocket-chip/$ROCKET_CHIP_COMMIT_ID"
# Mill out/, optional SBT target/, and generation logs live under the dataset tree (not tools/rocket-chip).
ROCKET_MILL_OUT="${ROCKET_MILL_OUT:-$DATASET_DIR/out}"
ROCKET_SBT_TARGET_DIR="${ROCKET_SBT_TARGET_DIR:-$DATASET_DIR/target}"
LOG_DIR="${ROCKET_CHIP_LOG_DIR:-$DATASET_DIR/logs}"
GENERATION_LOG="$LOG_DIR/generation_$(date +%Y%m%d_%H%M%S).log"


# Tool paths
MILL_CMD="mill"
JAVA_CMD="java"
FIRTOOL_CMD="firtool"

# Generation options
ENABLE_SINGLE_CORE=true
ENABLE_DUAL_CORE=true
ENABLE_QUAD_CORE=true
ENABLE_CLUSTER=false
ENABLE_TINY=true
ENABLE_FPGA=true
VERIFY_SYNTAX=true
VERIFY_ONLY=false
COMPILE_ONLY=false
GENERATE_TESTBENCHES=true
# Optional: build upstream Verilated emulator (mill emulator[...].elf) after each config — needs RISCV, clang, ninja, Verilator
EMULATOR_ELF_SMOKE=false
# Optional: after generation, one-shot ISA smoke (DefaultConfig emulator + one riscv-tests ELF)
RISCV_ISA_SMOKE=false
# Optional: one Mill invocation runnable-riscv-test[...,Config,_,_].run (rocket-chip CI; all suites for that config)
MILL_RISCV_TEST_SMOKE=false
# Default Chisel config class for RISCV_ISA_SMOKE emulator build (must match a rocket-chip emulator[] cross entry)
ROCKET_ISA_SMOKE_CONFIG="${ROCKET_ISA_SMOKE_CONFIG:-freechips.rocketchip.system.DefaultConfig}"
OUTPUT_FORMAT="verilog"  # verilog, firrtl, both
PARALLEL_JOBS=4
# Upper bound for -j / --jobs (docs/PROMPTS.md parallelism hygiene).
MAX_PARALLEL_JOBS=32
VERBOSE=false
DRY_RUN=false

# Create necessary directories (dataset root + log dir; Mill out/ created in ensure_rocket_chip_build_layout)
mkdir -p "$DATASET_DIR" "$LOG_DIR"

cd "$PROJECT_ROOT" || exit 1

# Setup local environment (rocket_chip_env first: JDK 11 + PATH before setup_local_env)
if [[ -f "$PROJECT_ROOT/scripts/rocket_chip_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/rocket_chip_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging_files generate_rocket_chip "$GENERATION_LOG"

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
    if [[ "$VERBOSE" == "true" ]]; then
        local message="$1"
        echo -e "${PURPLE}[${SCRIPT_LOG_NAME}][DEBUG]${NC} $message" | tee -a "$GENERATION_LOG"
    fi
}

# Place Mill's out/ and optional SBT target/ under datasets/rocket-chip/<commit>/ by symlinking from
# tools/rocket-chip. Migrates an existing real directory once. Mill 0.11.x ignores MILL_OUTPUT_DIR;
# the symlink keeps upstream paths (tools/rocket-chip/out) valid for manual mill runs too.
ensure_rocket_chip_build_layout() {
    mkdir -p "$ROCKET_MILL_OUT" "$ROCKET_SBT_TARGET_DIR" "$LOG_DIR"

    export MILL_OUTPUT_DIR="$ROCKET_MILL_OUT"

    local rc_out="$ROCKET_CHIP_DIR/out"
    local rc_tgt="$ROCKET_CHIP_DIR/target"

    if [[ -d "$rc_out" && ! -L "$rc_out" ]]; then
        if [[ -n "$(ls -A "$ROCKET_MILL_OUT" 2>/dev/null)" ]]; then
            warning "Rocket Chip Mill out/ conflict: $ROCKET_MILL_OUT is non-empty and $rc_out is a real directory; leaving $rc_out in place."
        else
            rmdir "$ROCKET_MILL_OUT" 2>/dev/null || true
            info "Relocating Mill output from $rc_out to $ROCKET_MILL_OUT"
            mv "$rc_out" "$ROCKET_MILL_OUT"
            ln -sfn "$ROCKET_MILL_OUT" "$rc_out"
        fi
    elif [[ -L "$rc_out" ]] || [[ ! -e "$rc_out" ]]; then
        ln -sfn "$ROCKET_MILL_OUT" "$rc_out"
    fi

    if [[ -d "$rc_tgt" && ! -L "$rc_tgt" ]]; then
        if [[ -n "$(ls -A "$ROCKET_SBT_TARGET_DIR" 2>/dev/null)" ]]; then
            warning "Rocket Chip target/ conflict: $ROCKET_SBT_TARGET_DIR is non-empty and $rc_tgt is a real directory; leaving $rc_tgt in place."
        else
            rmdir "$ROCKET_SBT_TARGET_DIR" 2>/dev/null || true
            info "Relocating build target/ from $rc_tgt to $ROCKET_SBT_TARGET_DIR"
            mv "$rc_tgt" "$ROCKET_SBT_TARGET_DIR"
            ln -sfn "$ROCKET_SBT_TARGET_DIR" "$rc_tgt"
        fi
    elif [[ -L "$rc_tgt" ]] || [[ ! -e "$rc_tgt" ]]; then
        ln -sfn "$ROCKET_SBT_TARGET_DIR" "$rc_tgt"
    fi
}

# Mill writes out/ under the process cwd. Prerequisite checks and other steps used to run mill(1)
# from PROJECT_ROOT, which created a stray score/out/. Real Rocket Chip output lives under
# ROCKET_MILL_OUT (datasets/rocket-chip/<commit>/out via tools/rocket-chip/out symlink).
# Remove only paths that look like Mill output or are empty; skip symlinks and unknown layouts.
cleanup_stale_project_root_mill_out() {
    if [[ "${SCORE_SKIP_ROOT_OUT_CLEANUP:-}" == "1" || "${SCORE_SKIP_ROOT_OUT_CLEANUP:-}" == "true" ]]; then
        debug "Skipping repo-root out/ cleanup (SCORE_SKIP_ROOT_OUT_CLEANUP set)."
        return 0
    fi

    local root_out="$PROJECT_ROOT/out"
    [[ -e "$root_out" ]] || return 0

    if [[ -L "$root_out" ]]; then
        debug "Keeping $root_out (symlink; not removing automatically)."
        return 0
    fi
    if [[ ! -d "$root_out" ]]; then
        warning "Unexpected non-directory at $root_out; leaving in place."
        return 0
    fi

    # Do not delete if explicitly the same destination as configured Mill output.
    local mill_resolved root_resolved
    mill_resolved=$(cd "$PROJECT_ROOT" && readlink -f "$ROCKET_MILL_OUT" 2>/dev/null || echo "$ROCKET_MILL_OUT")
    root_resolved=$(readlink -f "$root_out" 2>/dev/null || echo "$root_out")
    if [[ "$mill_resolved" == "$root_resolved" ]]; then
        return 0
    fi

    local looks_like_mill=false
    if [[ -d "$root_out/mill-build" ]] || [[ -f "$root_out/mill-runner-state.json" ]] \
        || [[ -f "$root_out/mill-profile.json" ]] || [[ -f "$root_out/mill-chrome-profile.json" ]]; then
        looks_like_mill=true
    fi

    local has_entries
    has_entries=$(find "$root_out" -mindepth 1 -maxdepth 1 -print -quit 2>/dev/null || true)

    if [[ "$looks_like_mill" == "true" ]]; then
        info "Removing stray Mill output at $root_out (Rocket Chip build output: $ROCKET_MILL_OUT)."
        rm -rf "$root_out"
        return 0
    fi

    if [[ -z "$has_entries" ]]; then
        if rmdir "$root_out" 2>/dev/null; then
            info "Removed empty stray directory $root_out"
        fi
        return 0
    fi

    debug "Leaving $root_out in place (not Mill-shaped; may be user data)."
}

# Major Java version from `java -version` (1.8.x -> 8; 11+ -> 11, 17, ...).
rocket_chip_java_major() {
    local line v major
    line=$(java -version 2>&1 | head -n1)
    v=$(echo "$line" | sed -n 's/.*version "\([^"]*\)".*/\1/p')
    [[ -z "$v" ]] && echo 0 && return
    major="${v%%.*}"
    if [[ "$major" == "1" ]]; then
        v="${v#*.}"
        echo "${v%%.*}"
    else
        echo "$major"
    fi
}

# Check prerequisites
check_prerequisites() {
    log "Checking prerequisites..."
    
    # Check if rocket-chip directory exists
    if [[ ! -d "$ROCKET_CHIP_DIR" ]]; then
        error "Rocket Chip directory not found: $ROCKET_CHIP_DIR"
        error "Please ensure the rocket-chip submodule is properly initialized"
        return 1
    fi
    
    # Check Java
    if ! command -v "$JAVA_CMD" >/dev/null 2>&1; then
        error "Java not found. Please install Java JDK 11+ and run install_rocket_chip.sh"
        return 1
    fi
    
    local java_version
    java_version=$(rocket_chip_java_major)
    if [[ "$java_version" -lt 11 ]]; then
        error "Java reports major version $java_version (need 11+). Ensure JDK 11+ is first on PATH (source scripts/rocket_chip_env.sh) or run install_rocket_chip.sh"
        return 1
    fi
    info "✓ Java: $(java -version 2>&1 | head -n1)"
    
    # Check Mill
    if ! command -v "$MILL_CMD" >/dev/null 2>&1; then
        error "Mill build tool not found. Please run install_rocket_chip.sh first"
        return 1
    fi
    # Mill writes out/ in the current working directory; do not run from PROJECT_ROOT or the repo
    # root gets a stray score/out/ (Rocket Chip output stays under tools/rocket-chip/out → datasets/...).
    info "✓ Mill: $(cd "$ROCKET_CHIP_DIR" && mill --version 2>&1)"
    
    # Check if Scala source files exist
    if [[ ! -f "$ROCKET_CHIP_DIR/src/main/scala/system/Configs.scala" ]]; then
        error "Rocket Chip source files not found. Please check submodule initialization"
        return 1
    fi
    info "✓ Rocket Chip source files found"
    
    # Optional: Check FIRRTL tools
    if command -v "$FIRTOOL_CMD" >/dev/null 2>&1; then
        info "✓ FIRRTL: $(firtool --version 2>&1)"
    else
        warning "FIRRTL tools not found (optional for advanced compilation)"
        warning "Use --setup to automatically install firtool"
    fi
    
    success "All prerequisites satisfied"
    return 0
}

# Setup dependencies - downloads and installs required external tools
setup_dependencies() {
    log "Setting up external dependencies..."
    
    local install_dir="$HOME/.local/bin"
    mkdir -p "$install_dir"
    
    # Check if firtool already exists
    if command -v firtool >/dev/null 2>&1; then
        info "✓ firtool already installed: $(firtool --version 2>&1)"
        return 0
    fi
    
    # Detect system architecture and OS
    local arch="$(uname -m)"
    local os="$(uname -s)"
    local download_url=""
    local filename=""
    
    case "$os" in
        "Linux")
            case "$arch" in
                "x86_64")
                    # Match install_rocket_chip.sh / CIRCT firtool-1.62.0 release asset names
                    download_url="https://github.com/llvm/circt/releases/download/firtool-1.62.0/firrtl-bin-linux-x64.tar.gz"
                    filename="firrtl-bin-linux-x64.tar.gz"
                    ;;
                "aarch64"|"arm64")
                    warning "ARM64 Linux: no official firrtl-bin in firtool-1.62.0; run install_rocket_chip.sh on x86_64 or build CIRCT from source."
                    return 1
                    ;;
                *)
                    error "Unsupported architecture: $arch"
                    return 1
                    ;;
            esac
            ;;
        "Darwin")
            download_url="https://github.com/llvm/circt/releases/download/firtool-1.62.0/firrtl-bin-macos-x64.tar.gz"
            filename="firrtl-bin-macos-x64.tar.gz"
            ;;
        *)
            error "Unsupported operating system: $os"
            error "Please manually install firtool from https://github.com/llvm/circt/releases"
            return 1
            ;;
    esac
    
    log "Downloading firtool from: $download_url"
    
    # Create temporary directory for download
    local temp_dir=$(mktemp -d)
    cd "$temp_dir"
    
    # Download with retry logic
    local max_retries=3
    local retry_count=0
    while [[ $retry_count -lt $max_retries ]]; do
        if curl -L -o "$filename" "$download_url"; then
            info "✓ Downloaded $filename"
            break
        else
            retry_count=$((retry_count + 1))
            if [[ $retry_count -lt $max_retries ]]; then
                warning "Download failed, retrying ($retry_count/$max_retries)..."
                sleep 2
            else
                error "Failed to download firtool after $max_retries attempts"
                cd "$PROJECT_ROOT"
                rm -rf "$temp_dir"
                return 1
            fi
        fi
    done
    
    # Extract the archive
    log "Extracting firtool..."
    if tar -xzf "$filename"; then
        info "✓ Extracted firtool archive"
    else
        error "Failed to extract firtool archive"
        cd "$PROJECT_ROOT"
        rm -rf "$temp_dir"
        return 1
    fi
    
    # Find release layout firtool-*/bin/firtool and copy all bin tools (e.g. om-linker)
    local firtool_bin
    firtool_bin=$(find . -type f -path "*/bin/firtool" | head -n1)
    if [[ -z "$firtool_bin" ]]; then
        error "firtool binary not found in extracted archive"
        cd "$PROJECT_ROOT"
        rm -rf "$temp_dir"
        return 1
    fi
    
    if cp -a "$(dirname "$firtool_bin")"/* "$install_dir/"; then
        chmod +x "$install_dir/firtool"
        info "✓ Installed firtool to $install_dir/firtool"
    else
        error "Failed to copy firtool to $install_dir"
        cd "$PROJECT_ROOT"
        rm -rf "$temp_dir"
        return 1
    fi
    
    # Cleanup
    cd "$PROJECT_ROOT"
    rm -rf "$temp_dir"
    
    # Add to PATH for current session
    export PATH="$install_dir:$PATH"
    
    # Verify installation
    if command -v firtool >/dev/null 2>&1; then
        success "✓ firtool successfully installed: $(firtool --version 2>&1)"
        
        # Add to shell profile for persistence
        local shell_profile=""
        if [[ -f "$HOME/.bashrc" ]]; then
            shell_profile="$HOME/.bashrc"
        elif [[ -f "$HOME/.zshrc" ]]; then
            shell_profile="$HOME/.zshrc"
        elif [[ -f "$HOME/.profile" ]]; then
            shell_profile="$HOME/.profile"
        fi
        
        if [[ -n "$shell_profile" ]] && ! grep -q "$install_dir" "$shell_profile"; then
            echo "# Added by Rocket Chip generator setup" >> "$shell_profile"
            echo "export PATH=\"$install_dir:\$PATH\"" >> "$shell_profile"
            info "✓ Added $install_dir to PATH in $shell_profile"
        fi
        
        return 0
    else
        error "firtool installation verification failed"
        return 1
    fi
}

# Define processor configurations
# Based on Configs.scala in rocket-chip/src/main/scala/system/
declare -A ROCKET_CONFIGS=(
    # Single Core Configurations
    ["rocket_small"]="freechips.rocketchip.system.DefaultSmallConfig"
    ["rocket_big"]="freechips.rocketchip.system.DefaultConfig"
    ["rocket_rv32"]="freechips.rocketchip.system.DefaultRV32Config"
    ["rocket_fp16"]="freechips.rocketchip.system.DefaultFP16Config"
    ["rocket_b_ext"]="freechips.rocketchip.system.DefaultBConfig"
    ["rocket_rv32_b"]="freechips.rocketchip.system.DefaultRV32BConfig"
    ["rocket_hypervisor"]="freechips.rocketchip.system.HypervisorConfig"
    ["rocket_tiny"]="freechips.rocketchip.system.TinyConfig"
    
    # Multi-Core Configurations
    ["rocket_dual_core"]="freechips.rocketchip.system.DualCoreConfig"
    ["rocket_dual_bank"]="freechips.rocketchip.system.DualBankConfig"
    ["rocket_dual_channel"]="freechips.rocketchip.system.DualChannelConfig"
    ["rocket_eight_channel"]="freechips.rocketchip.system.EightChannelConfig"
    ["rocket_dual_channel_dual_bank"]="freechips.rocketchip.system.DualChannelDualBankConfig"
    
    # Edge Configurations
    ["rocket_edge_128bit"]="freechips.rocketchip.system.Edge128BitConfig"
    ["rocket_edge_32bit"]="freechips.rocketchip.system.Edge32BitConfig"
    
    # Special Configurations
    ["rocket_mem_port_only"]="freechips.rocketchip.system.MemPortOnlyConfig"
    ["rocket_mmio_port_only"]="freechips.rocketchip.system.MMIOPortOnlyConfig"
    ["rocket_rocc_example"]="freechips.rocketchip.system.RoccExampleConfig"
    ["rocket_clone_tile"]="freechips.rocketchip.system.CloneTileConfig"
)

# Configuration categories for organized output
declare -A CONFIG_CATEGORIES=(
    # Single Core
    ["rocket_small"]="single_core"
    ["rocket_big"]="single_core"
    ["rocket_rv32"]="single_core"
    ["rocket_fp16"]="single_core"
    ["rocket_b_ext"]="single_core"
    ["rocket_rv32_b"]="single_core"
    ["rocket_hypervisor"]="single_core"
    ["rocket_tiny"]="single_core"
    
    # Multi Core
    ["rocket_dual_core"]="multi_core"
    ["rocket_dual_bank"]="multi_core"
    ["rocket_dual_channel"]="multi_core"
    ["rocket_eight_channel"]="multi_core"
    ["rocket_dual_channel_dual_bank"]="multi_core"
    ["rocket_cluster"]="multi_core"
    ["rocket_heterogeneous"]="multi_core"
    
    # Edge
    ["rocket_edge_128bit"]="edge_config"
    ["rocket_edge_32bit"]="edge_config"
    
    # Benchmark
    ["rocket_single_benchmark"]="benchmark"
    ["rocket_dual_benchmark"]="benchmark"
    ["rocket_quad_benchmark"]="benchmark"
    ["rocket_octo_benchmark"]="benchmark"
    
    # FPGA
    ["rocket_fpga_default"]="fpga"
    ["rocket_fpga_base"]="fpga"
    
    # Special
    ["rocket_mem_port_only"]="special"
    ["rocket_mmio_port_only"]="special"
    ["rocket_rocc_example"]="special"
    ["rocket_clone_tile"]="special"
)

# Function to get enabled configurations based on user options
get_enabled_configs() {
    local enabled_configs=()
    
    for config_name in "${!ROCKET_CONFIGS[@]}"; do
        local category="${CONFIG_CATEGORIES[$config_name]}"
        local enabled=false
        
        # Special handling for tiny config first
        if [[ "$config_name" == "rocket_tiny" ]]; then
            [[ "$ENABLE_TINY" == "true" ]] && enabled=true
        else
            case "$category" in
                "single_core")
                    [[ "$ENABLE_SINGLE_CORE" == "true" ]] && enabled=true
                    ;;
                "multi_core")
                    if [[ "$config_name" == "rocket_dual_core" ]] && [[ "$ENABLE_DUAL_CORE" == "true" ]]; then
                        enabled=true
                    elif [[ "$config_name" != "rocket_dual_core" ]] && [[ "$ENABLE_QUAD_CORE" == "true" ]]; then
                        enabled=true
                    fi
                    ;;
                "edge_config"|"special")
                    [[ "$ENABLE_SINGLE_CORE" == "true" ]] && enabled=true
                    ;;
            esac
        fi
        
        if [[ "$enabled" == "true" ]]; then
            enabled_configs+=("$config_name")
        fi
    done
    
    printf '%s\n' "${enabled_configs[@]}"
}

# Function to generate RTL for a specific configuration
generate_config() {
    local config_name="$1"
    local config_class="${ROCKET_CONFIGS[$config_name]}"
    local category="${CONFIG_CATEGORIES[$config_name]}"
    
    if [[ -z "$config_class" ]]; then
        error "No configuration class found for $config_name"
        return 1
    fi
    
    log "Generating $config_name (class: $config_class, category: $category)..."
    
    cd "$ROCKET_CHIP_DIR" || exit 1
    
    # Ensure firtool is in PATH if it exists
    if [[ -f "$HOME/.local/bin/firtool" ]]; then
        export PATH="$HOME/.local/bin:$PATH"
    fi
    
    # Try different generation targets in priority order.
    # Note: verilator.vsrcDir is only PathRef(resources/vsrc) in upstream build.sc — it never emits
    # config-specific RTL under out/, so treating it as "success" left organize with 0 files.
    local targets=(
        "emulator[freechips.rocketchip.system.TestHarness,$config_class].mfccompiler.compile"
        "emulator[freechips.rocketchip.system.TestHarness,$config_class].generator.elaborate"
        "emulator[freechips.rocketchip.system.TestHarness,$config_class].generator.chirrtl"
    )
    
    local success=false
    local generation_log="$DATASET_DIR/logs/${config_name}_generation.log"
    mkdir -p "$(dirname "$generation_log")"
    local total_targets=${#targets[@]}
    local target_index=0
    
    # Clear previous log
    > "$generation_log"
    
    for target in "${targets[@]}"; do
        target_index=$((target_index + 1))
        log "Trying generation target: $target for $config_name"
        echo "=== Attempting target: $target ===" >> "$generation_log"
        
        local mill_cmd="mill -i $target"
    
        # Add specific flags for mfccompiler.compile to generate cleaner SystemVerilog
        if [[ "$target" == *"mfccompiler.compile"* ]]; then
            # Set environment variables for better firtool output
            export FIRTOOL_OPTIONS="--lowering-options=noAlwaysComb,disallowPortDeclSharing,disallowLocalVariables --strip-debug-info --disable-all-randomization --ignore-read-enable-mem"
        fi
        
        debug "Running: $mill_cmd"
        # Serialize Mill: parallel jobs share tools/rocket-chip/out; concurrent Zinc workers hit
        # FileAlreadyExistsException on worker.dest/.../compiled/DONE (see generation logs).
        local mill_lock_file="${DATASET_DIR}/.mill_generation.lock"
        mkdir -p "$(dirname "$mill_lock_file")"
        touch "$mill_lock_file"
        local mill_rc=1
        if command -v flock >/dev/null 2>&1; then
            if (
                flock -w 7200 9 || exit 1
                exec timeout 600 "$MILL_CMD" -i "$target"
            ) 9>>"$mill_lock_file" >>"$generation_log" 2>&1; then
                mill_rc=0
            fi
        else
            warning "flock not found; Mill runs without cross-job lock (Zinc races possible with -j > 1)."
            if timeout 600 "$MILL_CMD" -i "$target" >>"$generation_log" 2>&1; then
                mill_rc=0
            fi
        fi

        if [[ "$mill_rc" -eq 0 ]]; then
            info "✓ Successfully generated $config_name using $target"
            echo "SUCCESS: Generated using $target" >> "$generation_log"
            success=true
            break
        else
            echo "FAILED: Target $target failed" >> "$generation_log"
            if [[ "$target_index" -lt "$total_targets" ]]; then
                info "Mill target not usable for $config_name ($target); trying fallback..."
            else
                warning "✗ Failed to generate $config_name using $target"
            fi
        fi
    done
    
    # Unset the environment variable
    unset FIRTOOL_OPTIONS
    
    if [[ "$success" != "true" ]]; then
        error "All generation targets failed for $config_name"
        echo "FINAL RESULT: ALL TARGETS FAILED" >> "$generation_log"
        return 1
    fi
    
    # Create output directory and organize generated files
    local output_dir="$DATASET_DIR/rtl_designs/$category/$config_name"
    mkdir -p "$output_dir"
    
    organize_generated_files "$config_name" "$category" "$output_dir"
    local organize_result=$?
    
    if [[ $organize_result -eq 0 ]]; then
        success "Generated and organized $config_name"

        if [[ "$GENERATE_TESTBENCHES" == "true" ]]; then
            generate_testbench "$config_name" "$output_dir"
        fi

        if [[ "$EMULATOR_ELF_SMOKE" == "true" ]]; then
            if ! run_emulator_elf_smoke "$config_name" "$config_class"; then
                return 1
            fi
        fi

        return 0
    else
        error "Failed to organize files for $config_name"
        return 1
    fi
}

# Function to organize generated files
organize_generated_files() {
    local config_name="$1"
    local category="$2"
    local output_dir="$3"
    local config_class="${ROCKET_CONFIGS[$config_name]}"
    
    debug "Organizing files for $config_name (class: $config_class)..."
    
    # Track copied files to avoid duplicates
    local copied_files=()
    
    # Look for generated files in multiple possible locations
    local search_dirs=(
        "$ROCKET_MILL_OUT"
        "$ROCKET_CHIP_DIR/generated"
        "$ROCKET_CHIP_DIR/emulator/generated-src"
        "$ROCKET_CHIP_DIR/vsim/generated-src"
        "$ROCKET_MILL_OUT/emulator"
    )
    
    local found_files=false
    
    # Function to copy a file only once and track what was copied
    copy_file_once() {
        local src_file="$1"
        local base_name=$(basename "$src_file")
        
        # Check if already copied
        for copied in "${copied_files[@]}"; do
            if [[ "$copied" == "$base_name" ]]; then
                return 0  # Already copied
            fi
        done
        
        # Determine file type and copy
        local file_info=$(file "$src_file" 2>/dev/null)
        local should_copy=false
        local file_desc=""
        
        if [[ "$file_info" =~ "Verilog source" ]] || [[ "$base_name" =~ \.(v|sv)$ ]]; then
            should_copy=true
            file_desc="Verilog"
        elif [[ "$file_info" =~ "JSON" ]] || [[ "$base_name" =~ \.json$ ]]; then
            should_copy=true
            file_desc="JSON"
        elif [[ "$base_name" =~ \.fir$ ]]; then
            should_copy=true
            file_desc="FIRRTL"
        elif [[ "$base_name" =~ \.dts$ ]]; then
            should_copy=true
            file_desc="Device Tree"
        elif [[ "$base_name" =~ \.graphml$ ]]; then
            should_copy=true
            file_desc="GraphML"
        elif [[ "$file_info" =~ "text" ]] && [[ "$base_name" =~ \.(v|sv|scala|cpp|h|c)$ ]]; then
            should_copy=true
            file_desc="Source"
        fi
        
        if [[ "$should_copy" == "true" ]]; then
            cp "$src_file" "$output_dir/"
            copied_files+=("$base_name")
            debug "Copied $file_desc file: $base_name"
        fi
    }
    
    for search_dir in "${search_dirs[@]}"; do
        if [[ -d "$search_dir" ]]; then
            # Find Verilog files
            while IFS= read -r -d '' file; do
                    if [[ -f "$file" ]]; then
                    copy_file_once "$file"
                fi
            done < <(find "$search_dir" \( -name "*.v" -o -name "*.sv" \) -print0 2>/dev/null)
            
            # Find FIRRTL files
            while IFS= read -r -d '' file; do
                if [[ -f "$file" ]]; then
                    copy_file_once "$file"
                fi
            done < <(find "$search_dir" \( -name "*.fir" -o -name "*.anno.json" \) -print0 2>/dev/null)
            
            # Find C++ testharness files (from verilator)
            while IFS= read -r -d '' file; do
                if [[ -f "$file" ]]; then
                    copy_file_once "$file"
                fi
            done < <(find "$search_dir" \( -name "*.cc" -o -name "*.cpp" -o -name "*.h" \) -print0 2>/dev/null)
                    fi
                done
    
    # Additional search: look in the specific mill output directory
    local mill_out_dir="$ROCKET_MILL_OUT/emulator/freechips.rocketchip.system.TestHarness/$config_class"
    if [[ -d "$mill_out_dir" ]]; then
        debug "Searching mill output directory: $mill_out_dir"
        while IFS= read -r -d '' file; do
            if [[ -f "$file" ]]; then
                copy_file_once "$file"
            fi
        done < <(find "$mill_out_dir" \( -name "*.v" -o -name "*.sv" -o -name "*.fir" -o -name "*.anno.json" \) -print0 2>/dev/null)
    fi
    
    # Additional comprehensive search in all mill output subdirectories
    local mill_base_dir="$ROCKET_MILL_OUT/emulator"
    if [[ -d "$mill_base_dir" ]]; then
        debug "Searching all mill output directories under: $mill_base_dir"
        # Process substitution keeps copy_file_once in the same shell so copied_files[] stays accurate.
        while IFS= read -r -d '' file; do
            if [[ -f "$file" ]]; then
                copy_file_once "$file"
            fi
        done < <(find "$mill_base_dir" -path "*${config_class}*" \( -name "*.fir" -o -name "*.anno.json" -o -name "*.v" -o -name "*.sv" -o -name "*.json" -o -name "*.dts" -o -name "*.graphml" \) -print0 2>/dev/null)
    fi
    
    # Create a simple configuration summary
    cat > "$output_dir/config_info.txt" << EOF
Configuration: $config_name
Category: $category
Rocket Chip Class: ${ROCKET_CONFIGS[$config_name]}
Generated: $(date)
Generator: Rocket Chip Generator (Chisel/FIRRTL)
Description: RISC-V processor configuration generated from Rocket Chip
Build Method: Multiple mill targets (mfccompiler.compile, generator.elaborate, generator.chirrtl)
Files Generated: ${#copied_files[@]}
EOF
    
    # Print summary
    local total_files=${#copied_files[@]}
    local verilog_count=$(find "$output_dir" -name "*.sv" -o -name "*.v" | wc -l)
    local json_count=$(find "$output_dir" -name "*.json" | wc -l)
    local firrtl_count=$(find "$output_dir" -name "*.fir" | wc -l)
    
    info "Organized $total_files unique files for $config_name"
    debug "  - Verilog/SystemVerilog: $verilog_count files"
    debug "  - JSON configs: $json_count files" 
    debug "  - FIRRTL: $firrtl_count files"
    
    if [[ $total_files -gt 0 ]]; then
        found_files=true
    fi
    
    if [[ "$found_files" != "true" ]]; then
        warning "No generated files found for $config_name"
        return 1
    fi
    
    # Copy required external modules from Rocket Chip source
    # These modules are referenced by the generated RTL but not always included by firtool
    copy_external_modules_from_source "$config_name" "$output_dir"
    
    return 0
}

# Function to copy required external modules from Rocket Chip source
copy_external_modules_from_source() {
    local config_name="$1"
    local output_dir="$2"
    
    debug "Copying external modules from Rocket Chip source for $config_name..."
    
    # Path to Rocket Chip vsrc directory
    local rocket_vsrc_dir="$ROCKET_CHIP_DIR/src/main/resources/vsrc"
    
    # Copy EICG_wrapper.v if not already present (use .v extension to match original)
    local eicg_wrapper_file="$output_dir/EICG_wrapper.v"
    if [[ ! -f "$eicg_wrapper_file" && -f "$rocket_vsrc_dir/EICG_wrapper.v" ]]; then
        debug "Copying EICG_wrapper.v from Rocket Chip source for $config_name..."
        cp "$rocket_vsrc_dir/EICG_wrapper.v" "$eicg_wrapper_file"
        debug "Copied EICG_wrapper.v for $config_name"
    fi
    
    # Copy SimDTM.v if not already present
    local simdtm_file="$output_dir/SimDTM.v"
    if [[ ! -f "$simdtm_file" && -f "$rocket_vsrc_dir/SimDTM.v" ]]; then
        debug "Copying SimDTM.v from Rocket Chip source for $config_name..."
        cp "$rocket_vsrc_dir/SimDTM.v" "$simdtm_file"
        debug "Copied SimDTM.v for $config_name"
    fi
    
    # Copy plusarg_reader.v if not already present
    local plusarg_file="$output_dir/plusarg_reader.v"
    if [[ ! -f "$plusarg_file" && -f "$rocket_vsrc_dir/plusarg_reader.v" ]]; then
        debug "Copying plusarg_reader.v from Rocket Chip source for $config_name..."
        cp "$rocket_vsrc_dir/plusarg_reader.v" "$plusarg_file"
        debug "Copied plusarg_reader.v for $config_name"
    fi
    
    info "External modules copy completed for $config_name"
}

# Function to generate a placeholder testbench (does NOT instantiate TestHarness — ports differ per config).
generate_testbench() {
    local config_name="$1"
    local output_dir="$2"

    debug "Generating placeholder testbench for $config_name..."

    if [[ ! -d "$output_dir" ]]; then
        warning "Output directory missing for testbench: $output_dir"
        return 1
    fi

    info "Writing placeholder testbench (no DUT instantiation) for $config_name"

    cat > "$output_dir/${config_name}_tb.sv" << EOF
\`timescale 1ns / 1ps

// SCORE placeholder testbench for ${config_name}
// Rocket Chip TestHarness has many top-level ports; auto-instantiation was misleading.
// For real execution use: ./scripts/generate_rocket_chip.sh --riscv-isa-smoke
//   or upstream Mill emulator + riscv-tests (see rocket-chip build.sc).
module ${config_name}_tb;

    initial begin
        \$display("SCORE placeholder TB for ${config_name}: no DUT instantiated.");
        #1;
        \$finish;
    end

endmodule
EOF

    info "Generated placeholder testbench: ${config_name}_tb.sv"
    return 0
}

# Run upstream Mill target emulator[TestHarness,<config_class>].elf (Verilator + link).
# Requires RISCV (FESVR), Verilator, clang, ninja — see chipsalliance/rocket-chip build.sc.
run_emulator_elf_smoke() {
    local config_name="$1"
    local config_class="$2"
    local smoke_log="$DATASET_DIR/logs/${config_name}_emulator_elf_smoke.log"
    mkdir -p "$(dirname "$smoke_log")"

    if [[ -z "${RISCV:-}" ]]; then
        error "EMULATOR_ELF_SMOKE requires RISCV in the environment (FESVR / riscv-tools prefix)."
        return 1
    fi

    if ! command -v verilator >/dev/null 2>&1; then
        error "EMULATOR_ELF_SMOKE requires verilator on PATH (install with: ./scripts/install_rocket_chip.sh --verilator)"
        return 1
    fi

    log "Emulator ELF smoke: $config_name ($config_class) — log: $smoke_log"
    local _prev
    _prev=$(pwd)
    cd "$ROCKET_CHIP_DIR" || return 1
    local mill_target="emulator[freechips.rocketchip.system.TestHarness,${config_class}].elf"
    echo "=== mill -i ${mill_target} ===" >> "$smoke_log"
    # Long timeout: Verilator compile of large configs can exceed 1h
    if timeout 7200 mill -i "$mill_target" >> "$smoke_log" 2>&1; then
        success "Emulator ELF smoke passed for $config_name"
        cd "$_prev" || true
        return 0
    fi
    error "Emulator ELF smoke failed for $config_name (see $smoke_log)"
    tail -30 "$smoke_log" >&2 || true
    cd "$_prev" || true
    return 1
}

# Root directory for prebuilt riscv-tests ELFs (matches rocket-chip build.sc: RISCV_TESTS_ROOT or RISCV).
rocket_riscv_tests_prefix() {
    echo "${RISCV_TESTS_ROOT:-${RISCV:-}}"
}

# Return path to isa/ directory containing riscv-tests binaries, or empty.
find_riscv_tests_isa_dir() {
    local root
    root="$(rocket_riscv_tests_prefix)"
    if [[ -z "$root" ]]; then
        return 1
    fi
    local c
    for c in \
        "$root/riscv64-unknown-elf/share/riscv-tests/isa" \
        "$root/riscv32-unknown-elf/share/riscv-tests/isa" \
        "$root/share/riscv-tests/isa"; do
        if [[ -d "$c" ]]; then
            echo "$c"
            return 0
        fi
    done
    return 1
}

# Pick one small RV64 UI test ELF for DefaultConfig smoke (override with ROCKET_ISA_SMOKE_ELF).
pick_riscv_isa_smoke_elf() {
    if [[ -n "${ROCKET_ISA_SMOKE_ELF:-}" && -f "$ROCKET_ISA_SMOKE_ELF" ]]; then
        echo "$ROCKET_ISA_SMOKE_ELF"
        return 0
    fi
    local isa_dir
    if ! isa_dir="$(find_riscv_tests_isa_dir)"; then
        return 1
    fi
    local name
    for name in rv64ui-p-add rv64ui-p-simple rv64ui-p-and; do
        if [[ -x "$isa_dir/$name" || -f "$isa_dir/$name" ]]; then
            echo "$isa_dir/$name"
            return 0
        fi
    done
    return 1
}

# Locate Verilated emulator binary after mill ... .elf (prefer most recently modified).
find_mill_emulator_binary() {
    local files
    files=$(find "$ROCKET_MILL_OUT" -type f -name emulator -executable 2>/dev/null || true)
    if [[ -z "$files" ]]; then
        return 1
    fi
    # shellcheck disable=SC2086
    ls -t $files 2>/dev/null | head -n1
}

# Build DefaultConfig (or ROCKET_ISA_SMOKE_CONFIG) emulator once and run a single riscv-tests ELF.
run_riscv_isa_smoke_once() {
    local smoke_log="$DATASET_DIR/logs/riscv_isa_smoke.log"
    mkdir -p "$(dirname "$smoke_log")"

    if [[ -z "${RISCV:-}" ]]; then
        error "RISCV_ISA_SMOKE requires RISCV (riscv-tools prefix with libfesvr)."
        return 1
    fi
    if ! command -v verilator >/dev/null 2>&1; then
        error "RISCV_ISA_SMOKE requires verilator on PATH."
        return 1
    fi

    local test_elf
    if ! test_elf="$(pick_riscv_isa_smoke_elf)"; then
        error "Could not find a riscv-tests ELF under RISCV/RISCV_TESTS_ROOT (tried rv64ui-p-add, ...). Set ROCKET_ISA_SMOKE_ELF."
        return 1
    fi

    local max_cycles="${ROCKET_ISA_MAX_CYCLES:-10000000}"
    local cfg="$ROCKET_ISA_SMOKE_CONFIG"
    local mill_target="emulator[freechips.rocketchip.system.TestHarness,${cfg}].elf"

    log "RISC-V ISA smoke: mill ${mill_target} then ${test_elf} (max-cycles=${max_cycles}) — log: $smoke_log"
    echo "=== ISA smoke $(date -u +"%Y-%m-%dT%H:%M:%SZ") ===" >> "$smoke_log"
    echo "RISCV=$RISCV" >> "$smoke_log"
    echo "mill_target=$mill_target" >> "$smoke_log"
    echo "elf=$test_elf" >> "$smoke_log"

    local _prev
    _prev=$(pwd)
    cd "$ROCKET_CHIP_DIR" || return 1

    echo "=== mill -i ${mill_target} ===" >> "$smoke_log"
    if ! timeout 7200 mill -i "$mill_target" >> "$smoke_log" 2>&1; then
        error "ISA smoke: mill emulator build failed (see $smoke_log)"
        cd "$_prev" || true
        return 1
    fi

    local emu
    if ! emu="$(find_mill_emulator_binary)"; then
        error "ISA smoke: could not find Verilated emulator under $ROCKET_MILL_OUT (see $smoke_log)"
        cd "$_prev" || true
        return 1
    fi
    echo "emulator=$emu" >> "$smoke_log"

    echo "=== $emu -m $max_cycles $test_elf ===" >> "$smoke_log"
    if timeout 600 "$emu" -m "$max_cycles" "$test_elf" >> "$smoke_log" 2>&1; then
        success "RISC-V ISA smoke passed (${cfg})"
        cd "$_prev" || true
        return 0
    fi
    error "RISC-V ISA smoke failed (see $smoke_log)"
    tail -40 "$smoke_log" >&2 || true
    cd "$_prev" || true
    return 1
}

# Single Mill cross invocation matching rocket-chip CI (.github/workflows/mill-ci.yml):
#   mill -i -j 0 "runnable-riscv-test[...,Config,_,_].run"
# Wildcards _,_ expand to all (suite, exclude) pairs for that config — can take a long time.
run_mill_riscv_test_smoke_once() {
    local smoke_log="$DATASET_DIR/logs/mill_riscv_test_smoke.log"
    mkdir -p "$(dirname "$smoke_log")"

    if [[ -z "${RISCV:-}" ]]; then
        error "MILL_RISCV_TEST_SMOKE requires RISCV."
        return 1
    fi

    local cfg_short="${ROCKET_MILL_RISCV_CONFIG:-TinyConfig}"
    local config_class="freechips.rocketchip.system.${cfg_short}"
    local mill_target="runnable-riscv-test[freechips.rocketchip.system.TestHarness,${config_class},_,_].run"

    log "Mill runnable-riscv-test smoke (${config_class}, _,_) — log: $smoke_log"
    warning "This runs upstream CI-style riscv-tests for ${cfg_short}; expect a long build and many ELFs."

    echo "=== mill suite smoke $(date -u +"%Y-%m-%dT%H:%M:%SZ") ===" >> "$smoke_log"
    local _prev
    _prev=$(pwd)
    cd "$ROCKET_CHIP_DIR" || return 1

    echo "=== mill -i -j 0 ${mill_target} ===" >> "$smoke_log"
    if timeout 14400 mill -i -j 0 "$mill_target" >> "$smoke_log" 2>&1; then
        success "Mill runnable-riscv-test smoke finished successfully"
        cd "$_prev" || true
        return 0
    fi
    error "Mill runnable-riscv-test smoke failed (see $smoke_log)"
    tail -40 "$smoke_log" >&2 || true
    cd "$_prev" || true
    return 1
}

run_optional_post_generation_smokes() {
    local rc=0
    if [[ "$RISCV_ISA_SMOKE" == "true" ]] && ! run_riscv_isa_smoke_once; then
        rc=1
    fi
    if [[ "$MILL_RISCV_TEST_SMOKE" == "true" ]] && ! run_mill_riscv_test_smoke_once; then
        rc=1
    fi
    return $rc
}

# Function to clean up build artifacts
cleanup_build_artifacts() {
    local work_dir="$1"
    
    debug "Cleaning up build artifacts in $work_dir..."
    
    # Remove temporary build files but keep generated RTL
    find "$work_dir" -name "*.class" -delete 2>/dev/null || true
    find "$work_dir" -name "*.jar" -delete 2>/dev/null || true
    find "$work_dir" -name "target" -type d -exec rm -rf {} + 2>/dev/null || true
    
    debug "Build cleanup completed"
}

# Function to verify RTL syntax (updated with better SystemVerilog support)
verify_rtl_syntax() {
    log "=== RTL Syntax Verification ==="
    local verification_dir="$DATASET_DIR/verification"
    mkdir -p "$verification_dir"
    
    local total_configs=0
    local syntax_errors=0
    local verified_configs=0
    
    # Check available tools
    local has_verilator=false
    local has_iverilog=false
    
    if command -v verilator >/dev/null 2>&1; then
        has_verilator=true
        debug "Verilator available for SystemVerilog verification"
    fi
    
    if command -v iverilog >/dev/null 2>&1; then
        has_iverilog=true
        debug "Icarus Verilog available for Verilog verification"
    fi
    
    if [[ "$has_verilator" == "false" && "$has_iverilog" == "false" ]]; then
        warning "No Verilog/SystemVerilog verification tools available"
        return 1
    fi
    
    # Find all generated configurations
    for category_dir in "$DATASET_DIR/rtl_designs"/*; do
        if [[ ! -d "$category_dir" ]]; then
            continue
        fi
        
        local category=$(basename "$category_dir")
        for config_dir in "$category_dir"/*; do
            if [[ ! -d "$config_dir" ]]; then
                continue
            fi
            
            local config_name=$(basename "$config_dir")
            total_configs=$((total_configs + 1))
            
            log "Verifying syntax for $config_name..."
            
            # Find SystemVerilog and Verilog files separately
            local sv_files=$(find "$config_dir" -name "*.sv" 2>/dev/null)
            local v_files=$(find "$config_dir" -name "*.v" 2>/dev/null)
            
            if [[ -z "$sv_files" && -z "$v_files" ]]; then
                warning "No Verilog/SystemVerilog files found for $config_name"
                syntax_errors=$((syntax_errors + 1))
                continue
            fi
            
            # Combine all Verilog files for verification
            local all_files=""
            if [[ -n "$sv_files" ]]; then
                all_files="$sv_files"
            fi
            if [[ -n "$v_files" ]]; then
                all_files="$all_files $v_files"
            fi
            
            local syntax_log="$verification_dir/${config_name}_syntax.log"
            local syntax_result=0
            
            # Clear previous log
            > "$syntax_log"
            
            # Verify SystemVerilog files with Verilator (updated with better parameters)
            if [[ -n "$sv_files" ]]; then
                if [[ "$has_verilator" == "true" ]]; then
                    echo "=== SystemVerilog Verification with Verilator ===" >> "$syntax_log"
                    echo "Found $(echo "$sv_files" | wc -l) SystemVerilog files" >> "$syntax_log"
                    
                    # Prefer TestHarness for lint (placeholder *_tb.sv is not a real top for the full RTL closure)
                    local top_module=""

                    for sv_file in $sv_files; do
                        if [[ "$(basename "$sv_file")" == *"TestHarness"* ]]; then
                            top_module=$(grep -m1 "^module" "$sv_file" 2>/dev/null | sed 's/module \([a-zA-Z_][a-zA-Z0-9_]*\).*/\1/' || true)
                            if [[ -n "$top_module" ]]; then
                                echo "Found TestHarness top module: $top_module in $(basename "$sv_file")" >> "$syntax_log"
                                break
                            fi
                        fi
                    done

                    if [[ -z "$top_module" ]]; then
                        for sv_file in $sv_files; do
                            if [[ "$(basename "$sv_file")" == *"_tb.sv" ]]; then
                                top_module=$(grep -m1 "^module" "$sv_file" 2>/dev/null | sed 's/module \([a-zA-Z_][a-zA-Z0-9_]*\).*/\1/' || true)
                                if [[ -n "$top_module" ]]; then
                                    echo "Found testbench top module: $top_module in $(basename "$sv_file")" >> "$syntax_log"
                                    break
                                fi
                            fi
                        done
                    fi
                    
                    if [[ -z "$top_module" ]]; then
                        # Fallback: find any module
                        for sv_file in $sv_files; do
                            top_module=$(grep -m1 "^module" "$sv_file" 2>/dev/null | sed 's/module \([a-zA-Z_][a-zA-Z0-9_]*\).*/\1/' || true)
                            if [[ -n "$top_module" ]]; then
                                echo "Found top module: $top_module in $(basename "$sv_file")" >> "$syntax_log"
                                break
                            fi
                        done
                    fi
                    
                    echo "Running Verilator verification..." >> "$syntax_log"
                    if [[ -n "$top_module" ]]; then
                        # Verilator 5.x: delays (#1, etc.) require --timing or --no-timing for lint.
                        # Placeholder *_tb.sv uses #1; --no-timing is appropriate for syntax-only checks.
                        verilator --lint-only --sv --no-timing \
                            --top-module "$top_module" \
                            -Wall \
                            -Wno-DECLFILENAME \
                            -Wno-UNUSED \
                            -Wno-UNDRIVEN \
                            -Wno-PINCONNECTEMPTY \
                            -Wno-PINMISSING \
                            -Wno-TIMESCALEMOD \
                            -Wno-VARHIDDEN \
                            -Wno-STMTDLY \
                            -Wno-INFINITELOOP \
                            -Wno-BLKSEQ \
                            -Wno-SYNCASYNCNET \
                            -Wno-fatal \
                            --error-limit 50 \
                            $all_files >> "$syntax_log" 2>&1 || syntax_result=$?
            else
                        echo "Warning: Could not determine top module, trying general syntax check" >> "$syntax_log"
                        verilator --lint-only --sv --no-timing \
                            -Wall \
                            -Wno-DECLFILENAME \
                            -Wno-UNUSED \
                            -Wno-UNDRIVEN \
                            -Wno-PINCONNECTEMPTY \
                            -Wno-PINMISSING \
                            -Wno-TIMESCALEMOD \
                            -Wno-VARHIDDEN \
                            -Wno-STMTDLY \
                            -Wno-INFINITELOOP \
                            -Wno-BLKSEQ \
                            -Wno-SYNCASYNCNET \
                            -Wno-fatal \
                            --error-limit 50 \
                            $all_files >> "$syntax_log" 2>&1 || syntax_result=$?
                    fi
                    echo "Verilator verification completed with exit code: $syntax_result" >> "$syntax_log"
                else
                    echo "SystemVerilog files found but Verilator not available" >> "$syntax_log"
                syntax_result=1
            fi
            fi
            
            # Verify pure Verilog files with iverilog (only if separate from .sv files)
            if [[ -n "$v_files" && $syntax_result -eq 0 ]]; then
                if [[ "$has_iverilog" == "true" ]]; then
                    echo "=== Pure Verilog Verification with Icarus Verilog ===" >> "$syntax_log"
                    echo "Found $(echo "$v_files" | wc -l) Verilog files" >> "$syntax_log"
                    
                    # Filter out files that contain SystemVerilog features (like DPI-C)
                    local pure_v_files=""
                    for v_file in $v_files; do
                        if ! grep -q "import.*DPI\|interface\|class\|package\|bind\|assert\|assume\|cover" "$v_file" 2>/dev/null; then
                            pure_v_files="$pure_v_files $v_file"
                        else
                            echo "Skipping $v_file (contains SystemVerilog features)" >> "$syntax_log"
                        fi
                    done
                    
                    if [[ -n "$pure_v_files" ]]; then
                        # Create file list for iverilog
                        local file_list="$verification_dir/${config_name}_v_files.list"
                        echo "$pure_v_files" > "$file_list"
                        
                        echo "Running iverilog verification on pure Verilog files..." >> "$syntax_log"
                        iverilog -t null -f "$file_list" >> "$syntax_log" 2>&1 || {
                            local iv_result=$?
                            echo "iverilog completed with exit code: $iv_result" >> "$syntax_log"
                            # Only fail if there are actual syntax errors, not warnings
                            if [[ $iv_result -ne 0 ]]; then
                                syntax_result=$iv_result
                            fi
                        }
                    else
                        echo "No pure Verilog files found (all contain SystemVerilog features)" >> "$syntax_log"
                    fi
                else
                    echo "Verilog files found but iverilog not available" >> "$syntax_log"
                fi
            fi
            
            # Analyze results more carefully
            echo "===========================================" >> "$syntax_log"
            echo "Analysis Results:" >> "$syntax_log"
            
            if [[ $syntax_result -eq 0 ]]; then
                info "✓ Syntax verification passed for $config_name"
                verified_configs=$((verified_configs + 1))
                echo "VERIFICATION: PASSED" >> "$syntax_log"
            else
                # Check if errors are critical or just warnings
                local critical_errors=0
                if [[ -f "$syntax_log" ]]; then
                    # Count actual syntax errors, not warnings
                    critical_errors=$(grep -E "Error|error:|syntax error|Error-|fatal" "$syntax_log" | \
                                     grep -v -E "Warning|warning:|Note:|Info:|Wno-|TIMESCALEMOD" | \
                                     wc -l)
                fi
                
                if [[ $critical_errors -eq 0 ]]; then
                    info "✓ Syntax verification passed for $config_name (warnings only)"
                    verified_configs=$((verified_configs + 1))
                    echo "VERIFICATION: PASSED (warnings only)" >> "$syntax_log"
                else
                    error "✗ Syntax errors found in $config_name ($critical_errors critical errors)"
                    syntax_errors=$((syntax_errors + 1))
                    echo "VERIFICATION: FAILED ($critical_errors critical errors)" >> "$syntax_log"
                    
                    # Show first few errors for debugging
                    echo "First few critical errors:" >> "$syntax_log"
                    grep -E "Error|error:|syntax error|Error-|fatal" "$syntax_log" | \
                    grep -v -E "Warning|warning:|Note:|Info:|Wno-|TIMESCALEMOD" | head -5 >> "$syntax_log"
                fi
            fi
            
            echo "Verification completed: $(date)" >> "$syntax_log"
        done
    done
    
    # Generate verification summary
    cat > "$verification_dir/verification_summary.txt" << EOF
Rocket Chip RTL Verification Summary
Generated: $(date)

Total Configurations: $total_configs
Syntax Verified: $verified_configs
Syntax Errors: $syntax_errors
Success Rate: $(( total_configs > 0 ? verified_configs * 100 / total_configs : 0 ))%

Verification Tools Used:
- Verilator: $has_verilator (SystemVerilog)
- Icarus Verilog: $has_iverilog (Verilog)

Detailed Results:
$(find "$verification_dir" -name "*_syntax.log" -exec basename {} \; | sort)
EOF
    
    log "Verification completed: $verified_configs/$total_configs configurations passed syntax check"
    
    if [[ $syntax_errors -gt 0 ]]; then
        warning "Some configurations have syntax errors. Check logs in $verification_dir"
        return 1
    fi
    
    success "All configurations passed syntax verification"
    return 0
}

# Reproducibility metadata for benchmarking (docs/PROMPTS.md: commit, host, tool versions).
write_benchmark_manifest() {
    local mf="$DATASET_DIR/manifest.json"
    if ! command -v python3 >/dev/null 2>&1; then
        info "python3 not in PATH; skip manifest.json (see rocket_chip_summary.txt)"
        return 0
    fi
    export SCORE_MANIFEST_OUT="$mf"
    SCORE_ROCKET_COMMIT="$(git -C "$ROCKET_CHIP_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    export SCORE_ROCKET_COMMIT
    export SCORE_MANIFEST_MILL_CWD="$ROCKET_CHIP_DIR"
    python3 -c "
import datetime
import json
import os
import platform
import subprocess

_mill_cwd = os.environ.get('SCORE_MANIFEST_MILL_CWD', '')
_shell_cwd = _mill_cwd if os.path.isdir(_mill_cwd) else None

def first_line_shell(cmd: str, cwd=None) -> str:
    try:
        proc = subprocess.run(
            cmd,
            shell=True,
            check=False,
            capture_output=True,
            text=True,
            timeout=60,
            cwd=cwd,
        )
        text = (proc.stdout or '') + (proc.stderr or '')
        lines = [x for x in text.splitlines() if x.strip()]
        return lines[0] if lines else ''
    except (OSError, subprocess.SubprocessError):
        return ''

path = os.environ['SCORE_MANIFEST_OUT']
data = {
    'schema': 'score.benchmark_manifest.v1',
    'tool': 'rocket-chip',
    'upstream_commit': os.environ.get('SCORE_ROCKET_COMMIT', 'unknown'),
    'generated_utc': datetime.datetime.now(datetime.timezone.utc).strftime('%Y-%m-%dT%H:%M:%SZ'),
    'host': {
        'platform': platform.platform(),
        'machine': platform.machine(),
    },
    'tool_versions': {
        'java': first_line_shell('java -version 2>&1'),
        # Mill creates out/ in cwd; run from rocket-chip (same as real builds).
        'mill': first_line_shell('mill --version 2>&1', cwd=_shell_cwd),
        'verilator': first_line_shell('verilator --version 2>&1'),
        'firtool': first_line_shell('firtool --version 2>&1'),
    },
}
with open(path, 'w', encoding='utf-8') as fh:
    json.dump(data, fh, indent=2)
    fh.write('\n')
"
    unset SCORE_MANIFEST_OUT SCORE_ROCKET_COMMIT SCORE_MANIFEST_MILL_CWD
    info "Wrote benchmark manifest: $mf"
}

# Function to generate dataset summary
generate_dataset_summary() {
    log "Generating dataset summary..."
    
    local summary_file="$DATASET_DIR/rocket_chip_summary.txt"
    local total_configs=0
    local total_files=0
    local categories=()
    
    # Count configurations and files by category
    for category_dir in "$DATASET_DIR/rtl_designs"/*; do
        if [[ ! -d "$category_dir" ]]; then
            continue
        fi
        
        local category=$(basename "$category_dir")
        categories+=("$category")
        local config_count=$(find "$category_dir" -mindepth 1 -maxdepth 1 -type d | wc -l)
        local file_count=$(find "$category_dir" -name "*.v" -o -name "*.sv" -o -name "*.fir" | wc -l)
        
        total_configs=$((total_configs + config_count))
        total_files=$((total_files + file_count))
        
        info "$category: $config_count configurations, $file_count files"
    done
    
    # Generate comprehensive summary
    cat > "$summary_file" << EOF
Rocket Chip RTL Design Dataset Summary
Generated: $(date)
Generator: Rocket Chip Generator ($(cd "$ROCKET_CHIP_DIR" && git rev-parse --short HEAD 2>/dev/null || echo "unknown"))

OVERVIEW
========
Total Configurations: $total_configs
Total RTL Files: $total_files
Categories: ${#categories[@]}
Output Format: $OUTPUT_FORMAT

CATEGORIES
==========
EOF

    # Add detailed category breakdown
    for category in "${categories[@]}"; do
        local category_dir="$DATASET_DIR/rtl_designs/$category"
        local config_count=$(find "$category_dir" -mindepth 1 -maxdepth 1 -type d | wc -l)
        local file_count=$(find "$category_dir" -name "*.v" -o -name "*.sv" -o -name "*.fir" | wc -l)
        
        echo "$category: $config_count configurations, $file_count files" >> "$summary_file"
        
        # List configurations in this category
        for config_dir in "$category_dir"/*; do
            if [[ -d "$config_dir" ]]; then
                local config_name=$(basename "$config_dir")
                local config_files=$(find "$config_dir" -name "*.v" -o -name "*.sv" | wc -l)
                echo "  - $config_name ($config_files Verilog files)" >> "$summary_file"
            fi
        done
        echo "" >> "$summary_file"
    done
    
    # Add generation details
    cat >> "$summary_file" << EOF

CONFIGURATION DETAILS
=====================
EOF
    
    for config_name in "${!ROCKET_CONFIGS[@]}"; do
        local config_class="${ROCKET_CONFIGS[$config_name]}"
        local category="${CONFIG_CATEGORIES[$config_name]}"
        echo "$config_name -> $config_class (Category: $category)" >> "$summary_file"
    done
    
    cat >> "$summary_file" << EOF

DIRECTORY STRUCTURE
===================
datasets/rocket-chip/<commit>/
├── out/                   # Mill build output (tools/rocket-chip/out is a symlink here)
├── target/                # Optional SBT-style build dir (tools/rocket-chip/target -> here)
├── logs/                  # Per-config and top-level generation logs
├── rtl_designs/           # Generated RTL files organized by category
│   ├── single_core/       # Single-core processor configurations
│   ├── multi_core/        # Multi-core and parallel configurations
│   ├── fpga/              # FPGA-optimized configurations
│   ├── benchmark/         # Performance benchmark configurations
│   ├── edge_config/       # Edge computing configurations
│   └── special/           # Special purpose configurations
├── verification/          # Syntax verification logs
└── rocket_chip_summary.txt # This summary file

GENERATION OPTIONS
==================
Single Core: $ENABLE_SINGLE_CORE
Dual Core: $ENABLE_DUAL_CORE
Quad Core: $ENABLE_QUAD_CORE
Cluster: $ENABLE_CLUSTER
Tiny Core: $ENABLE_TINY
FPGA: $ENABLE_FPGA
Syntax Verification: $VERIFY_SYNTAX
Testbench Generation: $GENERATE_TESTBENCHES
Output Format: $OUTPUT_FORMAT
Parallel Jobs: $PARALLEL_JOBS

USAGE INSTRUCTIONS
==================
1. Each configuration directory contains:
   - Generated Verilog/SystemVerilog files (*.v, *.sv)
   - FIRRTL intermediate files (*.fir, *.anno.json)
   - Configuration info (config_info.txt)
   - Optional placeholder testbench (*_tb.sv) — does not instantiate TestHarness

2. For functional simulation use upstream Rocket Chip flows, e.g.:
   ./scripts/generate_rocket_chip.sh --riscv-isa-smoke
   or Mill emulator + riscv-tests (see rocket-chip README / build.sc).

3. For FPGA synthesis, use the main module files with your preferred tools.

4. Check verification/ directory for syntax verification results.
5. See manifest.json for commit id, host, and tool versions (SCORE benchmarking).
EOF
    
    write_benchmark_manifest
    success "Dataset summary generated: $summary_file"
    info "Total: $total_configs configurations, $total_files files"
}

# Function to run parallel generation
run_parallel_generation() {
    local configs=($(get_enabled_configs))
    local total_configs=${#configs[@]}
    
    if [[ $total_configs -eq 0 ]]; then
        warning "No configurations enabled for generation"
        return 1
    fi
    
    log "Starting parallel generation of $total_configs configurations with $PARALLEL_JOBS jobs..."
    
    # Function to be run in parallel
    generate_config_parallel() {
        local config_name="$1"
        generate_config "$config_name"
    }
    
    export -f generate_config_parallel
    export -f generate_config
    export -f organize_generated_files
    export -f generate_testbench
    export -f run_emulator_elf_smoke
    export -f cleanup_build_artifacts
    export -f log error success warning info debug
    export ROCKET_CONFIGS
    export CONFIG_CATEGORIES
    export DATASET_DIR
    export ROCKET_CHIP_DIR
    export ROCKET_MILL_OUT
    export ROCKET_SBT_TARGET_DIR
    export MILL_OUTPUT_DIR
    export MILL_CMD
    export GENERATE_TESTBENCHES
    export EMULATOR_ELF_SMOKE
    
    if command -v parallel >/dev/null 2>&1; then
        printf '%s\n' "${configs[@]}" | parallel -j "$PARALLEL_JOBS" generate_config_parallel
    elif [[ "$PARALLEL_JOBS" -gt 1 ]]; then
        info "GNU parallel not found; using bash background jobs (up to $PARALLEL_JOBS)."
        for config in "${configs[@]}"; do
            while [[ "$(jobs -r | wc -l)" -ge "$PARALLEL_JOBS" ]]; do
                wait -n 2>/dev/null || wait
            done
            { generate_config "$config" || true; } &
        done
        wait
    else
        for config in "${configs[@]}"; do
            generate_config "$config" || true
        done
    fi
}

# Main generation function
main() {
    log "===================================================================="
    log "Rocket Chip RTL Generation Started"
    log "Log file: $GENERATION_LOG"
    log "===================================================================="

    if [[ "$DRY_RUN" != "true" ]]; then
        cleanup_stale_project_root_mill_out
    fi

    # Check prerequisites
    if ! check_prerequisites; then
        error "Prerequisites check failed. Please run install_rocket_chip.sh first."
        exit 1
    fi

    if [[ "$DRY_RUN" != "true" ]]; then
        ensure_rocket_chip_build_layout
        log "Mill output directory: $ROCKET_MILL_OUT (tools/rocket-chip/out -> symlink)"
        log "Optional target/ directory: $ROCKET_SBT_TARGET_DIR (tools/rocket-chip/target -> symlink)"
        log "Generation logs directory: $LOG_DIR"
    fi
    
    # Display generation plan
    local enabled_configs=($(get_enabled_configs))
    log "Generation plan:"
    log "- Configurations to generate: ${#enabled_configs[@]}"
    log "- Output directory: $DATASET_DIR"
    log "- Parallel jobs: $PARALLEL_JOBS"
    log "- Output format: $OUTPUT_FORMAT"
    log "- Verify syntax: $VERIFY_SYNTAX"
    log "- Generate testbenches: $GENERATE_TESTBENCHES"
    log "- Emulator ELF smoke (mill): $EMULATOR_ELF_SMOKE"
    log "- RISC-V ISA smoke (one ELF): $RISCV_ISA_SMOKE"
    log "- Mill runnable-riscv-test smoke: $MILL_RISCV_TEST_SMOKE"
    
    if [[ "$DRY_RUN" == "true" ]]; then
        log "DRY RUN MODE - No files will be generated"
        for config in "${enabled_configs[@]}"; do
            info "[DRY RUN] Would generate: $config (${CONFIG_CATEGORIES[$config]})"
        done
        return 0
    fi
    
    # Skip cleanup to avoid regenerating existing RTL files
    if [[ -d "$DATASET_DIR/rtl_designs" ]]; then
        info "Previous RTL designs found. Keeping existing files for efficiency."
        info "Use 'rm -rf $DATASET_DIR/rtl_designs' to force regeneration if needed."
    fi
    
    # Handle verify-only mode
    if [[ "$VERIFY_ONLY" == "true" ]]; then
        log "Verify-only mode enabled"
        
        # Check if RTL files exist to verify
        if [[ ! -d "$DATASET_DIR/rtl_designs" ]] || [[ -z "$(find "$DATASET_DIR/rtl_designs" -name "*.sv" -o -name "*.v" 2>/dev/null)" ]]; then
            warning "No existing RTL files found for verification"
            log "Generating minimal RTL files for verification test..."
            
            # Generate a small set of configurations for verification
            local test_configs=("rocket_small" "rocket_tiny")
            for config in "${test_configs[@]}"; do
                if [[ -n "${ROCKET_CONFIGS[$config]:-}" ]]; then
                    log "Generating test RTL for $config..."
                    if generate_config "$config"; then
                        success "Generated test RTL for $config"
                        break  # Only need one successful generation for verification test
                    fi
                fi
            done
        fi
        
        # Run verification on existing files
        verify_rtl_syntax || warning "Some syntax verification failures occurred"
        if ! run_optional_post_generation_smokes; then
            error "Post-verification smoke step failed"
            exit 1
        fi
        write_benchmark_manifest
        cleanup_stale_project_root_mill_out
        exit 0
    fi
    
    # Generate RTL for all enabled configurations
    if [[ "$COMPILE_ONLY" == "true" ]]; then
        log "Compile-only mode enabled"
        run_parallel_generation
        write_benchmark_manifest
    else
        run_parallel_generation
        
        # Verify syntax if requested
        if [[ "$VERIFY_SYNTAX" == "true" ]]; then
            verify_rtl_syntax || warning "Some syntax verification failures occurred"
        fi
        
        # Generate dataset summary
        generate_dataset_summary

        if ! run_optional_post_generation_smokes; then
            error "Post-generation smoke step failed"
            exit 1
        fi
    fi

    cleanup_stale_project_root_mill_out

    log "===================================================================="
    success "Rocket Chip RTL generation completed!"
    log "Results saved to: $DATASET_DIR"
    log "===================================================================="
}

# Help function
show_help() {
    echo "Rocket Chip RTL Generation Script (SCORE; see docs/PROMPTS.md)"
    echo ""
    echo "Usage: from SCORE repo root: $0 [OPTIONS]"
    echo ""
    echo "This script generates various RISC-V processor configurations using"
    echo "the Rocket Chip Generator and organizes them into a structured dataset."
    echo ""
    echo "Configuration Options:"
    echo "  --single-core           Enable single-core configurations (default: true)"
    echo "  --no-single-core        Disable single-core configurations"
    echo "  --dual-core             Enable dual-core configurations (default: true)"
    echo "  --no-dual-core          Disable dual-core configurations"
    echo "  --quad-core             Enable quad-core configurations (default: true)"
    echo "  --no-quad-core          Disable quad-core configurations"
    echo "  --cluster               Enable cluster configurations (default: false)"
    echo "  --no-cluster            Disable cluster configurations"
    echo "  --tiny                  Enable tiny core configurations (default: true)"
    echo "  --no-tiny               Disable tiny core configurations"
    echo "  --fpga                  Enable FPGA configurations (default: true)"
    echo "  --no-fpga               Disable FPGA configurations"
    echo ""
    echo "Generation Options:"
    echo "  --verify                Enable RTL syntax verification (default: true)"
    echo "  --no-verify             Disable RTL syntax verification"
    echo "  --skip-verify           Same as --no-verify (CHECKLIST2 convention)"
    echo "  --verify-only           Only verify existing RTL files (no generation)"
    echo "  --emulator-elf-smoke    After each config, run mill emulator[...].elf (needs RISCV, clang, ninja)"
    echo "  --riscv-isa-smoke       After run: build emulator (ROCKET_ISA_SMOKE_CONFIG) + one riscv-tests ELF"
    echo "  --mill-riscv-test-smoke One Mill CI-style runnable-riscv-test[...,Config,_,_].run (very slow)"
    echo "  --testbench             Generate placeholder testbenches (default: true)"
    echo "  --no-testbench          Don't generate testbenches"
    echo ""
    echo "Environment (optional):"
    echo "  RISCV / RISCV_TESTS_ROOT   riscv-tools prefix; tests under .../share/riscv-tests/isa"
    echo "  ROCKET_ISA_SMOKE_CONFIG    full config class for --riscv-isa-smoke (default: ...DefaultConfig)"
    echo "  ROCKET_ISA_SMOKE_ELF       path to one riscv-tests ELF (overrides auto-detect)"
    echo "  ROCKET_ISA_MAX_CYCLES      emulator -m limit (default: 10000000)"
    echo "  ROCKET_MILL_RISCV_CONFIG   short name for --mill-riscv-test-smoke (default: TinyConfig)"
    echo "  ROCKET_MILL_OUT            Mill output root (default: datasets/rocket-chip/<commit>/out)"
    echo "  ROCKET_SBT_TARGET_DIR      SBT-style target/ root (default: .../target)"
    echo "  ROCKET_CHIP_LOG_DIR        Generation logs dir (default: .../logs)"
    echo "  SCORE_SKIP_ROOT_OUT_CLEANUP  if 1/true, do not auto-remove stray <repo>/out/ (Mill cwd artifact)"
    echo "  --compile-only          Only compile, skip verification and summary"
    echo "  --format FORMAT         Output format: verilog, firrtl, both (default: verilog)"
    echo ""
    echo "Setup Options:"
echo "  --setup                 Automatically download and install required tools"
echo ""
echo "Execution Options:"
echo "  -j, --jobs N            Number of parallel jobs (default: 4)"
echo "  --dry-run               Show what would be generated without doing it"
echo "  --verbose               Enable verbose output"
echo "  -h, --help              Show this help message"
    echo ""
    echo "Examples:"
echo "  $0 --setup              # First-time setup: install required tools"
echo "  $0                      # Generate all default configurations"
echo "  $0 --no-dual-core --no-quad-core  # Single-core, edge, and special configs only"
echo "  $0 --dry-run            # Preview generation plan"
echo "  $0 --jobs 8 --verbose   # Use 8 parallel jobs with verbose output"
echo "  $0 --compile-only       # Generate RTL without verification"
echo "  $0 --verify-only        # Only verify existing RTL files"
    echo ""
    echo "Configuration Categories:"
    echo "  single_core:    Basic single-core RISC-V processors"
    echo "  multi_core:     Multi-core and parallel configurations"
    echo "  fpga:           FPGA-optimized designs"
    echo "  benchmark:      Performance benchmark configurations"
    echo "  edge_config:    Edge computing optimized designs"
    echo "  special:        Special purpose configurations"
}

# Parse command line arguments
while [[ $# -gt 0 ]]; do
    case $1 in
        -h|--help)
            show_help
            exit 0
            ;;
        --single-core)
            ENABLE_SINGLE_CORE=true
            shift
            ;;
        --no-single-core)
            ENABLE_SINGLE_CORE=false
            shift
            ;;
        --dual-core)
            ENABLE_DUAL_CORE=true
            shift
            ;;
        --no-dual-core)
            ENABLE_DUAL_CORE=false
            shift
            ;;
        --quad-core)
            ENABLE_QUAD_CORE=true
            shift
            ;;
        --no-quad-core)
            ENABLE_QUAD_CORE=false
            shift
            ;;
        --cluster)
            ENABLE_CLUSTER=true
            shift
            ;;
        --no-cluster)
            ENABLE_CLUSTER=false
            shift
            ;;
        --tiny)
            ENABLE_TINY=true
            shift
            ;;
        --no-tiny)
            ENABLE_TINY=false
            shift
            ;;
        --fpga)
            ENABLE_FPGA=true
            shift
            ;;
        --no-fpga)
            ENABLE_FPGA=false
            shift
            ;;
        --verify)
            VERIFY_SYNTAX=true
            shift
            ;;
        --no-verify|--skip-verify)
            VERIFY_SYNTAX=false
            shift
            ;;
        --emulator-elf-smoke)
            EMULATOR_ELF_SMOKE=true
            shift
            ;;
        --riscv-isa-smoke)
            RISCV_ISA_SMOKE=true
            shift
            ;;
        --mill-riscv-test-smoke)
            MILL_RISCV_TEST_SMOKE=true
            shift
            ;;
        --verify-only)
            VERIFY_ONLY=true
            VERIFY_SYNTAX=true
            shift
            ;;
        --testbench)
            GENERATE_TESTBENCHES=true
            shift
            ;;
        --no-testbench)
            GENERATE_TESTBENCHES=false
            shift
            ;;
        --compile-only)
            COMPILE_ONLY=true
            shift
            ;;
        --format)
            OUTPUT_FORMAT="$2"
            if [[ "$OUTPUT_FORMAT" != "verilog" && "$OUTPUT_FORMAT" != "firrtl" && "$OUTPUT_FORMAT" != "both" ]]; then
                error "Invalid format: $OUTPUT_FORMAT. Use: verilog, firrtl, or both"
                exit 1
            fi
            shift 2
            ;;
        -j|--jobs)
            PARALLEL_JOBS="$2"
            if ! [[ "$PARALLEL_JOBS" =~ ^[0-9]+$ ]] || [[ "$PARALLEL_JOBS" -lt 1 ]]; then
                error "Invalid job count: $PARALLEL_JOBS. Must be a positive integer."
                exit 1
            fi
            if [[ "$PARALLEL_JOBS" -gt "$MAX_PARALLEL_JOBS" ]]; then
                warning "Capping parallel jobs from $PARALLEL_JOBS to $MAX_PARALLEL_JOBS"
                PARALLEL_JOBS="$MAX_PARALLEL_JOBS"
            fi
            shift 2
            ;;
        --dry-run)
            DRY_RUN=true
            shift
            ;;
        --verbose)
            VERBOSE=true
            shift
            ;;
        --setup)
            log "Running dependency setup..."
            if setup_dependencies; then
                success "Setup completed successfully!"
                log "You can now run the script again to generate RTL"
                exit 0
            else
                error "Setup failed"
                exit 1
            fi
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
