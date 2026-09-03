#!/usr/bin/env bash
# Build DarkRISCV CoreMark firmware and run the Icarus SoC sim; write score.benchmark_results.v1 JSON.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/benchmarks/common_benchmark.sh
source "$SCRIPT_DIR/common_benchmark.sh"
score_benchmark_setup_path

DARK_DIR="$PROJECT_ROOT/tools/darkriscv"
PROFILE="${SCORE_BENCHMARK_PROFILE:-mcu_verilator}"
CONFIG="${SCORE_BENCHMARK_CONFIG:-default}"
ITERATIONS="${SCORE_COREMARK_ITERATIONS:-1}"
CROSS_PREFIX="$(score_benchmark_riscv_prefix)" || {
    log_error "RISC-V toolchain not found — set SCORE_RISCV_PREFIX"
    exit 1
}

usage() {
    cat <<EOF
Usage: $(basename "$0")

Builds DarkRISCV src/ with APPLICATION=coremark and runs sim/ via Icarus Verilog.
Requires: install_darkriscv.sh, iverilog, ${CROSS_PREFIX}gcc.

Output: datasets/darkriscv/<commit>/benchmarks/coremark_${CONFIG}.json
EOF
}

[[ "${1:-}" == "-h" || "${1:-}" == "--help" ]] && { usage; exit 0; }

[[ -d "$DARK_DIR/rtl" ]] || { log_error "missing $DARK_DIR — run install_darkriscv.sh"; exit 1; }
[[ -f "$DARK_DIR/src/coremark/Makefile" ]] || { log_error "missing DarkRISCV CoreMark port"; exit 1; }
score_benchmark_require_cmd python3
score_benchmark_require_cmd iverilog
score_benchmark_require_cmd "${CROSS_PREFIX}gcc"

COMMIT="$(score_benchmark_get_commit "$DARK_DIR")"
BENCH_DIR="$PROJECT_ROOT/datasets/darkriscv/$COMMIT/benchmarks"
mkdir -p "$BENCH_DIR"
LOG="$BENCH_DIR/coremark_${CONFIG}.log"

CROSS_BIN="$(dirname "${CROSS_PREFIX}gcc")"
CROSS_TRIPLE="$(basename "$CROSS_PREFIX")"
CROSS_TRIPLE="${CROSS_TRIPLE%-}"

export CROSS="$CROSS_TRIPLE"
export CCPATH="$CROSS_BIN"
if echo 'int x;' | "${CROSS_PREFIX}gcc" -march=rv32i_zicsr -mabi=ilp32 -c -xc - -o /dev/null 2>/dev/null; then
    export ARCH=rv32i_zicsr
else
    export ARCH=rv32i
    log_info "Toolchain has no zicsr march name; using ARCH=$ARCH"
fi
# DarkRISCV default RTL has no M extension (__MEXT__ off); do not emit mul.
export ABI=ilp32
export APPLICATION=coremark
unset TARGET_ARCH TARGET_MACH || true

log_info "Building DarkRISCV CoreMark (ITERATIONS=$ITERATIONS CROSS=$CROSS ARCH=$ARCH)"
make -C "$DARK_DIR/src" APPLICATION=coremark ITERATIONS="$ITERATIONS" clean
make -C "$DARK_DIR/src" APPLICATION=coremark ITERATIONS="$ITERATIONS"

[[ -f "$DARK_DIR/src/darksocv.mem" ]] || { log_error "darksocv.mem not produced"; exit 1; }

log_info "Running DarkRISCV Icarus sim (no VCD)"
make -C "$DARK_DIR/sim" clean
make -C "$DARK_DIR/sim" APPLICATION=coremark \
    ICARUS="iverilog -Wall -DSCORE_NO_VCD" 2>&1 | tee "$LOG"

METRICS="$(python3 - "$LOG" <<'PY'
import json, re, sys
text = open(sys.argv[1], encoding="utf-8", errors="replace").read()
iters_m = re.search(r"Iterations\s*:\s*(\d+)", text)
ticks_m = re.search(r"Total ticks\s*:\s*(\d+)", text)
mhz_m = re.search(r"darkriscv@(\d+)MHz", text)
if not iters_m or not ticks_m:
    raise SystemExit("could not parse DarkRISCV CoreMark (need Iterations and Total ticks)")
if not mhz_m:
    raise SystemExit("could not parse DarkRISCV clock (need darkriscv@NMHz)")
iters = int(iters_m.group(1))
ticks_us = int(ticks_m.group(1))
mhz = int(mhz_m.group(1))
if ticks_us <= 0 or mhz <= 0:
    raise SystemExit("invalid DarkRISCV timing")
cycles = ticks_us * mhz
print(json.dumps({
    "coremark_per_mhz": round(1_000_000.0 * iters / cycles, 4),
    "iterations": iters,
    "total_cycles": cycles,
    "timer_ticks_us": ticks_us,
    "clock_mhz": mhz,
    "validated": "Correct operation validated" in text,
    "timing": "io.timeus",
}))
PY
)"
VER="$(score_benchmark_verilator_version)"
METRICS=$(python3 -c "import json; m=json.loads('''$METRICS'''); m['_verilator']='$VER'; m['simulator']='icarus'; m['iterations_config']=$ITERATIONS; print(json.dumps(m))")

OUT="$BENCH_DIR/coremark_${CONFIG}.json"
score_benchmark_write_result "$OUT" darkriscv "$COMMIT" "$PROFILE" coremark "$CONFIG" "$METRICS"
log_success "Wrote $OUT"
