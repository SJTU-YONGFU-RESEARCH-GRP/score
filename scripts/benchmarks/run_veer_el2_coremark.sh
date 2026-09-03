#!/usr/bin/env bash
# Run VeeR EL2 upstream CoreMark (TEST=cmark) on Verilator; write score.benchmark_results.v1 JSON.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/benchmarks/common_benchmark.sh
source "$SCRIPT_DIR/common_benchmark.sh"
score_benchmark_setup_path

VEER_DIR="$PROJECT_ROOT/tools/veer-el2"
PROFILE="${SCORE_BENCHMARK_PROFILE:-mcu_verilator}"
CONFIG="${SCORE_BENCHMARK_CONFIG:-default}"
TEST="${SCORE_VEER_TEST:-cmark}"
FIRMWARE_SOURCE="${SCORE_VEER_FIRMWARE:-canned}"

usage() {
    cat <<EOF
Usage: $(basename "$0")

Runs chipsalliance Cores-VeeR-EL2 TEST=cmark via tools/Makefile + Verilator.
Requires: install_veer_el2.sh, Verilator.
Firmware: SCORE_VEER_FIRMWARE=canned (upstream testbench/hex). Rebuild needs third_party/picolibc.

Output: datasets/veer_el2/<commit>/benchmarks/coremark_${CONFIG}.json
EOF
}

[[ "${1:-}" == "-h" || "${1:-}" == "--help" ]] && { usage; exit 0; }

[[ -d "$VEER_DIR/design" ]] || { log_error "missing $VEER_DIR — run install_veer_el2.sh"; exit 1; }
[[ -f "$VEER_DIR/tools/Makefile" ]] || { log_error "missing $VEER_DIR/tools/Makefile"; exit 1; }
score_benchmark_require_cmd python3
score_benchmark_require_cmd verilator

if [[ "$FIRMWARE_SOURCE" != "canned" ]]; then
    log_error "SCORE_VEER_FIRMWARE=$FIRMWARE_SOURCE is unsupported without tools/veer-el2/third_party/picolibc"
    exit 1
fi

COMMIT="$(score_benchmark_get_commit "$VEER_DIR")"
BENCH_DIR="$PROJECT_ROOT/datasets/veer_el2/$COMMIT/benchmarks"
mkdir -p "$BENCH_DIR"
LOG="$BENCH_DIR/coremark_${CONFIG}.log"

export RV_ROOT="$VEER_DIR"
# Force the Makefile's canned-hex path (no picolibc in this checkout).
export GCC_PREFIX="score-no-riscv-gcc"

# Verilator 5 treats force/release of input ports as %Error-ASSIGNIN.
# Host g++ -Werror=logical-op fails on tcp_server.c (EAGAIN==EWOULDBLOCK).
# TB_MAX_CYCLES default 2e6 is too small for canned CoreMark; override via env.
TB_MAX_CYCLES="${TB_MAX_CYCLES:-50000000}"
log_info "Running VeeR EL2 Verilator TEST=$TEST firmware=$FIRMWARE_SOURCE TB_MAX_CYCLES=$TB_MAX_CYCLES"
make -C "$VEER_DIR" -f "$VEER_DIR/tools/Makefile" verilator TEST="$TEST" \
    TB_MAX_CYCLES="$TB_MAX_CYCLES" \
    VERILATOR_EXTRA_ARGS="-Wno-ASSIGNIN -GMAX_CYCLES=${TB_MAX_CYCLES} -CFLAGS -Wno-error=logical-op" \
    2>&1 | tee "$LOG"

METRICS="$(score_benchmark_parse_coremark_file "$LOG")"
VER="$(score_benchmark_verilator_version)"
METRICS=$(python3 -c "import json; m=json.loads('''$METRICS'''); m['_verilator']='$VER'; m['simulator']='verilator'; m['veer_test']='$TEST'; m['firmware_source']='canned_hex'; print(json.dumps(m))")

OUT="$BENCH_DIR/coremark_${CONFIG}.json"
score_benchmark_write_result "$OUT" veer_el2 "$COMMIT" "$PROFILE" coremark "$CONFIG" "$METRICS"
log_success "Wrote $OUT"
