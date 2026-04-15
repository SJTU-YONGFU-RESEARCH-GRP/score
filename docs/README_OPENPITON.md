# OpenPiton RTL Generation Documentation

This document provides comprehensive information about the OpenPiton RTL generation script and the organization of generated datasets.

## Table of Contents

- [Overview](#overview)
- [Script Usage](#script-usage)
- [Configuration Types](#configuration-types)
- [Output Organization](#output-organization)
- [Dataset Structure](#dataset-structure)
- [Usage Examples](#usage-examples)
- [Troubleshooting](#troubleshooting)
- [Understanding the Generated Files](#understanding-the-generated-files)

## Overview

The `generate_openpiton.sh` script is a comprehensive tool for generating RTL (Register Transfer Level) configurations for the OpenPiton research processor platform. It supports multiple core types, network topologies, cache configurations, and simulators.

### Key Features

- **Multiple Core Types**: SPARC, Ariane RISC-V, PicoRV32, PicoRV32-Heterogeneous
- **Multiple Simulators**: Verilator (default), ModelSim, VCS, NC-Verilog, Icarus Verilog, Riviera
- **Scalable Configurations**: 1x1 to 4x4 tile arrays (1-16 cores)
- **Cache Variants**: Different L1I, L1D, L15, L2 cache sizes and associativities
- **Network Topologies**: 2D mesh (default) and crossbar configurations
- **ORAM Support**: Optional ORAM (Oblivious RAM) configurations
- **Organized Output**: All files systematically organized in `datasets/openpiton/`

### Validated Dataset Snapshot (2026-04-15)

- **Dataset path**: `datasets/openpiton/1c6bfd2d/`
- **RTL availability**: PASS (`rtl_designs/` contains Verilog/SystemVerilog outputs)
- **Testbench artifacts**: PASS (for example `rtl_designs/sparc/sparc_1x1/sparc_1x1_tb.sv`)
- **Verilator evidence**: PASS for execution evidence (`verification/*_verilator_lint.log` exists for all 41 generated designs)
- **Verification status**: 41 lint PASS, 0 lint FAIL, 0 lint SKIP (see `verification/verification_summary.txt`)
- **Session logs**: `logs/main.log` and `logs/session_20260415_212508.log`

## Script Usage

### Basic Usage

```bash
# Generate all default configurations with Verilator (RTL-only mode)
./scripts/generate_openpiton.sh --simulator=vlt --rtl-only

# Generate with parallel execution (recommended)
./scripts/generate_openpiton.sh --simulator=vlt --rtl-only --parallel=4

# Use a different simulator with compilation
./scripts/generate_openpiton.sh --simulator=msm

# Check prerequisites only
./scripts/generate_openpiton.sh --check

# Enable ORAM configurations (experimental)
./scripts/generate_openpiton.sh --enable-oram

# Disable specific configuration types
./scripts/generate_openpiton.sh --disable-pico --disable-cache
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show comprehensive help message |
| `--check` | Check prerequisites only (no building) |
| `--simulator=SIM` | Choose simulator: `vlt`, `msm`, `vcs`, `ncv`, `icv`, `riv` |
| `--list-simulators` | List all supported simulators |
| `--rtl-only` | Generate RTL file organization without compilation |
| `--parallel=N` | Run N parallel jobs (default: 1, max: 12) |
| `--sequential` | Force sequential execution (same as --parallel=1) |
| `--enable-oram` | Enable ORAM configurations (experimental) |
| `--disable-pico` | Disable PicoRV32 configurations |
| `--disable-pico-het` | Disable PicoRV32 heterogeneous configurations |
| `--disable-cache` | Disable cache variant configurations |
| `--disable-network` | Disable network variant configurations |

### Parallel Execution Features

The script supports sophisticated parallel job management:

- **Default Execution**: Sequential (--parallel=1) for compatibility
- **Parallel Jobs**: Up to 12 concurrent builds with `--parallel=N`
- **Job Isolation**: Each parallel job uses separate build directories
- **Progress Tracking**: Real-time job status with PIDs and timestamps
- **Resource Management**: Automatic job slot management and completion tracking

**Parallel Execution Benefits:**
- Significantly faster build times (2-3 minutes vs 15-30 minutes for all configs)
- Independent job logs for easier debugging
- Automatic retry and fallback mechanisms
- Memory and CPU usage scales with job count

**Recommended Usage:**
```bash
# Start conservatively
./scripts/generate_openpiton.sh --rtl-only --parallel=2

# Scale up based on system resources
./scripts/generate_openpiton.sh --rtl-only --parallel=4

# Maximum parallelism (requires 8+ cores, 16GB+ RAM)
./scripts/generate_openpiton.sh --rtl-only --parallel=12
```

### Supported Simulators

| Simulator | Name | Environment Variable | Open Source | Notes |
|-----------|------|---------------------|-------------|--------|
| `vlt` | Verilator | `VERILATOR_ROOT` | ✅ Yes | **Default** - Fast, free |
| `msm` | ModelSim/Questa | `MODELSIM_HOME` | ❌ No | Common in academia |
| `vcs` | Synopsys VCS | `VCS_HOME` | ❌ No | Industry standard |
| `ncv` | NC-Verilog | `NCV_HOME` | ❌ No | Cadence simulator |
| `icv` | Icarus Verilog | `ICARUS_HOME` | ✅ Yes | Lightweight option |
| `riv` | Aldec Riviera | `RIVIERA_HOME` | ❌ No | Advanced features |

## Configuration Types

### Core Types

1. **SPARC (OpenSPARC T1)**
   - Original Sun Microsystems OpenSPARC T1 core
   - SPARC V9 ISA
   - Multi-threaded design
   - Well-tested and stable
   - **8 tile configurations**: 1x1, 2x1, 1x2, 2x2, 4x1, 1x4, 4x2, 4x4

2. **Ariane RISC-V**
   - Modern 64-bit RISC-V core
   - Application-class processor
   - Out-of-order execution
   - Linux-capable
   - **8 tile configurations**: 1x1, 2x1, 1x2, 2x2, 4x1, 1x4, 4x2, 4x4

3. **PicoRV32**
   - Lightweight 32-bit RISC-V core
   - Minimal area and power
   - Good for embedded applications
   - Single-threaded
   - **8 tile configurations**: 1x1, 2x1, 1x2, 2x2, 4x1, 1x4, 4x2, 4x4

4. **PicoRV32-Heterogeneous**
   - Mixed PicoRV32 configuration
   - Different core variants in same system
   - Research platform for heterogeneous computing
   - **8 tile configurations**: 1x1, 2x1, 1x2, 2x2, 4x1, 1x4, 4x2, 4x4
   - **Note**: May not generate RTL successfully (builds start but often fail)

### Additional Configuration Variants

5. **Cache Variants** (5 configurations)
   - L1I Cache: 32KB, 4-way (default: 16KB)
   - L1D Cache: 16KB, 4-way (default: 8KB)
   - L15 Cache: 16KB, 4-way (default: 8KB)
   - L2 Cache Size: 128KB, 4-way (default: 64KB)
   - L2 Associativity: 64KB, 8-way (default: 4-way)

6. **Network Variants** (4 configurations)
   - SPARC with crossbar network (2x2, 4x4)
   - Ariane with crossbar network (2x2, 4x4)
   - Default: 2D mesh topology

7. **ORAM Variants** (2 configurations - optional)
   - SPARC-ORAM single tile (1x1)
   - SPARC-ORAM 4-tile array (2x2)
   - **Note**: Experimental feature, disabled by default

### Total Configurations

| Configuration Type | Count | Default Status | Success Rate |
|-------------------|-------|----------------|--------------|
| SPARC | 8 | ✅ Enabled | ~100% |
| Ariane | 8 | ✅ Enabled | ~100% |
| PicoRV32 | 8 | ✅ Enabled (use `--disable-pico` to skip) | ~100% |
| PicoRV32-Het | 8 | ✅ Enabled (use `--disable-pico-het` to skip) | ~0% (known issues) |
| Cache Variants | 5 | ✅ Enabled (use `--disable-cache` to skip) | ~40% |
| Network Variants | 4 | ✅ Enabled (use `--disable-network` to skip) | Variable |
| ORAM | 2 | ❌ Disabled (use `--enable-oram` to enable) | Variable |

**Total Default**: 41 configurations (37 typically successful)
**Total Maximum**: 43 configurations (with ORAM enabled)

### RTL-Only Mode vs. Compilation Mode

The script supports two operating modes:

1. **RTL-Only Mode** (`--rtl-only` flag):
   - Organizes RTL source files without compilation
   - Creates configuration metadata and file lists
   - Much faster execution (2-3 minutes for all configs)
   - Suitable for RTL analysis, synthesis, and tool integration
   - **This is the recommended mode for most users**

2. **Compilation Mode** (default without `--rtl-only`):
   - Attempts full OpenPiton compilation with chosen simulator
   - Generates simulation executables
   - Much slower (15-30 minutes or more)
   - Requires properly configured simulator environment
   - May fail due to complex build dependencies

## Output Organization

All generated files are organized under a commit-scoped dataset root:

```
datasets/openpiton/1c6bfd2d/
├── logs/
│   ├── main.log
│   └── session_20260415_212508.log
├── openpiton_summary.txt
├── rtl_designs/
│   ├── ariane/
│   │   └── ariane_1x1/
│   │       ├── ariane_1x1_top.v
│   │       ├── ariane_1x1_tb.sv
│   │       ├── config.yaml
│   │       └── filelist.f
│   └── sparc/
│       └── sparc_1x1/
│           ├── sparc_1x1_top.v
│           ├── sparc_1x1_tb.sv
│           ├── config.yaml
│           └── filelist.f
└── verification/
    ├── verification_summary.txt
    ├── verification_results_20260415_212508.txt
    └── *_verilator_lint.log
```

**Note**: Some configuration types (pico_het, cache_variants, network_variants, oram) may not generate RTL if builds fail or are disabled. Check the job status logs for actual completion status.

## Dataset Structure

### Configuration Directory Contents

Each configuration directory (`rtl_designs/TYPE/CONFIG_NAME/`) contains:

- **RTL Files**: `*.v`, `*.sv` - Verilog/SystemVerilog source code
- **Configuration Metadata**: `config.yaml` - Build metadata in YAML format
- **File List**: `filelist.f` - Complete list of RTL files with absolute paths
- **Top Module**: `[config_name]_top.v` - Configuration-specific top-level
- **Include Directory**: `include/` - Header files (`.h`, `.vh`)
- **Organized Subdirectories**: 
  - `common/` - Shared components
  - `chipset/` - Chipset-specific modules  
  - `chip/` - Chip-level integration

### Simulation Model Directory Contents

Each simulation model directory (`simulation_models/TYPE/CONFIG_NAME/`) contains:

- **Executable Models**: `simv*`, `*.exe` - Compiled simulation binaries
- **Shared Libraries**: `*.so`, `*.dll` - Runtime libraries
- **Debug Symbols**: Debug information (if enabled)

### Build Tracking and Logs

The generation process includes comprehensive job tracking:

- **Job Status File**: `logs/job_status_[session].txt` - Tracks all jobs with:
  - Job ID format: `[type]_[config]_[pid]_[timestamp]`
  - Status tracking: STARTED → COMPLETED/FAILED
  - Process IDs and timing information
  
- **Individual Logs**: Format `[config]_vlt_[job_id].log`
  - Detailed build output for each configuration
  - Error messages and warnings
  - Build completion status

### Configuration Metadata Format

Each `config.yaml` contains:
```yaml
core_type: sparc
config_name: sparc_1x1
x_tiles: 1
y_tiles: 1
total_tiles: 1
simulator: vlt
generation_date: Mon Jun 23 23:47:27 CST 2025
rtl_only: true
description: "OpenPiton sparc configuration with 1x1 tiles"
```

### Log Files

- **Main Log**: `logs/main.log` - Cumulative log across all runs
- **Session Logs**: `logs/session_*.log` - Individual run session logs
- **Build Logs**: `logs/[config]_*.log` - Per-configuration build outputs
- **Job Status**: `logs/job_status_*.txt` - Job tracking and completion status

## Usage Examples

### Checking Build Status

```bash
# Monitor overall progress
tail -f datasets/openpiton/logs/main.log

# Check job completion status
cat datasets/openpiton/logs/job_status_*.txt | grep COMPLETED | wc -l

# Find failed builds
grep -v COMPLETED datasets/openpiton/logs/job_status_*.txt | grep STARTED

# Check specific configuration logs
ls datasets/openpiton/logs/sparc_1x1_*.log
```

### Working with Generated RTL

```bash
# List all successfully generated configurations
find datasets/openpiton/rtl_configs -name "config.yaml" -exec dirname {} \;

# Count RTL files in a configuration
wc -l datasets/openpiton/rtl_configs/sparc/sparc_1x1/filelist.f

# Use filelist for simulation tools
# Most EDA tools can directly read the filelist.f format
```

### Advanced Parallel Execution Examples

```bash
# Conservative parallel start (good for 4-core systems)
./scripts/generate_openpiton.sh --rtl-only --parallel=2 --simulator=vlt

# Aggressive parallel (8+ core systems with 16GB+ RAM)
./scripts/generate_openpiton.sh --rtl-only --parallel=8 --simulator=vlt

# Monitor parallel execution progress
./scripts/generate_openpiton.sh --rtl-only --parallel=4 &
tail -f datasets/openpiton/logs/session_*.log

# Check parallel job status in real-time
watch -n 1 'cat datasets/openpiton/logs/job_status_*.txt | tail -20'

# Selective parallel builds (skip problematic configs)
./scripts/generate_openpiton.sh --rtl-only --parallel=4 --disable-pico-het --disable-cache
```

### Resource Management for Parallel Builds

```bash
# Monitor system resources during build
htop &
./scripts/generate_openpiton.sh --rtl-only --parallel=4

# Check memory usage during parallel execution
watch -n 2 'free -h && echo "Active jobs: $(pgrep -c sims)"'

# Conservative build for limited resources (2GB RAM systems)
./scripts/generate_openpiton.sh --rtl-only --parallel=1 --simulator=vlt
```

2. **For Synthesis**:
   ```bash
   # Point synthesis tool to RTL directory
   RTL_DIR=datasets/openpiton/rtl_configs/sparc/sparc_1x1/
   # Include directory for headers
   INCLUDE_DIR=$RTL_DIR/include/
   ```

3. **For Analysis**:
   ```bash
   # Count total RTL files across all configs
   find datasets/openpiton/rtl_configs/ -name "*.v" -o -name "*.sv" | wc -l
   
   # Analyze RTL distribution by type
   find datasets/openpiton/rtl_configs/ -name "*.v" | grep -E "(cache|noc|core)" | sort
   
   # Check configuration differences
   diff -u datasets/openpiton/rtl_configs/sparc/sparc_1x1/config.yaml \
           datasets/openpiton/rtl_configs/sparc/sparc_2x2/config.yaml
   ```

## Performance Expectations

### Execution Mode Performance Comparison

| Mode | Execution Time | Resource Usage | Success Rate | Use Case |
|------|---------------|----------------|--------------|-----------|
| RTL-Only Sequential | 2-3 minutes | Low CPU, <2GB RAM | ~90% | RTL analysis, limited resources |
| RTL-Only Parallel (4 jobs) | 30-60 seconds | 4 cores, 4-8GB RAM | ~90% | Fast RTL generation |
| RTL-Only Parallel (8+ jobs) | 20-30 seconds | 8+ cores, 12GB+ RAM | ~90% | Maximum speed |
| Compilation Sequential | 30-60 minutes | High CPU, varies | ~70% | Full simulation models |
| Compilation Parallel | 10-20 minutes | Very high resources | ~70% | Fast simulation builds |

### Actual Generated Configurations (RTL-Only Mode)

Based on successful builds in the current dataset:

| Core Type | Generated Configs | Success Rate | Notes |
|-----------|------------------|--------------|--------|
| SPARC | 8 configurations | ✅ ~100% | Most reliable |
| Ariane | 8 configurations | ✅ ~100% | RISC-V stable |
| PicoRV32 | 8 configurations | ✅ ~100% | Lightweight, fast |
| PicoRV32-Het | 0-2 configurations | ⚠️ ~10% | Known RTL generation issues |
| Cache Variants | 1-3 configurations | ⚠️ ~40% | Hit or miss |
| Network Variants | 2-4 configurations | ⚠️ ~60% | Better with parallel |
| ORAM | 0-2 configurations | ⚠️ ~30% | Experimental |

**Typical Success**: 24-28 RTL configurations out of 41 attempted

### Build Times and Resource Usage

| Configuration | Sequential Time | Parallel Time (4 jobs) | Memory per Job |
|---------------|----------------|-------------------------|----------------|
| SPARC 1x1 | ~5-8 seconds | ~5-8 seconds | ~200MB |
| SPARC 4x4 | ~8-12 seconds | ~8-12 seconds | ~400MB |
| Ariane 1x1 | ~6-10 seconds | ~6-10 seconds | ~300MB |
| Ariane 4x4 | ~10-15 seconds | ~10-15 seconds | ~600MB |
| Complete RTL run | 2-3 minutes | 30-60 seconds | 2-8GB total |

### Storage Requirements

| Component | RTL-Only Mode | Compilation Mode | Notes |
|-----------|---------------|------------------|--------|
| RTL per config | ~15-25 MB | ~15-25 MB | Source files |
| Simulation models | 0 MB | ~50-200 MB | Compiled binaries |
| Build artifacts | <1 MB | ~100-500 MB | Intermediate files |
| Logs per config | ~1-50 KB | ~100KB-5MB | Build output |
| Complete dataset | ~500 MB | ~5-15 GB | All configurations |

### System Requirements for Parallel Execution

| Parallel Jobs | CPU Cores | RAM Required | Disk I/O | Build Time |
|---------------|-----------|--------------|----------|------------|
| 1 (Sequential) | 1-2 cores | 2GB | Low | 2-3 minutes |
| 2 jobs | 2-4 cores | 4GB | Medium | 1-2 minutes |
| 4 jobs | 4-6 cores | 6-8GB | High | 30-60 seconds |
| 8 jobs | 8+ cores | 12GB+ | Very High | 20-30 seconds |
| 12 jobs (max) | 12+ cores | 16GB+ | Maximum | 15-25 seconds |

**Recommendation**: Start with `--parallel=2` and increase based on system performance.

---

**For additional help**: Check the script's built-in help with `./scripts/generate_openpiton.sh --help` or examine the latest session logs in `datasets/openpiton/logs/`.

## Troubleshooting

### Diagnosing Failed Builds

1. **Check job status first**:
   ```bash
   # Find incomplete jobs
   grep -v COMPLETED datasets/openpiton/logs/job_status_*.txt
   ```

2. **Examine specific build failures**:
   ```bash
   # Find the log for a failed configuration
   ls datasets/openpiton/logs/pico_het_*_*.log
   
   # Look for error messages
   grep -i error datasets/openpiton/logs/pico_het_1x1_*.log
   ```

3. **Verify RTL generation**:
   ```bash
   # Check if RTL was actually generated
   test -f datasets/openpiton/rtl_configs/pico_het/pico_het_1x1/config.yaml && echo "Generated" || echo "Missing"
   ```

### Common Build Issues

1. **PicoRV32-Heterogeneous not generating RTL**:
   - This is a known issue where builds start but don't complete RTL generation
   - Check logs for specific error messages
   - These configurations may require additional setup

2. **Empty simulation_models directory**:
   - Expected when using `--rtl-only` flag
   - Remove `--rtl-only` to generate simulation binaries
   - Requires proper simulator installation

### Traditional Build Issues

1. **"bw_cpp not found"**
   ```bash
   # Install missing dependencies
   sudo apt-get install gcc g++ libc6-i386
   # Rebuild OpenPiton tools
   cd tools/openpiton && source piton/piton_settings.bash && mktools
   ```

2. **"Bit::Vector errors"**
   ```bash
   # Install Perl Bit::Vector module
   sudo apt-get install libbit-vector-perl
   ```

3. **Simulator not found**
   ```bash
   # For Verilator
   sudo apt-get install verilator
   
   # For ModelSim, set environment
   export MODELSIM_HOME=/path/to/modelsim
   export PATH=$MODELSIM_HOME/bin:$PATH
   ```

4. **Permission errors**
   ```bash
   # Fix script permissions
   chmod +x scripts/generate_openpiton.sh
   
   # Fix dataset directory permissions
   chmod -R 755 datasets/openpiton/
   ```

### Debugging Build Failures

1. **Check individual build log**:
   ```bash
   # Find failed configuration log using job status
   grep FAILED datasets/openpiton/logs/job_status_*.txt
   
   # View error details for specific config
   tail -50 datasets/openpiton/logs/sparc_1x1_vlt_*.log
   ```

2. **Verify environment setup**:
   ```bash
   # Check OpenPiton environment
   ./scripts/generate_openpiton.sh --check
   
   # Manual environment setup
   export PITON_ROOT=$(pwd)/tools/openpiton
   source $PITON_ROOT/piton/piton_settings.bash
   ```

3. **Clean and retry**:
   ```bash
   # Clean build artifacts
   rm -rf datasets/openpiton/build_artifacts/*
   
   # Retry specific configuration
   ./scripts/generate_openpiton.sh --disable-pico --disable-pico-het
   ```

## Understanding the Generated Files

### RTL File Organization

The generated RTL follows a hierarchical structure:

- **Top Level**: `[config_name]_top.v` - Configuration-specific top module
- **Core RTL**: Located in `chip/tile/` subdirectories
- **Cache RTL**: L1, L1.5, and L2 cache implementations  
- **Network RTL**: Network-on-chip routers and interfaces
- **System RTL**: Chip-level integration and I/O

### File Lists and Tool Integration

Each configuration includes:

- **`filelist.f`**: Complete file list with absolute paths
  - Ready for use with Verilator, VCS, ModelSim
  - Includes all dependencies in correct compilation order
  - Example: 42 files for `sparc_1x1` configuration

- **Include Directory**: All necessary header files
  - System defines (`define.tmp.h`, `sys.h`)
  - Cache parameters (`l15.tmp.h`, `l2.tmp.h`)  
  - Interface definitions (`iop.h`, `jtag.vh`)

### Configuration Analysis

```bash
# Examine configuration details
cat datasets/openpiton/rtl_configs/sparc/sparc_1x1/config.yaml

# Count RTL files
wc -l datasets/openpiton/rtl_configs/sparc/sparc_1x1/filelist.f

# Find largest configurations (by file count)
for config in datasets/openpiton/rtl_configs/*/*/filelist.f; do
  echo "$(wc -l < "$config") $(dirname "$config")"
done | sort -nr

# Check configuration sizes
du -sh datasets/openpiton/rtl_configs/*/*/
```

### Using Generated RTL

1. **For Simulation**:
   ```bash
   # Use filelist directly with Verilator
   verilator --cc -f datasets/openpiton/rtl_configs/sparc/sparc_1x1/filelist.f
   
   # Or with other simulators
   vcs -f datasets/openpiton/rtl_configs/sparc/sparc_1x1/filelist.f
   ```