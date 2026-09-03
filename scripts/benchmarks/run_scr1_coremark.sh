#!/usr/bin/env bash
# Build SCR1 CoreMark and run the Verilator AHB MAX testbench; write score.benchmark_results.v1 JSON.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/benchmarks/common_benchmark.sh
source "$SCRIPT_DIR/common_benchmark.sh"
score_benchmark_setup_path

SCR1_DIR="$PROJECT_ROOT/tools/scr1"
PROFILE="${SCORE_BENCHMARK_PROFILE:-mcu_verilator}"
CONFIG="${SCORE_BENCHMARK_CONFIG:-MAX}"
BUS="${SCORE_SCR1_BUS:-AHB}"
ITERATIONS="${SCORE_COREMARK_ITERATIONS:-1}"
CROSS_PREFIX="$(score_benchmark_riscv_prefix)" || {
    log_error "RISC-V toolchain not found — set SCORE_RISCV_PREFIX"
    exit 1
}

usage() {
    cat <<EOF
Usage: $(basename "$0")

Runs Syntacore SCR1 upstream CoreMark on the Verilator AHB testbench (CFG=MAX).
Requires: install_scr1.sh, Verilator, ${CROSS_PREFIX}gcc, tools/scr1/dependencies/coremark.

Output: datasets/scr1/<commit>/benchmarks/coremark_${CONFIG}.json
EOF
}

[[ "${1:-}" == "-h" || "${1:-}" == "--help" ]] && { usage; exit 0; }

[[ -d "$SCR1_DIR/src" ]] || { log_error "missing $SCR1_DIR — run install_scr1.sh"; exit 1; }
[[ -f "$SCR1_DIR/dependencies/coremark/coremark.h" ]] || {
    log_error "missing SCR1 CoreMark submodule at $SCR1_DIR/dependencies/coremark"
    exit 1
}
score_benchmark_require_cmd python3
score_benchmark_require_cmd verilator
score_benchmark_require_cmd "${CROSS_PREFIX}gcc"

COMMIT="$(score_benchmark_get_commit "$SCR1_DIR")"
BENCH_DIR="$PROJECT_ROOT/datasets/scr1/$COMMIT/benchmarks"
mkdir -p "$BENCH_DIR"
LOG="$BENCH_DIR/coremark_${CONFIG}.log"

export CFG="$CONFIG"
export BUS
export TRACE=0
export CROSS_PREFIX
export RISCV_GCC="${CROSS_PREFIX}gcc"
export RISCV_OBJDUMP="${CROSS_PREFIX}objdump -D"
export RISCV_OBJCOPY="${CROSS_PREFIX}objcopy -O verilog"
export RISCV_READELF="${CROSS_PREFIX}readelf -s"
export ITERATIONS
export ARCH=imc
export ABI=ilp32
export VECT_IRQ=1
export IPIC=1
export TCM=1
export SIM_CFG_DEF=SCR1_CFG_RV32IMC_MAX
export SIM_TRACE_DEF=SCR1_TRACE_LOG_DIS
# Do not inherit leftover ADD_FLAGS (e.g. -flto) from the environment.
export ADD_FLAGS=""
export root_dir="$SCR1_DIR"
export tst_dir="$SCR1_DIR/sim/tests"
export inc_dir="$SCR1_DIR/sim/tests/common"
export rtl_top_files=ahb_top.files
export rtl_tb_files=ahb_tb.files
export top_module=scr1_top_tb_ahb

# Match tools/scr1/Makefile bld_dir for run_verilator + AHB + MAX + IMC.
BLD_DIR="$SCR1_DIR/build/verilator_${BUS}_${CONFIG}_imc_IPIC_1_TCM_1_VIRQ_1_TRACE_0"
export bld_dir="$BLD_DIR"
mkdir -p "$BLD_DIR"

log_info "Building SCR1 CoreMark firmware (CFG=$CONFIG BUS=$BUS ITERATIONS=$ITERATIONS)"
SCR1_MARCH="rv32${ARCH}_zicsr_zifencei"
if ! echo 'int x;' | "${RISCV_GCC}" -march="$SCR1_MARCH" -mabi="$ABI" -c -xc - -o /dev/null 2>/dev/null; then
    SCR1_MARCH="rv32${ARCH}_zicsr"
    log_info "Toolchain has no zifencei; using -march=$SCR1_MARCH"
fi
SCR1_LDFLAGS="-nostartfiles -nostdlib -lc -lgcc -march=${SCR1_MARCH} -mabi=${ABI} -flto"
if echo 'int main(void){return 0;}' | "${RISCV_GCC}" -nostartfiles -nostdlib --specs=nano.specs -lc -lgcc -march="$SCR1_MARCH" -mabi="$ABI" -o /dev/null -xc - 2>/dev/null; then
    SCR1_LDFLAGS="-nostartfiles -nostdlib -lc -lgcc -march=${SCR1_MARCH} -mabi=${ABI} --specs=nano.specs -flto"
else
    log_info "Toolchain has no newlib-nano; linking without --specs=nano.specs"
    SCR1_LDFLAGS="-nostartfiles -nostdlib -lc -lgcc -march=${SCR1_MARCH} -mabi=${ABI} -flto"
fi
make -C "$SCR1_DIR/sim/tests/benchmarks/coremark" \
    EXT_CFLAGS="" ARCH="$ARCH" ITERATIONS="$ITERATIONS" \
    CFLAGS_ARCH="-Wa,-march=${SCR1_MARCH} -march=${SCR1_MARCH} -mabi=${ABI}" \
    LDFLAGS="$SCR1_LDFLAGS"

[[ -f "$BLD_DIR/coremark.hex" ]] || { log_error "coremark.hex not produced in $BLD_DIR"; exit 1; }
printf 'coremark.hex\n' > "$BLD_DIR/test_info"

log_info "Building/running SCR1 Verilator testbench"
SIM_BIN="$BLD_DIR/verilator/V${top_module}"
if [[ ! -x "$SIM_BIN" ]]; then
    make -C "$SCR1_DIR/sim" build_verilator \
        SIM_CFG_DEF="$SIM_CFG_DEF" SIM_TRACE_DEF="$SIM_TRACE_DEF"
fi
[[ -x "$SIM_BIN" ]] || { log_error "missing $SIM_BIN"; exit 1; }

: > "$BLD_DIR/test_results.txt"
(
    cd "$BLD_DIR"
    "$SIM_BIN" \
        +test_info="$BLD_DIR/test_info" \
        +test_results="$BLD_DIR/test_results.txt" \
        +imem_pattern=FFFFFFFF \
        +dmem_pattern=FFFFFFFF
) 2>&1 | tee "$LOG"

if [[ -s "$BLD_DIR/sim_results.txt" ]]; then
    cat "$BLD_DIR/sim_results.txt" >> "$LOG"
fi
if [[ -s "$BLD_DIR/test_results.txt" ]]; then
    cat "$BLD_DIR/test_results.txt" >> "$LOG"
fi

METRICS="$(score_benchmark_parse_coremark_file "$LOG")"
VER="$(score_benchmark_verilator_version)"
METRICS=$(python3 -c "import json; m=json.loads('''$METRICS'''); m['_verilator']='$VER'; m['simulator']='verilator'; m['scr1_cfg']='$CONFIG'; m['scr1_bus']='$BUS'; m['iterations_config']=$ITERATIONS; m['timing']='rdcycle'; print(json.dumps(m))")

OUT="$BENCH_DIR/coremark_${CONFIG}.json"
score_benchmark_write_result "$OUT" scr1 "$COMMIT" "$PROFILE" coremark "$CONFIG" "$METRICS"
log_success "Wrote $OUT"
