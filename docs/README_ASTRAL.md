# Astral RTL Organization Documentation

![License: Solderpad Hardware License v0.51](https://img.shields.io/badge/license-Solderpad%20Hardware%20License%20v0.51-green)

This document provides comprehensive information about the SCORE Astral scripts and the structure of generated artifacts under `datasets/astral/<commit>/`, grounded in `scripts/`, `tools/astral/`, and dataset verification outputs.

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

SCORE packages Astral generation as a reproducible flow: install dependencies, resolve Bender dependencies, run verification (Bender closure checks plus Verilator-based checks by default), and snapshot sources into `datasets/astral/<commit>/`. This differs from upstream usage in `tools/astral`, where users run direct build flows without SCORE dataset packaging.

### Key Features

- **Commit-scoped dataset output**: Results are organized under `datasets/astral/<commit>/`.
- **Dependency-closure checks**: Validates `Bender.lock` packages via `bender path`.
- **Filelist verification**: Generates and validates FPGA-oriented `bender script flist-plus` output.
- **Verilator-backed verification**: Runs both `--lint-only` and `--binary` smoke checks on a pinned slice.
- **Orchestrated end-to-end run**: `run_astral.sh` coordinates submodule, install, and generate steps.

### Scripts Overview

1. `./scripts/install_astral.sh`: Installs host tooling (Bender and optional Verilator/C++) with OS-specific package logic.
2. `./scripts/generate_astral.sh`: Stages source snapshot, performs checkout and verification, writes dataset outputs.
3. `./scripts/run_astral.sh`: Executes the full workflow (submodule + install + generate).
4. `./scripts/astral_env.sh`: Optional environment script sourced by run/generate flows.

### Architecture Overview

- `tools/astral/README.md` describes Astral via the Carfield platform context for heterogeneous mixed-criticality systems.
- Dataset snapshots include SoC-level sources and simulation/testbench files (for example `target/sim/src/astral_tb.sv`).
- For full upstream target/simulation details, refer to `tools/astral/README.md` and upstream docs linked there.

## SoC architecture

This section is constrained to evidence from `tools/astral/README.md` and generated dataset paths.

### Block-level structure

- **Carfield-centered platform**: Upstream README frames the project as a configurable heterogeneous platform.
- **Astral top-level sources**: Snapshot includes wrappers/top files under `source_snapshot/hw/` (for example `carfield.sv`, `astral_wrap.sv`).
- **Simulation target integration**: `source_snapshot/target/sim/src/` contains simulation support and testbench files including `astral_tb.sv`.
- **Bender dependency closure**: `.bender` checkouts are included in snapshot and verified during generation.

### Buses and connectivity

Detailed bus fabric naming is not explicitly enumerated in SCORE summary/verification files used here.

### Memory map

No explicit memory-map artifact is summarized in `datasets/astral/f97f001b/verification/verification_summary.txt` or `astral_summary.txt`.

## Licensing

The upstream `tools/astral/LICENSE` states **SOLDERPAD HARDWARE LICENSE version 0.51**.

`tools/astral/README.md` further notes that, unless otherwise specified, hardware/tool scripts use Solderpad 0.51, while generated register-file code and software sources may use Apache 2.0 according to upstream file-level terms.

Generated artifacts in `datasets/astral/<commit>/` are derived snapshots from the upstream source tree.

## Installation Script

### Overview

`./scripts/install_astral.sh` installs baseline dependencies for Astral generation, optional Verilator/C++ toolchain support, and Bender availability checks.

### Basic Usage

```bash
# Standard installation
./scripts/install_astral.sh

# Skip OS package installation
./scripts/install_astral.sh --no-system-deps

# Skip Bender installation
./scripts/install_astral.sh --skip-bender

# Minimal path without Verilator/C++ package install
./scripts/install_astral.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help |
| `--no-system-deps` | Skip distro package installation |
| `--skip-bender` | Skip Bender install/check |
| `--no-verilator` | Skip Verilator and C++ package installation |

### Dependencies Installed

| Component | Version | Purpose |
|-----------|---------|---------|
| Core tools (`git`, `curl/wget`, `tar`, `python3`, `rsync`) | Not explicit in script | Required runtime/dependency tooling |
| Verilator + C++ toolchain (optional via default path) | Not explicit in script | Required for default Verilator verification steps |
| Bender | Latest GitHub release at install time | Dependency resolution (`checkout`, `path`, `script`) |

### Supported Operating Systems

- Debian/Ubuntu (`apt-get`)
- Fedora/RHEL/Amazon (`dnf`/`yum`)
- Arch (`pacman`)
- openSUSE (`zypper`)
- macOS (`brew`)

### Installation Process

1. Validate `tools/astral` presence in SCORE checkout.
2. Optionally install distro packages.
3. Validate required command availability.
4. Install Bender unless skipped.
5. Report tool availability and next commands.

## Generation Script

### Overview

`./scripts/generate_astral.sh` stages source files into dataset workdir, performs Bender checkout/update, runs verification, and writes snapshot and summary outputs under `datasets/astral/<commit>/`.

### Basic Usage

```bash
# Standard generation with verification
./scripts/generate_astral.sh

# Reuse existing checkout state
./scripts/generate_astral.sh --skip-checkout

# Verification-only mode
./scripts/generate_astral.sh --verify-only

# Disable Verilator checks (keep bender checks)
./scripts/generate_astral.sh --skip-verilator
```

### Command-Line Options

| Option | Description | Default |
|--------|-------------|---------|
| `-h, --help` | Show help output | N/A |
| `--skip-checkout` | Skip Bender checkout/update | Disabled |
| `--bender-update` | Use `bender update` instead of `checkout` | Disabled |
| `--no-verify` | Skip all verification | Disabled |
| `--verify-only` | Run verification only | Disabled |
| `--skip-verilator` | Skip Verilator lint and binary smoke checks | Disabled |

### Generation Process

1. Resolve source and dataset paths by current Astral commit ID.
2. Stage `tools/astral` into `datasets/astral/<commit>/source_snapshot/`.
3. Run `bender checkout` (or `bender update` when requested), with temporary Buildroot URL rewrite.
4. Run verification:
   - `bender path` closure checks for `Bender.lock` packages,
   - FPGA-profile `bender script flist-plus`,
   - Verilator lint on common-cells slice,
   - Verilator `--binary` elaboration smoke on same slice.
5. Write `verification/verification_summary.txt`.
6. Write `astral_summary.txt` with commit, tool, and verification metadata.

## Available Designs

The current Astral SCORE output is a commit-scoped source snapshot and verification bundle rather than a multi-category `rtl_designs/` matrix.

- Active dataset example: `datasets/astral/f97f001b/`.
- Verification profile records `ASTRAL_CARFIELD_CONFIG: carfield_l2dual_periph`.

## Output Organization

The canonical output root is `datasets/astral/<commit>/`. Current example:

```text
datasets/astral/f97f001b/
??? astral_summary.txt
??? logs/
?   ??? generate_*.log
??? source_snapshot/
?   ??? .bender/
?   ??? hw/
?   ??? target/sim/src/
??? verification/
    ??? verification_summary.txt
    ??? bender_lock_path_check.txt
    ??? bender_script_carfield_l2dual_periph.f
    ??? verilator_lint_common_cells_stream_fifo.log
    ??? verilator_binary_stream_fifo.log
```

## Dataset Structure

- `astral_summary.txt`: high-level run metadata and verification rollup.
- `verification/verification_summary.txt`: explicit PASS/SKIPPED outcomes for all checks.
- `verification/bender_lock_path_check.txt`: lockfile package resolution evidence.
- `verification/bender_script_*.f`: Bender flist output for configured profile.
- `verification/verilator_*`: lint and binary elaboration logs.
- `source_snapshot/`: staged snapshot including RTL, simulation sources, and resolved `.bender` dependencies.

## Usage Examples

```bash
# Full orchestrated flow
./scripts/run_astral.sh

# Generation-only rerun (skip submodule and install)
./scripts/run_astral.sh --skip-submodule --skip-install -- --skip-checkout

# Verify existing snapshot only
./scripts/run_astral.sh --skip-submodule --skip-install -- --verify-only

# Skip Verilator checks for faster dependency/filelist validation
./scripts/run_astral.sh --skip-submodule --skip-install -- --skip-verilator
```

## Performance Expectations

- Bender checkout can be heavy due to nested dependency trees.
- Verilator `--binary` smoke checks require C++ compilation and are slower than lint-only checks.
- For faster iteration, use `--skip-checkout` and/or `--skip-verilator` when debugging script flow.

## Troubleshooting

- **Symptom**: `tools/astral` missing.
  - **Likely cause**: Submodule not initialized.
  - **Fix**: Run `git submodule update --init --recursive tools/astral` or `./scripts/run_astral.sh`.
- **Symptom**: Bender checkout hits Buildroot `git://` fetch issues.
  - **Likely cause**: Upstream URL accessibility.
  - **Fix**: Use `generate_astral.sh` default flow, which applies temporary URL rewrite for checkout.
- **Symptom**: Verilator steps fail.
  - **Likely cause**: `verilator` or `g++/c++` missing.
  - **Fix**: Run `./scripts/install_astral.sh` without `--no-verilator`, or rerun with `--skip-verilator`.
- **Symptom**: `--verify-only` fails due to missing `.bender`.
  - **Likely cause**: No prior checkout in staged dataset workdir.
  - **Fix**: Run generation once without `--verify-only` to populate dependency state.
