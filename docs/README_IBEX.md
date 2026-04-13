# Ibex RTL Organization Documentation

This document provides comprehensive information about the Ibex RTL organization scripts and the structure of RISC-V core design datasets generated using the Ibex Core Generator.

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

The Ibex scripts provide a complete workflow for setting up the development environment and generating synthesizable RISC-V core RTL designs. Ibex is a production-quality, open-source RISC-V core that implements the RV32IMCB instruction set architecture.

### Key Features

- **RV32IMCB ISA**: Complete 32-bit RISC-V implementation with integer, multiplication, atomic, and compressed instructions
- **Two-stage Pipeline**: Efficient design for area-constrained applications
- **Configurable Features**: Optional extensions and customizations available
- **High Performance**: Optimized for both area and performance
- **Verification Suite**: Comprehensive test suite included
- **FPGA Optimized**: Excellent performance on FPGA platforms
- **Industry Standard**: Used in commercial and research applications
- **SystemVerilog RTL**: Clean, synthesizable SystemVerilog code

### Scripts Overview

The Ibex workflow consists of two main scripts:

1. **`install_ibex.sh`**: Environment setup and dependency installation
2. **`generate_ibex.sh`**: RTL generation and dataset organization

### Architecture Overview

The Ibex Core features:

- **32-bit RISC-V**: Complete RV32IMCB implementation
- **Two-stage Pipeline**: Instruction fetch and execute stages
- **Register File**: 32 general-purpose registers
- **ALU**: Full integer arithmetic and logic operations
- **Multiplier**: Hardware multiplier for M extension
- **Atomic Operations**: A extension for synchronization
- **Compressed Instructions**: C extension support
- **Branch Prediction**: Simple static branch prediction
- **Exception Handling**: Complete interrupt and exception support

## Installation Script

### Overview

The `install_ibex.sh` script sets up the complete development environment required for Ibex RTL generation, including SystemVerilog tools and verification infrastructure.

### Basic Usage

```bash
# Complete environment setup (recommended for first-time users)
./scripts/install_ibex.sh

# Check current environment status without installing
./scripts/install_ibex.sh --check-only

# Force reinstall all components
./scripts/install_ibex.sh --force

# Install with debug output for troubleshooting
./scripts/install_ibex.sh --debug
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show comprehensive help message and examples |
| `--check-only` | Check environment status without installing anything |
| `--debug` | Enable debug output for troubleshooting |
| `--no-verilator` | Skip Verilator installation |
| `--no-fusesoc` | Skip FuseSoC installation |
| `--no-python` | Skip Python dependencies installation |
| `--no-yosys` | Skip Yosys installation |
| `--force` | Force reinstall even if tools already exist |
| `--offline` | Skip network-dependent installations |

### Dependencies Installed

The installation script sets up the following components:

| Component | Version | Purpose |
|-----------|---------|---------|
| **Verilator** | 5.006 | SystemVerilog simulation |
| **FuseSoC** | Latest | Core build and integration tool |
| **Python 3** | 3.8+ | Build and test automation |
| **Yosys** | 0.35 | Synthesis and optimization |
| **GTKWave** | 3.3.104 | Waveform viewing |

## Generation Script

### Overview

The `generate_ibex.sh` script generates multiple Ibex core configurations and organizes them into a structured dataset for hardware design research and RISC-V core studies.

### Basic Usage

```bash
# Generate all available configurations
./scripts/generate_ibex.sh

# Generate only basic configurations
./scripts/generate_ibex.sh --basic

# Generate with verification enabled
./scripts/generate_ibex.sh --verify

# Generate testbenches only (no RTL)
./scripts/generate_ibex.sh --testbenches-only

# Parallel generation with 4 jobs
./scripts/generate_ibex.sh --parallel 4
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show comprehensive help message |
| `--basic` | Generate only basic RV32I configurations |
| `--full` | Generate full RV32IMCB configurations |
| `--secure` | Generate security-hardened configurations |
| `--performance` | Generate performance-optimized configurations |
| `--area` | Generate area-optimized configurations |
| `--verify` | Enable RTL syntax verification |
| `--testbenches` | Generate testbenches and verification infrastructure |
| `--no-rtl` | Skip RTL generation, only create testbenches |
| `--parallel N` | Use N parallel jobs for generation |
| `--output-dir DIR` | Specify custom output directory |

## Available Designs

### Core Configurations

Ibex supports various configuration profiles:

| Configuration | ISA Extensions | Use Case | Typical Applications |
|---------------|----------------|----------|---------------------|
| **RV32I** | Base integer | Minimal area | Embedded controllers |
| **RV32IM** | + Multiplication | General purpose | IoT devices |
| **RV32IMC** | + Compressed | Code density | Memory-constrained |
| **RV32IMCB** | + Bit manipulation | Full featured | General computing |

### Optimization Profiles

| Profile | Area (mm²) | FMax (MHz) | Power (mW) | Use Case |
|---------|------------|------------|------------|----------|
| **Area Optimized** | ~0.02 | 200-300 | ~5 | Ultra-low power |
| **Balanced** | ~0.03 | 300-400 | ~8 | General purpose |
| **Performance** | ~0.05 | 400-500 | ~12 | High performance |

## Output Organization

### Directory Structure

```
datasets/ibex/
├── rv32i/
│   ├── basic/
│   │   ├── rtl/
│   │   ├── testbenches/
│   │   └── metadata.json
│   ├── secure/
│   └── performance/
├── rv32im/
│   ├── basic/
│   ├── secure/
│   └── performance/
├── rv32imc/
│   ├── basic/
│   ├── secure/
│   └── performance/
└── rv32imcb/
    ├── basic/
    ├── secure/
    └── performance/
```

### RTL Output Structure

Each configuration directory contains:

- **`rtl/`**: Generated SystemVerilog RTL files
  - `ibex_core.v` - Main core implementation
  - `ibex_alu.v` - Arithmetic logic unit
  - `ibex_mult.v` - Hardware multiplier
  - `ibex_register_file.v` - Register file
  - `ibex_decoder.v` - Instruction decoder

- **`testbenches/`**: Verification infrastructure
  - `testbench.v` - Main test harness
  - `drivers/` - Test drivers and utilities
  - `tests/` - Individual test cases
  - `verification/` - Formal verification setup

- **`metadata.json`**: Configuration metadata
  - ISA configuration and extensions
  - Performance characteristics
  - Resource utilization estimates

## Dataset Structure

### Metadata Format

Each generated design includes comprehensive metadata:

```json
{
  "isa": "rv32imcb",
  "extensions": ["i", "m", "c", "b"],
  "pipeline_stages": 2,
  "register_count": 32,
  "multiplier_cycles": 3,
  "branch_prediction": "static",
  "estimated_area": 0.03,
  "estimated_power": 8.2,
  "estimated_performance": {
    "dmips": 2.1,
    "coremark": 1.8,
    "fmax": 350
  },
  "supported_instructions": [
    "arithmetic",
    "logical",
    "memory",
    "branch",
    "multiply",
    "atomic"
  ]
}
```

## Usage Examples

### Basic Generation Workflow

```bash
# 1. Install dependencies
./scripts/install_ibex.sh

# 2. Generate all configurations
./scripts/generate_ibex.sh

# 3. Verify a specific design
cd datasets/ibex/rv32imcb/basic
make verify-rtl

# 4. Run testbenches
make run-tests
```

### Custom Configuration Generation

```bash
# Generate specific ISA configuration
./scripts/generate_ibex.sh --isa rv32imc

# Generate security-hardened core
./scripts/generate_ibex.sh --secure

# Generate performance-optimized core
./scripts/generate_ibex.sh --performance

# Generate for FPGA target
./scripts/generate_ibex.sh --target fpga --verify
```

### Integration with SoC Designs

```bash
# Generate core for SoC integration
./scripts/generate_ibex.sh --soc-integration

# Generate with custom bus interface
./scripts/generate_ibex.sh --bus-interface axi

# Generate with debug module
./scripts/generate_ibex.sh --debug-module
```

## Performance Expectations

### Generation Performance

| Configuration | Generation Time | RTL Size (KB) | Verification Time |
|---------------|-----------------|---------------|------------------|
| **RV32I** | < 30 seconds | ~150 | < 1 minute |
| **RV32IM** | 45-60 seconds | ~200 | 2-3 minutes |
| **RV32IMC** | 30-45 seconds | ~180 | 1-2 minutes |
| **RV32IMCB** | 60-90 seconds | ~250 | 3-5 minutes |

### Hardware Performance

| Configuration | FMax (MHz) | Area (mm²) | Power (mW) | DMIPS/MHz |
|---------------|------------|------------|------------|-----------|
| **RV32I** | 400 | 0.018 | 4.2 | 1.8 |
| **RV32IM** | 380 | 0.025 | 6.1 | 1.7 |
| **RV32IMC** | 390 | 0.022 | 5.3 | 1.8 |
| **RV32IMCB** | 350 | 0.032 | 8.2 | 1.6 |

## Troubleshooting

### Common Installation Issues

**Problem**: Verilator compilation errors
```
Solution: Ensure C++ development tools are installed and up to date
```

**Problem**: FuseSoC dependency conflicts
```
Solution: Use virtual environment or --no-fusesoc flag if conflicts occur
```

**Problem**: Python package installation failures
```
Solution: Update pip and setuptools, or use --no-python flag for manual setup
```

### Common Generation Issues

**Problem**: RTL syntax errors in generated code
```
Solution: Enable verification with --verify flag to catch issues early
```

**Problem**: Long generation times for complex configurations
```
Solution: Use --parallel 1 for large configurations or reduce scope
```

**Problem**: FuseSoC build failures
```
Solution: Clean build directory and ensure all dependencies are met
```

### Debug Mode Usage

```bash
# Enable debug output for troubleshooting
./scripts/install_ibex.sh --debug

# Check environment status
./scripts/install_ibex.sh --check-only

# View detailed generation logs
./scripts/generate_ibex.sh --verbose
```

### Getting Help

- Check the installation log: `logs/ibex_install/`
- Check the generation log: `logs/ibex_generation/`
- Review the metadata files for configuration details
- Use the `--help` flag on any script for detailed options

---

**Note**: This documentation covers the standard Ibex workflow. For advanced configurations or custom modifications, refer to the official Ibex repository and documentation.
