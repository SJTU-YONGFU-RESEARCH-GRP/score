#!/usr/bin/env bash
# SCORE generate for olofk/serv.
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/serv"
NAME="serv"
PROJECT="olofk/serv"
source "$SCRIPT_DIR/common_logging.sh"
source "$SCRIPT_DIR/common_simple_rtl.sh"
COMMIT_ID="$(score_simple_get_commit "$TOOL_DIR")"
DATASET_DIR="$PROJECT_ROOT/datasets/$NAME/$COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
VER_DIR="$DATASET_DIR/verification"
TIMESTAMP="$(date +"%Y%m%d_%H%M%S")"
mkdir -p "$LOG_DIR" "$VER_DIR"
init_script_logging_files generate_serv "$LOG_DIR/main.log" "$LOG_DIR/session_${TIMESTAMP}.log"
[[ -d "$TOOL_DIR/rtl" ]] || { log_error "Missing $TOOL_DIR/rtl — run install_serv.sh"; exit 1; }
log_info "Snapshotting $PROJECT @ $COMMIT_ID"
score_simple_snapshot_rtl "$TOOL_DIR" "$DATASET_DIR" "$NAME"
score_simple_write_manifest "$DATASET_DIR" "$PROJECT" "$NAME" "$COMMIT_ID"
mapfile -t rtl_files < <(find "$TOOL_DIR/rtl" -type f \( -name '*.v' -o -name '*.sv' \) | sort)
SCORE_SIMPLE_LINT_LOG="$VER_DIR/verilator_lint_rtl.log"
# Lint from repo root so servant/serving includes resolve if present in file list.
rel_args=()
for f in "${rtl_files[@]}"; do
    rel_args+=("${f#"$TOOL_DIR"/}")
done
score_simple_verilator_lint "$TOOL_DIR" "${rel_args[@]}" || true
{
    echo "serv SCORE snapshot ($PROJECT)"
    echo "Commit: $COMMIT_ID"
    echo "Dataset: $DATASET_DIR"
    echo "Lint: $SCORE_SIMPLE_LINT_RESULT"
    echo "RTL files: ${#rtl_files[@]}"
} > "$DATASET_DIR/serv_summary.txt"
log_success "serv generate done → $DATASET_DIR"
[[ "$SCORE_SIMPLE_LINT_RESULT" != "FAIL" ]]
