# Cheshire RTL Organization Documentation

![License: Solderpad Hardware License v0.51](https://img.shields.io/badge/license-Solderpad%20Hardware%20License%20v0.51-green)

This document provides comprehensive information about the SCORE Cheshire scripts and generated dataset artifacts under `datasets/cheshire/<commit>/`, grounded in `scripts/`, `tools/cheshire/`, and dataset verification outputs.

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

SCORE packages Cheshire generation as a reproducible workflow: install host dependencies, resolve Bender lockfile dependencies, run Verilator-backed verification on a stable RTL slice, and snapshot artifacts to `datasets/cheshire/<commit>/`.

### Key Features

- **Commit-scoped output**: Dataset root is `datasets/cheshire/<commit>/`.
- **Dependency closure verification**: `Bender.lock` package checks via `bender path`.
- **RTL closure generation**: `bender script flist-plus` for the `common_cells` slice.
- **Verilator verification pipeline**: lint, elaboration smoke build, and full testbench simulation.
- **Deterministic harness**: shared SCORE testbench at `scripts/assets/chimera/tb_stream_fifo.sv`.

### Scripts Overview

1. `./scripts/install_cheshire.sh`: Installs dependencies, Bender, and optional Verilator/C++ packages.
2. `./scripts/generate_cheshire.sh`: Stages source snapshot, runs checkout and verification, writes dataset outputs.
3. `./scripts/run_cheshire.sh`: End-to-end orchestration for submodule, install, and generation steps.
4. `./scripts/cheshire_env.sh`: Optional environment hook sourced when present.

### Architecture Overview

- Upstream Cheshire is described as a lightweight Linux-capable host platform around CVA6.
- SCORE verification intentionally uses a `common_cells` + `stream_fifo` slice to keep checks reproducible.
- Full Cheshire SoC Verilator closure is explicitly not the default SCORE verification path.

## SoC architecture

This section is constrained to upstream README and generated dataset evidence.

### Block-level structure

- Cheshire is documented upstream as a CVA6-based host platform for broader accelerator systems.
- Snapshot includes full source tree plus resolved Bender dependencies in `.bender`.
- Verification artifacts demonstrate successful RTL lint/elaboration/simulation on the selected slice.

### Buses and connectivity

Detailed interconnect topology is not explicitly enumerated in SCORE summary files used here.

### Memory map

No memory-map artifact is summarized in `cheshire_summary.txt` or `verification/verification_summary.txt`.

## Licensing

`tools/cheshire/README.md` states hardware and tool scripts are under Solderpad Hardware License 0.51 (or compatible licenses), with specific component-level exceptions.

The primary upstream license file is `tools/cheshire/LICENSE`.

Generated artifacts in `datasets/cheshire/<commit>/` are derived snapshots and verification outputs from upstream source trees.

## Installation Script

### Overview

`./scripts/install_cheshire.sh` installs required host tooling for Cheshire dataset generation and default Verilator verification.

### Basic Usage

```bash
# Standard installation
./scripts/install_cheshire.sh

# Skip system package installation
./scripts/install_cheshire.sh --no-system-deps

# Skip Bender installation
./scripts/install_cheshire.sh --skip-bender

# Skip Verilator/C++ package install
./scripts/install_cheshire.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help output |
| `--no-system-deps` | Skip distro package install |
| `--skip-bender` | Skip Bender install/check |
| `--no-verilator` | Skip Verilator and C++ package installation |

### Dependencies Installed

| Component | Version | Purpose |
|-----------|---------|---------|
| Core tools (`git`, `curl/wget`, `tar`, `python3`, `rsync`) | Not explicit in script | Required runtime/dependency tooling |
| Verilator + C++ toolchain (default path) | Not explicit in script | Required for lint/elaboration/full-sim steps |
| Bender | Latest GitHub release at install time | Dependency resolution and flist generation |

### Supported Operating Systems

- Debian/Ubuntu (`apt-get`)
- Fedora/RHEL/Amazon (`dnf`/`yum`)
- Arch (`pacman`)
- openSUSE (`zypper`)
- macOS (`brew`)

### Installation Process

1. Validate `tools/cheshire` presence.
2. Optionally install OS packages.
3. Validate required CLI tools.
4. Install Bender unless skipped.
5. Validate Verilator/C++ availability when enabled.

## Generation Script

### Overview

`./scripts/generate_cheshire.sh` stages source files into dataset workdir, performs Bender checkout/update, executes verification checks, and writes snapshot/summary outputs under `datasets/cheshire/<commit>/`.

### Basic Usage

```bash
# Standard generation with verification
./scripts/generate_cheshire.sh

# Reuse existing checkout state
./scripts/generate_cheshire.sh --skip-checkout

# Verification-only mode
./scripts/generate_cheshire.sh --verify-only

# Skip Verilator checks
./scripts/generate_cheshire.sh --skip-verilator

# Keep lint/elaboration but skip clocked full simulation
./scripts/generate_cheshire.sh --no-full-sim
```

### Command-Line Options

| Option | Description | Default |
|--------|-------------|---------|
| `-h, --help` | Show help output | N/A |
| `--skip-checkout` | Skip bender checkout/update | Disabled |
| `--bender-update` | Use `bender update` instead of `checkout` | Disabled |
| `--no-verify` | Skip all verification | Disabled |
| `--verify-only` | Run verification only | Disabled |
| `--skip-verilator` | Skip all Verilator checks | Disabled |
| `--no-full-sim` | Skip full simulation only | Disabled |

### Generation Process

1. Resolve dataset path using current Cheshire commit.
2. Stage `tools/cheshire` into `datasets/cheshire/<commit>/source_snapshot/`.
3. Run `bender checkout` (or `bender update` if requested).
4. Run verification:
   - lockfile package checks (`bender path`),
   - `bender flist-plus` for `common_cells`,
   - Verilator lint (`stream_fifo`),
   - Verilator `--binary` elaboration smoke,
   - full Verilator simulation via shared `tb_stream_fifo` harness (default).
5. Write `verification/verification_summary.txt`.
6. Write `cheshire_summary.txt`.

## Available Designs

Current SCORE Cheshire output is a commit-scoped snapshot and verification bundle rather than a categorized `rtl_designs/` matrix.

- Active dataset example: `datasets/cheshire/79a5f5c4/`.
- Verified testbench flow: `tb_stream_fifo` simulation PASS.

## Output Organization

The canonical output root is `datasets/cheshire/<commit>/`. Current example:

```text
datasets/cheshire/79a5f5c4/
??? cheshire_summary.txt
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

- `cheshire_summary.txt`: commit metadata plus verification rollup.
- `verification/verification_summary.txt`: PASS/SKIPPED status for all checks.
- `verification/bender_*`: lockfile and flist verification artifacts.
- `verification/verilator_*`: lint, elaboration, and full simulation logs.
- `verification/verilator_obj_*`: compiled Verilator object outputs.
- `source_snapshot/`: staged source/dependency tree for reproducibility.

## Usage Examples

```bash
# Full pipeline
./scripts/run_cheshire.sh

# Regenerate without reinstall/submodule steps
./scripts/run_cheshire.sh --skip-submodule --skip-install -- --skip-checkout

# Verification-only re-check
./scripts/run_cheshire.sh --skip-submodule --skip-install -- --verify-only

# Skip full simulation for faster iteration
./scripts/run_cheshire.sh --skip-submodule --skip-install -- --no-full-sim
```

## Performance Expectations

- Bender checkout can be heavy for dependency-rich trees.
- Verilator full simulation is slower than lint/elaboration checks.
- For quick revalidation, use `--verify-only` and optionally `--no-full-sim`.

## Troubleshooting

- **Symptom**: `tools/cheshire` missing.
  - **Likely cause**: Submodule not initialized.
  - **Fix**: Run `git submodule update --init --recursive tools/cheshire` or `./scripts/run_cheshire.sh`.
- **Symptom**: Bender cannot resolve `common_cells`.
  - **Likely cause**: Checkout state missing/stale.
  - **Fix**: Run generation without `--skip-checkout`.
- **Symptom**: Verilator step fails.
  - **Likely cause**: `verilator` or C++ compiler not available.
  - **Fix**: Run `./scripts/install_cheshire.sh` (without `--no-verilator`) or use `--skip-verilator`.
- **Symptom**: Full simulation fails while lint passes.
  - **Likely cause**: Testbench/harness runtime issue.
  - **Fix**: Inspect `verification/verilator_sim_stream_fifo.log`; retry with clean objdir via normal generate flow.
