# SCORE: **S**ystem-on-**C**hip Verilog **R**TL modules dataset f**o**r **E**DA research

[![License: CC BY 4.0](https://img.shields.io/badge/License-CC%20BY%204.0-lightgrey.svg)](https://creativecommons.org/licenses/by/4.0/)
[![GitHub](https://img.shields.io/badge/GitHub-SJTU--YONGFU--RESEARCH--GRP%2Fscore-181717?logo=github)](https://github.com/SJTU-YONGFU-RESEARCH-GRP/score)
[![Shell](https://img.shields.io/badge/automation-bash%20scripts-4EAA25?logo=gnu-bash&logoColor=white)](https://github.com/SJTU-YONGFU-RESEARCH-GRP/score/tree/main/scripts)

SCORE is an open-source dataset containing consistently generated Verilog RTL code from various state-of-the-art SoC generators and hardware construction languages. The primary motivation for this project is to address the reproducibility and consistency challenges in EDA research benchmarking.
## Table of contents

- [Problem statement & motivation](#problem-statement--motivation)
  - [Problem statement](#problem-statement)
  - [Motivation](#motivation)
  - [How SCORE addresses this](#how-score-addresses-this)
- [Overview](#overview)
- [Architectures supported via `scripts/`](#architectures-supported-via-scripts)
- [Repository layout](#repository-layout)
- [Typical workflow](#typical-workflow)
- [Prerequisites](#prerequisites)
- [Citation](#citation)
- [Licensing](#licensing)
- [Acknowledgments](#acknowledgments)

## Problem statement & motivation

### Problem statement

Many open-source SoC generators and RTL flows exist, but **EDA research benchmarking** often relies on ad hoc setups: different repository revisions, local patches, tool versions, and compile flags. That fragmentation makes it hard to:

- **Compare results** fairly across papers and tools when the underlying RTL is not the same artifact.
- **Reproduce studies** with identical inputs when build recipes are undocumented or environment-specific.
- **Define baselines** for new synthesis, optimization, or verification methods against a stable reference corpus.
- **Isolate improvements** in an algorithm from differences in how the RTL was produced.

### Motivation

SCORE exists to **lower that friction**: treat RTL generation as a **documented, script-driven pipeline** so a dataset snapshot is tied to a **known upstream commit**, a **repeatable install/generate path**, and **logs** captured next to the output. The goal is not to replace upstream projects, but to give the research community a **shared starting point** for experiments that depend on consistent, attributable SoC RTL.

### How SCORE addresses this

- **Consistency** — One documented path per architecture (`install_*.sh` → `generate_*.sh`), so “the RTL we used” is defined by scripts and captured outputs, not a one-off laptop build.
- **Reproducibility** — Snapshots live under `datasets/<architecture>/<commit>/`, tying artifacts to a **pinned upstream revision** and preserving generation logs alongside results.
- **Traceability** — Where `run_*.sh` exists, you can replay upstream-oriented checks after generation; licensing remains **per upstream project** (see [Licensing](#licensing)).
- **Coverage** — Many open SoC generators and platforms are wired through the same automation pattern, so benchmarks can span diverse RTL styles without each team re-implementing the same glue scripts.

## Overview

SCORE collects **versioned RTL snapshots** under `datasets/<architecture>/<commit>/` so EDA experiments can pin the same upstream revision and directory layout. Each supported architecture has shell automation in `scripts/`:

| Phase | Role |
|--------|------|
| `install_*.sh` | Prepare toolchains, dependencies, or environment (often sources `*_env.sh` helpers). |
| `generate_*.sh` | Build or export RTL into the dataset tree and write logs alongside the snapshot. |
| `run_*.sh` | Simulation, smoke tests, or other checks where implemented. |

Not every architecture defines a `run_*.sh` script yet (for example, **SoC Automation** and **RISC-V VHDL** currently stop after generation).

**Licensing:** RTL snapshots and submodule trees follow **each upstream project’s license**. SCORE-authored material in this repo (for example `scripts/` and docs) is offered under **CC BY 4.0** — see [Licensing](#licensing).

## Architectures supported via `scripts/`

Each row lists the **upstream GitHub repository** and the **script basename** (full path: `scripts/<name>.sh`). Dataset output generally lives under `datasets/<folder>/` with a short Git commit directory; exact layout is defined per `generate_*.sh`.

| Architecture | Upstream | `install_*` | `generate_*` | `run_*` |
|--------------|----------|-------------|--------------|---------|
| **Ara** | [pulp-platform/ara](https://github.com/pulp-platform/ara) | `install_ara.sh` | `generate_ara.sh` | `run_ara.sh` |
| **AraXL** | [pulp-platform/AraXL](https://github.com/pulp-platform/AraXL) | `install_araxl.sh` | `generate_araxl.sh` | `run_araxl.sh` |
| **Astral** | [pulp-platform/astral](https://github.com/pulp-platform/astral) | `install_astral.sh` | `generate_astral.sh` | `run_astral.sh` |
| **Auteur** | [pulp-platform/auteur](https://github.com/pulp-platform/auteur) | `install_auteur.sh` | `generate_auteur.sh` | `run_auteur.sh` |
| **Carfield** | [pulp-platform/carfield](https://github.com/pulp-platform/carfield) | `install_carfield.sh` | `generate_carfield.sh` | `run_carfield.sh` |
| **Cheshire** | [pulp-platform/cheshire](https://github.com/pulp-platform/cheshire) | `install_cheshire.sh` | `generate_cheshire.sh` | `run_cheshire.sh` |
| **Cheshire (IHP130-O)** | [pulp-platform/cheshire-ihp130-o](https://github.com/pulp-platform/cheshire-ihp130-o) | `install_cheshire_ihp130_o.sh` | `generate_cheshire_ihp130_o.sh` | `run_cheshire_ihp130_o.sh` |
| **Chimera** | [pulp-platform/chimera](https://github.com/pulp-platform/chimera) | `install_chimera.sh` | `generate_chimera.sh` | `run_chimera.sh` |
| **CROC** | [pulp-platform/croc](https://github.com/pulp-platform/croc) | `install_croc.sh` | `generate_croc.sh` | `run_croc.sh` |
| **CVA6** | [pulp-platform/cva6](https://github.com/pulp-platform/cva6) | `install_cva6.sh` | `generate_cva6.sh` | `run_cva6.sh` |
| **Gemmini** | [ucb-bar/gemmini](https://github.com/ucb-bar/gemmini) | `install_gemmini.sh` | `generate_gemmini.sh` | `run_gemmini.sh` |
| **HERO** | [pulp-platform/hero](https://github.com/pulp-platform/hero) | `install_hero.sh` | `generate_hero.sh` | `run_hero.sh` |
| **Ibex** | [lowRISC/ibex](https://github.com/lowRISC/ibex) | `install_ibex.sh` | `generate_ibex.sh` | `run_ibex.sh` |
| **IOb-SoC** | [IObundle/iob-soc](https://github.com/IObundle/iob-soc) | `install_iob_soc.sh` | `generate_iob_soc.sh` | `run_iob_soc.sh` |
| **MAGIA** | [pulp-platform/MAGIA](https://github.com/pulp-platform/MAGIA) | `install_magia.sh` | `generate_magia.sh` | `run_magia.sh` |
| **MemPool** | [pulp-platform/mempool](https://github.com/pulp-platform/mempool) | `install_mempool.sh` | `generate_mempool.sh` | `run_mempool.sh` |
| **NEORV32 (Verilog)** | [stnolting/neorv32](https://github.com/stnolting/neorv32) | `install_neorv32_verilog.sh` | `generate_neorv32_verilog.sh` | `run_neorv32_verilog.sh` |
| **NEORV32 (VHDL)** | [stnolting/neorv32](https://github.com/stnolting/neorv32) | `install_neorv32_vhdl.sh` | `generate_neorv32_vhdl.sh` | `run_neorv32_vhdl.sh` |
| **Occamy** | [pulp-platform/occamy](https://github.com/pulp-platform/occamy) | `install_occamy.sh` | `generate_occamy.sh` | `run_occamy.sh` |
| **OpenPiton** | [PrincetonUniversity/openpiton](https://github.com/PrincetonUniversity/openpiton) | `install_openpiton.sh` | `generate_openpiton.sh` | `run_openpiton.sh` |
| **Picobello** | [pulp-platform/picobello](https://github.com/pulp-platform/picobello) | `install_picobello.sh` | `generate_picobello.sh` | `run_picobello.sh` |
| **PULP cluster** | [pulp-platform/pulp_cluster](https://github.com/pulp-platform/pulp_cluster) | `install_pulp_cluster.sh` | `generate_pulp_cluster.sh` | `run_pulp_cluster.sh` |
| **PULPissimo** | [pulp-platform/pulpissimo](https://github.com/pulp-platform/pulpissimo) | `install_pulpissimo.sh` | `generate_pulpissimo.sh` | `run_pulpissimo.sh` |
| **PULP SoC** | [pulp-platform/pulp_soc](https://github.com/pulp-platform/pulp_soc) | `install_pulp_soc.sh` | `generate_pulp_soc.sh` | `run_pulp_soc.sh` |
| **Rocket Chip** | [chipsalliance/rocket-chip](https://github.com/chipsalliance/rocket-chip) | `install_rocket_chip.sh` | `generate_rocket_chip.sh` | `run_rocket_chip.sh` |
| **RISC-V VHDL** | [sergeykhbr/riscv_vhdl](https://github.com/sergeykhbr/riscv_vhdl) | `install_riscv_vhdl.sh` | `generate_riscv_vhdl.sh` | — |
| **RV12** | [RoaLogic/RV12](https://github.com/RoaLogic/RV12) | `install_rv12.sh` | `generate_rv12.sh` | `run_rv12.sh` |
| **rv_tracer** | [pulp-platform/rv_tracer](https://github.com/pulp-platform/rv_tracer) | `install_rv_tracer.sh` | `generate_rv_tracer.sh` | `run_rv_tracer.sh` |
| **Safety Island** | [pulp-platform/safety_island](https://github.com/pulp-platform/safety_island) | `install_safety_island.sh` | `generate_safety_island.sh` | `run_safety_island.sh` |
| **Snitch cluster** | [pulp-platform/snitch_cluster](https://github.com/pulp-platform/snitch_cluster) | `install_snitch_cluster.sh` | `generate_snitch_cluster.sh` | `run_snitch_cluster.sh` |
| **SoC Automation** | [habibagamal/SoC\_Automation](https://github.com/habibagamal/SoC_Automation) | `install_soc_automation.sh` | `generate_soc_automation.sh` | — |
| **Spatz** | [pulp-platform/spatz](https://github.com/pulp-platform/spatz) | `install_spatz.sh` | `generate_spatz.sh` | `run_spatz.sh` |

**Ibex:** the upstream core is not listed as a git submodule in `.gitmodules`; clone or link it under `tools/ibex` as expected by `install_ibex.sh` / `generate_ibex.sh`.

### Other submodules (no `generate_*.sh` in this repo)

`.gitmodules` also pins auxiliary repos (for example Chipyard, Verilator, Chisel, Amaranth, XLS, Bambu, PeakRDL, and others) for local development or future automation. They are **not** described here as fully scripted dataset flows until a matching `scripts/generate_*.sh` exists.

## Repository layout

```
score/
├── datasets/       # Versioned RTL snapshots (per architecture / commit)
├── tools/          # Upstream generator clones (git submodules) and local tool trees
├── scripts/        # install_*, generate_*, run_*, env helpers, submodule utilities
├── docs/           # Additional documentation
├── installations/  # Install logs / records where used
└── plots/          # Analysis outputs (when produced)
```

## Typical workflow

1. **Clone** the repository and **initialize** the submodules you need (full tree or selective paths):

   ```bash
   git clone https://github.com/SJTU-YONGFU-RESEARCH-GRP/score.git
   cd score
   ./scripts/init-submodules.sh              # all submodules, or pass paths
   ```

2. **Install** dependencies for one architecture:

   ```bash
   ./scripts/install_rocket_chip.sh          # example
   ```

3. **Generate** RTL into `datasets/`:

   ```bash
   ./scripts/generate_rocket_chip.sh         # example
   ```

4. **Run** checks when a `run_*.sh` script exists:

   ```bash
   ./scripts/run_rocket_chip.sh              # example
   ```

Helper scripts include `add-submodules.sh`, `update-submodules.sh`, `check-submodules.sh`, and `setup_local_env.sh` (machine-specific paths). See `--help` where provided.

## Prerequisites

Requirements depend on which architectures you build. Typical ingredients include **Git**, a recent **Python**, **Java** / **Scala** / **sbt** or **Mill** (Chisel flows), **Verilator** or commercial simulators where scripts invoke them, and upstream-specific toolchains (RISC-V GCC, Bender, FuseSoC, etc.). Read the relevant `install_*.sh` and per-tool documentation before a full run.

## Citation

If you use SCORE in academic work, cite the repository and the upstream projects whose RTL you benchmark. Example BibTeX for the dataset collection (adjust title, authors, and year as appropriate for your publication):

```bibtex
@misc{score,
  title        = {SCORE: Reproducible SoC RTL Snapshots for EDA Research},
  howpublished = {\url{https://github.com/SJTU-YONGFU-RESEARCH-GRP/score}},
  note         = {Accessed: replace-with-date}
}
```

## Licensing

- **Upstream RTL, snapshots, and submodules** (`tools/`, generated content under `datasets/`, vendored code): use and redistribution are governed by the **license of each upstream repository** (Apache-2.0, BSD, Solderpad, GPL variants, etc.). Check the `LICENSE` or `COPYING` file in the corresponding tree and cite those projects as they require.

- **SCORE-specific materials** (this `README`, automation and helpers under `scripts/` that are original to SCORE, and other documentation authored here): licensed under **Creative Commons Attribution 4.0 International ([CC BY 4.0](https://creativecommons.org/licenses/by/4.0/))**. The [LICENSE](LICENSE) file is the **unmodified** CC BY 4.0 legal text from Creative Commons.

If you are unsure which terms apply to a path, treat it as **upstream-licensed** unless it is clearly original SCORE documentation or scripts.

## Acknowledgments

Thanks to the **open-source SoC and tooling communities** whose generators and build systems make reproducible RTL snapshots possible, including the **PULP Platform**, **CHIPS Alliance**, **UC Berkeley** BAR projects, **lowRISC**, **IObundle**, **Princeton OpenPiton**, **NEORV32**, **Roa Logic**, and many others referenced in the table above.
