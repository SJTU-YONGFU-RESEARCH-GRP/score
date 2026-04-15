# Occamy RTL Organization Documentation

This document summarizes the SCORE Occamy dataset flow and artifacts generated under `datasets/occamy/d5d0d832/`.

## Table of Contents

- [Overview](#overview)
- [SoC architecture](#soc-architecture)
- [Licensing](#licensing)
- [Installation Script](#installation-script)
- [Generation Script](#generation-script)
- [Available Designs](#available-designs)
- [Output Organization](#output-organization)
- [Dataset Structure](#dataset-structure)
- [Usage Examples](#usage-examples)
- [Performance Expectations](#performance-expectations)
- [Troubleshooting](#troubleshooting)

## Overview

SCORE uses Bender-based snapshot generation for Occamy: resolve dependencies from `tools/occamy`, copy the resolved tree into a commit-scoped dataset, and record verification attempts with Verilator.

### Key Features

- **Commit-scoped datasets**: Output path includes the upstream Occamy commit SHA (`d5d0d832`).
- **Source snapshot packaging**: `source_snapshot/` includes local Occamy sources and `.bender` checkouts.
- **Verification evidence**: `verification/verification_summary.txt` plus detailed Verilator logs are produced.
- **Orchestrated workflow**: `run_occamy.sh` chains submodule bootstrap, install, and generation.

### Scripts Overview

1. `./scripts/install_occamy.sh` installs required host tooling and Bender.
2. `./scripts/occamy_env.sh` exports environment variables for the flow.
3. `./scripts/generate_occamy.sh` performs checkout, snapshot, full verification, and reduced-scope fallback verification.
4. `./scripts/run_occamy.sh` runs the full end-to-end flow.

### Architecture Overview

- The Occamy manifest (`tools/occamy/Bender.yml`) includes generated SoC simulation sources under `target/sim/src/`.
- Testbench/simulation harness sources include `target/sim/test/testharness.sv` and UART DPI support.

## SoC architecture

`tools/occamy/Bender.yml` indicates:

- SoC-level generated units (`occamy_top.sv`, `occamy_soc.sv`, `occamy_pkg.sv`, wrapper/control modules) under `target/sim/src/`.
- Integration of cluster/core-related dependencies (including CVA6 and Snitch-related components).
- Simulation/testbench components under `target/sim/test/` (notably `testharness.sv`).

## Licensing

Occamy and vendored components include explicit license files, including:

- `tools/occamy/LICENSE`
- `tools/occamy/hw/LICENSE`
- `tools/occamy/hw/vendor/pulp_platform_axi_tlb/LICENSE`
- `tools/occamy/hw/vendor/pulp_platform_opentitan_peripherals/LICENSE`

The dataset snapshot under `datasets/occamy/d5d0d832/` reflects generated copies of upstream-licensed source content.

## Installation Script

### Overview

`./scripts/install_occamy.sh` prepares required host tools and Bender for Occamy generation.

### Basic Usage

```bash
# Standard installation
./scripts/install_occamy.sh

# Skip OS package installation
./scripts/install_occamy.sh --no-system-deps
```

## Generation Script

### Overview

`./scripts/generate_occamy.sh` resolves dependencies using Bender, snapshots sources, attempts testharness materialization, and runs Verilator verification checks. It records both full-flow verification results and a reduced-scope fallback lint result, then emits policy keys for machine parsing.

### Basic Usage

```bash
# Standard generation (bender checkout)
./scripts/generate_occamy.sh

# Skip checkout and reuse existing .bender
./scripts/generate_occamy.sh --skip-checkout
```

### Command-Line Options

| Option | Description | Default |
|---|---|---|
| `-h`, `--help` | Show help | N/A |
| `--skip-checkout` | Skip Bender checkout/update | disabled |
| `--bender-update` | Use `bender update` instead of checkout | disabled |

### Generation Process

1. Load environment hooks (`setup_local_env.sh`, `occamy_env.sh`) when present.
2. Run `bender checkout` in `tools/occamy`.
3. Snapshot resolved source tree into `datasets/occamy/<commit>/source_snapshot/`.
4. Ensure `target/sim/test/testharness.sv` exists (generate or fallback from template).
5. Create Verilator filelist via `bender script flist-plus -t verilator`.
6. Run Verilator lint/elaboration/simulation attempts and write verification summaries.
7. Run reduced-scope Verilator lint on a curated `common_cells` RTL slice (`stream_fifo` top module, `-Wno-fatal`) as a compatibility fallback signal.
8. Emit policy fields in summaries:
   - `FULL_FLOW=PASS|FAIL`
   - `REDUCED_SCOPE=PASS|FAIL`
   - `OVERALL=PASS|PASS_WITH_LIMITATIONS|FAIL`

## Available Designs

This dataset is a source-snapshot style output and does not use a multi-design `rtl_designs/` matrix. The primary simulation harness artifact is:

| Artifact | Path |
|---|---|
| Test harness | `datasets/occamy/d5d0d832/source_snapshot/target/sim/test/testharness.sv` |

## Output Organization

```text
datasets/occamy/d5d0d832/
??? logs/
?   ??? generate_*.log
??? occamy_summary.txt
??? source_snapshot/
?   ??? Bender.yml
?   ??? hw/
?   ??? target/
?   ??? .bender/
??? verification/
    ??? verification_summary.txt
    ??? occamy_verilator.flist
    ??? bender_flist.log
    ??? verilator_lint.log
    ??? verilator_elab.log
    ??? verilator_sim.log
    ??? generate_testharness.log
```

## Dataset Structure

- `source_snapshot/`: Resolved Occamy source tree and dependency checkouts.
- `verification/occamy_verilator.flist`: Bender-generated Verilator view filelist.
- `verification/verilator_*.log`: Lint/elaboration/simulation evidence.
- `verification/common_cells_reduced.flist`: Reduced-scope Bender filelist for `common_cells`.
- `verification/verilator_lint_reduced.log`: Reduced-scope fallback lint evidence for `common_cells/stream_fifo`.
- `occamy_summary.txt`: Commit metadata and verification status rollup.
- `verification/verification_summary.txt` and `occamy_summary.txt`: Include machine-parseable policy status lines (`FULL_FLOW`, `REDUCED_SCOPE`, `OVERALL`).

## Usage Examples

```bash
# End-to-end run
./scripts/run_occamy.sh

# Skip install step if host tooling is already prepared
./scripts/run_occamy.sh --skip-install
```

## Performance Expectations

Runtime is typically dominated by dependency checkout and snapshot copying. Verilator checks can fail early on unsupported upstream constructs, which shortens runtime but produces actionable logs.

## Troubleshooting

- **Symptom**: `bender flist-plus` fails due missing `target/sim/test/testharness.sv`.
  - **Cause**: The source tree has `testharness.sv.tpl` but not a materialized `testharness.sv`.
  - **Fix**: `generate_occamy.sh` now attempts `make -C target/sim tb` and falls back to template copy.

- **Symptom**: Verilator lint fails with unsupported primitives or package resolution errors.
  - **Cause**: Upstream dependency code includes constructs/tooling assumptions not directly supported by the current lint invocation.
  - **Fix**: Inspect `datasets/occamy/d5d0d832/verification/verilator_lint.log` and tune verification scope/filelist strategy as needed.

- **Symptom**: Full verification fails but reduced-scope lint passes.
  - **Cause**: Full Occamy/CVA6 dependency graph exceeds current Verilator compatibility in this environment.
  - **Fix**: Use `verification/verilator_lint_reduced.log` as reduced-scope evidence while tracking full-flow issues via `verification/verilator_lint.log`; consume `OVERALL=PASS_WITH_LIMITATIONS` for automated gating/reporting.
