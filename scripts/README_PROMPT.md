# SCORE Script Prompt Guide

This file defines a consistent prompt/checklist when creating or modifying `scripts/run_*.sh`, `scripts/install_*.sh`, and `scripts/generate_*.sh`.

## Goals

- Keep script behavior consistent across projects.
- Make dataset outputs comparable (`*_summary.txt`, `manifest.json`, logs, verification summaries).
- Prefer robust bootstrap/install flows that work in partially initialized checkouts.

## Prompt Template

Use this prompt when asking an agent to add or update a project pipeline:

```
Implement/refresh the SCORE pipeline for <project> with:
1) run_<project>.sh
2) install_<project>.sh
3) generate_<project>.sh

Requirements:
- Shell: bash, `set -euo pipefail`.
- Use scripts/common_logging.sh for structured logs.
- Use scripts/common_submodule_bootstrap.sh for tool checkout bootstrap.
- run_* orchestrates submodule -> install -> generate with pass-through args (`--`).
- install_* supports:
  - --no-system-deps
  - --check-only (if applicable)
  - graceful behavior when sudo/package install fails but required tools already exist
- generate_* writes outputs under datasets/<project>/<commit>/ and includes:
  - logs/
  - manifest.json
  - <project>_summary.txt (root dataset summary)
  - verification/verification_summary.txt (if verification exists)
- Verification should prefer Verilator-based checks when possible.
- Summary format must match existing SCORE style (see section below).
- Do not use destructive git operations.
```

## Dataset Summary Format (Required)

For `datasets/<project>/<commit>/<project>_summary.txt`, use this structure:

1. Title  
   - `<project> SCORE snapshot (<upstream owner/repo>)`
2. Metadata  
   - `Generated (UTC): ...`  
   - `Host: ...`  
   - `SCORE root: ...`  
   - `Source repo: ...`  
   - `Dataset workdir: ...`  
   - `Git commit (short): ...`  
   - `Git commit (full): ...`
3. Tool versions (if relevant)  
   - `bender: ...`  
   - `Verilator: ...`
4. Verification section  
   - `Verification (see <.../verification_summary.txt>):`
   - one line per check, with PASS/FAIL/SKIPPED.
5. Paths  
   - `Manifest: ...`  
   - `Verification summary: ...`  
   - `Bundle path: ...`

## Script Behavior Checklist

- `run_<project>.sh`
  - Validates project root.
  - Logs host OS.
  - Uses `score_prepare_tool_checkout`.
  - Supports `--skip-submodule`, `--skip-install`, `--skip-generate`, `--no-system-deps` (where relevant).
  - Passes extra args to `generate_*` after `--`.

- `install_<project>.sh`
  - Detects OS family.
  - Installs packages when enabled.
  - Handles sudo timeout/failure with clear fallback guidance.
  - Initializes nested submodules inside tool checkout if project needs them.

- `generate_<project>.sh`
  - Derives commit id from tool repo.
  - Creates deterministic dataset paths.
  - Writes `manifest.json`.
  - Writes `<project>_summary.txt`.
  - Writes verification logs and `verification_summary.txt`.
  - Exits non-zero on verification failure, but still writes summary artifacts.

## Verification Guidance

- Prefer Verilator lint/smoke/binary checks over proprietary simulators.
- If upstream default flow is Questa-only, add SCORE-owned Verilator smoke wrapper TB/top.
- Keep verification logs in `datasets/<project>/<commit>/verification/` or `logs/`.
- Record verification status in both verification summary and root summary.

## Logging and Error Handling

- Use `log_info`, `log_warning`, `log_error`, `log_success`.
- Print actionable remediation steps on failure.
- Avoid silent fall-throughs.

## Notes

- Keep updates additive and non-destructive.
- Preserve existing user edits in dirty worktrees.
- If a referenced prompt file/path is missing, create it and keep it concise and actionable.
