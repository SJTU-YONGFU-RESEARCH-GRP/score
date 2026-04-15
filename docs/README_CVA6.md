# CVA6 RTL Organization Documentation

![License: Solderpad Hardware License v0.51](https://img.shields.io/badge/license-Solderpad%20Hardware%20License%20v0.51-green)

This document provides comprehensive information about SCORE CVA6 scripts and generated dataset artifacts under `datasets/cva6/<commit>/`, grounded in repository scripts, upstream sources, and generated verification results.

## Table of Contents

- [Overview](#overview)
- [SoC architecture](#soc-architecture)
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

SCORE wraps CVA6 dataset generation into a reproducible workflow: prepare checkout, install host dependencies, run Bender-based dependency closure checks, execute Verilator smoke verification, and snapshot the source workspace under `datasets/cva6/<commit>/`.

### Key Features

- **Commit-scoped dataset root**: Output path pattern is `datasets/cva6/<commit>/` (example: `datasets/cva6/4c02b24f/`).
- **Dependency closure validation**: Verifies `Bender.lock` packages with `bender path`.
- **Deterministic RTL verification slice**: Runs `bender script flist-plus -p common_cells` before Verilator.
- **Verilator verification evidence**: Includes lint, elaboration (`--binary`), and full testbench simulation status.
- **Reproducible source snapshot**: Stores staged upstream tree and Bender checkouts under `source_snapshot/`.

### Scripts Overview

1. `./scripts/install_cva6.sh`: Installs required OS tools, Bender, and optional Verilator/C++ toolchain.
2. `./scripts/generate_cva6.sh`: Stages sources, runs checkout/update, executes verification, and writes dataset artifacts.
3. `./scripts/run_cva6.sh`: End-to-end orchestration across submodule setup, install, and generate steps.
4. `./scripts/cva6_env.sh`: Optional environment hook sourced by run/generate scripts when available.

### Architecture Overview

- Upstream CVA6 is described as a 6-stage, single-issue, in-order RISC-V CPU core.
- The upstream tree also includes `corev_apu` platform content and verification infrastructure.
- SCORE verification for this dataset focuses on a common-cells stream FIFO slice for deterministic smoke checks, not full CVA6 system closure.

See `tools/cva6/README.md` for upstream project context and full simulation flows.

## SoC architecture

This section summarizes architecture signals explicitly documented in `tools/cva6/README.md` and distinguishes that from the SCORE verification scope.

### Block-level structure

- Upstream README describes CVA6 as a core-focused repository with separate top-level areas such as `core`, `corev_apu`, `common`, and `verif`.
- The repository structure distinguishes CVA6 core sources from COREV-APU FPGA platform sources.
- SCORE dataset generation snapshots the complete tree but verifies a `common_cells/stream_fifo` slice through Bender and Verilator smoke tests.

### Buses and connectivity

Detailed bus/interconnect topology is not explicitly enumerated in SCORE `cva6_summary.txt` or `verification/verification_summary.txt`.

### Memory map

No memory-map artifacts are emitted in the SCORE cva6 dataset summary path by default. For upstream architecture detail, refer to `tools/cva6/README.md` and associated core documentation.

## Licensing

Based on license files under `tools/cva6/`:

- Primary hardware/source license: Solderpad Hardware License v0.51 (`tools/cva6/LICENSE`).
- Additional included license files:
  - Apache License 2.0 (`tools/cva6/LICENSE.SiFive`)
  - BSD 3-Clause (`tools/cva6/LICENSE.Berkeley`)

Generated dataset artifacts under `datasets/cva6/<commit>/` are snapshots and verification outputs derived from upstream-licensed sources.

## Installation Script

### Overview

`./scripts/install_cva6.sh` installs baseline system tools for dataset generation, verifies Bender availability, and optionally prepares Verilator plus C++ compiler dependencies used in verification.

### Basic Usage

```bash
# Standard installation
./scripts/install_cva6.sh

# Skip system package installation
./scripts/install_cva6.sh --no-system-deps

# Skip Bender installation
./scripts/install_cva6.sh --skip-bender

# Skip Verilator and C++ packages
./scripts/install_cva6.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help |
| `--no-system-deps` | Skip distro package installation |
| `--skip-bender` | Skip Bender download/verification |
| `--no-verilator` | Skip Verilator and C++ package install |

### Dependencies Installed

| Component | Version | Purpose |
|-----------|---------|---------|
| Core tools (`git`, `curl/wget`, `tar`, `python3`, `rsync`) | Not explicit in script | Required by install/generate pipeline |
| Bender | Latest release at install time | Dependency resolution and filelist generation |
| Verilator + C++ toolchain (default path) | Not explicit in script | Lint/elaboration/simulation checks |

### Supported Operating Systems

- Debian/Ubuntu (`apt-get`)
- Fedora/RHEL/Amazon Linux (`dnf` or `yum`)
- Arch Linux (`pacman`)
- openSUSE (`zypper`)
- macOS (`brew`)

### Installation Process

1. Detect host OS family and package manager.
2. Install required system dependencies (unless skipped).
3. Validate required runtime tools are present.
4. Install Bender when absent (unless skipped).
5. Validate Verilator/C++ toolchain availability when enabled.

## Generation Script

### Overview

`./scripts/generate_cva6.sh` stages CVA6 sources into `datasets/cva6/<commit>/source_snapshot/`, runs Bender checkout/update, executes verification checks, and writes summary and verification outputs.

### Basic Usage

```bash
# Standard generation flow
./scripts/generate_cva6.sh

# Reuse existing Bender checkout state
./scripts/generate_cva6.sh --skip-checkout

# Use bender update instead of checkout
./scripts/generate_cva6.sh --bender-update

# Verification only
./scripts/generate_cva6.sh --verify-only

# Skip Verilator checks
./scripts/generate_cva6.sh --skip-verilator

# Keep lint + elaboration but skip full simulation
./scripts/generate_cva6.sh --no-full-sim
```

### Command-Line Options

| Option | Description | Default |
|--------|-------------|---------|
| `-h, --help` | Show help | N/A |
| `--skip-checkout` | Skip Bender checkout/update | Disabled |
| `--bender-update` | Run `bender update` instead of checkout | Disabled |
| `--no-verify` | Skip all verification stages | Disabled |
| `--verify-only` | Only run verification stage | Disabled |
| `--skip-verilator` | Skip Verilator lint/elaboration/simulation | Disabled |
| `--no-full-sim` | Skip clocked full simulation | Disabled |

### Generation Process

1. Resolve current `tools/cva6` commit and dataset output paths.
2. Stage source tree into `source_snapshot/` via `rsync`.
3. Run `bender checkout` (default) or `bender update`.
4. Run verification checks:
   - lockfile package resolution (`bender path`),
   - `bender script flist-plus -p common_cells`,
   - Verilator lint on `stream_fifo`,
   - Verilator `--binary` elaboration smoke,
   - full simulation with `tb_stream_fifo` (default).
5. Write `verification/verification_summary.txt`.
6. Write `cva6_summary.txt` with tool versions and verification rollup.

## Available Designs

Current SCORE cva6 output is a commit-scoped source snapshot plus verification bundle; this dataset does not include a categorized `rtl_designs/` design matrix.

- Validated dataset instance: `datasets/cva6/4c02b24f/`
- Verification rollup: all listed stages PASS in `verification/verification_summary.txt`.

## Output Organization

The canonical dataset root is `datasets/cva6/<commit>/`. Current generated instance:

```text
datasets/cva6/4c02b24f/
??? cva6_summary.txt
??? logs/
?   ??? generate_20260415_113027.log
?   ??? generate_20260415_162717.log
??? source_snapshot/
?   ??? Bender.lock
?   ??? Bender.yml
?   ??? core/
?   ??? corev_apu/
?   ??? common/
?   ??? verif/
?   ??? vendor/
?   ??? ... (additional upstream directories and files)
??? verification/
    ??? verification_summary.txt
    ??? bender_lock_path_check.txt
    ??? bender_script_common_cells.f
    ??? bender_common_cells_lint.f
    ??? verilator_lint_common_cells_stream_fifo.log
    ??? verilator_binary_stream_fifo.log
    ??? verilator_sim_stream_fifo.log
    ??? verilator_obj_stream_fifo/
    ??? verilator_obj_tb_stream_fifo/
```

## Dataset Structure

- `cva6_summary.txt`: dataset metadata, tool versions, and top-level verification status.
- `logs/`: generation logs for each run invocation.
- `source_snapshot/`: staged copy of upstream `tools/cva6` tree for reproducibility.
- `verification/verification_summary.txt`: consolidated PASS/SKIPPED verification status.
- `verification/bender_*`: lockfile/path/filelist evidence for dependency closure.
- `verification/verilator_*`: lint, elaboration, simulation logs and generated object directories.

## Usage Examples

```bash
# End-to-end flow
./scripts/run_cva6.sh

# Skip submodule and install, only regenerate
./scripts/run_cva6.sh --skip-submodule --skip-install -- --skip-checkout

# Verification-only refresh
./scripts/run_cva6.sh --skip-submodule --skip-install -- --verify-only

# Faster checks by skipping full simulation
./scripts/run_cva6.sh --skip-submodule --skip-install -- --no-full-sim
```

## Performance Expectations

- First runs are typically slower due to Bender checkout and dependency materialization.
- Verilator full simulation takes longer than lint and elaboration-only checks.
- `--verify-only` and `--no-full-sim` are useful for faster iteration loops.

## Troubleshooting

- **Symptom**: `tools/cva6` missing.
  - **Likely cause**: Submodule not initialized.
  - **Fix**: Run `git submodule update --init --recursive tools/cva6`.
- **Symptom**: `bender` not found.
  - **Likely cause**: Install step skipped or PATH not configured.
  - **Fix**: Run `./scripts/install_cva6.sh` (or source `scripts/cva6_env.sh` if already installed).
- **Symptom**: Verilator verification fails.
  - **Likely cause**: Missing `verilator` or C++ compiler.
  - **Fix**: Run `./scripts/install_cva6.sh` without `--no-verilator`, or run generation with `--skip-verilator`.
- **Symptom**: Simulation fails while lint passes.
  - **Likely cause**: Harness/runtime failure in full simulation step.
  - **Fix**: Inspect `datasets/cva6/<commit>/verification/verilator_sim_stream_fifo.log` and rerun generation.
