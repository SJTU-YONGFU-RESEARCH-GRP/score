#!/usr/bin/env bash
# Build PicoRV32 CoreMark firmware and run the Icarus testbench; write score.benchmark_results.v1 JSON.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/benchmarks/common_benchmark.sh
source "$SCRIPT_DIR/common_benchmark.sh"
score_benchmark_setup_path

PICO_DIR="$PROJECT_ROOT/tools/picorv32"
PORT_DIR="$PROJECT_ROOT/benchmarks/core/picorv32_coremark"
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

Builds SCORE PicoRV32 CoreMark (Hazard3 EEMBC sources + Icarus TB) and writes JSON.
Requires: install_picorv32.sh, iverilog, ${CROSS_PREFIX}gcc.

Output: datasets/picorv32/<commit>/benchmarks/coremark_${CONFIG}.json
EOF
}

[[ "${1:-}" == "-h" || "${1:-}" == "--help" ]] && { usage; exit 0; }

[[ -f "$PICO_DIR/picorv32.v" ]] || { log_error "missing $PICO_DIR — run install_picorv32.sh"; exit 1; }
[[ -f "$PROJECT_ROOT/tools/hazard3/test/sim/coremark/dist/core_main.c" ]] || {
    log_error "missing Hazard3 EEMBC CoreMark sources — run install_hazard3.sh"
    exit 1
}
score_benchmark_require_cmd python3
score_benchmark_require_cmd iverilog
score_benchmark_require_cmd vvp
score_benchmark_require_cmd "${CROSS_PREFIX}gcc"

COMMIT="$(score_benchmark_get_commit "$PICO_DIR")"
BENCH_DIR="$PROJECT_ROOT/datasets/picorv32/$COMMIT/benchmarks"
mkdir -p "$BENCH_DIR"
LOG="$BENCH_DIR/coremark_${CONFIG}.log"

log_info "Building PicoRV32 CoreMark (ITERATIONS=$ITERATIONS)"
make -C "$PORT_DIR" clean
make -C "$PORT_DIR" hex \
    TOOLCHAIN_PREFIX="$CROSS_PREFIX" \
    ITERATIONS="$ITERATIONS" \
    PICO_RTL="$PICO_DIR/picorv32.v"

log_info "Running PicoRV32 Icarus CoreMark sim"
make -C "$PORT_DIR" sim \
    TOOLCHAIN_PREFIX="$CROSS_PREFIX" \
    ITERATIONS="$ITERATIONS" \
    PICO_RTL="$PICO_DIR/picorv32.v" \
    2>&1 | tee "$LOG"

METRICS="$(score_benchmark_parse_coremark_file "$LOG")"
VER="$(score_benchmark_verilator_version)"
METRICS=$(python3 -c "import json; m=json.loads('''$METRICS'''); m['_verilator']='$VER'; m['simulator']='icarus'; m['iterations_config']=$ITERATIONS; m['timing']='rdcycle'; print(json.dumps(m))")

OUT="$BENCH_DIR/coremark_${CONFIG}.json"
score_benchmark_write_result "$OUT" picorv32 "$COMMIT" "$PROFILE" coremark "$CONFIG" "$METRICS"
log_success "Wrote $OUT"
