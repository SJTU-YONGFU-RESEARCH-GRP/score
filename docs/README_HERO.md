# HERO RTL Organization Documentation

This document provides comprehensive information about the HERO RTL organization scripts and the structure of heterogeneous RISC-V platform design datasets generated using the HERO Platform.

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

The HERO scripts provide a complete workflow for setting up the development environment and generating synthesizable heterogeneous RISC-V platform RTL designs. HERO (Heterogeneous Embedded Research Platform) is an advanced platform for research in heterogeneous computing, featuring multiple RISC-V cores and accelerators.

### Key Features

- **Multi-Core Architecture**: Heterogeneous collection of RISC-V cores
- **Accelerator Integration**: Support for custom accelerators and coprocessors
- **IOMMU Support**: Advanced I/O memory management unit
- **OpenMP Runtime**: Software support for parallel programming
- **Cache Coherence**: Hardware cache coherence protocols
- **Memory Hierarchy**: Advanced memory system with multiple levels
- **Debug Infrastructure**: Comprehensive debugging and profiling support
- **FPGA Prototyping**: Ready for FPGA implementation and testing

### Scripts Overview

The HERO workflow consists of two main scripts:

1. **`install_hero.sh`**: Environment setup and dependency installation
2. **`generate_hero.sh`**: RTL generation and dataset organization

### Architecture Overview

The HERO Platform features:

- **Multiple RISC-V Cores**: Various core types (RV32I, RV64GC, etc.)
- **Accelerator Interface**: Standard interface for hardware accelerators
- **IOMMU**: I/O Memory Management Unit for virtualization
- **Cache Hierarchy**: Multi-level cache system with coherence
- **Memory Controllers**: Support for various memory types
- **Network-on-Chip**: Scalable interconnect fabric
- **Debug Module**: Advanced debugging and trace capabilities
- **Power Management**: Dynamic voltage and frequency scaling support

## Installation Script

### Overview

The `install_hero.sh` script sets up the complete development environment required for HERO RTL generation, including compiler toolchains, simulators, and development tools.

### Basic Usage

```bash
# Complete environment setup (recommended for first-time users)
./scripts/install_hero.sh

# Check current environment status without installing
./scripts/install_hero.sh --check-only

# Force reinstall all components
./scripts/install_hero.sh --force

# Install with debug output for troubleshooting
./scripts/install_hero.sh --debug
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show comprehensive help message and examples |
| `--check-only` | Check environment status without installing anything |
| `--debug` | Enable debug output for troubleshooting |
| `--no-gcc` | Skip GCC toolchain installation |
| `--no-llvm` | Skip LLVM toolchain installation |
| `--no-verilator` | Skip Verilator installation |
| `--no-gem5` | Skip GEM5 simulator installation |
| `--no-openmp` | Skip OpenMP runtime installation |
| `--force` | Force reinstall even if tools already exist |
| `--offline` | Skip network-dependent installations |

### Dependencies Installed

The installation script sets up the following components:

| Component | Version | Purpose |
|-----------|---------|---------|
| **GCC** | 11+ | C/C++ compiler toolchain |
| **LLVM/Clang** | 15+ | Alternative compiler toolchain |
| **Verilator** | 5.006 | SystemVerilog simulation |
| **GEM5** | Latest | Full-system simulation |
| **OpenMP** | 5.0 | Parallel programming runtime |
| **Python 3** | 3.8+ | Build and test automation |

## Generation Script

### Overview

The `generate_hero.sh` script generates multiple HERO platform configurations and organizes them into a structured dataset for heterogeneous computing research.

### Basic Usage

```bash
# Generate all available configurations
./scripts/generate_hero.sh

# Generate only basic configurations
./scripts/generate_hero.sh --basic

# Generate with verification enabled
./scripts/generate_hero.sh --verify

# Generate testbenches only (no RTL)
./scripts/generate_hero.sh --testbenches-only

# Parallel generation with 4 jobs
./scripts/generate_hero.sh --parallel 4
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show comprehensive help message |
| `--basic` | Generate only basic single-core configurations |
| `--heterogeneous` | Generate heterogeneous multi-core configurations |
| `--accelerators` | Generate with accelerator integration |
| `--iommu` | Generate with IOMMU configurations |
| `--cache-coherence` | Generate with cache coherence protocols |
| `--debug` | Generate with debug infrastructure |
| `--verify` | Enable RTL syntax verification |
| `--testbenches` | Generate testbenches and verification infrastructure |
| `--no-rtl` | Skip RTL generation, only create testbenches |
| `--parallel N` | Use N parallel jobs for generation |
| `--output-dir DIR` | Specify custom output directory |

## Available Designs

### Core Configurations

HERO supports various core configurations:

| Configuration | Core Types | Accelerators | Use Case | Typical Applications |
|---------------|------------|--------------|----------|---------------------|
| **Homogeneous** | Multiple identical cores | None | Parallel computing | Scientific computing |
| **Heterogeneous** | Mixed core types | DSP, ML | Specialized workloads | Signal processing |
| **Accelerator-rich** | Few cores + accelerators | ML, crypto | Compute-intensive | AI/ML workloads |
| **IOMMU-enabled** | Cores with virtualization | Memory isolation | Secure systems | Cloud computing |

### Accelerator Types

| Accelerator | Function | Interface | Use Case |
|-------------|----------|-----------|----------|
| **DSP** | Signal processing | Custom | Audio/video processing |
| **ML** | Machine learning | RoCC | Neural networks |
| **Crypto** | Cryptography | Memory-mapped | Security applications |
| **Compression** | Data compression | Streaming | Storage systems |

## Output Organization

### Directory Structure

```
datasets/hero/
├── homogeneous/
│   ├── 2-core/
│   │   ├── rtl/
│   │   ├── testbenches/
│   │   └── metadata.json
│   ├── 4-core/
│   └── 8-core/
├── heterogeneous/
│   ├── cpu+dsp/
│   │   ├── rtl/
│   │   ├── testbenches/
│   │   └── metadata.json
│   ├── cpu+ml/
│   └── cpu+crypto/
├── accelerator-rich/
│   ├── ml-focused/
│   ├── crypto-focused/
│   └── dsp-focused/
└── iommu-enabled/
    ├── secure/
    ├── virtualized/
    └── multi-tenant/
```

### RTL Output Structure

Each configuration directory contains:

- **`rtl/`**: Generated SystemVerilog RTL files
  - `hero_platform.v` - Top-level platform module
  - `core_cluster.v` - Multi-core cluster
  - `accelerator_interface.v` - Accelerator integration
  - `iommu.v` - I/O memory management unit
  - `cache_hierarchy.v` - Multi-level cache system
  - `noc.v` - Network-on-chip interconnect

- **`testbenches/`**: Verification infrastructure
  - `testbench.v` - Main test harness
  - `drivers/` - Test drivers and utilities
  - `tests/` - Individual test cases
  - `software/` - Software test programs
  - `benchmarks/` - Performance benchmarks

- **`metadata.json`**: Configuration metadata
  - Platform configuration parameters
  - Performance characteristics
  - Resource utilization estimates

## Dataset Structure

### Metadata Format

Each generated design includes comprehensive metadata:

```json
{
  "platform_name": "hero_heterogeneous",
  "cores": [
    {
      "type": "rv64gc",
      "count": 2,
      "frequency": 1000,
      "cache_config": "l1_private_l2_shared"
    },
    {
      "type": "rv32imc",
      "count": 1,
      "frequency": 800,
      "cache_config": "l1_only"
    }
  ],
  "accelerators": [
    {
      "type": "dsp",
      "count": 4,
      "interface": "streaming"
    },
    {
      "type": "ml",
      "count": 2,
      "interface": "rocc"
    }
  ],
  "memory": {
    "l1_cache": {
      "size": 32768,
      "associativity": 8,
      "coherence": "mesi"
    },
    "l2_cache": {
      "size": 1048576,
      "associativity": 16
    },
    "dram": {
      "channels": 2,
      "bandwidth": 25600
    }
  },
  "iommu": {
    "enabled": true,
    "page_size": 4096,
    "address_width": 48
  },
  "estimated_resources": {
    "luts": 150000,
    "ffs": 120000,
    "brams": 256,
    "dsps": 64
  }
}
```

## Usage Examples

### Basic Generation Workflow

```bash
# 1. Install dependencies
./scripts/install_hero.sh

# 2. Generate all configurations
./scripts/generate_hero.sh

# 3. Verify a specific design
cd datasets/hero/heterogeneous/cpu+dsp
make verify-rtl

# 4. Run testbenches
make run-tests
```

### Custom Configuration Generation

```bash
# Generate specific heterogeneous configuration
./scripts/generate_hero.sh --cores rv64gc:2,rv32imc:1 --accelerators dsp:4

# Generate with IOMMU enabled
./scripts/generate_hero.sh --iommu --page-size 4096

# Generate for FPGA target
./scripts/generate_hero.sh --fpga --device vu13p

# Generate accelerator-rich configuration
./scripts/generate_hero.sh --accelerators ml:8,crypto:2 --cores rv64gc:1
```

### Integration with External Tools

```bash
# Generate for GEM5 simulation
./scripts/generate_hero.sh --gem5-integration

# Generate with custom accelerator
./scripts/generate_hero.sh --custom-accelerator /path/to/accelerator

# Generate for OpenMP applications
./scripts/generate_hero.sh --openmp-runtime
```

## Performance Expectations

### Generation Performance

| Configuration | Generation Time | RTL Size (MB) | Verification Time |
|---------------|-----------------|---------------|------------------|
| **Homogeneous (2)** | 2-3 minutes | ~8 | 2-3 minutes |
| **Homogeneous (4)** | 4-6 minutes | ~15 | 4-5 minutes |
| **Heterogeneous** | 5-8 minutes | ~20 | 6-8 minutes |
| **Accelerator-rich** | 8-12 minutes | ~35 | 10-15 minutes |

### Hardware Performance

| Configuration | FMax (MHz) | LUTs | BRAMs | Power (W) |
|---------------|------------|------|-------|-----------|
| **Homogeneous (2)** | 800 | 45,000 | 64 | 2.8 |
| **Homogeneous (4)** | 750 | 75,000 | 128 | 4.2 |
| **Heterogeneous** | 700 | 85,000 | 192 | 5.1 |
| **Accelerator-rich** | 650 | 120,000 | 256 | 7.8 |

## Troubleshooting

### Common Installation Issues

**Problem**: GCC/LLVM toolchain conflicts
```
Solution: Use --no-gcc or --no-llvm flags and ensure compatible versions
```

**Problem**: GEM5 installation failures
```
Solution: Install GEM5 separately or use --no-gem5 flag for basic operation
```

**Problem**: OpenMP runtime conflicts
```
Solution: Use --no-openmp flag if conflicts occur with system OpenMP
```

### Common Generation Issues

**Problem**: Long generation times for complex platforms
```
Solution: Use --parallel 1 for large configurations or reduce core/accelerator count
```

**Problem**: RTL syntax errors in generated code
```
Solution: Enable verification with --verify flag to catch issues early
```

**Problem**: Memory allocation errors during generation
```
Solution: Increase available RAM or reduce platform complexity
```

### Debug Mode Usage

```bash
# Enable debug output for troubleshooting
./scripts/install_hero.sh --debug

# Check environment status
./scripts/install_hero.sh --check-only

# View detailed generation logs
./scripts/generate_hero.sh --verbose
```

### Getting Help

- Check the installation log: `logs/hero_install/`
- Check the generation log: `logs/hero_generation/`
- Review the metadata files for configuration details
- Use the `--help` flag on any script for detailed options

---

**Note**: This documentation covers the standard HERO workflow. For advanced configurations or custom modifications, refer to the official HERO repository and documentation.
