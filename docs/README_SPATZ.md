# Spatz RTL Organization Documentation

This document describes the Spatz scripts used within SCORE and the structure of the datasets they produce.

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

The Spatz scripts provide a workflow for building a pinned Bender binary via `make bender`, resolving IP dependencies with `bender checkout`, optionally verifying the `spatz_cluster` RTL, and snapshotting the full tree into `datasets/spatz/<commit>/`.

Spatz is a PULP Platform compact RISC-V vector processing unit. It vendors its own pinned Bender binary under `install/bender/` and uses `util/clustergen.py` to generate cluster wrapper RTL.

### Scripts Overview

1. **`install_spatz.sh`**: Installs host packages (including build tools, flex, bison, cmake), installs Python packages for clustergen (`hjson`, `jstyleson`, `jsonref`, `jsonschema`, `mako`), and optionally installs a global Bender binary.
2. **`generate_spatz.sh`**: Runs `make bender` to install the pinned Bender, runs `bender checkout`, optionally verifies the `spatz_cluster` RTL (clustergen + Verilator lint or `make verilate`), and rsyncs the full tree to `datasets/spatz/<commit>/source_snapshot/`.

### Upstream

- Repository: [pulp-platform/spatz](https://github.com/pulp-platform/spatz)
- Local tool path: `tools/spatz`

## Installation Script

### Overview

`install_spatz.sh` installs a broader set of OS packages than other PULP Platform scripts (including flex, bison, cmake, ninja, and clang) to support optional downstream toolchain builds. It also installs Python packages needed by `util/clustergen.py`. It does not build LLVM, GCC, Spike, Verilator, or run `update_opcodes`.

### Basic Usage

```bash
# Full setup
./scripts/install_spatz.sh

# Skip distro package installation
./scripts/install_spatz.sh --no-system-deps

# Skip global Bender download (upstream make bender still works)
./scripts/install_spatz.sh --skip-bender
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--no-system-deps` | Do not install distro packages |
| `--skip-bender` | Do not download Bender into `~/.local/bin`; upstream `make bender` will still install to `tools/spatz/install/bender/` |

### Dependencies Installed

| Package | Purpose |
|---------|---------|
| git, curl, wget, ca-certificates, tar | Source management and downloads |
| python3 (python3-venv on Debian/Ubuntu) | clustergen and upstream tooling |
| make, gcc, g++ | Build tools |
| flex, bison, help2man | Verilator/GCC build prerequisites |
| libfl-dev, zlib1g-dev, libelf-dev (Debian/Ubuntu) | Verilator build prerequisites |
| autoconf, automake, libtool, pkg-config | Build configuration |
| clang, cmake, ninja | Alternative compiler and build system |

Supported OS families: Ubuntu/Debian, Fedora/RHEL/Amazon, Arch, openSUSE, macOS (Homebrew).

### Python Packages Installed

```
hjson  jstyleson  jsonref  jsonschema  mako
```

These are required by `tools/spatz/util/clustergen.py` and are installed with `pip install --user`.

### What the Script Does

1. Installs system packages via the detected package manager.
2. Checks that `git`, `make`, `gcc`, `g++`, `tar`, `python3`, and one of `curl`/`wget` are available.
3. Installs Python packages for clustergen.
4. If Bender is not already on PATH (and `--skip-bender` is not set), calls `install_bender_binary` from `common_bender.sh`.

### After Installation

```bash
source scripts/spatz_env.sh
./scripts/generate_spatz.sh
```

## Generation Script

### Overview

`generate_spatz.sh` installs a pinned Bender via `make bender` (inside `tools/spatz`), runs `bender checkout` to resolve IP dependencies, optionally verifies the `spatz_cluster` RTL, and rsyncs the full tree to `datasets/spatz/<commit>/source_snapshot/`.

The default RTL verification mode is `lint` (Verilator `--lint-only` via the upstream bender filelist).

### Basic Usage

```bash
# Full workflow: make bender + bender checkout + lint verify + rsync
./scripts/generate_spatz.sh

# Skip make bender / bender checkout
./scripts/generate_spatz.sh --skip-checkout

# Skip RTL verification
./scripts/generate_spatz.sh --no-verify-rtl

# Use a specific verification mode
./scripts/generate_spatz.sh --verify-rtl=generate
./scripts/generate_spatz.sh --verify-rtl=lint
./scripts/generate_spatz.sh --verify-rtl=verilate
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--skip-checkout` | Do not run `make bender` or `bender checkout` |
| `--no-verify-rtl` | Skip RTL verification entirely |
| `--verify-rtl[=MODE]` | Set verification mode (default: `lint`). Modes: `lint`, `generate`, `verilate` |

### RTL Verification Modes

| Mode | Steps | Notes |
|------|-------|-------|
| `generate` | `make generate` (clustergen only) | Checks Python clustergen pipeline; does not require Verilator |
| `lint` | `make generate` + Verilator `--lint-only` | Default; requires Verilator on PATH |
| `verilate` | `make generate` + `make verilate` | Compiles C++ model; slow; requires Verilator |

All modes first run `util/clustergen.py` to produce `src/generated/spatz_cluster_wrapper.sv` and `src/generated/bootrom.sv`. If `riscv32-unknown-elf-gcc` is not available, a dummy `test/bootrom.bin` is used (RTL-check only; not valid for simulation).

### Bender Binary

Spatz vendors a pinned Bender under `tools/spatz/install/bender/`. The generate script:
1. Runs `make bender BENDER_VERSION=<version>` in `tools/spatz` to install it.
2. If the vendored binary is absent after `make bender`, creates a symlink from the PATH `bender` binary.
3. Uses the vendored binary (`BENDER=install/bender/bender`) for all subsequent bender calls.

The `SPATZ_BENDER_VERSION` environment variable can override the Bender version passed to `make bender`.

### Environment Variables

| Variable | Default | Description |
|----------|---------|-------------|
| `SPATZ_BENDER_VERSION` | PATH bender version, else `0.31.0` | Bender version for `make bender` |
| `SPATZ_VERIFY_JOBS` | CPU count | Parallel jobs for `make verilate` |
| `PYTHON` | `python3` | Python interpreter for clustergen; set if your venv lacks hjson/mako |

## Available Designs

Spatz is a single cluster design. SCORE produces one snapshot per commit. RTL generation via clustergen uses `cfg/spatz_cluster.default.dram.hjson` as the default configuration. There are no separate named variants generated by the SCORE scripts.

## Output Organization

### Directory Structure

```
datasets/spatz/<8-char-commit>/
├── source_snapshot/                    # rsync of tools/spatz (excluding .git/ and work dirs)
│   ├── hw/
│   │   └── system/
│   │       └── spatz_cluster/
│   │           ├── src/
│   │           │   └── generated/      # Generated by clustergen (if verify ran)
│   │           └── ...
│   ├── util/
│   │   ├── clustergen.py
│   │   └── generate_bootrom.py
│   ├── install/
│   │   └── bender/
│   │       └── bender                  # Pinned Bender binary
│   ├── .bender/                        # Resolved IP checkouts
│   ├── Bender.yml
│   └── Makefile
├── verification/
│   ├── verilator_lint.log              # Present if verify mode is lint
│   ├── rtl_verify_summary.txt
│   ├── verification_results_<timestamp>.txt
│   └── verification_summary.txt
├── logs/
│   └── generate_<timestamp>.log
└── spatz_summary.txt
```

**Note**: When RTL verification runs, the generate script excludes `work-vlt/`, `work-vsim/`, `work-vcs/`, and `work/` build directories from the rsync.

### Key Files

- **`source_snapshot/`**: Full tree including `.bender/` IP checkouts and the vendored Bender binary.
- **`verification/verilator_lint.log`**: Verilator lint output (present when mode is `lint`).
- **`verification/rtl_verify_summary.txt`**: Summary of `make generate`, Verilator lint, and `make verilate` results.
- **`spatz_summary.txt`**: Human-readable summary including bender checkout status, RTL verification note, and paths.

## Dataset Structure

### Verification Summary (`verification/rtl_verify_summary.txt`)

```
Spatz RTL verification summary
Generated (UTC): ...
Mode: lint | generate | verilate
Cluster dir: tools/spatz/hw/system/spatz_cluster
make generate: PASS | SKIPPED
Verilator lint: PASS | SKIPPED
make verilate: PASS | SKIPPED
bootrom.bin: real | dummy | na
Verilator log: verification/verilator_lint.log
```

### Verification Results File

```
spatz_cluster_<mode>|<PASS|SKIP>|spatz_rtl_verify|<log path>|<cluster dir>
```

### Overall Summary (`spatz_summary.txt`)

```
spatz SCORE snapshot (pulp-platform/spatz)
Generated (UTC): ...
Source repo: tools/spatz
Git commit (short): <hash>
bender (PATH): ...
bender (install/bender): <version>
RTL verification: mode=lint; see datasets/spatz/<commit>/verification/
...
```

## Usage Examples

### Basic Workflow

```bash
# 1. Initialize the submodule
git submodule update --init --recursive tools/spatz

# 2. Install dependencies
./scripts/install_spatz.sh

# 3. Source environment
source scripts/spatz_env.sh

# 4. Generate the dataset (with default lint verification)
./scripts/generate_spatz.sh

# 5. Check results
cat datasets/spatz/*/spatz_summary.txt
cat datasets/spatz/*/verification/rtl_verify_summary.txt
```

### Generate Only (No Verification)

```bash
./scripts/generate_spatz.sh --no-verify-rtl
```

### clustergen Check Only

```bash
# Run clustergen (make generate) without Verilator
./scripts/generate_spatz.sh --verify-rtl=generate
```

### Full Elaboration Check (Slow)

```bash
# Build Verilator C++ model (requires Verilator)
./scripts/generate_spatz.sh --verify-rtl=verilate
```

### Use a Specific Bender Version

```bash
SPATZ_BENDER_VERSION=0.31.0 ./scripts/generate_spatz.sh
```

### CI Environment

```bash
./scripts/install_spatz.sh --no-system-deps
source scripts/spatz_env.sh
./scripts/generate_spatz.sh --no-verify-rtl
```

### Skip make bender (Already Installed)

```bash
./scripts/generate_spatz.sh --skip-checkout
```

## Troubleshooting

**Problem**: `Missing Spatz tree at tools/spatz`
```
Solution: git submodule update --init --recursive tools/spatz
```

**Problem**: `Expected bender at install/bender/bender after make bender (and none on PATH)`
```
make bender did not produce the binary, and no PATH bender exists.
Solution: Install Bender manually or run ./scripts/install_spatz.sh first.
```

**Problem**: `Python packages for util/clustergen.py are missing`
```
Solution: Run the install script or manually install:
  python3 -m pip install --user hjson jstyleson jsonref jsonschema mako
Or set PYTHON to an interpreter that already has them.
```

**Problem**: `python3 on PATH must have jstyleson`
```
The cluster Makefile runs python3 -c ... for configuration macros.
Solution: Ensure python3 on PATH has the clustergen packages:
  python3 -m pip install --user hjson jstyleson jsonref jsonschema mako
Or activate a venv where python3 resolves to the same interpreter as PYTHON.
```

**Problem**: Verilator lint fails with many warnings
```
Solution: Inspect datasets/spatz/<commit>/verification/verilator_lint.log.
The script uses upstream-matching -Wno-* flags from util/Makefrag. Warnings without errors do not fail the lint step.
```

**Problem**: `rsync not found`
```
Solution: Install rsync manually or run ./scripts/install_spatz.sh.
```

**Problem**: `riscv32-unknown-elf-gcc not found` warning during verify
```
A dummy bootrom.bin is used; RTL verification proceeds but the result is not valid for simulation.
Solution: Install the RISC-V GCC toolchain (see upstream README) if a real bootrom is needed.
```

### Getting Help

- Installation log: created by `common_logging.sh`
- Generation log: `datasets/spatz/<commit>/logs/generate_<timestamp>.log`
- RTL verification summary: `datasets/spatz/<commit>/verification/rtl_verify_summary.txt`
- Verilator lint log: `datasets/spatz/<commit>/verification/verilator_lint.log`
- Use `--help` on any script for option details

---

**Note**: This documentation reflects the SCORE wrapper scripts. The SCORE scripts do not build LLVM, GCC, Spike, or run `update_opcodes`. For full Spatz simulation and toolchain documentation, refer to the [upstream repository](https://github.com/pulp-platform/spatz).
