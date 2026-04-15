# Carfield RTL Organization Documentation

![License: Solderpad Hardware License v0.51](https://img.shields.io/badge/license-Solderpad%20Hardware%20License%20v0.51-green)

This document provides comprehensive information about the SCORE Carfield scripts and generated dataset artifacts under `datasets/carfield/<commit>/`, grounded in `scripts/`, `tools/carfield/`, and dataset verification outputs.

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

SCORE wraps Carfield generation into a reproducible workflow: install dependencies, run Bender dependency checkout (or reuse existing state), execute dataset verification checks, and snapshot generated source state into `datasets/carfield/<commit>/`.

### Key Features

- **Commit-scoped output**: Every dataset is rooted at `datasets/carfield/<commit>/`.
- **Bender dependency validation**: Checks lockfile package resolution using `bender path`.
- **RTL filelist verification**: Generates `bender script flist-plus` for a common-cells RTL slice.
- **Verilator evidence**: Runs Verilator lint (`--lint-only`) on that validated slice.
- **Testbench presence check**: Confirms `_tb.sv` testbench files exist in resolved `.bender` dependencies.

### Scripts Overview

1. `./scripts/install_carfield.sh`: Installs common host dependencies and Bender.
2. `./scripts/generate_carfield.sh`: Runs checkout/update, verification checks, and snapshot generation.
3. `./scripts/run_carfield.sh`: End-to-end orchestration for submodule, install, and generate steps.
4. `./scripts/carfield_env.sh`: Optional environment setup consumed by generation flow when present.

### Architecture Overview

- Upstream Carfield is documented as a configurable heterogeneous platform for mixed-criticality systems.
- SCORE dataset generation focuses on reproducible dependency closure and verifiable artifact packaging rather than full upstream simulation flows.
- For upstream simulation/target details, see `tools/carfield/README.md`.

## SoC architecture

This section reflects documented upstream context and generated dataset evidence.

### Block-level structure

- Carfield upstream positions itself as a heterogeneous SoC platform with configurable subsystems.
- Snapshot contents include hardware and software trees plus resolved dependency checkouts (`source_snapshot/.bender/`).
- Verification is applied to a representative RTL slice (`common_cells`) to produce deterministic Verilator evidence.

### Buses and connectivity

Detailed interconnect topology is not explicitly enumerated in the SCORE summary files used here.

### Memory map

No memory-map artifact is summarized in `carfield_summary.txt` or `verification/verification_summary.txt`.

## Licensing

`tools/carfield/LICENSE` states **SOLDERPAD HARDWARE LICENSE version 0.51**.

Upstream README also notes hardware/tool scripts under Solderpad 0.51 with specific exceptions (such as generated register code and software under Apache 2.0 depending on file-level origin).

Generated dataset artifacts in `datasets/carfield/<commit>/` are snapshots derived from upstream sources and dependencies.

## Installation Script

### Overview

`./scripts/install_carfield.sh` installs core prerequisites for Carfield dataset generation, including Bender and standard CLI tooling used by checkout/snapshot flow.

### Basic Usage

```bash
# Standard installation
./scripts/install_carfield.sh

# Skip OS package installation
./scripts/install_carfield.sh --no-system-deps

# Skip Bender installation
./scripts/install_carfield.sh --skip-bender
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
| Core tools (`git`, `curl/wget`, `tar`, `python3`, `rsync`) | Not explicit in script | Required for script execution and source staging |
| Bender | Latest GitHub release at install time | Lockfile dependency resolution and filelist generation |

### Supported Operating Systems

- Debian/Ubuntu (`apt-get`)
- Fedora/RHEL/Amazon (`dnf`/`yum`)
- Arch (`pacman`)
- openSUSE (`zypper`)
- macOS (`brew`)

### Installation Process

1. Validate `tools/carfield` exists in the SCORE checkout.
2. Optionally install platform-specific packages.
3. Validate required tools (`git`, `python3`, `rsync`, downloader tools).
4. Install Bender unless skipped.
5. Print next-step guidance for generation.

## Generation Script

### Overview

`./scripts/generate_carfield.sh` performs Bender checkout/update, executes verification checks, and snapshots Carfield sources to `datasets/carfield/<commit>/source_snapshot/`.

### Basic Usage

```bash
# Standard generation (checkout + verification + snapshot)
./scripts/generate_carfield.sh

# Reuse existing checkout and regenerate outputs
./scripts/generate_carfield.sh --skip-checkout

# Verification-only pass (no snapshot copy)
./scripts/generate_carfield.sh --verify-only

# Skip Verilator lint while keeping bender checks
./scripts/generate_carfield.sh --skip-verilator
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

1. Resolve dataset path from current Carfield commit.
2. Optionally run `bender checkout` (or `bender update`) with temporary Buildroot URL rewrite.
3. Run verification:
   - lockfile package resolution (`bender path`),
   - `bender script flist-plus` for common-cells RTL slice,
   - testbench-file presence check in resolved `.bender` dependencies,
   - Verilator lint on the common-cells slice.
4. Write `verification/verification_summary.txt`.
5. Snapshot sources into `datasets/carfield/<commit>/source_snapshot/`.
6. Write `carfield_summary.txt`.

## Available Designs

Current SCORE Carfield output is a commit-scoped snapshot and verification bundle rather than a categorized `rtl_designs/` matrix.

- Active dataset example: `datasets/carfield/ee168c59/`.
- Verification scope: dependency closure + common-cells RTL slice checks.

## Output Organization

The canonical output root is `datasets/carfield/<commit>/`. Current example:

```text
datasets/carfield/ee168c59/
??? carfield_summary.txt
??? logs/
?   ??? generate_*.log
??? source_snapshot/
?   ??? hw/
?   ??? sw/
?   ??? target/
?   ??? .bender/
??? verification/
    ??? verification_summary.txt
    ??? bender_lock_path_check.txt
    ??? bender_script_common_cells.f
    ??? bender_flist_common_cells.stderr.log
    ??? verilator_lint_common_cells.log
```

## Dataset Structure

- `carfield_summary.txt`: dataset metadata and verification rollup.
- `verification/verification_summary.txt`: PASS/SKIPPED statuses for lockfile, flist, testbench-presence, and Verilator lint checks.
- `verification/bender_lock_path_check.txt`: lockfile package resolution trace.
- `verification/bender_script_common_cells.f`: generated flist for verification slice.
- `verification/verilator_lint_common_cells.log`: Verilator lint output.
- `source_snapshot/`: full staged source tree including resolved `.bender` dependency checkout content.

## Usage Examples

```bash
# Full pipeline
./scripts/run_carfield.sh

# Skip install/submodule and regenerate from current checkout
./scripts/run_carfield.sh --skip-submodule --skip-install -- --skip-checkout

# Verify-only pass to refresh verification summary
./scripts/run_carfield.sh --skip-submodule --skip-install -- --verify-only
```

## Performance Expectations

- Bender checkout can be large due to nested dependency trees.
- Verification is relatively lightweight versus full SoC simulation flows.
- `--verify-only` and `--skip-checkout` are useful for rapid revalidation loops.

## Troubleshooting

- **Symptom**: `tools/carfield` missing.
  - **Likely cause**: Submodule not initialized.
  - **Fix**: Run `git submodule update --init --recursive tools/carfield` or `./scripts/run_carfield.sh`.
- **Symptom**: Bender checkout/update fails on Buildroot URL.
  - **Likely cause**: `git://` remote reachability.
  - **Fix**: Use `generate_carfield.sh` default flow, which applies temporary URL rewrite during bender operations.
- **Symptom**: Verification fails at lockfile path check.
  - **Likely cause**: Incomplete dependency checkout.
  - **Fix**: Re-run generation without `--skip-checkout`.
- **Symptom**: Verilator lint step fails.
  - **Likely cause**: `verilator` unavailable on `PATH`.
  - **Fix**: Install Verilator manually or rerun with `--skip-verilator` if only non-Verilator checks are needed.
