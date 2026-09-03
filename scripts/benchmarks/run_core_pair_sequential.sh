#!/usr/bin/env bash
# Run SERV then NEORV32 CoreMark benchmarks one at a time (avoid OOM / pkill races).
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/benchmarks/common_benchmark.sh
source "$SCRIPT_DIR/common_benchmark.sh"
score_benchmark_setup_path

stop_sims() {
    pkill -9 -f './Vservant_sim' 2>/dev/null || true
    pkill -9 -f './neorv32_tb' 2>/dev/null || true
    pkill -9 -f 'run_neorv32_coremark|run_serv_coremark' 2>/dev/null || true
    rm -rf "$PROJECT_ROOT/tools/neorv32/sim/.ghdl_build.lock.d" 2>/dev/null || true
    sleep 2
}

serv_go_test() {
    local hex="$PROJECT_ROOT/benchmarks/core/serv_coremark/go_halt.hex"
    local sig="/tmp/serv_go_test.signature"
    local sim
    sim="$(find "$PROJECT_ROOT/tools/serv/build" -name Vservant_sim -type f 2>/dev/null | head -1)"
    [[ -x "$sim" ]] || return 1
    rm -f "$sig"
    "$sim" "+firmware=$hex" "+signature=$sig" "+timeout=10000000000" 2>&1 | tail -5 || true
    [[ -s "$sig" ]] && grep -q go "$sig"
}

log_info "Stopping any stale benchmark simulators"
stop_sims

export SCORE_COREMARK_ITERATIONS=1

log_info "SERV go-test (go_halt firmware)"
make -C "$PROJECT_ROOT/benchmarks/core/serv_coremark" \
    ITERATIONS=1 TOOLCHAIN_PREFIX="$(score_benchmark_riscv_prefix)" go-test-hex
if serv_go_test; then
    log_success "SERV go-test passed"
    log_info "Starting full SERV CoreMark (background log: datasets/serv_run.log)"
    "$SCRIPT_DIR/run_serv_coremark.sh" 2>&1 | tee "$PROJECT_ROOT/datasets/serv_run.log" &
    SERV_PID=$!
else
    log_error "SERV go-test failed — fix SERV boot before full run"
    SERV_PID=
fi

log_info "NEORV32 CoreMark (sequential, SCORE_NEORV32_SIM_STOP=${SCORE_NEORV32_SIM_STOP:-20ms})"
# shellcheck source=scripts/neorv32_env.sh
source "$PROJECT_ROOT/scripts/neorv32_env.sh" >/dev/null 2>&1 || true
SCORE_NEORV32_SIM_STOP="${SCORE_NEORV32_SIM_STOP:-20ms}" \
    "$SCRIPT_DIR/run_neorv32_coremark.sh" 2>&1 | tee "$PROJECT_ROOT/datasets/neorv32_run.log"

if [[ -n "${SERV_PID:-}" ]]; then
    log_info "Waiting for SERV benchmark (pid $SERV_PID)"
    wait "$SERV_PID" || log_error "SERV benchmark exited non-zero"
fi

python3 "$SCRIPT_DIR/collect_core_benchmark_results.py"
log_success "Done — check benchmarks/core/aggregated_results.json"
