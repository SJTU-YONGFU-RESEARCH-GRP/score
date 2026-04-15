#!/usr/bin/env bash
# Shared git submodule bootstrap for SCORE scripts/run_*.sh.
# Source after common_logging.sh when info/warn/err are defined (optional fallbacks otherwise).
# shellcheck shell=bash

score_is_tracked_submodule_path() {
    local path="$1"
    git ls-files --error-unmatch -- "$path" >/dev/null 2>&1
}

score_submodule_url_from_gitmodules() {
    local project_root="$1"
    local path="$2"
    local key="submodule.${path}.url"
    git config --file "${project_root}/.gitmodules" --get "$key" 2>/dev/null || true
}

score_bootstrap_missing_checkout() {
    local project_root="$1"
    local path="$2"
    local log_prefix="${3:-}"
    local url abs_path msg

    url="$(score_submodule_url_from_gitmodules "$project_root" "$path")"
    if [[ -z "$url" ]]; then
        msg="${log_prefix}Could not resolve URL for ${path} from .gitmodules"
        if declare -F err >/dev/null 2>&1; then
            err "$msg"
        else
            printf '%s\n' "$msg" >&2
        fi
        return 1
    fi

    abs_path="${project_root}/${path}"
    if [[ -d "${abs_path}/.git" ]] || git -C "$abs_path" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        msg="${log_prefix}Found existing git checkout at ${path}"
        if declare -F info >/dev/null 2>&1; then
            info "$msg"
        else
            printf '%s\n' "$msg"
        fi
        return 0
    fi
    if [[ -e "$abs_path" ]]; then
        msg="${log_prefix}${path} exists but is not a git checkout; remove or rename it, then rerun."
        if declare -F err >/dev/null 2>&1; then
            err "$msg"
        else
            printf '%s\n' "$msg" >&2
        fi
        return 1
    fi

    msg="${log_prefix}Bootstrapping missing checkout: git clone ${url} ${path}"
    if declare -F info >/dev/null 2>&1; then
        info "$msg"
    else
        printf '%s\n' "$msg"
    fi
    git clone "$url" "$abs_path"
}

score_prepare_tool_checkout() {
    local project_root="$1"
    local path="$2"
    (
        cd "$project_root" || exit 1
        if score_is_tracked_submodule_path "$path"; then
            if declare -F info >/dev/null 2>&1; then
                info "Step 1/3: git submodule update --init --recursive ${path}"
            fi
            git submodule sync -- "$path"
            git submodule update --init --recursive "$path"
        else
            if declare -F warn >/dev/null 2>&1; then
                warn "Submodule path '${path}' is not tracked in this checkout; syncing all submodules instead."
            fi
            if declare -F info >/dev/null 2>&1; then
                info "Step 1/3: git submodule sync --recursive && git submodule update --init --recursive"
            fi
            git submodule sync --recursive
            git submodule update --init --recursive
            if [[ ! -d "$path" ]]; then
                if declare -F warn >/dev/null 2>&1; then
                    warn "${path} is still missing after submodule update; bootstrapping plain git checkout."
                fi
                score_bootstrap_missing_checkout "$project_root" "$path" ""
            fi
        fi
    )
}
