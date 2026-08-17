#!/usr/bin/env bash
# SCORE generate for lowRISC/opentitan — RTL snapshot + Bazel/FuseSoC Verilator build.
#
# Requires scripts/install_opentitan.sh (full checkout, .venv, Verilator 4.210).
# Default Bazel target: //hw:verilator (Earl Grey chip sim via FuseSoC).
#
# Optional env:
#   OPENTITAN_BAZEL_TARGET   override target (default //hw:verilator)
#   OPENTITAN_SKIP_BAZEL=1   snapshot RTL only (no Bazel build)
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/opentitan"
HOST_TOOLS_DIR="$PROJECT_ROOT/tools/opentitan-host-tools"
NAME="opentitan"
PROJECT="lowRISC/opentitan"
BAZEL_TARGET="${OPENTITAN_BAZEL_TARGET:-//hw:verilator}"
SKIP_BAZEL="${OPENTITAN_SKIP_BAZEL:-0}"

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
init_script_logging_files generate_opentitan "$LOG_DIR/main.log" "$LOG_DIR/session_${TIMESTAMP}.log"

[[ -f "$TOOL_DIR/bazelisk.sh" ]] || {
    log_error "Missing $TOOL_DIR/bazelisk.sh — run install_opentitan.sh (full)"
    exit 1
}
[[ -d "$TOOL_DIR/hw/ip" ]] || { log_error "Missing $TOOL_DIR/hw/ip"; exit 1; }
[[ -d "$TOOL_DIR/util" ]] || {
    log_error "Missing $TOOL_DIR/util — sparse checkout detected; re-run install_opentitan.sh --force-reclone"
    exit 1
}

if [[ -f "$TOOL_DIR/setup_score_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$TOOL_DIR/setup_score_env.sh"
elif [[ -f "$TOOL_DIR/.venv/bin/activate" ]]; then
    # shellcheck source=/dev/null
    source "$TOOL_DIR/.venv/bin/activate"
    export PATH="$HOST_TOOLS_DIR/verilator/v4.210/bin:$HOST_TOOLS_DIR/verible/bin:$HOST_TOOLS_DIR/riscv/bin:$PATH"
    [[ -d "$HOST_TOOLS_DIR/verilator/v4.210/share/verilator" ]] \
        && export VERILATOR_ROOT="$HOST_TOOLS_DIR/verilator/v4.210/share/verilator"
fi

export REPO_TOP="$TOOL_DIR"
ver_bin="$(command -v verilator || true)"
log_info "verilator: ${ver_bin:-missing} ($(verilator --version 2>/dev/null | head -1 || echo none))"
log_info "fusesoc: $(command -v fusesoc || echo missing)"
log_info "python: $(command -v python3) ($(python3 -c 'import sys; print("%d.%d"%sys.version_info[:2])' 2>/dev/null || echo '?'))"

log_info "Snapshotting OpenTitan hw/ (+ vendor when present) @ $COMMIT_ID"
snap_paths=(hw/ip hw/top_earlgrey hw/top)
[[ -d "$TOOL_DIR/hw/vendor" ]] && snap_paths+=(hw/vendor)
[[ -d "$TOOL_DIR/hw/dv" ]] && snap_paths+=(hw/dv)
score_simple_snapshot_paths "$TOOL_DIR" "$DATASET_DIR" "$NAME" "${snap_paths[@]}"
score_simple_write_manifest "$DATASET_DIR" "$PROJECT" "$NAME" "$COMMIT_ID"

BAZEL_RC="SKIPPED"
BAZEL_OUT=""
if [[ "$SKIP_BAZEL" == "1" ]]; then
    log_warning "OPENTITAN_SKIP_BAZEL=1 — skipping Bazel/FuseSoC Verilator build"
else
    if [[ ! -x "$TOOL_DIR/.venv/bin/fusesoc" ]] && ! command -v fusesoc >/dev/null 2>&1; then
        log_error "FuseSoC missing — run install_opentitan.sh without --skip-venv"
        exit 1
    fi
    if ! verilator --version 2>/dev/null | grep -q '4\.210'; then
        log_error "Need Verilator 4.210 on PATH (got: $(verilator --version 2>/dev/null | head -1 || echo none))"
        log_error "Re-run install_opentitan.sh without --skip-host-tools"
        exit 1
    fi

    log_info "Bazel build $BAZEL_TARGET (FuseSoC → Verilator; may take a long time)…"
    set +e
    (
        cd "$TOOL_DIR"
        ./bazelisk.sh build "$BAZEL_TARGET"
    ) >"$LOG_DIR/bazel_verilator.log" 2>&1
    BAZEL_RC=$?
    set -e
    if [[ "$BAZEL_RC" -eq 0 ]]; then
        log_success "Bazel build OK"
        # Collect FuseSoC/Verilator outputs from bazel-bin when present.
        if [[ -d "$TOOL_DIR/bazel-bin/hw" ]]; then
            mkdir -p "$GEN_DIR/bazel-bin/hw"
            # Prefer the verilator sim tree; fall back to copying lightweight markers.
            if command -v rsync >/dev/null 2>&1; then
                rsync -a --include='*/' --include='*.v' --include='*.sv' --include='*.h' \
                    --include='Vchip*' --include='*.f' --include='*.core' --exclude='*' \
                    "$TOOL_DIR/bazel-bin/hw/" "$GEN_DIR/bazel-bin/hw/" 2>/dev/null \
                    || rsync -a --max-size=50m "$TOOL_DIR/bazel-bin/hw/" "$GEN_DIR/bazel-bin/hw/" || true
            fi
            BAZEL_OUT="$GEN_DIR/bazel-bin/hw"
        fi
        # Also keep a pointer to the local bazel output path.
        {
            echo "target=$BAZEL_TARGET"
            echo "commit=$COMMIT_ID"
            (cd "$TOOL_DIR" && ./bazelisk.sh info bazel-bin 2>/dev/null || true)
        } >"$GEN_DIR/bazel_build_info.txt"
    else
        log_warning "Bazel build failed (rc=$BAZEL_RC) — see $LOG_DIR/bazel_verilator.log"
        BAZEL_RC="FAIL:$BAZEL_RC"
    fi
fi

rtl_count="$(score_simple_count_rtl "$DATASET_DIR/rtl_snapshot/$NAME")"
{
    echo "opentitan SCORE snapshot ($PROJECT)"
    echo "Commit: $COMMIT_ID"
    echo "Dataset: $DATASET_DIR"
    echo "SV/V files: $rtl_count"
    echo "Bazel target: $BAZEL_TARGET"
    echo "Bazel result: $BAZEL_RC"
    echo "Generated out: ${BAZEL_OUT:-none}"
    echo "Verilator: $(verilator --version 2>/dev/null | head -1 || echo missing)"
    echo "FuseSoC: $(python3 -c "import importlib.metadata as m; print(m.version('fusesoc'))" 2>/dev/null || echo missing)"
} >"$DATASET_DIR/opentitan_summary.txt"

log_success "opentitan generate done → $DATASET_DIR ($rtl_count SV/V files; bazel=$BAZEL_RC)"
[[ "${rtl_count:-0}" -gt 0 ]]
# Succeed when RTL snapshot exists; Bazel failure is recorded but does not wipe the dataset.
# Fail hard only if Bazel was requested and failed AND user set OPENTITAN_REQUIRE_BAZEL=1.
if [[ "${OPENTITAN_REQUIRE_BAZEL:-0}" == "1" ]] && [[ "$BAZEL_RC" != "0" && "$BAZEL_RC" != "SKIPPED" ]]; then
    exit 1
fi
exit 0
