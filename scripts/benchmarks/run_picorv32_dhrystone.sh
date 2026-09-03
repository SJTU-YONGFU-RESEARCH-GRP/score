#!/usr/bin/env bash
# Run PicoRV32 upstream Dhrystone Icarus testbench and write score.benchmark_results.v1 JSON.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/benchmarks/common_benchmark.sh
source "$SCRIPT_DIR/common_benchmark.sh"
score_benchmark_setup_path

PICORV32_DIR="$PROJECT_ROOT/tools/picorv32"
DHRY_DIR="$PICORV32_DIR/dhrystone"
PROFILE="${SCORE_BENCHMARK_PROFILE:-mcu_verilator}"

usage() {
    cat <<EOF
Usage: $(basename "$0")

Runs upstream PicoRV32 dhrystone testbench (Icarus). Requires RISC-V toolchain on PATH
or TOOLCHAIN_PREFIX in dhrystone/Makefile.

Output: datasets/picorv32/<commit>/benchmarks/dhrystone_default.json
EOF
}

[[ "${1:-}" == "-h" || "${1:-}" == "--help" ]] && { usage; exit 0; }

[[ -d "$PICORV32_DIR" ]] || { log_error "missing $PICORV32_DIR"; exit 1; }
score_benchmark_require_cmd iverilog
score_benchmark_require_cmd vvp
score_benchmark_require_cmd python3

COMMIT="$(score_benchmark_get_commit "$PICORV32_DIR")"
BENCH_DIR="$PROJECT_ROOT/datasets/picorv32/$COMMIT/benchmarks"
mkdir -p "$BENCH_DIR"

RISCV_PREFIX="$(score_benchmark_riscv_prefix)" || {
    log_error "RISC-V toolchain not found — set SCORE_RISCV_PREFIX"
    exit 1
}

cd "$DHRY_DIR"
make test USE_MYSTDLIB=1 TOOLCHAIN_PREFIX="$RISCV_PREFIX" 2>&1 | tee "$BENCH_DIR/dhrystone_run.log"

METRICS="$(python3 - "$BENCH_DIR/dhrystone_run.log" <<'PY'
import json, re, sys
text = open(sys.argv[1]).read()
dmips = None
for pat in [
    r"DMIPS_Per_MHz:\s*([\d.]+)",
    r"DMIPS per Mhz:\s+([\d.]+)",
    r"DMIPS\s*[:=]\s*([\d.]+)",
    r"([\d.]+)\s*DMIPS",
]:
    m = re.search(pat, text, re.I)
    if m:
        dmips = float(m.group(1))
        break
cycles_m = re.search(r"User_Time:\s*(\d+)\s+cycles", text)
cycles = int(cycles_m.group(1)) if cycles_m else None
if dmips is None:
    raise SystemExit("could not parse Dhrystone metrics from testbench output")
out = {"dhrystone_dmips_per_mhz": dmips, "simulator": "icarus"}
if cycles is not None:
    out["total_cycles"] = cycles
if "DONE" in text:
    out["validated"] = True
print(json.dumps(out))
PY
)" || {
    log_error "Dhrystone parse failed — check toolchain (see dhrystone/Makefile TOOLCHAIN_PREFIX)"
    exit 1
}

VER="$(score_benchmark_verilator_version)"
METRICS=$(python3 -c "import json; m=json.loads('''$METRICS'''); m['_verilator']='$VER'; print(json.dumps(m))")
OUT="$BENCH_DIR/dhrystone_default.json"
score_benchmark_write_result "$OUT" picorv32 "$COMMIT" "$PROFILE" dhrystone default "$METRICS"
log_success "Wrote $OUT"
