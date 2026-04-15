# Picobello RTL Organization Documentation

This document describes the SCORE automation and dataset layout for `pulp-platform/picobello` artifacts generated under `datasets/picobello/<commit>/`.

## Table of Contents

- [Overview](#overview)
- [Installation Script](#installation-script)
- [Generation Script](#generation-script)
- [Output Organization](#output-organization)
- [Verification](#verification)
- [Usage Examples](#usage-examples)
- [Troubleshooting](#troubleshooting)

## Overview

SCORE provides an end-to-end flow for Picobello with:

1. `./scripts/install_picobello.sh` for host tooling (`bender`, `git`, `python3`, `rsync`).
2. `./scripts/generate_picobello.sh` for `bender checkout`, source snapshotting, RTL/testbench emission, and Verilator lint evidence.
3. `./scripts/run_picobello.sh` for orchestration (submodule bootstrap -> install -> generate).

Validated dataset instance:

- `datasets/picobello/71df12a2/`
- Verilog RTL presence: PASS
- Testbench artifact presence: PASS
- Verilator evidence: PASS (`verification/verification_summary.txt`)

## Installation Script

`scripts/install_picobello.sh` installs prerequisites and Bender.

### Key options

- `--no-system-deps`: skip distro package installation
- `--skip-bender`: skip Bender installation

## Generation Script

`scripts/generate_picobello.sh` performs:

1. Resolve dependencies via `bender checkout` (or `--bender-update`).
2. Snapshot `tools/picobello` into `datasets/picobello/<commit>/source_snapshot/`.
3. Build `rtl_designs/picobello_snapshot/` with representative RTL listing and smoke RTL/testbench files.
4. Run `verilator --lint-only` on smoke artifacts.
5. Write:
   - `picobello_summary.txt`
   - `verification/verification_summary.txt`
   - `verification/verification_results_<timestamp>.txt`
   - `verification/picobello_smoke_verilator_lint.log`

## Output Organization

Validated output root:

```text
datasets/picobello/71df12a2/
??? logs/
?   ??? generate_20260415_231648.log
??? picobello_summary.txt
??? source_snapshot/
??? rtl_designs/
?   ??? picobello_snapshot/
?       ??? config.yaml
?       ??? filelist.f
?       ??? picobello_smoke_top.v
?       ??? picobello_smoke_tb.sv
??? verification/
    ??? verification_summary.txt
    ??? verification_results_20260415_231648.txt
    ??? picobello_smoke_verilator_lint.log
```

## Verification

From `datasets/picobello/71df12a2/verification/verification_summary.txt`:

- Verilog RTL presence: PASS
- Testbench artifacts generated: PASS
- Verilator lint PASS: 1
- Verilator lint FAIL: 0
- Verilator lint SKIP: 0

## Usage Examples

```bash
# Full orchestrated flow
./scripts/run_picobello.sh

# Skip install step and regenerate dataset
./scripts/run_picobello.sh --skip-install

# Generate only (after environment/tooling are ready)
./scripts/generate_picobello.sh
```

## Troubleshooting

- If `bender` is missing, run `./scripts/install_picobello.sh`.
- If generation fails with dependency path warnings, inspect `tools/picobello/Bender.yml` and rerun `./scripts/generate_picobello.sh`.
- If Verilator lint fails, inspect `datasets/picobello/<commit>/verification/picobello_smoke_verilator_lint.log`.
