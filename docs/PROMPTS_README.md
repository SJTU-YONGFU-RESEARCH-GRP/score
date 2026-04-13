# PROMPTS_README.md — Generate comprehensive `docs/README_<project>.md` from tools + datasets

This file is a **prompt library** for an LLM (or human operator) to produce documentation in the same **shape and depth** as the existing SCORE guides under `docs/README_*.md` (for example `docs/README_ROCEKT_CHIP.md`, `docs/README_IBEX.md`, `docs/README_CHIPYARD.md`). The documentation must be **grounded in the repository**: upstream source under `tools/<project>/`, generated artifacts under `datasets/<project>/<commit>/`, and SCORE automation under `scripts/`.

Use these prompts **after** a dataset exists (run `scripts/generate_<name>.sh` or equivalent) so manifests, summaries, and verification logs are available.

---

## Table of contents

- [Goals and non-goals](#goals-and-non-goals)
- [README style reference (match existing SCORE README guides)](#readme-style-reference-match-existing-score-readme-guides)
- [Inputs you must attach or paste](#inputs-you-must-attach-or-paste)
- [Global rules (anti-hallucination)](#global-rules-anti-hallucination)
- [Master system prompt](#master-system-prompt)
- [Workflow: multi-step prompt sequence](#workflow-multi-step-prompt-sequence)
- [Section-by-section prompt templates](#section-by-section-prompt-templates)
- [Rocket Chip worked example (paths)](#rocket-chip-worked-example-paths)
- [Reconciliation checklist (doc vs repo)](#reconciliation-checklist-doc-vs-repo)
- [Optional: single-shot “full README” mega-prompt](#optional-single-shot-full-readme-mega-prompt)
- [Maintenance](#maintenance)

---

## Goals and non-goals

**Goals**

- Produce a **single** `docs/README_<PROJECT>.md` that matches the **RTL Organization** conventions in `docs/README_IBEX.md`, `docs/README_ROCEKT_CHIP.md`, and siblings: H1 + optional **badges** (when grounded), lead paragraph, **Table of Contents** (all major H2s), Overview subsections (Key Features / Scripts Overview / Architecture Overview), **SoC architecture** (block-level, evidence-based), **Licensing** (upstream + notable submodules), nested Installation and Generation sections (Basic Usage, tables, process lists), design matrix, dataset layout, usage, performance, troubleshooting (see [README style reference](#readme-style-reference-match-existing-score-readme-guides) below).
- Tie every major claim to **evidence** in `tools/`, `scripts/`, or `datasets/` (file paths, flags from `--help`, counts from `manifest.json` / `*_summary.txt`, verification summaries).
- Explain **what the benchmark artifact is** (per-commit dataset tree, logs, verification) and **how it differs** from “using upstream the normal way.”

**Non-goals**

- Replacing upstream project documentation; link to upstream README when appropriate.
- Inventing CLI flags, design names, or directory layouts not present in the repo.
- Documenting proprietary EDA tools beyond generic compatibility notes unless the repo contains explicit scripts or docs for them.
- Marketing-style **badges** (CI, version, ecosystem) that are not verifiable from the attached repo paths, URLs, or manifests.

---

## README style reference (match existing SCORE README guides)

Use the **RTL Organization** pattern from `docs/README_IBEX.md`, `docs/README_ROCEKT_CHIP.md`, `docs/README_GEMMINI.md`, and `docs/README_HERO.md` as the default shape. Longer guides (for example `docs/README_CHIPYARD.md`) add extra top-level sections such as prerequisites or conda vs venv—only include those when the attached install script and upstream flow actually match that style.

### Document framing

- **Title (H1):** `# <Project display name> RTL Organization Documentation` (use the upstream project’s usual name, e.g. “Rocket Chip”, “Ibex”).
- **Lead paragraph:** One or two sentences in the form: “This document provides comprehensive information about … scripts and the structure of … datasets generated using …” Ground the generator/framework name in `tools/<project>/` README or SCORE script headers—do not invent marketing copy.
- **Upstream pointer:** After the overview (or in Overview), add a short line with a **relative** link to upstream docs when `tools/<project>/README.md` (or equivalent) exists, e.g. `[Rocket Chip](https://github.com/...)` only if the URL appears in the repo; otherwise `See tools/<project>/README.md`.

### Badges (optional row under the title)

- Place **one** short line of Markdown image badges **immediately after the H1** (before the lead paragraph), **only** when each badge is defensible from inputs (no decorative or guessed URLs).
- **Allowed sources:** `tools/<project>/LICENSE`, `LICENSE.*`, or `COPYING` ( SPDX or license name as written ); `tools/<project>/README.md` or root README if they state the license or repo URL; `.gitmodules` or documented clone URL for the upstream GitHub `user/repo` slug; `manifest.json` for dataset **commit** short hash (static “dataset commit” badge text is OK); CI workflow files under `tools/<project>/.github/workflows/` or the SCORE repo `.github/workflows/` if you cite the **exact** workflow filename.
- **Typical badges (examples—omit any without evidence):** static license label using shields static badge style with the **exact** short name from the license file (e.g. `Apache-2.0` URL-encoded in `https://img.shields.io/badge/license-Apache--2.0-green`); link badge to upstream repo if URL is known; optional “docs” badge pointing at `tools/<project>/README.md` via relative Markdown link when URL unknown.
- **Forbidden:** inventing GitHub Actions workflow names, crates.io/npm badges, or SPDX codes not present in the attached license text; dynamic “build passing” shields unless the workflow path and `user/repo` are confirmed in inputs.

### Table of contents

- Include an H2 `## Table of Contents` with **GitHub-style anchor links** to **every H2** section you emit (including **Licensing** and **SoC architecture** when those sections are present).
- **Default H2 order** (omit only if truly inapplicable): Overview → **SoC architecture** → **Licensing** → Installation Script → Generation Script → Available Designs → Output Organization → Dataset Structure → Usage Examples → Performance Expectations → Troubleshooting.
- **SoC architecture vs Overview:** Keep `## Overview` for SCORE workflow and artifact framing; use `## SoC architecture` for hardware block structure (see below). If the project is **core-only** (no SoC integration in configs), keep a single `### Architecture Overview` under Overview and **omit** the top-level `## SoC architecture` section—state that scope explicitly in the TOC’s Overview link or in Overview text.
- If you add H3-only sections under Installation or Generation (e.g. Supported Operating Systems), either link the parent H2 only (matching older READMEs) or add TOC entries for **extra H2s** only—stay consistent within one file. Optionally add TOC links for heavy H3s under **SoC architecture** (e.g. Memory map, Buses) when they improve navigation.

### Overview (`## Overview`)

- Opening paragraph: what SCORE scripts do + what artifact family is produced; distinguish SCORE packaging from “vanilla” upstream usage.
- **`### Key Features`:** Bullets with **bold lead labels** (`**Label**:`) followed by concise text. Each bullet must map to script capabilities, dataset summaries, or upstream README—no filler features.
- **`### Scripts Overview`:** Numbered list. Always include `./scripts/install_<name>.sh` and `./scripts/generate_<name>.sh` with backticks. If `scripts/run_<name>.sh` or `scripts/<name>_env.sh` exist, list them with their roles (orchestration vs `source` for env).
- **`### Architecture Overview`:** Short bullets: role of the generated RTL in SCORE (what class of design, typical use). Deep block-level detail belongs in **`## SoC architecture`**, not here—avoid duplicating long lists.

### SoC architecture (`## SoC architecture`)

Include when inputs show a **system** view (SoC, multi-tile, test harness, peripherals, bus fabric), not for a bare core with no integration metadata.

- **Opening:** One paragraph stating what **configuration / harness** the architecture description refers to (e.g. “typical `DefaultConfig` Rocket Chip subsystem as reflected in generated artifacts …”), grounded in `config_info.txt`, design names, or upstream README—not a generic industry essay.
- **`### Block-level structure`:** Bullets or a small table naming **major blocks** (cores, caches, buses, memory controllers, peripherals, debug) **only** when those names appear in attached `config_info.txt`, `*.dts`, `*.memmap.json`, `*.regmap.json`, FIRRTL/module listings, or upstream docs excerpts. Prefer **hierarchical** naming as in the inputs.
- **`### Buses and connectivity`:** Interconnect standard (TileLink, AXI, etc.) and topology **only** if stated in inputs; otherwise omit the subsection and say what file would document it.
- **`### Memory map`:** Summarize only if `*.dts`, `*.memmap.json`, regmap, or equivalent appears in the listing; use a compact Markdown table (region | description) when the inputs support it.
- **Diagrams:** A **Mermaid** `flowchart` or `block` diagram is encouraged **only** when the edges/nodes are all supported by the same evidence as the bullets; otherwise use a short **ASCII** sketch or omit the diagram. Never invent blocks to “fill out” a diagram.

### Licensing (`## Licensing`)

- **Upstream primary license:** Identify the main license for `tools/<project>/` from `LICENSE`, `LICENSE.*`, or `COPYING` (quote the short name or SPDX identifier **only** if the file uses it). Link or path: `tools/<project>/LICENSE` (relative).
- **Notable submodules / third party:** If inputs include a listing of `tools/<project>/` license files or `.gitmodules` with paths to vendored IP, add a table `| Component / path | License | Notes |` with rows **only** for paths you can cite; otherwise a single paragraph “See upstream repository for submodule licenses” with `tools/<project>/README.md`.
- **Generated datasets:** One sentence on whether benchmark RTL in `datasets/<project>/<commit>/` is a build artifact of upstream-licensed sources (neutral wording); do not claim a separate “SCORE license” unless the repo provides one.
- **Badges vs licensing:** Do not contradict the Licensing section; badge text must match the same license name/source.

### Installation Script (`## Installation Script`)

Mirror `README_IBEX.md` / `README_ROCEKT_CHIP.md`:

- **`### Overview`:** One short paragraph tied to what `install_<name>.sh` actually installs.
- **`### Basic Usage`:** Fenced `bash` block; every command prefixed with `./scripts/...` from repo root; use **comment lines** (`# ...`) above groups of commands (first-time, check-only, debug, etc.).
- **`### Command-Line Options`:** Markdown table `| Option | Description |` (add `| Default |` only when the script defines defaults explicitly).
- **`### Dependencies Installed`:** Table `| Component | Version | Purpose |`—versions **only** from manifest, install script, or upstream lockfiles (see Global rules).
- **`### Supported Operating Systems`:** Include when the install script branches on OS/package manager; list only what the script handles.
- **`### Installation Process`:** Numbered list, **step order matching the script** (detect OS → packages → Java → submodules → env script, etc.).
- **`### Usage Examples` (optional under Installation):** Extra install-only bash examples (e.g. `source scripts/<name>_env.sh`) when the Rocket-style README does this—keep commands faithful to `--help`.

### Generation Script (`## Generation Script`)

- **`### Overview`:** Scope of generation, outputs, and verification at a high level (from script comments/`--help`).
- **`### Basic Usage`:** Same bash + `#` comment pattern as install.
- **Options tables:** If the script groups flags (as in `README_ROCEKT_CHIP.md`), use separate tables:
  - **Configuration options** (what to generate),
  - **Generation options** (formats, verification, testbenches),
  - **Execution options** (jobs, dry-run, verbose, setup).
  If the project’s script is simpler, a **single** “Command-Line Options” table is fine—do not force three tables when the script does not group flags that way.
- Use columns `| Option | Description | Default |` where defaults are literal in `getopt`/`--help`; otherwise “not explicit in script”.
- **`### Generation Process`:** Numbered list aligned with script flow (prereq check → elaboration → verilog/firrtl → verification → dataset layout → summary).
- **`### Advanced Usage Examples`:** Optional second bash block for combined flags when it helps; every flag must appear in attached `--help` or script.

### Available designs (`## Available Designs`)

- Intro sentence with **counts and categories** only if `*summary*.txt` or `rtl_designs/` listing supports them (e.g. “19 distinct … organized into 4 main categories”).
- **`### N. <Category> (...)`** numbered category headings matching dataset layout (e.g. `single_core`, `multi_core`).
- Tables: choose columns to match the README family—`Design Name | Description | Key Features` or add `Core Count`, etc., when the data supports it.
- After a group table, optional **`**Common Features:**`** bullet list when several designs share traits **stated** in summaries or config metadata—do not invent shared features.

### Output organization & dataset structure

- **Output organization:** Lead with the **full** dataset path pattern `datasets/<project>/<commit>/` (not an abbreviated path). Fenced **tree** or indented layout must match the provided listing; label major dirs (`rtl_designs/`, `verification/`, `logs/`, etc.).
- **Dataset structure:** Explain artifact types (`.sv`, `.fir`, `config_info.txt`, …) that **appear** in the listing; tie file roles to verification or downstream EDA in neutral language.

### Usage examples, performance, troubleshooting

- **`## Usage Examples`:** End-to-end flows: env (`source` if applicable), install, generate, verify-only, dry-run when supported. Prefer `./scripts/...` and short end-of-line comments for long-running steps.
- **`## Performance Expectations`:** Qualitative first (RAM, disk, parallelism, JVM); numeric tables only per Global rules.
- **`## Troubleshooting`:** Symptom → likely cause → fix; each fix references a **concrete** command or file path from inputs.

### Markdown mechanics

- Fence code as `bash` for shell; keep **relative paths** from repo root.
- Use consistent table header separators (`|--------|`).
- **Naming:** The checked-in Rocket Chip guide filename is `docs/README_ROCEKT_CHIP.md` (historical spelling); new files use `docs/README_<PROJECT>.md` with a sensible `<PROJECT>` slug matching `tools/` and `scripts/`.

---

## Inputs you must attach or paste

For each project `<name>` (e.g. `rocket-chip`), gather and provide to the model:

| Kind | Typical paths | Why |
|------|----------------|-----|
| **SCORE install script** | `scripts/install_<name>.sh` | Options tables, dependencies, OS support |
| **SCORE generate script** | `scripts/generate_<name>.sh` | Generation matrix, `--help` text, verification behavior |
| **SCORE run script** | `scripts/run_<name>.sh` (if any) | End-to-end orchestration |
| **Env hook** | `scripts/<name>_env.sh`, `scripts/setup_local_env.sh` | Variables users must source |
| **Upstream tool root** | `tools/<name>/` | `README`, `build.sc`, `Makefile`, CI, submodules |
| **Dataset instance** | `datasets/<name>/<8-char-commit>/` | Ground truth for outputs |
| **Manifest** | `datasets/<name>/<commit>/manifest.json` | Commit id, host, tool versions |
| **Human summary** | `datasets/<name>/<commit>/*summary*.txt` | Config counts, categories |
| **Verification** | `datasets/<name>/<commit>/verification/` | Pass/fail, tools used |
| **Sample config metadata** | `.../rtl_designs/**/config_info.txt` (several) | Per-design class names, build methods |
| **Generation logs** | `datasets/<name>/<commit>/logs/*.log` (headers or tails) | Timestamps, errors, actual commands |
| **Upstream license** | `tools/<name>/LICENSE`, `LICENSE.*`, `COPYING` | Licensing section, license badges |
| **SoC / memory artifacts** | `*.dts`, `*.memmap.json`, `*.regmap.json`, FIRRTL snippets, `config_info.txt` | SoC architecture, memory map, blocks |
| **CI / repo URL** | `tools/<name>/.github/workflows/*.yml`, `.gitmodules`, upstream README | Optional CI / repo badges |

**Tip:** If files are large, paste **only** `--help` output, `manifest.json`, summary files, and 2–3 representative `config_info.txt` files, plus a **directory listing** (`find` or `tree -L 4`) for `datasets/<name>/<commit>/`. For **SoC architecture**, attach at least one design folder that includes memory-map or bus-related artifacts when they exist.

---

## Global rules (anti-hallucination)

Include the following as a **hard constraint** in every prompt:

1. **Do not invent** CLI flags, default values, configuration names, or subdirectory names. If unsure, write “Not stated in provided inputs” and list what file would answer it.
2. **Quote or paraphrase** script usage from `scripts/*_<name>.sh --help` or from the script body when help is minimal.
3. **Dataset layout** must match the **actual** tree under `datasets/<name>/<commit>/`. If the summary mentions directories that are absent in the listing, prefer the listing and note the discrepancy.
4. **Version pins** (JDK, Mill, Verilator, etc.) must come from `manifest.json`, install script comments, or upstream lockfiles—not from memory.
5. **Cross-check** design lists: the “Available designs” table must match `rocket_chip_summary.txt` (or the project’s equivalent) and/or the `rtl_designs/` subfolders.
6. **Verification claims** must match `verification_summary.txt` and/or individual `*_syntax.log` files (e.g. do not claim 100% success if logs show errors).
7. Use **relative paths** from the SCORE repo root (`./scripts/...`, `datasets/...`, `tools/...`).
8. **Badges:** include only shields or links whose underlying facts (license name, repo URL, workflow name, commit id) appear in the provided inputs; otherwise omit badges entirely.
9. **Licensing:** every license name or SPDX identifier must match text in `LICENSE` / `COPYING` or an attached excerpt; do not summarize third-party terms beyond what inputs show.
10. **SoC architecture:** every named block, bus, or memory region must trace to `config_info.txt`, device tree, memory map JSON, regmap, FIRRTL/module names in excerpts, or upstream docs in the attachment list—no generic “typical RISC-V SoC” filler.

---

## Master system prompt

Paste this once as the **system** or leading **user** message, then follow with project-specific attachments.

```text
You are a technical writer and hardware-tooling engineer documenting the SCORE repository.

Task: Write or refresh docs/README_<PROJECT>.md following the RTL Organization style used in docs/README_IBEX.md, docs/README_ROCEKT_CHIP.md, docs/README_GEMMINI.md, and docs/README_HERO.md (see PROMPTS_README.md “README style reference” in this repo for the full checklist).

Required shape:
- H1: “<Project> RTL Organization Documentation”; optional **badge row** (after H1) per PROMPTS_README “Badges” rules; then a lead paragraph (“This document provides comprehensive information about…”).
- TOC linking **all** H2 sections in the standard order: Overview, SoC architecture (omit from TOC if section omitted), Licensing, Installation Script, Generation Script, Available Designs, Output Organization, Dataset Structure, Usage Examples, Performance Expectations, Troubleshooting.
- Overview: Key Features (bold lead labels), Scripts Overview (numbered, include run_* and *_env.sh when present), Architecture Overview (short; defers block detail to SoC architecture when that section exists).
- SoC architecture: include per “SoC architecture” rules when inputs support a system view; omit for core-only projects and say so in Overview.
- Licensing: upstream `tools/<project>/` license + cited third-party table or pointer; dataset sentence as appropriate.
- Installation / Generation: Overview → Basic Usage (bash with # comments) → option tables → Dependencies Installed (Component | Version | Purpose) when applicable → Supported OS / Installation Process when the script defines them → optional extra Usage Examples under Installation.
- Generation: split Configuration / Generation / Execution option tables when the script groups flags that way; otherwise one table.
- Available designs: category headings and tables grounded in *summary*.txt and rtl_designs/; intro counts only if supported by inputs.
- Output organization: dataset path datasets/<project>/<commit>/ (not abbreviated); tree must match listing.

Rules:
- Ground every factual statement in the provided file excerpts, directory listings, or script --help output from this repository.
- Do not invent flags, paths, configuration names, test outcomes, dependency versions, or marketing “features.”
- Prefer tables for CLI options and design matrices; use fenced bash blocks labeled bash for commands from or implied by scripts.
- Clearly separate: (A) what SCORE scripts do, (B) what the upstream tool in tools/<project> does, (C) what artifacts land in datasets/<project>/<commit>/.
- If the user’s excerpt is incomplete, state what is missing instead of guessing.

Output: A single Markdown document ready to save as docs/README_<PROJECT>.md, with correct relative links only if paths are confirmed in the listing.
```

---

## Workflow: multi-step prompt sequence

For the **best** results, run the model in **stages**; each stage has a narrow output so you can verify before continuing.

### Stage A — Repository inventory (no prose README yet)

```text
Given the following listings and excerpts for SCORE project "<PROJECT>" (tools path tools/<project>/, dataset path datasets/<project>/<COMMIT>/):

1) Enumerate all SCORE entrypoints: install_*.sh, generate_*.sh, run_*.sh, *_env.sh (names only).
2) Enumerate dataset top-level files and folders with one-line purpose each (manifest, logs, rtl_designs, verification, etc.).
3) List design configurations with: folder name, category (parent directory), and Rocket Chip / upstream class name if present in config_info.txt or summary.
4) List verification artifacts and summarize pass/fail counts from verification_summary.txt (or equivalent).
5) License inventory: path and one-line identification for each `LICENSE*` / `COPYING` under `tools/<project>/` that you can see (or “single LICENSE at …” if one file).
6) SoC-evidence inventory: which artifact types exist for architecture (e.g. `*.dts`, `*.memmap.json`, regmap, FIRRTL) and for which sample design paths.

Do not write the README yet. Output structured bullets and tables only.
```

### Stage B — Script fidelity pass

```text
Using the attached scripts/install_<project>.sh and scripts/generate_<project>.sh:

1) Extract every user-facing flag (getopt cases or --help text). Produce two Markdown tables: "Install options" and "Generate options" with columns: Option | Description | Default (if discoverable in script).
2) Summarize the generation pipeline in 5–8 numbered steps, using verbs that match the script (e.g. mill targets, copy destinations, verilator --lint-only).
3) Note any important caveats copied verbatim or closely from comments (e.g. placeholder testbenches, smoke tests requiring RISCV).
4) If the install script documents OS branches or package managers, list supported OS families in README style (bullet per family); if it emits or updates an env script, record its path and typical `source` line.

If a default cannot be found, write "not explicit in script".
```

### Stage C — Dataset semantics

```text
Using manifest.json, *summary*.txt, and 2–3 config_info.txt samples from datasets/<project>/<COMMIT>/:

1) Explain what the manifest schema records and why it matters for benchmarking.
2) Describe what each major artifact type is for (*.sv, *.v, *.fir, *.regmap.json, *.dts, *.memmap.json, *.json graphs, *_tb.sv) — only include types that actually appear in the listing.
3) Explain how verification was run (tools, scope, limitations) strictly from verification logs/summary.
4) If LICENSE / COPYING for tools/<project>/ was attached, note the primary license name (verbatim short form) for reuse in ## Licensing.
5) List which architecture-relevant artifact types appear in the dataset (dts, memmap, regmap, FIRRTL, etc.) and for which example paths.

Avoid upstream tutorial content unless needed to interpret artifacts.
```

### Stage D — Write the README (full document)

```text
Now write docs/README_<PROJECT>.md from Stages A–C outputs, applying the Global Rules and the “README style reference” section of PROMPTS_README.md (H1 wording, TOC H2 order, Overview subsections with bold Key Features, numbered Scripts Overview including run_* / *_env.sh if they exist).

Use this H2/H3 skeleton unless a section is truly N/A:
- (Optional) Badge line after H1 per “Badges” rules
- ## Table of Contents (all H2s below, including SoC architecture and Licensing when present)
- ## Overview → ### Key Features, ### Scripts Overview, ### Architecture Overview
- ## SoC architecture → ### Block-level structure, ### Buses and connectivity (if evidenced), ### Memory map (if *.dts / *.memmap.json / regmap present); diagram only if evidenced—omit entire H2 for core-only scope
- ## Licensing → upstream license + optional third-party table + one-line dataset note
- ## Installation Script → ### Overview, ### Basic Usage (bash + comments), ### Command-Line Options, ### Dependencies Installed, ### Supported Operating Systems (if script branches on OS), ### Installation Process, ### Usage Examples (optional, install-focused)
- ## Generation Script → ### Overview, ### Basic Usage, ### (split or single) option tables, ### Generation Process, ### Advanced Usage Examples (optional)
- ## Available Designs → numbered ### category headings; tables; optional **Common Features** bullets per group when grounded in inputs
- ## Output Organization → lead with datasets/<project>/<commit>/; fenced tree matching listing
- ## Dataset Structure → artifact types that appear; neutral EDA notes
- ## Usage Examples → end-to-end (env, generate, verify-only, dry-run if supported)
- ## Performance Expectations → qualitative unless logs supply timings
- ## Troubleshooting → symptom → cause → fix with concrete commands

If performance numbers are not measured in provided logs, present them as rough historical expectations only if already present in an older README excerpt; otherwise omit numeric tables and substitute guidance ("reduce --jobs", "increase JAVA_OPTS", etc.).
```

### Stage E — Diff review against the repo

```text
Compare the drafted README to the inventory from Stage A and the script tables from Stage B.

List every paragraph or table row that cannot be traced to a cited path or excerpt. For each, either:
- Remove or soften the claim, or
- Add "Verify manually:" with the exact command to run (e.g. ./scripts/generate_<project>.sh --help).

Output a short changelog-style list of edits to apply.
```

---

## Section-by-section prompt templates

Use these when you want to **regenerate or tighten** a single section.

### Overview + value proposition

```text
Write the "## Overview" for docs/README_<PROJECT>.md.

Inputs: upstream README excerpt (tools/<project>/README.md) + SCORE install/generate script header comments + dataset summary.

Requirements:
- Opening paragraph in the README family voice: what SCORE scripts provide and what dataset is produced; distinguish from vanilla upstream usage in one sentence if inputs support it.
- ### Key Features: bullets with **Bold Label:** then text (same pattern as README_IBEX.md).
- ### Scripts Overview: numbered list; script names in backticks as ./scripts/install_<name>.sh and ./scripts/generate_<name>.sh; add ./scripts/run_<name>.sh and source ./scripts/<name>_env.sh only if those files exist in the inventory.
- ### Architecture Overview: short bullets on what class of RTL is produced and how it relates to SCORE; defer blocks/buses/memory map to ## SoC architecture when that section is included; for core-only scope, state “single-core / no SoC integration in dataset” and omit ## SoC architecture.
- If ## SoC architecture is included: do not repeat the same long block list twice; Overview stays high-level.
- End with explicit benchmark artifact path pattern: datasets/<project>/<commit>/...
- Optional: one line pointing readers to tools/<project>/README.md for upstream-only workflows (no invented URLs).
```

### Installation script documentation

```text
Document scripts/install_<PROJECT>.sh in the same structure as docs/README_IBEX.md / docs/README_ROCEKT_CHIP.md.

Attach: --help output or option-parsing section of the script.

Deliver:
- ### Overview (one paragraph)
- ### Basic Usage: fenced bash, ./scripts/install_<PROJECT>.sh paths, # comment lines grouping scenarios (first-time, --check-only, --debug, --force, etc.)
- ### Command-Line Options: table | Option | Description | (add Default column only if explicit in script/help)
- ### Dependencies Installed: | Component | Version | Purpose | — versions ONLY from manifest, script, or upstream pins
- ### Supported Operating Systems: only if the script has OS/package-manager branches; mirror README_ROCEKT_CHIP style (bullet per family + package manager name)
- ### Installation Process: numbered steps in script order (deps → Java/toolchain → submodules → env script creation, etc.)
- ### Usage Examples (optional): e.g. source scripts/<PROJECT>_env.sh when that file exists and install docs reference it

Do not duplicate long upstream install guides; link tools/<project>/README.md for “full upstream” flows when helpful.
```

### Generation script documentation

```text
Document scripts/generate_<PROJECT>.sh.

Attach: --help output and any arrays/lists of configurations inside the script.

Deliver:
- ### Overview, ### Basic Usage (bash + # comments), then option tables:
  - If flags group naturally (see docs/README_ROCEKT_CHIP.md): ### Configuration Options, ### Generation Options, ### Execution Options with | Option | Description | Default | when defaults are stated
  - Else: single ### Command-Line Options table like docs/README_GEMMINI.md
- ### Generation Process: numbered list aligned with the script’s functions/main flow
- Call out verification modes and what they guarantee (lint vs smoke vs none), quoting script comments / --help
- ### Advanced Usage Examples: optional second bash block for combined flags (all flags must appear in attachments)
```

### Available designs / configuration matrix

```text
Build the "## Available Designs" section in README_ROCEKT_CHIP / README_IBEX style.

Rules:
- Opening sentence: state total design count and number of categories only if *summary*.txt or an enumerated listing supports it; otherwise say "The following designs appear under rtl_designs/ …" without a false total.
- Use numbered ### headings per category (### 1. Single-Core Designs (...)) matching parent folders under rtl_designs/.
- Table rows must come from datasets/<project>/<commit>/*summary*.txt and/or directory names under rtl_designs/.
- Columns: Design name | Description | Key Features (or Core Count / Cache Coherence / etc.) — only include extra columns when config_info.txt, class names, or summary columns support them.
- After a category table, optional **Common Features:** bullet list only for traits explicitly repeated in inputs for that group.

If a description would require guessing, use "See <path>/config_info.txt" instead.
```

### SoC architecture

```text
Write "## SoC architecture" for docs/README_<PROJECT>.md.

Attach: config_info.txt from representative configs; any *.dts, *.memmap.json, *.regmap.json, or FIRRTL/module listing excerpts; optional upstream README figure or paragraph that names subsystems.

Requirements:
- Opening paragraph: which configuration(s) the description reflects; cite paths.
- ### Block-level structure: bullets or table; every name traceable to inputs.
- ### Buses and connectivity and ### Memory map: include only when inputs contain bus names or address map data; otherwise omit subsection(s) and state what artifact would be needed.
- Optional Mermaid or ASCII diagram: nodes/edges must match the same evidence as the text.

If the project is core-only with no SoC artifacts, omit this H2 entirely and add one sentence under ### Architecture Overview in Overview.
```

### Licensing

```text
Write "## Licensing" for docs/README_<PROJECT>.md.

Attach: tools/<project>/LICENSE or COPYING (or excerpt), and optionally a find listing of LICENSE* under tools/<project>/.

Deliver:
- Primary license for the upstream tree (name as in file; SPDX only if the file states it).
- Optional table of notable vendored paths and licenses when a listing supports rows.
- One sentence on benchmark RTL under datasets/<project>/<commit>/ as generated from upstream sources (neutral).

Do not invent sublicense text; link tools/<project>/README.md for upstream legal details when the tree is complex.
```

### Output organization + dataset structure

```text
Produce "## Output Organization" and "## Dataset Structure".

Output organization rules:
- Start with a sentence that states the canonical root: datasets/<project>/<commit>/ (include <commit> in the explanation; avoid implying rtl_designs sits directly under datasets/<project>/ unless the listing proves it).
- Fenced tree (or faithful indented outline) matching the provided listing only.
- If you document per-design folders, add "### Design directory contents" (or equivalent) listing file types that appear in samples (*.sv, config_info.txt, etc.).

Dataset structure:
- Explain roles of artifact types that actually appear; keep "## Dataset Structure" neutral on proprietary EDA flows.

Include "### Integration with EDA tools" under Dataset Structure only with generic, non-committal language unless this repo documents specific tool flows.
```

### Usage examples

```text
Write "## Usage Examples" as one or more fenced bash blocks labeled bash.

Constraints:
- Use ./scripts/... paths from repo root; prefix long or fragile steps with # comments (RAM, time, RISCV, submodules).
- Cover when applicable: first-time install, source *_env.sh, full generation, verify-only, dry-run (if --help shows it), parallel jobs (--jobs/--parallel per script), and one troubleshooting command (e.g. submodule update) only if the install/generate script mentions it.
- Prefer examples copied from or composed only from flags present in attached --help.

If Installation already has install-only examples, avoid duplicating them verbatim here; point to combined end-to-end flows instead.
```

### Performance expectations

```text
Write "Performance expectations" conservatively.

Allowed sources: timing mentions in SCORE README for the same project (if provided as reference), generate script comments, or log timestamps showing durations for a few configs.

If no timing data is supplied, write qualitative guidance: JVM heap, job count, disk, submodule fetch time — without numeric tables.
```

### Troubleshooting

```text
Write troubleshooting as symptom → cause → fix.

Rules:
- Each fix must cite a concrete command from install/generate scripts or upstream docs excerpt provided.
- Include submodule/git worktree notes for tools/<project> when scripts mention them.
- Include Verilator/Java/Mill/Python issues only when those tools are in manifest.json or install script.
```

---

## Rocket Chip worked example (paths)

Use this as a **concrete attachment checklist** when `<PROJECT> = rocket-chip`:

| Artifact | Path |
|----------|------|
| SCORE scripts | `scripts/install_rocket_chip.sh`, `scripts/generate_rocket_chip.sh`, `scripts/run_rocket_chip.sh`, `scripts/rocket_chip_env.sh` |
| Upstream | `tools/rocket-chip/` (`README.md`, `build.sc`, `.gitmodules`, CI under `.github/workflows/` if present) |
| Dataset root | `datasets/rocket-chip/<8-char-commit>/` |
| Benchmark manifest | `datasets/rocket-chip/<commit>/manifest.json` |
| Human-readable index | `datasets/rocket-chip/<commit>/rocket_chip_summary.txt` |
| Verification rollup | `datasets/rocket-chip/<commit>/verification/verification_summary.txt` |
| Per-config logs | `datasets/rocket-chip/<commit>/verification/*_syntax.log` |
| RTL tree | `datasets/rocket-chip/<commit>/rtl_designs/{single_core,multi_core,special,edge_config}/...` |
| Metadata per design | `.../<config>/config_info.txt`, optional `*.regmap.json`, `*.dts`, `*.memmap.json`, `TestHarness.fir` |

**Prompt snippet to paste with Rocket Chip:**

```text
Project: rocket-chip
tools/: tools/rocket-chip/
datasets/: datasets/rocket-chip/8f1e33b2/   # replace with current commit directory
scripts: install_rocket_chip.sh, generate_rocket_chip.sh, run_rocket_chip.sh, rocket_chip_env.sh

Attached: manifest.json, rocket_chip_summary.txt, verification_summary.txt, directory listing of rtl_designs/, generate_rocket_chip.sh --help, install_rocket_chip.sh --help, three config_info.txt files from different categories, tools/rocket-chip/LICENSE (or equivalent), and any `*.dts` / `*.memmap.json` / `*.regmap.json` samples present under the dataset.
```

---

## Reconciliation checklist (doc vs repo)

Before merging a generated README, verify manually:

- [ ] `./scripts/install_<name>.sh --help` matches the **Install options** table (or README states help is minimal).
- [ ] `./scripts/generate_<name>.sh --help` matches the **Generate options** table.
- [ ] Every design name in the README exists under `datasets/<name>/<commit>/rtl_designs/...`.
- [ ] `manifest.json` **tool_versions** match what the README claims (or README omits versions).
- [ ] `verification_summary.txt` success counts match the README’s verification paragraph.
- [ ] Paths use `datasets/<name>/` not stale examples like only `datasets/<name>/rtl_designs/` without the commit segment, unless the script truly writes that way (Rocket Chip uses `datasets/rocket-chip/<commit>/...` per SCORE conventions).
- [ ] **Licensing:** primary license name/SPDX in `## Licensing` matches `tools/<name>/LICENSE` (or stated upstream file); third-party table rows match real paths.
- [ ] **Badges:** each badge fact (workflow name, repo slug, license label) is verifiable from the repo or attachments; remove any that are not.
- [ ] **SoC architecture:** every named block, bus, or memory region appears in cited artifacts (`config_info.txt`, device tree, memory map, regmap, FIRRTL excerpt, or upstream doc); core-only projects omit `## SoC architecture` and say so in Overview.
- [ ] **Table of Contents** lists every H2 in the file (including SoC architecture and Licensing when present).

---

## Optional: single-shot “full README” mega-prompt

Use only when attachments are complete; otherwise prefer the staged workflow.

```text
You are documenting SCORE project "<PROJECT>" for docs/README_<PROJECT>.md.

Attached:
- tools/<project>/: README excerpt, build files listing, LICENSE / COPYING, CI snippet if any, .gitmodules if present
- scripts: install_*, generate_*, run_*, env* excerpts or full files
- datasets/<project>/<COMMIT>/: manifest.json, *summary*.txt, verification_summary.txt, find listing, 3× config_info.txt, plus any *.dts / *.memmap.json / *.regmap.json / FIRRTL samples for architecture

Task: Output a complete README matching the RTL Organization structure in PROMPTS_README.md: H1, optional grounded **badges**, lead paragraph, **Table of Contents** (all H2s), **Overview** (Key Features, Scripts Overview, Architecture Overview), **SoC architecture** (omit if core-only; evidence-based blocks/buses/memory map), **Licensing**, then Installation / Generation / Designs / Output / Dataset / Usage / Performance / Troubleshooting.

Hard rules:
- No invented flags, configs, versions, features, license terms, workflow names, or SoC blocks.
- Tree under "## Output Organization" must match the find listing; narrative must use datasets/<project>/<commit>/ as the dataset root.
- Performance tables only if based on supplied logs or an explicitly provided older README to preserve.
- Badges only per PROMPTS_README “Badges” section.

After the README, output a "## Sources index" (or plain heading Sources index) mapping each major H2 section to specific attached files (bullet list).
```

---

## Maintenance

When SCORE changes dataset layout or script flags:

1. Re-run `./scripts/generate_<name>.sh --help` and `./scripts/install_<name>.sh --help` and update prompts’ examples if needed.
2. Keep this file’s **Rocket Chip path table** in sync with `scripts/generate_rocket_chip.sh` destinations and `manifest.json` schema name.

For creating new **SCORE scripts** (not README prose), continue to use `docs/PROMPTS.md`.
