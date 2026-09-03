# PicoRV32 RTL Organization Documentation

![License: ISC](https://img.shields.io/badge/license-ISC-blue)

This document provides repository-grounded information about the SCORE PicoRV32 flow, generated artifacts under `datasets/picorv32/<commit>/`, and current verification status.

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

SCORE PicoRV32 checks out the [YosysHQ/picorv32](https://github.com/YosysHQ/picorv32) repository under `tools/picorv32/`. Generation writes commit-scoped outputs into `datasets/picorv32/<commit>/` and runs Verilator lint on the core and optionally on PicoSoC.

### Key Features

- **Commit-scoped dataset path**: generation writes under `datasets/picorv32/<commit>/`.
- **Single-file core**: the design entry point is `picorv32.v` at the repository root.
- **PicoSoC lint**: if a `picosoc/` directory is present, all `.v` files inside are linted together with `picorv32.v`.
- **Verilator lint verification**: both `picorv32.v` and PicoSoC files are run through Verilator lint; results are recorded in `picorv32_summary.txt`.

### Scripts Overview

1. `./scripts/install_picorv32.sh`: checks out the PicoRV32 repository and optionally installs host system packages including Verilator.
2. `./scripts/generate_picorv32.sh`: snapshots all RTL, writes a manifest, and runs Verilator lint on the core and PicoSoC.

### Architecture Overview

- Upstream PicoRV32 is a size-optimized RV32IMC CPU core written in Verilog, distributed by YosysHQ.
- The repository includes the `picorv32.v` core and a `picosoc/` directory containing PicoSoC integration files.
- Verification in SCORE uses Verilator lint only; no simulation or synthesis is performed.

## Installation Script

### Overview

`./scripts/install_picorv32.sh` prepares the `tools/picorv32/` checkout and optionally installs system dependencies via the common host-deps helper.

### Basic Usage

```bash
# Standard installation
./scripts/install_picorv32.sh

# Validate existing checkout only
./scripts/install_picorv32.sh --check-only

# Skip system package installation
./scripts/install_picorv32.sh --no-system-deps

# Skip Verilator package installation
./scripts/install_picorv32.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help |
| `--check-only` | Verify checkout only |
| `--no-system-deps` | Skip apt/dnf/… (same as `PICORV32_SKIP_SYSTEM_DEPS=1`) |
| `--no-verilator` | Do not install Verilator as part of system packages |

### What the Script Does

1. Optionally installs host system dependencies (including Verilator) via the common helper.
2. Prepares the `tools/picorv32/` checkout via submodule bootstrap.
3. Verifies that `picorv32.v` exists after checkout; exits with error if missing.

## Generation Script

### Overview

`./scripts/generate_picorv32.sh` creates the commit-scoped dataset directory, snapshots all RTL files, writes a manifest, and runs Verilator lint on `picorv32.v` and optionally on PicoSoC.

### Basic Usage

```bash
# Run generation
./scripts/generate_picorv32.sh
```

### What the Script Does

1. Computes the commit ID and creates `datasets/picorv32/<commit>/logs/` and `verification/`.
2. Snapshots all RTL from `tools/picorv32/` into `datasets/picorv32/<commit>/rtl_snapshot/picorv32/`.
3. Writes `manifest.json`.
4. Runs Verilator lint on `picorv32.v`; records result as `PASS`/`FAIL` in `CORE_LINT`.
5. If `picosoc/` is present and contains `.v` files, runs Verilator lint on all PicoSoC files combined with `picorv32.v`; records result as `PICO_LINT`.
6. Writes `picorv32_summary.txt`.
7. Exits non-zero if core lint result is `FAIL`.

## Available Designs

| Design | Description |
|--------|-------------|
| `picorv32.v` | Core PicoRV32 CPU (RV32IMC) |
| `picosoc/` | PicoSoC integration files (linted when present) |

## Output Organization

```text
datasets/picorv32/<commit>/
├── picorv32_summary.txt
├── manifest.json
├── logs/
│   ├── main.log
│   └── session_<timestamp>.log
├── rtl_snapshot/
│   └── picorv32/
└── verification/
    ├── verilator_lint_picorv32.log
    └── verilator_lint_picosoc.log  (when PicoSoC present)
```

## Dataset Structure

- `picorv32_summary.txt`: commit, dataset path, core lint result, and PicoSoC lint result.
- `manifest.json`: standard SCORE manifest (project, name, commit).
- `logs/main.log`: session log from `generate_picorv32.sh`.
- `rtl_snapshot/picorv32/`: snapshot of the upstream repository RTL.
- `verification/verilator_lint_picorv32.log`: Verilator lint output for `picorv32.v`.
- `verification/verilator_lint_picosoc.log`: Verilator lint output for PicoSoC files (only when `picosoc/` is present).

## Usage Examples

```bash
# Full install then generate
./scripts/install_picorv32.sh
./scripts/generate_picorv32.sh

# Check install without modifying anything
./scripts/install_picorv32.sh --check-only

# Install without system package changes
./scripts/install_picorv32.sh --no-system-deps
./scripts/generate_picorv32.sh
```

## Troubleshooting

- **Symptom**: `picorv32.v missing after checkout`.
  - **Fix**: the checkout step failed; check network access and re-run `./scripts/install_picorv32.sh`.
- **Symptom**: `Missing tools/picorv32`.
  - **Fix**: run `./scripts/install_picorv32.sh` to perform the initial checkout.
- **Symptom**: Verilator lint fails (`CORE_LINT=FAIL`).
  - **Fix**: inspect `datasets/picorv32/<commit>/verification/verilator_lint_picorv32.log` for the specific lint errors. Ensure Verilator is installed; re-run `./scripts/install_picorv32.sh` without `--no-verilator` if needed.
