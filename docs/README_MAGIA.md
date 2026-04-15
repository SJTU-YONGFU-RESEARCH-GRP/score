# MAGIA RTL Organization Documentation

This document provides comprehensive information about the SCORE MAGIA scripts and the generated dataset artifacts under `datasets/magia/4a45e25a/`.

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

SCORE integrates MAGIA through shell scripts that initialize `tools/magia`, resolve dependencies via Bender, snapshot resolved RTL sources, and capture verification evidence in a commit-scoped dataset directory.

### Key Features

- **Commit-scoped outputs**: Outputs are stored in `datasets/magia/<commit>/` keyed by the MAGIA git SHA.
- **Dependency snapshotting**: `bender checkout` resolves `Bender.lock` and snapshots `.bender` checkouts alongside MAGIA sources.
- **Verification evidence**: The generator emits `verification/verification_summary.txt` and detailed Verilator logs.
- **Single-command flow**: `run_magia.sh` orchestrates submodule bootstrap, optional install, and generation.

### Scripts Overview

1. `./scripts/install_magia.sh`: Installs system prerequisites and Bender.
2. `./scripts/magia_env.sh`: Exports MAGIA-related environment settings.
3. `./scripts/generate_magia.sh`: Runs Bender resolution, snapshots sources, and performs Verilator checks.
4. `./scripts/run_magia.sh`: End-to-end orchestrator that chains submodule, install, and generate steps.

### Architecture Overview

- MAGIA is organized around tile and mesh simulation views, with testbench sources listed in `tools/magia/Bender.yml`.
- The dataset captures MAGIA RTL plus resolved third-party dependencies under `source_snapshot/`.

## SoC architecture

### Block-level structure

Based on `tools/magia/Bender.yml`, the source set includes:

- Tile-level modules in `hw/tile/` (for example `magia_tile.sv`, converters, DMA control, and event unit integration).
- Mesh-level modules in `hw/mesh/` (for example `magia.sv`, NoC packages, and mesh NoC variants).
- Simulation harness/testbench sources in `target/sim/src/tile/` and `target/sim/src/mesh/`.

### Buses and connectivity

`Bender.yml` references AXI/OBI-oriented dependencies (for example `axi`, `obi`, and `axi_obi`) and mesh NoC source files under `hw/mesh/noc/`.

### Memory map

A memory map artifact is not generated in `datasets/magia/4a45e25a/`; this dataset primarily captures source snapshots and verification logs.

## Licensing

- Upstream MAGIA includes `tools/magia/LICENSE.APACHE` and `tools/magia/LICENSE.SHL`.
- Generated dataset content in `datasets/magia/4a45e25a/` is a snapshot of upstream MAGIA and resolved dependency sources.

## Installation Script

### Overview

`./scripts/install_magia.sh` prepares host tooling needed by the MAGIA flow, including git/curl/wget/tar/rsync/python3 and Bender.

### Basic Usage

```bash
# Standard install
./scripts/install_magia.sh

# Skip OS package installation
./scripts/install_magia.sh --no-system-deps

# Skip Bender installation
./scripts/install_magia.sh --skip-bender
```

### Command-Line Options

| Option | Description |
|---|---|
| `-h`, `--help` | Show help |
| `--no-system-deps` | Skip distro package installation |
| `--skip-bender` | Skip Bender install/check |

### Dependencies Installed

| Component | Version | Purpose |
|---|---|---|
| git/curl/wget/tar/rsync/python3 | OS package manager provided | Required host tools |
| bender | latest GitHub release (or existing PATH version) | Dependency resolution and filelist generation |

### Supported Operating Systems

- Debian/Ubuntu family (`apt-get`)
- Fedora/RHEL/Amazon Linux family (`dnf`/`yum`)
- Arch family (`pacman`)
- openSUSE family (`zypper`)
- macOS with Homebrew

### Installation Process

1. Detect OS family.
2. Install required system packages (unless `--no-system-deps`).
3. Validate required commands exist.
4. Install or verify Bender.
5. Provide next-step commands (`source scripts/magia_env.sh`, run generator).

## Generation Script

### Overview

`./scripts/generate_magia.sh` runs Bender dependency resolution in `tools/magia`, snapshots the resolved source tree into the dataset, runs Verilator checks, and writes summary files.

### Basic Usage

```bash
# Standard generation (uses bender checkout)
./scripts/generate_magia.sh

# Reuse existing .bender state
./scripts/generate_magia.sh --skip-checkout

# Use bender update instead of checkout
./scripts/generate_magia.sh --bender-update
```

### Command-Line Options

| Option | Description | Default |
|---|---|---|
| `-h`, `--help` | Show help | N/A |
| `--skip-checkout` | Skip bender resolution step | disabled |
| `--bender-update` | Run `bender update` instead of `bender checkout` | disabled |

### Generation Process

1. Load local environment hooks (`setup_local_env.sh`, `magia_env.sh`) when available.
2. Validate required tools (`bender`, `rsync`).
3. Resolve dependencies (`bender checkout` by default).
4. Snapshot `tools/magia` into `datasets/magia/<commit>/source_snapshot/`.
5. Generate Verilator filelist with `bender script flist-plus -t magia_dv`.
6. Run Verilator lint and elaboration attempts.
7. Write `verification/verification_summary.txt` and `magia_summary.txt`.

## Available Designs

The current MAGIA SCORE dataset is a source snapshot flow rather than a multi-configuration `rtl_designs/` matrix. The primary simulation entry points visible in `tools/magia/Bender.yml` are:

| Design View | Evidence |
|---|---|
| Standalone tile DV | `target/sim/src/tile/magia_tile_tb.sv` and related tile TB files |
| Mesh DV | `target/sim/src/mesh/magia_tb.sv` and related mesh TB files |

## Output Organization

Generated outputs are stored under `datasets/magia/4a45e25a/`.

```text
datasets/magia/4a45e25a/
??? logs/
?   ??? generate_*.log
??? magia_summary.txt
??? source_snapshot/
?   ??? Bender.yml
?   ??? hw/
?   ??? target/
?   ??? .bender/
??? verification/
    ??? verification_summary.txt
    ??? magia_dv.flist
    ??? verilator_lint.log
    ??? verilator_elab.log
    ??? verilator_sim.log
```

## Dataset Structure

- `source_snapshot/`: Resolved MAGIA source tree including checked-out dependencies.
- `verification/magia_dv.flist`: Verilator-oriented filelist generated by Bender.
- `verification/*verilator*.log`: Lint/elaboration/simulation attempt logs.
- `magia_summary.txt`: Human-readable run summary with commit and verification status.
- `logs/generate_*.log`: Full execution transcript for each generator run.

## Usage Examples

```bash
# End-to-end run (submodule + install + generate)
./scripts/run_magia.sh

# Skip install if environment is already prepared
./scripts/run_magia.sh --skip-install

# Generate only, reusing existing bender checkout
./scripts/generate_magia.sh --skip-checkout
```

## Performance Expectations

- Generation is dominated by Bender dependency resolution and snapshot copying.
- Verilator checks depend on the resolved dependency graph size and may report upstream compatibility issues.
- Disk usage is significant because `source_snapshot/` includes `.bender` checkouts.

## Troubleshooting

- **Symptom**: `Verilator lint: FAIL` with unsupported primitives.
  - **Cause**: Upstream dependency files include constructs not supported by the local Verilator configuration (for example `pmos` in `tech_cells_generic` deprecated modules).
  - **Fix**: Inspect `datasets/magia/4a45e25a/verification/verilator_lint.log` and adjust target/filelist filtering in `tools/magia/Bender.yml` or verification invocation strategy.

- **Symptom**: `bender` not found.
  - **Cause**: Bender not installed or not on PATH.
  - **Fix**: Run `./scripts/install_magia.sh` and `source scripts/magia_env.sh`.

- **Symptom**: Missing `tools/magia`.
  - **Cause**: Submodule not initialized in current checkout.
  - **Fix**: Run `./scripts/run_magia.sh` (bootstrap step included) or initialize submodule manually.
