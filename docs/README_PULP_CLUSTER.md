# PULP Cluster RTL Organization Documentation

This document describes SCORE automation and dataset layout for `pulp-platform/pulp_cluster` artifacts generated under `datasets/pulp_cluster/<commit>/`.

## Table of Contents

- [Overview](#overview)
- [Installation Script](#installation-script)
- [Generation Script](#generation-script)
- [Output Organization](#output-organization)
- [Verification](#verification)
- [Usage Examples](#usage-examples)
- [Troubleshooting](#troubleshooting)

## Overview

SCORE provides an end-to-end flow for PULP Cluster with:

1. `./scripts/install_pulp_cluster.sh` for host tooling (`bender`, `git`, `python3`, `rsync`).
2. `./scripts/generate_pulp_cluster.sh` for `bender checkout`, source snapshotting, RTL/testbench emission, and Verilator lint evidence.
3. `./scripts/run_pulp_cluster.sh` for orchestration (submodule bootstrap -> install -> generate).

Validated dataset instance:

- `datasets/pulp_cluster/caaa9735/`
- Verilog RTL presence: PASS
- Testbench artifact presence: PASS
- Verilator evidence: PASS (`verification/verification_summary.txt`, with smoke PASS and full-tb FAIL recorded)

## Installation Script

`scripts/install_pulp_cluster.sh` installs prerequisites and Bender.

### Key options

- `--no-system-deps`: skip distro package installation
- `--skip-bender`: skip Bender installation

## Generation Script

`scripts/generate_pulp_cluster.sh` performs:

1. Resolve dependencies via `bender checkout` (or `--bender-update`).
2. Snapshot `tools/pulp-cluster` into `datasets/pulp_cluster/<commit>/source_snapshot/`.
3. Build `rtl_designs/pulp_cluster_snapshot/` with representative RTL listing and smoke RTL/testbench files.
4. Run `verilator --lint-only` on smoke artifacts.
5. Run full-target Verilator lint against upstream PULP Cluster testbench sources (`tb/pulp_cluster_tb.sv`) using Bender-generated full RTL filelist.
6. Write:
   - `pulp_cluster_summary.txt`
   - `verification/verification_summary.txt`
   - `verification/verification_results_<timestamp>.txt`
   - `verification/pulp_cluster_smoke_verilator_lint.log`
   - `verification/pulp_cluster_full_rtl.flist`
   - `verification/pulp_cluster_full_verilator_lint.log`

## Output Organization

Validated output root:

```text
datasets/pulp_cluster/caaa9735/
??? logs/
?   ??? generate_20260416_020602.log
??? pulp_cluster_summary.txt
??? source_snapshot/
??? rtl_designs/
?   ??? pulp_cluster_snapshot/
?       ??? config.yaml
?       ??? filelist.f
?       ??? pulp_cluster_smoke_top.v
?       ??? pulp_cluster_smoke_tb.sv
??? verification/
    ??? verification_summary.txt
    ??? verification_results_20260416_020602.txt
    ??? pulp_cluster_smoke_verilator_lint.log
    ??? pulp_cluster_full_rtl.flist
    ??? pulp_cluster_full_verilator_lint.log
```

## Verification

From `datasets/pulp_cluster/caaa9735/verification/verification_summary.txt`:

- Verilog RTL presence: PASS
- Testbench artifacts generated: PASS
- Verilator lint PASS: 1
- Verilator lint FAIL: 1
- Verilator lint SKIP: 0
- Smoke lint target: PASS (`pulp_cluster_smoke_tb`)
- Full upstream testbench lint target: FAIL (`pulp_cluster_tb`, see `pulp_cluster_full_verilator_lint.log`)

## Usage Examples

```bash
# Full orchestrated flow
./scripts/run_pulp_cluster.sh

# Skip install step and regenerate dataset
./scripts/run_pulp_cluster.sh --skip-install

# Generate only (after environment/tooling are ready)
./scripts/generate_pulp_cluster.sh
```

## Troubleshooting

- If `bender` is missing, run `./scripts/install_pulp_cluster.sh`.
- If generation shows Bender warnings, inspect `tools/pulp-cluster/Bender.yml` and rerun `./scripts/generate_pulp_cluster.sh`.
- If smoke Verilator lint fails, inspect `datasets/pulp_cluster/<commit>/verification/pulp_cluster_smoke_verilator_lint.log`.
- If full testbench Verilator lint fails, inspect `datasets/pulp_cluster/<commit>/verification/pulp_cluster_full_verilator_lint.log` (known macro/unsupported-construct issues can originate in upstream dependencies).
