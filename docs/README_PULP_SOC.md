# PULP SoC Dataset Generation

This document describes how SCORE generates and validates the `pulp_soc` dataset.

## Overview

- Source: `tools/pulp-soc`
- Generator: `scripts/generate_pulp_soc.sh`
- Runner: `scripts/run_pulp_soc.sh`
- Dataset root: `datasets/pulp_soc/<commit>/`

## Generation Flow

1. Resolve submodule and environment.
2. Run `bender checkout` (with `Bender.local` gpio override by default).
3. Snapshot sources into `source_snapshot/`.
4. Create dataset-friendly RTL bundle under `rtl_designs/pulp_soc_snapshot/`.
5. Generate smoke top/testbench and run Verilator lint.
6. Write summary and verification artifacts.

## Output Structure

- `datasets/pulp_soc/<commit>/source_snapshot/`: upstream repository snapshot.
- `datasets/pulp_soc/<commit>/rtl_designs/pulp_soc_snapshot/`: representative RTL filelist, config, smoke RTL/TB.
- `datasets/pulp_soc/<commit>/verification/verification_summary.txt`: validation status.
- `datasets/pulp_soc/<commit>/verification/verification_results_<ts>.txt`: per-check record.
- `datasets/pulp_soc/<commit>/verification/pulp_soc_smoke_verilator_lint.log`: Verilator evidence.
- `datasets/pulp_soc/<commit>/pulp_soc_summary.txt`: dataset summary.

## Verification

Current checks implemented by the generator:

- Verilog RTL presence in snapshot-derived filelist.
- Testbench artifact generation (`pulp_soc_smoke_tb.sv`).
- Verilator lint-only smoke check.

## Usage

From repository root:

```bash
bash scripts/run_pulp_soc.sh --skip-install
```

Direct script usage:

```bash
bash scripts/generate_pulp_soc.sh
```
