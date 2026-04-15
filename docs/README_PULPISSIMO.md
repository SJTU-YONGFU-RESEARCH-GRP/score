# PULPissimo Dataset Generation

This document describes how SCORE generates and validates the `pulpissimo` dataset.

## Overview

- Source: `tools/pulpissimo`
- Generator: `scripts/generate_pulpissimo.sh`
- Runner: `scripts/run_pulpissimo.sh`
- Dataset root: `datasets/pulpissimo/<commit>/`

## Generation Flow

1. Resolve submodule and environment.
2. Run `bender checkout` (or `--bender-update` if requested).
3. Snapshot sources into `source_snapshot/`.
4. Create dataset-friendly RTL bundle under `rtl_designs/pulpissimo_snapshot/`.
5. Generate smoke top/testbench and run Verilator lint.
6. Write summary and verification artifacts.

## Output Structure

- `datasets/pulpissimo/<commit>/source_snapshot/`: upstream repository snapshot.
- `datasets/pulpissimo/<commit>/rtl_designs/pulpissimo_snapshot/`: representative RTL filelist, config, smoke RTL/TB.
- `datasets/pulpissimo/<commit>/verification/verification_summary.txt`: validation status.
- `datasets/pulpissimo/<commit>/verification/verification_results_<ts>.txt`: per-check record.
- `datasets/pulpissimo/<commit>/verification/pulpissimo_smoke_verilator_lint.log`: Verilator evidence.
- `datasets/pulpissimo/<commit>/pulpissimo_summary.txt`: dataset summary.

## Verification

Current checks implemented by the generator:

- Verilog RTL presence in snapshot-derived filelist.
- Testbench artifact generation (`pulpissimo_smoke_tb.sv`).
- Verilator lint-only smoke check.

## Usage

From repository root:

```bash
bash scripts/run_pulpissimo.sh --skip-install
```

Direct script usage:

```bash
bash scripts/generate_pulpissimo.sh
```
