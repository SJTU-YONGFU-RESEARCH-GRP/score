# Chimera RTL Organization Documentation

![License: Solderpad Hardware License v0.51](https://img.shields.io/badge/license-Solderpad%20Hardware%20License%20v0.51-green) ![License: Apache-2.0](https://img.shields.io/badge/license-Apache--2.0-blue)

This document provides comprehensive information about SCORE Chimera scripts and generated dataset artifacts under `datasets/chimera/<commit>/`, grounded in repository scripts, upstream sources, and generated verification results.

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

SCORE wraps Chimera generation into a reproducible workflow: install host dependencies, resolve Bender lockfile dependencies, run Verilator-backed verification on a stable RTL slice, and snapshot source/dependency state under `datasets/chimera/<commit>/`.

### Key Features

- **Commit-scoped output**: Dataset root pattern is `datasets/chimera/<commit>/`.
- **Bender dependency closure checks**: Validates `Bender.lock` packages via `bender path`.
- **RTL filelist generation**: Uses `bender script flist-plus` on a `common_cells` verification slice.
- **Verilator verification**: Includes lint, elaboration smoke build, and full testbench simulation.
- **Shared deterministic harness**: Full simulation uses `scripts/assets/chimera/tb_stream_fifo.sv`.

### Scripts Overview

1. `./scripts/install_chimera.sh`: Installs dependencies, Bender, and optional Verilator/C++ toolchain.
2. `./scripts/generate_chimera.sh`: Stages source snapshot, runs checkout and verification, writes outputs.
3. `./scripts/run_chimera.sh`: End-to-end orchestration for submodule, install, and generate flow.
4. `./scripts/chimera_env.sh`: Optional environment hook sourced during execution.

### Architecture Overview

- Upstream Chimera is described as a configurable microcontroller SoC template for heterogeneous multi-accelerator systems.
- SCORE verification focuses on reproducible dependency closure and a verified `common_cells/stream_fifo` slice.
- Full Chimera SoC Verilator closure is not the default SCORE verification path.

## SoC architecture

This section is limited to upstream README evidence and generated dataset outputs.

### Block-level structure

- Chimera targets multi-cluster heterogeneous integration and accelerator-focused SoC composition.
- Dataset snapshot includes source trees and resolved Bender checkouts (`source_snapshot/.bender/...`).
- Verification artifacts show successful lint/elaboration/simulation for a representative RTL slice.

### Buses and connectivity

Detailed bus-level topology is not explicitly enumerated in SCORE summary/verification files used here.

### Memory map

No explicit memory-map artifacts are summarized in `chimera_summary.txt` or `verification/verification_summary.txt`.

## Licensing

From `tools/chimera/README.md` and license files:

- Hardware/tool scripts: Solderpad Hardware License 0.51 (`tools/chimera/LICENSE-SHL`)
- Register-file generated code and software sources: Apache 2.0 (`tools/chimera/LICENSE-APACHE`)

Generated dataset artifacts in `datasets/chimera/<commit>/` are snapshots and verification outputs derived from upstream sources.

## Installation Script

### Overview

`./scripts/install_chimera.sh` installs required host tooling for Chimera dataset generation and default Verilator-based checks.

### Basic Usage

```bash
# Standard installation
./scripts/install_chimera.sh

# Skip distro package installation
./scripts/install_chimera.sh --no-system-deps

# Skip Bender installation
./scripts/install_chimera.sh --skip-bender

# Skip Verilator/C++ package install
./scripts/install_chimera.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help output |
| `--no-system-deps` | Skip distro package installation |
| `--skip-bender` | Skip Bender installation |
| `--no-verilator` | Skip Verilator and C++ toolchain installation |

### Dependencies Installed

| Component | Version | Purpose |
|-----------|---------|---------|
| Core tools (`git`, `curl/wget`, `tar`, `python3`, `rsync`) | Not explicit in script | Runtime/dependency support |
| Verilator + C++ toolchain (default install path) | Not explicit in script | Lint/elaboration/simulation checks |
| Bender | Latest GitHub release at install time | Lockfile resolution and filelist generation |

### Supported Operating Systems

- Debian/Ubuntu (`apt-get`)
- Fedora/RHEL/Amazon (`dnf`/`yum`)
- Arch (`pacman`)
- openSUSE (`zypper`)
- macOS (`brew`)

### Installation Process

1. Validate `tools/chimera` exists in SCORE checkout.
2. Optionally install OS package prerequisites.
3. Validate required CLI tools.
4. Install Bender unless skipped.
5. Validate Verilator/C++ availability when enabled.

## Generation Script

### Overview

`./scripts/generate_chimera.sh` stages sources to dataset workdir, runs Bender checkout/update, executes verification checks, and writes snapshots/results under `datasets/chimera/<commit>/`.

### Basic Usage

```bash
# Standard generation with full verification
./scripts/generate_chimera.sh

# Reuse existing checkout state
./scripts/generate_chimera.sh --skip-checkout

# Verification-only mode
./scripts/generate_chimera.sh --verify-only

# Skip Verilator checks
./scripts/generate_chimera.sh --skip-verilator

# Keep lint + elaboration but skip clocked full simulation
./scripts/generate_chimera.sh --no-full-sim
```

### Command-Line Options

| Option | Description | Default |
|--------|-------------|---------|
| `-h, --help` | Show help output | N/A |
| `--skip-checkout` | Skip bender checkout/update | Disabled |
| `--bender-update` | Use `bender update` instead of `checkout` | Disabled |
| `--no-verify` | Skip all verification | Disabled |
| `--verify-only` | Run verification only | Disabled |
| `--skip-verilator` | Skip Verilator checks | Disabled |
| `--no-full-sim` | Skip full simulation only | Disabled |

### Generation Process

1. Resolve dataset root from current Chimera commit.
2. Stage `tools/chimera` into `datasets/chimera/<commit>/source_snapshot/`.
3. Run `bender checkout`/`bender update` with temporary Buildroot URL rewrite.
4. Run verification:
   - lockfile package resolution (`bender path`),
   - `bender flist-plus` for `common_cells`,
   - Verilator lint on `stream_fifo`,
   - Verilator `--binary` elaboration smoke,
   - full Verilator simulation with `tb_stream_fifo` harness (default).
5. Write `verification/verification_summary.txt`.
6. Write `chimera_summary.txt`.

## Available Designs

Current SCORE output for Chimera is a commit-scoped snapshot and verification bundle, not a categorized `rtl_designs/` matrix.

- Active dataset example: `datasets/chimera/208b36ef/`.
- Verified simulation target: `tb_stream_fifo` (PASS).

## Output Organization

The canonical dataset root is `datasets/chimera/<commit>/`. Current example:

```text
datasets/chimera/208b36ef/
??? chimera_summary.txt
??? logs/
?   ??? generate_*.log
??? source_snapshot/
?   ??? hw/
?   ??? target/
?   ??? .bender/
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

- `chimera_summary.txt`: dataset metadata and verification rollup.
- `verification/verification_summary.txt`: PASS/SKIPPED statuses for all verification stages.
- `verification/bender_*`: lockfile and flist verification artifacts.
- `verification/verilator_*`: lint, elaboration, and simulation logs.
- `verification/verilator_obj_*`: compiled Verilator object outputs.
- `source_snapshot/`: staged source/dependency snapshot for reproducibility.

## Usage Examples

```bash
# Full end-to-end flow
./scripts/run_chimera.sh

# Re-run generation without install/submodule
./scripts/run_chimera.sh --skip-submodule --skip-install -- --skip-checkout

# Verification-only refresh
./scripts/run_chimera.sh --skip-submodule --skip-install -- --verify-only

# Skip clocked simulation for faster checks
./scripts/run_chimera.sh --skip-submodule --skip-install -- --no-full-sim
```

## Performance Expectations

- Bender checkout can be heavy due to nested dependency trees.
- Verilator full simulation is slower than lint/elaboration checks.
- `--verify-only` and `--no-full-sim` are useful for quick validation loops.

## Troubleshooting

- **Symptom**: `tools/chimera` missing.
  - **Likely cause**: Submodule not initialized.
  - **Fix**: Run `git submodule update --init --recursive tools/chimera`.
- **Symptom**: Bender full-package flist fails due to missing generated files.
  - **Likely cause**: Upstream iDMA generation prerequisites not run.
  - **Fix**: Use SCORE default common-cells slice verification path, or run upstream generation steps before full flist attempts.
- **Symptom**: Verilator steps fail.
  - **Likely cause**: `verilator` or C++ toolchain missing.
  - **Fix**: Run `./scripts/install_chimera.sh` without `--no-verilator`, or use `--skip-verilator`.
- **Symptom**: Full simulation fails while lint passes.
  - **Likely cause**: Testbench/runtime issue.
  - **Fix**: Inspect `verification/verilator_sim_stream_fifo.log` and rerun with clean generated objdirs via normal generate flow.
