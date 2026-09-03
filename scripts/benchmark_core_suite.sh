#!/usr/bin/env bash
# Orchestrate SCORE processor-core benchmark suite from benchmarks/core/suite.json
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SUITE_JSON="$PROJECT_ROOT/benchmarks/core/suite.json"

# shellcheck source=scripts/benchmarks/common_benchmark.sh
source "$SCRIPT_DIR/benchmarks/common_benchmark.sh"
score_benchmark_setup_path

CORES_CSV=""
PROFILE=""
REQUIRE_ALL=false
DRY_RUN=false

usage() {
    cat <<EOF
Usage: $(basename "$0") [OPTIONS]

Run implemented benchmark runners for processor cores in the SCORE suite.

Options:
  --cores NAME[,NAME...]   Subset of score_tool names (default: all implemented)
  --profile ID             Filter by profile (mcu_verilator, application_verilator)
  --require-all            Exit 1 if any selected core lacks an implemented runner
  --dry-run                Print commands without executing
  -h, --help               Show help

After running:
  python3 scripts/benchmarks/collect_core_benchmark_results.py
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help) usage; exit 0 ;;
        --cores) CORES_CSV="$2"; shift 2 ;;
        --profile) PROFILE="$2"; shift 2 ;;
        --require-all) REQUIRE_ALL=true; shift ;;
        --dry-run) DRY_RUN=true; shift ;;
        *) echo "unknown: $1" >&2; usage; exit 1 ;;
    esac
done

[[ -f "$SUITE_JSON" ]] || { echo "missing $SUITE_JSON" >&2; exit 1; }

export SUITE_JSON CORES_CSV PROFILE REQUIRE_ALL DRY_RUN PROJECT_ROOT
python3 - <<'PY'
import json, os, subprocess, sys

suite_path = os.environ["SUITE_JSON"]
cores_csv = os.environ.get("CORES_CSV", "")
profile = os.environ.get("PROFILE", "")
require_all = os.environ.get("REQUIRE_ALL", "false") == "true"
dry_run = os.environ.get("DRY_RUN", "false") == "true"
project_root = os.environ["PROJECT_ROOT"]

cores_filter = [c.strip() for c in cores_csv.split(",") if c.strip()]

with open(suite_path) as f:
    suite = json.load(f)

selected = []
skipped = []
for entry in suite["cores"]:
    tool = entry["score_tool"]
    if cores_filter and tool not in cores_filter:
        continue
    if profile and entry.get("profile") != profile:
        continue
    for wl_name, wl in entry.get("workloads", {}).items():
        status = wl.get("status", "planned")
        runner = wl.get("runner")
        if status == "implemented" and runner:
            selected.append((tool, wl_name, runner))
        else:
            skipped.append((tool, wl_name, status))

if require_all and skipped:
    for tool, wl, status in skipped:
        print(f"MISSING: {tool}/{wl} status={status}", file=sys.stderr)
    sys.exit(1)

if not selected:
    print("No implemented runners matched filters.", file=sys.stderr)
    for tool, wl, status in skipped:
        print(f"  {tool}/{wl}: {status}", file=sys.stderr)
    sys.exit(1)

failed = []
for tool, wl, runner in selected:
    path = os.path.join(project_root, runner)
    if not os.path.isfile(path):
        print(f"Runner missing: {path}", file=sys.stderr)
        sys.exit(1)
    cmd = ["bash", path]
    print(f"RUN {tool}/{wl}: bash {runner}")
    if not dry_run:
        rc = subprocess.run(cmd).returncode
        if rc != 0:
            print(f"FAIL {tool}/{wl}: exit {rc}", file=sys.stderr)
            failed.append((tool, wl, rc))

if failed:
    for tool, wl, rc in failed:
        print(f"FAILED: {tool}/{wl} (exit {rc})", file=sys.stderr)
    sys.exit(1)
PY

if [[ "$DRY_RUN" != "true" ]]; then
    python3 "$SCRIPT_DIR/benchmarks/collect_core_benchmark_results.py"
fi
