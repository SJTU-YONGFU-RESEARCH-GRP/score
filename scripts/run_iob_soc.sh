#!/usr/bin/env bash
#
# End-to-end IOb-SoC flow for SCORE: submodule → install → generate (full defaults).
#
# Usage (from repository root, i.e. the directory containing tools/, scripts/, datasets/):
#   ./scripts/run_iob_soc.sh
#   ./scripts/run_iob_soc.sh --no-nix-build
#   ./scripts/run_iob_soc.sh -- --sim
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
IOB_SUBMODULE="tools/iob-soc"
INSTALL_SCRIPT="$SCRIPT_DIR/install_iob_soc.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_iob_soc.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
FORCE_NIX_BUILD=true
INSTALL_EXTRA=()
GENERATE_EXTRA=()

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[run_iob_soc]${NC} $*"; }
ok() { echo -e "${GREEN}[run_iob_soc]${NC} $*"; }
warn() { echo -e "${YELLOW}[run_iob_soc]${NC} $*"; }
err() { echo -e "${RED}[run_iob_soc]${NC} $*" >&2; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the full SCORE IOb-SoC pipeline from the repository root:
  1. git submodule update --init --recursive ${IOB_SUBMODULE}
  2. ${INSTALL_SCRIPT} (default: --force-build for first-time Nix/py2hwsw; use --no-nix-build to skip)
  3. ${GENERATE_SCRIPT} (default: sim + doc + FPGA only if Quartus nios2_command_shell.sh is on PATH)

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1 (submodule already initialized)
  --skip-install       Skip step 2 (only submodule + generate)
  --skip-generate      Only submodule + install
  --no-nix-build       Do not pass --force-build to install (faster when Nix env already exists)
  --install-jobs N     Pass --jobs N to install_iob_soc.sh

  --                   All following arguments are passed only to generate_iob_soc.sh

After install, you can source (when present):
  source ${PROJECT_ROOT}/scripts/iob_soc_env.sh

Examples:
  $0
  $0 --no-nix-build
  $0 --skip-submodule --skip-install -- --sim
  $0 -- --all
EOF
}

validate_root() {
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]] || [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run this script from the SCORE repo: cd /path/to/score && ./scripts/run_iob_soc.sh"
        exit 1
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

apply_iob_soc_env() {
    local env_sh="$PROJECT_ROOT/scripts/iob_soc_env.sh"
    if [[ -f "$env_sh" ]]; then
        # shellcheck source=/dev/null
        source "$env_sh"
    elif [[ -f "$PROJECT_ROOT/setup_iob_soc_env.sh" ]]; then
        # Legacy path from older install_iob_soc.sh (repo root)
        # shellcheck source=/dev/null
        source "$PROJECT_ROOT/setup_iob_soc_env.sh"
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
        --no-nix-build)
            FORCE_NIX_BUILD=false
            shift
            ;;
        --install-jobs)
            INSTALL_EXTRA+=(--jobs "$2")
            shift 2
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
    info "Host OS: ${PRETTY_NAME:-$NAME} ($(uname -m)); IOb-SoC install uses Nix and distro packages where applicable."
elif [[ "$(uname -s)" == "Darwin" ]]; then
    info "Host OS: macOS ($(uname -m))"
else
    info "Host OS: $(uname -s) $(uname -m)"
fi

if [[ "$FORCE_NIX_BUILD" == true ]]; then
    warn "Install will use --force-build (first-time Nix can take 1–3 hours). Use --no-nix-build to skip."
fi

if [[ "$SKIP_SUBMODULE" != true ]]; then
    info "Step 1/3: git submodule update --init --recursive $IOB_SUBMODULE"
    git submodule update --init --recursive "$IOB_SUBMODULE"
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_iob_soc.sh"
    INSTALL_ARGS=("${INSTALL_EXTRA[@]}")
    if [[ "$FORCE_NIX_BUILD" == true ]]; then
        INSTALL_ARGS+=(--force-build)
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

apply_iob_soc_env
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

if [[ "$SKIP_GENERATE" != true ]]; then
    if [[ ${#GENERATE_EXTRA[@]} -gt 0 ]]; then
        info "Step 3/3: generate_iob_soc.sh (extra: ${GENERATE_EXTRA[*]})"
    else
        info "Step 3/3: generate_iob_soc.sh (defaults: sim + doc; FPGA if Quartus is on PATH)"
    fi
    bash "$GENERATE_SCRIPT" "${GENERATE_EXTRA[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_iob_soc.sh completed successfully."
