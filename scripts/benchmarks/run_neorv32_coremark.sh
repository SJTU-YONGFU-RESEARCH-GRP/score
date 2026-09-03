#!/usr/bin/env bash
# Build NEORV32 CoreMark firmware and run GHDL default testbench; write score.benchmark_results.v1 JSON.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/benchmarks/common_benchmark.sh
source "$SCRIPT_DIR/common_benchmark.sh"
score_benchmark_setup_path

NEORV32_DIR="$PROJECT_ROOT/tools/neorv32"
PORT_DIR="$PROJECT_ROOT/benchmarks/core/neorv32_coremark"
COREMARK_DIST="$PROJECT_ROOT/tools/hazard3/test/sim/coremark/dist"
PROFILE="${SCORE_BENCHMARK_PROFILE:-mcu_verilator}"
CONFIG="${SCORE_BENCHMARK_CONFIG:-default}"
CROSS_PREFIX="$(score_benchmark_riscv_prefix)" || {
    log_error "RISC-V toolchain not found — set SCORE_RISCV_PREFIX or install NEORV32/RISC-V GCC"
    exit 1
}
ITERATIONS="${SCORE_COREMARK_ITERATIONS:-1}"
# GHDL wall time scales with simulated time; 20ms @ 100MHz is enough for list-only ITERATIONS=1.
# GHDL wall time scales with simulated time; 50ms @ 100MHz for list-only ITERATIONS=1.
SIM_STOP="${SCORE_NEORV32_SIM_STOP:-50ms}"
UART_LOG_NAME="tb.uart0_rx.log"

usage() {
    cat <<EOF
Usage: $(basename "$0")

Builds CoreMark via benchmarks/core/neorv32_coremark (NEORV32_HOME=tools/neorv32),
installs IMEM image, and runs tools/neorv32/sim/ghdl.sh.

Requires: install_neorv32_vhdl.sh (GHDL), ${CROSS_PREFIX}gcc, tools/hazard3 CoreMark dist.

Output: datasets/neorv32/<commit>/benchmarks/coremark_${CONFIG}.json
EOF
}

[[ "${1:-}" == "-h" || "${1:-}" == "--help" ]] && { usage; exit 0; }

[[ -d "$NEORV32_DIR/rtl" ]] || { log_error "missing $NEORV32_DIR — run install_neorv32_vhdl.sh"; exit 1; }
[[ -d "$COREMARK_DIST" ]] || {
    log_error "missing CoreMark sources at $COREMARK_DIST — install tools/hazard3"
    exit 1
}
[[ -f "$PORT_DIR/Makefile" ]] || { log_error "missing $PORT_DIR — SCORE NEORV32 CoreMark port"; exit 1; }
COREMARK_LINK="$PORT_DIR/coremark"
if [[ ! -e "$COREMARK_LINK" ]]; then
    ln -sfn ../../../tools/hazard3/test/sim/coremark/dist "$COREMARK_LINK"
fi

score_benchmark_require_cmd python3
score_benchmark_require_cmd ghdl
score_benchmark_require_cmd "${CROSS_PREFIX}gcc"

COMMIT="$(score_benchmark_get_commit "$NEORV32_DIR")"
BENCH_DIR="$PROJECT_ROOT/datasets/neorv32/$COMMIT/benchmarks"
mkdir -p "$BENCH_DIR"
LOG="$BENCH_DIR/coremark_${CONFIG}.log"

log_info "Building NEORV32 CoreMark (ITERATIONS=$ITERATIONS)"
make -C "$PORT_DIR" clean
mkdir -p "$PORT_DIR/build"
make -C "$PORT_DIR" -j1 install ITERATIONS="$ITERATIONS" NEORV32_HOME="$NEORV32_DIR" \
    RISCV_PREFIX="$CROSS_PREFIX"

log_info "Running GHDL simulation (--stop-time=$SIM_STOP, ITERATIONS=$ITERATIONS)"
cd "$NEORV32_DIR/sim"
rm -f ghdl.log tb.uart0_rx.log tb.uart1_rx.log build/tb.uart0_rx.log build/tb.uart1_rx.log
if [[ "${SCORE_GHDL_REBUILD:-0}" == 1 ]]; then
    rm -rf build
fi
GHDL="${GHDL:-$PROJECT_ROOT/tools/ghdl-install/bin/ghdl}"
export GHDL
export SCORE_GHDL_INCREMENTAL=1
LOCK_DIR="$NEORV32_DIR/sim/.ghdl_build.lock.d"
if [[ -d "$LOCK_DIR" ]]; then
    if [[ -f "$LOCK_DIR/pid" ]] && kill -0 "$(cat "$LOCK_DIR/pid")" 2>/dev/null; then
        log_error "another NEORV32 GHDL build is running (lock: $LOCK_DIR, pid $(cat "$LOCK_DIR/pid"))"
        exit 1
    fi
    rm -rf "$LOCK_DIR"
fi
if ! mkdir "$LOCK_DIR" 2>/dev/null; then
    log_error "another NEORV32 GHDL build is running (lock: $LOCK_DIR)"
    exit 1
fi
echo $$ > "$LOCK_DIR/pid"
cleanup_ghdl_lock() { rmdir "$LOCK_DIR" 2>/dev/null || true; }
trap cleanup_ghdl_lock EXIT
bash ghdl.sh --stop-time="$SIM_STOP" 2>&1 | tee "$LOG"
cleanup_ghdl_lock
trap - EXIT

UART_LOG="$NEORV32_DIR/sim/$UART_LOG_NAME"
if [[ ! -s "$UART_LOG" && -s "$NEORV32_DIR/sim/build/$UART_LOG_NAME" ]]; then
    UART_LOG="$NEORV32_DIR/sim/build/$UART_LOG_NAME"
fi
if [[ -s "$UART_LOG" ]]; then
    cp "$UART_LOG" "$BENCH_DIR/coremark_${CONFIG}.uart.log"
    PARSE_LOG="$UART_LOG"
else
    PARSE_LOG="$LOG"
fi

METRICS="$(score_benchmark_parse_coremark_file "$PARSE_LOG")"
VER="$(score_benchmark_verilator_version)"
METRICS=$(python3 -c "import json; m=json.loads('''$METRICS'''); m['_verilator']='$VER'; m['simulator']='ghdl'; m['iterations_config']=$ITERATIONS; print(json.dumps(m))")

OUT="$BENCH_DIR/coremark_${CONFIG}.json"
score_benchmark_write_result "$OUT" neorv32 "$COMMIT" "$PROFILE" coremark "$CONFIG" "$METRICS"
log_success "Wrote $OUT"
