# Gemmini RTL Organization Documentation

![License: BSD-3-Clause](https://img.shields.io/badge/license-BSD--3--Clause-green)

This document provides repository-grounded information about the SCORE Gemmini flow, generated artifacts under `datasets/gemmini/<commit>/`, and current verification status.

## Table of Contents

- [Overview](#overview)
- [Licensing](#licensing)
- [Installation Script](#installation-script)
- [Generation Script](#generation-script)
- [Available Designs](#available-designs)
- [Output Organization](#output-organization)
- [Dataset Structure](#dataset-structure)
- [Usage Examples](#usage-examples)
- [Performance Expectations](#performance-expectations)
- [Troubleshooting](#troubleshooting)

## Overview

SCORE Gemmini uses a workshop-style setup (`datasets/gemmini/workshop/`) that hosts Chipyard, conda tooling, and a writable Gemmini copy. Generation writes commit-scoped outputs into `datasets/gemmini/<commit>/`.

### Key Features

- **Commit-scoped dataset path**: current run writes under `datasets/gemmini/8c3f9923/`.
- **Workshop environment reuse**: Chipyard and conda environment are reused from `datasets/gemmini/workshop/`.
- **Config-matrix generation**: `generate_gemmini.sh` can build multiple config classes (default/FP32/FP16/BF16/DSE/custom).
- **Structured failure reporting**: current flow now writes `gemmini_summary.txt` and `verification/verification_summary.txt`.
- **Fallback RTL capture**: if config build fails, per-config fallback RTL wrapper files are still captured in `rtl_configs/`.

### Scripts Overview

1. `./scripts/install_gemmini.sh`: installs/validates Java, SBT, Verilator, Chipyard, and environment hooks.
2. `./scripts/generate_gemmini.sh`: stages Gemmini workspace, runs selected config builds, and writes dataset outputs.
3. `./scripts/run_gemmini.sh`: orchestrates submodule setup + install + generate.

### Architecture Overview

- Upstream Gemmini is a generator integrated through Chipyard.
- In the current SCORE run, verification is tied to Chipyard simulator `make CONFIG=...` builds.
- Current dataset generation produced fallback RTL organization, but simulator builds failed (details in verification/log files below).

See `tools/gemmini/README.md` and the Chipyard workspace under `datasets/gemmini/workshop/chipyard/` for upstream context.

## Licensing

Primary Gemmini repository license is BSD-3-Clause (`tools/gemmini/LICENSE`).

Generated dataset artifacts in `datasets/gemmini/<commit>/` are build outputs and logs derived from upstream-licensed sources.

## Installation Script

### Overview

`./scripts/install_gemmini.sh` provisions Gemmini prerequisites and Chipyard workspace, including Miniconda installation under the workshop path when conda is not already available.

### Basic Usage

```bash
# Standard installation
./scripts/install_gemmini.sh

# Auto mode without prompts
./scripts/install_gemmini.sh --auto

# Validate only
./scripts/install_gemmini.sh --check

# Skip system package manager installs
./scripts/install_gemmini.sh --no-system-deps
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help |
| `--check` | Check status only |
| `--skip-java` | Skip Java install |
| `--skip-sbt` | Skip SBT install |
| `--skip-verilator` | Skip Verilator install |
| `--skip-chipyard` | Skip Chipyard install/setup |
| `--skip-deps` | Skip dependency package install |
| `--no-system-deps` | Disable apt/dnf/pacman/brew actions |
| `--clean` | Clean installation mode |
| `--force` | Force reinstall |
| `--auto` | Non-interactive installation |
| `--jobs N` | Set parallel build jobs |

## Generation Script

### Overview

`./scripts/generate_gemmini.sh` creates the commit-scoped dataset directory, builds selected Gemmini configuration sets through Chipyard/Verilator flow, and captures logs/artifacts.

### Basic Usage

```bash
# Default generation (all config classes enabled)
./scripts/generate_gemmini.sh

# Check prerequisites only
./scripts/generate_gemmini.sh --check

# Limit to default configs only
./scripts/generate_gemmini.sh --disable-fp32 --disable-fp16 --disable-bf16 --disable-dse --disable-custom --sequential

# RTL-only organization mode (no compile)
./scripts/generate_gemmini.sh --rtl-only
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help |
| `--check` | Prerequisite check only |
| `--simulator=SIM` | Select simulator (`vlt`, `vcs`, `msm`, etc.) |
| `--list-simulators` | Show simulator matrix |
| `--disable-fp32` | Disable FP32 config group |
| `--disable-fp16` | Disable FP16 config group |
| `--disable-bf16` | Disable BF16 config group |
| `--disable-dse` | Disable DSE config group |
| `--disable-custom` | Disable custom config group |
| `--rtl-only` | Skip compile and only organize RTL outputs |
| `--parallel=N` | Parallel config jobs |
| `--sequential` | Force sequential mode |

### Current Verification Outcome

Latest generated dataset (`datasets/gemmini/8c3f9923/`) reports:

- `verification/verification_summary.txt`: `FAIL`
- Successful configurations: `0`
- Failed configurations: `3`
- Common failure in config logs: missing target under `generators/gemmini/carfield/.bender/.../spatz.../testharness.sv`

## Available Designs

Current dataset includes default config outputs:

- `GemminiRocketConfig`
- `GemminiRocketConfig_16x16`
- `GemminiRocketConfig_32x32`

These were captured through fallback RTL organization because compile/verification failed for all three in the current run.

## Output Organization

Canonical dataset root is `datasets/gemmini/<commit>/`. Current instance:

```text
datasets/gemmini/8c3f9923/
├── gemmini_summary.txt
├── build_artifacts/
├── logs/
│   ├── main.log
│   ├── session_*.log
│   └── GemminiRocketConfig*_*.log
├── rtl_configs/
│   └── default/
│       ├── GemminiRocketConfig/
│       ├── GemminiRocketConfig_16x16/
│       └── GemminiRocketConfig_32x32/
├── simulation_models/
└── verification/
    └── verification_summary.txt
```

## Dataset Structure

- `gemmini_summary.txt`: top-level dataset metadata and success/failure counts.
- `verification/verification_summary.txt`: verification rollup and log pointer.
- `logs/`: per-configuration build logs and session logs.
- `rtl_configs/default/*`: per-config fallback RTL wrappers and file lists from current run.
- `simulation_models/`: reserved output location for simulator artifacts.

## Usage Examples

```bash
# End-to-end flow
./scripts/run_gemmini.sh

# Skip install and run generation only
./scripts/run_gemmini.sh --skip-install

# Generate only default config class
./scripts/run_gemmini.sh --skip-install -- --disable-fp32 --disable-fp16 --disable-bf16 --disable-dse --disable-custom --sequential
```

## Performance Expectations

- Chipyard-backed config builds are heavyweight; runtime depends on toolchain and cache state.
- Parallel mode can improve throughput but increases memory/CPU pressure.
- `--rtl-only` is useful for quick structure generation when simulator builds are failing.

## Troubleshooting

- **Symptom**: `RISCV is unset` in config build logs.
  - **Fix**: ensure Chipyard conda env loads successfully (`source datasets/gemmini/workshop/chipyard/env.sh` via script flow).
- **Symptom**: missing `.../carfield/.bender/.../spatz.../testharness.sv` target.
  - **Fix**: inspect `datasets/gemmini/8c3f9923/logs/GemminiRocketConfig*_*.log`; this currently blocks Verilator-backed config verification.
- **Symptom**: missing workshop venv path.
  - **Fix**: current script now falls back to active shell environment; ensure Java/SBT/conda/RISCV toolchain remain on PATH.
