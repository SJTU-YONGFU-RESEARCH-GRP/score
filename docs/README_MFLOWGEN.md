# MFlowGen RTL Organization Documentation

This document describes the MFlowGen installation script and the structure of the `tools/mflowgen` submodule used in the SCORE project. MFlowGen is a modular, graph-based ASIC/FPGA flow generator.

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

MFlowGen is a Python-based EDA flow generator that allows ASIC and FPGA design flows to be described as directed acyclic graphs of steps. It is used in the SCORE project as a supporting tool for flow-based RTL generation and analysis.

### Scripts Overview

1. **`install_mflowgen.sh`**: Detects and installs all dependencies required for MFlowGen, including Python 3.7+, system build tools, and the MFlowGen Python package itself (installed in a local virtual environment). Optionally installs EDA tools.
2. **`generate_mflowgen.sh`**: Not present in this repository. MFlowGen is used as a supporting infrastructure tool; RTL dataset generation for specific designs is handled by their own generate scripts.

### Architecture Overview

MFlowGen is installed as a Python package from the `tools/mflowgen` submodule into a virtual environment at `mflowgen-venv/`. An activation helper script `activate_mflowgen.sh` is created at the project root.

## Installation Script

### Overview

`install_mflowgen.sh` performs a smart environment analysis: it checks which required components are already present and installs only the missing ones. By default (no options), it installs any missing required components automatically.

### Basic Usage

```bash
# Smart install — only install missing required components
./scripts/install_mflowgen.sh

# Check environment status without installing anything
./scripts/install_mflowgen.sh --check

# Allow installation of all missing components explicitly
./scripts/install_mflowgen.sh --install-all

# Only allow system dependency installation if needed
./scripts/install_mflowgen.sh --install-system-deps

# Install basic EDA tools (iverilog, verilator, gtkwave, yosys, ghdl)
./scripts/install_mflowgen.sh --install-eda-tools

# Force reinstall MFlowGen even if already installed
./scripts/install_mflowgen.sh --force

# Enable debug logging
./scripts/install_mflowgen.sh --debug
```

### Command-Line Options

| Option | Description |
|--------|-------------|
| `-h, --help` | Show help message |
| `--check` | Check environment status only; do not install anything |
| `--install-python` | Allow Python installation if below 3.7 |
| `--install-system-deps` | Allow system dependency installation if missing |
| `--install-eda-tools` | Install basic EDA tools (always optional) |
| `--install-all` | Allow installation of all missing components |
| `--force` | Force reinstallation of MFlowGen even if present |
| `--debug` | Enable debug logging |

### Required Components

| Component | Minimum Version |
|-----------|-----------------|
| Python | 3.7+ |
| Make | 3.81+ |
| Git | 2.0+ |
| GCC / G++ | any recent |
| CMake | any recent |
| Flex | any recent |
| Bison | any recent |
| zlib development headers | — |
| OpenSSL development headers | — |

### Optional EDA Tools

The following EDA tools are checked and optionally installed when `--install-eda-tools` is used:

| Tool | Purpose |
|------|---------|
| `iverilog` | Icarus Verilog simulation |
| `verilator` | Fast Verilog simulation |
| `yosys` | Synthesis |
| `ghdl` | VHDL simulation |
| `gtkwave` | Waveform viewing |

### What the Script Does

1. Checks and optionally initializes the `tools/mflowgen` submodule (looks for `setup.py`).
2. Checks Python version (≥ 3.7) and system tool versions.
3. Checks for required libraries (zlib, openssl) via `ldconfig`.
4. Based on the environment analysis, installs only what is missing (unless `--force`):
   - Python (via OS package manager)
   - System build tools (via OS package manager)
   - EDA tools (if explicitly requested)
   - MFlowGen Python package in a virtual environment at `mflowgen-venv/`
5. Installs MFlowGen in development mode (`pip install -e .`) with dependencies from `requirements/dev.txt`.
6. Creates `activate_mflowgen.sh` at the project root for environment activation.
7. Writes logs to `logs/install_mflowgen/`.

Supported OS families: Ubuntu/Debian, CentOS/RHEL/Fedora, Arch/Manjaro, macOS (Homebrew).

## Generation Script

No `generate_mflowgen.sh` script exists in this repository. MFlowGen is a supporting infrastructure tool. Specific designs that use MFlowGen flows have their own generate scripts. To use MFlowGen interactively after installation:

```bash
source activate_mflowgen.sh
mflowgen --help
```

## Available Designs

MFlowGen itself does not define RTL designs. It provides a Python framework for composing EDA flows. Design-specific flows are defined separately and invoke MFlowGen as a dependency.

## Output Organization

The installation script produces:

```
<project_root>/
├── mflowgen-venv/           (Python virtual environment with MFlowGen installed)
│   └── bin/
│       ├── activate
│       └── mflowgen
├── activate_mflowgen.sh     (convenience activation script)
└── logs/
    └── install_mflowgen/
        ├── install.log
        ├── session_<timestamp>.log
        └── python_cmd.txt   (detected Python command, e.g., python3)
```

## Dataset Structure

MFlowGen does not produce an RTL dataset. It is an infrastructure dependency for flow generation. No `datasets/mflowgen/` directory is created.

## Usage Examples

### Basic Installation

```bash
# 1. Install MFlowGen and dependencies
./scripts/install_mflowgen.sh

# 2. Activate the environment
source activate_mflowgen.sh

# 3. Verify the installation
mflowgen --help
```

### Check Environment Status

```bash
./scripts/install_mflowgen.sh --check
```

### Force Reinstall

```bash
./scripts/install_mflowgen.sh --force
```

### Install with EDA Tools

```bash
./scripts/install_mflowgen.sh --install-eda-tools
```

### Install All Missing Components

```bash
./scripts/install_mflowgen.sh --install-all
```

## Troubleshooting

**Problem**: `MFlowGen submodule check failed — this is required`
```
Cause:  tools/mflowgen is not initialized (setup.py missing).
Fix:    git submodule update --init --recursive tools/mflowgen
        then re-run install_mflowgen.sh.
```

**Problem**: `Python not found` or `Python version too old`
```
Cause:  Python 3.7+ is not available on PATH.
Fix:    Run ./scripts/install_mflowgen.sh --install-python, or install
        Python 3.7+ manually and re-run.
```

**Problem**: `Failed to create virtual environment`
```
Cause:  python3-venv is not installed.
Fix:    Install python3-venv (apt) or python3-devel (dnf/yum) and re-run.
```

**Problem**: `MFlowGen installation verification failed`
```
Cause:  The mflowgen command was not found after pip install.
Fix:    Inspect logs/install_mflowgen/install.log for pip errors.
        Try running with --force to reinstall.
```

**Problem**: System dependency check fails after package install
```
Cause:  Package install failed (sudo timeout, missing repos, network).
Fix:    Re-run with --install-system-deps after ensuring sudo access,
        or install build tools manually and re-run with --no-system-deps
        equivalent (omit --install-system-deps).
```

### Getting Help

- Check install log: `logs/install_mflowgen/install.log`
- Check session log: `logs/install_mflowgen/session_<timestamp>.log`
- Use `--check` to display a full environment status report
- Use `--debug` for verbose script output

---

**Note**: MFlowGen is used as a supporting infrastructure tool in the SCORE project. The SCORE scripts only cover installation of MFlowGen itself; for building design-specific flows with MFlowGen, refer to the upstream [mflowgen/mflowgen](https://github.com/mflowgen/mflowgen) repository and documentation.
