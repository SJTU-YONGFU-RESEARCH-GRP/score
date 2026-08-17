#!/usr/bin/env bash
# SCORE generate for syntacore/scr1.
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/scr1"
NAME="scr1"
PROJECT="syntacore/scr1"
source "$SCRIPT_DIR/common_logging.sh"
source "$SCRIPT_DIR/common_simple_rtl.sh"
COMMIT_ID="$(score_simple_get_commit "$TOOL_DIR")"
DATASET_DIR="$PROJECT_ROOT/datasets/$NAME/$COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
VER_DIR="$DATASET_DIR/verification"
TIMESTAMP="$(date +"%Y%m%d_%H%M%S")"
mkdir -p "$LOG_DIR" "$VER_DIR"
init_script_logging_files generate_scr1 "$LOG_DIR/main.log" "$LOG_DIR/session_${TIMESTAMP}.log"
[[ -d "$TOOL_DIR/src" ]] || { log_error "Missing $TOOL_DIR/src — run install_scr1.sh"; exit 1; }
log_info "Snapshotting $PROJECT @ $COMMIT_ID"
score_simple_snapshot_rtl "$TOOL_DIR" "$DATASET_DIR" "$NAME"
score_simple_write_manifest "$DATASET_DIR" "$PROJECT" "$NAME" "$COMMIT_ID"
mapfile -t rtl_files < <(find "$TOOL_DIR/src" -type f \( -name '*.sv' -o -name '*.v' -o -name '*.svh' \) | sort)
[[ ${#rtl_files[@]} -gt 0 ]] || { log_error "No SystemVerilog/Verilog under src/"; exit 1; }

SCORE_SIMPLE_LINT_LOG="$VER_DIR/verilator_lint_src.log"
mapfile -t flists < <(find "$TOOL_DIR/sim" -name '*.f' -type f 2>/dev/null | sort)
if [[ ${#flists[@]} -gt 0 ]]; then
    score_simple_verilator_lint "$TOOL_DIR" -Isrc -Isrc/includes -f "${flists[0]#"$TOOL_DIR"/}" || true
else
    log_warning "No sim/*.f filelist found; skipping Verilator lint (snapshot still written)"
    SCORE_SIMPLE_LINT_RESULT="SKIPPED"
fi
{
    echo "scr1 SCORE snapshot ($PROJECT)"
    echo "Commit: $COMMIT_ID"
    echo "Dataset: $DATASET_DIR"
    echo "Lint: $SCORE_SIMPLE_LINT_RESULT"
    echo "SV/V files: ${#rtl_files[@]}"
} > "$DATASET_DIR/scr1_summary.txt"
log_success "scr1 generate done → $DATASET_DIR"
[[ "$SCORE_SIMPLE_LINT_RESULT" != "FAIL" ]]
