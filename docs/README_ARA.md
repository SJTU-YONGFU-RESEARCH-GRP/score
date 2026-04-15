# Ara RTL Organization Documentation

![License: Solderpad Hardware License v0.51](https://img.shields.io/badge/license-Solderpad%20Hardware%20License%20v0.51-green)

This document provides comprehensive information about the SCORE Ara scripts and the structure of generated dataset artifacts under `datasets/ara/<commit>/`, based on `tools/ara`, `scripts/`, and current dataset outputs.

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

SCORE packages Ara dataset generation as a reproducible script flow: install dependencies, checkout hardware dependencies, run verification (including Verilator lint by default), and snapshot sources into `datasets/ara/<commit>/`. This is different from using upstream Ara directly, where users run `make` targets inside `tools/ara` without SCORE dataset packaging.

### Key Features

- **Dataset-rooted output**: Writes results to `datasets/ara/<commit>/` with verification logs and snapshot data.
- **Verification-first generation**: Runs dependency checks, Bender filelist generation, and Verilator lint unless explicitly disabled.
- **Config-aware flow**: Reads `ARA_CONFIGURATION` and derives key hardware parameters (`nr_lanes`, `vlen`) from `tools/ara/config/<name>.mk`.
- **Patch handling**: Applies the `tech_cells_generic` compatibility patch in an idempotent way.
- **End-to-end orchestration**: `run_ara.sh` drives submodule bootstrap, installation, and generation in one entrypoint.

### Scripts Overview

1. `./scripts/install_ara.sh`: Installs/checks host dependencies and Bender, with OS-specific package handling.
2. `./scripts/generate_ara.sh`: Runs checkout + verification + snapshot creation under `datasets/ara/<commit>/`.
3. `./scripts/run_ara.sh`: End-to-end wrapper for submodule setup, install step, and generation step.
4. `./scripts/ara_env.sh`: Optional environment hook sourced by run/generate scripts when present.

### Architecture Overview

- Ara is documented upstream as a vector unit acting as a coprocessor for CVA6 (`tools/ara/README.md`).
- The generated dataset is a source snapshot and verification bundle centered on Ara hardware RTL and testbench infrastructure.
- For upstream-only workflows and full simulation flows, see `tools/ara/README.md`.

## SoC architecture

The generated dataset reflects Ara integrated with CVA6-related subsystem sources and Ara testbench tops as found under `datasets/ara/826f57c9/source_snapshot/hardware/`.

### Block-level structure

- **Vector unit RTL**: Ara hardware modules under `source_snapshot/hardware/src/`.
- **Core/dependency integration**: CVA6 and other hardware IP under `source_snapshot/hardware/deps/`.
- **Testbench tops**: `source_snapshot/hardware/tb/ara_tb.sv` and `source_snapshot/hardware/tb/ara_tb_verilator.sv`.
- **Build/checkout metadata**: Bender lock and generated Verilator-oriented filelist in `verification/bender_script_default`.

### Buses and connectivity

Not stated in the SCORE dataset summary files. Use upstream architecture docs in `tools/ara/docs` and relevant RTL sources for detailed interconnect documentation.

### Memory map

Not stated in the checked verification summary/snapshot metadata for this dataset.

## Licensing

The upstream Ara project in `tools/ara/` is licensed under **Solderpad Hardware License v0.51** (`tools/ara/LICENSE`).

The repository also contains additional license files for subcomponents under `tools/ara/apps/` and `tools/ara/hardware/tb/verilator/.../LICENSE`; consult those paths for third-party component terms.

Generated artifacts in `datasets/ara/<commit>/` are snapshots derived from the upstream-licensed source tree.

## Installation Script

### Overview

`./scripts/install_ara.sh` installs required host tools for the SCORE Ara flow (system packages, optional Bender installation) and supports validation-only checks.

### Basic Usage

```bash
# First-time setup
./scripts/install_ara.sh

# Validate environment without installing
./scripts/install_ara.sh --check-only

# Skip OS package install
./scripts/install_ara.sh --no-system-deps

# Skip Bender installation
./scripts/install_ara.sh --skip-bender
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help output |
| `--no-system-deps` | Skip distro package installation |
| `--skip-bender` | Skip Bender download/verification step |
| `--skip-submodule` | Skip `git submodule update` |
| `--check-only` | Verify required commands and exit |
| `--debug` | Enable verbose debug logging |

### Dependencies Installed

| Component | Version | Purpose |
|-----------|---------|---------|
| System build tools (`git`, `make`, `gcc/g++`, `flex`, `bison`, etc.) | Not explicit in script | Build and checkout prerequisites |
| Verilator | Not explicit in script | RTL lint path used by `generate_ara.sh` |
| Bender | Latest GitHub release at install time | Dependency/IP checkout and filelist generation |

### Supported Operating Systems

- Debian/Ubuntu family (`apt-get`)
- Fedora/RHEL/Amazon family (`dnf`/`yum`)
- Arch family (`pacman`)
- openSUSE family (`zypper`)
- macOS (`brew`, when available)

### Installation Process

1. Validate SCORE git checkout and optionally initialize `tools/ara` submodule.
2. Detect OS family and install required packages (unless `--no-system-deps`).
3. Validate required commands.
4. Install Bender if requested and not already on `PATH`.
5. Emit next-step hints (`source scripts/ara_env.sh`, run generation script).

## Generation Script

### Overview

`./scripts/generate_ara.sh` performs Ara checkout/snapshot generation and writes verification artifacts under `datasets/ara/<commit>/verification/`, including Verilator lint by default.

### Basic Usage

```bash
# Standard generation: checkout + verify + snapshot
./scripts/generate_ara.sh

# Snapshot current tree only (skip make checkout)
./scripts/generate_ara.sh --skip-checkout

# Verification-only pass on current tree
./scripts/generate_ara.sh --verify-only

# Skip Verilator lint but keep other verification checks
./scripts/generate_ara.sh --skip-verilator-lint
```

### Command-Line Options

| Option | Description | Default |
|--------|-------------|---------|
| `-h, --help` | Show help output | N/A |
| `--skip-checkout` | Skip `make bender` and `make checkout` | Disabled |
| `--skip-apply-patches` | Skip tech-cells patch step | Disabled |
| `--no-verify` | Skip all verification checks | Disabled |
| `--skip-verilator-lint` | Skip Verilator lint only | Disabled |
| `--with-verilator-lint` | Explicitly enable Verilator lint | Enabled |
| `--verify-only` | Run verification only (no checkout/snapshot) | Disabled |
| `--jobs N` | Parallel make jobs (clamped to max 16) | 4 |

### Generation Process

1. Resolve project paths and parse command-line options.
2. Optionally source local env hooks (`setup_local_env.sh`, `ara_env.sh`).
3. Optionally run `make bender` and `make checkout` in `tools/ara/hardware`.
4. Optionally apply the `0001-tech-cells-generic-sram.patch` patch.
5. Run verification:
   - `Bender.lock` vs `hardware/deps` presence check,
   - `bender script flist-plus`,
   - `verilator --lint-only` with top module `ara_tb_verilator` (unless skipped).
6. Write verification summary and logs to `datasets/ara/<commit>/verification/`.
7. Snapshot source tree into `datasets/ara/<commit>/source_snapshot/`.
8. Write `ara_summary.txt` with commit and verification metadata.

## Available Designs

Ara generation in SCORE currently produces a commit-scoped source snapshot and verification bundle rather than a multi-design matrix under `rtl_designs/`.

- Active dataset example: `datasets/ara/826f57c9/`.
- Configuration evidence in summary: `ARA_CONFIGURATION: default`, `nr_lanes / vlen: 4 / 4096`.

## Output Organization

The canonical dataset root is `datasets/ara/<commit>/`. Current generated example:

```text
datasets/ara/826f57c9/
??? ara_summary.txt
??? logs/
?   ??? ara_install/
??? source_snapshot/
?   ??? hardware/
?       ??? src/
?       ??? tb/
?       ??? deps/
??? verification/
    ??? verification_summary.txt
    ??? verilator_lint_default.log
    ??? bender_script_default
    ??? deps_check.txt
```

## Dataset Structure

- `ara_summary.txt`: Dataset-level metadata, source commit IDs, and verification rollup.
- `verification/verification_summary.txt`: PASS/SKIPPED states for dependency checks, Bender filelist, and Verilator lint.
- `verification/verilator_lint_default.log`: Verilator lint output for the generated flist and top module.
- `verification/bender_script_default`: Generated Verilator-view filelist from Bender.
- `source_snapshot/`: Snapshot of Ara sources after checkout/patch logic, including RTL (`.sv`) and testbench files.

## Usage Examples

```bash
# Full SCORE flow
./scripts/run_ara.sh

# Re-run generation without reinstall/submodule steps
./scripts/run_ara.sh --skip-submodule --skip-install -- --skip-checkout

# Verification-only check on existing dataset state
./scripts/run_ara.sh --skip-submodule --skip-install -- --verify-only

# Disable Verilator lint for faster iteration
./scripts/run_ara.sh --skip-submodule --skip-install -- --skip-verilator-lint
```

## Performance Expectations

- Verilator lint can be slow on full Ara/CVA6 dependency trees.
- `--jobs N` affects checkout/build helper targets (`make bender`, `make checkout`) and is capped to 16.
- For constrained hosts, use reduced `--jobs` and consider staged runs (`--verify-only`, `--skip-checkout`) during debugging.

## Troubleshooting

- **Symptom**: `generate_ara.sh` fails with missing `tools/ara/hardware`.
  - **Likely cause**: Ara submodule not initialized.
  - **Fix**: Run `git submodule update --init --recursive tools/ara` or `./scripts/run_ara.sh`.
- **Symptom**: Verification fails before Verilator step due to missing dependencies.
  - **Likely cause**: `make checkout` did not complete or deps tree is stale.
  - **Fix**: Run `./scripts/generate_ara.sh` without `--skip-checkout`; inspect `datasets/ara/<commit>/verification/deps_check.txt`.
- **Symptom**: Verilator lint step fails due to missing command.
  - **Likely cause**: Verilator not installed or not on `PATH`.
  - **Fix**: Run `./scripts/install_ara.sh` (without `--no-system-deps`) or install Verilator manually, then rerun generation.
- **Symptom**: Script exits on patch apply step.
  - **Likely cause**: Unexpected state in `hardware/deps/tech_cells_generic`.
  - **Fix**: Re-run checkout (`./scripts/generate_ara.sh`), then retry; avoid manual edits in checked out dependency trees.
