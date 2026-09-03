#!/usr/bin/env bash
# Shared helpers for SCORE processor-core benchmark runners.
set -euo pipefail

BENCHMARK_COMMON_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$BENCHMARK_COMMON_DIR/../.." && pwd)"

# shellcheck source=scripts/common_logging.sh
source "$PROJECT_ROOT/scripts/common_logging.sh"

score_benchmark_require_cmd() {
    local cmd="$1"
    command -v "$cmd" >/dev/null 2>&1 || {
        log_error "required command not found: $cmd"
        exit 1
    }
}

score_benchmark_riscv_prefix() {
    if [[ -n "${SCORE_RISCV_PREFIX:-}" ]]; then
        printf '%s\n' "$SCORE_RISCV_PREFIX"
        return 0
    fi
    local candidates=(
        "$PROJECT_ROOT/tools/ibex-host-tools/riscv/bin/riscv32-unknown-elf-"
        "$PROJECT_ROOT/tools/ibex-host-tools/riscv/bin/riscv32-elf-"
    )
    local prefix
    for prefix in "${candidates[@]}" riscv-none-elf- riscv32-unknown-elf-; do
        if command -v "${prefix}gcc" >/dev/null 2>&1; then
            printf '%s\n' "$prefix"
            return 0
        fi
    done
    return 1
}

score_benchmark_ensure_ibex_venv() {
    local ibex="$PROJECT_ROOT/tools/ibex"
    local venv="$ibex/venv"
    [[ -d "$ibex" ]] || return 1
    if [[ ! -x "$venv/bin/fusesoc" ]]; then
        log_info "Bootstrapping Ibex FuseSoC venv (fusesoc==2.4.3)"
        python3 -m venv "$venv"
        "$venv/bin/pip" install -q --upgrade pip setuptools wheel
        "$venv/bin/pip" install -q "fusesoc==2.4.3" packaging pyyaml mako pydantic typeguard portalocker junit-xml
    fi
    # shellcheck disable=SC1091
    source "$venv/bin/activate"
}

score_benchmark_setup_path() {
    local bin
    for bin in \
        "$PROJECT_ROOT/tools/ibex-host-tools/riscv/bin" \
        "$PROJECT_ROOT/tools/ghdl-install/bin"; do
        if [[ -d "$bin" ]]; then
            export PATH="$bin:$PATH"
        fi
    done
    if [[ -f "$PROJECT_ROOT/scripts/neorv32_env.sh" ]]; then
        # shellcheck disable=SC1091
        source "$PROJECT_ROOT/scripts/neorv32_env.sh"
    fi
}

score_benchmark_activate_ibex_venv() {
    score_benchmark_ensure_ibex_venv
}

score_benchmark_activate_serv_fusesoc() {
    if [[ -x "$PROJECT_ROOT/tools/opentitan/.venv/bin/fusesoc" ]]; then
        export PATH="$PROJECT_ROOT/tools/opentitan/.venv/bin:$PATH"
    else
        score_benchmark_ensure_ibex_venv
    fi
}

score_benchmark_cxx() {
    if [[ -n "${SCORE_CXX:-}" ]]; then
        printf '%s\n' "$SCORE_CXX"
        return 0
    fi
    local cxx
    for cxx in clang++-16 clang++-17 clang++; do
        if command -v "$cxx" >/dev/null 2>&1; then
            printf '%s\n' "$cxx"
            return 0
        fi
    done
    return 1
}

score_benchmark_filter_ibex_fusesoc_opts() {
    local cfg="$1" ibex_dir="$2"
    python3 - "$cfg" "$ibex_dir" <<'PY'
import subprocess, sys
cfg, ibex = sys.argv[1:3]
out = subprocess.check_output(
    ["python3", "util/ibex_config.py", cfg, "fusesoc_opts"],
    cwd=ibex,
    text=True,
)
opts = [o for o in out.split() if not o.startswith("--BaseIsa=")]
print(" ".join(opts))
PY
}

score_benchmark_hazard3_coremark_march() {
    local gcc="$1"
    if echo 'int x;' | "$gcc" -march=rv32imac_zicsr_zifencei_zba_zbb_zbkb_zbs -c -xc - -o /dev/null 2>/dev/null; then
        printf '%s\n' "rv32imac_zicsr_zifencei_zba_zbb_zbkb_zbs"
    else
        printf '%s\n' "rv32imac_zicsr"
    fi
}

score_benchmark_get_commit() {
    local repo="$1"
    git -C "$repo" rev-parse HEAD 2>/dev/null | cut -c1-8
}

score_benchmark_verilator_version() {
    verilator --version 2>/dev/null | head -1 | awk '{print $2}' || echo "unknown"
}

score_benchmark_host_json() {
    python3 - <<'PY'
import json, platform, socket
print(json.dumps({
    "hostname": socket.gethostname(),
    "platform": platform.platform(),
    "python": platform.python_version(),
}))
PY
}

score_benchmark_write_result() {
  # Usage: score_benchmark_write_result <output.json> <core> <commit> <profile> <workload> <config> <metrics_json>
    local out="$1" core="$2" commit="$3" profile="$4" workload="$5" config="$6" metrics="$7"
    mkdir -p "$(dirname "$out")"
    local host_json
    host_json="$(score_benchmark_host_json)"
    python3 - "$out" "$core" "$commit" "$profile" "$workload" "$config" "$metrics" "$host_json" <<'PY'
import json, sys, datetime
out, core, commit, profile, workload, config, metrics_s, host_s = sys.argv[1:9]
metrics = json.loads(metrics_s)
host = json.loads(host_s)
ver = metrics.pop("_verilator", "unknown")
doc = {
    "schema": "score.benchmark_results.v1",
    "evidence_class": "score_measured",
    "core": core,
    "upstream_commit": commit,
    "profile": profile,
    "workload": workload,
    "config": config,
    "metrics": metrics,
    "generated_utc": datetime.datetime.utcnow().replace(microsecond=0).isoformat() + "Z",
    "host": host,
    "tool_versions": {"verilator": ver},
}
with open(out, "w") as f:
    json.dump(doc, f, indent=2)
print(out)
PY
}

score_benchmark_parse_coremark_text() {
    python3 - <<'PY'
import json, re, sys
text = sys.stdin.read()
iters_m = re.search(r"Iterations\s*:\s*(\d+)", text)
ticks_m = re.search(r"Total ticks\s*:\s*(\d+)", text)
cycles_m = re.search(r"Ran for (\d+) cycles", text)
valid = "Correct operation validated" in text or "Exit code 0" in text
if not iters_m or not ticks_m:
    raise SystemExit("could not parse CoreMark output (need Iterations and Total ticks)")
iters = int(iters_m.group(1))
ticks = int(ticks_m.group(1))
if ticks <= 0:
    raise SystemExit("invalid tick count")
out = {
    "coremark_per_mhz": round(1_000_000.0 * iters / ticks, 4),
    "iterations": iters,
    "total_cycles": ticks,
    "validated": valid,
}
if cycles_m:
    out["tb_cycles"] = int(cycles_m.group(1))
print(json.dumps(out))
PY
}

score_benchmark_parse_coremark_file() {
    local logfile="$1"
    python3 - "$logfile" <<'PY'
import json, re, sys
text = open(sys.argv[1], encoding="utf-8", errors="replace").read()
iters_matches = re.findall(r"Iterations\s*:\s*(\d+)", text)
ticks_matches = re.findall(r"Total ticks\s*:\s*(\d+)", text)
cycles_matches = re.findall(r"Ran for (\d+) cycles", text)
valid = "Correct operation validated" in text or "Exit code 0" in text or "Test complete" in text
if not iters_matches:
    raise SystemExit("could not parse CoreMark output (need Iterations)")
iters = int(iters_matches[-1])
ticks = int(ticks_matches[-1]) if ticks_matches else 0
if ticks <= 0:
    if not cycles_matches:
        raise SystemExit("could not parse CoreMark output (need Total ticks or Ran for cycles)")
    ticks = int(cycles_matches[-1])
if ticks <= 0:
    raise SystemExit("invalid tick count")
out = {
    "coremark_per_mhz": round(1_000_000.0 * iters / ticks, 4),
    "iterations": iters,
    "total_cycles": ticks,
    "validated": valid,
}
if cycles_matches:
    out["tb_cycles"] = int(cycles_matches[-1])
print(json.dumps(out))
PY
}

score_benchmark_parse_dhrystone_file() {
    local logfile="$1"
    python3 - "$logfile" <<'PY'
import json, re, sys
text = open(sys.argv[1]).read()
dmips = None
for pat in [
    r"DMIPS per Mhz:\s+([\d.]+)",
    r"DMIPS\s*[:=]\s*([\d.]+)",
    r"([\d.]+)\s*DMIPS",
]:
    matches = re.findall(pat, text, re.I)
    if matches:
        dmips = float(matches[-1])
        break
cycles_m = re.search(r"Clock cycles=(\d+)", text)
cycles = int(cycles_m.group(1)) if cycles_m else None
if dmips is None:
    raise SystemExit("could not parse Dhrystone DMIPS/MHz from log")
out = {"dhrystone_dmips_per_mhz": dmips, "simulator": "verilator"}
if cycles is not None:
    out["total_cycles"] = cycles
if "REGRESSION SUCCESS" in text:
    out["validated"] = True
print(json.dumps(out))
PY
}
