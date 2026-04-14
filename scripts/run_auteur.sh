#!/usr/bin/env bash
#
# End-to-end auteur flow for SCORE: submodule → install → generate (Bender checkout, snapshot).
#
# Usage (from repository root, i.e. the directory containing tools/, scripts/, datasets/):
#   ./scripts/run_auteur.sh
#   ./scripts/run_auteur.sh --no-system-deps
#   ./scripts/run_auteur.sh --no-verilator
#   ./scripts/run_auteur.sh --no-full-sim
#   ./scripts/run_auteur.sh -- --skip-checkout
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
AUTEUR_SUBMODULE="tools/auteur"
INSTALL_SCRIPT="$SCRIPT_DIR/install_auteur.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_auteur.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
NO_SYSTEM_DEPS=false
NO_VERILATOR=false
NO_FULL_SIM=false
GENERATE_EXTRA=()

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging run_auteur

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }
get_commit_id() {
    local repo_path="$1"
    if git -C "$repo_path" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the full SCORE auteur pipeline from the repository root:
  1. git submodule update --init --recursive ${AUTEUR_SUBMODULE}
  2. ${INSTALL_SCRIPT} (Bender + OS packages; Verilator + C++ toolchain by default)
  3. ${GENERATE_SCRIPT} (bender checkout, default verification, snapshot under datasets/auteur/...)

Verification (default in generate_auteur.sh): Bender.lock path check, bender flist-plus,
  Verilator lint + elaboration + full clocked TB sim (tb_auteur_fifo; see verification_summary.txt).

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1 (submodule already initialized)
  --skip-install       Skip step 2 (only submodule + generate)
  --skip-generate      Only submodule + install
  --no-system-deps     Pass --no-system-deps to install (no apt/dnf/brew package step)
  --no-verilator       Pass --no-verilator to install and --skip-verilator to generate
  --no-full-sim        Pass --no-full-sim to generate (skip clocked TB; keep lint + elaboration)

  --                   All following arguments are passed only to generate_auteur.sh

Examples:
  $0
  $0 --no-system-deps
  $0 --no-full-sim
  $0 --skip-submodule --skip-install -- --skip-checkout
  $0 -- --bender-update
  $0 -- --no-verify
  $0 -- --skip-verilator
  $0 --no-verilator
EOF
}

validate_root() {
    if [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run this script from the SCORE repo: cd /path/to/score && ./scripts/run_auteur.sh"
        exit 1
    fi
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]]; then
        warn "No .gitmodules at repo root (optional); submodule step may be a no-op if paths are missing."
    fi
    if [[ ! -f "$INSTALL_SCRIPT" ]]; then
        err "Missing $INSTALL_SCRIPT"
        exit 1
    fi
    if [[ ! -f "$GENERATE_SCRIPT" ]]; then
        err "Missing $GENERATE_SCRIPT"
        exit 1
    fi
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            show_help
            exit 0
            ;;
        --skip-submodule)
            SKIP_SUBMODULE=true
            shift
            ;;
        --skip-install)
            SKIP_INSTALL=true
            shift
            ;;
        --skip-generate)
            SKIP_GENERATE=true
            shift
            ;;
        --no-system-deps)
            NO_SYSTEM_DEPS=true
            shift
            ;;
        --no-verilator)
            NO_VERILATOR=true
            shift
            ;;
        --no-full-sim)
            NO_FULL_SIM=true
            shift
            ;;
        --)
            shift
            GENERATE_EXTRA=("$@")
            break
            ;;
        *)
            err "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

cd "$PROJECT_ROOT"
validate_root

if ! git -C "$PROJECT_ROOT" rev-parse --git-dir >/dev/null 2>&1; then
    err "Not a git checkout (no .git). Clone SCORE with git to use submodules."
    exit 1
fi

info "Project root: $PROJECT_ROOT"
if [[ -f /etc/os-release ]]; then
    # shellcheck source=/dev/null
    . /etc/os-release
    info "Host OS: ${PRETTY_NAME:-$NAME} ($(uname -m)); install step picks packages per distro."
elif [[ "$(uname -s)" == "Darwin" ]]; then
    info "Host OS: macOS ($(uname -m)); install step uses Homebrew where applicable."
else
    info "Host OS: $(uname -s) $(uname -m)"
fi

if [[ "$SKIP_SUBMODULE" != true ]]; then
    info "Step 1/3: git submodule update --init --recursive $AUTEUR_SUBMODULE"
    git submodule update --init --recursive "$AUTEUR_SUBMODULE"
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_auteur.sh"
    INSTALL_ARGS=()
    if [[ "$NO_SYSTEM_DEPS" == true ]]; then
        INSTALL_ARGS+=(--no-system-deps)
    fi
    if [[ "$NO_VERILATOR" == true ]]; then
        INSTALL_ARGS+=(--no-verilator)
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/auteur_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/auteur_env.sh"
fi

if [[ "$SKIP_GENERATE" != true ]]; then
    GEN_ARGS=("${GENERATE_EXTRA[@]}")
    if [[ "$NO_VERILATOR" == true ]]; then
        GEN_ARGS+=(--skip-verilator)
    fi
    if [[ "$NO_FULL_SIM" == true ]]; then
        GEN_ARGS+=(--no-full-sim)
    fi
    if [[ ${#GEN_ARGS[@]} -gt 0 ]]; then
        info "Step 3/3: generate_auteur.sh (extra: ${GEN_ARGS[*]})"
    else
        info "Step 3/3: generate_auteur.sh (bender checkout + verification + snapshot)"
    fi
    bash "$GENERATE_SCRIPT" "${GEN_ARGS[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_auteur.sh completed successfully."
TOOL_DIR="$PROJECT_ROOT/tools/auteur"
AUTEUR_HEAD_SHORT="$(get_commit_id "$TOOL_DIR")"
info "Dataset path for current tools/auteur HEAD: $PROJECT_ROOT/datasets/auteur/$AUTEUR_HEAD_SHORT"
info "Summary: $PROJECT_ROOT/datasets/auteur/$AUTEUR_HEAD_SHORT/auteur_summary.txt"
