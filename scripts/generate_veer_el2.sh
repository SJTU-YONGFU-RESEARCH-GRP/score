#!/usr/bin/env bash
# SCORE generate for chipsalliance/Cores-VeeR-EL2 — run veer.config and snapshot design RTL.
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/veer-el2"
NAME="veer_el2"
PROJECT="chipsalliance/Cores-VeeR-EL2"

source "$SCRIPT_DIR/common_logging.sh"
source "$SCRIPT_DIR/common_simple_rtl.sh"
cd "$PROJECT_ROOT"

COMMIT_ID="$(score_simple_get_commit "$TOOL_DIR")"
DATASET_DIR="$PROJECT_ROOT/datasets/$NAME/$COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
VER_DIR="$DATASET_DIR/verification"
GEN_DIR="$DATASET_DIR/rtl_generated"
TIMESTAMP="$(date +"%Y%m%d_%H%M%S")"
mkdir -p "$LOG_DIR" "$VER_DIR" "$GEN_DIR"
init_script_logging_files generate_veer_el2 "$LOG_DIR/main.log" "$LOG_DIR/session_${TIMESTAMP}.log"

[[ -d "$TOOL_DIR/design" ]] || { log_error "Missing $TOOL_DIR/design — run install_veer_el2.sh"; exit 1; }

export RV_ROOT="$TOOL_DIR"
CFG_OK=0
if [[ -x "$TOOL_DIR/configs/veer.config" || -f "$TOOL_DIR/configs/veer.config" ]]; then
    log_info "Running configs/veer.config -target=default"
    if ( cd "$TOOL_DIR" && perl configs/veer.config -target=default ) >"$LOG_DIR/veer_config.log" 2>&1; then
        CFG_OK=1
        log_success "veer.config wrote snapshots/default"
        if [[ -d "$TOOL_DIR/snapshots/default" ]]; then
            mkdir -p "$GEN_DIR/snapshots/default"
            cp -a "$TOOL_DIR/snapshots/default/." "$GEN_DIR/snapshots/default/"
        fi
    else
        log_warning "veer.config failed — see $LOG_DIR/veer_config.log"
    fi
else
    log_warning "configs/veer.config missing"
fi

log_info "Snapshotting VeeR EL2 design + configs @ $COMMIT_ID"
score_simple_snapshot_paths "$TOOL_DIR" "$DATASET_DIR" "$NAME" design configs
[[ -d "$TOOL_DIR/snapshots" ]] && score_simple_snapshot_paths "$TOOL_DIR" "$DATASET_DIR" "$NAME" snapshots
score_simple_write_manifest "$DATASET_DIR" "$PROJECT" "$NAME" "$COMMIT_ID"

rtl_count="$(score_simple_count_rtl "$DATASET_DIR/rtl_snapshot/$NAME")"
if [[ "$CFG_OK" -eq 1 ]]; then cfg_status=OK; else cfg_status=FAIL; fi
{
    echo "veer_el2 SCORE snapshot ($PROJECT)"
    echo "Commit: $COMMIT_ID"
    echo "Dataset: $DATASET_DIR"
    echo "veer.config: $cfg_status"
    echo "SV/V/VH files: $rtl_count"
    echo "Lint: SKIPPED"
    echo "Note: Verilator lint of design/flist.lint needs generated snapshots/default; run configs/veer.config first. SCORE snapshots design + config output."
} > "$DATASET_DIR/veer_el2_summary.txt"

log_success "veer_el2 generate done → $DATASET_DIR ($rtl_count SV/V/VH files)"
[[ "${rtl_count:-0}" -gt 0 ]]
