# BlackParrot RTL Organization Documentation

This document describes the BlackParrot RTL organization scripts and the structure of the dataset generated for the [black-parrot/black-parrot](https://github.com/black-parrot/black-parrot) Linux-capable RV64 multicore processor.

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

The BlackParrot scripts provide a workflow for checking out the BlackParrot RTL source and snapshotting it into a structured dataset for hardware design research. BlackParrot is a Linux-capable, open-source RV64GC multicore processor designed for research and education.

### Scripts Overview

The BlackParrot workflow consists of two main scripts:

1. **`install_black_parrot.sh`**: Shallow-clones the BlackParrot repository and initializes the RTL-only submodules (`external/basejump_stl` and `external/HardFloat`). Does not recurse into the bedrock SDK or ramulator.
2. **`generate_black_parrot.sh`**: Snapshots the `bp_*` RTL directories (and BaseJump STL / HardFloat if present) into a commit-tagged dataset directory.

### Architecture Overview

BlackParrot includes the following major RTL subsystems:

- **`bp_common`**: Shared packages, interfaces, and parameters
- **`bp_fe`**: Front-end (instruction fetch)
- **`bp_be`**: Back-end (integer and floating-point execution)
- **`bp_me`**: Memory engine (cache coherence, memory access)
- **`bp_top`**: Full-chip integration wrappers
- **`external/basejump_stl`**: BaseJump Standard Template Library (RTL primitives)
- **`external/HardFloat`**: Berkeley HardFloat floating-point units

## Installation Script

### Overview

`install_black_parrot.sh` performs a shallow clone of the BlackParrot upstream repository and initializes the two RTL dependency submodules. The full bedrock SDK, ramulator, and other non-RTL submodules are intentionally skipped to keep the checkout small.

### Basic Usage

```bash
# Complete environment setup
./scripts/install_black_parrot.sh

# Check that the checkout is present without installing
./scripts/install_black_parrot.sh --check-only

# Skip host package installation (e.g., if already installed)
./scripts/install_black_parrot.sh --no-system-deps

# Skip Verilator installation
./scripts/install_black_parrot.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--check-only` | Verify `tools/black-parrot/bp_top` exists and exit |
| `--no-system-deps` | Skip host package installation |
| `--no-verilator` | Skip Verilator installation |

The environment variable `BLACK_PARROT_SKIP_SYSTEM_DEPS=1` also disables system dependency installation.

### What the Script Does

1. Installs host build dependencies via `score_simple_install_host_deps` (unless skipped).
2. Shallow-clones `https://github.com/black-parrot/black-parrot.git` into `tools/black-parrot` (depth 1), or updates an existing checkout.
3. Initializes `external/basejump_stl` and `external/HardFloat` submodules (depth 1). Other submodules (bedrock, ramulator, SDK) are not initialized.
4. Verifies `tools/black-parrot/bp_top` exists before exiting.

## Generation Script

### Overview

`generate_black_parrot.sh` snapshots the BlackParrot RTL sources into a commit-tagged dataset directory. Because full-chip Verilator lint requires the BlackParrot `make` environment and BaseJump STL include paths, lint is skipped and recorded as `SKIPPED` in the summary.

### Basic Usage

```bash
# Snapshot RTL to datasets/black_parrot/<commit>/
./scripts/generate_black_parrot.sh
```

The script takes no command-line options beyond the shared logging infrastructure.

### What the Script Does

1. Reads the current commit hash from `tools/black-parrot`.
2. Creates `datasets/black_parrot/<commit_id>/logs/` and `verification/`.
3. Snapshots the following paths from the tool directory:
   - `bp_common`, `bp_fe`, `bp_be`, `bp_me`, `bp_top`
   - `external/basejump_stl` (if present)
   - `external/HardFloat` (if present)
4. Writes a `manifest.json` with project metadata.
5. Counts `.sv`/`.v` files and writes `black_parrot_summary.txt`.
6. Exits non-zero if no RTL files were found in the snapshot.

**Note:** Full-chip lint is not performed. The summary records `Lint: SKIPPED` with a note that the BaseJump STL include paths and BP make environment are required for a real lint run.

## Available Designs

BlackParrot is a single, highly parameterized design rather than a set of discrete pre-configured variants. The RTL snapshot captures the full parameterized source tree. Configuration is controlled by BlackParrot's parameter system at elaboration time, not at snapshot time.

The five major RTL subsystems present in every snapshot are:

| Directory | Contents |
|-----------|----------|
| `bp_common` | Shared packages, bus interfaces, parameter definitions |
| `bp_fe` | Instruction fetch pipeline |
| `bp_be` | Integer and FP execution pipeline |
| `bp_me` | Memory system and cache coherence engine |
| `bp_top` | Top-level integration (unicore and multicore wrappers) |

## Output Organization

### Directory Structure

```
datasets/black_parrot/
└── <commit_id>/
    ├── rtl_snapshot/
    │   └── black_parrot/
    │       ├── bp_common/
    │       ├── bp_fe/
    │       ├── bp_be/
    │       ├── bp_me/
    │       ├── bp_top/
    │       ├── external/
    │       │   ├── basejump_stl/
    │       │   └── HardFloat/
    ├── logs/
    │   ├── main.log
    │   └── session_<timestamp>.log
    ├── verification/
    ├── manifest.json
    └── black_parrot_summary.txt
```

### Summary File

`black_parrot_summary.txt` contains:

```
black_parrot SCORE snapshot (black-parrot/black-parrot)
Commit: <short_sha>
Dataset: <absolute_path>
SV/V files: <count>
Lint: SKIPPED
Note: full chip lint needs BaseJump STL include paths and BP make env; SCORE snapshots RTL sources.
```

## Dataset Structure

### Manifest Format

`manifest.json` is written by `score_simple_write_manifest` and records:

```json
{
  "project": "black-parrot/black-parrot",
  "name": "black_parrot",
  "commit": "<commit_id>"
}
```

## Usage Examples

### Basic Workflow

```bash
# 1. Install (shallow clone + RTL submodules)
./scripts/install_black_parrot.sh

# 2. Snapshot RTL into datasets/
./scripts/generate_black_parrot.sh

# 3. Inspect the snapshot
ls datasets/black_parrot/
cat datasets/black_parrot/<commit_id>/black_parrot_summary.txt
```

### Skip System Deps (Pre-installed Environment)

```bash
./scripts/install_black_parrot.sh --no-system-deps
./scripts/generate_black_parrot.sh
```

### Check Existing Installation

```bash
./scripts/install_black_parrot.sh --check-only
```

## Troubleshooting

**Problem**: `bp_top missing after checkout`
```
Cause:  The shallow clone did not complete successfully.
Fix:    Remove tools/black-parrot and re-run install_black_parrot.sh.
```

**Problem**: `basejump_stl init failed` warning during install
```
Cause:  Network issue or the submodule path changed upstream.
Fix:    Check connectivity and re-run. The warning is non-fatal; generation
        will still snapshot bp_* directories without basejump_stl.
```

**Problem**: `Missing tools/black-parrot/bp_top — run install_black_parrot.sh`
```
Cause:  generate_black_parrot.sh was run before install_black_parrot.sh.
Fix:    Run ./scripts/install_black_parrot.sh first.
```

**Problem**: RTL snapshot contains zero `.sv`/`.v` files
```
Cause:  The snapshotted paths are empty (submodules not initialized).
Fix:    Re-run install_black_parrot.sh and confirm basejump_stl / HardFloat
        initialized without errors.
```

### Getting Help

- Check install log: `logs/install_black_parrot/`
- Check generation log: `datasets/black_parrot/<commit>/logs/main.log`
- Use `--help` on either script for option summary

---

**Note**: Full-chip RTL elaboration and lint require the BlackParrot `make` environment with proper include paths. The SCORE scripts snapshot RTL sources only; downstream synthesis or simulation should be performed inside the `tools/black-parrot` tree using the upstream Makefile.
