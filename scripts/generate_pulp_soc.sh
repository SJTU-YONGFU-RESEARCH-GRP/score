#!/usr/bin/env bash
#
# Snapshot pulp-platform/pulp_soc RTL after Bender dependency checkout.
# Output: datasets/pulp_soc/<short_sha>/source_snapshot/ (local SV + .bender checkouts).
#
# Upstream pulp_soc does not ship Bender.lock; transitive gpio pins axi ^0.38 while pulp_soc
# uses axi 0.39.x. Before bender, this script writes tools/pulp-soc/Bender.local overriding
# gpio to a fixed revision (override via env PULP_SOC_GPIO_OVERRIDE_REV). Use --no-bender-local
# only if you maintain your own Bender.local.
#
# Default is `bender checkout`. Optional --bender-update.
#
# Usage (from repository root):
#   ./scripts/generate_pulp_soc.sh
#   ./scripts/generate_pulp_soc.sh --skip-checkout
#   ./scripts/generate_pulp_soc.sh --bender-update
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
PULP_SOC_DIR="$PROJECT_ROOT/tools/pulp-soc"

SKIP_CHECKOUT=false
BENDER_UPDATE=false
SKIP_BENDER_LOCAL=false

# gpio@master (8a9e71e…) depends on axi 0.39.x, compatible with pulp_soc; older gpio broke resolution.
PULP_SOC_GPIO_OVERRIDE_REV="${PULP_SOC_GPIO_OVERRIDE_REV:-8a9e71e64b588c49f66794fa655e35d4ccb038cb}"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging generate_pulp_soc

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
command_exists() { command -v "$1" >/dev/null 2>&1; }

write_pulp_soc_bender_local() {
    local bl="$PULP_SOC_DIR/Bender.local"
    cat > "$bl" << EOF
# Written by SCORE generate_pulp_soc.sh — transitive gpio vs axi fix (do not commit in submodule).
# Override revision: env PULP_SOC_GPIO_OVERRIDE_REV (default pinned gpio master).
overrides:
  gpio: { git: "https://github.com/pulp-platform/gpio.git", rev: "${PULP_SOC_GPIO_OVERRIDE_REV}" }
EOF
    info "Wrote $bl (gpio rev ${PULP_SOC_GPIO_OVERRIDE_REV})"
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Run in tools/pulp-soc:
  - Bender.local      (gpio override unless --no-bender-local)
  - bender checkout   (default) or bender update (--bender-update)

Copy into datasets/pulp_soc/<git-short-sha>/source_snapshot/:
  - Full tree (excluding .git/), including .bender/ IP checkouts

Options:
  -h, --help              Show this help
  --skip-checkout         Do not run bender (reuse existing .bender)
  --bender-update         Run bender update instead of checkout (experimental)
  --no-bender-local       Do not write Bender.local (you must resolve gpio/axi yourself)

Requires: git, bender on PATH, rsync. Submodule tools/pulp-soc initialized.
See https://github.com/pulp-platform/pulp_soc
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
        --no-bender-local)
            SKIP_BENDER_LOCAL=true
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
if [[ -f "$PROJECT_ROOT/scripts/pulp_soc_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/pulp_soc_env.sh"
fi

cd "$PROJECT_ROOT"

if [[ ! -d "$PULP_SOC_DIR" ]]; then
    err "Missing $PULP_SOC_DIR — run: git submodule update --init --recursive tools/pulp-soc"
    exit 1
fi

if ! command_exists bender; then
    err "bender not found on PATH. Run ./scripts/install_pulp_soc.sh"
    exit 1
fi

if ! command_exists rsync; then
    err "rsync not found (required to snapshot sources)"
    exit 1
fi

get_commit_id() {
    if git -C "$PULP_SOC_DIR" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$PULP_SOC_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo "unknown"
    else
        echo "unknown"
    fi
}

PULP_SOC_COMMIT_ID=$(get_commit_id)
DATASET_DIR="$PROJECT_ROOT/datasets/pulp_soc/$PULP_SOC_COMMIT_ID"
LOG_DIR="$DATASET_DIR/logs"
BUNDLE_DIR="$DATASET_DIR/source_snapshot"
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
SESSION_LOG="$LOG_DIR/generate_${TIMESTAMP}.log"

mkdir -p "$LOG_DIR"

exec > >(tee -a "$SESSION_LOG") 2>&1

info "PULP_SOC_DIR: $PULP_SOC_DIR"
info "Commit: $PULP_SOC_COMMIT_ID"
info "Dataset: $DATASET_DIR"

if [[ "$SKIP_CHECKOUT" != true ]] && [[ "$SKIP_BENDER_LOCAL" != true ]]; then
    write_pulp_soc_bender_local
elif [[ "$SKIP_CHECKOUT" != true ]] && [[ "$SKIP_BENDER_LOCAL" == true ]]; then
    warn "Skipping Bender.local; bender may fail on gpio/axi conflict"
fi

pushd "$PULP_SOC_DIR" >/dev/null

if [[ "$SKIP_CHECKOUT" != true ]]; then
    if [[ "$BENDER_UPDATE" == true ]]; then
        warn "Running bender update (may fail if dependency graphs conflict)"
        bender update
    else
        info "Running bender checkout"
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
    "$PULP_SOC_DIR/" "$BUNDLE_DIR/"

SUMMARY="$DATASET_DIR/pulp_soc_summary.txt"
{
    echo "pulp_soc SCORE snapshot"
    echo "Generated (UTC): $(date -u '+%Y-%m-%d %H:%M:%S')"
    echo "Host: $(hostname 2>/dev/null || echo unknown) $(uname -s) $(uname -m)"
    echo "SCORE root: $PROJECT_ROOT"
    echo "Source repo: $PULP_SOC_DIR"
    echo "Git commit (short): $PULP_SOC_COMMIT_ID"
    echo "Git commit (full): $(git -C "$PULP_SOC_DIR" rev-parse HEAD 2>/dev/null || echo unknown)"
    echo "bender: $(bender --version 2>/dev/null || echo unknown)"
    echo "Bender.local (gpio override): $PULP_SOC_DIR/Bender.local"
    echo ""
    echo "See https://github.com/pulp-platform/pulp_soc and tools/pulp-soc/README.md"
    echo "Bundle path: $BUNDLE_DIR"
} > "$SUMMARY"

ok "Wrote $SUMMARY"
ok "generate_pulp_soc.sh completed."
