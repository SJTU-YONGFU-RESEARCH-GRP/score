#!/bin/bash
# IOb-SoC environment: source this file before working in tools/iob-soc (like scripts/rocket_chip_env.sh).

_SCRIPT_LOG_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$_SCRIPT_LOG_DIR/common_logging.sh"
init_script_logging iob_soc_env

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
