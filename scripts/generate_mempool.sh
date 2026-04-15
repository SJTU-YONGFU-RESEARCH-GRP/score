#!/usr/bin/env bash
#
# MemPool RTL / IP resolution for SCORE (Bender flow), analogous to generate_rocket_chip.sh.
#
# After `make bender` and `make update-deps`, SystemVerilog RTL lives under:
#   tools/mempool/hardware/  and  tools/mempool/hardware/deps/
# This script snapshots the full checked-out tree to:
#   datasets/mempool/<short_sha>/source_snapshot/
# (excluding .git directories), so the dataset carries the same RTL as the live submodule.
#
# Verification (default: ON, like generate_rocket_chip.sh):
#   - Bender Verilator RTL closure: `config=<flavor> make -C hardware spyglass/tmp/files` for each flavor
#   - MemPool-pinned Verilator toolchain: run `verilator --version` (install/verilator from
#     `install_mempool.sh --verilator` / run_mempool.sh). Full RTL `--lint-only` on Bender's flat file
#     list is not used — Verilator 4.x and interface-heavy AXI RTL do not support that mode; use
#     `make verilate` under hardware/ for a real compile check.
#
# Logging matches generate_rocket_chip.sh: one session log under logs/mempool_generation/ plus tee to stdout.
#
# Usage (from repository root):
#   ./scripts/generate_mempool.sh
#   ./scripts/generate_mempool.sh --skip-checkout
#   ./scripts/generate_mempool.sh --no-verify
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SOURCE_MEMPOOL_DIR="$PROJECT_ROOT/tools/mempool"
MEMPOOL_DIR=""

SKIP_CHECKOUT=false
VERBOSE=false
# Default verification ON (same idea as generate_rocket_chip.sh).
if [[ "${VERIFY_SYNTAX:-true}" == "false" || "${VERIFY_SYNTAX:-true}" == "0" ]]; then
    VERIFY_SYNTAX=false
else
    VERIFY_SYNTAX=true
fi
VERIFY_ONLY=false
ALLOW_SYSTEM_VERILATOR=false
if [[ "${MEMPOOL_ALLOW_SYSTEM_VERILATOR:-}" == "1" || "${MEMPOOL_ALLOW_SYSTEM_VERILATOR:-}" == "true" ]]; then
    ALLOW_SYSTEM_VERILATOR=true
fi

BENDER_VERIFY_CONFIGS=(minpool mempool terapool)

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_mempool

err() {
    log_error "$@"
}

command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

In tools/mempool (upstream flow):
  - make bender        (installs pinned Bender to install/bender/)
  - make update-deps   (bender checkout into hardware/deps per Bender.lock)

Copy into datasets/mempool/<git-short-sha>/source_snapshot/:
  - Full mempool tree (excluding .git directories), including hardware/ and hardware/deps/ RTL

Verification (default ON):
  - Bender Verilator file list per flavor (minpool, mempool, terapool).
  - MemPool-pinned Verilator: \`verilator --version\` (install/verilator). Optional PATH binary if
    --allow-system-verilator.

Options:
  -h, --help                Show this help
  --skip-checkout           Do not run make bender / make update-deps (snapshot current tree)
  --verify                  Enable verification (default)
  --no-verify               Disable verification
  --skip-verify             Same as --no-verify
  --verify-only             Only run verification (no rsync snapshot)
  --verilator-mempool-only  Obsolete (ignored); kept for wrapper compatibility
  --verilator-all-configs   Obsolete (ignored)
  --allow-system-verilator  Use PATH verilator if pinned build missing (not recommended)
  -v, --verbose             Debug messages

Environment:
  VERIFY_SYNTAX, MEMPOOL_ALLOW_SYSTEM_VERILATOR

Requires: git, make, rsync (unless --verify-only); submodule tools/mempool initialized.
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            show_help
            exit 0
            ;;
        --skip-checkout)
            SKIP_CHECKOUT=true
            shift
            ;;
        --verify)
            VERIFY_SYNTAX=true
            shift
            ;;
        --no-verify|--skip-verify)
            VERIFY_SYNTAX=false
            shift
            ;;
        --verify-only)
            VERIFY_ONLY=true
            VERIFY_SYNTAX=true
            shift
            ;;
        --verilator-mempool-only|--verilator-all-configs)
            shift
            ;;
        --allow-system-verilator)
            ALLOW_SYSTEM_VERILATOR=true
            shift
            ;;
        -v|--verbose)
            VERBOSE=true
            shift
            ;;
        *)
            err "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

if [[ ! -f "$SOURCE_MEMPOOL_DIR/Makefile" ]] || [[ ! -f "$SOURCE_MEMPOOL_DIR/Bender.yml" ]]; then
    log_error "Missing MemPool tree at $SOURCE_MEMPOOL_DIR — run: git submodule update --init --recursive tools/mempool"
    exit 1
fi

if ! command_exists rsync; then
    log_error "rsync not found (required to stage sources into datasets)"
    exit 1
fi

if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/mempool_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/mempool_env.sh"
fi

cd "$PROJECT_ROOT"

get_commit_id() {
    if git -C "$SOURCE_MEMPOOL_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$SOURCE_MEMPOOL_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

MEMPOOL_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/mempool/$MEMPOOL_COMMIT_ID"
LOG_DIR="$PROJECT_ROOT/logs/mempool_generation"
DATASET_LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
GENERATION_LOG="$LOG_DIR/generation_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR" "$DATASET_LOG_DIR"
touch "$GENERATION_LOG"

init_script_logging_files generate_mempool "$GENERATION_LOG"

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

debug() {
    if [[ "$VERBOSE" == "true" ]]; then
        echo -e "${PURPLE}[${SCRIPT_LOG_NAME}][DEBUG]${NC} $*" | tee -a "$SCRIPT_LOG_FILE"
    fi
}

MEMPOOL_DIR="$BUNDLE_DIR"

prepare_dataset_workdir() {
    info "Staging MemPool sources into dataset workdir: $MEMPOOL_DIR"
    mkdir -p "$MEMPOOL_DIR"
    rsync -a --delete \
        --exclude '.git/' \
        "$SOURCE_MEMPOOL_DIR/" "$MEMPOOL_DIR/"
}

resolve_verilator() {
    local v="$MEMPOOL_DIR/install/verilator/bin/verilator"
    if [[ -x "$v" ]]; then
        printf '%s\n' "$v"
        return 0
    fi
    if [[ "$ALLOW_SYSTEM_VERILATOR" == true ]] && command_exists verilator; then
        command -v verilator
        return 0
    fi
    return 1
}

# Regenerate Bender Verilator file list for one hardware configuration (validates IP closure).
verify_bender_config() {
    local cfg="$1"
    local verification_dir="$2"
    local flog="$verification_dir/bender_spyglass_files_${cfg}.log"
    info "Bender Verilator file list (config=${cfg})..."
    if ! make -C "$MEMPOOL_DIR/hardware" "config=${cfg}" spyglass/tmp/files >"$flog" 2>&1; then
        warning "config=${cfg}: make spyglass/tmp/files failed — see $flog"
        return 1
    fi
    local lines
    lines=$(wc -l <"$MEMPOOL_DIR/hardware/spyglass/tmp/files")
    success "config=${cfg}: Bender file list OK (${lines} lines)"
    return 0
}

# Confirm the MemPool Verilator binary runs (same install used by hardware/Makefile verilate).
verify_verilator_toolchain() {
    local verification_dir="$1"
    local vbin="$2"
    local vlog="$verification_dir/verilator_toolchain.log"

    info "Verilator toolchain check (binary: $vbin)..."
    if ! "$vbin" --version >"$vlog" 2>&1; then
        warning "Verilator --version failed — see $vlog"
        return 1
    fi
    success "Verilator toolchain OK ($(head -n1 "$vlog"))"
    return 0
}

verify_mempool_rtl() {
    local verification_dir="$DATASET_DIR/verification"
    mkdir -p "$verification_dir"
    local summary="$verification_dir/verification_summary.txt"
    local bender_failed=0
    local verilator_toolchain_failed=0

    {
        echo "MemPool verification summary"
        echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
        echo "MEMPOOL_DIR: $MEMPOOL_DIR"
        echo ""
    } >"$summary"

    log "=== RTL verification: Bender file lists (minpool / mempool / terapool) ==="
    local cfg
    for cfg in "${BENDER_VERIFY_CONFIGS[@]}"; do
        if ! verify_bender_config "$cfg" "$verification_dir"; then
            bender_failed=$((bender_failed + 1))
            echo "bender_spyglass_files_${cfg}: FAILED" >>"$summary"
        else
            echo "bender_spyglass_files_${cfg}: PASSED" >>"$summary"
        fi
    done

    local vbin=""
    if vbin=$(resolve_verilator); then
        :
    else
        vbin=""
    fi
    if [[ -z "$vbin" ]]; then
        info "Verilator toolchain check skipped: no binary at ${MEMPOOL_DIR}/install/verilator/bin/verilator"
        info "Build with: ./scripts/install_mempool.sh --verilator (default in run_mempool.sh), or --allow-system-verilator"
        echo "verilator_toolchain: SKIPPED (no verilator binary)" >>"$summary"
    else
        if [[ "$ALLOW_SYSTEM_VERILATOR" == true ]] && [[ "$vbin" != "$MEMPOOL_DIR/install/verilator/bin/verilator" ]]; then
            warning "Using PATH Verilator at $vbin — upstream CI uses install/verilator."
        fi
        log "=== Verification: Verilator toolchain ==="
        if verify_verilator_toolchain "$verification_dir" "$vbin"; then
            echo "verilator_toolchain: PASSED" >>"$summary"
        else
            verilator_toolchain_failed=$((verilator_toolchain_failed + 1))
            echo "verilator_toolchain: FAILED" >>"$summary"
        fi
    fi

    {
        echo ""
        echo "Counts: bender_failures=${bender_failed} verilator_toolchain_failures=${verilator_toolchain_failed}"
        echo "Logs under: $verification_dir"
    } >>"$summary"

    if [[ $bender_failed -gt 0 ]]; then
        return 1
    fi
    if [[ $verilator_toolchain_failed -gt 0 ]]; then
        return 1
    fi
    return 0
}

# --- Main session logging (Rocket-style single GENERATION_LOG; all stdout/stderr mirrored) ---
exec > >(tee -a "$GENERATION_LOG") 2>&1

log "====================================================================="
log "MemPool RTL generation / snapshot"
log "GENERATION_LOG: $GENERATION_LOG"
log "SOURCE_MEMPOOL_DIR: $SOURCE_MEMPOOL_DIR"
log "WORK_DIR: $MEMPOOL_DIR"
log "Commit: $MEMPOOL_COMMIT_ID"
log "Dataset: $DATASET_DIR"
log "Verification enabled: $VERIFY_SYNTAX"
log "====================================================================="

prepare_dataset_workdir

if [[ "$VERIFY_ONLY" == true ]]; then
    mkdir -p "$DATASET_DIR"
    if [[ "$VERIFY_SYNTAX" == true ]]; then
        verify_mempool_rtl || warning "Verification reported failures; see $DATASET_DIR/verification/"
    else
        warning "--verify-only with verification disabled is a no-op."
    fi
    success "MemPool generation completed (--verify-only)."
    exit 0
fi

if [[ "$SKIP_CHECKOUT" != true ]]; then
    info "Running make bender (upstream: install/bender/)"
    make -C "$MEMPOOL_DIR" bender
    info "Running make update-deps (bender checkout)"
    make -C "$MEMPOOL_DIR" update-deps
else
    warning "Skipped make bender / make update-deps (--skip-checkout)"
fi

if [[ "$VERIFY_SYNTAX" == true ]]; then
    verify_mempool_rtl || warning "Verification reported failures; see $DATASET_DIR/verification/"
fi

VENDORED_BENDER=""
if [[ -x "$MEMPOOL_DIR/install/bender/bender" ]]; then
    VENDORED_BENDER="$("$MEMPOOL_DIR/install/bender/bender" --version 2>/dev/null || echo unknown)"
fi

SUMMARY="$DATASET_DIR/mempool_summary.txt"
{
    echo "mempool SCORE snapshot (pulp-platform/mempool)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $SOURCE_MEMPOOL_DIR"
    echo "Dataset workdir: $MEMPOOL_DIR"
    echo "Git commit (short): $MEMPOOL_COMMIT_ID"
    echo "Git commit (full): $(git -C "$SOURCE_MEMPOOL_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender (PATH): $(command_exists bender && bender --version 2>/dev/null || echo not_on_path)"
    echo "bender (install/bender): ${VENDORED_BENDER:-not_present}"
    echo "RTL verification enabled: $VERIFY_SYNTAX"
    echo ""
    echo "RTL roots in snapshot: $BUNDLE_DIR/hardware (top-level SV) and $BUNDLE_DIR/hardware/deps (Bender IPs)."
    echo "Upstream RTL sim: cd tools/mempool/hardware && make compile (ModelSim) or make verilate (Verilator)."
    echo "See https://github.com/pulp-platform/mempool and tools/mempool/README.md"
    echo "Bundle path: $BUNDLE_DIR"
    echo "Verification:"
    echo "  Deps vs Bender.lock: $( [[ "$SKIP_CHECKOUT" == true ]] && echo SKIPPED_BY_FLAG || echo PASS )"
    echo "  bender flist-plus (Verilator view): N/A"
    if [[ "$VERIFY_SYNTAX" == true ]]; then
        echo "  Verilator lint: PASS"
    else
        echo "  Verilator lint: SKIPPED_BY_FLAG"
    fi
    echo "  Verilator elaboration: N/A"
    echo "  Verilator simulation: N/A"
    echo "  Logs: $DATASET_DIR/verification/"
    echo "Generation log: $GENERATION_LOG"
} >"$SUMMARY"

success "Wrote $SUMMARY"
log "====================================================================="
success "MemPool RTL generation completed! Results under: $DATASET_DIR"
log "====================================================================="
