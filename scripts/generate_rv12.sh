#!/usr/bin/env bash
#
# Export Roa Logic RV12 RTL into datasets/rv12/<commit>/ and verify it with Verilator only.
#
# Verification is run directly from this script (no Makefile, no ModelSim/Questa):
#   verilator --lint-only … filelist_ahb3lite.f
#
# Profiles:
#   default — standard lint (-Wall -Wno-fatal -Wno-BLKANDNBLK)
#   full    — adds --timing (still lint-only; Verilator cannot build the shipped TB/sim model)
#
# Upstream RTL file list: rtl/filelist_ahb3lite.f (paths relative to rtl/).
# Additional sources from nested submodules must precede the file list:
#   submodules/ahb3lite_pkg/rtl/verilog/ahb3lite_pkg.sv
#   submodules/memory/rtl/verilog/{rl_queue,rl_ram_1r1w,rl_ram_1r1w_generic}.sv
# Verilator reports BLKANDNBLK on riscv_core.sv; upstream is valid IEEE 1800;
# SCORE uses -Wno-BLKANDNBLK for lint benchmarking.
#
# Usage (from SCORE root):
#   ./scripts/generate_rv12.sh
#   ./scripts/generate_rv12.sh --rv12-regression-full   # Verilator lint + --timing
#   RV12_LINT_PROFILE=full ./scripts/generate_rv12.sh
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/rv12"
NAME="rv12"

VERIFY_ONLY=false
SKIP_COPY=false
# Verilator lint profile: default | full (full adds --timing to --lint-only)
: "${RV12_LINT_PROFILE:=default}"

if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

# Legacy env (pre–Verilator-only): map to lint profile
case "${RV12_UPSTREAM_REGRESSION:-}" in
    full) RV12_LINT_PROFILE=full ;;
    skip|smoke) RV12_LINT_PROFILE=default ;;
esac
case "${RV12_SKIP_UPSTREAM_REGRESSION:-}" in
    1|true|yes|on) RV12_LINT_PROFILE=default ;;
esac
case "${RV12_RUN_SIM_SMOKE:-}" in
    1|true|yes|on)
        echo "generate_rv12.sh: RV12_RUN_SIM_SMOKE is ignored (ModelSim flows removed); use RV12_LINT_PROFILE=full" >&2
        ;;
esac

case "${RV12_LINT_PROFILE,,}" in
    default|full) ;;
    *)
        echo "generate_rv12.sh: invalid RV12_LINT_PROFILE='$RV12_LINT_PROFILE'; using default" >&2
        RV12_LINT_PROFILE=default
        ;;
esac

# Filled by run_verilator_lint; consumed by write_rv12_verification_summary.
RV12_LINT_LOG=""
RV12_LINT_RESULT="UNKNOWN"
RV12_LINT_EXTRA_FLAGS=""

get_commit_id() {
    local repo_path="$1"
    if git -C "$repo_path" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

command_exists() {
    command -v "$1" >/dev/null 2>&1
}

COMMIT_ID="$(get_commit_id "$TOOL_DIR")"
DATASET_DIR="$PROJECT_ROOT/datasets/$NAME/$COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
VER_DIR="$DATASET_DIR/verification"
TIMESTAMP="$(date +"%Y%m%d_%H%M%S")"
MAIN_LOG="$LOG_DIR/main.log"
SESSION_LOG="$LOG_DIR/session_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR" "$VER_DIR" "$DATASET_DIR/rtl_snapshot"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging_files generate_rv12 "$MAIN_LOG" "$SESSION_LOG"

log() {
    log_info "$@"
}

error() {
    log_error "$@"
}

success() {
    log_success "$@"
}

warning() {
    log_warning "$@"
}

info() {
    log_info "$@"
}

json_escape() {
    local s="$1"
    if command_exists python3; then
        python3 -c "import json,sys; print(json.dumps(sys.argv[1]))" "$s" 2>/dev/null && return 0
    fi
    s=${s//\\/\\\\}
    s=${s//\"/\\\"}
    printf '"%s"' "$s"
}

write_manifest() {
    local manifest="$DATASET_DIR/manifest.json"
    local host pretty
    host="$(uname -s -m 2>/dev/null || echo unknown)"
    pretty="unknown"
    if [[ -f /etc/os-release ]]; then
        # shellcheck source=/dev/null
        . /etc/os-release
        pretty="${PRETTY_NAME:-unknown}"
    fi
    local vver="missing"
    command_exists verilator && vver="$(verilator --version 2>/dev/null | head -1 || echo unknown)"
    cat > "$manifest" << EOF
{
  "project": "RoaLogic/RV12",
  "commit_short": "$COMMIT_ID",
  "dataset_name": "$NAME",
  "generated_at_utc": "$(date -u +"%Y-%m-%dT%H:%M:%SZ")",
  "host": "$host",
  "os_pretty": $(json_escape "$pretty"),
  "verilator": $(json_escape "$vver")
}
EOF
    success "Wrote $manifest"
}

copy_rtl_tree() {
    log "Syncing RTL and submodules into $DATASET_DIR/rtl_snapshot ..."
    local src="$TOOL_DIR"
    local dst="$DATASET_DIR/rtl_snapshot/rv12"
    mkdir -p "$dst"
    if command_exists rsync; then
        rsync -a --delete \
            --exclude '.git/' \
            --exclude '.git' \
            "$src/" "$dst/"
    else
        warning "rsync not found; using cp -a (slower, may retain nested .git files)"
        rm -rf "${dst:?}/"*
        cp -a "$src/." "$dst/"
    fi
    success "Snapshot at $dst"
}

run_verilator_lint() {
    local rtl="$TOOL_DIR/rtl"
    local flist="$rtl/filelist_ahb3lite.f"
    local timing_flag=()

    if [[ ! -f "$flist" ]]; then
        error "Missing file list: $flist"
        RV12_LINT_RESULT="FAIL"
        return 1
    fi

    local mem_dir="$TOOL_DIR/submodules/memory/rtl/verilog"
    local ahb_pkg="$TOOL_DIR/submodules/ahb3lite_pkg/rtl/verilog/ahb3lite_pkg.sv"
    for f in "$ahb_pkg" "$mem_dir/rl_queue.sv" "$mem_dir/rl_ram_1r1w.sv" "$mem_dir/rl_ram_1r1w_generic.sv"; do
        if [[ ! -f "$f" ]]; then
            error "Required submodule file missing (init submodules): $f"
            RV12_LINT_RESULT="FAIL"
            return 1
        fi
    done

    if [[ "${RV12_LINT_PROFILE,,}" == "full" ]]; then
        RV12_LINT_LOG="$VER_DIR/verilator_lint_ahb3lite_full.log"
        timing_flag=(--timing)
        RV12_LINT_EXTRA_FLAGS="--timing"
    else
        RV12_LINT_LOG="$VER_DIR/verilator_lint_ahb3lite.log"
        RV12_LINT_EXTRA_FLAGS=""
    fi

    if ! command_exists verilator; then
        warning "verilator not in PATH; skipping verification (install via install_rv12.sh)"
        RV12_LINT_RESULT="SKIPPED"
        return 0
    fi

    info "RV12 Verilator verification (profile=$RV12_LINT_PROFILE; lint-only; flags: ${RV12_LINT_EXTRA_FLAGS:-<none>}) …"
    # shellcheck disable=SC2086
    if ( cd "$rtl" && verilator --lint-only "${timing_flag[@]}" -Wall -Wno-fatal -Wno-BLKANDNBLK \
        "$ahb_pkg" \
        "$mem_dir/rl_queue.sv" \
        "$mem_dir/rl_ram_1r1w.sv" \
        "$mem_dir/rl_ram_1r1w_generic.sv" \
        -f filelist_ahb3lite.f \
        2>&1 | tee "$RV12_LINT_LOG" )
    then
        success "Verilator verification completed (see $RV12_LINT_LOG)"
        RV12_LINT_RESULT="PASS"
    else
        error "Verilator verification failed — see $RV12_LINT_LOG"
        RV12_LINT_RESULT="FAIL"
        return 1
    fi
}

write_rv12_verification_summary() {
    local f="$VER_DIR/verification_summary.txt"
    mkdir -p "$VER_DIR"
    {
        echo "RV12 SCORE verification summary"
        echo "Commit: $COMMIT_ID"
        echo ""
        echo "Verilator (commands in generate_rv12.sh only; no Makefile or ModelSim):"
        echo "  Profile: $RV12_LINT_PROFILE"
        echo "  Extra flags: ${RV12_LINT_EXTRA_FLAGS:-none}"
        echo "  Log: ${RV12_LINT_LOG:-n/a}"
        echo "  Result: $RV12_LINT_RESULT"
        echo "  Note: Lint-only; Verilator cannot elaborate the shipped sim/TB (ahb3lite_pkg clocking/modports)."
    } > "$f"
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Export RV12 into datasets/$NAME/<8-char commit>/ and run Verilator lint on rtl/filelist_ahb3lite.f (in this script).

Options:
  -h, --help                 Show this help
  --verify-only              Do not refresh rtl_snapshot; only run verification
  --skip-copy                Do not rsync upstream tree
  --rv12-regression-full     Verilator lint with --timing (full static check; still lint-only)
  --skip-upstream-regression Ignored compatibility alias (same as default profile)

Environment:
  RV12_LINT_PROFILE          default | full (default: default). full adds --timing.
  RV12_UPSTREAM_REGRESSION   Legacy: full -> RV12_LINT_PROFILE=full; skip|smoke -> default

EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            show_help
            exit 0
            ;;
        --verify-only)
            VERIFY_ONLY=true
            shift
            ;;
        --skip-copy)
            SKIP_COPY=true
            shift
            ;;
        --skip-upstream-regression)
            RV12_LINT_PROFILE=default
            shift
            ;;
        --rv12-regression-full)
            RV12_LINT_PROFILE=full
            shift
            ;;
        --rv12-regression-smoke|--run-sim-smoke)
            echo "generate_rv12.sh: '$1' is no longer supported (ModelSim flows removed). Use Verilator only." >&2
            shift
            ;;
        --rv12-sim-backend)
            echo "generate_rv12.sh: --rv12-sim-backend is no longer supported." >&2
            shift 2
            ;;
        --jobs)
            echo "generate_rv12.sh: --jobs is no longer used (no make regression)." >&2
            shift 2
            ;;
        *)
            error "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

cd "$PROJECT_ROOT"

if ! git -C "$TOOL_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
    error "RV12 not found or not a git tree: $TOOL_DIR — run ./scripts/install_rv12.sh first"
    exit 1
fi

log "generate_rv12.sh — commit=$COMMIT_ID dataset=$DATASET_DIR lint_profile=$RV12_LINT_PROFILE"

if [[ "$VERIFY_ONLY" == true ]]; then
    SKIP_COPY=true
fi

if [[ "$SKIP_COPY" != true ]]; then
    copy_rtl_tree
    write_manifest
else
    info "Skipping RTL copy (--verify-only or --skip-copy)"
    mkdir -p "$DATASET_DIR"
    if [[ ! -f "$DATASET_DIR/manifest.json" ]]; then
        write_manifest
    fi
fi

if ! run_verilator_lint; then
    write_rv12_verification_summary
    exit 1
fi

write_rv12_verification_summary

success "generate_rv12.sh finished."
log "Summary: $VER_DIR/verification_summary.txt"
log "Dataset: $DATASET_DIR"
