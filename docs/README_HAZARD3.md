# Hazard3 RTL Organization Documentation

This document describes the Hazard3 RTL organization scripts and the structure of the dataset generated for the [Wren6991/Hazard3](https://github.com/Wren6991/Hazard3) RISC-V processor.

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

The Hazard3 scripts provide a workflow for checking out the Hazard3 RTL source and snapshotting it into a structured dataset. Hazard3 is a 3-stage RV32 RISC-V processor core written in SystemVerilog.

### Scripts Overview

1. **`install_hazard3.sh`**: Prepares the `tools/hazard3` submodule, initializes non-test submodules, and verifies the `hdl/` directory exists.
2. **`generate_hazard3.sh`**: Snapshots the full repository (via `score_simple_snapshot_rtl`), runs Verilator lint on the `hdl/` sources, and writes a summary.

### Architecture Overview

Hazard3 RTL lives under `hdl/`. The primary top-level file is `hdl/hazard3_core.v`. Arithmetic helpers are in `hdl/arith/`. An example SoC integration is available under `example_soc/`. Test submodules (e.g., `test/riscv-tests`) are intentionally not initialized by the install script because they are very large.

## Installation Script

### Overview

`install_hazard3.sh` prepares the `tools/hazard3` submodule and selectively initializes submodules that are not under `test/`.

### Basic Usage

```bash
# Complete environment setup
./scripts/install_hazard3.sh

# Check that the checkout is present without installing
./scripts/install_hazard3.sh --check-only

# Skip host package installation
./scripts/install_hazard3.sh --no-system-deps

# Skip Verilator installation
./scripts/install_hazard3.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--check-only` | Verify `tools/hazard3/hdl` exists and exit |
| `--no-system-deps` | Skip host package installation |
| `--no-verilator` | Skip Verilator installation |

The environment variable `HAZARD3_SKIP_SYSTEM_DEPS=1` also disables system dependency installation.

### What the Script Does

1. Installs host build dependencies via `score_simple_install_host_deps` (unless skipped).
2. Prepares the `tools/hazard3` submodule checkout via `score_prepare_tool_checkout`.
3. Reads `.gitmodules` and initializes every submodule whose path does **not** start with `test/`. This avoids the multi-GB `test/riscv-tests` tree.
4. Verifies `tools/hazard3/hdl` exists before exiting.

## Generation Script

### Overview

`generate_hazard3.sh` snapshots the full Hazard3 repository and runs Verilator lint on the HDL sources.

### Basic Usage

```bash
# Snapshot RTL and run lint
./scripts/generate_hazard3.sh
```

The script takes no command-line options.

### What the Script Does

1. Reads the current commit hash from `tools/hazard3`.
2. Creates `datasets/hazard3/<commit_id>/logs/` and `verification/`.
3. Snapshots the repository via `score_simple_snapshot_rtl`.
4. Writes `manifest.json`.
5. Collects all `.v`, `.sv`, and `.vh` files under `hdl/`.
6. Runs Verilator lint:
   - If `hdl/hazard3_core.v` exists: lints all `.v` files under `hdl/` that are not in `hdl/debug/`, using `-Ihdl -Ihdl/arith` include paths.
   - Otherwise: lints all collected HDL files with `-Ihdl`.
   - Lint failure is non-fatal (recorded in the summary).
7. Writes `hazard3_summary.txt` and exits non-zero only if lint result is `FAIL`.

## Available Designs

Hazard3 is a single parameterized design. The snapshot captures the complete source tree at the checked-out commit. Configuration (ISA extensions, debug support, etc.) is controlled by parameters at elaboration time, not by the SCORE scripts.

## Output Organization

### Directory Structure

```
datasets/hazard3/
└── <commit_id>/
    ├── rtl_snapshot/
    │   └── hazard3/         (full repository snapshot)
    ├── logs/
    │   ├── main.log
    │   └── session_<timestamp>.log
    ├── verification/
    │   └── verilator_lint_hdl.log
    ├── manifest.json
    └── hazard3_summary.txt
```

### Summary File

`hazard3_summary.txt` contains:

```
hazard3 SCORE snapshot (Wren6991/Hazard3)
Commit: <short_sha>
Dataset: <absolute_path>
Lint: PASS | FAIL | SKIPPED
HDL files: <count>
```

## Dataset Structure

### Manifest Format

`manifest.json` is written by `score_simple_write_manifest` and records:

```json
{
  "project": "Wren6991/Hazard3",
  "name": "hazard3",
  "commit": "<commit_id>"
}
```

## Usage Examples

### Basic Workflow

```bash
# 1. Install submodule and host deps
./scripts/install_hazard3.sh

# 2. Snapshot RTL and lint
./scripts/generate_hazard3.sh

# 3. Inspect results
ls datasets/hazard3/
cat datasets/hazard3/<commit_id>/hazard3_summary.txt
cat datasets/hazard3/<commit_id>/verification/verilator_lint_hdl.log
```

### Skip System Deps

```bash
./scripts/install_hazard3.sh --no-system-deps
./scripts/generate_hazard3.sh
```

### Check Existing Installation

```bash
./scripts/install_hazard3.sh --check-only
```

## Troubleshooting

**Problem**: `hdl/ missing` during install
```
Cause:  The submodule checkout did not complete.
Fix:    Remove tools/hazard3 and re-run install_hazard3.sh.
```

**Problem**: `Missing tools/hazard3/hdl — run install_hazard3.sh`
```
Cause:  generate_hazard3.sh was run before install_hazard3.sh.
Fix:    Run ./scripts/install_hazard3.sh first.
```

**Problem**: `No Verilog sources under hdl/`
```
Cause:  The hdl/ directory is empty or the submodule is uninitialized.
Fix:    Re-run install_hazard3.sh and confirm the checkout succeeded.
```

**Problem**: Lint result is `FAIL`
```
Cause:  Verilator found errors in the HDL sources.
Fix:    Inspect datasets/hazard3/<commit>/verification/verilator_lint_hdl.log.
```

**Problem**: Submodule init warning for a non-test path
```
Cause:  A non-test submodule failed to initialize (network issue or removed upstream).
Fix:    Check connectivity; the warning is non-fatal and generation will proceed.
```

### Getting Help

- Check install log: `logs/install_hazard3/`
- Check generation log: `datasets/hazard3/<commit>/logs/main.log`
- Use `--help` on the install script for option summary

---

**Note**: Test submodules (e.g., `test/riscv-tests`) are not initialized by the SCORE install script to avoid large downloads. For full test execution, refer to the upstream [Wren6991/Hazard3](https://github.com/Wren6991/Hazard3) repository.
