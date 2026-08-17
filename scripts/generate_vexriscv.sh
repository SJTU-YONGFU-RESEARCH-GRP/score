#!/usr/bin/env bash
# SCORE generate for SpinalHDL/VexRiscv — emit Verilog via sbt and snapshot sources.
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/vexriscv"
NAME="vexriscv"
PROJECT="SpinalHDL/VexRiscv"

source "$SCRIPT_DIR/common_logging.sh"
source "$SCRIPT_DIR/common_simple_rtl.sh"
[[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]] && source "$PROJECT_ROOT/scripts/setup_local_env.sh"
export PATH="/opt/sbt/bin:${HOME}/.local/share/rocket-chip-tools/sbt:${PATH}"

COMMIT_ID="$(score_simple_get_commit "$TOOL_DIR")"
DATASET_DIR="$PROJECT_ROOT/datasets/$NAME/$COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
VER_DIR="$DATASET_DIR/verification"
GEN_DIR="$DATASET_DIR/rtl_generated"
TIMESTAMP="$(date +"%Y%m%d_%H%M%S")"
mkdir -p "$LOG_DIR" "$VER_DIR" "$GEN_DIR"
init_script_logging_files generate_vexriscv "$LOG_DIR/main.log" "$LOG_DIR/session_${TIMESTAMP}.log"

[[ -f "$TOOL_DIR/build.sbt" ]] || { log_error "Missing $TOOL_DIR/build.sbt — run install_vexriscv.sh"; exit 1; }

log_info "Snapshotting SpinalHDL sources @ $COMMIT_ID"
score_simple_snapshot_rtl "$TOOL_DIR" "$DATASET_DIR" "$NAME" 'target/' 'project/target/' '*.v'
score_simple_write_manifest "$DATASET_DIR" "$PROJECT" "$NAME" "$COMMIT_ID"

SBT_BIN=""
if command -v sbt >/dev/null 2>&1; then
    SBT_BIN="$(command -v sbt)"
elif [[ -x /opt/sbt/bin/sbt ]]; then
    SBT_BIN="/opt/sbt/bin/sbt"
fi

GEN_OK=0
GEN_FAIL=0
if [[ -n "$SBT_BIN" ]] && command -v java >/dev/null 2>&1; then
    # Default SCORE configs: smallest core, full Linux-ish core, Murax SoC.
    configs=(
        vexriscv.demo.GenSmallest
        vexriscv.demo.GenFull
        vexriscv.demo.Murax
    )
    export SBT_OPTS="${SBT_OPTS:--Xmx4G}"
    for cfg in "${configs[@]}"; do
        short="${cfg##*.}"
        log_info "sbt runMain $cfg"
        if ( cd "$TOOL_DIR" && "$SBT_BIN" -batch "runMain $cfg" ) >"$LOG_DIR/sbt_${short}.log" 2>&1; then
            GEN_OK=$((GEN_OK + 1))
            log_success "Emitted $cfg"
            mkdir -p "$GEN_DIR/$short"
            shopt -s nullglob
            for v in "$TOOL_DIR"/*.v; do
                cp -a "$v" "$GEN_DIR/$short/"
            done
            shopt -u nullglob
        else
            GEN_FAIL=$((GEN_FAIL + 1))
            log_warning "sbt runMain $cfg failed — see $LOG_DIR/sbt_${short}.log"
        fi
    done
else
    log_warning "java/sbt missing; skipping Verilog emit (Scala snapshot still written)"
fi

LINT="SKIPPED"
mapfile -t gen_v < <(find "$GEN_DIR" -name '*.v' | sort)
lint_src=""
if [[ -f "$GEN_DIR/GenSmallest/VexRiscv.v" ]]; then
    lint_src="$GEN_DIR/GenSmallest/VexRiscv.v"
elif [[ ${#gen_v[@]} -gt 0 ]]; then
    lint_src="${gen_v[0]}"
fi
if [[ -n "$lint_src" ]]; then
    SCORE_SIMPLE_LINT_LOG="$VER_DIR/verilator_lint_generated.log"
    score_simple_verilator_lint "$(dirname "$lint_src")" "$(basename "$lint_src")" || true
    LINT="$SCORE_SIMPLE_LINT_RESULT"
fi

{
    echo "vexriscv SCORE snapshot ($PROJECT)"
    echo "Commit: $COMMIT_ID"
    echo "Dataset: $DATASET_DIR"
    echo "sbt configs OK: $GEN_OK  failed: $GEN_FAIL"
    echo "Generated Verilog files: ${#gen_v[@]}"
    echo "Lint: $LINT"
} > "$DATASET_DIR/vexriscv_summary.txt"

log_success "vexriscv generate done → $DATASET_DIR"
# Succeed if we have either generated Verilog or a source snapshot.
[[ -d "$DATASET_DIR/rtl_snapshot/$NAME" ]]
