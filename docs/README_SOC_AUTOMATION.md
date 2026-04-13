# SoC Automation RTL Designs Documentation

This document provides comprehensive information about the SoC Automation generation script and the organization of generated System-on-Chip (SoC) configurations for benchmarking and performance evaluation.

## Table of Contents

- [Overview](#overview)
- [Script Usage](#script-usage)
- [Configuration Types](#configuration-types)
- [Repository Structure](#repository-structure)
- [RTL Design Structure](#rtl-design-structure)
- [Usage Examples](#usage-examples)
- [Troubleshooting](#troubleshooting)
- [Understanding the Generated Files](#understanding-the-generated-files)

## Overview

The `generate_soc_automation.sh` script is a comprehensive benchmarking tool that generates multiple SoC configurations using the SoC Automation framework. It systematically creates different processor and peripheral combinations to provide diverse RTL designs for hardware design research, performance evaluation, and comparative analysis.

### Key Features

- **Multiple Processor Types**: ARM Cortex-M0, ARM Cortex-M3, and RISC-V N5 cores
- **Scalable Multi-Core Architectures**: 1x1, 2x1, 1x2, and 2x2 tile configurations
- **Peripheral Complexity Levels**: Basic, Advanced, and Full peripheral sets
- **Multiple Simulator Support**: Icarus Verilog, VCS, ModelSim/Questa
- **Automated Verification**: RTL syntax checking and simulation validation
- **Comprehensive Logging**: Detailed build and verification logs
- **36 Total Configurations**: Systematic coverage of design space

## Script Usage

### Basic Usage

```bash
# Generate all SoC configurations (36 total)
./scripts/generate_soc_automation.sh

# Check prerequisites and environment
./scripts/generate_soc_automation.sh --check

# Verify existing RTL files without regeneration
./scripts/generate_soc_automation.sh --verify

# Use specific simulator
./scripts/generate_soc_automation.sh --simulator=vcs

# Generate subset of configurations
./scripts/generate_soc_automation.sh --disable-cm0 --disable-n5
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show comprehensive help message |
| `--check` | Check prerequisites only (no generation) |
| `--verify` | Verify existing RTL files only (no generation) |
| `--simulator=SIM` | Choose simulator: iverilog, vcs, msm (default: iverilog) |
| `--list-simulators` | List all supported simulators |
| `--disable-cm0` | Disable ARM Cortex-M0 configurations |
| `--disable-cm3` | Disable ARM Cortex-M3 configurations |
| `--disable-n5` | Disable RISC-V N5 configurations |

### Supported Simulators

| Simulator | Name | Environment Variable | Commands | Notes |
|-----------|------|---------------------|----------|-------|
| **iverilog** | Icarus Verilog | (none required) | `iverilog` | **Default, Open Source** |
| **vcs** | Synopsys VCS | `VCS_HOME` | `vcs` | Commercial, High Performance |
| **msm** | ModelSim/Questa | `MODELSIM_HOME` | `vlog`, `vsim` | Commercial, Industry Standard |

### Prerequisites

- **Node.js and npm**: Required for SoC Automation tool
- **Simulator**: One of the supported simulators (iverilog recommended)
- **Build Tools**: GCC compiler and standard build tools (make, etc.)
- **Operating System**: Linux (Ubuntu/CentOS/Fedora), macOS, or Windows WSL

## Configuration Types

### Processor Types

The script generates configurations for three different processor types:

#### 1. ARM Cortex-M0 (CM0)
- **Master ID**: 0
- **Module**: CORTEXM0DS
- **Description**: Ultra-low power 32-bit RISC processor
- **Features**: 
  - ARMv6-M architecture
  - Minimal power consumption
  - Compact code density
  - Simple 3-stage pipeline

#### 2. ARM Cortex-M3 (CM3)
- **Master ID**: 1  
- **Module**: CM3_SYS
- **Description**: High-performance 32-bit RISC processor
- **Features**:
  - ARMv7-M architecture
  - Hardware divide instruction
  - Enhanced debug features
  - Nested Vectored Interrupt Controller (NVIC)

#### 3. RISC-V N5 (N5)
- **Master ID**: 2
- **Module**: NfiVe32
- **Description**: Custom RISC-V 32-bit processor
- **Features**:
  - Open ISA architecture
  - RV32I base instruction set
  - Configurable extensions
  - Open source implementation

### Tile Configurations

Each processor type is generated with four different tile configurations:

| Configuration | Layout | Description | Cores |
|---------------|--------|-------------|--------|
| **1x1** | Single | Single core system | 1 |
| **2x1** | Horizontal | Dual-core horizontal layout | 2 |
| **1x2** | Vertical | Dual-core vertical layout | 2 |
| **2x2** | Array | Quad-core 2x2 array | 4 |

### Peripheral Sets

Three levels of peripheral complexity are supported:

#### Basic Peripherals
- **GPIO Controller**: General Purpose Input/Output interface
- **Timer Controller**: Basic timing and counting functionality  
- **UART Controller**: Serial communication interface
- **Program SRAM**: On-chip memory for program storage

#### Advanced Peripherals
- **All Basic peripherals** +
- **SPI Master**: Serial Peripheral Interface controller
- **I2C Master**: Inter-Integrated Circuit bus controller
- **PWM Controller**: Pulse Width Modulation for analog control
- **Program SRAM**: Enhanced memory configuration

#### Full Peripherals
- **All Advanced peripherals** +
- **QSPI Flash Controller**: Quad-SPI flash memory interface
- **Debug Register**: Hardware debugging and monitoring interface

### Configuration Matrix

The script generates a total of **36 configurations** using the following matrix:

| Processor | Tile Configs | Peripheral Sets | Total |
|-----------|--------------|----------------|--------|
| CM0 | 4 (1x1, 2x1, 1x2, 2x2) | 3 (basic, advanced, full) | 12 |
| CM3 | 4 (1x1, 2x1, 1x2, 2x2) | 3 (basic, advanced, full) | 12 |
| N5 | 4 (1x1, 2x1, 1x2, 2x2) | 3 (basic, advanced, full) | 12 |
| **Total** | **12** | **3** | **36** |

## Repository Structure

### RTL Design Organization

This repository contains the generated RTL designs and the generation script:

```
soc_automation/
└── rtl_designs/                   # Generated RTL configurations
    ├── cm0/                       # ARM Cortex-M0 configurations
    │   ├── cm0_1x1_basic/         # Single core with basic peripherals
    │   ├── cm0_1x1_advanced/      # Single core with advanced peripherals
    │   ├── cm0_1x1_full/          # Single core with full peripherals
    │   ├── cm0_2x1_basic/         # Dual-core horizontal layout
    │   ├── cm0_1x2_basic/         # Dual-core vertical layout
    │   ├── cm0_2x2_basic/         # Quad-core array layout
    │   └── ...                    # All 12 CM0 combinations
    ├── cm3/                       # ARM Cortex-M3 configurations
    │   ├── cm3_1x1_basic/         # Single core configurations
    │   ├── cm3_2x1_advanced/      # Multi-core configurations
    │   └── ...                    # All 12 CM3 combinations
    └── n5/                        # RISC-V N5 configurations
        ├── n5_1x1_basic/          # Single core configurations
        ├── n5_2x2_full/           # Quad-core full peripheral set
        └── ...                    # All 12 N5 combinations
```

### Individual Configuration Structure

Each configuration directory contains:

```
cm0_1x1_basic/                     # Example configuration
├── soc.json                       # Main SoC configuration
├── apb.json                       # APB subsystem configuration
├── generated/                     # Generated RTL files
│   ├── openstriVe_soc.v          # Top-level SoC Verilog
│   ├── openstriVe_soc_APB_SYS.v  # APB subsystem
│   └── *.v                       # Additional generated modules
└── testbench/                     # Generated testbenches
    ├── tb_openstriVe_soc.v       # Top-level testbench
    └── main.hex                  # Test program hex file
```

## RTL Design Structure

### Configuration Files

#### soc.json
Main SoC configuration file containing:
- **Design name and metadata**
- **Processor master configuration**
- **Memory map and address space**
- **AHB bus configuration** 
- **Peripheral slave definitions**
- **Testbench parameters**

#### apb.json  
APB subsystem configuration containing:
- **APB slave definitions**
- **Address decoding configuration**
- **Peripheral interface parameters**

### Generated RTL Files

#### openstriVe_soc.v
Top-level SoC module including:
- Processor core instantiation
- Bus infrastructure (AHB/APB)
- Memory controllers
- Peripheral interfaces
- Clock and reset distribution

#### Peripheral Modules
Individual IP blocks:
- GPIO controller (openstriVe_soc_GPIO)
- UART controller (openstriVe_soc_UART)
- Timer controller (openstriVe_soc_TIMER)
- SPI/I2C controllers (advanced/full only)
- Memory controllers (SRAM/Flash)

## Usage Examples

### Complete Generation

```bash
# Generate all 36 configurations with default settings
./scripts/generate_soc_automation.sh
```

### Selective Generation

```bash
# Generate only ARM Cortex-M3 configurations (12 total)
./scripts/generate_soc_automation.sh --disable-cm0 --disable-n5

# Generate only single-core configurations (9 total)  
./scripts/generate_soc_automation.sh --disable-2x1 --disable-1x2 --disable-2x2
```

### Different Simulators

```bash
# Use Synopsys VCS
export VCS_HOME=/path/to/vcs
./scripts/generate_soc_automation.sh --simulator=vcs

# Use ModelSim
export MODELSIM_HOME=/path/to/modelsim
./scripts/generate_soc_automation.sh --simulator=msm
```

### Verification Only

```bash
# Verify existing RTL without regeneration
./scripts/generate_soc_automation.sh --verify

# Check prerequisites
./scripts/generate_soc_automation.sh --check
```

### Custom Workflow

```bash
# 1. Check environment
./scripts/generate_soc_automation.sh --check

# 2. Generate specific configurations
./scripts/generate_soc_automation.sh --disable-cm0

# 3. Verify generated RTL
./scripts/generate_soc_automation.sh --verify
```

## Troubleshooting

### Known Issues and Workarounds

#### Missing Files in submodule_soc_automation Masters
The submodule_soc_automation repository contains several missing files in the masters directory that are required for proper compilation of different processor configurations. The following dummy files have been temporarily added to enable compilation:

**Missing CM0 Processor Module:**
- **File**: `tools/SoC_Automation/masters/CM0/cm0.v`
- **Module**: `CORTEXM0DS`
- **Issue**: ARM Cortex-M0 processor implementation missing from the original masters directory
- **Solution**: Added dummy implementation with complete AHB interface and required control signals
- **Impact**: All CM0 configurations (cm0_*) now compile successfully

**Missing CM3 Processor Modules:**
- **File**: `tools/SoC_Automation/masters/CM3/cmsdk_ahb_master_mux.v`
- **Module**: `cmsdk_ahb_master_mux`
- **Issue**: AHB master multiplexer required for multi-core CM3 configurations
- **Solution**: Added dummy implementation with dual-master AHB interface

- **File**: `tools/SoC_Automation/masters/CM3/ahb_master_mux.v`
- **Module**: `cmsdk_ahb_master_mux` (alternative naming)
- **Issue**: Alternative AHB master multiplexer implementation
- **Solution**: Added dummy implementation with same interface

- **File**: `tools/SoC_Automation/masters/CM3/cortexm3ds_logic.v`
- **Module**: `cortexm3ds_logic`
- **Issue**: CM3 logic components missing from the original masters directory
- **Solution**: Added minimal dummy implementation

- **File**: `tools/SoC_Automation/masters/CM3/CORTEXM3INTEGRATIONDS.v`
- **Module**: `CORTEXM3INTEGRATIONDS`
- **Issue**: CM3 integration wrapper missing from the original masters directory
- **Solution**: Added minimal dummy implementation

**Complete Missing Files List:**
1. `cm0.v` - ARM Cortex-M0 processor core
2. `ahb_master_mux.v` - AHB master multiplexer (original)
3. `cmsdk_ahb_master_mux.v` - CMSDK AHB master multiplexer
4. `cortexm3ds_logic.v` - CM3 logic components
5. `CORTEXM3INTEGRATIONDS.v` - CM3 integration wrapper

**Status Summary:**
- **Before fix**: Multiple processor configurations failed due to missing core modules
- **After fix**: All processor configurations (CM0, CM3, N5) compile and pass basic verification
- **Implementation**: Dummy modules provide basic functionality for compilation testing
- **Limitations**: Current implementations are minimal and may require enhancement for full feature support

**Future Actions:**
- Monitor upstream submodule_soc_automation for official implementations
- Replace all dummy files with official versions when available
- Report complete list of missing files to the SoC Automation project maintainers
- Consider contributing proper implementations back to the upstream project

### Common Issues

#### 1. Node.js Not Found
```bash
# Error: node not found
# Solution: Install Node.js
curl -fsSL https://deb.nodesource.com/setup_18.x | sudo -E bash -
sudo apt-get install -y nodejs npm
```

#### 2. Simulator Not Found  
```bash
# Error: iverilog not found
# Solution: Install Icarus Verilog
sudo apt-get install -y iverilog

# For other simulators, set environment variables
export VCS_HOME=/path/to/vcs        # For VCS
export MODELSIM_HOME=/path/to/msim  # For ModelSim
```

#### 3. Build Failures
```bash
# Verify SoC Automation tool
ls tools/SoC_Automation/src/
node --version
npm --version

# Check if generation script is available
ls scripts/generate_soc_automation.sh
```

#### 4. JSON Configuration Errors
```bash
# Validate JSON files
node -e "JSON.parse(require('fs').readFileSync('soc.json'))"

# Check configuration parameters
cat rtl_designs/*/soc.json
```

### Performance Tips

#### Parallel Execution
The script automatically detects CPU cores and runs parallel builds:
```bash
# Default: 4 parallel jobs
# Maximum: 8 parallel jobs (safety limit)
# Override: Set PARALLEL_JOBS environment variable
export PARALLEL_JOBS=6
./scripts/generate_soc_automation.sh
```

#### Selective Generation
For faster development cycles:
```bash
# Generate only specific processor types
./scripts/generate_soc_automation.sh --disable-cm0 --disable-n5

# Test with minimal configurations first
./scripts/generate_soc_automation.sh --disable-cm3 --disable-n5
```

### Debugging

#### Enable Debug Mode
```bash
# Add debug flags to script (modify temporarily)
set -x  # Enable command tracing
set -e  # Exit on error (currently disabled)
```

#### Check Prerequisites
```bash
# Comprehensive prerequisite check
./scripts/generate_soc_automation.sh --check

# Verify tool availability
which node npm iverilog make gcc
```

## Understanding the Generated Files

### SoC Architecture

The generated SoCs follow a hierarchical bus architecture:

```
┌─────────────────────────────────────────────────────────┐
│                    SoC Top Level                       │
├─────────────────────────────────────────────────────────┤
│  ┌─────────────┐    ┌──────────────────────────────────┐ │
│  │   Master    │    │           AHB Bus Matrix         │ │
│  │ (CM0/CM3/N5)│◄──►│                                  │ │
│  └─────────────┘    └──────────────┬───────────────────┘ │
│                                     │                     │
│  ┌─────────────────────────────────┼───────────────────┐ │
│  │             AHB Slaves          │                   │ │
│  │  ├── SRAM Controller            │                   │ │
│  │  ├── GPIO Controller            │                   │ │
│  │  ├── UART Controller            │                   │ │
│  │  └── Flash Controller (full)    │                   │ │
│  └─────────────────────────────────┼───────────────────┘ │
│                                     │                     │
│  ┌─────────────────────────────────▼───────────────────┐ │
│  │                APB Subsystem                        │ │
│  │  ├── Timer Controller                               │ │
│  │  ├── SPI Master (advanced/full)                     │ │
│  │  ├── I2C Master (advanced/full)                     │ │
│  │  └── PWM Controller (advanced/full)                 │ │
│  └─────────────────────────────────────────────────────┘ │
└─────────────────────────────────────────────────────────┘
```

### Memory Map

The generated SoCs use a standardized memory map:

| Address Range | Component | Peripheral Set |
|---------------|-----------|----------------|
| 0x00000000-0x0000FFFF | Program Memory (SRAM/Flash) | All |
| 0x20000000-0x2000FFFF | Data SRAM | All |
| 0x48000000-0x4800FFFF | GPIO Controller | All |
| 0x48100000-0x4810FFFF | APB Subsystem | All |
| 0x52000000-0x5200FFFF | UART Controller | All |
| 0x77000000-0x7700FFFF | Debug Register | Full only |

### Configuration Differences

#### Basic vs Advanced vs Full

**Basic Configuration:**
- Program storage: SRAM
- Peripherals: GPIO, Timer, UART
- Memory size: Minimal
- Target: Low-power, simple applications

**Advanced Configuration:** 
- Program storage: SRAM (enhanced)
- Additional peripherals: SPI, I2C, PWM
- Enhanced connectivity options
- Target: IoT and communication applications

**Full Configuration:**
- Program storage: QSPI Flash
- All peripherals included
- Debug register for development
- Target: Complex applications and development

### Verification Results

The verification process checks:

1. **RTL Syntax**: Verilog/SystemVerilog syntax correctness
2. **Module Hierarchy**: Proper module instantiation and connections
3. **Compilation**: Successful simulator compilation
4. **Basic Simulation**: Testbench execution without errors

Success metrics:
- **Syntax verification**: 95%+ pass rate expected
- **Compilation**: 100% pass rate expected  
- **Simulation**: 90%+ pass rate expected (some configurations may have timing issues)

### Research Applications

These RTL designs are intended for:

#### Hardware Design Research
- **Multi-core architecture evaluation**
- **Bus performance analysis** 
- **Peripheral integration studies**
- **Power consumption modeling**

#### Benchmarking Studies
- **Processor comparison** (ARM vs RISC-V)
- **Scalability analysis** (1-core to 4-core)
- **Peripheral complexity impact**
- **Memory hierarchy effects**

#### Educational Use
- **SoC design learning**
- **Bus architecture understanding**
- **Peripheral integration examples**
- **RTL generation automation**

---

For additional support or questions about the SoC Automation RTL designs, please refer to the main project documentation. When using the generation script locally, detailed build logs will be generated for troubleshooting purposes. 