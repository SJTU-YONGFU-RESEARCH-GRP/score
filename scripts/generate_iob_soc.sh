#!/bin/bash

# IOb-SoC IP Generation Script
# Generates all IOb-SoC configurations and stores outputs in datasets/iob-soc

set -e

# Color codes
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
CYAN='\033[0;36m'
NC='\033[0m'

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
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/session_${TIMESTAMP}.log"

# Configurations
USE_INTMEM_LIST=(1 0)
USE_EXTMEM_LIST=(1 0)
INIT_MEM_LIST=(1 0)
BOARDS=(iob_cyclonev_gt_dk iob_aes_ku040_db_g iob_zybo_z7)
SIMULATORS=(icarus verilator)

# Logging functions
log() { echo -e "${BLUE}[$(date +'%F %T')]${NC} $1" | tee -a "$SESSION_LOG"; }
success() { echo -e "${GREEN}[SUCCESS]${NC} $1" | tee -a "$SESSION_LOG"; }
error() { echo -e "${RED}[ERROR]${NC} $1" | tee -a "$SESSION_LOG" >&2; }
warning() { echo -e "${YELLOW}[WARNING]${NC} $1" | tee -a "$SESSION_LOG"; }
info() { echo -e "${CYAN}[INFO]${NC} $1" | tee -a "$SESSION_LOG"; }

# Setup local environment if available
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

# Setup directories
mkdir -p "$LOG_DIR" "$BUILD_DIR"

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
            ((++failures)); ((++total)); continue
          fi
          # Per-config: all enabled steps must pass for a "success" (RTL check is make sim-run).
          config_failed=0
          # Simulation
          if $DO_SIM; then
            if (cd "$IOB_SOC_ROOT" && USE_INTMEM=$USE_INTMEM USE_EXTMEM=$USE_EXTMEM INIT_MEM=$INIT_MEM BOARD=$BOARD SIMULATOR=$SIM make sim-run > "$OUTDIR/sim.log" 2>&1); then
              success "Simulation succeeded for $CONFIG"
            else
              error "Simulation failed for $CONFIG"
              config_failed=1
            fi
          fi
          # FPGA
          if $DO_FPGA; then
            if (cd "$IOB_SOC_ROOT" && USE_INTMEM=$USE_INTMEM USE_EXTMEM=$USE_EXTMEM INIT_MEM=$INIT_MEM BOARD=$BOARD SIMULATOR=$SIM make fpga-run > "$OUTDIR/fpga.log" 2>&1); then
              success "FPGA build succeeded for $CONFIG"
            else
              error "FPGA build failed for $CONFIG"
              config_failed=1
            fi
          fi
          # Documentation
          if $DO_DOC; then
            if (cd "$IOB_SOC_ROOT" && make doc-build > "$OUTDIR/doc.log" 2>&1); then
              success "Documentation built for $CONFIG"
            else
              error "Documentation build failed for $CONFIG"
              config_failed=1
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

echo -e "\n${CYAN}Generation complete.${NC}"
echo "Total configs: $total"
echo -e "${GREEN}Successes: $successes${NC}"
echo -e "${RED}Failures: $failures${NC}"
echo "Logs and outputs in: $DATASET_DIR"
if $DO_SIM; then
  info "RTL verification: each successful config ran make sim-run (see sim.log in each build dir for testbench output)."
fi 