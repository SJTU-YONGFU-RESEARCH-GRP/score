# AraXL RTL Organization Documentation

![License: Solderpad Hardware License v0.51](https://img.shields.io/badge/license-Solderpad%20Hardware%20License%20v0.51-green)

This document provides comprehensive information about the SCORE AraXL scripts and the structure of generated artifacts in `datasets/araxl/<commit>/`, grounded in `scripts/`, `tools/araxl/`, and current dataset outputs.

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

SCORE provides a reproducible AraXL flow that initializes `tools/araxl`, installs host dependencies, runs checkout and verification (including Verilator lint by default), performs upstream `make verilate` when enabled, and snapshots results to `datasets/araxl/<commit>/`. This differs from upstream-only use where workflows are run directly from `tools/araxl` without SCORE dataset packaging.

### Key Features

- **Commit-scoped datasets**: Outputs are organized under `datasets/araxl/<commit>/`.
- **Verification-integrated generation**: Includes `Bender.lock` dependency checks, Bender flist generation, and Verilator lint.
- **Compiled RTL check**: Appends upstream `make verilate` status into `verification/verification_summary.txt`.
- **Config-aware checks**: Uses `ARA_CONFIGURATION` / `ARAXL_CONFIGURATION` and captures `nr_lanes`, `vlen`, and `nr_clusters`.
- **Single-command orchestration**: `./scripts/run_araxl.sh` wraps submodule setup, install, and generation.

### Scripts Overview

1. `./scripts/install_araxl.sh`: Installs/checks dependencies and Bender, with OS-specific package manager logic.
2. `./scripts/generate_araxl.sh`: Runs checkout, static/compiled verification, and dataset snapshot creation.
3. `./scripts/run_araxl.sh`: End-to-end driver for submodule, install, and generation workflow.
4. `./scripts/araxl_env.sh`: Optional environment script sourced when present.

### Architecture Overview

- Upstream AraXL is described as a scaled Ara vector coprocessor architecture with multiple Ara clusters attached to CVA6 (`tools/araxl/README.md`).
- SCORE datasets capture AraXL RTL/testbench sources plus verification evidence for reproducibility.
- For full upstream simulator/software flows, see `tools/araxl/README.md`.

## SoC architecture

This section reflects what is explicitly visible in the generated snapshot at `datasets/araxl/bc876e2a/source_snapshot/` and in upstream README text.

### Block-level structure

- **AraXL vector architecture**: Upstream README states multiple Ara clusters interconnected with CVA6-side interfaces.
- **Hardware RTL**: Snapshot includes hardware sources under `source_snapshot/hardware/src/`.
- **Dependency IP tree**: Bender-checked dependencies are under `source_snapshot/hardware/deps/`.
- **Testbench infrastructure**: Testbench files exist under `source_snapshot/hardware/tb/` and dependency test directories.

### Buses and connectivity

The upstream README describes cluster interconnect and CVA6 interaction at a high level, but detailed bus topology is not enumerated in the dataset summaries used here.

### Memory map

Not stated in the checked SCORE summary and verification files for this dataset.

## Licensing

The upstream AraXL repository includes:

- `tools/araxl/LICENSE.hw`: **Solderpad Hardware License v0.51** (hardware/tool scripts).
- `tools/araxl/LICENSE.sw`: **Apache License 2.0** (software sources).

Additional third-party/component license files are present under `tools/araxl/apps/`, `tools/araxl/toolchain/`, and `tools/araxl/hardware/tb/verilator/.../LICENSE`.

Generated dataset artifacts in `datasets/araxl/<commit>/` are snapshots/build outputs derived from upstream-licensed sources.

## Installation Script

### Overview

`./scripts/install_araxl.sh` prepares host dependencies for AraXL generation, including optional distro Verilator packages and optional build dependencies for upstream Verilator compilation.

### Basic Usage

```bash
# Standard installation
./scripts/install_araxl.sh

# Check prerequisites without installing
./scripts/install_araxl.sh --check-only

# Skip system package installation
./scripts/install_araxl.sh --no-system-deps

# Skip distro Verilator install
./scripts/install_araxl.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help output |
| `--no-system-deps` | Skip distro package installation |
| `--skip-bender` | Skip Bender installation |
| `--check-only` | Validate prerequisites only |
| `--debug` | Enable shell trace mode |
| `--force-reinstall` | Reinstall Bender even if on `PATH` |
| `--with-verilator` | Install distro Verilator (default behavior) |
| `--no-verilator` | Skip distro Verilator installation |
| `--with-verilator-build-deps` | Install Verilator compile-time dependencies (default behavior) |
| `--no-verilator-build-deps` | Skip Verilator compile-time dependency packages |

### Dependencies Installed

| Component | Version | Purpose |
|-----------|---------|---------|
| Core tools (`git`, `tar`, `python3`, `rsync`, `make`) | Not explicit in script | Required execution tooling |
| Verilator | Not explicit in script | Lint and compiled RTL checks |
| Verilator build deps (`autoconf`, `automake`, `flex`, `bison`, `clang`, etc.) | Not explicit in script | Build upstream Verilator when needed |
| Bender | Latest GitHub release at install time | Dependency resolution and filelist generation |

### Supported Operating Systems

- Debian/Ubuntu (`apt-get`)
- Fedora/RHEL/Amazon (`dnf`/`yum`)
- Arch (`pacman`)
- openSUSE (`zypper`)
- macOS (`brew`)

### Installation Process

1. Validate SCORE checkout and initialize `tools/araxl` submodule when configured.
2. Optionally install OS-level packages.
3. Validate required command availability.
4. Install Bender unless skipped.
5. Emit next-step guidance for env setup and generation.

## Generation Script

### Overview

`./scripts/generate_araxl.sh` performs dependency checkout/update, static verification, optional upstream Verilator build, optional `make verilate`, and source snapshot packaging into `datasets/araxl/<commit>/`.

### Basic Usage

```bash
# Standard generation flow
./scripts/generate_araxl.sh

# Skip checkout, verify/snapshot current state
./scripts/generate_araxl.sh --skip-checkout

# Verification-only mode
./scripts/generate_araxl.sh --verify-only

# Skip Verilator lint
./scripts/generate_araxl.sh --skip-verilator-lint
```

### Command-Line Options

| Option | Description | Default |
|--------|-------------|---------|
| `-h, --help` | Show help output | N/A |
| `--skip-checkout` | Skip `make bender` and bender checkout/update | Disabled |
| `--bender-update` | Use `bender update` instead of `bender checkout` | Disabled |
| `--no-verify` | Skip all verification | Disabled |
| `--skip-verilator-lint` | Skip lint-only Verilator check | Disabled |
| `--verify-only` | Only run verification | Disabled |
| `--skip-verilate` | Skip upstream `make verilate` | Disabled |
| `--verilate` | Explicitly enable `make verilate` | Enabled |
| `--build-verilator` | Build upstream Verilator if needed | Enabled |
| `--no-build-verilator` | Disable upstream Verilator build attempt | Disabled |
| `--keep-tool-artifacts` | Keep generated artifacts in `tools/araxl` | Disabled |
| `--jobs N` | Parallel make jobs (capped at 16) | 4 |

### Generation Process

1. Parse flags and resolve environment hooks.
2. Ensure required tooling and `tools/araxl` paths exist.
3. Optionally run `make bender` and bender checkout/update.
4. Apply `tech_cells_generic` patch if needed.
5. Run static verification:
   - `Bender.lock` package presence check,
   - `bender script flist-plus`,
   - `verilator --lint-only` (unless skipped).
6. Optionally build upstream Verilator and run upstream `make verilate`.
7. Append compiled RTL result to `verification/verification_summary.txt`.
8. Snapshot `tools/araxl` tree to `datasets/araxl/<commit>/source_snapshot/`.
9. Write `araxl_summary.txt` with commit and verification metadata.

## Available Designs

SCORE AraXL currently generates a commit-scoped snapshot and verification dataset rather than a categorized `rtl_designs/` matrix.

- Active dataset example: `datasets/araxl/bc876e2a/`.
- Recorded configuration evidence: `default`, with `nr_lanes / vlen / nr_clusters: 4 / 4096 / 2`.

## Output Organization

The canonical output root is `datasets/araxl/<commit>/`. Current example:

```text
datasets/araxl/bc876e2a/
??? araxl_summary.txt
??? source_snapshot/
?   ??? hardware/
?   ?   ??? src/
?   ?   ??? tb/
?   ?   ??? deps/
?   ?   ??? build/verilator/
?   ??? install/verilator/
?   ??? toolchain/verilator/
??? verification/
    ??? verification_summary.txt
    ??? verilator_lint_default.log
    ??? bender_script_default
    ??? deps_check.txt
```

## Dataset Structure

- `araxl_summary.txt`: Dataset-level metadata, commit IDs, and verification status rollup.
- `verification/verification_summary.txt`: Static check results plus compiled RTL (`make verilate`) result.
- `verification/verilator_lint_default.log`: Verilator lint output for the generated flist and top module.
- `verification/bender_script_default`: Bender flist-plus output used for lint.
- `source_snapshot/`: Snapshot of source/dependency/build trees after generation workflow.

## Usage Examples

```bash
# Full flow
./scripts/run_araxl.sh

# Skip install/submodule and run generation-only checks
./scripts/run_araxl.sh --skip-submodule --skip-install -- --skip-checkout

# Verification-only
./scripts/run_araxl.sh --skip-submodule --skip-install -- --verify-only

# Fast iteration without upstream Verilator build
./scripts/run_araxl.sh --skip-submodule --skip-install -- --no-build-verilator --skip-verilate
```

## Performance Expectations

- Verilator lint and upstream `make verilate` can be time-consuming on the full AraXL dependency tree.
- Generation uses `--jobs` parallelism (default 4, capped at 16).
- Upstream Verilator auto-build is a heavy step; disable via `--no-build-verilator` for quicker validation-only iterations.

## Troubleshooting

- **Symptom**: `tools/araxl` not found.
  - **Likely cause**: Submodule not initialized.
  - **Fix**: Run `git submodule update --init --recursive tools/araxl` or `./scripts/run_araxl.sh`.
- **Symptom**: Dependency check fails (`deps_check.txt` contains missing packages).
  - **Likely cause**: Checkout did not complete or stale state.
  - **Fix**: Re-run `./scripts/generate_araxl.sh` without `--skip-checkout`.
- **Symptom**: Verilator lint step fails.
  - **Likely cause**: `verilator` unavailable on `PATH`.
  - **Fix**: Run `./scripts/install_araxl.sh` (without `--no-verilator`) or install Verilator manually.
- **Symptom**: `make verilate` is skipped or fails.
  - **Likely cause**: Incomplete Verilator layout for hierarchical flow.
  - **Fix**: Re-run generation with default auto-build enabled, or configure `ARAXL_VERIL_PATH` to a complete Verilator install.
