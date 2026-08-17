#!/usr/bin/env bash
# SCORE generate for Wren6991/Hazard3.
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/hazard3"
NAME="hazard3"
PROJECT="Wren6991/Hazard3"
source "$SCRIPT_DIR/common_logging.sh"
source "$SCRIPT_DIR/common_simple_rtl.sh"
COMMIT_ID="$(score_simple_get_commit "$TOOL_DIR")"
DATASET_DIR="$PROJECT_ROOT/datasets/$NAME/$COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
VER_DIR="$DATASET_DIR/verification"
TIMESTAMP="$(date +"%Y%m%d_%H%M%S")"
mkdir -p "$LOG_DIR" "$VER_DIR"
init_script_logging_files generate_hazard3 "$LOG_DIR/main.log" "$LOG_DIR/session_${TIMESTAMP}.log"
[[ -d "$TOOL_DIR/hdl" ]] || { log_error "Missing $TOOL_DIR/hdl — run install_hazard3.sh"; exit 1; }
log_info "Snapshotting $PROJECT @ $COMMIT_ID"
score_simple_snapshot_rtl "$TOOL_DIR" "$DATASET_DIR" "$NAME"
score_simple_write_manifest "$DATASET_DIR" "$PROJECT" "$NAME" "$COMMIT_ID"
mapfile -t rtl_files < <(find "$TOOL_DIR/hdl" -type f \( -name '*.v' -o -name '*.sv' -o -name '*.vh' \) | sort)
SCORE_SIMPLE_LINT_LOG="$VER_DIR/verilator_lint_hdl.log"
rel_args=()
inc_args=(-Ihdl)
for f in "${rtl_files[@]}"; do
    rel_args+=("${f#"$TOOL_DIR"/}")
done
# Prefer core wrapper tops; fall back to linting all hdl sources.
if [[ -f "$TOOL_DIR/hdl/hazard3_core.v" ]]; then
    mapfile -t core_deps < <(find "$TOOL_DIR/hdl" -type f -name '*.v' ! -path '*/debug/*' | sort)
    rel_core=()
    for f in "${core_deps[@]}"; do
        rel_core+=("${f#"$TOOL_DIR"/}")
    done
    score_simple_verilator_lint "$TOOL_DIR" -Ihdl -Ihdl/arith "${rel_core[@]}" || true
elif [[ ${#rel_args[@]} -gt 0 ]]; then
    score_simple_verilator_lint "$TOOL_DIR" "${inc_args[@]}" "${rel_args[@]}" || true
else
    log_error "No Verilog sources under hdl/"
    SCORE_SIMPLE_LINT_RESULT="FAIL"
fi
{
    echo "hazard3 SCORE snapshot ($PROJECT)"
    echo "Commit: $COMMIT_ID"
    echo "Dataset: $DATASET_DIR"
    echo "Lint: $SCORE_SIMPLE_LINT_RESULT"
    echo "HDL files: ${#rtl_files[@]}"
} > "$DATASET_DIR/hazard3_summary.txt"
log_success "hazard3 generate done → $DATASET_DIR"
[[ "$SCORE_SIMPLE_LINT_RESULT" != "FAIL" ]]
