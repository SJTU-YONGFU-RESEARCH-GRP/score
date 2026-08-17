#!/usr/bin/env bash
# SCORE generate for black-parrot/black-parrot — snapshot bp_* RTL (+ BaseJump STL if present).
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/black-parrot"
NAME="black_parrot"
PROJECT="black-parrot/black-parrot"

source "$SCRIPT_DIR/common_logging.sh"
source "$SCRIPT_DIR/common_simple_rtl.sh"
cd "$PROJECT_ROOT"

COMMIT_ID="$(score_simple_get_commit "$TOOL_DIR")"
DATASET_DIR="$PROJECT_ROOT/datasets/$NAME/$COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
VER_DIR="$DATASET_DIR/verification"
TIMESTAMP="$(date +"%Y%m%d_%H%M%S")"
mkdir -p "$LOG_DIR" "$VER_DIR"
init_script_logging_files generate_black_parrot "$LOG_DIR/main.log" "$LOG_DIR/session_${TIMESTAMP}.log"

[[ -d "$TOOL_DIR/bp_top" ]] || { log_error "Missing $TOOL_DIR/bp_top — run install_black_parrot.sh"; exit 1; }

log_info "Snapshotting BlackParrot RTL @ $COMMIT_ID"
snap_paths=(bp_common bp_fe bp_be bp_me bp_top)
[[ -d "$TOOL_DIR/external/basejump_stl" ]] && snap_paths+=(external/basejump_stl)
[[ -d "$TOOL_DIR/external/HardFloat" ]] && snap_paths+=(external/HardFloat)
score_simple_snapshot_paths "$TOOL_DIR" "$DATASET_DIR" "$NAME" "${snap_paths[@]}"
score_simple_write_manifest "$DATASET_DIR" "$PROJECT" "$NAME" "$COMMIT_ID"

# Full-chip Verilator lint needs BlackParrot's Makefile env; snapshot sources only.
LINT="SKIPPED"
rtl_count="$(score_simple_count_rtl "$DATASET_DIR/rtl_snapshot/$NAME")"
{
    echo "black_parrot SCORE snapshot ($PROJECT)"
    echo "Commit: $COMMIT_ID"
    echo "Dataset: $DATASET_DIR"
    echo "SV/V files: $rtl_count"
    echo "Lint: $LINT"
    echo "Note: full chip lint needs BaseJump STL include paths and BP make env; SCORE snapshots RTL sources."
} > "$DATASET_DIR/black_parrot_summary.txt"

log_success "black_parrot generate done → $DATASET_DIR ($rtl_count SV/V files)"
[[ "${rtl_count:-0}" -gt 0 ]]
