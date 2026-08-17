#!/usr/bin/env bash
# SCORE generate for YosysHQ/picorv32 — snapshot + Verilator lint of core and PicoSoC.
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/picorv32"
NAME="picorv32"
PROJECT="YosysHQ/picorv32"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
# shellcheck source=scripts/common_simple_rtl.sh
source "$SCRIPT_DIR/common_simple_rtl.sh"

COMMIT_ID="$(score_simple_get_commit "$TOOL_DIR")"
DATASET_DIR="$PROJECT_ROOT/datasets/$NAME/$COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
VER_DIR="$DATASET_DIR/verification"
TIMESTAMP="$(date +"%Y%m%d_%H%M%S")"
mkdir -p "$LOG_DIR" "$VER_DIR"
init_script_logging_files generate_picorv32 "$LOG_DIR/main.log" "$LOG_DIR/session_${TIMESTAMP}.log"

[[ -f "$TOOL_DIR/picorv32.v" ]] || { log_error "Missing $TOOL_DIR/picorv32.v — run install_picorv32.sh"; exit 1; }

log_info "Snapshotting $PROJECT @ $COMMIT_ID"
score_simple_snapshot_rtl "$TOOL_DIR" "$DATASET_DIR" "$NAME"
score_simple_write_manifest "$DATASET_DIR" "$PROJECT" "$NAME" "$COMMIT_ID"

SCORE_SIMPLE_LINT_LOG="$VER_DIR/verilator_lint_picorv32.log"
log_info "Linting picorv32.v"
score_simple_verilator_lint "$TOOL_DIR" picorv32.v || true
CORE_LINT="$SCORE_SIMPLE_LINT_RESULT"

PICO_LINT="SKIPPED"
if [[ -d "$TOOL_DIR/picosoc" ]]; then
    mapfile -t pico_files < <(find "$TOOL_DIR/picosoc" -maxdepth 1 -name '*.v' | sort)
    if [[ ${#pico_files[@]} -gt 0 ]]; then
        SCORE_SIMPLE_LINT_LOG="$VER_DIR/verilator_lint_picosoc.log"
        log_info "Linting PicoSoC (${#pico_files[@]} files)"
        # PicoSoC includes picorv32; lint from repo root with both.
        score_simple_verilator_lint "$TOOL_DIR" -I.picosoc -Ipicosoc picorv32.v "${pico_files[@]}" || true
        PICO_LINT="$SCORE_SIMPLE_LINT_RESULT"
    fi
fi

{
    echo "picorv32 SCORE snapshot ($PROJECT)"
    echo "Commit: $COMMIT_ID"
    echo "Dataset: $DATASET_DIR"
    echo "Core lint: $CORE_LINT"
    echo "PicoSoC lint: $PICO_LINT"
} > "$DATASET_DIR/picorv32_summary.txt"

log_success "picorv32 generate done → $DATASET_DIR"
# Fail only if core lint failed (not skipped).
[[ "$CORE_LINT" != "FAIL" ]]
