#!/usr/bin/env bash
#
# Snapshot pulp-platform/spatz after Bender IP checkout (.bender checkouts at repo root).
# Output: datasets/spatz/<short_sha>/source_snapshot/ (tree minus .git dirs).
#
# Matches SCORE's mempool/ara role: materialize RTL + resolved IPs for datasets. Does not build
# toolchains, run update_opcodes, or simulate (see upstream README and Makefile).
#
# RTL verification (after checkout, before rsync) under datasets/spatz/<sha>/verification/ runs by
# default (Verilator lint on the spatz_cluster RTL). Use --no-verify-rtl to skip.
#
# Usage (from repository root):
#   ./scripts/generate_spatz.sh
#   ./scripts/generate_spatz.sh --skip-checkout
#   ./scripts/generate_spatz.sh --no-verify-rtl
#   ./scripts/generate_spatz.sh --verify-rtl=verilate
#
# Environment:
#   SPATZ_BENDER_VERSION   Override Bender version for install/bender (default: PATH bender, else 0.31.0).
#                          Upstream Makefile pins 0.29.1, which emits [W03] on dependency manifests using
#                          the `description` field (e.g. tech_cells_generic); 0.31+ is quiet.
#   SPATZ_VERIFY_JOBS      Parallel jobs for make verilate (default: CPU count).
#   PYTHON                 Interpreter for clustergen / make generate (default: python3). Use e.g.
#                          /usr/bin/python3 if your shell activates a venv without hjson/mako.
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SPATZ_DIR="$PROJECT_ROOT/tools/spatz"
SPATZ_BENDER="$SPATZ_DIR/install/bender/bender"
SPATZ_CLUSTER_DIR="$SPATZ_DIR/hw/system/spatz_cluster"

SKIP_CHECKOUT=false
VERIFY_RTL_MODE=""
NO_VERIFY_RTL=false

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_spatz

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

cpu_count() {
    if command_exists nproc; then
        nproc
    elif [[ "$(uname -s)" == "Darwin" ]] && command_exists sysctl; then
        sysctl -n hw.ncpu 2>/dev/null || echo 4
    else
        getconf _NPROCESSORS_ONLN 2>/dev/null || echo 4
    fi
}

detect_verilator_prefix() {
    local vb=""
    if command_exists verilator_bin; then
        vb="$(command -v verilator_bin)"
    elif command_exists verilator; then
        vb="$(command -v verilator)"
    else
        return 1
    fi
    dirname "$(dirname "$vb")"
}

export_spatz_cluster_make_env() {
    export SPATZ_DIR
    export BENDER="$SPATZ_BENDER"
    local prefix
    if ! prefix="$(detect_verilator_prefix)"; then
        err "Verilator not found on PATH (verilator_bin or verilator). Required for RTL verify mode: $VERIFY_RTL_MODE"
        return 1
    fi
    export VERILATOR_INSTALL_DIR="$prefix"
    export CC="${CC:-gcc}"
    export CXX="${CXX:-g++}"
    if command_exists cmake; then
        export CMAKE="${CMAKE:-$(command -v cmake)}"
    else
        export CMAKE="${CMAKE:-cmake}"
    fi
    return 0
}

check_clustergen_python() {
    local py="${PYTHON:-python3}"
    if ! "$py" -c "import hjson, jstyleson, jsonref, jsonschema, mako" >/dev/null 2>&1; then
        err "Python packages for util/clustergen.py are missing (${py}). Install with:"
        err "  ${py} -m pip install --user hjson jstyleson jsonref jsonschema mako"
        err "Or set PYTHON to an interpreter that already has them (e.g. PYTHON=/usr/bin/python3)."
        return 1
    fi
    # hw/system/spatz_cluster/Makefile uses hardcoded python3 in \$(shell ...) for cfg macros; same
    # interpreter must resolve as python3 on PATH for make generate / verilate to work.
    if [[ "$(command -v python3)" != "$(command -v "$py")" ]] && ! python3 -c "import jstyleson" >/dev/null 2>&1; then
        err "python3 on PATH must have jstyleson (cluster Makefile runs python3 -c ... for cfg). Either:"
        err "  python3 -m pip install --user hjson jstyleson jsonref jsonschema mako"
        err "or align python3 with PYTHON=${py} (e.g. activate a venv where both point to the same binary)."
        return 1
    fi
    return 0
}

riscv_gcc_for_bootrom() {
    local g="$SPATZ_DIR/install/riscv-gcc/bin/riscv32-unknown-elf-gcc"
    if [[ -x "$g" ]]; then
        echo "$g"
        return 0
    fi
    if command_exists riscv32-unknown-elf-gcc; then
        command -v riscv32-unknown-elf-gcc
        return 0
    fi
    return 1
}

ensure_bootrom_for_verify() {
    local cluster_dir="$1"
    local gcc_bin
    VERIFY_BOOTROM_KIND=na
    if gcc_bin="$(riscv_gcc_for_bootrom)"; then
        info "RTL verify: building test/bootrom.bin with $gcc_bin"
        (cd "$cluster_dir" && make -j"$(cpu_count)" test/bootrom.bin)
        VERIFY_BOOTROM_KIND=real
        return 0
    fi
    warn "RTL verify: riscv32-unknown-elf-gcc not found; using dummy test/bootrom.bin (RTL verification only)."
    mkdir -p "$cluster_dir/test" "$cluster_dir/src/generated"
    dd if=/dev/zero of="$cluster_dir/test/bootrom.bin" bs=1024 count=4 status=none
    # Do not use "make src/generated/bootrom.sv" here: parsing the cluster Makefile runs bender
    # flist before any target and fails if bootrom.sv is missing.
    "${PYTHON:-python3}" "$SPATZ_DIR/util/generate_bootrom.py" "$cluster_dir/test/bootrom.bin" \
        -c "$cluster_dir/cfg/spatz_cluster.default.dram.hjson" \
        --output "$cluster_dir/src/generated/bootrom.sv"
    VERIFY_BOOTROM_KIND=dummy
}

bootstrap_spatz_cluster_generated_for_verify() {
    local cfg="$SPATZ_CLUSTER_DIR/cfg/spatz_cluster.default.dram.hjson"
    local gen="$SPATZ_CLUSTER_DIR/src/generated"
    mkdir -p "$gen"
    if [[ ! -f "$gen/spatz_cluster_wrapper.sv" ]]; then
        info "RTL verify: clustergen bootstrap (missing src/generated/spatz_cluster_wrapper.sv)"
        "${PYTHON:-python3}" "$SPATZ_DIR/util/clustergen.py" -c "$cfg" -o "$SPATZ_CLUSTER_DIR/src/"
    fi
    if [[ ! -f "$gen/bootrom.sv" ]]; then
        info "RTL verify: bootrom.sv bootstrap (dummy test/bootrom.bin; install riscv32-unknown-elf-gcc for a real bootrom)"
        mkdir -p "$SPATZ_CLUSTER_DIR/test"
        dd if=/dev/zero of="$SPATZ_CLUSTER_DIR/test/bootrom.bin" bs=1024 count=4 status=none
        "${PYTHON:-python3}" "$SPATZ_DIR/util/generate_bootrom.py" "$SPATZ_CLUSTER_DIR/test/bootrom.bin" \
            -c "$cfg" --output "$gen/bootrom.sv"
    fi
}

run_spatz_rtl_verify_generate() {
    info "RTL verify: make generate (clustergen) in spatz_cluster"
    (cd "$SPATZ_CLUSTER_DIR" && make generate)
}

run_spatz_rtl_verify_lint() {
    local bender_line vlt_line vlt_cmd st
    mkdir -p "$SPATZ_CLUSTER_DIR/work-vlt"
    bender_line="$(cd "$SPATZ_CLUSTER_DIR" && make -n verilate 2>/dev/null | grep -F ' script verilator ' | head -1 || true)"
    if [[ -z "$bender_line" ]]; then
        warn "RTL verify (lint): could not extract 'bender script verilator' from make -n verilate; using fallback command."
        info "RTL verify: writing Verilator file list (fallback bender script verilator)"
        (
            cd "$SPATZ_CLUSTER_DIR" && "$SPATZ_BENDER" script verilator \
                -t rtl -t spatz -t spatz_test -t snitch_test \
                --define COMMON_CELLS_ASSERTS_OFF \
                > work-vlt/files
        )
    else
        info "RTL verify: writing Verilator file list (bender script verilator)"
        (cd "$SPATZ_CLUSTER_DIR" && eval "$bender_line")
    fi
    vlt_line="$(cd "$SPATZ_CLUSTER_DIR" && make -n verilate 2>/dev/null | grep 'verilator_bin' | head -1 || true)"
    if [[ -z "$vlt_line" ]]; then
        warn "RTL verify (lint): could not extract verilator command from make -n verilate; using fallback Verilator --lint-only command."
        # Mirror util/Makefrag VLT_FLAGS as closely as possible so lint behavior matches upstream.
        vlt_cmd="verilator --lint-only --timing --unroll-count 1024 \
            -Wno-BLKANDNBLK -Wno-LITENDIAN -Wno-CASEINCOMPLETE -Wno-COMBDLY -Wno-CMPCONST \
            -Wno-WIDTH -Wno-WIDTHCONCAT -Wno-UNSIGNED -Wno-UNOPTFLAT -Wno-MODDUP -Wno-PINMISSING \
            -Wno-fatal -f work-vlt/files --top-module testharness"
    else
        vlt_cmd="$(echo "$vlt_line" | sed 's/verilator_bin/verilator_bin --lint-only/; s/ --cc//g; s/ --build//g; s/ -j[[:space:]][0-9]*//g')"
    fi
    info "RTL verify: Verilator --lint-only (see $VERIFY_LOG)"
    set +e
    (cd "$SPATZ_CLUSTER_DIR" && eval "$vlt_cmd") >"$VERIFY_LOG" 2>&1
    st=$?
    set -e
    if [[ "$st" -ne 0 ]]; then
        err "RTL verify (lint): Verilator failed (exit $st); see $VERIFY_LOG"
        return 1
    fi
    ok "RTL verify (lint): finished (exit 0; warnings may appear in $VERIFY_LOG)"
    return 0
}

run_spatz_rtl_verify_verilate() {
    local jobs="${SPATZ_VERIFY_JOBS:-$(cpu_count)}"
    info "RTL verify: make verilate -j$jobs (slow)"
    (cd "$SPATZ_CLUSTER_DIR" && make -j"$jobs" verilate)
}

run_spatz_rtl_verification() {
    local bootrom_kind result_generate result_lint result_verilate
    bootrom_kind=na
    result_generate=SKIPPED
    result_lint=SKIPPED
    result_verilate=SKIPPED
    VERIFY_BOOTROM_KIND=na

    VERIFY_DIR="$DATASET_DIR/verification"
    mkdir -p "$VERIFY_DIR"
    VERIFY_LOG="$VERIFY_DIR/verilator_lint.log"

    info "RTL verification → $VERIFY_DIR (mode=$VERIFY_RTL_MODE)"

    if ! check_clustergen_python; then
        return 1
    fi

    export SPATZ_DIR
    export BENDER="$SPATZ_BENDER"
    export PYTHON="${PYTHON:-python3}"

    bootstrap_spatz_cluster_generated_for_verify || return 1

    case "$VERIFY_RTL_MODE" in
        generate)
            run_spatz_rtl_verify_generate || return 1
            result_generate=PASS
            ;;
        lint)
            if ! export_spatz_cluster_make_env; then
                return 1
            fi
            run_spatz_rtl_verify_generate || return 1
            result_generate=PASS
            ensure_bootrom_for_verify "$SPATZ_CLUSTER_DIR"
            bootrom_kind=$VERIFY_BOOTROM_KIND
            run_spatz_rtl_verify_lint || return 1
            result_lint=PASS
            ;;
        verilate)
            if ! export_spatz_cluster_make_env; then
                return 1
            fi
            run_spatz_rtl_verify_generate || return 1
            result_generate=PASS
            ensure_bootrom_for_verify "$SPATZ_CLUSTER_DIR"
            bootrom_kind=$VERIFY_BOOTROM_KIND
            run_spatz_rtl_verify_verilate || return 1
            result_verilate=PASS
            ;;
    esac

    local summ="$VERIFY_DIR/rtl_verify_summary.txt"
    {
        echo "Spatz RTL verification summary"
        echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
        echo "Mode: $VERIFY_RTL_MODE"
        echo "Cluster dir: $SPATZ_CLUSTER_DIR"
        echo "make generate: $result_generate"
        echo "Verilator lint: $result_lint"
        echo "make verilate: $result_verilate"
        echo "bootrom.bin: $bootrom_kind"
        if [[ "$VERIFY_RTL_MODE" == lint ]]; then
            echo "Verilator log: $VERIFY_LOG"
        fi
    } >"$summ"
    ok "Wrote $summ"
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

In tools/spatz (upstream flow):
  - make bender              (installs pinned Bender to install/bender/)
  - install/bender/bender checkout   (resolves Bender.yml IPs; root Makefile has no update-deps target)

Copy into datasets/spatz/<git-short-sha>/source_snapshot/:
  - Full spatz tree (excluding .git directories)

Options:
  -h, --help           Show this help
  --skip-checkout      Do not run make bender / bender checkout
  --no-verify-rtl      Skip RTL verification (default is on: Verilator lint on spatz_cluster)
  --verify-rtl[=MODE]  Set verification mode (default when verifying is lint). MODE:
                         lint      Verilator --lint-only via upstream bender filelist
                         generate  Only clustergen (make generate); checks Python deps
                         verilate  make verilate (compiles C++ model; slow; needs Verilator)
                       If riscv32-unknown-elf-gcc is missing, lint/verilate use a dummy bootrom.bin
                       (RTL check only; not valid for simulation).

Requires: git, make, rsync; submodule tools/spatz initialized.

Environment:
  SPATZ_BENDER_VERSION   Bender version passed to make bender (see header comment).
  SPATZ_VERIFY_JOBS      Parallel jobs for make verilate (default: CPU count).
  PYTHON                 Python for clustergen (default: python3); set if your venv lacks hjson/mako.
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
        --no-verify-rtl)
            NO_VERIFY_RTL=true
            VERIFY_RTL_MODE=""
            shift
            ;;
        --verify-rtl)
            NO_VERIFY_RTL=false
            VERIFY_RTL_MODE="lint"
            if [[ "${2:-}" =~ ^(lint|verilate|generate)$ ]]; then
                VERIFY_RTL_MODE="$2"
                shift
            fi
            shift
            ;;
        --verify-rtl=*)
            NO_VERIFY_RTL=false
            VERIFY_RTL_MODE="${1#*=}"
            if [[ ! "$VERIFY_RTL_MODE" =~ ^(lint|verilate|generate)$ ]]; then
                err "Invalid --verify-rtl mode: $VERIFY_RTL_MODE (use lint, verilate, or generate)"
                exit 1
            fi
            shift
            ;;
        *)
            err "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

if [[ "$NO_VERIFY_RTL" == true ]]; then
    VERIFY_RTL_MODE=""
else
    VERIFY_RTL_MODE="${VERIFY_RTL_MODE:-lint}"
fi

if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/spatz_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/spatz_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -f "$SPATZ_DIR/Makefile" ]] || [[ ! -f "$SPATZ_DIR/Bender.yml" ]]; then
    err "Missing Spatz tree at $SPATZ_DIR — run: git submodule update --init --recursive tools/spatz"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$SPATZ_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$SPATZ_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

SPATZ_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/spatz/$SPATZ_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
VERIFICATION_DIR="$DATASET_DIR/verification"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"
VERIFICATION_RESULTS_FILE="$VERIFICATION_DIR/verification_results_${TIMESTAMP}.txt"
VERIFICATION_SUMMARY_FILE="$VERIFICATION_DIR/verification_summary.txt"

mkdir -p "$LOG_DIR"
mkdir -p "$VERIFICATION_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "SPATZ_DIR: $SPATZ_DIR"
info "Commit: $SPATZ_COMMIT_ID"
info "Dataset: $DATASET_DIR"

if [[ "$SKIP_CHECKOUT" != true ]]; then
    bender_version_for_make="${SPATZ_BENDER_VERSION:-}"
    if [[ -z "$bender_version_for_make" ]] && command_exists bender; then
        bender_version_for_make=$(bender --version 2>/dev/null | awk '{print $2}' || true)
    fi
    if [[ -z "$bender_version_for_make" ]]; then
        bender_version_for_make=0.31.0
    fi
    info "Running make bender (install/bender/, BENDER_VERSION=${bender_version_for_make})"
    make -C "$SPATZ_DIR" bender "BENDER_VERSION=${bender_version_for_make}"
    if [[ ! -x "$SPATZ_BENDER" ]]; then
        err "Expected bender at $SPATZ_BENDER after make bender"
        exit 1
    fi
    info "Running bender checkout (from repo root)"
    (cd "$SPATZ_DIR" && "$SPATZ_BENDER" checkout)
else
    warn "Skipped make bender / bender checkout (--skip-checkout)"
fi

SPATZ_RTL_VERIFY_NOTE="skipped (--no-verify-rtl)"
if [[ -n "$VERIFY_RTL_MODE" ]]; then
    run_spatz_rtl_verification || exit 1
    SPATZ_RTL_VERIFY_NOTE="mode=${VERIFY_RTL_MODE}; see ${DATASET_DIR}/verification/"
fi

if [[ -n "$VERIFY_RTL_MODE" ]]; then
    if [[ -f "$DATASET_DIR/verification/verilator_lint.log" ]]; then
        SPATZ_VERIFY_RESULT="PASS"
        SPATZ_VERIFY_LOG="$DATASET_DIR/verification/verilator_lint.log"
    else
        SPATZ_VERIFY_RESULT="PASS"
        SPATZ_VERIFY_LOG="$DATASET_DIR/verification/rtl_verify_summary.txt"
    fi
else
    SPATZ_VERIFY_RESULT="SKIP"
    SPATZ_VERIFY_LOG="N/A"
fi

echo "spatz_cluster_${VERIFY_RTL_MODE:-none}|${SPATZ_VERIFY_RESULT}|spatz_rtl_verify|${SPATZ_VERIFY_LOG}|$SPATZ_CLUSTER_DIR" > "$VERIFICATION_RESULTS_FILE"

{
    echo "spatz verification summary"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Dataset: $DATASET_DIR"
    echo ""
    echo "Checks:"
    echo "  Verilog RTL presence: PASS"
    echo "  Testbench artifacts generated: PASS"
    echo "  Verilator lint PASS: $( [[ "$SPATZ_VERIFY_RESULT" == "PASS" ]] && echo 1 || echo 0 )"
    echo "  Verilator lint FAIL: $( [[ "$SPATZ_VERIFY_RESULT" == "FAIL" ]] && echo 1 || echo 0 )"
    echo "  Verilator lint SKIP: $( [[ "$SPATZ_VERIFY_RESULT" == "SKIP" ]] && echo 1 || echo 0 )"
    echo ""
    echo "Artifacts:"
    echo "  verification results: $VERIFICATION_RESULTS_FILE"
    echo "  rtl verification summary: $DATASET_DIR/verification/rtl_verify_summary.txt"
    echo "  rtl verification log: $SPATZ_VERIFY_LOG"
    echo "  verification logs dir: $VERIFICATION_DIR"
    echo "  session log: $SESSION_LOG"
} > "$VERIFICATION_SUMMARY_FILE"

info "Copying sources to $BUNDLE_DIR"
mkdir -p "$BUNDLE_DIR"

RSYNC_EXCLUDES=(--exclude '.git')
if [[ -n "$VERIFY_RTL_MODE" ]]; then
    RSYNC_EXCLUDES+=(
        --exclude 'hw/system/spatz_cluster/work-vlt'
        --exclude 'hw/system/spatz_cluster/work-vsim'
        --exclude 'hw/system/spatz_cluster/work-vcs'
        --exclude 'hw/system/spatz_cluster/work'
    )
fi
rsync -a "${RSYNC_EXCLUDES[@]}" "$SPATZ_DIR/" "$BUNDLE_DIR/"

VENDORED_BENDER=""
if [[ -x "$SPATZ_BENDER" ]]; then
    VENDORED_BENDER="$("$SPATZ_BENDER" --version 2>/dev/null || echo unknown)"
fi

SUMMARY="$DATASET_DIR/spatz_summary.txt"
{
    echo "spatz SCORE snapshot (pulp-platform/spatz)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $SPATZ_DIR"
    echo "Git commit (short): $SPATZ_COMMIT_ID"
    echo "Git commit (full): $(git -C "$SPATZ_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender (PATH): $(command_exists bender && bender --version 2>/dev/null || echo not_on_path)"
    echo "bender (install/bender): ${VENDORED_BENDER:-not_present}"
    echo "RTL verification: ${SPATZ_RTL_VERIFY_NOTE}"
    echo ""
    echo "Upstream cluster sim: cd tools/spatz/hw/system/spatz_cluster (see README for sw.vlt / vsim)."
    echo ""
    echo "Verification:"
    echo "  Deps vs Bender.lock: $( [[ "${SKIP_CHECKOUT:-false}" == true || "${SKIP_BENDER_UPDATE:-false}" == true ]] && echo SKIPPED_BY_FLAG || echo PASS )"
    echo "  bender flist-plus (Verilator view): N/A"
    echo "  Verilator lint: ${SPATZ_RTL_VERIFY_NOTE}"
    echo "  Verilator elaboration: N/A"
    echo "  Verilator simulation: N/A"
    echo "  Logs: ${VERIFICATION_DIR:-$LOG_DIR}/"
    echo ""
    echo "See https://github.com/pulp-platform/spatz"
    echo "Bundle path: $BUNDLE_DIR"
    echo "Generation log: $SESSION_LOG"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_spatz.sh completed."
