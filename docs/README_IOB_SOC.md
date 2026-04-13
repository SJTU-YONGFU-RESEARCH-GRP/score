# IOb-SoC RTL Organization Documentation

This document provides comprehensive information about the IOb-SoC RTL organization scripts and the structure of RISC-V SoC design datasets generated using the IOb-SoC Framework.

## Table of Contents

- [Overview](#overview)
- [Installation Script](#installation-script)
- [Generation Script](#generation-script)
- [Available Designs](#available-designs)
- [Output Organization](#output-organization)
- [Dataset Structure](#dataset-structure)
- [Usage Examples](#usage-examples)
- [Performance Expectations](#performance-expectations)
- [Troubleshooting](#troubleshooting)

## Overview

The IOb-SoC scripts provide a complete workflow for setting up the development environment and generating synthesizable RISC-V System-on-Chip (SoC) RTL designs. IOb-SoC is a flexible framework for creating custom SoC designs using a Python-based configuration system.

### Key Features

- **VexRiscv Integration**: High-performance RISC-V softcore processor
- **TileLink Interconnect**: Modern cache-coherent interconnect fabric
- **Python Framework**: Configuration-driven SoC generation
- **Modular Design**: Plug-and-play IP core integration
- **FPGA Ready**: Optimized for FPGA implementation
- **Extensible Architecture**: Easy addition of custom peripherals
- **Verification Infrastructure**: Built-in testing and verification
- **Industry Standard**: Production-ready RTL generation

### Scripts Overview

The IOb-SoC workflow consists of two main scripts:

1. **`install_iob_soc.sh`**: Environment setup and dependency installation
2. **`generate_iob_soc.sh`**: RTL generation and dataset organization

### Architecture Overview

The IOb-SoC Framework generates complete SoC systems featuring:

- **VexRiscv Core**: 32/64-bit RISC-V processor with optional extensions
- **TileLink Network**: Cache-coherent interconnect with multiple topologies
- **Memory System**: SRAM, DDR controllers, and memory protection units
- **Peripheral Bus**: AXI or AHB peripheral interconnect options
- **DMA Controllers**: High-bandwidth data transfer engines
- **Debug Infrastructure**: JTAG debugging and trace support
- **Custom Peripherals**: Easy integration of user-defined IP cores

## Installation Script

### Overview

The `install_iob_soc.sh` script sets up the complete development environment required for IOb-SoC RTL generation, including Python tools and FPGA synthesis infrastructure.

### Basic Usage

```bash
# Complete environment setup (recommended for first-time users)
./scripts/install_iob_soc.sh

# Check current environment status without installing
./scripts/install_iob_soc.sh --check-only

# Force reinstall all components
./scripts/install_iob_soc.sh --force

# Install with debug output for troubleshooting
./scripts/install_iob_soc.sh --debug
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show comprehensive help message and examples |
| `--check-only` | Check environment status without installing anything |
| `--debug` | Enable debug output for troubleshooting |
| `--no-python` | Skip Python dependencies installation |
| `--no-vivado` | Skip Xilinx Vivado installation |
| `--no-quartus` | Skip Intel Quartus installation |
| `--no-verilator` | Skip Verilator installation |
| `--no-yosys` | Skip Yosys installation |
| `--force` | Force reinstall even if tools already exist |
| `--offline` | Skip network-dependent installations |

### Dependencies Installed

The installation script sets up the following components:

| Component | Version | Purpose |
|-----------|---------|---------|
| **Python 3** | 3.8+ | SoC configuration and generation |
| **Verilator** | 5.006 | SystemVerilog simulation |
| **Yosys** | 0.35 | Synthesis and optimization |
| **GTKWave** | 3.3.104 | Waveform viewing |
| **Vivado** | 2023.1 | Xilinx FPGA synthesis (optional) |
| **Quartus** | 23.1 | Intel FPGA synthesis (optional) |

## Generation Script

### Overview

The `generate_iob_soc.sh` script generates multiple SoC configurations using the IOb-SoC framework and organizes them into a structured dataset for hardware design research.

### Basic Usage

```bash
# Generate all available configurations
./scripts/generate_iob_soc.sh

# Generate only basic SoC configurations
./scripts/generate_iob_soc.sh --basic

# Generate with verification enabled
./scripts/generate_iob_soc.sh --verify

# Generate testbenches only (no RTL)
./scripts/generate_iob_soc.sh --testbenches-only

# Parallel generation with 2 jobs
./scripts/generate_iob_soc.sh --parallel 2
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show comprehensive help message |
| `--basic` | Generate only basic single-core configurations |
| `--multicore` | Generate multi-core configurations |
| `--cache` | Generate with cache hierarchy configurations |
| `--peripherals` | Generate with various peripheral configurations |
| `--fpga` | Generate FPGA-targeted configurations |
| `--asic` | Generate ASIC-targeted configurations |
| `--verify` | Enable RTL syntax verification |
| `--testbenches` | Generate testbenches and verification infrastructure |
| `--no-rtl` | Skip RTL generation, only create testbenches |
| `--parallel N` | Use N parallel jobs for generation |
| `--output-dir DIR` | Specify custom output directory |

## Available Designs

### Core Configurations

IOb-SoC supports various core configurations:

| Configuration | Processor | Cache | Peripherals | Use Case |
|---------------|-----------|-------|-------------|----------|
| **Minimal** | VexRiscv RV32I | None | UART, GPIO | Embedded control |
| **Standard** | VexRiscv RV32IM | L1 I/D | UART, SPI, I2C | General purpose |
| **Performance** | VexRiscv RV32IMC | L1 + L2 | Full peripheral set | High performance |
| **Multicore** | 2-4 VexRiscv cores | Coherent L2 | Shared peripherals | Parallel computing |

### Memory Configurations

| Memory Type | Size Range | Bandwidth | Use Case |
|-------------|------------|-----------|----------|
| **SRAM** | 8KB - 2MB | High | Low-latency access |
| **DDR3/4** | 64MB - 4GB | High | Large datasets |
| **Hybrid** | Mixed SRAM/DDR | Balanced | Mixed workloads |

## Output Organization

### Directory Structure

```
datasets/iob-soc/
├── minimal/
│   ├── rv32i/
│   │   ├── rtl/
│   │   ├── testbenches/
│   │   └── metadata.json
│   └── rv32im/
├── standard/
│   ├── rv32i/
│   ├── rv32im/
│   └── rv32imc/
├── performance/
│   ├── single-core/
│   ├── dual-core/
│   └── quad-core/
└── multicore/
    ├── 2-core/
    ├── 4-core/
    └── 8-core/
```

### RTL Output Structure

Each configuration directory contains:

- **`rtl/`**: Generated SystemVerilog RTL files
  - `iob_soc.v` - Top-level SoC module
  - `vexriscv_core.v` - Processor core
  - `tilelink_interconnect.v` - Interconnect fabric
  - `memory_subsystem.v` - Memory controllers
  - `peripheral_subsystem.v` - I/O peripherals

- **`testbenches/`**: Verification infrastructure
  - `testbench.v` - Main test harness
  - `drivers/` - Test drivers and utilities
  - `tests/` - Individual test cases
  - `software/` - Software test programs

- **`metadata.json`**: Configuration metadata
  - SoC configuration parameters
  - Performance characteristics
  - Resource utilization estimates

## Dataset Structure

### Metadata Format

Each generated design includes comprehensive metadata:

```json
{
  "soc_name": "iob_soc_performance",
  "processor": {
    "type": "vexriscv",
    "isa": "rv32imc",
    "cores": 2,
    "frequency": 100
  },
  "memory": {
    "l1_cache": {
      "size": 32768,
      "associativity": 4,
      "line_size": 64
    },
    "l2_cache": {
      "size": 524288,
      "associativity": 8
    },
    "dram": {
      "type": "ddr4",
      "size": 1073741824,
      "bandwidth": 25600
    }
  },
  "peripherals": [
    "uart",
    "spi",
    "i2c",
    "gpio",
    "ethernet"
  ],
  "estimated_resources": {
    "luts": 45000,
    "ffs": 35000,
    "brams": 64,
    "dsps": 8
  }
}
```

## Usage Examples

### Basic Generation Workflow

```bash
# 1. Install dependencies
./scripts/install_iob_soc.sh

# 2. Generate all configurations
./scripts/generate_iob_soc.sh

# 3. Verify a specific design
cd datasets/iob-soc/standard/rv32imc
make verify-rtl

# 4. Run testbenches
make run-tests
```

### Custom Configuration Generation

```bash
# Generate specific processor configuration
./scripts/generate_iob_soc.sh --processor rv32imc --cores 2

# Generate with custom cache configuration
./scripts/generate_iob_soc.sh --l1-size 32KB --l2-size 512KB

# Generate for FPGA target with specific device
./scripts/generate_iob_soc.sh --fpga --device xcu280

# Generate ASIC-targeted configuration
./scripts/generate_iob_soc.sh --asic --technology 28nm
```

### Integration with External Tools

```bash
# Generate for Xilinx Vivado flow
./scripts/generate_iob_soc.sh --vivado --board vc707

# Generate for Intel Quartus flow
./scripts/generate_iob_soc.sh --quartus --board de10-nano

# Generate with custom IP integration
./scripts/generate_iob_soc.sh --custom-ip /path/to/ip
```

## Performance Expectations

### Generation Performance

| Configuration | Generation Time | RTL Size (MB) | Verification Time |
|---------------|-----------------|---------------|------------------|
| **Minimal** | 1-2 minutes | ~2 | < 1 minute |
| **Standard** | 2-4 minutes | ~5 | 2-3 minutes |
| **Performance** | 4-8 minutes | ~12 | 5-8 minutes |
| **Multicore** | 8-15 minutes | ~25 | 10-15 minutes |

### Hardware Performance

| Configuration | FMax (MHz) | LUTs | BRAMs | Power (W) |
|---------------|------------|------|-------|-----------|
| **Minimal** | 150 | 8,000 | 8 | 0.5 |
| **Standard** | 120 | 15,000 | 16 | 1.2 |
| **Performance** | 100 | 25,000 | 32 | 2.1 |
| **Multicore (2)** | 90 | 35,000 | 48 | 3.2 |

## Troubleshooting

### Common Installation Issues

**Problem**: Python dependency conflicts
```
Solution: Use virtual environment or --no-python flag for manual setup
```

**Problem**: FPGA tool installation failures
```
Solution: Install FPGA tools separately or use --no-vivado/--no-quartus flags
```

**Problem**: Verilator compilation errors
```
Solution: Ensure C++ development tools are installed and up to date
```

### Common Generation Issues

**Problem**: Long generation times for complex SoCs
```
Solution: Use --parallel 1 for large configurations or reduce peripheral count
```

**Problem**: RTL syntax errors in generated code
```
Solution: Enable verification with --verify flag to catch issues early
```

**Problem**: Memory allocation errors
```
Solution: Increase available RAM or reduce configuration complexity
```

### Debug Mode Usage

```bash
# Enable debug output for troubleshooting
./scripts/install_iob_soc.sh --debug

# Check environment status
./scripts/install_iob_soc.sh --check-only

# View detailed generation logs
./scripts/generate_iob_soc.sh --verbose
```

### Getting Help

- Check the installation log: `logs/iob_soc_install/`
- Check the generation log: `logs/iob_soc_generation/`
- Review the metadata files for configuration details
- Use the `--help` flag on any script for detailed options

---

**Note**: This documentation covers the standard IOb-SoC workflow. For advanced configurations or custom modifications, refer to the official IOb-SoC repository and documentation.
