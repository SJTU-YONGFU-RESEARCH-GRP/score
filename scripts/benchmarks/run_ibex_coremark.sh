#!/usr/bin/env bash
# Run EEMBC CoreMark on Ibex Simple System (Verilator) and write score.benchmark_results.v1 JSON.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/benchmarks/common_benchmark.sh
source "$SCRIPT_DIR/common_benchmark.sh"
score_benchmark_setup_path
score_benchmark_activate_ibex_venv

IBEX_DIR="$PROJECT_ROOT/tools/ibex"
PROFILE="${SCORE_BENCHMARK_PROFILE:-mcu_verilator}"
CONFIGS=()

usage() {
    cat <<EOF
Usage: $(basename "$0") [--config NAME]... [--profile mcu_verilator]

Runs CoreMark on Ibex simple system for each config (default: small maxperf).
Requires: ./scripts/install_ibex.sh and ibex venv/fusesoc.

Output: datasets/ibex/<commit>/benchmarks/coremark_<config>.json
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help) usage; exit 0 ;;
        --profile) PROFILE="$2"; shift 2 ;;
        --config) CONFIGS+=("$2"); shift 2 ;;
        *) log_error "unknown argument: $1"; usage; exit 1 ;;
    esac
done

[[ -d "$IBEX_DIR" ]] || { log_error "missing $IBEX_DIR — run install_ibex.sh"; exit 1; }
if [[ ${#CONFIGS[@]} -eq 0 ]]; then
    CONFIGS=(small)
fi

COMMIT="$(score_benchmark_get_commit "$IBEX_DIR")"
DATASET_DIR="$PROJECT_ROOT/datasets/ibex/$COMMIT"
BENCH_DIR="$DATASET_DIR/benchmarks"
mkdir -p "$BENCH_DIR"

score_benchmark_require_cmd python3
score_benchmark_require_cmd verilator
score_benchmark_require_cmd fusesoc

CROSS_PREFIX="$(score_benchmark_riscv_prefix)" || {
    log_error "RISC-V toolchain not found — set SCORE_RISCV_PREFIX"
    exit 1
}
export PATH="$(dirname "${CROSS_PREFIX}gcc"):$PATH"

cd "$IBEX_DIR"

if [[ -f "$IBEX_DIR/venv/bin/activate" ]]; then
    # shellcheck disable=SC1091
    source "$IBEX_DIR/venv/bin/activate"
fi

# Map config -> RV_ISA per upstream benchmarks README
ibex_rv_isa_for_config() {
    case "$1" in
        small|maxperf) echo rv32im ;;
        maxperf-pmp-bmfull|maxperf-pmp-bmfull-icache) echo rv32imcb ;;
        micro) echo rv32imc ;;
        *) echo rv32im ;;
    esac
}

VERILATOR_VER="$(score_benchmark_verilator_version)"
HOST_JSON="$(score_benchmark_host_json)"

for cfg in "${CONFIGS[@]}"; do
    log_info "Ibex CoreMark config=$cfg"
    BUILD_DIR="$IBEX_DIR/build/score_coremark_${cfg}"
    rm -rf "$BUILD_DIR"
    mkdir -p "$BUILD_DIR"

    read -r -a IBEX_FUSESOC_OPTS < <(score_benchmark_filter_ibex_fusesoc_opts "$cfg" "$IBEX_DIR")
    (
        cd "$IBEX_DIR"
        fusesoc --cores-root="$IBEX_DIR" run --target=sim --setup --build \
            --build-root="$BUILD_DIR" \
            lowrisc:ibex:ibex_simple_system \
            "${IBEX_FUSESOC_OPTS[@]}"
    )

    SIM_BIN=$(find "$BUILD_DIR" -name 'Vibex_simple_system' -type f | head -1)
    [[ -n "$SIM_BIN" ]] || { log_error "Verilator binary not found for $cfg"; exit 1; }

  RV_ISA="$(ibex_rv_isa_for_config "$cfg")"
    make -C "$IBEX_DIR/examples/sw/benchmarks/coremark" clean >/dev/null 2>&1 || true
    make -C "$IBEX_DIR/examples/sw/benchmarks/coremark" RV_ISA="$RV_ISA"

    ELF="$IBEX_DIR/examples/sw/benchmarks/coremark/coremark.elf"
    [[ -f "$ELF" ]] || { log_error "coremark.elf not built"; exit 1; }

    LOG="$BENCH_DIR/coremark_${cfg}.log"
    rm -f "$IBEX_DIR/ibex_simple_system.log"
    "$SIM_BIN" --meminit=ram,"$ELF" | tee "$LOG"

    if [[ -f "$IBEX_DIR/ibex_simple_system.log" ]]; then
        LOG="$IBEX_DIR/ibex_simple_system.log"
    fi

    METRICS="$(score_benchmark_parse_coremark_file "$LOG")"
    METRICS=$(python3 - <<PY
import json
m = json.loads('''$METRICS''')
m["_verilator"] = "$VERILATOR_VER"
m["rv_isa"] = "$RV_ISA"
m["ibex_config"] = "$cfg"
print(json.dumps(m))
PY
)

    OUT="$BENCH_DIR/coremark_${cfg}.json"
    score_benchmark_write_result "$OUT" ibex "$COMMIT" "$PROFILE" coremark "$cfg" "$METRICS"
    log_success "Wrote $OUT (CoreMark/MHz=$(python3 -c "import json; print(json.loads('''$METRICS''')['coremark_per_mhz'])"))"
done

{
    echo "Ibex CoreMark benchmark summary (SCORE)"
    echo "Commit: $COMMIT"
    echo "Profile: $PROFILE"
    echo "Configs: ${CONFIGS[*]}"
    echo "Results: $BENCH_DIR"
} > "$BENCH_DIR/benchmark_summary.txt"
