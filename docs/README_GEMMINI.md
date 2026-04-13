# Gemmini RTL Organization Documentation

This document provides comprehensive information about the Gemmini RTL organization scripts and the structure of systolic array accelerator design datasets generated using the Gemmini Generator.

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

The Gemmini scripts provide a complete workflow for setting up the development environment and generating synthesizable systolic array accelerator RTL designs. Gemmini is a parameterizable generator for systolic arrays used in machine learning acceleration, particularly for matrix operations.

### Key Features

- **Systolic Array Architecture**: Parameterizable 2D array of processing elements
- **Flexible Dimensions**: Configurable array sizes (2x2 to 16x16 and beyond)
- **Multiple Data Types**: Support for INT8, FP16, FP32 precision
- **Memory Hierarchy**: Scratchpad memories and DMA controllers
- **RoCC Integration**: Rocket Custom Coprocessor interface for RISC-V integration
- **Configurable PE**: Customizable processing element designs
- **Systolic Dataflow**: Optimized data movement patterns
- **Chisel Generation**: SystemVerilog output from Chisel/FIRRTL

### Scripts Overview

The Gemmini workflow consists of two main scripts:

1. **`install_gemmini.sh`**: Environment setup and dependency installation
2. **`generate_gemmini.sh`**: RTL generation and dataset organization

### Architecture Overview

The Gemmini Generator produces systolic array accelerators featuring:

- **Processing Elements (PE)**: Individual compute units with local registers and ALUs
- **Systolic Array**: 2D grid of PEs with nearest-neighbor communication
- **Scratchpad Memories**: Fast local memories for input/output data
- **DMA Controllers**: High-bandwidth memory interfaces for data transfer
- **Control Unit**: Orchestrates array operations and data movement
- **RoCC Interface**: Standard interface for integration with Rocket cores
- **Configurable Precision**: Multiple numeric formats for different applications

## Installation Script

### Overview

The `install_gemmini.sh` script sets up the complete development environment required for Gemmini RTL generation, including the Scala-based toolchain and FIRRTL compiler infrastructure.

### Basic Usage

```bash
# Complete environment setup (recommended for first-time users)
./scripts/install_gemmini.sh

# Check current environment status without installing
./scripts/install_gemmini.sh --check-only

# Force reinstall all components
./scripts/install_gemmini.sh --force

# Install with debug output for troubleshooting
./scripts/install_gemmini.sh --debug
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show comprehensive help message and examples |
| `--check-only` | Check environment status without installing anything |
| `--debug` | Enable debug output for troubleshooting |
| `--no-java` | Skip Java installation (use existing Java 11+) |
| `--no-scala` | Skip Scala installation |
| `--no-sbt` | Skip SBT (Scala Build Tool) installation |
| `--no-mill` | Skip Mill build tool installation |
| `--no-firrtl` | Skip FIRRTL tools installation |
| `--verilator` | Install Verilator for advanced simulation |
| `--force` | Force reinstall even if tools already exist |
| `--offline` | Skip network-dependent installations |

### Dependencies Installed

The installation script sets up the following components:

| Component | Version | Purpose |
|-----------|---------|---------|
| **OpenJDK** | 11+ | Java runtime for Scala and Chisel |
| **Scala** | 2.13.12 | Programming language for Gemmini |
| **SBT** | 1.9.6 | Scala Build Tool |
| **Mill** | 0.11.5 | Modern build tool used by Gemmini |
| **FIRRTL Tools** | Latest | Circuit compilation and optimization |
| **Verilator** | 5.006 | Fast simulation (optional) |

## Generation Script

### Overview

The `generate_gemmini.sh` script generates multiple systolic array configurations and organizes them into a structured dataset for hardware design research and machine learning accelerator studies.

### Basic Usage

```bash
# Generate all available configurations
./scripts/generate_gemmini.sh

# Generate only specific array sizes
./scripts/generate_gemmini.sh --small-arrays

# Generate with verification enabled
./scripts/generate_gemmini.sh --verify

# Generate testbenches only (no RTL)
./scripts/generate_gemmini.sh --testbenches-only

# Parallel generation with 8 jobs
./scripts/generate_gemmini.sh --parallel 8
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show comprehensive help message |
| `--small-arrays` | Generate only small array configurations (2x2 to 8x8) |
| `--medium-arrays` | Generate medium array configurations (4x4 to 12x12) |
| `--large-arrays` | Generate large array configurations (8x8 to 16x16) |
| `--all-arrays` | Generate all array size configurations |
| `--verify` | Enable RTL syntax verification |
| `--testbenches` | Generate testbenches and verification infrastructure |
| `--no-rtl` | Skip RTL generation, only create testbenches |
| `--parallel N` | Use N parallel jobs for generation |
| `--output-dir DIR` | Specify custom output directory |

## Available Designs

### Array Size Configurations

Gemmini supports various systolic array dimensions:

| Array Size | PEs | Use Case | Typical Applications |
|------------|-----|----------|---------------------|
| **2x2** | 4 | Small embedded | IoT, microcontroller integration |
| **4x4** | 16 | Medium embedded | Edge computing, mobile |
| **8x8** | 64 | Standard arrays | General ML acceleration |
| **12x12** | 144 | Large arrays | High-performance computing |
| **16x16** | 256 | Very large arrays | Datacenter acceleration |

### Precision Configurations

| Precision | Data Width | Use Case |
|-----------|------------|----------|
| **INT8** | 8-bit | Quantized neural networks |
| **FP16** | 16-bit | Mixed precision training |
| **FP32** | 32-bit | Full precision training |

## Output Organization

### Directory Structure

```
datasets/gemmini/
├── 2x2/
│   ├── int8/
│   │   ├── rtl/
│   │   ├── testbenches/
│   │   └── metadata.json
│   ├── fp16/
│   └── fp32/
├── 4x4/
│   ├── int8/
│   ├── fp16/
│   └── fp32/
├── 8x8/
├── 12x12/
└── 16x16/
```

### RTL Output Structure

Each configuration directory contains:

- **`rtl/`**: Generated SystemVerilog RTL files
  - `Gemmini.v` - Top-level accelerator module
  - `SystolicArray.v` - Main array implementation
  - `ProcessingElement.v` - Individual PE design
  - `Scratchpad.v` - Local memory modules
  - `DMA.v` - Direct memory access controllers

- **`testbenches/`**: Verification infrastructure
  - `testbench.v` - Main test harness
  - `drivers/` - Test drivers and utilities
  - `tests/` - Individual test cases

- **`metadata.json`**: Configuration metadata
  - Array dimensions and precision
  - Performance characteristics
  - Resource utilization estimates

## Dataset Structure

### Metadata Format

Each generated design includes comprehensive metadata:

```json
{
  "array_size": [8, 8],
  "precision": "int8",
  "data_width": 8,
  "pe_count": 64,
  "scratchpad_size": 16384,
  "dma_channels": 2,
  "estimated_area": 2.5,
  "estimated_power": 1.2,
  "estimated_performance": {
    "gops": 512,
    "efficiency": 0.85
  },
  "supported_operations": [
    "matrix_multiply",
    "convolution",
    "element_wise"
  ]
}
```

## Usage Examples

### Basic Generation Workflow

```bash
# 1. Install dependencies
./scripts/install_gemmini.sh

# 2. Generate all configurations
./scripts/generate_gemmini.sh

# 3. Verify a specific design
cd datasets/gemmini/8x8/int8
make verify-rtl

# 4. Run testbenches
make run-tests
```

### Custom Configuration Generation

```bash
# Generate specific array size and precision
./scripts/generate_gemmini.sh --array-size 4x4 --precision fp16

# Generate with custom scratchpad size
./scripts/generate_gemmini.sh --scratchpad-size 32768

# Generate for FPGA target
./scripts/generate_gemmini.sh --target fpga --verify
```

### Integration with Rocket Chip

```bash
# Generate RoCC-compatible accelerator
./scripts/generate_gemmini.sh --rocc-interface

# Generate with specific RoCC configuration
./scripts/generate_gemmini.sh --rocc-opcode 0x01 --rocc-funct 0x00
```

## Performance Expectations

### Generation Performance

| Array Size | Generation Time | RTL Size (MB) | Verification Time |
|------------|-----------------|---------------|------------------|
| **2x2** | < 1 minute | ~0.5 | < 1 minute |
| **4x4** | 1-2 minutes | ~2 | 2-3 minutes |
| **8x8** | 3-5 minutes | ~8 | 5-8 minutes |
| **16x16** | 10-15 minutes | ~25 | 15-20 minutes |

### Hardware Performance

| Configuration | Peak TOPS | Area (mm²) | Power (W) | Efficiency (TOPS/W) |
|---------------|-----------|------------|-----------|-------------------|
| **8x8 INT8** | 512 | 2.5 | 1.2 | 427 |
| **8x8 FP16** | 256 | 3.8 | 1.8 | 142 |
| **16x16 INT8** | 2048 | 8.2 | 4.1 | 500 |

## Troubleshooting

### Common Installation Issues

**Problem**: Java version conflicts
```
Solution: Ensure Java 11+ is installed and JAVA_HOME is set correctly
```

**Problem**: Scala build tool conflicts
```
Solution: Use --no-scala flag and ensure Scala 2.13.x is available
```

**Problem**: FIRRTL compilation errors
```
Solution: Clean build directory and regenerate with --force flag
```

### Common Generation Issues

**Problem**: Out of memory during generation
```
Solution: Increase Java heap size with -Xmx8g flag or reduce parallel jobs
```

**Problem**: RTL syntax errors
```
Solution: Enable verification with --verify flag to catch issues early
```

**Problem**: Large array generation timeout
```
Solution: Use --parallel 1 for large arrays or split generation into batches
```

### Debug Mode Usage

```bash
# Enable debug output for troubleshooting
./scripts/install_gemmini.sh --debug

# Check environment status
./scripts/install_gemmini.sh --check-only

# View detailed generation logs
./scripts/generate_gemmini.sh --verbose
```

### Getting Help

- Check the installation log: `logs/gemmini_install/`
- Check the generation log: `logs/gemmini_generation/`
- Review the metadata files for configuration details
- Use the `--help` flag on any script for detailed options

---

**Note**: This documentation covers the standard Gemmini workflow. For advanced configurations or custom modifications, refer to the official Gemmini repository and documentation.
