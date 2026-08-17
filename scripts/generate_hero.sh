#!/usr/bin/env bash
#
# HERO RTL / build-script generation (hardware tree).
# Regenerates Questa compile scripts and snapshots RTL under datasets/hero/<commit>/.
# Default skips `bender update` when hardware/deps already exists: HERO's Bender.yml pins
# deleted branch names (axi_dwc_akurth, undefined, …), so a fresh update cannot resolve.
# Pass --bender-update to force refresh (requires reachable refs).
#
# Usage (from repository root):
#   ./scripts/generate_hero.sh
#   ./scripts/generate_hero.sh --bender-update
#   ./scripts/generate_hero.sh --skip-bender-update
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
HERO_DIR="$PROJECT_ROOT/tools/hero"
HERO_HW="$HERO_DIR/hardware"

# Default: skip update when deps tree is present (SCORE HW-only).
SKIP_BENDER_UPDATE=auto

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
# shellcheck source=scripts/common_bender.sh
source "$SCRIPT_DIR/common_bender.sh"
init_script_logging generate_hero

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
show_help() {
    cat << EOF
Usage: $0 [OPTIONS]

Generate HERO hardware build artifacts (Bender deps + vsim/compile.tcl + datasets/hero).

Options:
  -h, --help              Show this help
  --skip-bender-update    Do not run ./bender update (use existing hardware/deps)
  --bender-update         Force ./bender update even if hardware/deps exists

Environment:
  Source $PROJECT_ROOT/setup_hero_env.sh before running if PATH is not already set.
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            show_help
            exit 0
            ;;
        --skip-bender-update)
            SKIP_BENDER_UPDATE=true
            shift
            ;;
        --bender-update)
            SKIP_BENDER_UPDATE=false
            shift
            ;;
        *)
            err "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

if [[ ! -d "$HERO_HW" ]]; then
    err "HERO hardware directory not found: $HERO_HW"
    err "Initialize the submodule: git submodule update --init tools/hero && bash scripts/hero_submodule_remotes.sh"
    exit 1
fi

if [[ -f "$PROJECT_ROOT/setup_hero_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/setup_hero_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

cd "$HERO_HW"

if [[ ! -x ./bender ]]; then
    info "Local bender not present; running scripts/hero_hardware_bender_install.sh"
    bash "$SCRIPT_DIR/hero_hardware_bender_install.sh" "$HERO_HW"
fi

if [[ ! -x ./bender ]]; then
    err "No executable ./bender in $HERO_HW (run install_hero.sh or scripts/hero_hardware_bender_install.sh)"
    exit 1
fi
# Makefile rule is `bender: Makefile`; keep binary mtime newer so make does not re-fetch.
touch ./bender

if [[ "$SKIP_BENDER_UPDATE" == auto ]]; then
    if [[ -d "$HERO_HW/deps/axi" && -d "$HERO_HW/deps/pulp_cluster" ]]; then
        SKIP_BENDER_UPDATE=true
        info "hardware/deps present; skipping bender update (use --bender-update to force)"
    else
        SKIP_BENDER_UPDATE=false
    fi
fi

if [[ "$SKIP_BENDER_UPDATE" != true ]]; then
    info "Running ./bender update"
    PATH="${HERO_HW}:${PATH}" score_bender_checkout update
else
    warn "Skipped ./bender update."
fi

if [[ ! -d "$HERO_HW/deps/axi" || ! -d "$HERO_HW/deps/pulp_cluster" ]]; then
    err "HERO hardware/deps incomplete (need deps/axi and deps/pulp_cluster)."
    exit 1
fi

info "Running make vsim/compile.tcl"
make vsim/compile.tcl

# Snapshot RTL into datasets/hero/<commit>/ for SCORE dataset layout.
commit_id="$(git -C "$HERO_DIR" rev-parse --short=8 HEAD 2>/dev/null || echo unknown)"
dataset_dir="$PROJECT_ROOT/datasets/hero/${commit_id}"
rtl_dir="$dataset_dir/rtl_designs/hero_pulp"
mkdir -p "$rtl_dir" "$dataset_dir/logs"
info "Copying HERO hardware RTL sources to $rtl_dir"
mkdir -p "$rtl_dir/src" "$rtl_dir/deps"
rsync -a --delete \
    --exclude='.git' \
    "$HERO_HW/src/" "$rtl_dir/src/"
rsync -a --delete \
    --exclude='.git' \
    "$HERO_HW/deps/" "$rtl_dir/deps/"
if [[ -f "$HERO_HW/vsim/compile.tcl" ]]; then
    mkdir -p "$dataset_dir/build_artifacts"
    cp -a "$HERO_HW/vsim/compile.tcl" "$dataset_dir/build_artifacts/compile.tcl"
fi
rtl_count="$(find "$rtl_dir" -type f \( -name '*.sv' -o -name '*.v' -o -name '*.svh' -o -name '*.vh' \) | wc -l)"
info "RTL snapshot file count (sv/v/svh/vh): ${rtl_count}"

ok "HERO generation finished (dataset: $dataset_dir)."
