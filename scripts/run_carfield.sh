#!/usr/bin/env bash
#
# End-to-end carfield flow for SCORE: submodule → install → generate (Bender checkout, snapshot).
#
# Usage (from repository root, i.e. the directory containing tools/, scripts/, datasets/):
#   ./scripts/run_carfield.sh
#   ./scripts/run_carfield.sh --no-system-deps
#   ./scripts/run_carfield.sh -- --skip-checkout
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
CARFIELD_SUBMODULE="tools/carfield"
INSTALL_SCRIPT="$SCRIPT_DIR/install_carfield.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_carfield.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
NO_SYSTEM_DEPS=false
GENERATE_EXTRA=()

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging run_carfield

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }

is_tracked_submodule_path() {
    local submodule_path="$1"
    git ls-files --error-unmatch -- "$submodule_path" >/dev/null 2>&1
}

get_submodule_url_from_gitmodules() {
    local submodule_path="$1"
    local key
    key="submodule.${submodule_path}.url"
    git config --file "$PROJECT_ROOT/.gitmodules" --get "$key" 2>/dev/null || true
}

bootstrap_missing_carfield_checkout() {
    local carfield_url
    carfield_url="$(get_submodule_url_from_gitmodules "$CARFIELD_SUBMODULE")"
    if [[ -z "$carfield_url" ]]; then
        err "Could not resolve URL for $CARFIELD_SUBMODULE from .gitmodules"
        return 1
    fi
    if [[ -d "$CARFIELD_SUBMODULE/.git" ]] || git -C "$CARFIELD_SUBMODULE" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        info "Found existing git checkout at $CARFIELD_SUBMODULE"
        return 0
    fi
    if [[ -e "$CARFIELD_SUBMODULE" ]]; then
        err "$CARFIELD_SUBMODULE exists but is not a git checkout; remove or rename it, then rerun."
        return 1
    fi
    info "Bootstrapping missing checkout: git clone $carfield_url $CARFIELD_SUBMODULE"
    git clone "$carfield_url" "$CARFIELD_SUBMODULE"
}

show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the full SCORE carfield pipeline from the repository root:
  1. git submodule update --init --recursive ${CARFIELD_SUBMODULE}
  2. ${INSTALL_SCRIPT} (Bender + OS packages)
  3. ${GENERATE_SCRIPT} (bender checkout + snapshot under datasets/carfield/...)

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1 (submodule already initialized)
  --skip-install       Skip step 2 (only submodule + generate)
  --skip-generate      Only submodule + install
  --no-system-deps     Pass --no-system-deps to install (no apt/dnf/brew package step)

  --                   All following arguments are passed only to generate_carfield.sh

Examples:
  $0
  $0 --no-system-deps
  $0 --skip-submodule --skip-install -- --skip-checkout
  $0 -- --bender-update
EOF
}

validate_root() {
    if [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run this script from the SCORE repo: cd /path/to/score && ./scripts/run_carfield.sh"
        exit 1
    fi
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]]; then
        warn "No .gitmodules at repo root; submodule bootstrap needs a URL for ${CARFIELD_SUBMODULE}."
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

if [[ "$SKIP_SUBMODULE" != true ]]; then
    if is_tracked_submodule_path "$CARFIELD_SUBMODULE"; then
        info "Step 1/3: git submodule update --init --recursive $CARFIELD_SUBMODULE"
        git submodule sync -- "$CARFIELD_SUBMODULE"
        git submodule update --init --recursive "$CARFIELD_SUBMODULE"
    else
        warn "Submodule path '$CARFIELD_SUBMODULE' is not tracked in this checkout; syncing all submodules instead."
        info "Step 1/3: git submodule sync --recursive && git submodule update --init --recursive"
        git submodule sync --recursive
        git submodule update --init --recursive
        if [[ ! -d "$CARFIELD_SUBMODULE" ]]; then
            warn "$CARFIELD_SUBMODULE is still missing after submodule update; bootstrapping plain git checkout."
            bootstrap_missing_carfield_checkout
        fi
    fi
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_carfield.sh"
    INSTALL_ARGS=()
    if [[ "$NO_SYSTEM_DEPS" == true ]]; then
        INSTALL_ARGS+=(--no-system-deps)
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

if [[ -f "$PROJECT_ROOT/scripts/carfield_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/carfield_env.sh"
fi

if [[ "$SKIP_GENERATE" != true ]]; then
    if [[ ${#GENERATE_EXTRA[@]} -gt 0 ]]; then
        info "Step 3/3: generate_carfield.sh (extra: ${GENERATE_EXTRA[*]})"
    else
        info "Step 3/3: generate_carfield.sh (bender checkout + snapshot)"
    fi
    bash "$GENERATE_SCRIPT" "${GENERATE_EXTRA[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_carfield.sh completed successfully."
