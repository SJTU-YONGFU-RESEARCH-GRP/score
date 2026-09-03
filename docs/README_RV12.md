# RV12 RTL Organization Documentation

This document describes the RV12 scripts used within SCORE and the structure of the datasets they produce.

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

The RV12 scripts provide a workflow for checking out the Roa Logic RV12 SystemVerilog RISC-V core, running Verilator lint verification, and snapshotting the RTL into the SCORE dataset tree.

RV12 is a hand-written (non-Chisel) SystemVerilog implementation. It has two nested submodules: `submodules/ahb3lite_pkg` and `submodules/memory`.

### Scripts Overview

1. **`install_rv12.sh`**: Installs host build tools, initializes `tools/rv12` as a git submodule, and recursively initializes the nested submodules.
2. **`generate_rv12.sh`**: Rsyncs the RTL tree to `datasets/rv12/<commit>/rtl_snapshot/`, runs Verilator lint-only verification against `rtl/filelist_ahb3lite.f`, and writes a dataset summary.

### Upstream

- Repository: [RoaLogic/RV12](https://github.com/RoaLogic/RV12)
- Local tool path: `tools/rv12`

## Installation Script

### Overview

`install_rv12.sh` installs OS build tools (git, make, gcc/g++, and optionally Verilator), then initializes `tools/rv12` and its nested submodules (`ahb3lite_pkg` and `memory`).

### Basic Usage

```bash
# Full setup
./scripts/install_rv12.sh

# Check environment without installing
./scripts/install_rv12.sh --check-only

# Skip distro package installation (CI images, managed environments)
./scripts/install_rv12.sh --no-system-deps

# Skip Verilator installation
./scripts/install_rv12.sh --no-verilator
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--check-only` | Verify tools and submodule; do not install anything |
| `--no-system-deps` | Skip distro package installation |
| `--no-verilator` | Do not install Verilator via the package manager |
| `--debug` | Enable verbose shell output (`set -x`) |

### Environment Variables

| Variable | Description |
|----------|-------------|
| `RV12_SKIP_SYSTEM_DEPS=1` | Same as `--no-system-deps` |

### Dependencies Installed

| Package | Purpose |
|---------|---------|
| git, curl, wget | Source management and downloads |
| build-essential / gcc / g++ / make | C/C++ toolchain for Verilator |
| pkg-config | Build configuration |
| verilator | RTL lint verification (omitted with `--no-verilator`) |

Supported OS families: Ubuntu/Debian, Fedora/RHEL/Amazon, Arch, openSUSE, macOS (Homebrew).

### What the Script Does

1. Detects OS family and installs packages via the appropriate package manager.
2. Calls `score_prepare_tool_checkout` to initialize `tools/rv12` from the SCORE git submodule.
3. Runs `git submodule update --init --recursive` inside `tools/rv12` to populate `submodules/ahb3lite_pkg` and `submodules/memory`.
4. Warns if either nested submodule appears empty.
5. On package manager failure, continues if git, make, and a C/C++ compiler are already available.

## Generation Script

### Overview

`generate_rv12.sh` rsyncs the full RV12 tree into `datasets/rv12/<commit>/rtl_snapshot/rv12/`, then runs Verilator `--lint-only` on `rtl/filelist_ahb3lite.f` together with the submodule dependencies.

### Basic Usage

```bash
# Run full snapshot + default lint
./scripts/generate_rv12.sh

# Run with --timing flag (full static check; still lint-only)
./scripts/generate_rv12.sh --rv12-regression-full

# Only re-run verification; do not rsync again
./scripts/generate_rv12.sh --verify-only

# Snapshot only; skip verification
./scripts/generate_rv12.sh --skip-copy
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--verify-only` | Skip RTL rsync; only run Verilator lint |
| `--skip-copy` | Do not rsync the upstream tree |
| `--rv12-regression-full` | Add `--timing` to Verilator lint (profile=full) |
| `--skip-upstream-regression` | Compatibility alias; selects default lint profile |

### Environment Variables

| Variable | Default | Description |
|----------|---------|-------------|
| `RV12_LINT_PROFILE` | `default` | `default` or `full`; `full` adds `--timing` |
| `RV12_UPSTREAM_REGRESSION` | — | Legacy: `full` maps to profile=full; `skip`/`smoke` maps to default |

### Verilator Lint Profiles

| Profile | Flags | Notes |
|---------|-------|-------|
| `default` | `--lint-only -Wall -Wno-fatal -Wno-BLKANDNBLK` | Fast lint; BLKANDNBLK suppressed (valid IEEE 1800 in upstream) |
| `full` | same + `--timing` | Adds timing-aware static checks |

**Note**: Verilator cannot elaborate the shipped simulation/testbench model due to `ahb3lite_pkg` clocking/modport constraints. SCORE performs lint-only verification.

### Files Required for Lint

The following files must be present (populated by `install_rv12.sh --recursive`):

- `tools/rv12/rtl/filelist_ahb3lite.f`
- `tools/rv12/submodules/ahb3lite_pkg/rtl/verilog/ahb3lite_pkg.sv`
- `tools/rv12/submodules/memory/rtl/verilog/rl_queue.sv`
- `tools/rv12/submodules/memory/rtl/verilog/rl_ram_1r1w.sv`
- `tools/rv12/submodules/memory/rtl/verilog/rl_ram_1r1w_generic.sv`

## Available Designs

RV12 is a single-core design. The SCORE scripts snapshot the entire `tools/rv12` tree at one fixed commit. There are no separately named configuration variants generated by the script; configuration is implicit in the upstream RTL.

## Output Organization

### Directory Structure

```
datasets/rv12/<8-char-commit>/
├── rtl_snapshot/
│   └── rv12/                    # Full rsync of tools/rv12 (excluding .git)
│       ├── rtl/                 # Hand-written SystemVerilog sources
│       ├── submodules/
│       │   ├── ahb3lite_pkg/
│       │   └── memory/
│       └── ...
├── verification/
│   ├── verilator_lint_ahb3lite.log       # default profile
│   ├── verilator_lint_ahb3lite_full.log  # full profile (if used)
│   └── verification_summary.txt
├── logs/
│   ├── main.log
│   └── session_<timestamp>.log
├── manifest.json
└── rv12_summary.txt
```

### Key Files

- **`rtl_snapshot/rv12/rtl/`**: SystemVerilog RTL sources.
- **`verification/verilator_lint_ahb3lite.log`**: Verilator output for the default lint profile.
- **`verification/verification_summary.txt`**: Profile, extra flags, and PASS/FAIL/SKIPPED result.
- **`manifest.json`**: Project, commit, generation timestamp, host OS, and Verilator version.
- **`rv12_summary.txt`**: Full human-readable summary including all verification results.

## Dataset Structure

### Manifest Format

```json
{
  "project": "RoaLogic/RV12",
  "commit_short": "<8-char hash>",
  "dataset_name": "rv12",
  "generated_at_utc": "...",
  "host": "...",
  "os_pretty": "...",
  "verilator": "Verilator <version> ..."
}
```

### Verification Summary (`verification/verification_summary.txt`)

```
RV12 SCORE verification summary
Commit: <commit>

Verilator (commands in generate_rv12.sh only; no Makefile or ModelSim):
  Profile: default | full
  Extra flags: none | --timing
  Log: verification/verilator_lint_ahb3lite[_full].log
  Result: PASS | FAIL | SKIPPED
  Note: Lint-only; Verilator cannot elaborate the shipped sim/TB (ahb3lite_pkg clocking/modports).
```

## Usage Examples

### Basic Workflow

```bash
# 1. Install dependencies and initialize the submodule
./scripts/install_rv12.sh

# 2. Generate the dataset with default lint
./scripts/generate_rv12.sh

# 3. View results
cat datasets/rv12/*/rv12_summary.txt
cat datasets/rv12/*/verification/verification_summary.txt
```

### Full Static Lint

```bash
./scripts/generate_rv12.sh --rv12-regression-full
# or equivalently:
RV12_LINT_PROFILE=full ./scripts/generate_rv12.sh
```

### CI Environment (No sudo)

```bash
./scripts/install_rv12.sh --no-system-deps
./scripts/generate_rv12.sh
```

### Re-run Lint Only

```bash
./scripts/generate_rv12.sh --verify-only
```

## Troubleshooting

**Problem**: `RV12 not found or not a git tree: tools/rv12`
```
Solution: Run ./scripts/install_rv12.sh to initialize the submodule.
```

**Problem**: `Required submodule file missing (init submodules): ...`
```
The nested submodules were not initialized.
Solution: cd tools/rv12 && git submodule update --init --recursive
Or re-run: ./scripts/install_rv12.sh
```

**Problem**: `Missing file list: rtl/filelist_ahb3lite.f`
```
The tools/rv12 checkout is incomplete.
Solution: Re-run install_rv12.sh to ensure a complete checkout.
```

**Problem**: Verilator lint FAIL
```
Solution: Inspect datasets/rv12/<commit>/verification/verilator_lint_ahb3lite.log for the specific error.
Ensure the submodule files listed above are present and that your Verilator version is compatible.
```

**Problem**: `Distro package installation failed` but script continues
```
The script continues if git, make, and gcc/g++ are already on PATH.
Use --no-system-deps on subsequent runs to avoid the sudo prompt.
```

### Getting Help

- Install log: `logs/rv12_install/`
- Generation log: `datasets/rv12/<commit>/logs/`
- Lint log: `datasets/rv12/<commit>/verification/`
- Use `--help` on any script for option details

---

**Note**: This documentation reflects the SCORE wrapper scripts. For full RV12 design documentation, refer to the [upstream repository](https://github.com/RoaLogic/RV12).
