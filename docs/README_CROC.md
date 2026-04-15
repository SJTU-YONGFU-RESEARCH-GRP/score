# Croc RTL Organization Documentation

![License: SolderPad Hardware License v0.51](https://img.shields.io/badge/license-SolderPad%20Hardware%20License%20v0.51-green)

This document provides comprehensive information about SCORE Croc scripts and generated dataset artifacts under `datasets/croc/<commit>/`, grounded in repository scripts, upstream sources, and generated verification outputs.

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

SCORE wraps Croc generation into a reproducible workflow: initialize the upstream checkout, install host dependencies, run Bender-based dependency closure checks, execute Verilator smoke validation, and stage a commit-scoped source snapshot under `datasets/croc/<commit>/`.

### Key Features

- **Commit-scoped datasets**: Output root follows `datasets/croc/<commit>/` (for example `datasets/croc/5cf46130/`).
- **Bender lockfile closure checks**: Verification confirms `Bender.lock` packages resolve via `bender path`.
- **Deterministic RTL slice checks**: Uses `bender script flist-plus -p common_cells` to validate a stable verification slice.
- **Verilator-backed validation**: Includes lint, elaboration smoke build, and full simulation for `tb_stream_fifo`.
- **Reproducible source snapshot**: Stages upstream source plus resolved dependencies into `source_snapshot/`.

### Scripts Overview

1. `./scripts/install_croc.sh`: Installs required host tools, Bender, and optional Verilator/C++ toolchain.
2. `./scripts/generate_croc.sh`: Stages snapshot, runs Bender checkout/update, executes verification, and writes dataset artifacts.
3. `./scripts/run_croc.sh`: End-to-end orchestration for submodule preparation, install, and generate flow.
4. `./scripts/croc_env.sh`: Optional environment hook sourced by run/generate scripts when present.

### Architecture Overview

- Upstream Croc is described as an education-focused SoC with a `croc_domain` and a `user_domain`.
- SCORE verification in this dataset targets a `common_cells/stream_fifo` slice for deterministic smoke testing.
- Full Croc SoC closure is outside the default SCORE Verilator path used by `generate_croc.sh`.

See upstream context in `tools/croc/README.md`.

## SoC architecture

This section summarizes upstream Croc architecture statements from `tools/croc/README.md` and distinguishes them from SCORE verification scope.

### Block-level structure

- Upstream documentation describes two main domains:
  - `croc_domain` (CVE2 core, SRAM, OBI crossbar, basic peripherals)
  - `user_domain` (integration area for custom peripherals/accelerators)
- Upstream configuration references `rtl/croc_pkg.sv`, `rtl/core_wrap.sv`, and `rtl/croc_soc.sv` for default SoC structure and connectivity.
- Current SCORE dataset validation focuses on `common_cells` stream FIFO checks rather than full `croc_soc` simulation closure.

### Buses and connectivity

- Upstream README names OBI as the main interconnect.
- SCORE summary and verification artifacts do not add bus-topology detail beyond the upstream description.

### Memory map

`tools/croc/README.md` provides a default address map. Representative regions include:

| Region | Description |
|--------|-------------|
| `0x0000_0000` - `0x0004_0000` | Debug module (JTAG) |
| `0x0200_0000` - `0x0200_4000` | Boot ROM |
| `0x0300_2000` - `0x0300_3000` | UART peripheral |
| `0x1000_0000` - `+SRAM_SIZE` | SRAM banks |
| `0x2000_0000` - `0x8000_0000` | Passthrough to user domain |

## Licensing

From `tools/croc/LICENSE.md` and `tools/croc/README.md`:

- Primary upstream hardware/tool-script license: SolderPad Hardware License v0.51 (`tools/croc/LICENSE.md`).
- `tools/croc/README.md` also notes software sources are under Apache 2.0.

Generated dataset artifacts in `datasets/croc/<commit>/` are snapshots and verification outputs derived from upstream-licensed sources.

## Installation Script

### Overview

`./scripts/install_croc.sh` installs system prerequisites for dataset generation, ensures Bender availability, and optionally installs Verilator plus a C++ compiler for verification steps.

### Basic Usage

```bash
# Standard install flow
./scripts/install_croc.sh

# Skip distro package installation
./scripts/install_croc.sh --no-system-deps

# Skip Bender installation
./scripts/install_croc.sh --skip-bender

# Skip Verilator/C++ package install
./scripts/install_croc.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help |
| `--no-system-deps` | Skip OS package installation step |
| `--skip-bender` | Skip Bender download/verification |
| `--no-verilator` | Skip Verilator and C++ package installation |

### Dependencies Installed

| Component | Version | Purpose |
|-----------|---------|---------|
| Core utilities (`git`, `curl/wget`, `tar`, `python3`, `rsync`) | Not explicit in script | Required for checkout, scripting, and dataset staging |
| Bender | Latest upstream release at install time | Dependency resolution and flist generation |
| Verilator + C++ toolchain (default path) | Not explicit in script | Lint/elaboration/simulation verification |

### Supported Operating Systems

- Debian/Ubuntu (`apt-get`)
- Fedora/RHEL/Amazon Linux (`dnf`/`yum`)
- Arch (`pacman`)
- openSUSE (`zypper`)
- macOS (`brew`)

### Installation Process

1. Detect host OS family and select package manager behavior.
2. Install core utilities (and optional Verilator/C++ packages).
3. Validate required tools (`git`, `tar`, `python3`, `rsync`, `curl`/`wget`).
4. Install Bender when not already available (unless skipped).
5. Report Verilator/C++ readiness for generation verification.

## Generation Script

### Overview

`./scripts/generate_croc.sh` stages the Croc source tree into `datasets/croc/<commit>/source_snapshot/`, runs Bender checkout/update, executes verification checks, and writes `croc_summary.txt` plus detailed verification logs.

### Basic Usage

```bash
# Standard generation with verification
./scripts/generate_croc.sh

# Reuse existing checkout
./scripts/generate_croc.sh --skip-checkout

# Use bender update instead of checkout
./scripts/generate_croc.sh --bender-update

# Verification-only mode
./scripts/generate_croc.sh --verify-only

# Skip Verilator checks
./scripts/generate_croc.sh --skip-verilator

# Keep lint/elaboration but skip full TB simulation
./scripts/generate_croc.sh --no-full-sim
```

### Command-Line Options

| Option | Description | Default |
|--------|-------------|---------|
| `-h, --help` | Show help | N/A |
| `--skip-checkout` | Skip `bender checkout`/`update` | Disabled |
| `--bender-update` | Run `bender update` instead of checkout | Disabled |
| `--no-verify` | Skip all verification steps | Disabled |
| `--verify-only` | Run only verification phase | Disabled |
| `--skip-verilator` | Skip Verilator lint/elaboration/simulation | Disabled |
| `--no-full-sim` | Skip full simulation while keeping earlier checks | Disabled |

### Generation Process

1. Resolve current Croc commit and dataset destination (`datasets/croc/<commit>/`).
2. Stage `tools/croc` into `source_snapshot/` using `rsync`.
3. Run `bender checkout` (default) or `bender update`.
4. Run verification checks:
   - `bender path` for all lockfile packages,
   - `bender script flist-plus -p common_cells`,
   - Verilator lint (`stream_fifo`),
   - Verilator `--binary` elaboration smoke,
   - optional full simulation with `scripts/assets/chimera/tb_stream_fifo.sv`.
5. Write `verification/verification_summary.txt`.
6. Write `croc_summary.txt` with tool versions and verification rollup.

## Available Designs

Current SCORE output for Croc is a commit-scoped source snapshot plus verification bundle; this dataset does not include a categorized `rtl_designs/` matrix.

- Example validated dataset: `datasets/croc/5cf46130/`
- Verification status in this dataset: lockfile checks PASS, flist PASS, Verilator lint PASS, elaboration PASS, simulation PASS.

## Output Organization

The canonical dataset root is `datasets/croc/<commit>/`. Current generated instance:

```text
datasets/croc/5cf46130/
??? croc_summary.txt
??? logs/
?   ??? generate_20260415_110551.log
?   ??? generate_20260415_162620.log
??? source_snapshot/
?   ??? Bender.lock
?   ??? Bender.yml
?   ??? rtl/
?   ??? ihp13/
?   ??? scripts/
?   ??? sw/
?   ??? yosys/
?   ??? openroad/
?   ??? verilator/
?   ??? ... (other upstream directories)
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

- `croc_summary.txt`: high-level dataset metadata, tool versions, and verification rollup.
- `logs/`: captured run logs for generation sessions.
- `source_snapshot/`: staged copy of `tools/croc` at the commit used for this dataset (including dependency resolution artifacts).
- `verification/verification_summary.txt`: PASS/SKIPPED summary for each verification stage.
- `verification/bender_*`: lockfile/path and filelist evidence used before Verilator checks.
- `verification/verilator_*`: lint, elaboration, and simulation outputs for the verification slice.

## Usage Examples

```bash
# Full orchestrated flow
./scripts/run_croc.sh

# Skip submodule/install and only regenerate
./scripts/run_croc.sh --skip-submodule --skip-install -- --skip-checkout

# Verification-only refresh (no new snapshot)
./scripts/run_croc.sh --skip-submodule --skip-install -- --verify-only

# Faster loop: skip full simulation
./scripts/run_croc.sh --skip-submodule --skip-install -- --no-full-sim
```

## Performance Expectations

- Bender checkout/update can dominate runtime on first execution due to dependency materialization.
- Verilator full simulation is slower than lint/elaboration-only checks.
- `--verify-only` and `--no-full-sim` are useful for faster validation loops.

## Troubleshooting

- **Symptom**: `tools/croc` is missing.
  - **Likely cause**: Submodule not initialized.
  - **Fix**: Run `git submodule update --init --recursive tools/croc`.
- **Symptom**: `bender` is not found.
  - **Likely cause**: Install step skipped or PATH not updated.
  - **Fix**: Run `./scripts/install_croc.sh` (or `source scripts/croc_env.sh` if already installed).
- **Symptom**: Verilator steps fail in generation.
  - **Likely cause**: Missing `verilator` and/or C++ compiler.
  - **Fix**: Run `./scripts/install_croc.sh` without `--no-verilator`, or use `--skip-verilator`.
- **Symptom**: Full simulation fails but lint passes.
  - **Likely cause**: Testbench/runtime issue in the verification harness.
  - **Fix**: Inspect `datasets/croc/<commit>/verification/verilator_sim_stream_fifo.log` and rerun generation.
