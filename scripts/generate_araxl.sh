#!/usr/bin/env bash
#
# Snapshot pulp-platform/AraXL RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/araxl/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# Upstream hardware already supports Verilator (make verilate, make simv); QuestaSim is optional
# unless you run make compile / sim. Icarus Verilog cannot substitute for this RTL stack.
#
# Matches SCORE conventions (docs/PROMPTS_SHELL.md): session logs under logs/araxl_generation/,
# dataset under datasets/araxl/<8-char commit>/, optional Verilator lint like generate_ara.sh.
#
# Default is `bender checkout` (uses upstream Bender.lock). `bender update` can fail when
# upstream manifests disagree; opt in with --bender-update.
#
# Usage (from repository root):
#   ./scripts/generate_araxl.sh
#   ./scripts/generate_araxl.sh --skip-checkout
#   ./scripts/generate_araxl.sh --bender-update
#   ./scripts/generate_araxl.sh --no-verify
#   ./scripts/generate_araxl.sh --skip-verilator-lint
#   ./scripts/generate_araxl.sh --verify-only
#   ./scripts/generate_araxl.sh --jobs 8
#   ./scripts/generate_araxl.sh --skip-verilate
#   ./scripts/generate_araxl.sh --no-build-verilator   (do not run upstream make verilator when incomplete)
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
TOOL_DIR="$PROJECT_ROOT/tools/araxl"
ARAXL_DIR="$TOOL_DIR"
ARAXL_HW="$ARAXL_DIR/hardware"

SKIP_CHECKOUT=false
BENDER_UPDATE=false
VERIFY_ENABLED=true
WITH_VERILATOR_LINT=true
VERIFY_ONLY=false
WITH_VERILATE_BUILD=true
BUILD_UPSTREAM_VERILATOR=true
CLEAN_TOOL_ARTIFACTS=true
DEFAULT_PARALLEL_JOBS=4
PARALLEL_JOBS="$DEFAULT_PARALLEL_JOBS"
MAX_PARALLEL_JOBS=16

# GNU make variable assignments forwarded to tools/araxl/hardware/Makefile (SCORE does not patch tools/).
# Default questa_cmd=true silences the Questa PATH probe when running bender/verilate-only goals.
# Example: ARAXL_HW_MAKE_OVERRIDES="questa_cmd=true veril_path=/usr/bin/"
ARAXL_HW_MAKE_OVERRIDES="${ARAXL_HW_MAKE_OVERRIDES:-questa_cmd=true}"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_araxl

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }

command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

In tools/araxl/hardware (upstream flow; SCORE passes make overrides, never edits tools/):
  - make bender          (vendors pinned Bender; default override questa_cmd=true avoids Questa noise)
  - bender checkout      (default; honor Bender.lock) or bender update (--bender-update)
  - make verilate (default, after verification) using Verilator from PATH or ARAXL_VERIL_PATH; use
    --skip-verilate for snapshot-only runs. Iverilog is not supported for this design.

Copy into datasets/araxl/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including hardware/deps and .bender state under the repo root

Verification (unless --no-verify), under datasets/araxl/<sha>/verification/:
  RTL (static):
  - Bender.lock → hardware/deps directory check
  - bender script flist-plus (Verilator-tagged RTL closure)
  - Verilator --lint-only on that list (top ara_tb_verilator)
  RTL (compiled model, default when a full Verilator install exists):
  - upstream make verilate (uses tools/araxl/install/verilator/bin if present, else PATH)
  - If no usable verilator_bin layout: by default runs upstream make verilator (slow); use --no-build-verilator to skip

Options:
  -h, --help                 Show this help
  --skip-checkout            Do not run make bender / bender checkout|update (snapshot current tree)
  --bender-update            Run bender update instead of checkout (experimental)
  --no-verify                Skip all verification steps
  --skip-verilator-lint      Skip Verilator lint (still runs deps + bender flist checks)
  --verify-only              Only run verification (no checkout / patch / rsync snapshot)
  --skip-verilate            Skip upstream make verilate (default is to run it after verification)
  --verilate                 Same as default (kept for explicit scripts); does not change behavior
  --build-verilator          Default behavior (kept for explicit scripts); build Verilator if layout incomplete
  --no-build-verilator       Do not build upstream Verilator; skip make verilate if only incomplete distro verilator
  --keep-tool-artifacts      Keep generated artifacts in tools/araxl (default cleans known untracked outputs)
  --jobs N                   Parallel make jobs for make bender (capped at ${MAX_PARALLEL_JOBS})

Environment:
  ARA_CONFIGURATION          Ara/AraXL config name (default: default); must match config/<name>.mk
  ARAXL_CONFIGURATION        Same as ARA_CONFIGURATION if the former is unset
  ARAXL_NR_CLUSTERS          Override nr_clusters for bender defines (default: 2, matches Makefile)
  ARAXL_VERIL_PATH           Directory for upstream Makefile veril_path (contains verilator binary);
                             default: dirname of verilator on PATH (unless --skip-verilate)
  ARAXL_HW_MAKE_OVERRIDES    Space-separated VAR=value assignments for every make -C hardware ...
                             (default: questa_cmd=true)
  ARAXL_FORCE_VERILATE       If 1/true, run make verilate even when verilator_bin is not detected
  ARAXL_AUTO_BUILD_VERILATOR If 0/false/no/off, never run upstream Verilator build; if 1/true, build when needed (default)

Requires: git, make, rsync (unless --verify-only); verilator on PATH for lint unless --skip-verilator-lint;
  for make verilate prefer tools/araxl/install/verilator (from upstream make verilator; default auto-build).
Submodule tools/araxl initialized.
See https://github.com/pulp-platform/AraXL
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
        --bender-update)
            BENDER_UPDATE=true
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
        --verify-only)
            VERIFY_ONLY=true
            shift
            ;;
        --verilate)
            WITH_VERILATE_BUILD=true
            shift
            ;;
        --skip-verilate)
            WITH_VERILATE_BUILD=false
            shift
            ;;
        --build-verilator)
            BUILD_UPSTREAM_VERILATOR=true
            shift
            ;;
        --no-build-verilator)
            BUILD_UPSTREAM_VERILATOR=false
            shift
            ;;
        --keep-tool-artifacts)
            CLEAN_TOOL_ARTIFACTS=false
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
if [[ -f "$PROJECT_ROOT/scripts/araxl_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/araxl_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$ARAXL_DIR" ]]; then
    err "Missing $ARAXL_DIR — run: git submodule update --init --recursive tools/araxl"
    exit 1
fi

if [[ "$VERIFY_ONLY" != true ]] && ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

if ! command_exists make; then
    err "make not found (required for hardware/bender vendoring)"
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

read_araxl_hw_params() {
    local cfg_file line
    ARAXL_CFG_NAME="${ARA_CONFIGURATION:-${ARAXL_CONFIGURATION:-default}}"
    cfg_file="$ARAXL_DIR/config/${ARAXL_CFG_NAME}.mk"
    ARAXL_NR_LANES=4
    ARAXL_VLEN=4096
    ARAXL_NR_CLUSTERS="${ARAXL_NR_CLUSTERS:-2}"
    if [[ -f "$cfg_file" ]]; then
        line=$(grep -E '^[[:space:]]*nr_lanes[[:space:]]*\?=' "$cfg_file" | head -1 || true)
        if [[ -n "$line" ]]; then
            ARAXL_NR_LANES=$(echo "$line" | sed -E 's/^[[:space:]]*nr_lanes[[:space:]]*\?=[[:space:]]*//')
        fi
        line=$(grep -E '^[[:space:]]*vlen[[:space:]]*\?=' "$cfg_file" | head -1 || true)
        if [[ -n "$line" ]]; then
            ARAXL_VLEN=$(echo "$line" | sed -E 's/^[[:space:]]*vlen[[:space:]]*\?=[[:space:]]*//')
        fi
    fi
}

araxl_hw_make() {
    # shellcheck disable=SC2086
    make -C "$ARAXL_HW" -j"$PARALLEL_JOBS" ${ARAXL_HW_MAKE_OVERRIDES} "$@"
}

# Upstream hardware/Makefile runs $(shell find deps ...) before deps exists; avoid find errors.
ensure_hw_deps_dir() {
    mkdir -p "$ARAXL_HW/deps"
}

# Benign Bender manifest noise ([W03] unknown YAML field). Match loosely: bender may use stdout/stderr,
# spacing, or Unicode quotes; grep -F on a fixed prefix missed some lines.
filter_bender_w03() {
    awk '!(/\[[Ww]03\]/ && /Ignoring unknown field/) { print; fflush() }'
}

run_araxl_bender() {
    local subcmd="$1" st=0
    shift
    pushd "$ARAXL_HW" >/dev/null || return 1
    ./bender "$subcmd" "$@" 2>&1 | filter_bender_w03
    st=${PIPESTATUS[0]}
    popd >/dev/null || true
    return "$st"
}

# Hierarchical make verilate needs verilator + verilator_bin in the same prefix; /usr/bin layouts
# on Alma/RHEL also need /usr/share/verilator/verilator_bin.
araxl_verilator_dir_usable_for_hier() {
    local d="$1"
    [[ -z "$d" ]] && return 1
    case "$d" in */) ;; *) d="${d}/" ;; esac
    [[ -x "${d}verilator" && -x "${d}verilator_bin" ]] || return 1
    if [[ "$d" == "/usr/bin/" ]]; then
        [[ -x /usr/share/verilator/verilator_bin ]] || return 1
    fi
    return 0
}

araxl_verilator_ok_for_upstream_verilate() {
    if [[ "${ARAXL_FORCE_VERILATE:-}" == "1" ]] || [[ "${ARAXL_FORCE_VERILATE:-}" == "true" ]]; then
        return 0
    fi
    local cand=""
    for cand in "${ARAXL_VERIL_PATH:-}" "${ARAXL_DIR}/install/verilator/bin"; do
        [[ -z "$cand" ]] && continue
        araxl_verilator_dir_usable_for_hier "$cand" && return 0
    done
    if command_exists verilator; then
        cand=$(dirname "$(command -v verilator)")
        araxl_verilator_dir_usable_for_hier "$cand" && return 0
    fi
    if [[ -n "${VERILATOR_ROOT:-}" ]]; then
        araxl_verilator_dir_usable_for_hier "${VERILATOR_ROOT}/bin" && return 0
    fi
    return 1
}

# Sets ARAXL_RESOLVED_VERIL_PATH with trailing slash (same order as araxl_verilator_ok_for_upstream_verilate).
araxl_resolve_veril_path_string() {
    ARAXL_RESOLVED_VERIL_PATH=""
    local cand=""
    for cand in "${ARAXL_VERIL_PATH:-}" "${ARAXL_DIR}/install/verilator/bin"; do
        [[ -z "$cand" ]] && continue
        if araxl_verilator_dir_usable_for_hier "$cand"; then
            case "$cand" in */) ARAXL_RESOLVED_VERIL_PATH="$cand" ;; *) ARAXL_RESOLVED_VERIL_PATH="${cand}/" ;; esac
            return 0
        fi
    done
    if command_exists verilator; then
        cand=$(dirname "$(command -v verilator)")
        if araxl_verilator_dir_usable_for_hier "$cand"; then
            case "$cand" in */) ARAXL_RESOLVED_VERIL_PATH="$cand" ;; *) ARAXL_RESOLVED_VERIL_PATH="${cand}/" ;; esac
            return 0
        fi
    fi
    if [[ -n "${VERILATOR_ROOT:-}" ]]; then
        cand="${VERILATOR_ROOT}/bin"
        if araxl_verilator_dir_usable_for_hier "$cand"; then
            ARAXL_RESOLVED_VERIL_PATH="${cand}/"
            return 0
        fi
    fi
    return 1
}

# Upstream `make -C tools/araxl verilator` installs verilator_bin under prefix/bin. Hierarchical
# --hierarchical runs still exec prefix/share/verilator/verilator_bin (see generated .mk files).
# Alma/RHEL distro packages place verilator_bin under share; match that layout with a symlink.
araxl_fix_upstream_verilator_hier_layout() {
    local prefix="${1:-}"
    [[ -z "$prefix" ]] && return 0
    prefix="${prefix%/}"
    local bin_dir share_dir
    bin_dir="${prefix}/bin"
    share_dir="${prefix}/share/verilator"
    [[ -d "$bin_dir" && -d "$share_dir" ]] || return 0
    if [[ -x "$bin_dir/verilator_bin" && ! -x "$share_dir/verilator_bin" ]]; then
        info "Symlink $share_dir/verilator_bin -> ../../bin/verilator_bin (hierarchical Verilator)"
        ln -sf ../../bin/verilator_bin "$share_dir/verilator_bin"
    fi
    return 0
}

build_araxl_upstream_verilator() {
    info "Initializing submodule toolchain/verilator (if needed)…"
    git -C "$ARAXL_DIR" submodule update --init --recursive toolchain/verilator || return 1
    command_exists clang || {
        err "Upstream Verilator build needs clang (e.g. dnf install clang gcc-c++)"
        return 1
    }
    local need
    for need in autoconf automake flex bison perl; do
        command_exists "$need" || {
            err "Missing $need for Verilator build — run: ./scripts/install_araxl.sh --with-verilator-build-deps"
            return 1
        }
    done
    info "Building Verilator into tools/araxl/install/verilator (upstream Makefile; long-running)…"
    make -C "$ARAXL_DIR" -j"$PARALLEL_JOBS" verilator || return 1
    araxl_fix_upstream_verilator_hier_layout "${ARAXL_DIR}/install/verilator"
}

run_araxl_verilate_build() {
    if ! araxl_resolve_veril_path_string; then
        err "No usable veril_path for make verilate after resolution"
        return 1
    fi
    local vdir="$ARAXL_RESOLVED_VERIL_PATH"
    if [[ "$vdir" == "${ARAXL_DIR}/install/verilator/bin/" ]]; then
        araxl_fix_upstream_verilator_hier_layout "${ARAXL_DIR}/install/verilator"
    fi
    info "make verilate (veril_path=$vdir; upstream Makefile; SCORE make overrides only)"
    local st=0
    araxl_hw_make "veril_path=${vdir}" verilate 2>&1 | filter_bender_w03
    st=${PIPESTATUS[0]}
    return "$st"
}

is_tracked_path_in_araxl() {
    local rel="$1"
    git -C "$ARAXL_DIR" ls-files --error-unmatch "$rel" >/dev/null 2>&1
}

cleanup_araxl_generated_artifacts() {
    local rel path
    local -a generated_paths=(
        ".bender"
        "hardware/build"
        "hardware/deps"
        "install"
    )
    for rel in "${generated_paths[@]}"; do
        path="$ARAXL_DIR/$rel"
        [[ -e "$path" ]] || continue
        if is_tracked_path_in_araxl "$rel"; then
            warn "Skip cleanup for tracked path: $path"
            continue
        fi
        info "Cleaning generated path from tools/araxl: $path"
        rm -rf "$path"
    done
}

apply_tech_cells_patch() {
    local patch_file tcg
    patch_file="$ARAXL_HW/patches/0001-tech-cells-generic-sram.patch"
    tcg="$ARAXL_HW/deps/tech_cells_generic"
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

ensure_hw_bender() {
    if [[ ! -d "$ARAXL_HW" ]]; then
        err "Missing $ARAXL_HW"
        return 1
    fi
    ensure_hw_deps_dir
    info "make -C $ARAXL_HW bender (-j$PARALLEL_JOBS; ARAXL_HW_MAKE_OVERRIDES=${ARAXL_HW_MAKE_OVERRIDES})"
    araxl_hw_make bender
}

verify_bender_lock_deps() {
    local lock="$ARAXL_DIR/Bender.lock"
    local deps_root="$ARAXL_HW/deps"
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
    bender_bin="$ARAXL_HW/bender"
    if [[ ! -x "$bender_bin" ]]; then
        err "Missing executable $bender_bin (run make -C hardware bender)"
        return 1
    fi
    read_araxl_hw_params
    stderr_log="$VERIFICATION_DIR/bender_flist_${ARAXL_CFG_NAME}.stderr.log"
    script_out="$VERIFICATION_DIR/bender_script_${ARAXL_CFG_NAME}"
    local bender_extra=()
    bender_extra+=(--define "NR_LANES=${ARAXL_NR_LANES}" --define "VLEN=${ARAXL_VLEN}" --define ARIANE_ACCELERATOR_PORT=1)
    if [[ "${ARAXL_NR_CLUSTERS:-2}" != "0" ]]; then
        bender_extra+=(--define USE_CLUSTER=1 --define "NR_CLUSTERS=${ARAXL_NR_CLUSTERS}")
    fi
    bender_extra+=(--define COMMON_CELLS_ASSERTS_OFF)
    if ! ( cd "$ARAXL_HW" && ./bender script flist-plus \
        -t rtl -t cv64a6_imafdcv_sv39 \
        -t tech_cells_generic_include_tc_sram -t tech_cells_generic_include_tc_clk \
        -t tech_cells_generic_exclude_deprecated \
        -t ara_test -t cva6_test -t verilator \
        "${bender_extra[@]}" \
        > "$script_out" 2> >(filter_bender_w03 >> "$stderr_log") ); then
        err "bender script flist-plus failed (stderr: $stderr_log)"
        return 1
    fi
    if [[ ! -s "$script_out" ]]; then
        err "bender flist output empty: $script_out"
        return 1
    fi
    ok "Verification: bender script flist-plus OK (config ${ARAXL_CFG_NAME}, $(wc -l < "$script_out") file list lines)"
    return 0
}

verify_verilator_lint() {
    local script_out log st
    read_araxl_hw_params
    script_out="$VERIFICATION_DIR/bender_script_${ARAXL_CFG_NAME}"
    log="$VERIFICATION_DIR/verilator_lint_${ARAXL_CFG_NAME}.log"
    if ! command_exists verilator; then
        err "Verilator lint requires verilator on PATH (./scripts/install_araxl.sh --with-verilator or use --skip-verilator-lint)"
        return 1
    fi
    if [[ ! -f "$script_out" ]]; then
        err "Missing $script_out (flist step must run first)"
        return 1
    fi
    info "Verification: running Verilator lint (slow; top ara_tb_verilator)…"
    set +e
    # ara_tb_verilator exposes NrLanes and NrClusters only (VLEN flows from `define via bender).
    verilator --lint-only -sv --no-timing \
        -f "$script_out" \
        -GNrLanes="${ARAXL_NR_LANES}" -GNrClusters="${ARAXL_NR_CLUSTERS}" \
        -Wno-fatal -Wno-PINCONNECTEMPTY -Wno-BLKANDNBLK -Wno-CASEINCOMPLETE -Wno-CMPCONST \
        -Wno-LATCH -Wno-LITENDIAN -Wno-UNOPTFLAT -Wno-UNPACKED -Wno-UNSIGNED -Wno-WIDTH \
        -Wno-WIDTHCONCAT -Wno-ENUMVALUE -Wno-COMBDLY \
        "$ARAXL_HW/tb/verilator/waiver.vlt" \
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
    ensure_hw_bender || return 1
    VERIFICATION_DIR="$DATASET_DIR/verification"
    mkdir -p "$VERIFICATION_DIR"
    read_araxl_hw_params
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
        echo "AraXL RTL verification summary"
        echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
        echo "ARA_CONFIGURATION / ARAXL_CONFIGURATION: ${ARAXL_CFG_NAME}"
        echo "nr_lanes / vlen / nr_clusters: ${ARAXL_NR_LANES:-?} / ${ARAXL_VLEN:-?} / ${ARAXL_NR_CLUSTERS:-?}"
        echo ""
        echo "Static RTL checks:"
        echo "  1) Bender.lock packages under hardware/deps: $VERIFY_DEPS_RESULT"
        echo "  2) bender flist-plus (Verilator-tagged file closure): $VERIFY_FLIST_RESULT"
        echo "  3) Verilator --lint-only (top ara_tb_verilator): $VERIFY_VERILATOR_RESULT"
        echo ""
        echo "Compiled RTL (make verilate) is appended below after the generation step."
    } > "$summ"
    ok "Wrote $summ"
}

araxl_append_verilate_to_verification_summary() {
    local vf="$DATASET_DIR/verification/verification_summary.txt"
    [[ -f "$vf" ]] || return 0
    {
        echo ""
        echo "Compiled RTL (upstream hardware/Makefile verilate): ${VERILATE_RESULT:-SKIPPED}"
        echo "veril_path used: ${ARAXL_RESOLVED_VERIL_PATH:-n/a}"
    } >> "$vf"
}

ARAXL_COMMIT_ID=$(get_commit_id "$ARAXL_DIR")
DATASET_DIR="$PROJECT_ROOT/datasets/araxl/$ARAXL_COMMIT_ID"
LOG_ROOT="$PROJECT_ROOT/logs/araxl_generation"
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
info "AraXL RTL generation / snapshot"
info "GENERATION_LOG: $GENERATION_LOG"
info "TOOL_DIR: $ARAXL_DIR"
info "Commit: $ARAXL_COMMIT_ID"
info "Dataset: $DATASET_DIR"
info "Parallel jobs (make): $PARALLEL_JOBS"
info "====================================================================="

if [[ "$VERIFY_ONLY" == true ]]; then
    mkdir -p "$DATASET_DIR"
    VERIFY_DEPS_RESULT=SKIPPED
    VERIFY_FLIST_RESULT=SKIPPED
    VERIFY_VERILATOR_RESULT=SKIPPED
    if [[ "$WITH_VERILATE_BUILD" == true ]]; then
        warn "make verilate is skipped with --verify-only (full runs build by default; use --skip-verilate to omit verilate on full runs)"
    fi
    if [[ "$VERIFY_ENABLED" == true ]]; then
        run_verification || exit 1
    else
        warn "--verify-only with --no-verify is a no-op."
    fi
    ok "generate_araxl.sh completed (--verify-only)."
    exit 0
fi

if [[ "$SKIP_CHECKOUT" != true ]]; then
    ensure_hw_bender || exit 1
    if [[ "$BENDER_UPDATE" == true ]]; then
        warn "Running bender update (may fail if dependency graphs conflict)"
        run_araxl_bender update || exit 1
    else
        info "Running bender checkout (Bender.lock)"
        run_araxl_bender checkout || exit 1
    fi
else
    warn "Skipped make bender / bender checkout (--skip-checkout)"
    if [[ ! -d "$ARAXL_DIR/.bender" ]] && [[ ! -d "$ARAXL_HW/deps" ]]; then
        err "Neither .bender nor hardware/deps looks initialized; run without --skip-checkout first"
        exit 1
    fi
fi

apply_tech_cells_patch

VERIFY_DEPS_RESULT=SKIPPED
VERIFY_FLIST_RESULT=SKIPPED
VERIFY_VERILATOR_RESULT=SKIPPED
if [[ "$VERIFY_ENABLED" == true ]]; then
    run_verification || exit 1
else
    warn "Verification skipped (--no-verify)"
fi

VERILATE_RESULT=SKIPPED
ARAXL_RESOLVED_VERIL_PATH=""
if [[ "$WITH_VERILATE_BUILD" == true ]]; then
    ARAXL_DO_BUILD_UPSTREAM_VERILATOR=false
    case "${ARAXL_AUTO_BUILD_VERILATOR:-}" in
        0|false|no|off)
            ;;
        *)
            if [[ "$BUILD_UPSTREAM_VERILATOR" == true ]] || [[ "${ARAXL_AUTO_BUILD_VERILATOR:-}" == "1" ]] || [[ "${ARAXL_AUTO_BUILD_VERILATOR:-}" == "true" ]]; then
                ARAXL_DO_BUILD_UPSTREAM_VERILATOR=true
            fi
            ;;
    esac
    if ! araxl_verilator_ok_for_upstream_verilate && [[ "$ARAXL_DO_BUILD_UPSTREAM_VERILATOR" == true ]]; then
        build_araxl_upstream_verilator || exit 1
    fi
    if ! araxl_verilator_ok_for_upstream_verilate; then
        VERILATE_RESULT=SKIPPED_NO_VERILATOR_BIN
        info "make verilate skipped (no complete Verilator install). Run ./scripts/install_araxl.sh (installs build deps by default) and re-run without --no-build-verilator, or set a full Verilator on PATH / ARAXL_VERIL_PATH."
    else
        VERILATE_RESULT=FAILED
        araxl_resolve_veril_path_string || true
        if run_araxl_verilate_build; then
            VERILATE_RESULT=OK
            ok "Upstream make verilate completed."
        else
            exit 1
        fi
    fi
else
    VERILATE_RESULT=SKIPPED_BY_FLAG
fi

if [[ -f "$DATASET_DIR/verification/verification_summary.txt" ]]; then
    araxl_append_verilate_to_verification_summary
fi

info "Copying sources to $BUNDLE_DIR"
mkdir -p "$BUNDLE_DIR"

rsync -a \
    --exclude '.git/' \
    "$ARAXL_DIR/" "$BUNDLE_DIR/"

SUMMARY="$DATASET_DIR/araxl_summary.txt"
{
    echo "araxl SCORE snapshot (pulp-platform/AraXL)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $ARAXL_DIR"
    echo "Git commit (short): $ARAXL_COMMIT_ID"
    echo "Git commit (full): $(git -C "$ARAXL_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender (hardware/bender): $("$ARAXL_HW/bender" --version 2>/dev/null || echo unknown)"
    echo "bender (PATH): $(command_exists bender && bender --version 2>/dev/null || echo not_on_path)"
    echo "verilator: $(command_exists verilator && verilator --version 2>/dev/null | head -1 || echo not_on_path)"
    echo ""
    echo "Verification:"
    echo "  Deps vs Bender.lock: $VERIFY_DEPS_RESULT"
    echo "  bender flist-plus (Verilator view): $VERIFY_FLIST_RESULT"
    echo "  Verilator lint: $VERIFY_VERILATOR_RESULT"
    echo "  Verilator elaboration: $VERILATE_RESULT"
    echo "  Verilator simulation: N/A"
    echo "  Logs: $DATASET_DIR/verification/"
    echo ""
    echo "See https://github.com/pulp-platform/AraXL and tools/araxl/README.md"
    echo "Bundle path: $BUNDLE_DIR"
    echo "Generation log: $GENERATION_LOG"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
if [[ "$CLEAN_TOOL_ARTIFACTS" == true ]]; then
    cleanup_araxl_generated_artifacts
else
    info "Keeping generated tools/araxl artifacts (--keep-tool-artifacts)"
fi
ok "generate_araxl.sh completed."
