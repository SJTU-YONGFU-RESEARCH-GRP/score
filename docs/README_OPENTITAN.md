# OpenTitan RTL Organization Documentation

![License: Apache-2.0](https://img.shields.io/badge/license-Apache--2.0-blue)

This document provides repository-grounded information about the SCORE OpenTitan flow, generated artifacts under `datasets/opentitan/<commit>/`, and current verification status.

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

SCORE OpenTitan clones the [lowRISC/opentitan](https://github.com/lowRISC/opentitan) repository under `tools/opentitan/` and builds the Earl Grey chip simulator via Bazel and FuseSoC. Generation writes commit-scoped outputs into `datasets/opentitan/<commit>/`.

### Key Features

- **Full (non-sparse) checkout**: the install script detects and replaces any sparse checkout automatically, ensuring `util/`, `MODULE.bazel`, and `hw/` are all present for Bazel.
- **Commit-scoped dataset path**: generation writes under `datasets/opentitan/<commit>/`.
- **Python venv with FuseSoC**: a Python 3.10+ venv is created at `tools/opentitan/.venv` with upstream-pinned (hashed) requirements, including FuseSoC.
- **Verilator 4.210**: the exact version required by OpenTitan is downloaded to `tools/opentitan-host-tools/` or reused from `tools/ibex-host-tools/` via symlink.
- **Verible**: static RTL linting tool downloaded alongside Verilator.
- **lowRISC RISC-V toolchain**: `lowrisc-toolchain-gcc-rv32imcb` downloaded for SW build steps.
- **Environment script**: `tools/opentitan/setup_score_env.sh` is generated at install time and activates the venv and sets `PATH`/`VERILATOR_ROOT`/`RISCV`/`REPO_TOP`.
- **RTL snapshot + Bazel build**: the generate script snapshots `hw/ip`, `hw/top_earlgrey`, `hw/top`, `hw/vendor`, and `hw/dv` paths, then runs `./bazelisk.sh build //hw:verilator`.
- **Bazel failure is non-fatal**: if Bazel fails, the RTL snapshot is still written and the result is recorded in `opentitan_summary.txt`.

### Scripts Overview

1. `./scripts/install_opentitan.sh`: clones OpenTitan, installs system packages, creates Python venv with FuseSoC, downloads Verilator 4.210 / Verible / RISC-V toolchain, and writes `setup_score_env.sh`.
2. `./scripts/generate_opentitan.sh`: snapshots `hw/` subtrees, runs `./bazelisk.sh build //hw:verilator`, and collects Verilator outputs from `bazel-bin/hw/`.

### Architecture Overview

- Upstream OpenTitan is the Earl Grey secure microcontroller chip from lowRISC.
- The Bazel build system (`bazelisk.sh`) is the canonical entry point; FuseSoC manages IP core dependencies.
- Verilator 4.210 is required exactly; the lowRISC prebuilt is configured with `--prefix=/tools/verilator/v4.210`, so the install script symlinks the host-tools copy to `/tools/verilator/v4.210`.
- The default Bazel target is `//hw:verilator`, which produces an Earl Grey Verilator simulation binary.

### Overlay

`overlays/opentitan/` contains the SCORE-specific overlay for OpenTitan:

| Path | Purpose |
|------|---------|
| `files/setup_score_env.sh` | Generated host env (venv, Verilator 4.210, PATH). Copied into `tools/opentitan/` by the install script. |

Do not commit dirty files inside `tools/opentitan`; keep SCORE copies in the overlay.

## Installation Script

### Overview

`./scripts/install_opentitan.sh` performs a full non-sparse clone of OpenTitan, installs system packages (RHEL or Debian/Ubuntu), creates a Python 3.10+ venv, downloads Verilator 4.210 / Verible / RISC-V toolchain, and writes the environment activation script.

### Basic Usage

```bash
# Standard installation
./scripts/install_opentitan.sh

# Validate existing install only
./scripts/install_opentitan.sh --check-only

# Skip system package installation
./scripts/install_opentitan.sh --no-system-deps

# Skip venv creation
./scripts/install_opentitan.sh --skip-venv

# Skip host-tools download (Verilator/Verible/toolchain)
./scripts/install_opentitan.sh --skip-host-tools

# Remove tools/opentitan and do a fresh depth-1 clone
./scripts/install_opentitan.sh --force-reclone
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help |
| `--check-only` | Verify checkout, venv, and Verilator 4.210 only |
| `--no-system-deps` | Skip apt/dnf (same as `OPENTITAN_SKIP_SYSTEM_DEPS=1`) |
| `--skip-venv` | Do not create or update `tools/opentitan/.venv` |
| `--skip-host-tools` | Do not download Verilator / Verible / toolchain |
| `--force-reclone` | Remove `tools/opentitan/` and clone fresh (depth 1) |

### What the Script Does

1. Parses OS from `/etc/os-release` and installs system packages (RHEL: `dnf`; Debian/Ubuntu: `apt-get` using upstream `apt-requirements.txt`).
2. Clones OpenTitan at depth 1 if not present, or replaces any sparse checkout with a full clone. Updates an existing full checkout via `git pull --ff-only`.
3. Downloads or reuses Verilator 4.210, Verible `v0.0-3622-g07b310a3`, and lowRISC RISC-V toolchain `lowrisc-toolchain-gcc-rv32imcb-20230427-1` under `tools/opentitan-host-tools/`. If `tools/ibex-host-tools/` already provides these, symlinks are created instead.
4. Symlinks the Verilator install to `/tools/verilator/v4.210` (the path baked into lowRISC makefiles) and links `srec_cat`/`srec_cmp`/`srec_info` into `/usr/bin/` for the Bazel sandbox.
5. Creates `tools/opentitan/.venv` using Python 3.10+ (prefers 3.12 > 3.11 > 3.10) and installs `python-requirements.txt` with hash verification.
6. Writes `tools/opentitan/setup_score_env.sh`.

## Generation Script

### Overview

`./scripts/generate_opentitan.sh` creates the commit-scoped dataset directory, snapshots selected `hw/` subtrees, runs `./bazelisk.sh build //hw:verilator`, and copies Verilator outputs from `bazel-bin/hw/`.

### Basic Usage

```bash
# Default generation (snapshot + Bazel //hw:verilator)
./scripts/generate_opentitan.sh

# Snapshot only, skip Bazel build
OPENTITAN_SKIP_BAZEL=1 ./scripts/generate_opentitan.sh

# Use a different Bazel target
OPENTITAN_BAZEL_TARGET=//hw/ip/uart:verilator ./scripts/generate_opentitan.sh

# Fail hard if Bazel fails
OPENTITAN_REQUIRE_BAZEL=1 ./scripts/generate_opentitan.sh
```

### Environment Variables

| Variable | Default | Description |
|----------|---------|-------------|
| `OPENTITAN_BAZEL_TARGET` | `//hw:verilator` | Bazel target to build |
| `OPENTITAN_SKIP_BAZEL` | `0` | Set to `1` to skip Bazel and take RTL snapshot only |
| `OPENTITAN_REQUIRE_BAZEL` | `0` | Set to `1` to exit non-zero when Bazel fails |

### What the Script Does

1. Activates `tools/opentitan/setup_score_env.sh` (or falls back to `.venv/bin/activate`).
2. Snapshots `hw/ip`, `hw/top_earlgrey`, `hw/top`, and (when present) `hw/vendor` and `hw/dv` into `datasets/opentitan/<commit>/rtl_snapshot/opentitan/`.
3. Writes `datasets/opentitan/<commit>/manifest.json`.
4. Verifies FuseSoC is present in venv and Verilator 4.210 is on PATH; exits with error if either is missing (unless `OPENTITAN_SKIP_BAZEL=1`).
5. Runs `./bazelisk.sh build <target>` from `tools/opentitan/`, capturing output to `logs/bazel_verilator.log`.
6. On success, rsyncs `*.v`, `*.sv`, `*.h`, `Vchip*`, `*.f`, and `*.core` files from `bazel-bin/hw/` into `rtl_generated/bazel-bin/hw/`.
7. Writes `opentitan_summary.txt` with commit, file counts, Bazel result, Verilator version, and FuseSoC version.

## Available Designs

The default Bazel target `//hw:verilator` builds the Earl Grey top-level chip. The `hw/ip/` directory contains individual IP cores (UART, SPI, I2C, AES, HMAC, KMAC, etc.) that can be built as separate Bazel targets.

## Output Organization

```text
datasets/opentitan/<commit>/
├── opentitan_summary.txt
├── manifest.json
├── logs/
│   ├── main.log
│   ├── session_<timestamp>.log
│   └── bazel_verilator.log
├── rtl_snapshot/
│   └── opentitan/
│       ├── hw/ip/
│       ├── hw/top_earlgrey/
│       ├── hw/top/
│       ├── hw/vendor/          (when present)
│       └── hw/dv/              (when present)
├── rtl_generated/
│   └── bazel-bin/
│       └── hw/                 (Verilator outputs; only on Bazel success)
└── verification/
```

## Dataset Structure

- `opentitan_summary.txt`: commit, SV/V file count, Bazel target and result, Verilator and FuseSoC versions.
- `manifest.json`: standard SCORE manifest (project, name, commit).
- `logs/main.log`: session log from `generate_opentitan.sh`.
- `logs/bazel_verilator.log`: full Bazel build stdout/stderr.
- `rtl_snapshot/opentitan/`: raw snapshot of upstream `hw/` subtrees.
- `rtl_generated/bazel-bin/hw/`: Verilator simulation outputs copied from Bazel cache (only present when Bazel succeeds).
- `verification/`: reserved directory for verification artifacts.

## Usage Examples

```bash
# Full install then generate
./scripts/install_opentitan.sh
./scripts/generate_opentitan.sh

# Snapshot only (no Bazel)
./scripts/install_opentitan.sh --skip-host-tools --skip-venv
OPENTITAN_SKIP_BAZEL=1 ./scripts/generate_opentitan.sh

# Check install without rebuilding
./scripts/install_opentitan.sh --check-only
```

## Troubleshooting

- **Symptom**: `Missing tools/opentitan/util — sparse checkout detected`.
  - **Fix**: run `./scripts/install_opentitan.sh --force-reclone` to replace the sparse checkout with a full depth-1 clone.
- **Symptom**: `FuseSoC missing in venv — re-run without --skip-venv`.
  - **Fix**: run `./scripts/install_opentitan.sh` (without `--skip-venv`) to create or update the venv and install `python-requirements.txt`.
- **Symptom**: `Need Verilator 4.210 on PATH`.
  - **Fix**: run `./scripts/install_opentitan.sh` (without `--skip-host-tools`). The script will download Verilator 4.210 and symlink it to `/tools/verilator/v4.210`.
- **Symptom**: Bazel build fails referencing `/tools/verilator/v4.210/share/verilator/include/verilated.mk`.
  - **Fix**: the install script attempts to create the symlink at `/tools/verilator/v4.210`; ensure `sudo` access or run as root, or check `install_opentitan.sh` output for the symlink warning.
- **Symptom**: `srec_cat` not found inside Bazel sandbox.
  - **Fix**: the install script links `srec_cat`/`srec_cmp`/`srec_info` into `/usr/bin/`; check that the `srecord` host-tools step succeeded in the install log.
- **Symptom**: `python3.10+` not found.
  - **Fix**: on RHEL 9, run `dnf install python3.12 python3.12-devel` then re-run the install script.
