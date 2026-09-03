#!/usr/bin/env bash
# Build SERV CoreMark firmware and run on Servant Verilator testbench.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/benchmarks/common_benchmark.sh
source "$SCRIPT_DIR/common_benchmark.sh"
score_benchmark_setup_path
score_benchmark_activate_serv_fusesoc

SERV_DIR="$PROJECT_ROOT/tools/serv"
PORT_DIR="$PROJECT_ROOT/benchmarks/core/serv_coremark"
PROFILE="${SCORE_BENCHMARK_PROFILE:-mcu_verilator}"
CONFIG="${SCORE_BENCHMARK_CONFIG:-servant}"
CROSS_PREFIX="$(score_benchmark_riscv_prefix)" || {
    log_error "RISC-V toolchain not found — set SCORE_RISCV_PREFIX"
    exit 1
}
ITERATIONS="${SCORE_COREMARK_ITERATIONS:-1}"
SERV_MEMSIZE="${SCORE_SERV_MEMSIZE:-65536}"
# servant_tb compares timeout against main_time (31.25 units per half-cycle).
# Default 0 = no timeout; firmware calls serv_score_halt() on completion.
TIMEOUT_CYCLES="${SCORE_SERV_TIMEOUT_CYCLES:-0}"

usage() {
    cat <<EOF
Usage: $(basename "$0")

SERV is bit-serial; default ITERATIONS=1 and long timeout. Requires fusesoc, Verilator,
${CROSS_PREFIX}gcc, and tools/serv checkout.

Output: datasets/serv/<commit>/benchmarks/coremark_${CONFIG}.json
EOF
}

[[ "${1:-}" == "-h" || "${1:-}" == "--help" ]] && { usage; exit 0; }

[[ -d "$SERV_DIR/rtl" ]] || { log_error "missing $SERV_DIR — run install_serv.sh"; exit 1; }
score_benchmark_require_cmd python3
score_benchmark_require_cmd verilator
score_benchmark_require_cmd fusesoc
score_benchmark_require_cmd "${CROSS_PREFIX}gcc"

COMMIT="$(score_benchmark_get_commit "$SERV_DIR")"
BENCH_DIR="$PROJECT_ROOT/datasets/serv/$COMMIT/benchmarks"
mkdir -p "$BENCH_DIR"
LOG="$BENCH_DIR/coremark_${CONFIG}.log"
SIG="$BENCH_DIR/coremark_${CONFIG}.signature"
HEX="$PORT_DIR/coremark.hex"

log_info "Building SERV CoreMark (ITERATIONS=$ITERATIONS)"
make -C "$PORT_DIR" clean
make -C "$PORT_DIR" ITERATIONS="$ITERATIONS" TOOLCHAIN_PREFIX="$CROSS_PREFIX" hex

cd "$SERV_DIR"
BUILD_ROOT="$SERV_DIR/build/score_coremark"
rm -rf "$BUILD_ROOT"
mkdir -p "$BUILD_ROOT"

# Upstream verilator_tb enables --trace; disable for benchmark throughput.
SERVANT_CORE="$SERV_DIR/servant.core"
SERVANT_CORE_BAK="$BUILD_ROOT/servant.core.scorebak"
cp "$SERVANT_CORE" "$SERVANT_CORE_BAK"
sed -i 's/verilator_options : \[--trace\]/verilator_options : []/' "$SERVANT_CORE"
restore_servant_core() {
    if [[ -f "$SERVANT_CORE_BAK" ]]; then
        mv -f "$SERVANT_CORE_BAK" "$SERVANT_CORE"
    fi
}
trap restore_servant_core EXIT

log_info "Running Servant Verilator sim (timeout=${TIMEOUT_CYCLES:-0})"
rm -f "$SIG"
fusesoc --cores-root="$SERV_DIR" run --target=verilator_tb --build-root="$BUILD_ROOT" \
    servant \
    --memsize="$SERV_MEMSIZE" \
    --signature="$SIG" \
    --firmware="$HEX" \
    --timeout="$TIMEOUT_CYCLES" \
    --make_options "CXXFLAGS=-Wno-error=float-conversion" 2>&1 | tee "$LOG"

PARSE_LOG="$LOG"
if [[ -s "$SIG" ]]; then
    PARSE_LOG="$BENCH_DIR/coremark_${CONFIG}.parse.txt"
    cat "$SIG" "$LOG" > "$PARSE_LOG"
    log_info "Using signature + sim log for CoreMark metrics: $PARSE_LOG"
fi
METRICS="$(score_benchmark_parse_coremark_file "$PARSE_LOG")"
VER="$(score_benchmark_verilator_version)"
METRICS=$(python3 -c "import json; m=json.loads('''$METRICS'''); m['_verilator']='$VER'; m['simulator']='verilator'; m['iterations_config']=$ITERATIONS; print(json.dumps(m))")

OUT="$BENCH_DIR/coremark_${CONFIG}.json"
score_benchmark_write_result "$OUT" serv "$COMMIT" "$PROFILE" coremark "$CONFIG" "$METRICS"
restore_servant_core
trap - EXIT
log_success "Wrote $OUT"
