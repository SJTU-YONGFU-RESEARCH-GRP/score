# MemPool RTL Organization Documentation

This document describes the MemPool RTL organization scripts and the structure of the dataset generated for the [pulp-platform/mempool](https://github.com/pulp-platform/mempool) many-core RISC-V system.

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

The MemPool scripts provide a workflow for setting up the Bender-based IP dependency manager and snapshotting the MemPool RTL source tree into a structured dataset. MemPool is a shared-memory many-core RISC-V system targeting highly parallel workloads.

### Scripts Overview

1. **`install_mempool.sh`**: Installs OS-level build dependencies and optionally installs Bender (the IP dependency manager) into `~/.local/bin`. Optionally builds upstream Verilator or Spike from source.
2. **`generate_mempool.sh`**: Runs `make bender` and `make update-deps` inside the submodule tree, then rsyncs the full MemPool tree (excluding `.git`) into a commit-tagged dataset directory. Optionally verifies the Bender file lists for the `minpool`, `mempool`, and `terapool` hardware configurations.

### Architecture Overview

MemPool RTL is organized under `tools/mempool/hardware/`. IP dependencies are resolved by Bender into `hardware/deps/`. The supported hardware configurations are:

| Configuration | Description |
|---------------|-------------|
| `minpool` | Small-scale MemPool instance for quick iteration |
| `mempool` | Standard MemPool configuration |
| `terapool` | Large-scale MemPool configuration |

## Installation Script

### Overview

`install_mempool.sh` installs OS packages needed to build MemPool's toolchain and simulation infrastructure. It also installs the Bender binary into `~/.local/bin` by default. Expensive upstream builds (Verilator, Spike) are opt-in.

### Basic Usage

```bash
# Install OS packages and Bender
./scripts/install_mempool.sh

# Skip OS package installation
./scripts/install_mempool.sh --no-system-deps

# Skip Bender binary installation
./scripts/install_mempool.sh --skip-bender

# Also build upstream Verilator (long build, requires LLVM)
./scripts/install_mempool.sh --verilator

# Also build Spike (riscv-isa-sim)
./scripts/install_mempool.sh --riscv-isa-sim
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--no-system-deps` | Do not install distro packages |
| `--skip-bender` | Do not download Bender into `~/.local/bin` |
| `--verilator` | Run `make verilator` in `tools/mempool` (long build, LLVM required) |
| `--riscv-isa-sim` | Run `make riscv-isa-sim` in `tools/mempool` (Spike; long build) |

### System Packages Installed

The script installs the following packages (names vary by OS):

| Category | Packages |
|----------|----------|
| Core tools | `git`, `curl`, `wget`, `make`, `gcc`, `g++`, `tar`, `python3` |
| Build utilities | `flex`, `bison`, `help2man`, `autoconf`, `automake`, `libtool`, `pkg-config` |
| Libraries | `zlib-dev`, `libelf-dev` |
| Compilers | `clang`, `cmake`, `ninja` |
| Utilities | `rsync` |

Supported OS families: Ubuntu/Debian, Fedora/RHEL/Amazon, Arch, openSUSE, macOS (Homebrew).

### Required Commands

After installation, the script verifies that `git`, `make`, `gcc`, `g++`, `tar`, `python3`, and `curl` or `wget` are all available.

### After Installation

```bash
source scripts/mempool_env.sh
./scripts/generate_mempool.sh
```

## Generation Script

### Overview

`generate_mempool.sh` runs the upstream Bender dependency checkout and rsyncs the full MemPool tree into a dataset directory. Verification (Bender file list generation for each hardware configuration) is enabled by default.

### Basic Usage

```bash
# Full workflow: bender checkout + snapshot + verification
./scripts/generate_mempool.sh

# Skip Bender checkout (snapshot current tree as-is)
./scripts/generate_mempool.sh --skip-checkout

# Disable verification
./scripts/generate_mempool.sh --no-verify

# Run verification only (no rsync)
./scripts/generate_mempool.sh --verify-only

# Use system Verilator if pinned build is missing
./scripts/generate_mempool.sh --allow-system-verilator

# Verbose/debug output
./scripts/generate_mempool.sh --verbose
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--skip-checkout` | Skip `make bender` / `make update-deps`; snapshot current tree |
| `--verify` | Enable verification (default) |
| `--no-verify` / `--skip-verify` | Disable verification |
| `--verify-only` | Run verification only (no rsync snapshot) |
| `--allow-system-verilator` | Use PATH Verilator if pinned `install/verilator` is missing |
| `-v, --verbose` | Enable debug messages |

Environment variables: `VERIFY_SYNTAX` (default `true`), `MEMPOOL_ALLOW_SYSTEM_VERILATOR`.

### What the Script Does

1. Reads the commit hash from `tools/mempool`.
2. Creates `datasets/mempool/<commit_id>/` and `logs/mempool_generation/`.
3. Rsyncs the full `tools/mempool/` tree (excluding `.git/`) into `datasets/mempool/<commit_id>/source_snapshot/`.
4. Unless `--skip-checkout`: runs `make bender` (installs pinned Bender to `install/bender/`) and `make update-deps` (Bender dependency checkout into `hardware/deps/`).
5. If verification is enabled:
   - For each hardware config (`minpool`, `mempool`, `terapool`): runs `make -C hardware config=<cfg> spyglass/tmp/files` to regenerate the Bender Verilator file list.
   - Checks that the pinned Verilator binary (`install/verilator/bin/verilator`) runs (`--version`).
6. Writes `mempool_summary.txt` with full environment and verification details.

## Available Designs

MemPool's hardware configurations available for Bender file list verification:

| Config | Description |
|--------|-------------|
| `minpool` | Minimal MemPool instance |
| `mempool` | Standard MemPool |
| `terapool` | Large-scale MemPool |

## Output Organization

### Directory Structure

```
datasets/mempool/
└── <commit_id>/
    ├── source_snapshot/          (rsync of full tools/mempool/ tree, no .git)
    │   ├── hardware/             (top-level SV RTL)
    │   ├── hardware/deps/        (Bender IP dependencies, after update-deps)
    │   ├── Makefile
    │   ├── Bender.yml
    │   └── ...
    ├── logs/
    │   └── (generation log symlinked from logs/mempool_generation/)
    ├── verification/
    │   ├── verification_summary.txt
    │   ├── bender_spyglass_files_minpool.log
    │   ├── bender_spyglass_files_mempool.log
    │   ├── bender_spyglass_files_terapool.log
    │   └── verilator_toolchain.log
    └── mempool_summary.txt
```

### Summary File

`mempool_summary.txt` records:

```
mempool SCORE snapshot (pulp-platform/mempool)
Generated (UTC): <timestamp>
Host: <hostname> <OS> <arch>
SCORE root: <path>
Source repo: <path>
Dataset workdir: <path>
Git commit (short): <sha>
Git commit (full): <sha>
bender (PATH): <version or not_on_path>
bender (install/bender): <version or not_present>
RTL verification enabled: true|false
...
Bundle path: <path>
Verification:
  Deps vs Bender.lock: PASS | SKIPPED_BY_FLAG
  Verilator lint: PASS | SKIPPED_BY_FLAG
Generation log: <path>
```

## Dataset Structure

The dataset carries a full copy of the MemPool source tree at the snapshotted commit, including the Bender-resolved `hardware/deps/` IP tree (if `make update-deps` was run). This makes the dataset self-contained for RTL analysis.

## Usage Examples

### Basic Workflow

```bash
# 1. Install OS packages and Bender
./scripts/install_mempool.sh

# 2. Set up MemPool environment
source scripts/mempool_env.sh

# 3. Snapshot and verify
./scripts/generate_mempool.sh

# 4. Inspect results
cat datasets/mempool/<commit_id>/mempool_summary.txt
cat datasets/mempool/<commit_id>/verification/verification_summary.txt
```

### Snapshot Without Bender Checkout

```bash
./scripts/generate_mempool.sh --skip-checkout
```

### Skip Verification

```bash
./scripts/generate_mempool.sh --no-verify
```

### Verify Only (No Re-snapshot)

```bash
./scripts/generate_mempool.sh --verify-only
```

## Troubleshooting

**Problem**: `Missing MemPool tree at tools/mempool`
```
Cause:  The submodule has not been initialized.
Fix:    git submodule update --init --recursive tools/mempool
        then re-run install_mempool.sh.
```

**Problem**: `rsync not found`
```
Cause:  rsync is required to stage sources into the dataset directory.
Fix:    Install rsync via your package manager, or run install_mempool.sh
        to install OS packages.
```

**Problem**: `config=<cfg>: make spyglass/tmp/files failed`
```
Cause:  Bender dependency checkout (make update-deps) was not run, or
        the Bender lockfile is out of sync with the current tree.
Fix:    Re-run generate_mempool.sh without --skip-checkout, or run
        make bender && make update-deps inside tools/mempool manually.
```

**Problem**: Verilator toolchain check skipped
```
Cause:  The pinned Verilator binary at install/verilator/bin/verilator
        is not present in the snapshot.
Fix:    Run ./scripts/install_mempool.sh --verilator to build the pinned
        Verilator, or use --allow-system-verilator for the PATH binary.
```

**Problem**: Sudo password prompt during package installation
```
Cause:  The script calls sudo for OS package installation.
Fix:    Enter your password, or re-run with --no-system-deps if packages
        are already installed.
```

### Getting Help

- Check install log: `logs/install_mempool/`
- Check generation log: `logs/mempool_generation/generation_<timestamp>.log`
- Use `--help` on either script for option summary
- Upstream README: `tools/mempool/README.md`

---

**Note**: Full RTL simulation requires the upstream MemPool toolchain (RISC-V GCC, LLVM, Halide, Spike) which must be built separately inside `tools/mempool` using the upstream Makefile. The SCORE scripts snapshot RTL sources and validate Bender IP closure only.
