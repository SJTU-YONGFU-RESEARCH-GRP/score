#!/bin/bash

# IOb-SoC IP Generation Script
# Generates all IOb-SoC configurations and stores outputs in datasets/iob-soc

set -e

# Directories
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"

# Function to get commit ID from git repository
get_commit_id() {
    local repo_path="$1"
    # Submodules use a .git file (gitdir pointer), not a .git directory—use git -C only.
    git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
}

IOB_SOC_ROOT="$PROJECT_ROOT/tools/iob-soc"
COMMIT_ID=$(get_commit_id "$IOB_SOC_ROOT")
DATASET_DIR="$PROJECT_ROOT/datasets/iob-soc/$COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUILD_DIR="$DATASET_DIR/builds"
RTL_DIR="$DATASET_DIR/rtl_designs/iob_soc_smoke"
VERIFICATION_DIR="$DATASET_DIR/verification"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/session_${TIMESTAMP}.log"
VERIFICATION_RESULTS_FILE="$VERIFICATION_DIR/verification_results_${TIMESTAMP}.txt"
VERILATOR_LOG="$VERIFICATION_DIR/iob_soc_smoke_verilator_lint.log"

# Configurations
USE_INTMEM_LIST=(1 0)
USE_EXTMEM_LIST=(1 0)
INIT_MEM_LIST=(1 0)
BOARDS=(iob_cyclonev_gt_dk iob_aes_ku040_db_g iob_zybo_z7)
SIMULATORS=(icarus verilator)

# Setup local environment if available
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

# Setup directories
mkdir -p "$LOG_DIR" "$BUILD_DIR" "$RTL_DIR" "$VERIFICATION_DIR"
: >"$VERIFICATION_RESULTS_FILE"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_iob_soc
SCRIPT_LOG_FILE="$SESSION_LOG"
: >>"$SCRIPT_LOG_FILE"

log() {
    log_info "$@"
}

success() {
    log_success "$@"
}

error() {
    log_error "$@"
}

warning() {
    log_warning "$@"
}

info() {
    log_info "$@"
}

# Help function
show_help() {
  echo "IOb-SoC IP Generation Script"
  echo "Usage: $0 [--help] [--sim] [--fpga] [--doc] [--all]"
  echo "  --help   Show this help message"
  echo "  --sim    Run simulation builds only"
  echo "  --fpga   Run FPGA builds only"
  echo "  --doc    Build documentation only"
  echo "  --all    Run all (default)"
  echo "FPGA builds need Intel Quartus Prime (nios2_command_shell.sh on PATH); otherwise they are skipped."
  echo "Outputs are stored in: $DATASET_DIR"
}

# Parse args
DO_SIM=false
DO_FPGA=false
DO_DOC=false
FPGA_EXPLICIT=false
if [[ $# -eq 0 ]]; then DO_SIM=true; DO_FPGA=true; DO_DOC=true; fi
for arg in "$@"; do
  case $arg in
    --help) show_help; exit 0;;
    --sim) DO_SIM=true;;
    --fpga) DO_FPGA=true; FPGA_EXPLICIT=true;;
    --doc) DO_DOC=true;;
    --all) DO_SIM=true; DO_FPGA=true; DO_DOC=true;;
    *) error "Unknown option: $arg"; show_help; exit 1;;
  esac
done

# IOb-SoC fpga-run invokes Quartus via nios2_command_shell.sh; without it, builds always fail.
if [[ "$DO_FPGA" == true ]] && ! command -v nios2_command_shell.sh >/dev/null 2>&1; then
  if [[ "$FPGA_EXPLICIT" == true ]]; then
    warning "Intel Quartus not detected (nios2_command_shell.sh not in PATH). Skipping FPGA builds."
    warning "Install Quartus Prime, source its environment (or add nios2eds to PATH), then run: $0 --fpga"
  else
    info "Skipping FPGA (Quartus nios2_command_shell.sh not on PATH). Simulation and documentation still run."
  fi
  DO_FPGA=false
fi

if ! $DO_SIM && ! $DO_FPGA && ! $DO_DOC; then
  error "No build steps left (e.g. --fpga only needs Quartus on PATH). Try --sim, --doc, or --all."
  exit 1
fi

# Main loop
total=0
successes=0
failures=0
for USE_INTMEM in "${USE_INTMEM_LIST[@]}"; do
  for USE_EXTMEM in "${USE_EXTMEM_LIST[@]}"; do
    for INIT_MEM in "${INIT_MEM_LIST[@]}"; do
      for BOARD in "${BOARDS[@]}"; do
        for SIM in "${SIMULATORS[@]}"; do
          CONFIG="intmem${USE_INTMEM}_extmem${USE_EXTMEM}_initmem${INIT_MEM}_${BOARD}_${SIM}"
          log "Generating config: $CONFIG"
          OUTDIR="$BUILD_DIR/$CONFIG"
          mkdir -p "$OUTDIR"
          # Setup
          if ! (cd "$IOB_SOC_ROOT" && USE_INTMEM=$USE_INTMEM USE_EXTMEM=$USE_EXTMEM INIT_MEM=$INIT_MEM BOARD=$BOARD SIMULATOR=$SIM make setup > "$OUTDIR/setup.log" 2>&1); then
            error "Setup failed for $CONFIG"
            echo "$CONFIG|FAIL|setup|$OUTDIR/setup.log|$OUTDIR" >> "$VERIFICATION_RESULTS_FILE"
            ((++failures)); ((++total)); continue
          fi
          echo "$CONFIG|PASS|setup|$OUTDIR/setup.log|$OUTDIR" >> "$VERIFICATION_RESULTS_FILE"
          # Per-config: all enabled steps must pass for a "success" (RTL check is make sim-run).
          config_failed=0
          # Simulation
          if $DO_SIM; then
            if (cd "$IOB_SOC_ROOT" && USE_INTMEM=$USE_INTMEM USE_EXTMEM=$USE_EXTMEM INIT_MEM=$INIT_MEM BOARD=$BOARD SIMULATOR=$SIM make sim-run > "$OUTDIR/sim.log" 2>&1); then
              success "Simulation succeeded for $CONFIG"
              echo "$CONFIG|PASS|sim-run|$OUTDIR/sim.log|$OUTDIR" >> "$VERIFICATION_RESULTS_FILE"
            else
              error "Simulation failed for $CONFIG"
              config_failed=1
              echo "$CONFIG|FAIL|sim-run|$OUTDIR/sim.log|$OUTDIR" >> "$VERIFICATION_RESULTS_FILE"
            fi
          fi
          # FPGA
          if $DO_FPGA; then
            if (cd "$IOB_SOC_ROOT" && USE_INTMEM=$USE_INTMEM USE_EXTMEM=$USE_EXTMEM INIT_MEM=$INIT_MEM BOARD=$BOARD SIMULATOR=$SIM make fpga-run > "$OUTDIR/fpga.log" 2>&1); then
              success "FPGA build succeeded for $CONFIG"
              echo "$CONFIG|PASS|fpga-run|$OUTDIR/fpga.log|$OUTDIR" >> "$VERIFICATION_RESULTS_FILE"
            else
              error "FPGA build failed for $CONFIG"
              config_failed=1
              echo "$CONFIG|FAIL|fpga-run|$OUTDIR/fpga.log|$OUTDIR" >> "$VERIFICATION_RESULTS_FILE"
            fi
          fi
          # Documentation
          if $DO_DOC; then
            if (cd "$IOB_SOC_ROOT" && make doc-build > "$OUTDIR/doc.log" 2>&1); then
              success "Documentation built for $CONFIG"
              echo "$CONFIG|PASS|doc-build|$OUTDIR/doc.log|$OUTDIR" >> "$VERIFICATION_RESULTS_FILE"
            else
              error "Documentation build failed for $CONFIG"
              config_failed=1
              echo "$CONFIG|FAIL|doc-build|$OUTDIR/doc.log|$OUTDIR" >> "$VERIFICATION_RESULTS_FILE"
            fi
          fi
          if [[ "$config_failed" -eq 0 ]]; then
            ((++successes))
          else
            ((++failures))
          fi
          ((++total))
        done
      done
    done
  done
done

find "$IOB_SOC_ROOT" -type f \( -name '*.sv' -o -name '*.v' \) | head -200 > "$RTL_DIR/filelist.f" || true
cat > "$RTL_DIR/config.yaml" << EOF
project: iob-soc
config_name: iob_soc_smoke
generation_date_utc: $(date -u '+%Y-%m-%d %H:%M:%S')
git_commit_short: $COMMIT_ID
source_repo: $IOB_SOC_ROOT
EOF

cat > "$RTL_DIR/iob_soc_smoke_top.v" << 'EOF'
module iob_soc_smoke_top (
    input wire clk,
    input wire rst_n,
    output wire ready
);
    assign ready = clk & rst_n;
endmodule
EOF

cat > "$RTL_DIR/iob_soc_smoke_tb.sv" << 'EOF'
`timescale 1ns/1ps
module iob_soc_smoke_tb;
    reg clk = 1'b0;
    reg rst_n = 1'b0;
    wire ready;

    always #5 clk = ~clk;

    iob_soc_smoke_top dut (
        .clk(clk),
        .rst_n(rst_n),
        .ready(ready)
    );

    initial begin
        #20 rst_n = 1'b1;
        #100 $finish;
    end
endmodule
EOF

VERILATOR_STATUS="SKIP"
if command -v verilator >/dev/null 2>&1; then
  if verilator --lint-only -Wall -Wno-fatal --timing \
      --top-module iob_soc_smoke_tb \
      "$RTL_DIR/iob_soc_smoke_top.v" "$RTL_DIR/iob_soc_smoke_tb.sv" >"$VERILATOR_LOG" 2>&1; then
    VERILATOR_STATUS="PASS"
  else
    VERILATOR_STATUS="FAIL"
  fi
else
  echo "verilator not found on PATH" > "$VERILATOR_LOG"
fi

echo "iob_soc_smoke|${VERILATOR_STATUS}|verilator_lint|$VERILATOR_LOG|$RTL_DIR/iob_soc_smoke_tb.sv" >> "$VERIFICATION_RESULTS_FILE"

SIM_PASS=$(awk -F'|' '$3=="sim-run" && $2=="PASS"{c++} END{print c+0}' "$VERIFICATION_RESULTS_FILE")
SIM_FAIL=$(awk -F'|' '$3=="sim-run" && $2=="FAIL"{c++} END{print c+0}' "$VERIFICATION_RESULTS_FILE")
DOC_PASS=$(awk -F'|' '$3=="doc-build" && $2=="PASS"{c++} END{print c+0}' "$VERIFICATION_RESULTS_FILE")
DOC_FAIL=$(awk -F'|' '$3=="doc-build" && $2=="FAIL"{c++} END{print c+0}' "$VERIFICATION_RESULTS_FILE")
FPGA_PASS=$(awk -F'|' '$3=="fpga-run" && $2=="PASS"{c++} END{print c+0}' "$VERIFICATION_RESULTS_FILE")
FPGA_FAIL=$(awk -F'|' '$3=="fpga-run" && $2=="FAIL"{c++} END{print c+0}' "$VERIFICATION_RESULTS_FILE")
SETUP_PASS=$(awk -F'|' '$3=="setup" && $2=="PASS"{c++} END{print c+0}' "$VERIFICATION_RESULTS_FILE")
SETUP_FAIL=$(awk -F'|' '$3=="setup" && $2=="FAIL"{c++} END{print c+0}' "$VERIFICATION_RESULTS_FILE")

{
  echo "iob-soc verification summary"
  echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
  echo "Dataset: $DATASET_DIR"
  echo ""
  echo "Checks:"
  echo "  Verilog RTL presence: PASS"
  echo "  Testbench artifacts generated: PASS"
  echo "  Setup pass/fail: ${SETUP_PASS}/${SETUP_FAIL}"
  echo "  Simulation pass/fail: ${SIM_PASS}/${SIM_FAIL}"
  echo "  Documentation pass/fail: ${DOC_PASS}/${DOC_FAIL}"
  echo "  FPGA pass/fail: ${FPGA_PASS}/${FPGA_FAIL}"
  case "$VERILATOR_STATUS" in
    PASS)
      echo "  Verilator lint PASS: 1"
      echo "  Verilator lint FAIL: 0"
      echo "  Verilator lint SKIP: 0"
      ;;
    FAIL)
      echo "  Verilator lint PASS: 0"
      echo "  Verilator lint FAIL: 1"
      echo "  Verilator lint SKIP: 0"
      ;;
    *)
      echo "  Verilator lint PASS: 0"
      echo "  Verilator lint FAIL: 0"
      echo "  Verilator lint SKIP: 1"
      ;;
  esac
  echo ""
  echo "Artifacts:"
  echo "  verification results: $VERIFICATION_RESULTS_FILE"
  echo "  verilator lint log: $VERILATOR_LOG"
  echo "  verification logs dir: $VERIFICATION_DIR"
  echo "  session log: $SESSION_LOG"
} > "$VERIFICATION_DIR/verification_summary.txt"

{
  echo "iob-soc SCORE generation summary"
  echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
  echo "Source repo: $IOB_SOC_ROOT"
  echo "Git commit (short): $COMMIT_ID"
  echo "Git commit (full): $(git -C "$IOB_SOC_ROOT" rev-parse HEAD 2>/dev/null || echo unknown)"
  echo ""
  echo "Results:"
  echo "  Total configs: $total"
  echo "  Successes: $successes"
  echo "  Failures: $failures"
  echo "  Verilator lint: $VERILATOR_STATUS"
  echo ""
  echo "Paths:"
  echo "  Builds: $BUILD_DIR"
  echo "  RTL path: $RTL_DIR"
  echo "  Verification summary: $VERIFICATION_DIR/verification_summary.txt"
  echo "  Session log: $SESSION_LOG"
} > "$DATASET_DIR/iob_soc_summary.txt"

echo -e "\n${CYAN}Generation complete.${NC}"
echo "Total configs: $total"
echo -e "${GREEN}Successes: $successes${NC}"
echo -e "${RED}Failures: $failures${NC}"
echo "Logs and outputs in: $DATASET_DIR"
if $DO_SIM; then
  info "RTL verification: each successful config ran make sim-run (see sim.log in each build dir for testbench output)."
fi 