# Auteur RTL Organization Documentation

![License: Solderpad Hardware License v0.51](https://img.shields.io/badge/license-Solderpad%20Hardware%20License%20v0.51-green)

This document provides comprehensive information about the SCORE Auteur scripts and the generated dataset structure under `datasets/auteur/<commit>/`, grounded in `scripts/`, `tools/auteur/`, and dataset verification artifacts.

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

SCORE wraps Auteur generation into a reproducible flow: install dependencies, resolve Bender lockfile dependencies, run Verilator-based verification (lint, elaboration, and full testbench simulation by default), and snapshot outputs into `datasets/auteur/<commit>/`.

### Key Features

- **Commit-scoped datasets**: Generated outputs are rooted at `datasets/auteur/<commit>/`.
- **Dependency closure checks**: Validates each `Bender.lock` package through `bender path`.
- **RTL closure generation**: Produces package-level filelists with `bender script flist-plus`.
- **Verilator verification pipeline**: Includes lint, elaboration smoke build, and full simulation.
- **SCORE testbench harness**: Full simulation uses `scripts/assets/auteur/tb_auteur_fifo.sv`.

### Scripts Overview

1. `./scripts/install_auteur.sh`: Installs host dependencies and Bender (optional Verilator/C++ packages by default).
2. `./scripts/generate_auteur.sh`: Stages source snapshot, performs checkout and verification, writes dataset artifacts.
3. `./scripts/run_auteur.sh`: End-to-end orchestration for submodule, install, and generation steps.
4. `./scripts/auteur_env.sh`: Optional environment script sourced when present.

### Architecture Overview

- The upstream `tools/auteur/README.md` is currently a minimal placeholder.
- SCORE verification and scripts focus on `hw/auteur_fifo.sv` for Verilator checks and simulation.
- Full-top `auteur_group` is intentionally excluded from Verilator checks due to upstream Verilator generate/unroll limits, as documented in script comments and verification notes.

## SoC architecture

Detailed architecture documentation is not provided in upstream README content currently available in `tools/auteur/README.md`.

### Block-level structure

- Verified RTL focus is `auteur_fifo` (`hw/auteur_fifo.sv`) according to `generate_auteur.sh`.
- Dataset snapshots include full source trees and Bender checkouts under `source_snapshot/.bender/`.
- Verification artifacts include compiled Verilator object trees for both design-only and testbench simulation runs.

### Buses and connectivity

Not stated in current upstream README or dataset summary files used here.

### Memory map

No memory-map artifacts are summarized in `datasets/auteur/8951b3cf/verification/verification_summary.txt` or `auteur_summary.txt`.

## Licensing

The upstream `tools/auteur/LICENSE` declares **SOLDERPAD HARDWARE LICENSE version 0.51**.

Generated artifacts in `datasets/auteur/<commit>/` are snapshots and verification outputs derived from the upstream source tree.

## Installation Script

### Overview

`./scripts/install_auteur.sh` installs required host tooling for generation and verification, including optional Verilator and C++ compiler packages needed by default verification steps.

### Basic Usage

```bash
# Standard installation
./scripts/install_auteur.sh

# Skip system package installation
./scripts/install_auteur.sh --no-system-deps

# Skip Bender installation
./scripts/install_auteur.sh --skip-bender

# Skip Verilator and C++ package installation
./scripts/install_auteur.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help output |
| `--no-system-deps` | Skip distro package installation |
| `--skip-bender` | Skip Bender installation |
| `--no-verilator` | Skip Verilator and C++ package installation |

### Dependencies Installed

| Component | Version | Purpose |
|-----------|---------|---------|
| Core tools (`git`, `curl/wget`, `tar`, `python3`, `rsync`) | Not explicit in script | Required script/runtime dependencies |
| Verilator + C++ toolchain (default install path) | Not explicit in script | Required for lint, elaboration, and full simulation |
| Bender | Latest GitHub release at install time | Lockfile resolution and filelist generation |

### Supported Operating Systems

- Debian/Ubuntu (`apt-get`)
- Fedora/RHEL/Amazon (`dnf`/`yum`)
- Arch (`pacman`)
- openSUSE (`zypper`)
- macOS (`brew`)

### Installation Process

1. Validate `tools/auteur` exists in SCORE checkout.
2. Optionally install OS package dependencies.
3. Validate required commands (`git`, `python3`, `rsync`, and downloader tools).
4. Install Bender unless skipped.
5. Validate Verilator/C++ availability when relevant.

## Generation Script

### Overview

`./scripts/generate_auteur.sh` stages sources to dataset workdir, runs Bender checkout/update, performs verification, and writes summary and verification artifacts under `datasets/auteur/<commit>/`.

### Basic Usage

```bash
# Standard generation with full verification
./scripts/generate_auteur.sh

# Skip checkout and reuse existing .bender state
./scripts/generate_auteur.sh --skip-checkout

# Verification-only mode
./scripts/generate_auteur.sh --verify-only

# Skip Verilator checks
./scripts/generate_auteur.sh --skip-verilator

# Keep lint + elaboration but skip clocked full simulation
./scripts/generate_auteur.sh --no-full-sim
```

### Command-Line Options

| Option | Description | Default |
|--------|-------------|---------|
| `-h, --help` | Show help output | N/A |
| `--skip-checkout` | Skip bender checkout/update | Disabled |
| `--bender-update` | Use `bender update` instead of `checkout` | Disabled |
| `--no-verify` | Skip all verification steps | Disabled |
| `--verify-only` | Run verification only | Disabled |
| `--skip-verilator` | Skip all Verilator steps | Disabled |
| `--no-full-sim` | Skip full testbench simulation only | Disabled |

### Generation Process

1. Compute dataset path from current Auteur commit.
2. Stage `tools/auteur` into `datasets/auteur/<commit>/source_snapshot/`.
3. Run `bender checkout` (or `bender update` if selected).
4. Run verification:
   - Bender lockfile path checks,
   - Bender flist generation for package `auteur`,
   - Verilator lint on `hw/auteur_fifo.sv`,
   - Verilator `--binary` elaboration smoke,
   - Verilator full simulation with `scripts/assets/auteur/tb_auteur_fifo.sv` (default).
5. Write `verification/verification_summary.txt`.
6. Write `auteur_summary.txt`.

## Available Designs

SCORE Auteur output currently provides a commit-scoped source snapshot and verification bundle, not a multi-design matrix under `rtl_designs/`.

- Active dataset example: `datasets/auteur/8951b3cf/`.
- Verified simulation target: `auteur_fifo` with SCORE `tb_auteur_fifo` harness.

## Output Organization

The canonical output root is `datasets/auteur/<commit>/`. Current example:

```text
datasets/auteur/8951b3cf/
??? auteur_summary.txt
??? logs/
?   ??? generate_*.log
??? source_snapshot/
?   ??? hw/
?   ??? .bender/
??? verification/
    ??? verification_summary.txt
    ??? bender_lock_path_check.txt
    ??? bender_script_auteur.f
    ??? verilator_lint_auteur_fifo.log
    ??? verilator_binary_auteur_fifo.log
    ??? verilator_sim_auteur_fifo.log
    ??? verilator_obj_auteur_fifo/
    ??? verilator_obj_tb_auteur_fifo/
```

## Dataset Structure

- `auteur_summary.txt`: source commit metadata and verification rollup.
- `verification/verification_summary.txt`: PASS/SKIPPED statuses for all checks.
- `verification/bender_lock_path_check.txt`: lockfile dependency resolution evidence.
- `verification/bender_script_auteur.f`: generated RTL filelist for package `auteur`.
- `verification/verilator_*`: lint, elaboration, and full simulation logs.
- `verification/verilator_obj_*`: compiled Verilator object artifacts for reproducibility/debug.

## Usage Examples

```bash
# Full pipeline
./scripts/run_auteur.sh

# Fast rerun without install/submodule
./scripts/run_auteur.sh --skip-submodule --skip-install -- --skip-checkout

# Verification-only pass on staged dataset state
./scripts/run_auteur.sh --skip-submodule --skip-install -- --verify-only

# Skip full simulation (still run lint + elaboration)
./scripts/run_auteur.sh --skip-submodule --skip-install -- --no-full-sim
```

## Performance Expectations

- Bender checkout can be heavy depending on dependency graph size.
- Verilator full simulation is slower than lint/elaboration checks and requires C++ toolchain.
- For faster validation loops, use `--no-full-sim` or `--skip-verilator` depending on required coverage.

## Troubleshooting

- **Symptom**: `tools/auteur` missing.
  - **Likely cause**: Submodule not initialized.
  - **Fix**: Run `git submodule update --init --recursive tools/auteur` or `./scripts/run_auteur.sh`.
- **Symptom**: Verilator steps fail.
  - **Likely cause**: Missing `verilator` or C++ compiler.
  - **Fix**: Run `./scripts/install_auteur.sh` without `--no-verilator`, or use `--skip-verilator`.
- **Symptom**: Full simulation fails while lint/elaboration pass.
  - **Likely cause**: Testbench harness/runtime issue.
  - **Fix**: Inspect `verification/verilator_sim_auteur_fifo.log`; rerun with full sim enabled and clean objdirs.
- **Symptom**: `--verify-only` fails due to missing `.bender`.
  - **Likely cause**: No prior checkout in staged workdir.
  - **Fix**: Run generation once without `--verify-only` to populate dependency state.
