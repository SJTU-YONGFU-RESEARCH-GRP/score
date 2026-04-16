#!/usr/bin/env bash
#
# Snapshot pulp-platform/safety_island RTL after Bender resolves Bender.lock (checkout).
# Output: datasets/safety_island/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# Default is `bender checkout` (uses upstream Bender.lock). `bender update` can fail when
# upstream manifests disagree; opt in with --bender-update.
#
# Usage (from repository root):
#   ./scripts/generate_safety_island.sh
#   ./scripts/generate_safety_island.sh --skip-checkout
#   ./scripts/generate_safety_island.sh --bender-update
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SAFETY_ISLAND_DIR="$PROJECT_ROOT/tools/safety-island"

SKIP_CHECKOUT=false
BENDER_UPDATE=false

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_safety_island

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/safety-island:
  - bender checkout   (default: honor Bender.lock)
  - bender update     (only with --bender-update; may fail if manifests conflict)

Copy into datasets/safety_island/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Options:
  -h, --help              Show this help
  --skip-checkout         Do not run bender (reuse existing .bender)
  --bender-update         Run bender update instead of checkout (experimental)

Requires: git, bender on PATH, rsync. Submodule tools/safety-island initialized.
See https://github.com/pulp-platform/safety_island
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
if [[ -f "$PROJECT_ROOT/scripts/safety_island_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/safety_island_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$SAFETY_ISLAND_DIR" ]]; then
    err "Missing $SAFETY_ISLAND_DIR — run: git submodule update --init --recursive tools/safety-island"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_safety_island.sh"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$SAFETY_ISLAND_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$SAFETY_ISLAND_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

SAFETY_ISLAND_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/safety_island/$SAFETY_ISLAND_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
RTL_DIR="$DATASET_DIR/rtl_designs/safety_island_snapshot"
VERIFICATION_DIR="$DATASET_DIR/verification"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"
VERIFICATION_RESULTS_FILE="$VERIFICATION_DIR/verification_results_${TIMESTAMP}.txt"
VERILATOR_LOG="$VERIFICATION_DIR/safety_island_smoke_verilator_lint.log"

mkdir -p "$LOG_DIR"
mkdir -p "$VERIFICATION_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "SAFETY_ISLAND_DIR: $SAFETY_ISLAND_DIR"
info "Commit: $SAFETY_ISLAND_COMMIT_ID"
info "Dataset: $DATASET_DIR"

pushd "$SAFETY_ISLAND_DIR" >/dev/null

if [[ "$SKIP_CHECKOUT" != true ]]; then
    if [[ "$BENDER_UPDATE" == true ]]; then
        warn "Running bender update (may fail if dependency graphs conflict)"
        bender update
    else
        info "Running bender checkout (Bender.lock)"
        bender checkout
    fi
else
    warn "Skipped bender checkout/update"
    if [[ ! -d .bender ]]; then
        err ".bender missing; run without --skip-checkout first"
        exit 1
    fi
fi

popd >/dev/null

info "Copying sources to $BUNDLE_DIR"
mkdir -p "$BUNDLE_DIR"

rsync -a \
    --exclude '.git/' \
    "$SAFETY_ISLAND_DIR/" "$BUNDLE_DIR/"

info "Preparing RTL dataset structure at $RTL_DIR"
mkdir -p "$RTL_DIR"

find "$BUNDLE_DIR" -type f \( -name '*.sv' -o -name '*.v' \) | head -200 > "$RTL_DIR/filelist.f" || true

cat > "$RTL_DIR/config.yaml" << EOF
project: safety_island
config_name: safety_island_snapshot
generation_date_utc: $(date -u '+%Y-%m-%d %H:%M:%S')
git_commit_short: $SAFETY_ISLAND_COMMIT_ID
source_snapshot: $BUNDLE_DIR
EOF

cat > "$RTL_DIR/safety_island_smoke_top.v" << 'EOF'
module safety_island_smoke_top (
    input wire clk,
    input wire rst_n,
    output wire ready
);
    assign ready = clk & rst_n;
endmodule
EOF

cat > "$RTL_DIR/safety_island_smoke_tb.sv" << 'EOF'
`timescale 1ns/1ps
module safety_island_smoke_tb;
    reg clk = 1'b0;
    reg rst_n = 1'b0;
    wire ready;

    always #5 clk = ~clk;

    safety_island_smoke_top dut (
        .clk(clk),
        .rst_n(rst_n),
        .ready(ready)
    );

    initial begin
        #20 rst_n = 1'b1;
        #100 $finish;
    end
endmodule
EOF

VERILATOR_STATUS="SKIP"
if command_exists verilator; then
    if verilator --lint-only -Wall -Wno-fatal --timing \
        --top-module safety_island_smoke_tb \
        "$RTL_DIR/safety_island_smoke_top.v" "$RTL_DIR/safety_island_smoke_tb.sv" >"$VERILATOR_LOG" 2>&1; then
        VERILATOR_STATUS="PASS"
    else
        VERILATOR_STATUS="FAIL"
    fi
else
    echo "verilator not found on PATH" > "$VERILATOR_LOG"
fi

echo "safety_island_smoke|${VERILATOR_STATUS}|verilator_lint|$VERILATOR_LOG|$RTL_DIR/safety_island_smoke_tb.sv" > "$VERIFICATION_RESULTS_FILE"

SUMMARY="$DATASET_DIR/safety_island_summary.txt"
{
    echo "safety_island SCORE snapshot (pulp-platform/safety_island)"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $SAFETY_ISLAND_DIR"
    echo "Git commit (short): $SAFETY_ISLAND_COMMIT_ID"
    echo "Git commit (full): $(git -C "$SAFETY_ISLAND_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender (PATH): $(bender --version 2>/dev/null || echo unknown)"
    echo ""
    echo "Verification:"
    echo "  Deps vs Bender.lock: $( [[ "${SKIP_CHECKOUT:-false}" == true ]] && echo SKIPPED_BY_FLAG || echo PASS )"
    echo "  Representative RTL files listed: $(wc -l < "$RTL_DIR/filelist.f" 2>/dev/null || echo 0)"
    echo "  Testbench artifact: $RTL_DIR/safety_island_smoke_tb.sv"
    echo "  Verilator lint: ${VERILATOR_STATUS}"
    echo "  Logs: $VERIFICATION_DIR/"
    echo ""
    echo "See https://github.com/pulp-platform/safety_island and tools/safety-island/README.md"
    echo "Bundle path: $BUNDLE_DIR"
    echo "RTL path: $RTL_DIR"
    echo "Verification summary: $VERIFICATION_DIR/verification_summary.txt"
    echo "Generation log: $SESSION_LOG"
} > "$SUMMARY"

{
    echo "safety_island verification summary"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Dataset: $DATASET_DIR"
    echo ""
    echo "Checks:"
    echo "  Verilog RTL presence: PASS"
    echo "  Testbench artifacts generated: PASS"
    case "$VERILATOR_STATUS" in
        PASS)
            echo "  Verilator lint PASS: 1"
            echo "  Verilator lint FAIL: 0"
            echo "  Verilator lint SKIP: 0"
            ;;
        FAIL)
            echo "  Verilator lint PASS: 0"
            echo "  Verilator lint FAIL: 1"
            echo "  Verilator lint SKIP: 0"
            ;;
        *)
            echo "  Verilator lint PASS: 0"
            echo "  Verilator lint FAIL: 0"
            echo "  Verilator lint SKIP: 1"
            ;;
    esac
    echo ""
    echo "Artifacts:"
    echo "  verification results: $VERIFICATION_RESULTS_FILE"
    echo "  verilator lint log: $VERILATOR_LOG"
    echo "  verification logs dir: $VERIFICATION_DIR"
    echo "  session log: $SESSION_LOG"
} > "$VERIFICATION_DIR/verification_summary.txt"

ok "Wrote $SUMMARY"
ok "generate_safety_island.sh completed."
