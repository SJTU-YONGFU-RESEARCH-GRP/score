# NEORV32 VHDL RTL Organization Documentation

[![repo stnolting/neorv32](https://img.shields.io/badge/repo-stnolting%2Fneorv32-blue)](https://github.com/stnolting/neorv32)
[![upstream docs](https://img.shields.io/badge/docs-tools%2Fneorv32%2FREADME.md-informational)](../../tools/neorv32/README.md)

This document covers the VHDL flow for NEORV32 in SCORE. The VHDL flow works directly from the `tools/neorv32` submodule (upstream VHDL RTL) and organizes designs under `datasets/neorv32-vhdl/<commit>/`. For the VHDL→Verilog conversion flow, see `docs/README_NEORV32_VERILOG.md`.

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

The NEORV32 VHDL flow in SCORE initializes the `tools/neorv32` submodule (upstream VHDL RTL), installs GHDL and Icarus Verilog, and exports a catalog of CPU, SoC, peripheral, and test-setup designs as organized VHDL packages under `datasets/neorv32-vhdl/<8-char-sha>/`.

### Key Features

- **Submodule-driven upstream**: NEORV32 VHDL RTL is vendored at `tools/neorv32` per `.gitmodules`.
- **Multiple CPU configurations**: Minimal, Standard, FPU, Debug, and Complete variants.
- **SoC designs**: Processor-top templates (`MinimalBoot`, `UP5KDemo`, etc.).
- **Peripheral modules**: Individual VHDL controllers (UART, SPI, GPIO, PWM, TRNG, DMA, etc.).
- **Test setups**: Pre-configured test environments with testbenches.
- **Optional GHDL verification**: VHDL syntax analysis and testbench simulation (GHDL ≥ 3.0 for synthesis support).
- **EDA-ready filelists**: Each design ships `filelist.f` and `config.yaml` for direct tool integration.

### Scripts Overview

1. **`./scripts/install_neorv32_vhdl.sh`**: Installs OS dependencies (GNAT/gnatmake, LLVM, Icarus, etc.), initializes `tools/neorv32` submodule, builds GHDL from source when needed, and writes `scripts/neorv32_env.sh`.
2. **`./scripts/generate_neorv32_vhdl.sh`**: Exports all configured VHDL designs into `datasets/neorv32-vhdl/<commit>/rtl_designs/`, creates `config.yaml` and `filelist.f` per design, and optionally runs GHDL verification.
3. **`./scripts/run_neorv32_vhdl.sh`**: End-to-end orchestration: submodule update → full install → full generation.
4. **`source ./scripts/neorv32_env.sh`**: Adds project-local GHDL and Icarus Verilog to PATH; sourced automatically by generate scripts.

## Installation Script

### Overview

`install_neorv32_vhdl.sh` prepares the host for NEORV32 VHDL work: detects OS family, installs system packages (build tools, GNAT, LLVM, zlib, boost), initializes the `tools/neorv32` submodule, builds GHDL from source (LLVM backend preferred for synthesis support), installs Icarus Verilog, and writes `scripts/neorv32_env.sh`.

### Basic Usage

```bash
# First-time full install from SCORE repo root
./scripts/install_neorv32_vhdl.sh

# Skip system package steps (assumes compilers already installed)
./scripts/install_neorv32_vhdl.sh --skip-deps

# Clean rebuild of GHDL from source
./scripts/install_neorv32_vhdl.sh --clean

# Force GHDL rebuild even if working version exists
./scripts/install_neorv32_vhdl.sh --force-ghdl

# Parallel build jobs
./scripts/install_neorv32_vhdl.sh --jobs 8

# Only init/update tools/neorv32 submodule (no tool installs)
./scripts/install_neorv32_vhdl.sh --only-neorv32-submodule
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--skip-ghdl` | Skip GHDL installation |
| `--skip-iverilog` | Skip Icarus Verilog installation |
| `--skip-deps` | Skip system package-manager steps |
| `--skip-neorv32-submodule` | Skip `git submodule update` for `tools/neorv32` |
| `--only-neorv32-submodule` | Only run submodule init/update, then exit |
| `--clean` | Clean previous GHDL/Icarus builds before reinstalling |
| `--force-ghdl` | Force rebuild GHDL even if a working version exists |
| `--jobs N` | Parallel build jobs (default: `nproc`) |

### Dependencies Installed

| Component | Notes |
|-----------|-------|
| GNAT / gnatmake | Ada toolchain required to build GHDL from source |
| LLVM (dev) | LLVM backend for GHDL synthesis support |
| GHDL ≥ 3.0 | Built from source at `tools/ghdl`, installed to `tools/ghdl-install` |
| Icarus Verilog | From package manager or built from source at `tools/iverilog` |
| zlib / boost | GHDL build dependencies |

**RHEL 9 / AlmaLinux / Rocky note**: `gcc-gnat` is in EPEL and conflicts with base `gcc` Obsoletes. The installer uses `dnf download + rpm -Uvh --nodeps` to bypass the conflict automatically.

### Supported Operating Systems

The installer detects `ID` / `ID_LIKE` from `/etc/os-release` and maps to families: **Ubuntu/Debian**, **Fedora**, **RHEL/Rocky/Alma/CentOS (EL 8/9)**, **Amazon Linux**, **Arch**, **openSUSE**, **macOS** (Homebrew).

### Installation Process

1. Detect OS family and select package manager.
2. Install or skip system dependencies (`--skip-deps` bypasses this step).
3. Enable EPEL + CRB repos on RHEL-family for `gcc-gnat`.
4. Run `git submodule update --init --recursive tools/neorv32` from SCORE root (unless `--skip-neorv32-submodule`).
5. Check if existing GHDL has synthesis support (`ghdl help synth`); build from source if not.
6. Install Icarus Verilog from package manager; fall back to source build.
7. Write `scripts/neorv32_env.sh` for PATH setup.

## Generation Script

### Overview

`generate_neorv32_vhdl.sh` exports NEORV32 VHDL designs from `tools/neorv32` into `datasets/neorv32-vhdl/<commit>/rtl_designs/`. For each design it copies relevant `.vhd` files, creates `config.yaml` metadata, `filelist.f`, and optionally runs GHDL verification. Dataset root is `datasets/neorv32-vhdl/<8-char-sha>/`.

### Basic Usage

```bash
# Export all VHDL designs (default)
./scripts/generate_neorv32_vhdl.sh

# Check prerequisites and source availability only
./scripts/generate_neorv32_vhdl.sh --check

# Include GHDL verification
./scripts/generate_neorv32_vhdl.sh --install-ghdl --verify

# Include software framework and examples
./scripts/generate_neorv32_vhdl.sh --include-sw --with-examples

# Custom simulation timeout
./scripts/generate_neorv32_vhdl.sh --install-ghdl --verify --sim-timeout 100ms

# Debug mode
./scripts/generate_neorv32_vhdl.sh --debug
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--check` | Check prerequisites and source availability only |
| `--debug` | Enable debug logging |
| `--vhdl-only` | Copy only VHDL designs (default includes all RTL) |
| `--include-sw` | Include software framework (`tools/neorv32/sw`) |
| `--include-sim` | Include simulation files (`tools/neorv32/sim`) |
| `--with-examples` | Include example applications |
| `--with-docs` | Include documentation |
| `--install-ghdl` | Install GHDL automatically before organizing |
| `--verify` | Run GHDL verification on organized designs |
| `--sim-timeout TIME` | GHDL simulation timeout (default: `10ms`) |

### Generation Process

1. Determine `NEORV32_COMMIT_ID` from `tools/neorv32` and set `DATASET_DIR=datasets/neorv32-vhdl/<commit>`.
2. Check prerequisites: `tools/neorv32/rtl/core/` and required shell tools present.
3. For each CPU config: copy `tools/neorv32/rtl/core/*.vhd` into `rtl_designs/neorv32_cpu/<name>/`, write `config.yaml` and `filelist.f`.
4. For each SoC config: add processor-template `.vhd` from `rtl/processor_templates/` and optional `rtl/system_integration/`.
5. For each peripheral: copy the specific peripheral `.vhd` plus `neorv32_package.vhd`.
6. For each test setup: copy core files plus the specific test-setup `.vhd` from `rtl/test_setups/`.
7. Optionally copy `sw/`, `sim/`, `docs/` if requested.
8. If `--verify`: run `ghdl -i` + `ghdl -m` + optional `ghdl -r` on each design; write `verification_report.txt`.

## Available Designs

### CPU Core Configurations (`rtl_designs/neorv32_cpu/`)

| Design name | Description | Config type |
|-------------|-------------|-------------|
| `neorv32_minimal` | Minimal NEORV32 RISC-V processor | minimal |
| `neorv32_standard` | Standard NEORV32 RISC-V processor | standard |
| `neorv32_fpu` | NEORV32 with FPU support | fpu |
| `neorv32_debug` | NEORV32 with debug features (OCD/JTAG) | debug |
| `neorv32_complete` | Complete NEORV32 RISC-V system | complete |

### SoC Designs (`rtl_designs/neorv32_soc/`)

| Design name | Template file | Description |
|-------------|--------------|-------------|
| `neorv32_soc_minimal` | `neorv32_ProcessorTop_Minimal.vhd` | Minimal SoC |
| `neorv32_soc_bootloader` | `neorv32_ProcessorTop_MinimalBoot.vhd` | SoC with bootloader |
| `neorv32_soc_up5k` | `neorv32_ProcessorTop_UP5KDemo.vhd` | SoC for UP5K FPGA demo |

### Peripheral Modules (`rtl_designs/neorv32_peripherals/`)

| Directory | Source file | Description |
|-----------|------------|-------------|
| `uart/` | `neorv32_uart.vhd` | UART Controller |
| `spi/` | `neorv32_spi.vhd` | SPI Controller |
| `gpio/` | `neorv32_gpio.vhd` | GPIO Controller |
| `pwm/` | `neorv32_pwm.vhd` | PWM Controller |
| `timer/` | `neorv32_gptmr.vhd` | General Purpose Timer |
| `trng/` | `neorv32_trng.vhd` | True Random Number Generator |
| `neoled/` | `neorv32_neoled.vhd` | NeoPixel LED Controller |
| `twi/` | `neorv32_twi.vhd` | Two-Wire Interface (I2C) |
| `onewire/` | `neorv32_onewire.vhd` | One-Wire Interface |
| `dma/` | `neorv32_dma.vhd` | Direct Memory Access Controller |

### Test Setups (`rtl_designs/neorv32_tests/`)

| Directory | Test file | Description |
|-----------|----------|-------------|
| `test_approm/` | `neorv32_test_setup_approm.vhd` | Application ROM test setup |
| `test_bootloader/` | `neorv32_test_setup_bootloader.vhd` | Bootloader test setup |
| `test_debugger/` | `neorv32_test_setup_on_chip_debugger.vhd` | On-chip debugger test setup |

**Total: 21 distinct RTL designs** (5 CPU + 3 SoC + 10 peripherals + 3 test setups).

## Output Organization

Canonical dataset root:

```text
datasets/neorv32-vhdl/<8-character-upstream-commit>/
```

Layout:

```text
datasets/neorv32-vhdl/<commit>/
├── logs/
│   ├── main.log                    # Cumulative log across runs
│   └── session_YYYYMMDD_HHMMSS.log # Per-run session log
├── rtl_designs/
│   ├── neorv32_cpu/                # CPU core configurations (5 variants)
│   │   ├── neorv32_minimal/
│   │   │   ├── *.vhd               # VHDL source files
│   │   │   ├── config.yaml         # Build metadata
│   │   │   ├── filelist.f          # Absolute paths for EDA tools
│   │   │   ├── verification_report.txt
│   │   │   └── build/              # GHDL elaboration artifacts
│   │   ├── neorv32_standard/
│   │   ├── neorv32_fpu/
│   │   ├── neorv32_debug/
│   │   └── neorv32_complete/
│   ├── neorv32_soc/                # SoC designs (3 variants)
│   ├── neorv32_peripherals/        # Peripheral modules (10 variants)
│   └── neorv32_tests/              # Test setups (3 variants)
├── software/                       # Optional: --include-sw
├── simulation/                     # Optional: --include-sim
├── examples/                       # Optional: --with-examples
└── documentation/                  # Optional: --with-docs
```

## Dataset Structure

### Per-design directory contents

Each `rtl_designs/<category>/<design>/` directory contains:

- **`*.vhd`**: VHDL source files (copied from `tools/neorv32/rtl/`)
- **`config.yaml`**: Design metadata (name, category, VHDL file count, line count, ISA extensions, flags for FPU/debug/cache/UART/SPI/ethernet)
- **`filelist.f`**: Absolute paths to all `.vhd` files in correct compilation order
- **`neorv32_package.vhd`**: Common types and constants (included in peripheral designs)
- **`verification_report.txt`**: GHDL import/analysis/simulation results (if `--verify`)
- **`build/`**: GHDL compilation artifacts (`.cf` library, elaboration objects)

### `config.yaml` format

```yaml
design_name: neorv32_minimal
design_category: neorv32_cpu
description: "Minimal NEORV32 RISC-V processor"
generation_date: <timestamp>
source_repository: neorv32
vhdl_files: 15
total_lines: 2847
synthesis_ready: true
fpu_enabled: false
debug_enabled: false
cache_enabled: false
uart_enabled: false
spi_enabled: false
ethernet_enabled: false
target_frequency: "100MHz"
architecture: "RISC-V"
isa_extensions: "RV32I/M/A/C/B/U/Zicsr/Zifencei"
```

## Usage Examples

```bash
# One-shot pipeline
./scripts/run_neorv32_vhdl.sh

# Manual path: source env, install, generate
source ./scripts/neorv32_env.sh
./scripts/install_neorv32_vhdl.sh
./scripts/generate_neorv32_vhdl.sh

# Full verified run
./scripts/generate_neorv32_vhdl.sh --install-ghdl --verify

# Include software and examples
./scripts/generate_neorv32_vhdl.sh --include-sw --with-examples --with-docs

# Check source availability
./scripts/generate_neorv32_vhdl.sh --check

# Monitor progress
tail -f datasets/neorv32-vhdl/*/logs/main.log

# List all exported designs
find datasets/neorv32-vhdl/*/rtl_designs -name "config.yaml" -exec dirname {} \;

# Use filelist with GHDL
ghdl -i --std=08 -f datasets/neorv32-vhdl/*/rtl_designs/neorv32_cpu/neorv32_minimal/filelist.f
```

## Performance Expectations

| Mode | Time | RAM | Disk |
|------|------|-----|------|
| Full organization (no verify) | 2–3 min | ~2 GB | ~10 MB |
| With GHDL verification | 5–10 min | 4–8 GB | ~10 MB |
| With software + examples | 3–5 min | ~3 GB | ~50 MB |
| GHDL build from source | 10–30 min | ~4 GB | ~500 MB |

## Troubleshooting

| Symptom | Likely cause | What to try |
|---------|-------------|-------------|
| `NEORV32 source directory not found` | Submodule not initialized | `git submodule update --init --recursive tools/neorv32` |
| `GHDL not found` | GHDL not built/installed | `./scripts/install_neorv32_vhdl.sh` or `./scripts/generate_neorv32_vhdl.sh --install-ghdl` |
| `gnatmake not found` during GHDL build | GNAT Ada toolchain missing | On Debian/Ubuntu: `sudo apt-get install gnat`; on RHEL 9: see EPEL/RPM note above |
| `GHDL synthesis not available` | mcode backend or GHDL < 3.0 | `./scripts/install_neorv32_vhdl.sh --force-ghdl` to rebuild with LLVM backend |
| Verification import errors | VHDL std version mismatch | GHDL uses `--std=08`; check GHDL version with `ghdl --version` |
| Permission errors on scripts | Scripts not executable | `chmod +x scripts/generate_neorv32_vhdl.sh` |

Verify manually after upstream or script changes:

```bash
./scripts/install_neorv32_vhdl.sh --help
./scripts/generate_neorv32_vhdl.sh --check
source ./scripts/neorv32_env.sh
```
