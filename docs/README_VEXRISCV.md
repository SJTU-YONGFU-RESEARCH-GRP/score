# VexRiscv RTL Organization Documentation

![License: MIT](https://img.shields.io/badge/license-MIT-blue)

This document provides repository-grounded information about the SCORE VexRiscv flow, generated artifacts under `datasets/vexriscv/<commit>/`, and current verification status.

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

SCORE VexRiscv checks out the [SpinalHDL/VexRiscv](https://github.com/SpinalHDL/VexRiscv) repository under `tools/vexriscv/`. Generation writes commit-scoped outputs into `datasets/vexriscv/<commit>/`. When `sbt` and `java` are available, the generate script uses `sbt runMain` to emit Verilog for three default configurations. The emitted Verilog is then verified with Verilator lint.

### Key Features

- **Commit-scoped dataset path**: generation writes under `datasets/vexriscv/<commit>/`.
- **SpinalHDL → Verilog emission**: three default configurations (`GenSmallest`, `GenFull`, `Murax`) are run via `sbt runMain` when Java and sbt are available.
- **Graceful degradation**: if `sbt`/`java` are missing, the script snapshots the Scala sources and skips Verilog emission with a warning.
- **Per-config Verilog capture**: emitted `.v` files are copied from the repository root into `rtl_generated/<ConfigName>/`.
- **Verilator lint on generated Verilog**: lint is run on `GenSmallest/VexRiscv.v` if present, otherwise on the first generated `.v` file found.
- **sbt PATH resolution**: `/opt/sbt/bin` and `~/.local/share/rocket-chip-tools/sbt` are prepended to PATH, in addition to any `setup_local_env.sh`.

### Scripts Overview

1. `./scripts/install_vexriscv.sh`: checks out the VexRiscv repository, initializes nested submodules, optionally installs system packages, and checks for `sbt`.
2. `./scripts/generate_vexriscv.sh`: snapshots Scala sources, runs `sbt runMain` for each config, captures emitted Verilog, and runs Verilator lint.

### Architecture Overview

- Upstream VexRiscv is an FPGA-friendly RV32 CPU written in SpinalHDL (Scala DSL).
- The design is generated at elaboration time via `sbt runMain vexriscv.demo.<Config>`, which writes `.v` files to the repository root.
- SCORE captures the three default demo configs: `GenSmallest`, `GenFull`, and `Murax` (a minimal SoC).

## Installation Script

### Overview

`./scripts/install_vexriscv.sh` prepares the `tools/vexriscv/` checkout, initializes nested submodules, optionally installs system packages, and reports whether `sbt` is available.

### Basic Usage

```bash
# Standard installation
./scripts/install_vexriscv.sh

# Validate existing checkout only
./scripts/install_vexriscv.sh --check-only

# Skip system package installation
./scripts/install_vexriscv.sh --no-system-deps

# Skip Verilator package installation
./scripts/install_vexriscv.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help |
| `--check-only` | Verify that `tools/vexriscv/build.sbt` exists |
| `--no-system-deps` | Skip apt/dnf/… (same as `VEXRISCV_SKIP_SYSTEM_DEPS=1`) |
| `--no-verilator` | Do not install Verilator as part of system packages |

### What the Script Does

1. Optionally installs host system dependencies (including Verilator) via the common helper.
2. If `tools/vexriscv/.git` does not exist, shallow-clones `https://github.com/SpinalHDL/VexRiscv.git` at depth 1. Otherwise, prepares the checkout via submodule bootstrap.
3. Runs `git submodule update --init` inside `tools/vexriscv/`; warns if incomplete.
4. Verifies `build.sbt` exists after checkout.
5. Reports whether `sbt` is on PATH or at `/opt/sbt/bin/sbt`; warns (does not fail) if neither is found.

## Generation Script

### Overview

`./scripts/generate_vexriscv.sh` creates the commit-scoped dataset directory, snapshots Scala sources, emits Verilog for three configurations via `sbt runMain`, and runs Verilator lint on the generated output.

### Basic Usage

```bash
# Run generation (requires Java + sbt for Verilog emission)
./scripts/generate_vexriscv.sh
```

### What the Script Does

1. Prepends `/opt/sbt/bin` and `~/.local/share/rocket-chip-tools/sbt` to PATH; sources `scripts/setup_local_env.sh` if present.
2. Computes the commit ID and creates `datasets/vexriscv/<commit>/logs/`, `verification/`, and `rtl_generated/`.
3. Snapshots all sources (excluding `target/`, `project/target/`, and `*.v`) into `datasets/vexriscv/<commit>/rtl_snapshot/vexriscv/`.
4. Writes `manifest.json`.
5. If `sbt` and `java` are both available, runs `sbt -batch "runMain <config>"` for each of the three default configs with `SBT_OPTS=-Xmx4G`. Per-config logs are written to `logs/sbt_<Config>.log`. Emitted `.v` files from the repository root are copied to `rtl_generated/<Config>/`.
6. If `sbt`/`java` are missing, skips Verilog emission with a warning.
7. Runs Verilator lint on `rtl_generated/GenSmallest/VexRiscv.v` if present; otherwise on the first `.v` file found under `rtl_generated/`.
8. Writes `vexriscv_summary.txt`.
9. Exits non-zero only if `rtl_snapshot/vexriscv/` does not exist (source snapshot always required).

## Available Designs

| Config class | Short name | Description |
|---|---|---|
| `vexriscv.demo.GenSmallest` | `GenSmallest` | Minimal RV32I core |
| `vexriscv.demo.GenFull` | `GenFull` | Full-featured RV32 core |
| `vexriscv.demo.Murax` | `Murax` | Minimal SoC with VexRiscv |

Each config emits a `VexRiscv.v` (and possibly additional `.v` files) into its own subdirectory under `rtl_generated/`.

## Output Organization

```text
datasets/vexriscv/<commit>/
├── vexriscv_summary.txt
├── manifest.json
├── logs/
│   ├── main.log
│   ├── session_<timestamp>.log
│   ├── sbt_GenSmallest.log
│   ├── sbt_GenFull.log
│   └── sbt_Murax.log
├── rtl_snapshot/
│   └── vexriscv/               (Scala sources; *.v excluded)
├── rtl_generated/
│   ├── GenSmallest/
│   │   └── VexRiscv.v
│   ├── GenFull/
│   │   └── VexRiscv.v
│   └── Murax/
│       └── VexRiscv.v
└── verification/
    └── verilator_lint_generated.log
```

## Dataset Structure

- `vexriscv_summary.txt`: commit, sbt config OK/fail counts, generated Verilog file count, and lint result.
- `manifest.json`: standard SCORE manifest (project, name, commit).
- `logs/main.log`: session log from `generate_vexriscv.sh`.
- `logs/sbt_<Config>.log`: per-configuration `sbt runMain` stdout/stderr.
- `rtl_snapshot/vexriscv/`: snapshot of Scala/SBT sources (no generated `.v` files).
- `rtl_generated/<Config>/`: emitted Verilog for each config (only present when `sbt`/`java` succeed).
- `verification/verilator_lint_generated.log`: Verilator lint output on generated Verilog.

## Usage Examples

```bash
# Full install then generate
./scripts/install_vexriscv.sh
./scripts/generate_vexriscv.sh

# Check install without modifying anything
./scripts/install_vexriscv.sh --check-only

# Install without system package changes (sbt must be pre-installed)
./scripts/install_vexriscv.sh --no-system-deps
./scripts/generate_vexriscv.sh
```

## Troubleshooting

- **Symptom**: `Missing tools/vexriscv/build.sbt — run install_vexriscv.sh`.
  - **Fix**: run `./scripts/install_vexriscv.sh` to clone and prepare the repository.
- **Symptom**: `java/sbt missing; skipping Verilog emit`.
  - **Fix**: install Java (e.g. `dnf install java-17-openjdk`) and sbt (see [scala-sbt.org](https://www.scala-sbt.org/download/)). The script checks `/opt/sbt/bin/sbt` as a fallback.
- **Symptom**: `sbt runMain <Config> failed`.
  - **Fix**: inspect `datasets/vexriscv/<commit>/logs/sbt_<Config>.log`. Common causes are insufficient heap (default `SBT_OPTS=-Xmx4G`) or missing SpinalHDL dependencies in the sbt cache.
- **Symptom**: Verilator lint fails on generated Verilog.
  - **Fix**: inspect `datasets/vexriscv/<commit>/verification/verilator_lint_generated.log`. Ensure Verilator is installed; re-run `./scripts/install_vexriscv.sh` without `--no-verilator` if needed.
- **Symptom**: `Nested submodule init incomplete`.
  - **Fix**: check network access and re-run `./scripts/install_vexriscv.sh` to retry `git submodule update --init`.
