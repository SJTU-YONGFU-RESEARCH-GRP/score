# VeeR EL2 RTL Organization Documentation

This document describes the VeeR EL2 scripts used within SCORE and the structure of the datasets they produce.

## Table of Contents

- [Overview](#overview)
- [Installation Script](#installation-script)
- [Generation Script](#generation-script)
- [Available Designs](#available-designs)
- [Output Organization](#output-organization)
- [Dataset Structure](#dataset-structure)
- [Usage Examples](#usage-examples)
- [Troubleshooting](#troubleshooting)

## Overview

The VeeR EL2 scripts provide a workflow for cloning the Western Digital VeeR EL2 RISC-V core and snapshotting its RTL into the SCORE dataset tree. VeeR EL2 is a 32-bit RV32IMC core developed by Western Digital and contributed to CHIPS Alliance.

### Scripts Overview

The VeeR EL2 workflow consists of two scripts:

1. **`install_veer_el2.sh`**: Clones the upstream repository and optionally installs host dependencies.
2. **`generate_veer_el2.sh`**: Runs `configs/veer.config` to produce `snapshots/default`, then snapshots `design/`, `configs/`, and `snapshots/` into `datasets/veer_el2/<commit>/`.

### Upstream

- Repository: [chipsalliance/Cores-VeeR-EL2](https://github.com/chipsalliance/Cores-VeeR-EL2)
- Local tool path: `tools/veer-el2`

## Installation Script

### Overview

`install_veer_el2.sh` shallow-clones the VeeR EL2 repository to `tools/veer-el2` and optionally installs Verilator and other host dependencies via `common_simple_rtl.sh`.

### Basic Usage

```bash
# Full setup (clone + host deps)
./scripts/install_veer_el2.sh

# Check whether the tool directory is already present
./scripts/install_veer_el2.sh --check-only

# Skip system dependency installation
./scripts/install_veer_el2.sh --no-system-deps

# Skip Verilator installation
./scripts/install_veer_el2.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--check-only` | Verify that `tools/veer-el2/design` exists; do not install anything |
| `--no-system-deps` | Skip host package installation |
| `--no-verilator` | Do not install Verilator |

### Environment Variables

| Variable | Description |
|----------|-------------|
| `VEER_EL2_SKIP_SYSTEM_DEPS=1` | Same as `--no-system-deps` |

### What the Script Does

1. Sources `common_logging.sh`, `common_submodule_bootstrap.sh`, and `common_simple_rtl.sh`.
2. Optionally installs host dependencies (delegates to `score_simple_install_host_deps`).
3. If `tools/veer-el2/.git` is absent, shallow-clones `https://github.com/chipsalliance/Cores-VeeR-EL2.git` to `tools/veer-el2`.
4. If the directory already exists, runs `score_prepare_tool_checkout` to update it.
5. Verifies that `tools/veer-el2/design/` is present; warns if `configs/veer.config` is missing.

## Generation Script

### Overview

`generate_veer_el2.sh` runs the VeeR EL2 configuration tool to generate `snapshots/default`, then snapshots the `design/`, `configs/`, and `snapshots/` directories into `datasets/veer_el2/<commit>/`.

### Basic Usage

```bash
# Run the full generation workflow
./scripts/generate_veer_el2.sh
```

The generation script does not expose additional command-line flags beyond `--help` (inherited from the common framework). All behavior is controlled by the presence or absence of `configs/veer.config`.

### What the Script Does

1. Determines the short commit hash of `tools/veer-el2` and creates `datasets/veer_el2/<commit>/`.
2. Sets `RV_ROOT=tools/veer-el2`.
3. Runs `perl configs/veer.config -target=default` inside `tools/veer-el2`. On success, copies `snapshots/default/` into `datasets/veer_el2/<commit>/rtl_generated/snapshots/default/`.
4. Calls `score_simple_snapshot_paths` to copy `design/` and `configs/` (and `snapshots/` if present) into `datasets/veer_el2/<commit>/rtl_snapshot/veer_el2/`.
5. Writes `manifest.json` via `score_simple_write_manifest`.
6. Counts `*.sv`/`*.v`/`*.vh` files and writes `veer_el2_summary.txt`.
7. Exits non-zero if no RTL files were found.

**Note**: Verilator lint (`design/flist.lint`) requires a valid `snapshots/default` and is not run by SCORE. The summary marks lint as `SKIPPED`.

## Available Designs

VeeR EL2 is a single configurable core. The generation script uses the `default` target from `configs/veer.config`. The upstream repository supports additional named targets; to use them, run `perl configs/veer.config -target=<name>` manually inside `tools/veer-el2`.

## Output Organization

### Directory Structure

```
datasets/veer_el2/<8-char-commit>/
├── rtl_snapshot/
│   └── veer_el2/
│       ├── design/          # Hand-written Verilog/SystemVerilog RTL
│       ├── configs/         # veer.config and related files
│       └── snapshots/       # Present if upstream snapshots/ exists
├── rtl_generated/
│   └── snapshots/
│       └── default/         # Output of: perl configs/veer.config -target=default
├── verification/            # Empty (lint skipped by SCORE)
├── logs/
│   ├── main.log
│   ├── session_<timestamp>.log
│   └── veer_config.log      # stdout/stderr from veer.config run
├── manifest.json
└── veer_el2_summary.txt
```

### Key Files

- **`rtl_snapshot/veer_el2/design/`**: Source RTL files from the upstream repository.
- **`rtl_generated/snapshots/default/`**: Files produced by `configs/veer.config -target=default` (header includes, parameter files, file lists).
- **`logs/veer_config.log`**: Full output from the Perl configuration tool.
- **`manifest.json`**: Commit ID, project name, generation timestamp, and host info.
- **`veer_el2_summary.txt`**: Human-readable summary: commit, dataset path, veer.config status, RTL file count.

## Dataset Structure

### Manifest Format

```json
{
  "project": "chipsalliance/Cores-VeeR-EL2",
  "commit_short": "<8-char hash>",
  "dataset_name": "veer_el2",
  "generated_at_utc": "...",
  "host": "...",
  "os_pretty": "..."
}
```

### Summary File (`veer_el2_summary.txt`)

```
veer_el2 SCORE snapshot (chipsalliance/Cores-VeeR-EL2)
Commit: <commit>
Dataset: datasets/veer_el2/<commit>
veer.config: OK | FAIL
SV/V/VH files: <count>
Lint: SKIPPED
Note: Verilator lint of design/flist.lint needs generated snapshots/default; run configs/veer.config first. SCORE snapshots design + config output.
```

## Usage Examples

### Basic Workflow

```bash
# 1. Install dependencies and clone the repository
./scripts/install_veer_el2.sh

# 2. Generate the dataset
./scripts/generate_veer_el2.sh

# 3. Inspect the output
ls datasets/veer_el2/
cat datasets/veer_el2/*/veer_el2_summary.txt
```

### Skip System Dependency Installation

```bash
# If you already have git, gcc, and Verilator installed
./scripts/install_veer_el2.sh --no-system-deps
./scripts/generate_veer_el2.sh
```

### Check Environment Only

```bash
./scripts/install_veer_el2.sh --check-only
```

### Regenerate Without Reinstalling

```bash
# Re-run generation after a fresh clone is already in place
./scripts/generate_veer_el2.sh
```

## Troubleshooting

**Problem**: `design/ missing after checkout`
```
The clone did not complete or the submodule was not initialized.
Solution: rm -rf tools/veer-el2 and re-run ./scripts/install_veer_el2.sh
```

**Problem**: `configs/veer.config missing` warning
```
The upstream repository layout may have changed, or the clone is incomplete.
Solution: Verify tools/veer-el2 contains configs/veer.config; re-clone if necessary.
```

**Problem**: `veer.config failed` in summary
```
The Perl configuration script exited non-zero.
Solution: Inspect logs/veer_config.log inside the dataset directory. Ensure perl is on PATH and RV_ROOT is set correctly. The script sets RV_ROOT automatically.
```

**Problem**: `SV/V/VH files: 0`
```
No RTL files were found; the script exits with a non-zero status.
Solution: Confirm the clone succeeded (tools/veer-el2/design/ is populated) and re-run.
```

### Getting Help

- Install log: `logs/veer_el2_install/` (created by `common_logging.sh`)
- Generation logs: `datasets/veer_el2/<commit>/logs/`
- veer.config output: `datasets/veer_el2/<commit>/logs/veer_config.log`
- Use `--help` on any script for option details

---

**Note**: This documentation reflects the SCORE wrapper scripts. For full VeeR EL2 design and simulation documentation, refer to the [upstream repository](https://github.com/chipsalliance/Cores-VeeR-EL2).
