#!/usr/bin/env bash
# Shared logging for SCORE scripts (AraXL-style prefixes).
# Source from a script under scripts/ after SCRIPT_DIR is set (or rely on this file's location).
# shellcheck shell=bash

_COMMON_LOGGING_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
_COMMON_PROJECT_ROOT="$(dirname "$_COMMON_LOGGING_DIR")"

# Colors (available to sourcing scripts, e.g. local debug()).
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
CYAN='\033[0;36m'
PURPLE='\033[0;35m'
NC='\033[0m'

# Set by init_script_logging / init_script_logging_files.
SCRIPT_LOG_NAME=""
SCRIPT_LOG_FILE=""
SCRIPT_LOG_TEE_EXTRA=()

# init_script_logging <script_name> [log_dir_spec]
# log_dir_spec:
#   unset/empty — console only (SCRIPT_LOG_FILE unset).
#   single path segment (no /) — log directory is $PROJECT_ROOT/logs/<spec>/
#   relative path with / — log directory is $PROJECT_ROOT/<spec>/
#   absolute path — log directory is <spec>/
# Log file: <log_dir>/<script_name>_YYYYMMDD_HHMMSS.log
init_script_logging() {
    local name="$1"
    local log_spec="${2:-}"
    SCRIPT_LOG_NAME="$name"
    SCRIPT_LOG_FILE=""
    SCRIPT_LOG_TEE_EXTRA=()
    if [[ -z "$log_spec" ]]; then
        return 0
    fi
    local log_dir
    if [[ "$log_spec" = /* ]]; then
        log_dir="$log_spec"
    elif [[ "$log_spec" == */* ]]; then
        log_dir="$_COMMON_PROJECT_ROOT/$log_spec"
    else
        log_dir="$_COMMON_PROJECT_ROOT/logs/$log_spec"
    fi
    mkdir -p "$log_dir"
    SCRIPT_LOG_FILE="$log_dir/${name}_$(date +%Y%m%d_%H%M%S).log"
    : >>"$SCRIPT_LOG_FILE"
}

# init_script_logging_files <script_name> <primary_log_file> [extra_tee_file ...]
# Tee every log_* line to primary and all extra files (e.g. main.log + session log).
init_script_logging_files() {
    local name="$1"
    shift
    SCRIPT_LOG_NAME="$name"
    SCRIPT_LOG_FILE=""
    SCRIPT_LOG_TEE_EXTRA=()
    if [[ $# -eq 0 ]]; then
        return 0
    fi
    SCRIPT_LOG_FILE="$1"
    shift
    SCRIPT_LOG_TEE_EXTRA=("$@")
    local f
    mkdir -p "$(dirname "$SCRIPT_LOG_FILE")"
    : >>"$SCRIPT_LOG_FILE"
    for f in "${SCRIPT_LOG_TEE_EXTRA[@]}"; do
        mkdir -p "$(dirname "$f")"
        : >>"$f"
    done
}

_log_emit() {
    local fd="$1"
    shift
    local line="$*"
    if [[ -n "${SCRIPT_LOG_FILE:-}" ]]; then
        local tee_args=("$SCRIPT_LOG_FILE")
        if [[ ${#SCRIPT_LOG_TEE_EXTRA[@]} -gt 0 ]]; then
            tee_args+=("${SCRIPT_LOG_TEE_EXTRA[@]}")
        fi
        if [[ "$fd" == 2 ]]; then
            echo -e "$line" | tee -a "${tee_args[@]}" >&2
        else
            echo -e "$line" | tee -a "${tee_args[@]}"
        fi
    else
        if [[ "$fd" == 2 ]]; then
            echo -e "$line" >&2
        else
            echo -e "$line"
        fi
    fi
}

log_raw() {
    _log_emit 1 "$*"
}

log_info() {
    _log_emit 1 "${CYAN}[${SCRIPT_LOG_NAME}][INFO]${NC} $*"
}

log_success() {
    _log_emit 1 "${GREEN}[${SCRIPT_LOG_NAME}][OK]${NC} $*"
}

log_warning() {
    _log_emit 1 "${YELLOW}[${SCRIPT_LOG_NAME}][WARN]${NC} $*"
}

log_error() {
    _log_emit 2 "${RED}[${SCRIPT_LOG_NAME}][ERR]${NC} $*"
}
