# Safety Island RTL Organization Documentation

This document describes the safety_island scripts used within SCORE and the structure of the datasets they produce.

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

The safety_island scripts provide a workflow for resolving IP dependencies with Bender, snapshotting the full RTL tree, and running a Verilator lint check on a synthetic smoke module. The RTL is then stored in `datasets/safety_island/<commit>/`.

The safety_island is a PULP Platform SoC subsystem designed for functional safety applications.

### Scripts Overview

1. **`install_safety_island.sh`**: Installs host packages (git, curl/wget, tar, python3, rsync) and downloads the Bender binary.
2. **`generate_safety_island.sh`**: Runs `bender checkout` (or `bender update`) to resolve IP dependencies, rsyncs the full tree to `datasets/safety_island/<commit>/source_snapshot/`, and performs a Verilator lint check on a synthetic smoke testbench.

### Upstream

- Repository: [pulp-platform/safety_island](https://github.com/pulp-platform/safety_island)
- Local tool path: `tools/safety-island`

## Installation Script

### Overview

`install_safety_island.sh` installs OS packages and the Bender dependency manager. Unlike rv_tracer, Verilator is not installed or required by the install script; the generate script runs Verilator lint only if `verilator` is already on PATH.

### Basic Usage

```bash
# Full setup
./scripts/install_safety_island.sh

# Skip distro package installation
./scripts/install_safety_island.sh --no-system-deps

# Skip Bender download
./scripts/install_safety_island.sh --skip-bender
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--no-system-deps` | Do not install distro packages; requires git, curl/wget, tar, python3, and rsync to be present |
| `--skip-bender` | Do not download Bender |

### Dependencies Installed

| Package | Purpose |
|---------|---------|
| git, curl, wget, ca-certificates, tar | Source management and downloads |
| rsync | Used by generate script to snapshot sources |
| python3 (python3-venv on Debian/Ubuntu) | Required by upstream tooling |

Supported OS families: Ubuntu/Debian, Fedora/RHEL/Amazon, Arch, openSUSE, macOS (Homebrew).

### What the Script Does

1. Verifies that `tools/safety-island` is present (exits with error if not).
2. Installs system packages via the detected package manager.
3. Checks that `git`, `tar`, `python3`, `rsync`, and one of `curl`/`wget` are available.
4. If Bender is not already on PATH (and `--skip-bender` is not set), calls `install_bender_binary` from `common_bender.sh`.

### After Installation

```bash
source scripts/safety_island_env.sh
./scripts/generate_safety_island.sh
```

## Generation Script

### Overview

`generate_safety_island.sh` runs `bender checkout` (honoring `Bender.lock`) to materialize IP checkouts, rsyncs the full `tools/safety-island` tree to `datasets/safety_island/<commit>/source_snapshot/`, and runs Verilator `--lint-only` on a synthetic smoke testbench (not on the full safety_island RTL).

### Basic Usage

```bash
# Full workflow: bender checkout + rsync + Verilator lint
./scripts/generate_safety_island.sh

# Skip bender checkout (reuse existing .bender/)
./scripts/generate_safety_island.sh --skip-checkout

# Use bender update instead of checkout (experimental; may fail)
./scripts/generate_safety_island.sh --bender-update
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--skip-checkout` | Do not run bender; requires `.bender/` to already exist |
| `--bender-update` | Run `bender update` instead of `bender checkout` (experimental; may fail if manifests conflict) |

### Bender Behavior

The default is `bender checkout`, which reads `Bender.lock` and checks out pinned dependency versions. This is the stable option. `bender update` resolves fresh versions from manifests and may fail if dependency graphs conflict.

### Verilator Lint Check

The generate script creates a minimal synthetic module and testbench (`safety_island_smoke_top.v` / `safety_island_smoke_tb.sv`) and runs:

```bash
verilator --lint-only -Wall -Wno-fatal --timing \
    --top-module safety_island_smoke_tb \
    safety_island_smoke_top.v safety_island_smoke_tb.sv
```

This checks that Verilator is functional and produces a lint result (PASS/FAIL/SKIP). The full safety_island RTL is not linted by SCORE.

If `verilator` is not on PATH, the lint result is SKIP.

## Available Designs

safety_island is a single SoC subsystem design. SCORE produces one snapshot per commit. There are no named configuration variants generated by the scripts.

## Output Organization

### Directory Structure

```
datasets/safety_island/<8-char-commit>/
├── source_snapshot/                  # rsync of tools/safety-island (excluding .git/)
│   ├── rtl/                          # SystemVerilog RTL sources
│   ├── .bender/                      # Resolved IP checkouts from bender checkout
│   ├── Bender.yml
│   ├── Bender.lock
│   └── ...
├── rtl_designs/
│   └── safety_island_snapshot/
│       ├── filelist.f                # List of up to 200 .sv/.v files in source_snapshot
│       ├── config.yaml               # Project metadata
│       ├── safety_island_smoke_top.v # Synthetic smoke module
│       └── safety_island_smoke_tb.sv # Synthetic smoke testbench
├── verification/
│   ├── safety_island_smoke_verilator_lint.log
│   ├── verification_results_<timestamp>.txt
│   └── verification_summary.txt
├── logs/
│   └── generate_<timestamp>.log
└── safety_island_summary.txt
```

### Key Files

- **`source_snapshot/`**: Full tree including `.bender/` IP checkouts required for downstream use.
- **`rtl_designs/safety_island_snapshot/filelist.f`**: Auto-generated list of up to 200 `.sv`/`.v` files found in `source_snapshot/`.
- **`verification/safety_island_smoke_verilator_lint.log`**: Verilator lint output for the smoke module.
- **`safety_island_summary.txt`**: Human-readable summary including bender checkout status, file count, and lint result.

## Dataset Structure

### config.yaml

```yaml
project: safety_island
config_name: safety_island_snapshot
generation_date_utc: <timestamp>
git_commit_short: <8-char hash>
source_snapshot: datasets/safety_island/<commit>/source_snapshot
```

### Verification Results File

```
safety_island_smoke|<PASS|FAIL|SKIP>|verilator_lint|<log path>|<rtl dir>
```

### Verification Summary (`verification/verification_summary.txt`)

```
safety_island verification summary
...
Checks:
  Verilog RTL presence: PASS
  Testbench artifacts generated: PASS
  Verilator lint PASS: 1|0
  Verilator lint FAIL: 0|1
  Verilator lint SKIP: 0|1
Artifacts:
  verification results: ...
  verilator lint log: ...
```

## Usage Examples

### Basic Workflow

```bash
# 1. Initialize the submodule
git submodule update --init --recursive tools/safety-island

# 2. Install dependencies
./scripts/install_safety_island.sh

# 3. Source environment (if safety_island_env.sh exists)
source scripts/safety_island_env.sh

# 4. Generate the dataset
./scripts/generate_safety_island.sh

# 5. Check results
cat datasets/safety_island/*/safety_island_summary.txt
```

### Skip Bender Checkout (Fast Re-run)

```bash
# Reuse existing .bender/ from a previous run
./scripts/generate_safety_island.sh --skip-checkout
```

### Use Bender Update

```bash
# Resolve fresh dependency versions (may fail if manifests conflict)
./scripts/generate_safety_island.sh --bender-update
```

### CI Environment

```bash
./scripts/install_safety_island.sh --no-system-deps
source scripts/safety_island_env.sh
./scripts/generate_safety_island.sh
```

## Troubleshooting

**Problem**: `Missing tools/safety-island`
```
Solution: git submodule update --init --recursive tools/safety-island
```

**Problem**: `bender not found on PATH`
```
Solution: Run ./scripts/install_safety_island.sh to install Bender.
```

**Problem**: `rsync not found`
```
rsync is required to copy the source tree.
Solution: Install rsync (./scripts/install_safety_island.sh will include it), or install manually.
```

**Problem**: `.bender missing; run without --skip-checkout first`
```
Solution: Run ./scripts/generate_safety_island.sh without --skip-checkout to perform bender checkout.
```

**Problem**: `bender update` fails
```
Solution: Use the default bender checkout instead (do not pass --bender-update). Upstream manifests may conflict during update resolution.
```

**Problem**: Verilator lint FAIL on smoke module
```
Solution: Check datasets/safety_island/<commit>/verification/safety_island_smoke_verilator_lint.log.
The smoke module is synthetic; failures here indicate a Verilator installation issue rather than RTL problems.
```

### Getting Help

- Installation log: created by `common_logging.sh`
- Generation log: `datasets/safety_island/<commit>/logs/generate_<timestamp>.log`
- Lint log: `datasets/safety_island/<commit>/verification/safety_island_smoke_verilator_lint.log`
- Use `--help` on any script for option details

---

**Note**: This documentation reflects the SCORE wrapper scripts. For full safety_island design documentation, refer to the [upstream repository](https://github.com/pulp-platform/safety_island) and `tools/safety-island/README.md`.
