#!/usr/bin/env bash
#
# Snapshot pulp-platform/ara after Bender IP checkout under hardware/deps (and Verilator patch).
# Output: datasets/ara/<short_sha>/source_snapshot/ (full tree minus .git dirs).
#
# Matches SCORE's rv_tracer role: resolve hardware IPs and materialize a dataset tree. This does not
# build LLVM, Spike, or full make verilate / Questa sim (see upstream README). Verification (unless
# --no-verify): Bender.lock vs hardware/deps, bender flist-plus, and Verilator --lint-only on that
# flist (slow; needs verilator on PATH). Use --skip-verilator-lint to skip only the Verilator step.
#
# Usage (from repository root):
#   ./scripts/generate_ara.sh
#   ./scripts/generate_ara.sh --skip-checkout
#   ./scripts/generate_ara.sh --skip-apply-patches
#   ./scripts/generate_ara.sh --no-verify
#   ./scripts/generate_ara.sh --skip-verilator-lint
#   ./scripts/generate_ara.sh --verify-only
#   ./scripts/generate_ara.sh --jobs 8
#
# Session logs: logs/ara_generation/generation_<timestamp>.log (see docs/PROMPTS_SHELL.md).
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/ara"
ARA_DIR="$TOOL_DIR"
ARA_HW="$ARA_DIR/hardware"

SKIP_CHECKOUT=false
SKIP_APPLY_PATCHES=false
VERIFY_ENABLED=true
WITH_VERILATOR_LINT=true
VERIFY_ONLY=false
DEFAULT_PARALLEL_JOBS=4
PARALLEL_JOBS="$DEFAULT_PARALLEL_JOBS"
MAX_PARALLEL_JOBS=16

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_ara

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }

command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

In tools/ara/hardware (upstream flow):
  - make bender     (vendors Bender next to the hardware Makefile)
  - make checkout   (bender checkout into hardware/deps per Bender.lock)
  - apply patches/0001-tech-cells-generic-sram.patch when needed (idempotent)

Copy into datasets/ara/<git-short-sha>/source_snapshot/:
  - Full ara tree (excluding .git directories) after checkout

Verification (after checkout/patch, before rsync), under datasets/ara/<sha>/verification/:
  - Bender.lock package directories exist under hardware/deps
  - bender script flist-plus for the Verilator view (same tags/defines as upstream Makefile)
  - Verilator --lint-only on that flist (default; slow; requires verilator on PATH)

Options:
  -h, --help                 Show this help
  --skip-checkout            Do not run make bender / make checkout (snapshot current tree)
  --skip-apply-patches       Do not run the tech_cells_generic patch step
  --no-verify                Skip all verification steps
  --skip-verilator-lint      Skip Verilator lint (still runs deps + bender flist checks)
  --with-verilator-lint      Same as default (kept for backward compatibility)
  --verify-only              Only run verification (no checkout / patch / rsync snapshot)
  --jobs N                   Parallel make jobs for bender/checkout (capped at ${MAX_PARALLEL_JOBS})

Environment:
  ARA_CONFIGURATION          Ara config name (default: default); must match config/<name>.mk

Requires: git, make, rsync (unless --verify-only), verilator (unless --skip-verilator-lint or --no-verify); submodule tools/ara initialized.
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
        --skip-apply-patches)
            SKIP_APPLY_PATCHES=true
            shift
            ;;
        --no-verify)
            VERIFY_ENABLED=false
            shift
            ;;
        --skip-verilator-lint)
            WITH_VERILATOR_LINT=false
            shift
            ;;
        --with-verilator-lint)
            WITH_VERILATOR_LINT=true
            shift
            ;;
        --verify-only)
            VERIFY_ONLY=true
            shift
            ;;
        --jobs)
            if [[ -z "${2:-}" ]] || ! [[ "$2" =~ ^[0-9]+$ ]] || [[ "$2" -lt 1 ]]; then
                err "--jobs requires a positive integer"
                exit 1
            fi
            PARALLEL_JOBS="$2"
            shift 2
            ;;
        *)
            err "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/ara_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/ara_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$ARA_HW" ]]; then
    err "Missing $ARA_HW — run: git submodule update --init --recursive tools/ara"
    exit 1
fi

if [[ "$VERIFY_ONLY" != true ]] && ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    local repo_path="$1"
    if git -C "$repo_path" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

apply_tech_cells_patch() {
    local patch_file tcg
    # Upstream Makefile applies from hardware/deps/tech_cells_generic via ../../patches/...
    patch_file="$ARA_HW/patches/0001-tech-cells-generic-sram.patch"
    tcg="$ARA_HW/deps/tech_cells_generic"
    if [[ ! -f "$patch_file" ]]; then
        warn "Patch file missing: $patch_file"
        return 0
    fi
    if [[ ! -d "$tcg" ]]; then
        warn "deps/tech_cells_generic not found (checkout may have failed): $tcg"
        return 0
    fi
    if git -C "$tcg" apply --check "$patch_file" 2>/dev/null; then
        info "Applying $patch_file"
        git -C "$tcg" apply "$patch_file"
    elif git -C "$tcg" apply --check --reverse "$patch_file" 2>/dev/null; then
        info "tech_cells_generic patch already applied; skipping"
    else
        err "Patch does not apply cleanly to $tcg (unexpected deps state)"
        exit 1
    fi
}

read_ara_hw_params() {
    local cfg_file line
    ARA_CFG_NAME="${ARA_CONFIGURATION:-default}"
    cfg_file="$ARA_DIR/config/${ARA_CFG_NAME}.mk"
    ARA_NR_LANES=4
    ARA_VLEN=4096
    if [[ -f "$cfg_file" ]]; then
        line=$(grep -E '^[[:space:]]*nr_lanes[[:space:]]*\?=' "$cfg_file" | head -1 || true)
        if [[ -n "$line" ]]; then
            ARA_NR_LANES=$(echo "$line" | sed -E 's/^[[:space:]]*nr_lanes[[:space:]]*\?=[[:space:]]*//')
        fi
        line=$(grep -E '^[[:space:]]*vlen[[:space:]]*\?=' "$cfg_file" | head -1 || true)
        if [[ -n "$line" ]]; then
            ARA_VLEN=$(echo "$line" | sed -E 's/^[[:space:]]*vlen[[:space:]]*\?=[[:space:]]*//')
        fi
    fi
}

verify_bender_lock_deps() {
    local lock="$ARA_DIR/Bender.lock"
    local deps_root="$ARA_HW/deps"
    local pkg missing=0 out
    if [[ ! -f "$lock" ]]; then
        err "Bender.lock missing: $lock"
        return 1
    fi
    out="$VERIFICATION_DIR/deps_check.txt"
    {
        echo "Bender.lock packages vs $deps_root"
        echo "---"
    } > "$out"
    while IFS= read -r line || [[ -n "$line" ]]; do
        [[ "$line" =~ ^[[:space:]]{2}([a-zA-Z0-9_]+):[[:space:]]*$ ]] || continue
        pkg="${BASH_REMATCH[1]}"
        if [[ -d "$deps_root/$pkg" ]]; then
            echo "OK  $pkg" >> "$out"
        else
            echo "MISSING  $pkg" >> "$out"
            missing=1
        fi
    done < "$lock"
    if [[ "$missing" -ne 0 ]]; then
        err "One or more Bender.lock packages missing under hardware/deps (see $out)"
        return 1
    fi
    ok "Verification: all Bender.lock packages present under hardware/deps"
    return 0
}

verify_bender_flist() {
    local bender_bin stderr_log script_out
    bender_bin="$ARA_HW/bender"
    if [[ ! -x "$bender_bin" ]]; then
        err "Missing executable $bender_bin (run make -C hardware bender)"
        return 1
    fi
    read_ara_hw_params
    stderr_log="$VERIFICATION_DIR/bender_flist_${ARA_CFG_NAME}.stderr.log"
    script_out="$VERIFICATION_DIR/bender_script_${ARA_CFG_NAME}"
    # Bender resolves the IP root from cwd (must be tools/ara/hardware, same as upstream Makefile).
    if ! ( cd "$ARA_HW" && ./bender script flist-plus \
        -t rtl -t cv64a6_imafdcv_sv39 \
        -t tech_cells_generic_include_tc_sram -t tech_cells_generic_include_tc_clk \
        -t exclude_first_pass_decoder -t ara_test -t cva6_test -t verilator \
        -t tech_cells_generic_exclude_deprecated \
        --define "NR_LANES=${ARA_NR_LANES}" --define "VLEN=${ARA_VLEN}" \
        --define ARIANE_ACCELERATOR_PORT=1 --define COMMON_CELLS_ASSERTS_OFF \
        > "$script_out" 2> "$stderr_log" ); then
        err "bender script flist-plus failed (stderr: $stderr_log)"
        return 1
    fi
    if [[ ! -s "$script_out" ]]; then
        err "bender flist output empty: $script_out"
        return 1
    fi
    ok "Verification: bender script flist-plus OK (config ${ARA_CFG_NAME}, $(wc -l < "$script_out") file list lines)"
    return 0
}

verify_verilator_lint() {
    local script_out log st
    read_ara_hw_params
    script_out="$VERIFICATION_DIR/bender_script_${ARA_CFG_NAME}"
    log="$VERIFICATION_DIR/verilator_lint_${ARA_CFG_NAME}.log"
    if ! command_exists verilator; then
        err "Verilator lint requires verilator on PATH (install Verilator or use --skip-verilator-lint)"
        return 1
    fi
    if [[ ! -f "$script_out" ]]; then
        err "Missing $script_out (flist step must run first)"
        return 1
    fi
    info "Verification: running Verilator lint (slow; top ara_tb_verilator)…"
    set +e
    verilator --lint-only -sv --no-timing \
        -f "$script_out" \
        -GNrLanes="${ARA_NR_LANES}" -GVLEN="${ARA_VLEN}" \
        -Wno-fatal -Wno-PINCONNECTEMPTY -Wno-BLKANDNBLK -Wno-CASEINCOMPLETE -Wno-CMPCONST \
        -Wno-LATCH -Wno-LITENDIAN -Wno-UNOPTFLAT -Wno-UNPACKED -Wno-UNSIGNED -Wno-WIDTH \
        -Wno-WIDTHCONCAT -Wno-ENUMVALUE -Wno-COMBDLY \
        "$ARA_HW/tb/verilator/waiver.vlt" \
        --top-module ara_tb_verilator \
        > "$log" 2>&1
    st=$?
    set -e
    if [[ "$st" -ne 0 ]]; then
        err "Verilator lint failed (exit $st); see $log"
        return 1
    fi
    ok "Verification: Verilator lint finished (exit 0; see $log for warnings)"
    return 0
}

run_verification() {
    VERIFICATION_DIR="$DATASET_DIR/verification"
    mkdir -p "$VERIFICATION_DIR"
    read_ara_hw_params
    VERIFY_DEPS_RESULT=SKIPPED
    VERIFY_FLIST_RESULT=SKIPPED
    VERIFY_VERILATOR_RESULT=SKIPPED

    info "Running verification → $VERIFICATION_DIR"
    verify_bender_lock_deps || return 1
    VERIFY_DEPS_RESULT=PASS

    verify_bender_flist || return 1
    VERIFY_FLIST_RESULT=PASS

    if [[ "$WITH_VERILATOR_LINT" == true ]]; then
        verify_verilator_lint || return 1
        VERIFY_VERILATOR_RESULT=PASS
    else
        info "Verification: skipping Verilator lint (--skip-verilator-lint)"
        VERIFY_VERILATOR_RESULT=SKIPPED
    fi

    local summ="$VERIFICATION_DIR/verification_summary.txt"
    {
        echo "Ara verification summary"
        echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
        echo "ARA_CONFIGURATION: ${ARA_CONFIGURATION:-default}"
        echo "nr_lanes / vlen: ${ARA_NR_LANES:-?} / ${ARA_VLEN:-?}"
        echo "Deps vs Bender.lock: $VERIFY_DEPS_RESULT"
        echo "bender script flist-plus: $VERIFY_FLIST_RESULT"
        echo "Verilator lint: $VERIFY_VERILATOR_RESULT"
    } > "$summ"
    ok "Wrote $summ"
}

ARA_COMMIT_ID=$(get_commit_id "$ARA_DIR")
DATASET_DIR="$PROJECT_ROOT/datasets/ara/$ARA_COMMIT_ID"
LOG_ROOT="$PROJECT_ROOT/logs/ara_generation"
DATASET_LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
GENERATION_LOG="$LOG_ROOT/generation_${TIMESTAMP}.log"

mkdir -p "$LOG_ROOT" "$DATASET_LOG_DIR"
touch "$GENERATION_LOG"

exec > >(tee -a "$GENERATION_LOG") 2>&1

if [[ "$PARALLEL_JOBS" -gt "$MAX_PARALLEL_JOBS" ]]; then
    warn "Clamping --jobs $PARALLEL_JOBS to $MAX_PARALLEL_JOBS"
    PARALLEL_JOBS="$MAX_PARALLEL_JOBS"
fi

info "====================================================================="
info "Ara RTL generation / snapshot"
info "GENERATION_LOG: $GENERATION_LOG"
info "ARA_DIR: $ARA_DIR"
info "Commit: $ARA_COMMIT_ID"
info "Dataset: $DATASET_DIR"
info "Parallel jobs (make): $PARALLEL_JOBS"
info "====================================================================="

if [[ "$VERIFY_ONLY" == true ]]; then
    mkdir -p "$DATASET_DIR"
    VERIFY_DEPS_RESULT=SKIPPED
    VERIFY_FLIST_RESULT=SKIPPED
    VERIFY_VERILATOR_RESULT=SKIPPED
    if [[ "$VERIFY_ENABLED" == true ]]; then
        run_verification || exit 1
    else
        warn "--verify-only with --no-verify is a no-op."
    fi
    ok "generate_ara.sh completed (--verify-only)."
    exit 0
fi

if [[ "$SKIP_CHECKOUT" != true ]]; then
    info "Running make -C hardware bender (-j$PARALLEL_JOBS)"
    make -C "$ARA_HW" -j"$PARALLEL_JOBS" bender
    info "Running make -C hardware checkout (-j$PARALLEL_JOBS)"
    make -C "$ARA_HW" -j"$PARALLEL_JOBS" checkout
else
    warn "Skipped make bender / make checkout (--skip-checkout)"
fi

if [[ "$SKIP_APPLY_PATCHES" != true ]]; then
    apply_tech_cells_patch
else
    warn "Skipped apply-patches (--skip-apply-patches)"
fi

VERIFY_DEPS_RESULT=SKIPPED
VERIFY_FLIST_RESULT=SKIPPED
VERIFY_VERILATOR_RESULT=SKIPPED
if [[ "$VERIFY_ENABLED" == true ]]; then
    run_verification || exit 1
else
    warn "Verification skipped (--no-verify)"
fi

info "Copying sources to $BUNDLE_DIR"
mkdir -p "$BUNDLE_DIR"

rsync -a --exclude '.git' "$ARA_DIR/" "$BUNDLE_DIR/"

SUMMARY="$DATASET_DIR/ara_summary.txt"
{
    echo "ara SCORE snapshot (pulp-platform/ara)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $ARA_DIR"
    echo "Git commit (short): $ARA_COMMIT_ID"
    echo "Git commit (full): $(git -C "$ARA_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender (PATH): $(command_exists bender && bender --version 2>/dev/null || echo not_on_path)"
    echo ""
    echo "Verification:"
    echo "  Deps vs Bender.lock: $VERIFY_DEPS_RESULT"
    echo "  bender flist-plus (Verilator view): $VERIFY_FLIST_RESULT"
    echo "  Verilator lint: $VERIFY_VERILATOR_RESULT"
    echo "  Verilator elaboration: N/A"
    echo "  Verilator simulation: N/A"
    echo "  Logs: $DATASET_DIR/verification/"
    echo ""
    echo "Upstream hardware sim: cd tools/ara/hardware && make compile (Questa) or make verilate (Verilator; needs install/verilator per upstream)."
    echo "See https://github.com/pulp-platform/ara and tools/ara/README.md"
    echo "Bundle path: $BUNDLE_DIR"
    echo "Generation log: $GENERATION_LOG"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_ara.sh completed."
