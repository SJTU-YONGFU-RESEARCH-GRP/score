#!/usr/bin/env bash
#
# End-to-end HERO flow for SCORE: submodules (HERO + Rocket Chip) → install → generate (full defaults).
#
# Usage (from repository root, i.e. the directory containing tools/, scripts/, datasets/):
#   ./scripts/run_hero.sh
#   ./scripts/run_hero.sh --skip-rocket
#   ./scripts/run_hero.sh --no-verilator
#   ./scripts/run_hero.sh -- --dry-run
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
HERO_SUBMODULE="tools/hero"
ROCKET_SUBMODULE="tools/rocket-chip"
INSTALL_SCRIPT="$SCRIPT_DIR/install_hero.sh"
GENERATE_SCRIPT="$SCRIPT_DIR/generate_hero.sh"

SKIP_SUBMODULE=false
SKIP_INSTALL=false
SKIP_GENERATE=false
SKIP_ROCKET_SUBMODULE=false
INSTALL_VERILATOR=true
INSTALL_BENDER=true
GENERATE_EXTRA=()

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m'

info() { echo -e "${BLUE}[run_hero]${NC} $*"; }
ok() { echo -e "${GREEN}[run_hero]${NC} $*"; }
warn() { echo -e "${YELLOW}[run_hero]${NC} $*"; }
err() { echo -e "${RED}[run_hero]${NC} $*" >&2; }

show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- EXTRA_GENERATE_ARGS...]

Run the full SCORE HERO pipeline from the repository root:
  1. tools/hero submodule + scripts/hero_submodule_remotes.sh (nested SSH/HTTPS fixes), then tools/rocket-chip if not skipped
  2. ${INSTALL_SCRIPT} --auto (full install: deps, Bender, Verilator by default)
  3. ${GENERATE_SCRIPT} (full generation: Bender update + hardware compile scripts)

Options:
  -h, --help           Show this help
  --skip-submodule     Skip step 1 (submodules already initialized)
  --skip-install       Skip step 2 (only submodule + generate)
  --skip-generate      Only submodule + install
  --skip-rocket        Do not initialize ${ROCKET_SUBMODULE} (only ${HERO_SUBMODULE})
  --no-verilator       Pass --skip-verilator to install (no Verilator build/install)
  --no-bender          Pass --skip-bender to install

  --                   All following arguments are passed only to generate_hero.sh

Environment (submodule step / scripts/hero_submodule_remotes.sh):
  HERO_KEEP_AXI_RISCV_ATOMICS_VIP=1 Keep private vip line in axi_riscv_atomics/Bender.yml (default: remove
                                  it; public upstream uses GitHub common_verification only).
  HERO_FETCH_HERCULES_COMPILER=1  Clone toolchain/HerculesCompiler-public from .gitmodules (default:
                                  skipped). Use with ETH iis-git access or with HERO_HERCULES_COMPILER_URL.
  HERO_HERCULES_COMPILER_URL   URL for toolchain/HerculesCompiler-public; if set, that submodule is
                               cloned (e.g. public fork): https://github.com/<you>/HerculesCompiler-public.git
  HERO_BUILDROOT_URL           Override buildroot submodule URL (default rewrites to GitHub mirror).
  HERO_BUILDROOT_USE_OFFICIAL=1 Keep https://git.buildroot.net/buildroot instead of the GitHub mirror.
  HERO_USE_SSH=1               Use SSH for GitHub HTTPS submodule URLs and for buildroot on GitHub.
  HERO_IIS_GIT_USE_SSH=1       Use SSH for HerculesCompiler on iis-git (default is HTTPS).
  HERO_IIS_GIT_FORCE_HTTPS=1   Deprecated; HTTPS is already the default for iis-git.

Examples:
  $0
  HERO_HERCULES_COMPILER_URL=https://github.com/<you>/HerculesCompiler-public.git $0
  $0 --skip-rocket
  $0 --no-verilator
  $0 --skip-submodule --skip-install -- --help
EOF
}

validate_root() {
    if [[ ! -f "$PROJECT_ROOT/.gitmodules" ]] || [[ ! -d "$PROJECT_ROOT/scripts" ]]; then
        err "Run this script from the SCORE repo: cd /path/to/score && ./scripts/run_hero.sh"
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
        --skip-rocket)
            SKIP_ROCKET_SUBMODULE=true
            shift
            ;;
        --no-verilator)
            INSTALL_VERILATOR=false
            shift
            ;;
        --no-bender)
            INSTALL_BENDER=false
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
# HERO: init without --recursive first so hero_submodule_remotes.sh can rewrite nested URLs
# (buildroot via github.com mirror; HerculesCompiler skipped by default — private iis-git) before recursive clone.
if [[ "$SKIP_SUBMODULE" != true ]]; then
    info "Step 1/3: git submodule update --init $HERO_SUBMODULE"
    git submodule update --init "$HERO_SUBMODULE"
    info "Step 1/3: HERO nested submodules (remote fixes: scripts/hero_submodule_remotes.sh)"
    bash "$SCRIPT_DIR/hero_submodule_remotes.sh"
    if [[ "$SKIP_ROCKET_SUBMODULE" != true ]]; then
        info "Step 1/3: git submodule update --init --recursive $ROCKET_SUBMODULE"
        git submodule update --init --recursive "$ROCKET_SUBMODULE"
    fi
    ok "Submodules ready."
else
    warn "Skipped submodule step."
fi

# --- Step 2: install ---
if [[ "$SKIP_INSTALL" != true ]]; then
    info "Step 2/3: install_hero.sh (full install, --auto)"
    INSTALL_ARGS=(--auto)
    if [[ "$INSTALL_VERILATOR" != true ]]; then
        INSTALL_ARGS+=(--skip-verilator)
    fi
    if [[ "$INSTALL_BENDER" != true ]]; then
        INSTALL_ARGS+=(--skip-bender)
    fi
    bash "$INSTALL_SCRIPT" "${INSTALL_ARGS[@]}"
    ok "Install step finished."
else
    warn "Skipped install step."
fi

if [[ -f "$PROJECT_ROOT/setup_hero_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/setup_hero_env.sh"
fi
if [[ -f "$PROJECT_ROOT/scripts/setup_local_env.sh" ]]; then
    # shellcheck source=/dev/null
    source "$PROJECT_ROOT/scripts/setup_local_env.sh"
fi

# --- Step 3: generate ---
if [[ "$SKIP_GENERATE" != true ]]; then
    if [[ ${#GENERATE_EXTRA[@]} -gt 0 ]]; then
        info "Step 3/3: generate_hero.sh (extra: ${GENERATE_EXTRA[*]})"
    else
        info "Step 3/3: generate_hero.sh (default: Bender update + vsim compile scripts)"
    fi
    bash "$GENERATE_SCRIPT" "${GENERATE_EXTRA[@]}"
    ok "Generate step finished."
else
    warn "Skipped generate step."
fi

ok "run_hero.sh completed successfully."
