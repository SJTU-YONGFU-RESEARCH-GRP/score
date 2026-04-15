#!/usr/bin/env bash
#
# End-to-end Ibex flow for SCORE: submodule → install → generate (full defaults).
#
# Usage (from repository root, i.e. the directory containing tools/, scripts/, datasets/):
#   ./scripts/run_ibex.sh
#   ./scripts/run_ibex.sh --no-system-deps
#   ./scripts/run_ibex.sh -- --skip-verilator-check
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
IBEX_SUBMODULE="tools/ibex"
IBEX_FALLBACK_URL="${IBEX_FALLBACK_URL:-https://github.com/lowRISC/ibex.git}"
INSTALL_SCRIPT="$SCRIPT_DIR/install_ibex.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_ibex.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
NO_SYSTEM_DEPS=false
GENERATE_EXTRA=()

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging run_ibex

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }

# shellcheck source=scripts/common_submodule_bootstrap.sh
source "$SCRIPT_DIR/common_submodule_bootstrap.sh"

show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the full SCORE Ibex pipeline from the repository root:
  1. git submodule update --init --recursive ${IBEX_SUBMODULE}
  2. ${INSTALL_SCRIPT} (venv, Python deps, OS-aware system packages, Ibex CI or portable tools)
  3. ${GENERATE_SCRIPT} (RTL generation into datasets/ibex/...)

  Regression (simulations + optional RISC-V compliance) runs by default in generate_ibex.sh.
  To skip it or trim compliance:
    ./scripts/run_ibex.sh -- --no-regression
    ./scripts/run_ibex.sh -- --no-compliance-suite   # keep Makefile sims; skip external compliance clone/run

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1 (submodule already initialized)
  --skip-install       Skip step 2 (only submodule + generate)
  --skip-generate      Only submodule + install
  --no-system-deps     Pass --no-system-deps to install (no apt/dnf/brew package step)

  --                   All following arguments are passed only to generate_ibex.sh

Examples:
  $0
  $0 --no-system-deps
  $0 --skip-submodule --skip-install -- --skip-verilator-check
  $0 -- --no-regression
EOF
}

validate_root() {
    if [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run this script from the SCORE repo: cd /path/to/score && ./scripts/run_ibex.sh"
        exit 1
    fi
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]]; then
        warn "No .gitmodules at repo root; using fallback URL for ${IBEX_SUBMODULE}: ${IBEX_FALLBACK_URL}"
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

# --- Step 1: submodules ---
if [[ "$SKIP_SUBMODULE" != true ]]; then
    if score_is_tracked_submodule_path "$IBEX_SUBMODULE"; then
        score_prepare_tool_checkout "$PROJECT_ROOT" "$IBEX_SUBMODULE"
    else
        warn "Submodule path '$IBEX_SUBMODULE' is not tracked in this checkout; bootstrapping this checkout directly."
        info "Step 1/3: bootstrap $IBEX_SUBMODULE from .gitmodules URL (or fallback)"
        if [[ ! -d "$PROJECT_ROOT/$IBEX_SUBMODULE" ]]; then
            # Ibex may be intentionally absent from .gitmodules in some SCORE checkouts.
            # Provide a stable public fallback URL so run_ibex.sh remains self-contained.
            if ! score_bootstrap_missing_checkout "$PROJECT_ROOT" "$IBEX_SUBMODULE"; then
                warn "No .gitmodules URL for $IBEX_SUBMODULE; trying fallback URL: $IBEX_FALLBACK_URL"
                git clone "$IBEX_FALLBACK_URL" "$PROJECT_ROOT/$IBEX_SUBMODULE"
            fi
        fi
    fi
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

# --- Step 2: install ---
if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_ibex.sh"
    INSTALL_ARGS=()
    if [[ "$NO_SYSTEM_DEPS" == true ]]; then
        INSTALL_ARGS+=(--no-system-deps)
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

# Best-effort: load Ibex env for this shell (generate script activates venv itself)
if [[ -f "$PROJECT_ROOT/tools/ibex/setup_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/tools/ibex/setup_env.sh"
fi

# --- Step 3: generate ---
if [[ "$SKIP_GENERATE" != true ]]; then
    if [[ ${#GENERATE_EXTRA[@]} -gt 0 ]]; then
        info "Step 3/3: generate_ibex.sh (extra: ${GENERATE_EXTRA[*]})"
    else
        info "Step 3/3: generate_ibex.sh (defaults)"
    fi
    bash "$GENERATE_SCRIPT" "${GENERATE_EXTRA[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_ibex.sh completed successfully."
