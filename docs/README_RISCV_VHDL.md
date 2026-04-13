# RISCV VHDL RTL Organization Documentation

This document provides comprehensive information about the RISCV VHDL RTL organization script and the structure of VHDL design datasets.

## Table of Contents

- [Overview](#overview)
- [Script Usage](#script-usage)
- [Available Designs](#available-designs)
- [Output Organization](#output-organization)
- [Dataset Structure](#dataset-structure)
- [Usage Examples](#usage-examples)
- [Performance Expectations](#performance-expectations)
- [Troubleshooting](#troubleshooting)

## Overview

The `generate_riscv_vhdl.sh` script is a comprehensive tool for organizing and copying VHDL designs from the RISCV VHDL repository. This repository contains a complete System-on-Chip implementation based on the RISC-V architecture, featuring the synthesizable River CPU and associated peripherals.

### Key Features

- **River CPU**: 64-bit RISC-V processor implementation in VHDL with 5-stage pipeline
- **Complete SoC**: Including UART, Timers, Ethernet, GPIO, Debug Support Unit
- **Multiple Formats**: VHDL, SystemVerilog, and SystemC implementations available
- **Synthesizable Design**: Ready for FPGA implementation and ASIC synthesis
- **Advanced Debug**: Ethernet, UART, and JTAG debugging capabilities
- **Parallel Organization**: Multi-threaded file organization for faster processing
- **Organized Output**: All files systematically organized in `datasets/riscv_vhdl/`

### Important Note: Static VHDL Source Files

Unlike OpenPiton (which generates simulation models), RISCV VHDL provides **static VHDL source files** that users compile themselves using their preferred EDA tools. The organization script copies these source files and creates `filelist.f` files for easy integration with synthesis and simulation tools.

**Key Differences:**
- **OpenPiton**: Generates compiled simulation models (executables) in `/simulation_models/`
- **RISCV VHDL**: Provides static VHDL source files organized in `/rtl_designs/` with ready-to-use file lists

**Usage for Simulation:**
```bash
# Using ModelSim/QuestaSim with organized file lists:
vcom -f datasets/riscv_vhdl/rtl_designs/river_cpu/river_minimal/filelist.f

# Using GHDL:
ghdl -a --std=08 -f datasets/riscv_vhdl/rtl_designs/river_cpu/river_minimal/filelist.f

# Using Vivado:
vivado -source datasets/riscv_vhdl/rtl_designs/soc_designs/soc_standard/filelist.f
```

### Architecture Overview

The RISCV VHDL repository implements a complete 64-bit RISC-V processor system:

- **River CPU Core**: 5-stage pipeline with branch prediction, caches, and FPU
- **Cache Subsystem**: L1 instruction/data caches and optional L2 cache
- **Debug Support**: JTAG interface, trace buffer, and debug support unit
- **Peripherals**: UART, GPIO, timers, interrupt controller, SPI, Ethernet
- **Memory System**: DDR/SRAM controllers and memory protection unit
- **Interconnect**: AMBA AXI4 bus fabric for system integration

## Script Usage

### Basic Usage

```bash
# Organize all available VHDL designs
./scripts/generate_riscv_vhdl.sh

# Use parallel processing for faster execution
./scripts/generate_riscv_vhdl.sh --parallel=4

# Copy only VHDL designs (exclude other formats)
./scripts/generate_riscv_vhdl.sh --vhdl-only

# Include SystemVerilog designs
./scripts/generate_riscv_vhdl.sh --include-sv

# Check prerequisites only
./scripts/generate_riscv_vhdl.sh --check
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show comprehensive help message |
| `--check` | Check prerequisites and source availability |
| `--debug` | Enable debug logging with detailed progress |
| `--vhdl-only` | Copy only VHDL designs (default includes all RTL) |
| `--include-sv` | Include SystemVerilog implementations |
| `--include-sc` | Include SystemC models |
| `--parallel=N` | Run N parallel copy jobs (default: 1, max: 8) |
| `--sequential` | Force sequential execution |
| `--with-examples` | Include example designs and applications |
| `--with-docs` | Include documentation and specifications |
| `--minimal` | Copy only core processor designs |

### Parallel Execution Features

The script supports parallel file organization for significantly faster processing:

- **Default Execution**: Sequential for compatibility and reliability
- **Parallel Jobs**: Up to 8 concurrent copy operations
- **Progress Tracking**: Real-time status updates for each category
- **Resource Management**: Automatic job limiting to prevent system overload

**Recommended Usage:**
```bash
# Conservative parallel processing (recommended)
./scripts/generate_riscv_vhdl.sh --parallel=2

# Maximum performance (requires sufficient system resources)
./scripts/generate_riscv_vhdl.sh --parallel=4 --include-sv --with-examples

# Complete organization with all extras
./scripts/generate_riscv_vhdl.sh --parallel=2 --include-sv --include-sc --with-examples --with-docs
```

## Available Designs

The script organizes designs into 5 main categories with 23+ distinct RTL designs:

### 1. River CPU Core Designs (6 configurations)

| Design Name | Description | Features |
|-------------|-------------|----------|
| `river_minimal` | Minimal River RISC-V processor | Basic 64-bit RISC-V core |
| `river_1core` | Single-core River RISC-V processor | Core + caches + basic peripherals |
| `river_fpu` | River RISC-V with FPU support | Enhanced floating-point capabilities |
| `river_debug` | River RISC-V with debug features | JTAG, trace buffer, debug support |
| `river_l2cache` | River RISC-V with L2 cache | Advanced cache hierarchy |
| `river_complete` | Complete River RISC-V system | All features enabled |

**Key Features:**
- 64-bit RISC-V ISA implementation
- 5-stage pipeline (Fetch, Decode, Execute, Memory, Writeback)
- Branch predictor and return address stack
- L1 instruction and data caches
- Memory Protection Unit (MPU)
- IEEE 754 compliant floating-point unit
- Debug support with JTAG interface

### 2. System-on-Chip Designs (4 complete systems)

| Design Name | Description | Components |
|-------------|-------------|------------|
| `soc_minimal` | Minimal SoC with River CPU | CPU + basic interconnect |
| `soc_standard` | Standard SoC with peripherals | CPU + UART + GPIO + Timers |
| `soc_ethernet` | SoC with Ethernet support | Standard SoC + Ethernet MAC |
| `soc_debug` | SoC with debug capabilities | Full SoC + debug infrastructure |

**Components Included:**
- Complete River CPU subsystem
- AMBA AXI4 interconnect fabric
- System peripherals (UART, GPIO, timers)
- Memory controllers (DDR, SRAM, ROM)
- Interrupt controller
- Ethernet MAC with EDCL (optional)

### 3. Peripheral Controllers (6 types)

| Peripheral | Description | Interface | VHDL Source File |
|------------|-------------|-----------|------------------|
| `uart`     | UART Controller | AXI4 slave interface | `axi4_uart.vhd` |
| `gpio`     | GPIO Controller | 32-bit bidirectional I/O | `axi4_gpio.vhd` |
| `gptimers` | General Purpose Timers | Multiple timer channels | `axi4_gptimers.vhd` |
| `irqctrl`  | Interrupt Controller | Priority-based interrupts | `axi4_irqctrl.vhd` |
| `spi`      | SPI Flash Controller | SPI master interface | `axi4_flashspi.vhd` |
| `ethernet` | Ethernet MAC Controller | 10/100/1000 Mbps Ethernet | `grethaxi.vhd` |

> **Note:**
> The organization script copies each peripheral's VHDL file by its exact name as found in the source repository. For example, the UART controller is copied from `tools/riscv_vhdl/vhdl/rtl/misclib/axi4_uart.vhd`.
> 
> Type definition files (such as `types_misc.vhd`, `types_eth.vhd`, `types_amba4.vhd`, and `types_common.vhd`) are also included as needed for each peripheral.

### 4. Memory Controllers (3 types)

| Controller | Description | Technology |
|------------|-------------|------------|
| `ddr_controller` | DDR Memory Controller | DDR2/DDR3 support |
| `sram_controller` | SRAM Controller | Synchronous SRAM |
| `rom_controller` | ROM Controller | Boot ROM interface |

### 5. Arithmetic Units (4 types)

| Unit | Description | Performance |
|------|-------------|-------------|
| `integer_mul` | Integer Multiplier | 32x32 and 64x64 bit |
| `integer_div` | Integer Divider | Radix-4 division |
| `shifter` | Barrel Shifter | Single-cycle shifts |
| `fpu_double` | Double Precision FPU | IEEE 754 compliant |

## Output Organization

All organized files are placed in the `datasets/riscv_vhdl/` directory with the following structure:

```
datasets/riscv_vhdl/
├── logs/                           # Organization logs and session information
│   ├── main.log                   # Master log file
│   └── session_YYYYMMDD_HHMMSS.log # Session-specific logs
├── rtl_designs/                   # Organized RTL designs (static VHDL source files)
│   ├── river_cpu/                # River CPU core designs
│   │   ├── river_minimal/
│   │   │   ├── *.vhd              # VHDL source files
│   │   │   ├── config.yaml        # Design metadata
│   │   │   ├── filelist.f         # Complete file list for EDA tools
│   │   │   ├── core/              # CPU core modules
│   │   │   ├── cache/             # Cache subsystem
│   │   │   └── arith/             # Arithmetic units
│   │   ├── river_1core/           # Standard single-core
│   │   ├── river_fpu/             # With FPU support
│   │   ├── river_debug/           # With debug features
│   │   ├── river_l2cache/         # With L2 cache
│   │   └── river_complete/        # Complete system
│   ├── soc_designs/               # Complete SoC designs
│   │   ├── soc_minimal/
│   │   │   ├── cpu/               # River CPU subsystem
│   │   │   ├── peripherals/       # System peripherals
│   │   │   ├── memory/            # Memory controllers
│   │   │   ├── interconnect/      # Bus fabric
│   │   │   └── [ethernet/]        # Optional Ethernet
│   │   ├── soc_standard/
│   │   ├── soc_ethernet/
│   │   └── soc_debug/
│   ├── peripherals/               # Individual peripheral controllers
│   │   ├── uart/
│   │   ├── gpio/
│   │   ├── gptimers/
│   │   ├── irqctrl/
│   │   ├── spi/
│   │   └── ethernet/
│   ├── memory_controllers/        # Memory controller designs
│   │   ├── ddr_controller/
│   │   ├── sram_controller/
│   │   └── rom_controller/
│   └── arithmetic/                # Arithmetic unit designs
│       ├── integer_mul/
│       ├── integer_div/
│       ├── shifter/
│       └── fpu_double/
├── systemverilog/                 # SystemVerilog implementations (optional)
├── systemc/                       # SystemC models (optional)
├── examples/                      # Example designs (optional)
└── documentation/                 # Design documentation (optional)
```

> **Note:** Unlike OpenPiton, RISCV VHDL does not generate compiled simulation models. Instead, it provides static VHDL source files that users compile themselves using their preferred EDA tools. The `filelist.f` files in each design directory contain the complete list of VHDL files needed for synthesis and simulation.

## Dataset Structure

### Design Directory Contents

Each design directory contains:

- **VHDL Files**: `*.vhd` - Complete synthesizable VHDL source code
- **Design Metadata**: `config.yaml` - Design information and capabilities
- **File List**: `filelist.f` - Complete list of VHDL files with absolute paths
- **Organized Subdirectories**: Logical organization by functional units

### Design Metadata Format

Each `config.yaml` contains detailed design information:
```yaml
design_name: river_1core
design_category: river_cpu
description: "Single-core River RISC-V processor"
generation_date: Mon Jun 23 23:47:27 CST 2025
source_repository: riscv_vhdl
vhdl_files: 42
total_lines: 15847
synthesis_ready: true
fpu_enabled: true
debug_enabled: false
cache_enabled: true
target_frequency: "60MHz"
architecture: "RISC-V"
```

### File Organization Features

- **Hierarchical Structure**: Logical organization by design category and function
- **Complete Dependencies**: All required files and dependencies included
- **Synthesis Ready**: Files organized for immediate synthesis with major EDA tools
- **Tool Integration**: File lists compatible with Vivado, Quartus, ModelSim, etc.
- **Design Variants**: Different configurations with clear capability indicators

## Usage Examples

### Basic Organization

```bash
# Check what's available for organization
./scripts/generate_riscv_vhdl.sh --check

# Organize with basic settings
./scripts/generate_riscv_vhdl.sh

# Monitor organization progress
tail -f datasets/riscv_vhdl/logs/session_*.log
```

### Advanced Organization

```bash
# Fast parallel organization with all extras
./scripts/generate_riscv_vhdl.sh --parallel=4 --include-sv --with-examples --with-docs

# Minimal core-only organization
./scripts/generate_riscv_vhdl.sh --minimal --vhdl-only

# Debug mode with detailed logging
./scripts/generate_riscv_vhdl.sh --parallel=2 --debug
```

### Working with Organized Designs

```bash
# List all organized designs
find datasets/riscv_vhdl/rtl_designs -name "config.yaml" -exec dirname {} \;

# Check design capabilities
grep -r "fpu_enabled\|debug_enabled\|cache_enabled" datasets/riscv_vhdl/rtl_designs/*/config.yaml

# Count VHDL files per design
for design in datasets/riscv_vhdl/rtl_designs/*/*/; do
  echo "$(basename $(dirname $design))/$(basename $design): $(find $design -name "*.vhd" | wc -l) VHDL files"
done
```

### Synthesis and Simulation

```bash
# Use with Vivado
vivado -source datasets/riscv_vhdl/rtl_designs/soc_designs/soc_standard/filelist.f

# Use with ModelSim/QuestaSim
vcom -f datasets/riscv_vhdl/rtl_designs/river_cpu/river_fpu/filelist.f

# Use with GHDL
ghdl -a --std=08 -f datasets/riscv_vhdl/rtl_designs/river_cpu/river_fpu/filelist.f

# Quartus project creation
# Copy files from datasets/riscv_vhdl/rtl_designs/soc_designs/soc_minimal/
```

## Performance Expectations

### Organization Performance

| Configuration | Execution Time | Resource Usage | Success Rate |
|---------------|---------------|----------------|--------------|
| Sequential | 45-90 seconds | 1 core, <1GB RAM | ~100% |
| Parallel (2 jobs) | 25-45 seconds | 2 cores, 1-2GB RAM | ~100% |
| Parallel (4 jobs) | 15-30 seconds | 4 cores, 2-3GB RAM | ~100% |
| With all extras | +30-60 seconds | Additional storage | ~100% |

### Storage Requirements

| Component | Storage Size | File Count | Description |
|-----------|-------------|------------|-------------|
| Core VHDL designs | ~80-120 MB | ~500 files | River CPU and basic designs |
| Complete RTL | ~200-300 MB | ~800 files | All VHDL designs organized |
| With SystemVerilog | +150-200 MB | +360 files | Additional SV implementations |
| With Examples | +50-100 MB | ~200 files | Example applications |
| With Documentation | +20-50 MB | ~100 files | Specifications and guides |
| **Complete dataset** | **~500-700 MB** | **~1500 files** | Everything included |

### System Requirements

| Parallel Jobs | CPU Cores | RAM Required | Storage I/O | Network |
|---------------|-----------|--------------|-------------|---------|
| 1 (Sequential) | 1 core | 512MB | Low | None |
| 2 jobs | 2 cores | 1GB | Medium | None |
| 4 jobs | 4 cores | 2GB | High | None |
| 8 jobs (max) | 8+ cores | 3GB+ | Very High | None |

## Troubleshooting

### Common Issues

1. **Source directory not found**:
   ```bash
   # Verify RISCV VHDL repository exists
   ls tools/riscv_vhdl/
   
   # Check directory structure
   ls tools/riscv_vhdl/vhdl/rtl/
   ```

2. **Permission errors**:
   ```bash
   # Fix script permissions
   chmod +x scripts/generate_riscv_vhdl.sh
   
   # Fix dataset directory permissions
   chmod -R 755 datasets/riscv_vhdl/
   ```

3. **Incomplete organization**:
   ```bash
   # Check organization log for errors
   tail -50 datasets/riscv_vhdl/logs/session_*.log
   
   # Verify source files exist
   find tools/riscv_vhdl/vhdl -name "*.vhd" | head -10
   
   # Re-run with debug mode
   ./scripts/generate_riscv_vhdl.sh --debug
   ```

4. **Parallel execution issues**:
   ```bash
   # Force sequential execution
   ./scripts/generate_riscv_vhdl.sh --sequential
   
   # Reduce parallel jobs
   ./scripts/generate_riscv_vhdl.sh --parallel=2
   ```

### Debugging Organization Issues

1. **Check source availability**:
   ```bash
   # Comprehensive source check
   ./scripts/generate_riscv_vhdl.sh --check
   
   # Manual verification of key directories
   ls -la tools/riscv_vhdl/vhdl/rtl/riverlib/
   ls -la tools/riscv_vhdl/vhdl/rtl/misclib/
   ```

2. **Monitor organization process**:
   ```bash
   # Run with detailed logging
   ./scripts/generate_riscv_vhdl.sh --debug --parallel=1
   
   # Watch progress in real-time
   tail -f datasets/riscv_vhdl/logs/session_*.log
   ```

3. **Clean and retry**:
   ```bash
   # Clean previous organization
   rm -rf datasets/riscv_vhdl/rtl_designs/*
   
   # Retry with minimal configuration
   ./scripts/generate_riscv_vhdl.sh --minimal
   
   # Then try full organization
   ./scripts/generate_riscv_vhdl.sh --parallel=2
   ```

### Performance Optimization

1. **For faster organization**:
   ```bash
   # Use SSD storage for best performance
   # Ensure sufficient RAM (2GB+ recommended)
   ./scripts/generate_riscv_vhdl.sh --parallel=4 --vhdl-only
   ```

2. **For resource-constrained systems**:
   ```bash
   # Use minimal mode and sequential execution
   ./scripts/generate_riscv_vhdl.sh --minimal --sequential
   ```

3. **For development workflow**:
   ```bash
   # Quick core-only organization for testing
   ./scripts/generate_riscv_vhdl.sh --minimal --vhdl-only
   
   # Complete organization for production
   ./scripts/generate_riscv_vhdl.sh --parallel=2 --with-docs
   ```

---

**For additional help**: 
- Check the script's built-in help: `./scripts/generate_riscv_vhdl.sh --help`
- Examine session logs: `datasets/riscv_vhdl/logs/`
- Verify source availability: `./scripts/generate_riscv_vhdl.sh --check`
- Report issues with debug output: `./scripts/generate_riscv_vhdl.sh --debug` 