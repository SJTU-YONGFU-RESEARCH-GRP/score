# Cheshire IHP130 O RTL Organization Documentation

![License: Solderpad Hardware License v0.51](https://img.shields.io/badge/license-Solderpad%20Hardware%20License%20v0.51-green)

This document provides comprehensive information about the SCORE `cheshire_ihp130_o` scripts and generated artifacts under `datasets/cheshire_ihp130_o/<commit>/`, grounded in repository scripts, upstream sources, and generated verification outputs.

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

SCORE packages `cheshire_ihp130_o` generation as a reproducible flow: initialize and resolve dependencies with Bender, run dataset verification checks (including Verilator lint), and snapshot the source/dependency state into `datasets/cheshire_ihp130_o/<commit>/`.

### Key Features

- **Commit-scoped outputs**: Dataset root pattern is `datasets/cheshire_ihp130_o/<commit>/`.
- **Dependency closure checks**: Validates `Bender.lock` package resolution via `bender path`.
- **RTL filelist validation**: Generates a `common_cells` flist with `bender script flist-plus`.
- **Testbench presence evidence**: Confirms `_tb.sv` testbench files exist in resolved `.bender` dependencies.
- **Verilator evidence**: Runs Verilator lint (`--lint-only`) on the validated `common_cells` slice.

### Scripts Overview

1. `./scripts/install_cheshire_ihp130_o.sh`: Installs host dependencies and Bender.
2. `./scripts/generate_cheshire_ihp130_o.sh`: Runs checkout/update, verification, and snapshot generation.
3. `./scripts/run_cheshire_ihp130_o.sh`: End-to-end orchestration (submodule + install + generate).
4. `./scripts/cheshire_ihp130_o_env.sh`: Optional environment setup used by run/generate scripts when available.

### Architecture Overview

- Upstream README describes Basilisk/Iguana as a Cheshire-based Linux-capable SoC targeting the IHP130 open PDK.
- SCORE dataset generation is verification-oriented and focuses on reproducible dependency closure plus lintable RTL slices.
- Full SoC Verilator simulation is not part of the default SCORE flow for this target.

## SoC architecture

This section is limited to verified repository artifacts and upstream README text.

### Block-level structure

- The project is built on top of Cheshire and associated dependencies, reflected in `.bender` checkouts under the dataset snapshot.
- Snapshot captures hardware/software/source flow trees under `source_snapshot/`.
- Verification uses a representative `common_cells` RTL slice for fast, deterministic checks.

### Buses and connectivity

Detailed bus topology is not explicitly enumerated in SCORE summary/verification outputs used here.

### Memory map

No memory-map artifact is summarized in `cheshire_ihp130_o_summary.txt` or `verification/verification_summary.txt`.

## Licensing

`tools/cheshire-ihp130-o/LICENSE` declares **SOLDERPAD HARDWARE LICENSE version 0.51**.

Upstream README also states hardware/tool scripts use Solderpad 0.51, with software sources under Apache 2.0 by file/project policy.

Generated outputs in `datasets/cheshire_ihp130_o/<commit>/` are derived snapshots and verification artifacts from upstream sources.

## Installation Script

### Overview

`./scripts/install_cheshire_ihp130_o.sh` installs baseline tooling for dataset generation and dependency resolution.

### Basic Usage

```bash
# Standard installation
./scripts/install_cheshire_ihp130_o.sh

# Skip distro package install
./scripts/install_cheshire_ihp130_o.sh --no-system-deps

# Skip Bender installation
./scripts/install_cheshire_ihp130_o.sh --skip-bender
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help output |
| `--no-system-deps` | Skip distro package installation |
| `--skip-bender` | Skip Bender install/check |

### Dependencies Installed

| Component | Version | Purpose |
|-----------|---------|---------|
| Core tools (`git`, `curl/wget`, `tar`, `python3`, `rsync`) | Not explicit in script | Runtime/dependency tooling |
| Bender | Latest GitHub release at install time | Dependency resolution and filelist generation |

### Supported Operating Systems

- Debian/Ubuntu (`apt-get`)
- Fedora/RHEL/Amazon (`dnf`/`yum`)
- Arch (`pacman`)
- openSUSE (`zypper`)
- macOS (`brew`)

### Installation Process

1. Validate `tools/cheshire-ihp130-o` exists.
2. Optionally install OS package prerequisites.
3. Validate required command-line tools.
4. Install Bender unless skipped.
5. Print next-step guidance for environment and generation.

## Generation Script

### Overview

`./scripts/generate_cheshire_ihp130_o.sh` runs Bender checkout/update, executes verification checks, and snapshots outputs to `datasets/cheshire_ihp130_o/<commit>/source_snapshot/`.

### Basic Usage

```bash
# Standard generation (checkout + verify + snapshot)
./scripts/generate_cheshire_ihp130_o.sh

# Reuse existing dependency checkout
./scripts/generate_cheshire_ihp130_o.sh --skip-checkout

# Verification-only mode (no snapshot copy)
./scripts/generate_cheshire_ihp130_o.sh --verify-only

# Skip Verilator lint while keeping bender-based checks
./scripts/generate_cheshire_ihp130_o.sh --skip-verilator
```

### Command-Line Options

| Option | Description | Default |
|--------|-------------|---------|
| `-h, --help` | Show help output | N/A |
| `--skip-checkout` | Skip bender checkout/update | Disabled |
| `--bender-update` | Use `bender update` instead of `checkout` | Disabled |
| `--no-verify` | Skip verification stage | Disabled |
| `--verify-only` | Run verification only (no snapshot copy) | Disabled |
| `--skip-verilator` | Skip Verilator lint check | Disabled |

### Generation Process

1. Resolve dataset root from current upstream commit.
2. Optionally run `bender checkout`/`bender update` (with temporary Buildroot URL rewrite).
3. Run verification:
   - lockfile package resolution (`bender path`),
   - `bender flist-plus` generation for `common_cells`,
   - testbench-file presence check in `.bender` (`*_tb.sv`),
   - Verilator lint (`--lint-only`) on `common_cells` slice.
4. Write `verification/verification_summary.txt`.
5. Copy source tree to `source_snapshot/`.
6. Write `cheshire_ihp130_o_summary.txt`.

## Available Designs

Current SCORE output for this target is a commit-scoped snapshot and verification bundle rather than a multi-category design matrix.

- Active dataset example: `datasets/cheshire_ihp130_o/560f00f1/`.
- Verification scope: Bender closure + common-cells RTL slice checks with testbench-presence evidence.

## Output Organization

The canonical output root is `datasets/cheshire_ihp130_o/<commit>/`. Current example:

```text
datasets/cheshire_ihp130_o/560f00f1/
??? cheshire_ihp130_o_summary.txt
??? logs/
?   ??? generate_*.log
??? source_snapshot/
?   ??? hw/
?   ??? sw/
?   ??? .bender/
??? verification/
    ??? verification_summary.txt
    ??? bender_lock_path_check.txt
    ??? bender_script_common_cells.f
    ??? bender_flist_common_cells.stderr.log
    ??? verilator_lint_common_cells.log
```

## Dataset Structure

- `cheshire_ihp130_o_summary.txt`: commit metadata and verification rollup.
- `verification/verification_summary.txt`: PASS/SKIPPED statuses for lockfile, flist, testbench presence, and Verilator lint.
- `verification/bender_lock_path_check.txt`: lockfile resolution results.
- `verification/bender_script_common_cells.f`: generated RTL filelist for verification slice.
- `verification/verilator_lint_common_cells.log`: Verilator lint output.
- `source_snapshot/`: source and dependency snapshot for reproducibility.

## Usage Examples

```bash
# Full orchestrated flow
./scripts/run_cheshire_ihp130_o.sh

# Regenerate from existing checkout (skip install/submodule)
./scripts/run_cheshire_ihp130_o.sh --skip-submodule --skip-install -- --skip-checkout

# Verification-only refresh
./scripts/run_cheshire_ihp130_o.sh --skip-submodule --skip-install -- --verify-only
```

## Performance Expectations

- Bender checkout can be heavy due to nested dependency trees.
- Verification stage is lighter than full SoC simulation since it focuses on a representative RTL slice.
- `--verify-only` and `--skip-checkout` are recommended for rapid revalidation cycles.

## Troubleshooting

- **Symptom**: `tools/cheshire-ihp130-o` missing.
  - **Likely cause**: Submodule not initialized.
  - **Fix**: Run `git submodule update --init --recursive tools/cheshire-ihp130-o`.
- **Symptom**: Bender path check fails.
  - **Likely cause**: Incomplete checkout/dependency state.
  - **Fix**: Run generation without `--skip-checkout`.
- **Symptom**: No testbench sources detected in verification.
  - **Likely cause**: `.bender` dependencies not fully resolved.
  - **Fix**: Re-run checkout and regenerate dataset.
- **Symptom**: Verilator lint fails.
  - **Likely cause**: `verilator` unavailable or incompatible local install.
  - **Fix**: Install/configure Verilator, or use `--skip-verilator` if only non-Verilator checks are required.
