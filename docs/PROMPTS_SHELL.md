# PROMPTS.md — Generate SCORE-style scripts from a GitHub project

This document is the **instruction set** for an assistant (or human) who receives a **GitHub repository URL** and must produce **three Bash scripts** that match **SCORE** conventions and the best practices used under `scripts/`.

Use this file as the **system prompt** or **paste the “Prompt block” section** at the start of a chat, then supply the GitHub link and any SCORE-specific choices (submodule path, short name).

---

## Goal

For every upstream GitHub RTL/generator project we care about, SCORE maintains:

1. **`install_<name>.sh`** — Install **all** dependencies needed to build that project on the host (or document what must be pre-installed), including **`git submodule update --init --recursive`** for the SCORE checkout of that tool, language toolchains (Java/Scala/SBT/Mill, Python/uv/poetry, Rust, Go, Node/npm, etc.), EDA-adjacent tools (**Verilator**, **iverilog**, commercial simulators if documented), and project-specific package managers (**FuseSoC**, **Bazel**, **CMake**, **Meson**, **npm**, **mise**, …).
2. **`generate_<name>.sh`** — Run the upstream **RTL generation / compilation** flow (Chisel → FIRRTL → Verilog, Yosys, FuseSoC, custom generators, etc.), place outputs under **`datasets/<name>/<commit-id>/`** (or the SCORE-preferred layout), and **verify** generated RTL (syntax / lint / smoke sim) in a reproducible way.
3. **`run_<name>.sh`** — **Orchestrate** the full pipeline: submodule init → `install_<name>.sh` → source env hooks → `generate_<name>.sh`, with flags to skip steps and with **`--` pass-through** of extra arguments to the generate script.

The purpose is **benchmarking**: many Verilog trees versioned by **commit**, with logs and artifacts suitable for comparison across runs.

---

## Repository layout assumptions (SCORE)

Unless the user specifies otherwise, assume:

- **SCORE root** = directory containing `tools/`, `scripts/`, and usually `datasets/`.
- Upstream code lives at **`tools/<submodule-path>`** (e.g. `tools/rocket-chip`, `tools/ibex`). The scripts must **not** hardcode a machine-specific path outside the repo.
- Standard variables at the top of every script:

```bash
#!/usr/bin/env bash
set -euo pipefail   # use for new scripts; if a step must tolerate failures, document why and narrow the exception

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/<short-path>"   # e.g. tools/my-core
```

- **Logs**: under `$PROJECT_ROOT/logs/<name>_install/` and `$PROJECT_ROOT/logs/<name>_generation/` (or under the dataset tree — be consistent per design).
- **Datasets**: `$PROJECT_ROOT/datasets/<name>/$(commit_id)/` where `commit_id` is the **first 8 hex chars** of `HEAD` in the tool repo (see **Submodule commit ID** below).

---

## Submodule commit ID (critical)

Submodules often have a **`.git` file**, not a `.git` directory. **Do not** use `[[ -d "$path/.git" ]]` as the only check.

Use:

```bash
get_commit_id() {
    local repo_path="$1"
    if git -C "$repo_path" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}
```

Store artifacts under `datasets/<name>/$(get_commit_id "$TOOL_DIR")/` so benchmarks are tied to an exact upstream revision.

---

## Phase A — Study the GitHub project (do this before writing scripts)

Given `https://github.com/org/repo`, systematically gather:

| Source | What to extract |
|--------|------------------|
| **README** / **docs/** | Official build steps, supported OS, required versions, “quick start”. |
| **`.gitmodules`** | Nested submodules; your `install_*.sh` must recurse into them after clone. |
| **CI** (`.github/workflows/`, `.gitlab-ci.yml`) | Exact commands, env vars, container images — **gold standard** for automation. |
| **Makefile / ninja / CMake / Meson / Bazel** | Targets for Verilog generation vs simulation vs lint. |
| **Dockerfile / compose** | System packages and pinned versions. |
| **Language manifests** | `build.sbt`, `mill`, `pyproject.toml`, `requirements.txt`, `environment.yml`, `package.json`, `mise.toml`, `flake.nix`, etc. |
| **FuseSoC / Edalize** | `.core` files, `fusesoc.conf`, generator cores. |
| **License / redistribution** | Note if generated RTL or vendor blobs have restrictions (document in script header only if it affects fetching). |

Deliverable of Phase A (in chat or a short note): **one paragraph** summarizing the **authoritative build command(s)** for RTL and how verification is done upstream.

---

## Phase B — Choose `<name>` and submodule path

- **`<name>`**: lowercase, `[a-z0-9_]+`, stable (e.g. `rocket_chip`, `ibex`, `cva6`). File names: `install_<name>.sh`, `generate_<name>.sh`, `run_<name>.sh`, optional `<name>_env.sh`.
- **Submodule path**: must match what SCORE will use in `.gitmodules`, typically `tools/<repo>`.

If the user did not provide these, **infer** a sensible `<name>` from the repo name and propose `tools/<repo>`.

---

## Script 1 — `install_<name>.sh` (requirements)

Mirror patterns from `scripts/install_rocket_chip.sh`, `scripts/install_ibex.sh`, `scripts/install_soc_automation.sh`:

### Structure

1. **Header comment**: purpose, usage (`./scripts/install_<name>.sh` from SCORE root), upstream URL, assumptions.
2. **Globals**: colors, `SCRIPT_DIR`, `PROJECT_ROOT`, `TOOL_DIR`, `LOG_DIR`, `INSTALL_LOG` with timestamp in filename.
3. **Logging helpers**: `log`, `log_info`, `log_success`, `log_warning`, `log_error` — echo with **color** and **`tee -a "$INSTALL_LOG"`**.
4. **OS detection**: support Linux families used in SCORE (`detect_os` style: Debian/Ubuntu, RHEL/Fedora, Arch, openSUSE, Amazon Linux; macOS if applicable). Install packages via the right package manager; use `sudo` only when necessary and document it.
5. **Prerequisites**: `command_exists`, disk/RAM checks (optional but useful for heavy Chisel builds).
6. **Submodule step**:  
   `git submodule update --init --recursive "$RELATIVE_SUBMODULE_PATH"`  
   from `$PROJECT_ROOT` (or document that user must add submodule first).
7. **Toolchain installation** (as required by upstream):
   - JVM + **exact** JDK major version if Chisel/Scala.
   - Python venv under tool dir or `~/.local/share/...` — activate in **`_<name>_env.sh`** for reuse.
   - Verilator / iverilog / cmake / ninja / pkg-config / flex / bison / etc.
8. **Idempotency**: skip reinstall when version matches; **`--check-only`** to verify environment without changing much; **`--force-reinstall`** optional.
9. **Flags** (match SCORE style where possible):
   - `-h, --help`
   - `--no-system-deps` — user already has packages (CI containers).
   - `--debug` — verbose logging.
   - Optional component toggles: `--no-verilator`, `--no-python`, etc.
10. **Optional `scripts/<name>_env.sh`**: export `PATH`, `JAVA_HOME`, `VERILATOR_ROOT`, `PYTHONPATH`, tool-specific vars; this file is **sourced** by `generate_<name>.sh` and optionally by `run_<name>.sh` after install.

### Error handling

- Prefer `set -euo pipefail` for new scripts.
- For long installs, either trap `ERR` with context (like `install_soc_automation.sh`) or use explicit `if ! ...; then log_error; exit 1; fi` after critical steps.

---

## Script 2 — `generate_<name>.sh` (RTL + verify)

Mirror patterns from `scripts/generate_rocket_chip.sh`, `scripts/generate_ibex.sh`, `scripts/generate_soc_automation.sh`:

### Structure

1. **Source env** if present:
   - `$PROJECT_ROOT/scripts/<name>_env.sh`
   - `$PROJECT_ROOT/scripts/setup_local_env.sh` (Rocket/Chisel-style JDK/Scala PATH)
2. **`DATASET_DIR`**: `$PROJECT_ROOT/datasets/<name>/$(get_commit_id "$TOOL_DIR")`
3. **Session logs**: `MAIN_LOG`, `SESSION_LOG` with timestamp; **`tee`** all important messages.
4. **Parallelism**: `PARALLEL_JOBS` with a cap (`MAX_PARALLEL_JOBS`), pass `-j` to make/ninja where safe.
5. **Generation loop** (if multiple configs for benchmarking):
   - Define arrays or config files for variants (core count, ISA, SRAM size, etc.).
   - For each variant: build → copy/sync outputs into `DATASET_DIR/...` with a **unique subdirectory per config**.
6. **RTL verification** (at least one; prefer multiple in order of cost):

   | Check | When to use |
   |-------|-------------|
   | **Verilator lint** | `verilator --lint-only ...` or project’s `make lint-verilator` |
   | **Icarus syntax** | `iverilog -t null file1.v file2.v ...` (see `generate_soc_automation.sh`) |
   | **Upstream unit/smoke sim** | Short simulation target from Makefile/CI (optional flag `--full-regression`) |

7. **Reporting**: summary counts (success/fail), path to dataset, path to verification report text file.
8. **CLI**:
   - `-h, --help`
   - `--verify-only` — no regeneration, only checks existing `DATASET_DIR`
   - `--jobs N`
   - Feature toggles aligned with benchmark matrix (`--enable-*` / `--disable-*`)
9. **Working directory**: assert the script is run from **`PROJECT_ROOT`** or **`cd "$PROJECT_ROOT"`** at start and document it.

### Benchmarking hygiene

- Preserve **upstream directory names** where possible; if you reorganize, write a small `README.txt` or `manifest.json` in the dataset folder listing: commit, date, host OS, tool versions (`verilator --version`, `java -version`, etc.).
- Avoid non-deterministic generators without documenting seeds or upstream limitations.

---

## Script 3 — `run_<name>.sh` (orchestration)

Mirror `scripts/run_rocket_chip.sh`:

### Behavior

1. Validate SCORE root: presence of `scripts/`, expected install/generate scripts, optional `.gitmodules`.
2. Print host OS hint (read `/etc/os-release` or `uname`).
3. **Step 1 — Submodules**:  
   `git submodule update --init --recursive "$SUBMODULE_PATH"`  
   unless `--skip-submodule`.
4. **Step 2 — Install**:  
   `bash "$PROJECT_ROOT/scripts/install_<name>.sh" [INSTALL_FLAGS...]`  
   unless `--skip-install`.
5. **Source** `<name>_env.sh` and `setup_local_env.sh` if they exist (best-effort).
6. **Step 3 — Generate**:  
   `bash "$PROJECT_ROOT/scripts/generate_<name>.sh" [GENERATE_EXTRA...]`  
   unless `--skip-generate`.
7. **Pass-through**: after `--`, forward all remaining args **only** to `generate_<name>.sh`.

### Typical flags

- `-h, --help`
- `--skip-submodule`, `--skip-install`, `--skip-generate`
- Install toggles forwarded or duplicated as needed (`--no-verilator`, `--no-system-deps`, …)

End with a clear success message listing dataset path.

---

## Naming consistency

Use a **single** `<name>` everywhere:

- `install_<name>.sh`
- `generate_<name>.sh`
- `run_<name>.sh`
- Optional: `<name>_env.sh`

Avoid mixing `run_xxx` and `run_xx` — SCORE uses **`run_<name>.sh`**.

---

## Checklist before declaring “done”

- [ ] Scripts are **executable** (`chmod +x`) and use **`#!/usr/bin/env bash`**.
- [ ] All paths are **relative to `PROJECT_ROOT`** (no hardcoded `/home/...`).
- [ ] Submodule init is **recursive** when upstream uses submodules.
- [ ] **`get_commit_id`** uses `git -C` (works for gitlink submodules).
- [ ] Generated RTL lands under **`datasets/<name>/<commit>/...`** with logs.
- [ ] At least **syntax or lint** verification runs on generated Verilog.
- [ ] **`--help`** on all three scripts.
- [ ] **`run_<name>.sh`** supports **`--`** pass-through to generate.
- [ ] Comments document **upstream version constraints** (JDK 11 vs 17, Python 3.10+, etc.).

---

## Prompt block (copy into a new chat)

Paste everything inside the fence below, then add the GitHub URL and optional details.

```text
You are helping with the SCORE repository: a hardware benchmarking harness.
Read and follow the instructions in PROMPTS.md in the repo (same concepts as below).

When I give you a GitHub URL, you MUST:

1. Study the repository (README, CI, build files, submodules) and summarize the official RTL build and verification commands in a short paragraph.

2. Propose a stable short name <name> and submodule path under tools/ (e.g. tools/foo).

3. Output three complete Bash scripts ready to place under scripts/, following SCORE conventions:
   - install_<name>.sh: recursive git submodule init for the SCORE submodule, OS-aware dependency installation, timestamped logs under logs/, --help and --check-only style flags, optional <name>_env.sh content or separate file.
   - generate_<name>.sh: run upstream generators/compilers; write outputs under datasets/<name>/<8-char commit>/; run Verilator lint and/or iverilog -t null and/or upstream smoke targets; session logs with tee; --help, --jobs, --verify-only where applicable.
   - run_<name>.sh: submodule → install → source env → generate; --skip-* flags; pass arguments after -- only to generate_<name>.sh.

Use: SCRIPT_DIR/PROJECT_ROOT, set -euo pipefail, colored logging with tee, git -C for commit id (never rely only on -d .git).

Do not hardcode user-specific paths. Match the style of existing scripts in scripts/ (rocket_chip, ibex, soc_automation).

Here is the GitHub URL: <PASTE URL>
Optional: submodule path = ... , name = ...
```

---

## Reference scripts in this repo

When extending SCORE, compare with:

| Concern | Example |
|---------|---------|
| Full install + many options | `scripts/install_rocket_chip.sh`, `scripts/install_soc_automation.sh` |
| OS detection + venv | `scripts/install_ibex.sh` |
| Large generate + dataset layout + verify | `scripts/generate_rocket_chip.sh`, `scripts/generate_ibex.sh` |
| Matrix of configs + iverilog + reports | `scripts/generate_soc_automation.sh` |
| Orchestration + `--` forwarding | `scripts/run_rocket_chip.sh` |
| Submodule utilities | `scripts/init-submodules.sh`, `scripts/check-submodules.sh` |
| Local JDK/Scala PATH | `scripts/setup_local_env.sh` |

---

## Maintenance

When SCORE’s conventions change (e.g. dataset layout), update **this file** and the **Prompt block** so future generated scripts stay consistent.
