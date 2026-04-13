# SCORE: A Corpus of Synthesizable System-on-Chip Verilog RTL Modules Dataset for EDA Research

**S**ystem-on-**C**hip (SoC) Verilog **R**TL Modules Dataset f**o**r **E**DA Research

[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)
[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.XXXXXXX.svg)](https://doi.org/10.5281/zenodo.XXXXXXX)

## Overview

SCORE is an open-source dataset containing consistently generated Verilog RTL code from various state-of-the-art SoC generators and hardware construction languages. The primary motivation for this project is to address the reproducibility and consistency challenges in EDA research benchmarking.

### Problem Statement

While numerous open-source SoC generators and RTL generation tools are available on GitHub, researchers often use different versions, configurations, or compilation settings when generating RTL for benchmarking. This inconsistency makes it difficult to:

- **Compare results** across different studies and publications
- **Reproduce experiments** with identical RTL inputs
- **Establish baseline metrics** for new EDA tools and methodologies
- **Ensure fair comparisons** between different optimization techniques

### Solution

SCORE provides a curated collection of pre-generated, synthesizable Verilog RTL modules from popular open-source generators, ensuring:

- ✅ **Consistency**: All RTL is generated with documented, reproducible configurations
- ✅ **Quality**: All modules are verified to be synthesizable and functionally correct
- ✅ **Diversity**: Coverage of different architectural paradigms and complexity levels
- ✅ **Accessibility**: Ready-to-use RTL without complex toolchain setup requirements

## Dataset Contents

### SoC Generators

| Generator | Repository | Description | RTL Modules |
|-----------|------------|-------------|-------------|
| **Rocket Chip** | [chipsalliance/rocket-chip](https://github.com/chipsalliance/rocket-chip) | RISC-V processor generator from UC Berkeley | CPU cores, cache hierarchies, interconnects |
| **OpenPiton** | [PrincetonUniversity/openpiton](https://github.com/PrincetonUniversity/openpiton) | Manycore processor based on OpenSPARC T1 | Cache coherent multicore systems |
| **NEORV32** | [stnolting/neorv32](https://github.com/stnolting/neorv32) | 32-bit RISC-V microcontroller SoC in VHDL | MCU cores, peripherals, debug units |
| **IOb-SoC** | [IObundle/iob-soc](https://github.com/IObundle/iob-soc) | RISC-V SoC template using Python framework | VexRiscv cores, TileLink interconnects |
| **RISC-V VHDL** | [sergeykhbr/riscv_vhdl](https://github.com/sergeykhbr/riscv_vhdl) | Portable RISC-V SoC with full debug support | River CPU, Ethernet MAC, peripherals |
| **SoC Automation** | [shalan/SoC_Automation](https://github.com/shalan/SoC_Automation) | JSON-driven SoC generator | AMBA AHB/APB interconnects, configurable IPs |
| **HERO Platform** | [pulp-platform/hero](https://github.com/pulp-platform/hero) | Heterogeneous RISC-V research platform | Multi-core accelerators, IOMMU, OpenMP support |
| **Ibex** | [lowRISC/ibex](https://github.com/lowRISC/ibex) | 32-bit RISC-V core | CPU core implementations, verification IPs |

### Specialized RTL Generators

| Generator | Repository | Description | RTL Modules |
|-----------|------------|-------------|-------------|
| **Gemmini** | [ucb-bar/gemmini](https://github.com/ucb-bar/gemmini) | Systolic array generator for ML acceleration | Systolic arrays, scratchpads, controllers |
| **Chipyard** | [ucb-bar/chipyard](https://github.com/ucb-bar/chipyard) | Agile RISC-V SoC design framework | SoC templates, test harnesses, verification components |

### Hardware Construction Languages (Meta-HDLs)

**Python-based Frameworks:**

| Framework | Repository | Description | Key Features |
|-----------|------------|-------------|--------------|
| **Amaranth** | [amaranth-lang/amaranth](https://github.com/amaranth-lang/amaranth) | Modern Python toolbox for building digital hardware | Formerly nMigen, refreshed design |
| **MyHDL** | [myhdl/myhdl](https://github.com/myhdl/myhdl) | Process-based HDL with verification framework | Co-simulation, test benches |
| **PyMTL3** | [pymtl/pymtl3](https://github.com/pymtl/pymtl3) | Hardware generation, simulation, and verification framework | Cycle-level modeling |
| **PyRTL** | [UCSBarchlab/PyRTL](https://github.com/UCSBarchlab/PyRTL) | Meta HDL suitable for research applications | Educational focus |
| **magma** | [phanrahan/magma](https://github.com/phanrahan/magma) | Stanford's meta HDL framework | Functional approach |

**Scala-based Frameworks:**

| Framework | Repository | Description | Key Features |
|-----------|------------|-------------|--------------|
| **Chisel** | [chipsalliance/chisel](https://github.com/chipsalliance/chisel) | UC Berkeley's hardware construction language | FIRRTL backend, extensive ecosystem |
| **SpinalHDL** | [SpinalHDL/SpinalHDL](https://github.com/SpinalHDL/SpinalHDL) | Alternative Scala-based meta HDL | High-level constructs, simulation |

**Other Language Frameworks:**

| Framework | Repository | Language | Description |
|-----------|------------|----------|-------------|
| **Hardcaml** | [janestreet/hardcaml](https://github.com/janestreet/hardcaml) | OCaml | Functional hardware description with testing tools |
| **CλaSH** | [clash-lang/clash-compiler](https://github.com/clash-lang/clash-compiler) | Haskell | Functional hardware description language |

### High-Level Synthesis (HLS) Tools

| Tool | Repository | Description | Input Language |
|------|------------|-------------|----------------|
| **XLS** | [google/xls](https://github.com/google/xls) | Google's open-source HLS toolchain | DSLX (custom functional language) |
| **ahaHLS** | [StanfordAHA/aha](https://github.com/StanfordAHA/aha) | LLVM-based open source HLS tool | C/C++ |
| **bambu** | [ferrandi/PandA-bambu](https://github.com/ferrandi/PandA-bambu) | GCC-based C→Verilog compiler | C/C++ |
| **PipelineC** | [JulianKemmerer/PipelineC](https://github.com/JulianKemmerer/PipelineC) | C-like HDL with automatic pipelining | C-like syntax |

### Hardware Intermediate Representations

| IR | Repository | Description | Backend Support |
|----|------------|-------------|-----------------|

### Specialized RTL Generators

| Tool | Repository | Description | Application Domain |
|------|------------|-------------|-------------------|
| **PeakRDL** | [SystemRDL/PeakRDL](https://github.com/SystemRDL/PeakRDL) | SystemRDL-based control & status register toolchain | Register generation |
| **RgGen** | [rggen/rggen](https://github.com/rggen/rggen) | Code generator for RTL and verification models | Register abstraction |

## Dataset Structure

```
score/
├── datasets/            # Generated RTL libraries organized by generator
│   ├── rocket-chip/     # Rocket Chip generated modules
│   ├── openpiton/       # OpenPiton generated modules
│   ├── neorv32/         # NEORV32 generated modules
│   ├── iob-soc/         # IOb-SoC generated modules
│   ├── riscv-vhdl/      # RISC-V VHDL generated modules
│   ├── soc-automation/  # SoC Automation generated modules
│   ├── hero/            # HERO Platform generated modules
│   ├── gemmini/         # Gemmini generated modules
│   ├── ibex/            # Ibex generated modules
│   └── chipyard/        # Chipyard generated modules
├── tools/               # Source generators and toolchains
├── docs/                # Documentation and design specifications
├── scripts/             # Automation and build scripts
├── installations/       # Installation configurations and logs
└── plots/               # Analysis and characterization data (planned)
```

## Quick Start

### Prerequisites

- Git with submodule support
- Scala Build Tool (SBT) 1.6+
- Java 8 or 11
- Python 3.8+
- Verilator (for simulation)

### Getting Started

1. **Clone the repository with submodules:**
   ```bash
   git clone --recursive https://github.com/your-org/score.git
   cd score
   ```

2. **Initialize submodules:**
   ```bash
   ./scripts/add-submodules.sh
   ```

3. **Generate RTL modules:**
   ```bash
   # Generate all modules (this may take several hours)
   make generate-all

   # Or generate specific modules
   make generate-rocket-chip
   make generate-gemmini
   make generate-openpiton
   make generate-neorv32
   make generate-iob-soc
   make generate-riscv-vhdl
   make generate-soc-automation
   make generate-hero
   ```

4. **Access pre-generated RTL:**
   ```bash
   ls datasets/rocket-chip/     # Rocket Chip RTL modules
   ls datasets/openpiton/       # OpenPiton RTL modules
   ls datasets/neorv32/         # NEORV32 RTL modules
   ls datasets/iob-soc/         # IOb-SoC RTL modules
   ls datasets/riscv-vhdl/      # RISC-V VHDL RTL modules
   ls datasets/soc-automation/  # SoC Automation RTL modules
   ls datasets/hero/            # HERO Platform RTL modules
   ls datasets/gemmini/         # Gemmini RTL modules
   ls datasets/ibex/            # Ibex RTL modules
   ls datasets/chipyard/        # Chipyard RTL modules
   ```

## Usage Examples

### For EDA Tool Benchmarking

```bash
# Use SCORE RTL modules as inputs to your synthesis tool
your_synthesis_tool --input datasets/rocket-chip/RocketCore.v --output results/

# Run place-and-route with consistent RTL
your_pnr_tool --netlist datasets/gemmini/SystolicArray.v --constraints constraints.sdc

# Compare different SoC architectures
your_tool --input datasets/rocket-chip/RocketCore.v    # Rocket Chip RISC-V core
your_tool --input datasets/openpiton/ArianeCore.v     # OpenPiton manycore system
your_tool --input datasets/neorv32/neorv32_cpu.v       # NEORV32 microcontroller
your_tool --input datasets/ibex/ibex_core.v            # Ibex RISC-V core
```

### For Academic Research

```python
# Python example for automated benchmarking
import glob
import subprocess

# Get all RTL modules from SCORE
rtl_files = glob.glob("datasets/**/*.v", recursive=True)

# Categorize by SoC architecture type
generators = {
    'riscv_soc_generators': glob.glob("datasets/{rocket-chip,iob-soc,neorv32,ibex}/**/*.v"),
    'manycore_systems': glob.glob("datasets/{openpiton}/**/*.v"),
    'specialized_accelerators': glob.glob("datasets/{gemmini}/**/*.v"),
    'soc_templates': glob.glob("datasets/{soc-automation,hero,riscv-vhdl}/**/*.v"),
    'frameworks': glob.glob("datasets/{chipyard}/**/*.v")
}

# Run your EDA tool on each category
for category, files in generators.items():
    for rtl_file in files:
        result = subprocess.run(["your_tool", rtl_file], capture_output=True)
        # Process results by category...
```

## Configuration Details

All RTL modules are generated with specific, documented configurations to ensure reproducibility:

### SoC Generator Configurations
- **Rocket Chip**: RocketConfig, BoomConfig, QuadCoreConfig
- **Gemmini**: DefaultConfig (16x16), LargeConfig (32x32), QuantizedConfig (8-bit)
- **OpenPiton**: BaseConfig (single-core), MulticoreConfig (4-core)
- **Ibex**: SimpleSystem, CoreOnly, DemoSystem configurations

### Meta-HDL Configurations
- **Chisel**: Standard library components, custom generators
- **Amaranth**: Platform-agnostic designs, FPGA-specific variants
- **SpinalHDL**: Bus interfaces, processing elements
- **PyMTL3**: Educational designs, verification components
- **magma**: Functional hardware designs

### HLS Configurations
- **XLS**: Various optimization levels, different target frequencies
- **PipelineC**: Manual and automatic pipeline configurations
- **bambu**: GCC optimization levels, different target devices

## Contributing

We welcome contributions to expand the SCORE dataset! Please see our [contribution guidelines](CONTRIBUTING.md).

### Adding New Generators

1. Fork the repository
2. Add your generator as a submodule in `tools/`
3. Create generation scripts in `scripts/`
4. Document the configurations used
5. Submit a pull request

### Reporting Issues

- **RTL Quality Issues**: Report synthesis/simulation failures
- **Configuration Requests**: Request specific generator configurations
- **Documentation**: Help improve documentation and examples

## Citation

If you use SCORE in your research, please cite:

```bibtex
@misc{score2024,
  title={SCORE: A Corpus of Synthesizable System-on-Chip Verilog RTL Modules Dataset for EDA Research},
  author={[Your Name]},
  year={2024},
  url={https://github.com/your-org/score},
  doi={10.5281/zenodo.XXXXXXX}
}
```

## Research Impact

SCORE enables consistent benchmarking across various EDA research areas:

- **Logic Synthesis**: Consistent RTL inputs for optimization algorithm comparison
- **Physical Design**: Standardized netlists for placement and routing studies
- **Verification**: Common testbenches for formal verification research
- **Machine Learning for EDA**: Large-scale datasets for ML model training
- **Security**: Hardware security analysis with diverse architectural patterns
- **SoC Design Automation**: Benchmarking automated SoC generation tools
- **Heterogeneous Computing**: Analysis of accelerator integration patterns
- **Interconnect Research**: Comparison of different NoC and bus architectures
- **Microcontroller Design**: Embedded system optimization studies
- **HLS Research**: Comparative analysis of different synthesis approaches
- **Meta-HDL Evaluation**: Benchmarking hardware construction languages
- **Compilation Studies**: Analysis of different HDL compilation strategies

## License

This project is licensed under the Apache License 2.0 - see the [LICENSE](LICENSE) file for details.

Individual tools and generators maintain their respective licenses:
- Rocket Chip: BSD-3-Clause
- Gemmini: BSD-3-Clause
- OpenPiton: GPLv2 and OpenSPARC T1 License
- Ibex: Apache-2.0
- Chisel: Apache-2.0
- Amaranth: BSD-2-Clause
- SpinalHDL: MIT
- PyMTL3: BSD-3-Clause
- bambu: GPLv3

## Acknowledgments

- **UC Berkeley**: Rocket Chip, Gemmini, Chisel, and Chipyard
- **Princeton University**: OpenPiton manycore processor
- **lowRISC**: Ibex RISC-V core
- **RISC-V Foundation**: RISC-V ISA specifications
- **Meta-HDL Communities**: Amaranth, MyHDL, PyMTL3, SpinalHDL, magma teams
- **Google**: XLS high-level synthesis framework
- **Politecnico di Milano**: bambu HLS toolchain
- **EDA Research Community**: Feedback and contributions

## Related Projects

### Awesome Lists
- [awesome-hdl](https://github.com/drom/awesome-hdl) - Comprehensive HDL resources
- [awesome-opensource-hardware](https://github.com/aolofsson/awesome-opensource-hardware) - Open source hardware tools

### Complementary Datasets
- [EPFL Benchmarks](https://github.com/lsils/benchmarks) - Combinational logic benchmarks
- [VTR Benchmarks](https://github.com/verilog-to-routing/vtr-verilog-to-routing) - FPGA CAD benchmarks

## Contact

- **Maintainer**: [Your Name] ([your.email@domain.com](mailto:your.email@domain.com))
- **Issues**: [GitHub Issues](https://github.com/your-org/score/issues)
- **Discussions**: [GitHub Discussions](https://github.com/your-org/score/discussions)

---

**Note**: This is an active research project. RTL modules and configurations are continuously updated to reflect the latest generator versions and community needs. 