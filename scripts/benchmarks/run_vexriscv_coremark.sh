#!/usr/bin/env bash
# Run VexRiscv upstream Verilator regression CoreMark and write score.benchmark_results.v1 JSON.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/benchmarks/common_benchmark.sh
source "$SCRIPT_DIR/common_benchmark.sh"

VEXRISCV_DIR="$PROJECT_ROOT/tools/vexriscv"
REGRESSION_DIR="$VEXRISCV_DIR/src/test/cpp/regression"
PROFILE="${SCORE_BENCHMARK_PROFILE:-mcu_verilator}"
CONFIG="${SCORE_BENCHMARK_CONFIG:-GenFull}"
REDO="${SCORE_VEXRISCV_REDO:-1}"

usage() {
    cat <<EOF
Usage: $(basename "$0") [--config NAME] [--profile mcu_verilator]

Runs upstream VexRiscv regression (Verilator) with COREMARK=yes.
Default config: GenFull (MUL/DIV/cached buses; uses resources/bin/coremark_rv32im.bin).

Requires: verilator, g++.

Output: datasets/vexriscv/<commit>/benchmarks/coremark_<config>.json
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help) usage; exit 0 ;;
        --profile) PROFILE="$2"; shift 2 ;;
        --config) CONFIG="$2"; shift 2 ;;
        *) log_error "unknown argument: $1"; usage; exit 1 ;;
    esac
done

[[ -d "$VEXRISCV_DIR" ]] || { log_error "missing $VEXRISCV_DIR — run install_vexriscv.sh"; exit 1; }
[[ -f "$VEXRISCV_DIR/src/test/resources/bin/coremark_rv32im.bin" ]] || {
    log_error "missing VexRiscv CoreMark binaries under src/test/resources/bin"
    exit 1
}
score_benchmark_require_cmd python3
score_benchmark_require_cmd verilator
score_benchmark_require_cmd make
score_benchmark_require_cmd g++

COMMIT="$(score_benchmark_get_commit "$VEXRISCV_DIR")"
BENCH_DIR="$PROJECT_ROOT/datasets/vexriscv/$COMMIT/benchmarks"
mkdir -p "$BENCH_DIR"
LOG="$BENCH_DIR/coremark_${CONFIG}.log"

resolve_vex_file() {
    local candidates=(
        "$PROJECT_ROOT/datasets/vexriscv/$COMMIT/rtl_generated/$CONFIG/VexRiscv.v"
        "$VEXRISCV_DIR/VexRiscv.v"
    )
    local path
    for path in "${candidates[@]}"; do
        if [[ -f "$path" ]]; then
            printf '%s\n' "$path"
            return 0
        fi
    done
    return 1
}

vex_file="$(resolve_vex_file || true)"
if [[ -z "$vex_file" ]]; then
    if command -v sbt >/dev/null 2>&1 && command -v java >/dev/null 2>&1; then
        log_info "Emitting VexRiscv.v via sbt runMain vexriscv.demo.$CONFIG"
        export SBT_OPTS="${SBT_OPTS:--Xmx4G}"
        ( cd "$VEXRISCV_DIR" && sbt -batch "runMain vexriscv.demo.$CONFIG" ) >"$BENCH_DIR/sbt_${CONFIG}.log" 2>&1
        vex_file="$VEXRISCV_DIR/VexRiscv.v"
    fi
fi
[[ -f "$vex_file" ]] || {
    log_error "VexRiscv.v not found for config=$CONFIG — run generate_vexriscv.sh or install java/sbt"
    exit 1
}

log_info "VexRiscv CoreMark config=$CONFIG rtl=$vex_file"
cd "$REGRESSION_DIR"
make clean >/dev/null 2>&1 || true
make verilate \
    VEXRISCV_FILE="$vex_file" \
    DHRYSTONE=no COREMARK=yes ISA_TEST=no \
    WITH_RISCV_REF=no \
    REDO="$REDO" THREAD_COUNT=1 \
    IBUS=CACHED DBUS=CACHED CSR=yes MMU=yes DEBUG_PLUGIN=STD MUL=yes DIV=yes COMPRESSED=no \
    >"$BENCH_DIR/verilate_${CONFIG}.log" 2>&1

make -C obj_dir -f VVexRiscv.mk VVexRiscv -j"$(nproc)" \
    'CXXFLAGS=-Wno-error=unused-function' \
    >>"$BENCH_DIR/verilate_${CONFIG}.log" 2>&1

./obj_dir/VVexRiscv 2>&1 | tee "$LOG"

METRICS="$(score_benchmark_parse_coremark_file "$LOG")"
VER="$(score_benchmark_verilator_version)"
METRICS=$(python3 -c "import json; m=json.loads('''$METRICS'''); m['_verilator']='$VER'; m['simulator']='verilator'; m['vexriscv_config']='$CONFIG'; m['rtl_source']='$vex_file'; print(json.dumps(m))")

OUT="$BENCH_DIR/coremark_${CONFIG}.json"
score_benchmark_write_result "$OUT" vexriscv "$COMMIT" "$PROFILE" coremark "$CONFIG" "$METRICS"
log_success "Wrote $OUT"
