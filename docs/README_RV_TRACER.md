# rv_tracer RTL Organization Documentation

This document describes the rv_tracer scripts used within SCORE and the structure of the datasets they produce.

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

The rv_tracer scripts provide a workflow for resolving IP dependencies with Bender, running a Verilator smoke simulation, and snapshotting the rv_tracer SystemVerilog sources into the SCORE dataset tree.

rv_tracer is a hand-written SystemVerilog trace encoder for RISC-V processors developed by the PULP Platform group. There is no Chisel elaboration step; the workflow mirrors other Bender-based PULP Platform IP in SCORE (resolves dependencies, then snapshots).

### Scripts Overview

1. **`install_rv_tracer.sh`**: Installs host packages (git, curl/wget, tar, python3, Verilator) and downloads the Bender binary.
2. **`generate_rv_tracer.sh`**: Runs `bender update` to resolve IP dependencies, runs a Verilator smoke simulation, copies the full tree to `datasets/rv_tracer/<commit>/source_snapshot/`, and writes a dataset summary.

### Upstream

- Repository: [pulp-platform/rv_tracer](https://github.com/pulp-platform/rv_tracer)
- Local tool path: `tools/rv-tracer`

## Installation Script

### Overview

`install_rv_tracer.sh` installs OS packages including Verilator, then installs the Bender binary (via `common_bender.sh`). Verilator is required because the generate script performs a smoke simulation by default.

### Basic Usage

```bash
# Full setup
./scripts/install_rv_tracer.sh

# Skip distro package installation
./scripts/install_rv_tracer.sh --no-system-deps

# Skip Bender download (if already on PATH)
./scripts/install_rv_tracer.sh --skip-bender
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--no-system-deps` | Do not install distro packages; requires git, curl/wget, tar, python3, and verilator to already be present |
| `--skip-bender` | Do not download Bender |

### Dependencies Installed

| Package | Purpose |
|---------|---------|
| git, curl, wget, ca-certificates, tar | Source management and downloads |
| python3 (python3-venv on Debian/Ubuntu) | Required by upstream tooling |
| verilator | Smoke simulation in `generate_rv_tracer.sh` |

Supported OS families: Ubuntu/Debian, Fedora/RHEL/Amazon, Arch, openSUSE, macOS (Homebrew).

### What the Script Does

1. Installs system packages via the detected package manager.
2. Verifies that `tools/rv-tracer` submodule directory is present (exits with an error if not).
3. Checks that `git`, `tar`, `python3`, and one of `curl`/`wget` are available.
4. Verifies that `verilator` is on PATH; exits with an error if it is not.
5. If Bender is not already on PATH (and `--skip-bender` is not set), calls `install_bender_binary` from `common_bender.sh`.

### After Installation

```bash
source scripts/rv_tracer_env.sh
./scripts/generate_rv_tracer.sh
```

## Generation Script

### Overview

`generate_rv_tracer.sh` runs `bender update` in `tools/rv-tracer` to resolve IP dependencies (including `common_cells` and `tech_cells_generic`), then performs a Verilator smoke simulation of the `rv_tracer` top module. The full source tree (including `.bender/` checkouts) is then rsynced to `datasets/rv_tracer/<commit>/source_snapshot/`.

### Basic Usage

```bash
# Full workflow: bender update + Verilator smoke + snapshot
./scripts/generate_rv_tracer.sh

# Skip bender update (reuse existing .bender/)
./scripts/generate_rv_tracer.sh --skip-bender-update

# Skip Verilator smoke simulation
./scripts/generate_rv_tracer.sh --skip-verilator-sim
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--skip-bender-update` | Do not run `bender update`; requires `.bender/` to already exist |
| `--skip-verilator-sim` | Skip Verilator smoke simulation |

### Verilator Smoke Simulation

The smoke simulation:

1. Resolves `common_cells` and `tech_cells_generic` directories from `.bender/git/checkouts/`.
2. Generates a file list at `tools/rv-tracer/work-vlt/files` referencing:
   - `common_cells`: `counter.sv`, `cf_math_pkg.sv`, `sync.sv`, `sync_wedge.sv`, `edge_detect.sv`
   - `tech_cells_generic`: `tc_clk.sv`, `pulp_clk_cells.sv`
   - rv_tracer sources: `include/te_pkg.sv`, `rtl/te_branch_map.sv`, `te_filter.sv`, `te_packet_emitter.sv`, `lzc.sv`, `te_priority.sv`, `te_reg.sv`, `te_resync_counter.sv`, `rv_tracer.sv`
   - A SCORE-provided wrapper: `scripts/assets/rv_tracer/rv_tracer_smoke_top.sv`
3. Compiles a minimal C++ harness with Verilator (`--cc --top-module rv_tracer_smoke_top`).
4. Runs the compiled binary for 32 clock cycles (reset deasserted at cycle 4).
5. Reports PASS/FAIL/SKIP.

**Note**: The upstream simulation flow uses Questa via `make run`. SCORE uses Verilator smoke simulation instead.

## Available Designs

rv_tracer is a single IP block. The SCORE scripts produce one snapshot per commit. There are no named configuration variants; the design parameters are fixed in the RTL.

## Output Organization

### Directory Structure

```
datasets/rv_tracer/<8-char-commit>/
├── source_snapshot/             # rsync of tools/rv-tracer (excluding .git/)
│   ├── rtl/                     # SystemVerilog RTL sources
│   ├── include/                 # Package definitions (te_pkg.sv)
│   ├── tb/                      # Upstream testbench
│   ├── decoder/
│   ├── .bender/                 # Resolved IP checkouts from bender update
│   ├── Bender.yml
│   ├── Makefile
│   └── ...
├── rtl_designs/
│   └── rv_tracer_snapshot/
│       ├── filelist.f           # List of up to 200 .sv/.v files in source_snapshot
│       ├── config.yaml          # Project metadata
│       └── rv_tracer_smoke_tb.sv  # Simple Verilog testbench stub
├── verification/
│   ├── verilator_smoke_<timestamp>.log
│   ├── verification_results_<timestamp>.txt
│   └── verification_summary.txt
├── logs/
│   └── generate_<timestamp>.log
└── rv_tracer_summary.txt
```

### Key Files

- **`source_snapshot/rtl/`**: The rv_tracer SystemVerilog source files.
- **`source_snapshot/.bender/`**: IP checkouts resolved by `bender update` (required for the upstream Questa flow and `generate_do.py`).
- **`rtl_designs/rv_tracer_snapshot/filelist.f`**: File list of up to 200 discovered `.sv`/`.v` files.
- **`verification/verilator_smoke_<timestamp>.log`**: Verilator compilation and simulation output.
- **`verification/verification_results_<timestamp>.txt`**: One-line result record: `rv_tracer_smoke|PASS|FAIL|SKIP|...`.

## Dataset Structure

### config.yaml

```yaml
project: rv_tracer
config_name: rv_tracer_snapshot
generation_date_utc: <timestamp>
git_commit_short: <8-char hash>
source_snapshot: datasets/rv_tracer/<commit>/source_snapshot
```

### Verification Results File

```
rv_tracer_smoke|<PASS|FAIL|SKIP>|verilator_smoke|<log path>|<rtl dir>
```

### Verification Summary (`verification/verification_summary.txt`)

```
rv_tracer verification summary
...
Checks:
  Verilog RTL presence: PASS
  Testbench artifacts generated: PASS
  Verilator simulation PASS: 1|0
  Verilator simulation FAIL: 0|1
  Verilator simulation SKIP: 0|1
Artifacts:
  verification results: ...
  verilator smoke log: ...
```

## Usage Examples

### Basic Workflow

```bash
# 1. Initialize the submodule (if not already done)
git submodule update --init --recursive tools/rv-tracer

# 2. Install dependencies
./scripts/install_rv_tracer.sh

# 3. Source the environment file
source scripts/rv_tracer_env.sh

# 4. Generate the dataset
./scripts/generate_rv_tracer.sh

# 5. Check results
cat datasets/rv_tracer/*/rv_tracer_summary.txt
```

### Skip Bender Update (Fast Re-run)

```bash
# Reuse existing .bender/ checkouts
./scripts/generate_rv_tracer.sh --skip-bender-update
```

### Skip Verilator Smoke

```bash
./scripts/generate_rv_tracer.sh --skip-verilator-sim
```

### CI Environment

```bash
./scripts/install_rv_tracer.sh --no-system-deps
source scripts/rv_tracer_env.sh
./scripts/generate_rv_tracer.sh
```

## Troubleshooting

**Problem**: `Missing tools/rv-tracer`
```
Solution: git submodule update --init --recursive tools/rv-tracer
```

**Problem**: `bender not found on PATH`
```
Solution: Run ./scripts/install_rv_tracer.sh to install Bender, or add it to PATH manually.
```

**Problem**: `verilator not found on PATH`
```
Verilator is required for smoke simulation.
Solution: Install it (./scripts/install_rv_tracer.sh will include it), or use --skip-verilator-sim.
```

**Problem**: `Could not resolve common_cells/tech_cells_generic in .bender`
```
The bender update step did not complete or was skipped.
Solution: Run without --skip-bender-update to let bender resolve dependencies.
```

**Problem**: Verilator smoke simulation FAIL
```
Solution: Inspect datasets/rv_tracer/<commit>/verification/verilator_smoke_<timestamp>.log for error details.
```

**Problem**: `Missing Verilator smoke top: scripts/assets/rv_tracer/rv_tracer_smoke_top.sv`
```
Solution: Ensure the SCORE repository is fully checked out; this file is part of the SCORE scripts/assets directory.
```

### Getting Help

- Installation log: created by `common_logging.sh` (check `logs/` in project root)
- Generation log: `datasets/rv_tracer/<commit>/logs/generate_<timestamp>.log`
- Smoke log: `datasets/rv_tracer/<commit>/verification/verilator_smoke_<timestamp>.log`
- Use `--help` on any script for option details

---

**Note**: This documentation reflects the SCORE wrapper scripts. For full rv_tracer design documentation, refer to the [upstream repository](https://github.com/pulp-platform/rv_tracer).
