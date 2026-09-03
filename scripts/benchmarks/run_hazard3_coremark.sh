#!/usr/bin/env bash
# Run CoreMark on Hazard3 CXXRTL testbench and write score.benchmark_results.v1 JSON.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/benchmarks/common_benchmark.sh
source "$SCRIPT_DIR/common_benchmark.sh"
score_benchmark_setup_path

HAZARD3_DIR="$PROJECT_ROOT/tools/hazard3"
SIM_DIR="$HAZARD3_DIR/test/sim"
COREMARK_DIR="$SIM_DIR/coremark"
TB_DIR="$SIM_DIR/tb_cxxrtl"
PROFILE="${SCORE_BENCHMARK_PROFILE:-mcu_verilator}"
CONFIG="${SCORE_BENCHMARK_CONFIG:-default}"
CROSS_PREFIX="$(score_benchmark_riscv_prefix)" || {
    log_error "RISC-V toolchain not found — set SCORE_RISCV_PREFIX"
    exit 1
}
CXX="$(score_benchmark_cxx)" || {
    log_error "C++ compiler not found — set SCORE_CXX"
    exit 1
}
ITERATIONS="${SCORE_COREMARK_ITERATIONS:-10}"

usage() {
    cat <<EOF
Usage: $(basename "$0")

Requires: yosys, clang++, ${CROSS_PREFIX}gcc
Builds Hazard3 CXXRTL tb + upstream CoreMark, runs simulation, parses Total ticks.

Output: datasets/hazard3/<commit>/benchmarks/coremark_<config>.json
EOF
}

[[ "${1:-}" == "-h" || "${1:-}" == "--help" ]] && { usage; exit 0; }

[[ -d "$HAZARD3_DIR/hdl" ]] || { log_error "missing $HAZARD3_DIR — run install_hazard3.sh"; exit 1; }
score_benchmark_require_cmd python3
score_benchmark_require_cmd yosys
score_benchmark_require_cmd "$CXX"
score_benchmark_require_cmd "${CROSS_PREFIX}gcc"

COMMIT="$(score_benchmark_get_commit "$HAZARD3_DIR")"
BENCH_DIR="$PROJECT_ROOT/datasets/hazard3/$COMMIT/benchmarks"
mkdir -p "$BENCH_DIR"
LOG="$BENCH_DIR/coremark_${CONFIG}.log"
COREMARK_MARCH="$(score_benchmark_hazard3_coremark_march "${CROSS_PREFIX}gcc")"

log_info "Building Hazard3 CXXRTL testbench (config=$CONFIG)"
make -C "$TB_DIR" CLANGXX="$CXX" CONFIG="$CONFIG"

log_info "Building CoreMark (ITERATIONS=$ITERATIONS MARCH=$COREMARK_MARCH)"
MEMMAP_LD="$PROJECT_ROOT/benchmarks/core/hazard3_coremark/memmap.ld"
HAZARD3_LFLAGS="-T $MEMMAP_LD -Wl,--noinhibit-exec -march=$COREMARK_MARCH"
make -C "$COREMARK_DIR" clean
make -C "$COREMARK_DIR" ITERATIONS="$ITERATIONS" CROSS_PREFIX="$CROSS_PREFIX" MARCH="$COREMARK_MARCH" \
    LFLAGS="$HAZARD3_LFLAGS" bin tb

TBEXEC="$COREMARK_DIR/../tb_cxxrtl/tb"
[[ -x "$TBEXEC" ]] || TBEXEC="$TB_DIR/tb"
[[ -x "$TBEXEC" ]] || { log_error "testbench binary not found"; exit 1; }

"$TBEXEC" --bin "$COREMARK_DIR/coremark.bin" --cycles 100000000 --cpuret --logfile "$LOG"

METRICS="$(score_benchmark_parse_coremark_file "$LOG")"
VER="$(score_benchmark_verilator_version)"
METRICS=$(python3 -c "import json; m=json.loads('''$METRICS'''); m['_verilator']='$VER'; m['simulator']='cxxrtl'; m['hazard3_config']='$CONFIG'; print(json.dumps(m))")

OUT="$BENCH_DIR/coremark_${CONFIG}.json"
score_benchmark_write_result "$OUT" hazard3 "$COMMIT" "$PROFILE" coremark "$CONFIG" "$METRICS"
log_success "Wrote $OUT"
