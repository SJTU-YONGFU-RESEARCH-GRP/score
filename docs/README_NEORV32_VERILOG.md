# NEORV32 Verilog RTL Organization Documentation

[![repo stnolting/neorv32-verilog](https://img.shields.io/badge/repo-stnolting%2Fneorv32--verilog-blue)](https://github.com/stnolting/neorv32-verilog)
[![repo stnolting/neorv32](https://img.shields.io/badge/upstream-stnolting%2Fneorv32-lightgrey)](https://github.com/stnolting/neorv32)

This document covers the VHDL→Verilog conversion flow for NEORV32 in SCORE. The Verilog flow uses `tools/neorv32-verilog` (a separate clone of [stnolting/neorv32-verilog](https://github.com/stnolting/neorv32-verilog)) alongside the `tools/neorv32` submodule, and exports converted Verilog designs under `datasets/neorv32-verilog/<commit>/`. For the native VHDL flow, see `docs/README_NEORV32_VHDL.md`.

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

The NEORV32 Verilog flow performs VHDL-to-Verilog synthesis via GHDL's `--out=verilog` (synthesis) backend. GHDL 3.0+ is required. The installer (`install_neorv32_verilog.sh`) is a thin wrapper over `install_neorv32_vhdl.sh` with `NEORV32_INSTALL_PROFILE=verilog`; it additionally clones/updates `tools/neorv32-verilog` and runs a conversion smoke test.

### Key Features

- **GHDL synthesis backend**: Converts NEORV32 VHDL RTL to Verilog using `ghdl synth --out=verilog`. Requires **GHDL ≥ 3.0** with LLVM backend.
- **neorv32-verilog helper repo**: `tools/neorv32-verilog` provides `src/convert.sh`, `src/neorv32_verilog_wrapper.vhd`, and simulation files (`sim/`).
- **Icarus Verilog verification**: Optional Icarus-based compilation and simulation of the converted `neorv32_verilog_wrapper.v`.
- **Three Verilog variants**: minimal, standard, and complete conversions per run.
- **Smoke test on install**: `install_neorv32_verilog.sh` runs a short conversion as a post-install sanity check.

### Scripts Overview

1. **`./scripts/install_neorv32_verilog.sh`**: Sets `NEORV32_INSTALL_PROFILE=verilog`, then `exec`s `install_neorv32_vhdl.sh`. The VHDL installer recognizes the profile: clones/updates `tools/neorv32-verilog`, writes `scripts/neorv32_env.sh`, and runs the conversion smoke test.
2. **`./scripts/generate_neorv32_verilog.sh`**: Converts NEORV32 VHDL to Verilog for three configured variants (minimal, standard, complete) and exports results under `datasets/neorv32-verilog/<commit>/rtl_designs/neorv32_verilog/`.
3. **`./scripts/run_neorv32_verilog.sh`**: End-to-end orchestration: submodule update → install → generate.
4. **`source ./scripts/neorv32_env.sh`**: Adds project-local GHDL (from `tools/ghdl-install/bin`) and Icarus Verilog to PATH; sourced by both install and generate scripts.

## Installation Script

### Overview

`install_neorv32_verilog.sh` is a one-line wrapper that sets `NEORV32_INSTALL_PROFILE=verilog` and delegates to `install_neorv32_vhdl.sh`. The combined installer performs all VHDL-flow steps **plus** the Verilog-specific extras:

1. Clone or pull `tools/neorv32-verilog` (URL: `NEORV32_VERILOG_URL`, default `git@github.com:stnolting/neorv32-verilog.git`).
2. Initialize the nested `neorv32` submodule inside `tools/neorv32-verilog`.
3. Verify `src/neorv32_verilog_wrapper.vhd` and `src/convert.sh` are present.
4. Run a conversion smoke test: copy wrapper + `convert.sh` to a temporary directory under `datasets/neorv32-verilog/<commit>/.install_smoke/`, run `convert.sh`, verify `neorv32_verilog_wrapper.v` was produced.

### Basic Usage

```bash
# First-time full install
./scripts/install_neorv32_verilog.sh

# Skip system packages
./scripts/install_neorv32_verilog.sh --skip-deps

# Clean rebuild of GHDL
./scripts/install_neorv32_verilog.sh --clean

# Force GHDL rebuild
./scripts/install_neorv32_verilog.sh --force-ghdl

# Parallel build jobs
./scripts/install_neorv32_verilog.sh --jobs 8

# Use alternate neorv32-verilog URL (e.g. HTTPS when SSH keys unavailable)
NEORV32_VERILOG_URL=https://github.com/stnolting/neorv32-verilog.git \
  ./scripts/install_neorv32_verilog.sh
```

### Command-Line Options

All options are the same as `install_neorv32_vhdl.sh` (see `README_NEORV32_VHDL.md`):

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help (shows Verilog-profile header) |
| `--skip-ghdl` | Skip GHDL installation |
| `--skip-iverilog` | Skip Icarus Verilog installation |
| `--skip-deps` | Skip system package-manager steps |
| `--skip-neorv32-submodule` | Skip `git submodule update` for `tools/neorv32` |
| `--only-neorv32-submodule` | Only init/update `tools/neorv32`, then exit |
| `--clean` | Clean previous builds |
| `--force-ghdl` | Force rebuild GHDL |
| `--jobs N` | Parallel build jobs (default: `nproc`) |

### Environment Variables

| Variable | Default | Description |
|----------|---------|-------------|
| `NEORV32_VERILOG_URL` | `git@github.com:stnolting/neorv32-verilog.git` | Clone URL for `tools/neorv32-verilog` |

### GHDL Version Requirement

**GHDL ≥ 3.0 with LLVM backend is required** for VHDL→Verilog synthesis (`--out=verilog`). The installer checks for synthesis support with `ghdl help synth`. If the system GHDL is too old or uses the mcode backend, it builds GHDL from source (clones `github.com:ghdl/ghdl.git`, checks out the latest tag, configures with `--with-llvm-config`, installs to `tools/ghdl-install`).

## Generation Script

### Overview

`generate_neorv32_verilog.sh` converts NEORV32 VHDL to Verilog for three configured variants. For each variant it:

1. Copies `src/neorv32_verilog_wrapper.vhd` to a temp directory.
2. Runs `src/convert.sh` (which calls `ghdl synth --out=verilog`) with `NEORV32_RTL` and `SRC_FOLDER` set to point at `tools/neorv32-verilog`.
3. Copies the resulting `neorv32_verilog_wrapper.v` and saves `module_interface.txt`.
4. Writes `config.yaml` and `filelist.f` for the design.
5. Optionally runs Icarus Verilog compilation and simulation if `--install-iverilog --verify` are passed.

Dataset root: `datasets/neorv32-verilog/<8-char-sha-of-tools/neorv32-verilog>/`.

### Basic Usage

```bash
# Basic conversion (all 3 variants)
./scripts/generate_neorv32_verilog.sh

# Check prerequisites and source availability
./scripts/generate_neorv32_verilog.sh --check

# Install GHDL and convert
./scripts/generate_neorv32_verilog.sh --install-ghdl

# Include simulation files and run Icarus verification
./scripts/generate_neorv32_verilog.sh --include-sim --install-iverilog --verify

# Custom simulation timeout
./scripts/generate_neorv32_verilog.sh --install-iverilog --verify --sim-timeout 100ms

# Debug mode
./scripts/generate_neorv32_verilog.sh --debug
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--check` | Check prerequisites and GHDL version only |
| `--debug` | Enable debug logging |
| `--verilog-only` | Copy only Verilog designs (skip VHDL wrapper) |
| `--include-sim` | Copy simulation files from `tools/neorv32-verilog/sim/` |
| `--with-examples` | Include example applications |
| `--with-docs` | Include documentation |
| `--install-ghdl` | Auto-install GHDL before converting |
| `--install-iverilog` | Auto-install Icarus Verilog before verifying |
| `--verify` | Run Icarus Verilog compilation and optional simulation |
| `--sim-timeout TIME` | Simulation timeout (default: `10ms`) |

### Configured Variants

The three Verilog conversion variants are hardcoded in `NEORV32_VERILOG_CONFIGS`:

| Design name | Description | Config type |
|-------------|-------------|-------------|
| `neorv32_verilog_minimal` | Minimal NEORV32 RISC-V processor in Verilog | minimal |
| `neorv32_verilog_standard` | Standard NEORV32 RISC-V processor in Verilog | standard |
| `neorv32_verilog_complete` | Complete NEORV32 RISC-V system in Verilog | complete |

All three variants use the same `src/neorv32_verilog_wrapper.vhd` and `src/convert.sh`; the variant names differentiate the output directories and metadata only. The actual parameterization difference lies in the upstream `neorv32-verilog` repo configuration.

### Verification (Icarus Verilog)

When `--verify` is passed (requires `--install-iverilog` or an existing `iverilog`):

1. Copy simulation files from `datasets/neorv32-verilog/<commit>/simulation/` to `build/`.
2. Copy `neorv32_verilog_wrapper.v` to `build/`.
3. Run: `iverilog -o neorv32-verilog-sim testbench.v uart_sim_receiver.v neorv32_verilog_wrapper.v`
4. Optionally run: `vvp neorv32-verilog-sim` (with 60s timeout).
5. Write `verification_report.txt` in the design directory.

## Available Designs

### Verilog Designs (`rtl_designs/neorv32_verilog/`)

| Design name | Output file | Description |
|-------------|------------|-------------|
| `neorv32_verilog_minimal` | `neorv32_verilog_wrapper.v` | Minimal NEORV32 in Verilog |
| `neorv32_verilog_standard` | `neorv32_verilog_wrapper.v` | Standard NEORV32 in Verilog |
| `neorv32_verilog_complete` | `neorv32_verilog_wrapper.v` | Complete NEORV32 in Verilog |

**Total: 3 Verilog designs per run.**

Each design directory also contains:
- `neorv32_verilog_wrapper.vhd` — original VHDL wrapper
- `convert.sh` — the conversion script used
- `module_interface.txt` — extracted Verilog module port list
- `config.yaml` — metadata
- `filelist.f` — file list for EDA tools

## Output Organization

Canonical dataset root:

```text
datasets/neorv32-verilog/<8-character-neorv32-verilog-commit>/
```

Layout:

```text
datasets/neorv32-verilog/<commit>/
├── logs/
│   ├── main.log
│   └── session_YYYYMMDD_HHMMSS.log
├── rtl_designs/
│   └── neorv32_verilog/            # 3 converted Verilog designs
│       ├── neorv32_verilog_minimal/
│       │   ├── neorv32_verilog_wrapper.v
│       │   ├── neorv32_verilog_wrapper.vhd
│       │   ├── convert.sh
│       │   ├── module_interface.txt
│       │   ├── config.yaml
│       │   ├── filelist.f
│       │   ├── verification_report.txt
│       │   └── build/               # Icarus compilation artifacts
│       ├── neorv32_verilog_standard/
│       └── neorv32_verilog_complete/
├── simulation/                      # Optional: --include-sim
│   ├── testbench.v
│   ├── uart_sim_receiver.v
│   ├── Makefile
│   ├── iverilog_sim.sh
│   └── simulation_config.yaml
└── .install_smoke/                  # Install smoke test artifacts
```

## Dataset Structure

### Per-design `config.yaml` format

```yaml
design_name: neorv32_verilog_minimal
design_category: neorv32_verilog
description: "Minimal NEORV32 RISC-V processor in Verilog"
generation_date: <timestamp>
source_repository: neorv32-verilog
vhdl_files: 1
verilog_files: 1
total_lines: <line count>
synthesis_ready: true
conversion_method: "GHDL synthesis"
target_frequency: "100MHz"
architecture: "RISC-V"
isa_extensions: "RV32I/M/A/C/B/U/Zicsr/Zifencei"
conversion_tool: "GHDL synth"
```

### `simulation_config.yaml` (when `--include-sim`)

```yaml
simulation_type: "Icarus Verilog / Verilator"
testbench: "testbench.v"
uart_receiver: "uart_sim_receiver.v"
makefile: "Makefile"
simulation_script: "iverilog_sim.sh"
description: "NEORV32 Verilog simulation testbench"
```

## Usage Examples

```bash
# One-shot pipeline
./scripts/run_neorv32_verilog.sh

# Manual path: source env, install, generate
source ./scripts/neorv32_env.sh
./scripts/install_neorv32_verilog.sh
./scripts/generate_neorv32_verilog.sh

# Full verified run with simulation
./scripts/generate_neorv32_verilog.sh --install-ghdl --install-iverilog --include-sim --verify

# Check GHDL version compatibility
./scripts/generate_neorv32_verilog.sh --check

# Inspect the generated Verilog module interface
cat datasets/neorv32-verilog/*/rtl_designs/neorv32_verilog/neorv32_verilog_minimal/module_interface.txt

# Compile with Icarus manually
iverilog -o sim datasets/neorv32-verilog/*/rtl_designs/neorv32_verilog/neorv32_verilog_minimal/neorv32_verilog_wrapper.v
```

## Performance Expectations

| Phase | Time | Notes |
|-------|------|-------|
| GHDL build from source (if needed) | 10–30 min | LLVM backend required |
| Install smoke test conversion | ~30–120 s | Depends on GHDL LLVM speed |
| Per-variant conversion | ~30–120 s | `ghdl synth` of NEORV32 VHDL |
| Full 3-variant generation | 2–6 min | Sequential; all share same GHDL invocation pattern |
| With Icarus verification | +1–2 min | Compilation + optional simulation |

Disk usage: `datasets/neorv32-verilog/` is small (~1–5 MB for the three `.v` outputs plus logs); the GHDL build tree (`tools/ghdl/`, `tools/ghdl-install/`) can reach ~500 MB–1 GB.

## Troubleshooting

| Symptom | Likely cause | What to try |
|---------|-------------|-------------|
| `GHDL version X.X is too old` | System GHDL < 3.0 or mcode backend | `./scripts/install_neorv32_verilog.sh --force-ghdl` |
| `--out=verilog option not recognized` | GHDL < 3.0 | Rebuild GHDL with LLVM: `--force-ghdl` |
| `NEORV32-Verilog source directory not found` | `tools/neorv32-verilog` not cloned | Run `./scripts/install_neorv32_verilog.sh` |
| `Conversion script not found` | `tools/neorv32-verilog/src/convert.sh` missing | Re-run install; check `NEORV32_VERILOG_URL` is reachable |
| NEORV32 submodule empty inside `neorv32-verilog` | Nested submodule not initialized | `cd tools/neorv32-verilog && git submodule update --init --recursive` |
| Icarus compilation fails | Simulation files not present | Run with `--include-sim` before `--verify` |
| SSH clone fails for `neorv32-verilog` | No SSH key configured | `NEORV32_VERILOG_URL=https://github.com/stnolting/neorv32-verilog.git ./scripts/install_neorv32_verilog.sh` |

Verify manually after upstream or script changes:

```bash
./scripts/install_neorv32_verilog.sh --help
./scripts/generate_neorv32_verilog.sh --check
source ./scripts/neorv32_env.sh
```
