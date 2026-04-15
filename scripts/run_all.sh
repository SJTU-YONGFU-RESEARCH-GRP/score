#!/usr/bin/env bash
#
# Unified SCORE regression orchestrator.
# Runs selected scripts/run_*.sh pipelines and prints a consolidated summary.
#
# Usage:
#   ./scripts/run_all.sh
#   ./scripts/run_all.sh --projects "ara,araxl,spatz,rv12"
#   ./scripts/run_all.sh --exclude "openpiton,gemmini"
#   ./scripts/run_all.sh --dry-run
#   ./scripts/run_all.sh -- --no-system-deps
#

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
SELF_NAME="$(basename "$0")"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging run_all

info() { log_info "$@"; }
ok() { log_success "$@"; }
warn() { log_warning "$@"; }
err() { log_error "$@"; }

FAIL_FAST=false
DRY_RUN=false
LIST_ONLY=false
PROJECTS_CSV=""
EXCLUDE_CSV=""
RUNNER_EXTRA_ARGS=()

declare -a ALL_RUNNERS=()
declare -a SELECTED_RUNNERS=()
declare -a PASSED_RUNNERS=()
declare -a FAILED_RUNNERS=()
declare -a SKIPPED_RUNNERS=()

show_help() {
    cat << EOF
Usage: $0 [OPTIONS] [-- RUNNER_ARGS...]

Run SCORE project regressions via scripts/run_*.sh wrappers.

Default behavior:
  - Executes all scripts/run_*.sh (except run_all.sh) in lexical order.
  - Continues after failures and reports a final summary.

Options:
  -h, --help              Show this help
  --list                  List selected run scripts and exit
  --dry-run               Show what would be executed, then exit
  --fail-fast             Stop on first failure
  --projects CSV          Only run these project names (e.g. "ara,araxl,spatz")
  --exclude CSV           Exclude these project names

  --                      All following args are passed to each run_<project>.sh

Examples:
  $0
  $0 --projects "ara,araxl,spatz,rv12"
  $0 --exclude "openpiton,rocket_chip"
  $0 -- --no-system-deps
  $0 --projects "araxl,spatz" -- --skip-submodule
EOF
}

normalize_csv_to_lines() {
    local csv="$1"
    echo "$csv" | tr ',' '\n' | sed 's/^ *//;s/ *$//' | sed '/^$/d'
}

contains_token() {
    local token="$1"
    shift
    local x
    for x in "$@"; do
        if [[ "$x" == "$token" ]]; then
            return 0
        fi
    done
    return 1
}

discover_runners() {
    local path
    shopt -s nullglob
    for path in "$SCRIPT_DIR"/run_*.sh; do
        local base
        base="$(basename "$path")"
        if [[ "$base" == "$SELF_NAME" ]]; then
            continue
        fi
        ALL_RUNNERS+=("$base")
    done
    shopt -u nullglob
}

build_selection() {
    local include_tokens=()
    local exclude_tokens=()

    if [[ -n "$PROJECTS_CSV" ]]; then
        mapfile -t include_tokens < <(normalize_csv_to_lines "$PROJECTS_CSV")
    fi
    if [[ -n "$EXCLUDE_CSV" ]]; then
        mapfile -t exclude_tokens < <(normalize_csv_to_lines "$EXCLUDE_CSV")
    fi

    local base project
    for base in "${ALL_RUNNERS[@]}"; do
        project="${base#run_}"
        project="${project%.sh}"

        if [[ ${#include_tokens[@]} -gt 0 ]] && ! contains_token "$project" "${include_tokens[@]}"; then
            SKIPPED_RUNNERS+=("$base")
            continue
        fi
        if [[ ${#exclude_tokens[@]} -gt 0 ]] && contains_token "$project" "${exclude_tokens[@]}"; then
            SKIPPED_RUNNERS+=("$base")
            continue
        fi
        SELECTED_RUNNERS+=("$base")
    done
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            show_help
            exit 0
            ;;
        --list)
            LIST_ONLY=true
            shift
            ;;
        --dry-run)
            DRY_RUN=true
            shift
            ;;
        --fail-fast)
            FAIL_FAST=true
            shift
            ;;
        --projects)
            PROJECTS_CSV="${2:-}"
            shift 2
            ;;
        --exclude)
            EXCLUDE_CSV="${2:-}"
            shift 2
            ;;
        --)
            shift
            RUNNER_EXTRA_ARGS=("$@")
            break
            ;;
        *)
            err "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
done

if [[ ! -d "$PROJECT_ROOT/.git" ]] && [[ ! -f "$PROJECT_ROOT/.git" ]]; then
    err "Run from inside the SCORE git checkout: $PROJECT_ROOT"
    exit 1
fi

discover_runners
if [[ ${#ALL_RUNNERS[@]} -eq 0 ]]; then
    err "No scripts/run_*.sh found under $SCRIPT_DIR"
    exit 1
fi
build_selection

if [[ ${#SELECTED_RUNNERS[@]} -eq 0 ]]; then
    warn "No runners selected. Use --projects/--exclude filters accordingly."
    exit 0
fi

info "Project root: $PROJECT_ROOT"
info "Selected runners (${#SELECTED_RUNNERS[@]}): ${SELECTED_RUNNERS[*]}"
if [[ ${#SKIPPED_RUNNERS[@]} -gt 0 ]]; then
    info "Skipped by selection (${#SKIPPED_RUNNERS[@]}): ${SKIPPED_RUNNERS[*]}"
fi
if [[ ${#RUNNER_EXTRA_ARGS[@]} -gt 0 ]]; then
    info "Pass-through args to each runner: ${RUNNER_EXTRA_ARGS[*]}"
fi

if [[ "$LIST_ONLY" == true ]] || [[ "$DRY_RUN" == true ]]; then
    ok "No execution requested (--list/--dry-run)."
    exit 0
fi

cd "$PROJECT_ROOT"

for base in "${SELECTED_RUNNERS[@]}"; do
    local_runner="$SCRIPT_DIR/$base"
    info "====================================================================="
    info "Running $base"

    if bash "$local_runner" "${RUNNER_EXTRA_ARGS[@]}"; then
        PASSED_RUNNERS+=("$base")
        ok "$base: PASS"
    else
        FAILED_RUNNERS+=("$base")
        err "$base: FAIL"
        if [[ "$FAIL_FAST" == true ]]; then
            err "Stopping due to --fail-fast."
            break
        fi
    fi
done

info "====================================================================="
info "Regression summary"
info "  Selected: ${#SELECTED_RUNNERS[@]}"
info "  Passed:   ${#PASSED_RUNNERS[@]}"
info "  Failed:   ${#FAILED_RUNNERS[@]}"
if [[ ${#SKIPPED_RUNNERS[@]} -gt 0 ]]; then
    info "  Skipped:  ${#SKIPPED_RUNNERS[@]}"
fi

if [[ ${#PASSED_RUNNERS[@]} -gt 0 ]]; then
    ok "PASS: ${PASSED_RUNNERS[*]}"
fi
if [[ ${#FAILED_RUNNERS[@]} -gt 0 ]]; then
    err "FAIL: ${FAILED_RUNNERS[*]}"
    exit 1
fi

ok "All selected regressions passed."
