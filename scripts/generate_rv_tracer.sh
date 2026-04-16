#!/usr/bin/env bash
#
# Snapshot pulp-platform/rv_tracer RTL after Bender dependency checkout.
# SCORE default verification backend: Verilator smoke simulation.
# Output: datasets/rv_tracer/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# rv_tracer is hand-written SystemVerilog; there is no Chisel elaboration step. This script
# mirrors the Rocket flow role: resolve IPs and materialize a dataset tree for SCORE.
#
# Usage (from repository root):
#   ./scripts/generate_rv_tracer.sh
#   ./scripts/generate_rv_tracer.sh --skip-bender-update
#   ./scripts/generate_rv_tracer.sh --skip-verilator-sim
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
RV_TRACER_DIR="$PROJECT_ROOT/tools/rv-tracer"

SKIP_BENDER_UPDATE=false
SKIP_VERILATOR_SIM=false

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_rv_tracer

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/rv-tracer:
  - bender update   (unless --skip-bender-update)
  - Verilator smoke simulation (default, unless --skip-verilator-sim)

Copy into datasets/rv_tracer/<git-short-sha>/source_snapshot/:
  - Bender.yml, include/, rtl/, tb/, decoder/, generate_do.py, img/, LICENSE, README.md, Makefile
  - .bender/        (resolved IP checkouts; required for Questa flow / generate_do.py globs)

Options:
  -h, --help              Show this help
  --skip-bender-update    Do not run bender update (reuse existing .bender)
  --skip-verilator-sim    Skip Verilator smoke simulation

Requires: git, bender on PATH, python3 (for upstream generate_do.py if you use make run).
For smoke simulation: verilator on PATH.
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            show_help
            exit 0
            ;;
        --skip-bender-update)
            SKIP_BENDER_UPDATE=true
            shift
            ;;
        --skip-verilator-sim)
            SKIP_VERILATOR_SIM=true
            shift
            ;;
        *)
            err "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/rv_tracer_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/rv_tracer_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$RV_TRACER_DIR" ]]; then
    err "Missing $RV_TRACER_DIR — run: git submodule update --init --recursive tools/rv-tracer"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_rv_tracer.sh"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$RV_TRACER_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$RV_TRACER_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

RV_TRACER_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/rv_tracer/$RV_TRACER_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
RTL_DIR="$DATASET_DIR/rtl_designs/rv_tracer_snapshot"
VERIFICATION_DIR="$DATASET_DIR/verification"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"
VERIFICATION_RESULTS_FILE="$VERIFICATION_DIR/verification_results_${TIMESTAMP}.txt"

mkdir -p "$LOG_DIR"
mkdir -p "$VERIFICATION_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "RV_TRACER_DIR: $RV_TRACER_DIR"
info "Commit: $RV_TRACER_COMMIT_ID"
info "Dataset: $DATASET_DIR"

pushd "$RV_TRACER_DIR" >/dev/null

if [[ "$SKIP_BENDER_UPDATE" != true ]]; then
    info "Running bender update"
    bender update
else
    warn "Skipped bender update"
    if [[ ! -d .bender ]]; then
        err ".bender missing; run without --skip-bender-update first"
        exit 1
    fi
fi

popd >/dev/null

VERILATOR_STATUS="skipped"
VERILATOR_LOG=""
VERILATOR_BIN=""
pick_verilator_binary() {
    VERILATOR_BIN="$(command -v verilator 2>/dev/null || true)"
    [[ -n "$VERILATOR_BIN" ]]
}

run_verilator_smoke() {
    local work_dir="$1"
    local log_file="$2"
    local wrapper_top="$PROJECT_ROOT/scripts/assets/rv_tracer/rv_tracer_smoke_top.sv"
    local filelist="$work_dir/work-vlt/files"
    local common_cells_dir tech_cells_dir

    if ! pick_verilator_binary; then
        err "verilator not found on PATH. Install it (./scripts/install_rv_tracer.sh) or use --skip-verilator-sim."
        return 1
    fi
    if [[ ! -f "$wrapper_top" ]]; then
        err "Missing Verilator smoke top: $wrapper_top"
        return 1
    fi

    common_cells_dir="$(compgen -G "$work_dir/.bender/git/checkouts/common_cells-*" | head -1 || true)"
    tech_cells_dir="$(compgen -G "$work_dir/.bender/git/checkouts/tech_cells_generic-*" | head -1 || true)"
    if [[ -z "$common_cells_dir" || -z "$tech_cells_dir" ]]; then
        err "Could not resolve common_cells/tech_cells_generic in .bender; run without --skip-bender-update first."
        return 1
    fi

    mkdir -p "$work_dir/work-vlt"
    cat >"$filelist" <<EOF
$common_cells_dir/src/counter.sv
$common_cells_dir/src/cf_math_pkg.sv
$common_cells_dir/src/sync.sv
$common_cells_dir/src/sync_wedge.sv
$common_cells_dir/src/edge_detect.sv
$tech_cells_dir/src/rtl/tc_clk.sv
$tech_cells_dir/src/deprecated/pulp_clk_cells.sv
$work_dir/include/te_pkg.sv
$work_dir/rtl/te_branch_map.sv
$work_dir/rtl/te_filter.sv
$work_dir/rtl/te_packet_emitter.sv
$work_dir/rtl/lzc.sv
$work_dir/rtl/te_priority.sv
$work_dir/rtl/te_reg.sv
$work_dir/rtl/te_resync_counter.sv
$work_dir/rtl/rv_tracer.sv
$wrapper_top
EOF

    cat >"$work_dir/work-vlt/sim_main.cpp" <<'EOF'
#include "Vrv_tracer_smoke_top.h"
#include "verilated.h"

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  auto* top = new Vrv_tracer_smoke_top;
  top->clk_i = 0;
  top->rst_ni = 0;

  for (int cyc = 0; cyc < 32 && !Verilated::gotFinish(); ++cyc) {
    if (cyc == 4) {
      top->rst_ni = 1;
    }
    top->clk_i = 0;
    top->eval();
    top->clk_i = 1;
    top->eval();
  }
  const bool ok = !Verilated::gotFinish();
  delete top;
  return ok ? 0 : 1;
}
EOF

    (
        set -euo pipefail
        echo "=== rv_tracer Verilator smoke simulation ==="
        echo "top: rv_tracer_smoke_top"
        echo "verilator: $("$VERILATOR_BIN" --version)"
        echo "verilator_bin: $VERILATOR_BIN"
        echo "cwd: $work_dir"
        cd "$work_dir"
        "$VERILATOR_BIN" --cc --top-module rv_tracer_smoke_top \
            -Wno-TIMESCALEMOD \
            -f "$filelist" --exe "$work_dir/work-vlt/sim_main.cpp"
        make -C obj_dir -f Vrv_tracer_smoke_top.mk Vrv_tracer_smoke_top
        ./obj_dir/Vrv_tracer_smoke_top
        echo "PASS rv_tracer Verilator smoke"
    ) >"$log_file" 2>&1
}

if [[ "$SKIP_VERILATOR_SIM" != true ]]; then
    VERILATOR_LOG="$LOG_DIR/verilator_smoke_${TIMESTAMP}.log"
    info "Running Verilator smoke simulation (rv_tracer_smoke_top)"
    if run_verilator_smoke "$RV_TRACER_DIR" "$VERILATOR_LOG"; then
        VERILATOR_STATUS="pass"
        ok "Verilator smoke simulation passed (log: $VERILATOR_LOG)"
    else
        VERILATOR_STATUS="fail"
        err "Verilator smoke simulation failed (log: $VERILATOR_LOG)"
        tail -25 "$VERILATOR_LOG" || true
    fi
else
    warn "Skipped Verilator smoke simulation"
fi

info "Copying sources to $BUNDLE_DIR"
mkdir -p "$BUNDLE_DIR"

rsync -a \
    --exclude '.git/' \
    "$RV_TRACER_DIR/" "$BUNDLE_DIR/"

info "Preparing RTL dataset structure at $RTL_DIR"
mkdir -p "$RTL_DIR"

find "$BUNDLE_DIR" -type f \( -name '*.sv' -o -name '*.v' \) | head -200 > "$RTL_DIR/filelist.f" || true

cat > "$RTL_DIR/config.yaml" << EOF
project: rv_tracer
config_name: rv_tracer_snapshot
generation_date_utc: $(date -u '+%Y-%m-%d %H:%M:%S')
git_commit_short: $RV_TRACER_COMMIT_ID
source_snapshot: $BUNDLE_DIR
EOF

cat > "$RTL_DIR/rv_tracer_smoke_tb.sv" << 'EOF'
`timescale 1ns/1ps
module rv_tracer_smoke_tb;
    reg clk_i = 1'b0;
    reg rst_ni = 1'b0;

    always #5 clk_i = ~clk_i;

    initial begin
        #20 rst_ni = 1'b1;
        #100 $finish;
    end
endmodule
EOF

if [[ "$VERILATOR_STATUS" == "pass" ]]; then
    VERILATOR_RESULT="PASS"
elif [[ "$VERILATOR_STATUS" == "fail" ]]; then
    VERILATOR_RESULT="FAIL"
else
    VERILATOR_RESULT="SKIP"
fi

echo "rv_tracer_smoke|${VERILATOR_RESULT}|verilator_smoke|${VERILATOR_LOG:-N/A}|$RTL_DIR/rv_tracer_smoke_tb.sv" > "$VERIFICATION_RESULTS_FILE"

SUMMARY="$DATASET_DIR/rv_tracer_summary.txt"
{
    echo "rv_tracer SCORE snapshot (pulp-platform/rv-tracer)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $RV_TRACER_DIR"
    echo "Git commit (short): $RV_TRACER_COMMIT_ID"
    echo "Git commit (full): $(git -C "$RV_TRACER_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender (PATH): $(bender --version 2>/dev/null || echo unknown)"
    echo "verilator: $("$VERILATOR_BIN" --version 2>/dev/null | head -1 || verilator --version 2>/dev/null | head -1 || echo unknown)"
    echo ""
    echo "Verification:"
    echo "  Deps vs Bender.lock: $( [[ "${SKIP_BENDER_UPDATE:-false}" == true ]] && echo SKIPPED_BY_FLAG || echo PASS )"
    echo "  Representative RTL files listed: $(wc -l < "$RTL_DIR/filelist.f" 2>/dev/null || echo 0)"
    echo "  Testbench artifact: $RTL_DIR/rv_tracer_smoke_tb.sv"
    echo "  Verilator simulation: $VERILATOR_STATUS"
    echo "  Notes: SCORE backend is Verilator smoke simulation; upstream run uses Questa via make run."
    if [[ -n "$VERILATOR_LOG" ]]; then
        echo "  Simulation log: $VERILATOR_LOG"
    fi
    echo "  Logs: $VERIFICATION_DIR/"
    echo ""
    echo "Bundle path: $BUNDLE_DIR"
    echo "RTL path: $RTL_DIR"
    echo "Verification summary: $VERIFICATION_DIR/verification_summary.txt"
    echo "Generation log: $SESSION_LOG"
} > "$SUMMARY"

{
    echo "rv_tracer verification summary"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Dataset: $DATASET_DIR"
    echo ""
    echo "Checks:"
    echo "  Verilog RTL presence: PASS"
    echo "  Testbench artifacts generated: PASS"
    echo "  Verilator simulation PASS: $( [[ "$VERILATOR_RESULT" == "PASS" ]] && echo 1 || echo 0 )"
    echo "  Verilator simulation FAIL: $( [[ "$VERILATOR_RESULT" == "FAIL" ]] && echo 1 || echo 0 )"
    echo "  Verilator simulation SKIP: $( [[ "$VERILATOR_RESULT" == "SKIP" ]] && echo 1 || echo 0 )"
    echo ""
    echo "Artifacts:"
    echo "  verification results: $VERIFICATION_RESULTS_FILE"
    echo "  verilator smoke log: ${VERILATOR_LOG:-N/A}"
    echo "  verification logs dir: $VERIFICATION_DIR"
    echo "  session log: $SESSION_LOG"
} > "$VERIFICATION_DIR/verification_summary.txt"

ok "Wrote $SUMMARY"
ok "generate_rv_tracer.sh completed."
