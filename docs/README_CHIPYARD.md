# Chipyard Installation Documentation

This document provides comprehensive information about installing and setting up the Chipyard SoC (System on Chip) framework using Python virtual environments as an alternative to conda.

## Table of Contents

- [Overview](#overview)
- [Installation Methods](#installation-methods)
- [Prerequisites](#prerequisites)
- [Virtual Environment Setup](#virtual-environment-setup)
- [System Dependencies](#system-dependencies)
- [Installation Process](#installation-process)
- [Usage Examples](#usage-examples)
- [Environment Activation](#environment-activation)
- [Troubleshooting](#troubleshooting)
- [Comparison: Conda vs Venv](#comparison-conda-vs-venv)
- [Advanced Configuration](#advanced-configuration)
- [Development Workflow](#development-workflow)

## Overview

Chipyard is an open-source framework for agile development of specialized SoC accelerators. It's developed by UC Berkeley and provides a complete flow from high-level hardware design to FPGA deployment and VLSI tapeout.

### Key Features

- **Chisel/FIRRTL-based**: Hardware design using modern HDL
- **RISC-V Ecosystem**: Built around RISC-V processors (Rocket, BOOM, Ariane)
- **Accelerator Integration**: Easy integration of custom accelerators
- **Multiple Targets**: Simulation, FPGA prototyping, ASIC tapeout
- **Verification**: Comprehensive testing and verification flows
- **FireSim Integration**: Cloud-scale FPGA simulation
- **Software Stack**: Complete software toolchain and operating system support

### Supported Processors

- **Rocket**: In-order RISC-V core
- **BOOM**: Out-of-order RISC-V core
- **Ariane (CVA6)**: Application-class RISC-V core
- **Sodor**: Educational RISC-V cores
- **Custom Cores**: Support for user-defined processors

## Installation Methods

Chipyard supports two primary installation methods:

### 1. Conda-based Installation (Traditional)
- Uses Miniconda/Anaconda for environment management
- Provides pre-built binaries for most dependencies
- More isolated but heavier installation
- Documented in the main Chipyard repository

### 2. Virtual Environment Installation (Alternative)
- Uses Python's built-in `venv` for Python package management
- Relies on system package managers for native dependencies
- Lighter weight and faster setup
- **This document focuses on this method**

## Prerequisites

### System Requirements

- **Operating System**: Linux (Ubuntu 18.04+, CentOS 7+, Arch Linux) or macOS
- **Python**: Python 3.8 or later
- **Memory**: Minimum 8GB RAM (16GB+ recommended)
- **Storage**: Minimum 50GB free space (100GB+ recommended)
- **CPU**: Multi-core processor (4+ cores recommended for parallel builds)

### Required Tools

- **Git**: Version control system
- **Internet Connection**: For downloading dependencies and submodules
- **sudo privileges**: For system package installation
- **Package Manager**: apt (Ubuntu/Debian), yum/dnf (CentOS/Fedora), pacman (Arch), or brew (macOS)

### Recommended Skills

- Basic Linux/macOS command line knowledge
- Understanding of build systems (Make, SBT)
- Hardware design concepts (helpful but not required)

## System Dependencies

Before starting the Chipyard installation, you need to install system-level dependencies. We provide an automated script that detects your system and installs the required packages.

### Automatic Installation

```bash
cd tools/chipyard
./scripts/install-system-deps.sh
```

This script supports:
- **Ubuntu/Debian**: Uses `apt-get`
- **CentOS/RHEL/Fedora**: Uses `yum` or `dnf`
- **Arch Linux**: Uses `pacman`
- **macOS**: Uses `brew`

### Required System Packages

The following packages are automatically installed:

#### Build Tools
- **gcc/g++**: C/C++ compilers (version 13 preferred)
- **make**: Build automation tool
- **ninja**: Fast build system
- **autoconf/automake**: Configuration tools
- **binutils**: Binary utilities

#### Development Libraries
- **libffi-dev**: Foreign Function Interface library
- **libusb-dev**: USB device access library
- **libncurses-dev**: Terminal handling library
- **zlib-dev**: Compression library
- **libexpat-dev**: XML parsing library

#### Java and Scala
- **default-jdk**: Java Development Kit (OpenJDK)
- **sbt**: Scala Build Tool

#### Hardware Tools
- **verilator**: Verilog simulator
- **device-tree-compiler (dtc)**: Device tree compiler

#### Version Control and Utilities
- **git**: Version control
- **jq**: JSON processor
- **rsync**: File synchronization
- **wget/curl**: Download utilities

### Manual Installation

If the automatic script fails, install packages manually:

#### Ubuntu/Debian
```bash
sudo apt-get update
sudo apt-get install -y build-essential gcc-13 g++-13 python3 python3-pip python3-venv \
    default-jdk sbt verilator device-tree-compiler git make ninja-build \
    autoconf binutils jq libffi-dev libusb-1.0-0-dev libncurses5-dev \
    zlib1g-dev libexpat-dev cmake graphviz
```

#### CentOS/RHEL/Fedora
```bash
sudo dnf install -y gcc gcc-c++ python3 python3-pip java-17-openjdk-devel \
    git make ninja-build autoconf binutils jq verilator dtc \
    libffi-devel libusb1-devel ncurses-devel zlib-devel expat-devel cmake graphviz
```

#### macOS
```bash
brew install gcc python@3.11 openjdk git make ninja autoconf binutils jq \
    dtc verilator libffi libusb ncurses zlib expat cmake graphviz
```

## Virtual Environment Setup

### Quick Start

For a complete Chipyard setup with all features:

```bash
cd tools/chipyard
./scripts/build-setup-venv.sh
```

For a minimal setup (without FireSim/FireMarshal):

```bash
cd tools/chipyard
./scripts/build-setup-venv.sh --use-lean-venv
```

### Detailed Setup Options

The `build-setup-venv.sh` script provides extensive customization options:

#### Basic Options
```bash
# Show help
./scripts/build-setup-venv.sh --help

# Verbose output
./scripts/build-setup-venv.sh --verbose

# Custom virtual environment path
./scripts/build-setup-venv.sh --venv-path /custom/path/.venv
```

#### Feature Control
```bash
# Lean installation (no FireSim/FireMarshal)
./scripts/build-setup-venv.sh --use-lean-venv

# Build CIRCT from source instead of downloading
./scripts/build-setup-venv.sh --build-circt

# Use GitHub token for downloads
./scripts/build-setup-venv.sh --github-token YOUR_TOKEN
```

#### Skip Options
```bash
# Skip specific steps
./scripts/build-setup-venv.sh --skip-venv           # Skip venv creation
./scripts/build-setup-venv.sh --skip-sys-check     # Skip system package check
./scripts/build-setup-venv.sh --skip-submodules    # Skip git submodules
./scripts/build-setup-venv.sh --skip-toolchain     # Skip RISC-V toolchain
./scripts/build-setup-venv.sh --skip-firesim       # Skip FireSim setup
./scripts/build-setup-venv.sh --skip-marshal       # Skip FireMarshal setup
./scripts/build-setup-venv.sh --skip-circt         # Skip CIRCT installation
```

## Installation Process

The venv-based setup follows a 12-step process:

### Step 1: Python Virtual Environment Setup
- Creates a Python virtual environment in `.venv/`
- Installs pip, setuptools, and wheel
- Installs Python packages from `requirements.txt`

### Step 2: System Package Verification
- Checks for required system packages
- Provides installation commands if packages are missing
- Continues with warnings if packages are unavailable

### Step 3: Chipyard Submodules
- Initializes and updates git submodules
- Downloads processor cores, generators, and tools
- Excludes toolchain submodules (handled separately)

### Step 4: Toolchain Collateral
- Builds RISC-V toolchain components
- Installs Spike simulator, Proxy Kernel, and tests
- Creates toolchain in `.venv/riscv-tools/`

### Step 5: Code Navigation (ctags)
- Generates ctags for source code navigation
- Supports Vim, Emacs, and other editors
- Indexes Scala, C/C++, and Verilog sources

### Step 6: Chipyard Pre-compilation
- Pre-compiles Scala sources for faster builds
- Compiles Chipyard and tapeout projects
- Reduces subsequent build times significantly

### Step 7: FireSim Setup (Optional)
- Initializes FireSim cloud simulation platform
- Sets up AWS/cloud infrastructure tools
- Only if not skipped with `--skip-firesim`

### Step 8: FireSim Pre-compilation (Optional)
- Pre-compiles FireSim Scala sources
- Sets up simulation infrastructure
- Requires Step 7 to complete successfully

### Step 9: FireMarshal Setup (Optional)
- Initializes FireMarshal workload management
- Sets up buildroot for Linux workloads
- Only if not skipped with `--skip-marshal`

### Step 10: FireMarshal Pre-compilation (Optional)
- Pre-compiles buildroot Linux images
- Creates base bare-metal and Linux workloads
- Requires Step 9 to complete successfully

### Step 11: CIRCT Installation
- Installs CIRCT (Circuit IR Compilers and Tools)
- Downloads pre-built binaries or builds from source
- Required for modern FIRRTL compilation

### Step 12: Repository Cleanup
- Cleans temporary build files
- Ensures clean git status
- Prepares repository for development

### Build Time Estimates

| Configuration | Time (Full) | Time (Lean) |
|---------------|-------------|-------------|
| System Dependencies | 5-15 minutes | 5-15 minutes |
| Venv + Python Packages | 2-5 minutes | 1-2 minutes |
| Submodules | 5-10 minutes | 5-10 minutes |
| Toolchain | 10-20 minutes | 10-20 minutes |
| Pre-compilation | 5-10 minutes | 3-5 minutes |
| FireSim (optional) | 10-15 minutes | N/A |
| FireMarshal (optional) | 15-30 minutes | N/A |
| **Total** | **60-120 minutes** | **25-55 minutes** |

*Times vary based on system specifications and internet speed*

## Environment Activation

After successful installation, activate the Chipyard environment:

```bash
# From the chipyard directory
source env.sh

# Verify activation
echo $VIRTUAL_ENV  # Should show path to .venv
echo $RISCV        # Should show path to toolchain
which sbt          # Should show system sbt
```

The environment includes:
- **Python Virtual Environment**: Isolated Python packages
- **RISCV Toolchain**: Cross-compilation tools at `$RISCV`
- **Chipyard Directory**: Available as `$CY_DIR`
- **System Tools**: Access to Java, SBT, Verilator, etc.

## Usage Examples

### Basic Hardware Generation

```bash
# Activate environment
source env.sh

# Generate a simple Rocket-based SoC
cd sims/verilator
make CONFIG=RocketConfig

# Run a simple test
make CONFIG=RocketConfig run-binary BINARY=../../tests/hello.riscv
```

### Custom Configuration

```bash
# Generate a BOOM-based SoC
make CONFIG=LargeBoomConfig

# Generate with custom accelerator
make CONFIG=GemminiRocketConfig

# Generate for FPGA prototyping
make CONFIG=PrototypeConfig
```

### Running Tests

```bash
# Run assembly tests
make CONFIG=RocketConfig run-asm-tests

# Run benchmark tests
make CONFIG=RocketConfig run-bmark-tests

# Run custom workload
make CONFIG=RocketConfig run-binary BINARY=/path/to/program.riscv
```

### FireSim Usage (if enabled)

```bash
# Setup FireSim manager
cd sims/firesim
source sourceme-manager.sh

# Build FireSim target
firesim buildbitstream

# Run cloud simulation
firesim launchrunfarm && firesim infrasetup && firesim runworkload
```

## Troubleshooting

### Common Issues

#### 1. Python Version Too Old
```
Error: Python 3.8 or later is required. Found Python 3.6
```
**Solution**: Install Python 3.8+ or use a different system

#### 2. Missing System Packages
```
Warning: The following system packages appear to be missing:
gcc g++ verilator sbt
```
**Solution**: Run `./scripts/install-system-deps.sh` or install manually

#### 3. Virtual Environment Exists
```
Error: Virtual environment directory already exists!
```
**Solution**: 
```bash
rm -rf .venv
./scripts/build-setup-venv.sh
```

#### 4. Submodule Update Failures
```
fatal: unable to access 'https://github.com/...': Connection timed out
```
**Solution**: Check internet connection and retry:
```bash
git submodule update --init --recursive
```

#### 5. Out of Memory During Build
```
c++: internal compiler error: Killed (program cc1plus)
```
**Solution**: 
- Close other applications
- Use `make -j1` for single-threaded builds
- Add swap space
- Use a machine with more RAM

#### 6. SBT/Java Issues
```
Error: Could not find or load main class
```
**Solution**: Verify Java installation:
```bash
java -version    # Should show Java 8+
which sbt        # Should show sbt path
sbt about        # Should show SBT version
```

#### 7. Verilator Version Issues
```
Error: Verilator version 4.x found, need 5.x
```
**Solution**: Update Verilator:
```bash
# Ubuntu/Debian
sudo apt-get install verilator=5.022*

# Or build from source
git clone https://github.com/verilator/verilator
cd verilator && autoconf && ./configure && make -j && sudo make install
```

### Debug Mode

Enable verbose output for debugging:

```bash
./scripts/build-setup-venv.sh --verbose
```

Check logs:
```bash
# View setup log
cat build-setup-venv.log

# View specific step logs
tail -f build-setup-venv.log
```

### Environment Issues

Verify environment setup:

```bash
# Check Python environment
python3 --version
pip list | grep -E "(setuptools|wheel|pip)"

# Check system tools
gcc --version
java -version
sbt about
verilator --version

# Check Chipyard environment
source env.sh
echo $CY_DIR
echo $RISCV
echo $VIRTUAL_ENV
```

## Comparison: Conda vs Venv

| Aspect | Conda Setup | Venv Setup |
|--------|-------------|------------|
| **Environment** | Conda environment | Python venv |
| **System Packages** | Conda packages | System package manager |
| **Isolation** | Complete (Python + binaries) | Python packages only |
| **Setup Time** | Slower (45-90 min) | Faster (25-60 min) |
| **Disk Usage** | Higher (~10-15 GB) | Lower (~5-8 GB) |
| **Internet Usage** | Higher (binary downloads) | Lower (source builds) |
| **Cross-platform** | Better (macOS/Linux) | Good (Linux better) |
| **Reproducibility** | Excellent | Good |
| **System Integration** | Limited | Better |
| **Debugging** | Harder | Easier |
| **Updates** | Conda channels | System packages |

### When to Use Each

**Use Conda setup when:**
- Working on multiple operating systems
- Need exact reproducible environments
- Prefer pre-built binaries
- Working in isolated research environment
- Following official Chipyard documentation

**Use Venv setup when:**
- Working primarily on Linux
- Prefer system package managers
- Want faster, lighter setup
- Need better system integration
- Working in CI/CD environments
- Have limited disk space

## Advanced Configuration

### Custom Virtual Environment Location

```bash
# Use custom location
./scripts/build-setup-venv.sh --venv-path /opt/chipyard-venv

# Update env.sh to use custom location
export VENV_PATH="/opt/chipyard-venv"
source env.sh
```

### Minimal Installation for CI

```bash
# Minimal setup for continuous integration
./scripts/build-setup-venv.sh \
    --use-lean-venv \
    --skip-firesim \
    --skip-marshal \
    --skip-ctags
```

### Development Setup

```bash
# Full development setup
./scripts/build-setup-venv.sh \
    --build-circt \
    --verbose

# Additional development tools
pip install black pytest mypy pre-commit
```

### Multiple Environments

```bash
# Create separate environments for different projects
./scripts/build-setup-venv.sh --venv-path .venv-rocket
./scripts/build-setup-venv.sh --venv-path .venv-boom --use-lean-venv
```

## Development Workflow

### Daily Usage

```bash
# Start work session
cd /path/to/chipyard
source env.sh

# Generate hardware
cd sims/verilator
make CONFIG=RocketConfig

# Run tests
make run-asm-tests

# Edit hardware (generators/chipyard/src/main/scala/...)
# Regenerate
make CONFIG=RocketConfig
```

### Environment Management

```bash
# Reactivate environment
source env.sh

# Update Python packages
pip install --upgrade -r requirements.txt

# Rebuild toolchain (if needed)
cd $RISCV && make clean && make

# Update submodules
git submodule update --recursive
```

### IDE Integration

#### VS Code
```json
// .vscode/settings.json
{
    "python.pythonPath": ".venv/bin/python",
    "python.terminal.activateEnvironment": true
}
```

#### IntelliJ IDEA
- Set Project SDK to `.venv/bin/python`
- Configure SBT to use system installation
- Set Scala SDK to SBT-managed version

### Backup and Migration

```bash
# Backup environment
tar -czf chipyard-backup.tar.gz .venv requirements.txt env.sh

# Restore on new system
tar -xzf chipyard-backup.tar.gz
./scripts/build-setup-venv.sh --skip-venv  # Skip venv creation
```

## References

- **Chipyard Documentation**: https://chipyard.readthedocs.io/
- **Chisel Documentation**: https://www.chisel-lang.org/
- **RISC-V Specification**: https://riscv.org/specifications/
- **FireSim Documentation**: https://docs.fires.im/
- **UC Berkeley BAR Group**: https://bar.eecs.berkeley.edu/

---

**Note**: This installation method is an alternative to the official conda-based setup. While thoroughly tested, it may not be suitable for all use cases. For official support, refer to the main Chipyard documentation. 