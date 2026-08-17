#!/usr/bin/env bash
# Shared helpers for SCORE "simple RTL" architectures (hand-written Verilog/SV cores).
# Source after common_logging.sh. Callers set SCORE_SIMPLE_* variables or pass args.
# shellcheck shell=bash

score_simple_get_commit() {
    local repo_path="$1"
    if git -C "$repo_path" rev-parse --is-inside-work-tree >/dev/null 2>&1; then
        git -C "$repo_path" rev-parse HEAD 2>/dev/null | cut -c1-8 || echo "unknown"
    else
        echo "unknown"
    fi
}

score_simple_json_escape() {
    local s="$1"
    if command -v python3 >/dev/null 2>&1; then
        python3 -c "import json,sys; print(json.dumps(sys.argv[1]))" "$s" 2>/dev/null && return 0
    fi
    s=${s//\\/\\\\}
    s=${s//\"/\\\"}
    printf '"%s"' "$s"
}

# rsync/cp tool tree into datasets/<name>/<commit>/rtl_snapshot/<snapshot_name>/
# Extra args are additional rsync --exclude patterns (e.g. 'dv/' 'target/').
score_simple_snapshot_rtl() {
    local tool_dir="$1"
    local dataset_dir="$2"
    local snapshot_name="$3"
    shift 3
    local dst="$dataset_dir/rtl_snapshot/$snapshot_name"
    mkdir -p "$dst"
    local extra_excludes=()
    local e
    for e in "$@"; do
        extra_excludes+=(--exclude "$e")
    done
    if command -v rsync >/dev/null 2>&1; then
        rsync -a --delete \
            --exclude '.git/' \
            --exclude '.git' \
            --exclude 'build/' \
            --exclude 'out/' \
            --exclude '__pycache__/' \
            "${extra_excludes[@]}" \
            "$tool_dir/" "$dst/"
    else
        if declare -F log_warning >/dev/null 2>&1; then
            log_warning "rsync not found; using cp -a"
        fi
        rm -rf "${dst:?}/"*
        cp -a "$tool_dir/." "$dst/"
    fi
    if declare -F log_success >/dev/null 2>&1; then
        log_success "Snapshot at $dst"
    fi
}

# Copy selected relative paths from tool_dir into rtl_snapshot/<name>/.
score_simple_snapshot_paths() {
    local tool_dir="$1"
    local dataset_dir="$2"
    local snapshot_name="$3"
    shift 3
    local dst="$dataset_dir/rtl_snapshot/$snapshot_name"
    local rel
    mkdir -p "$dst"
    for rel in "$@"; do
        if [[ -d "$tool_dir/$rel" ]]; then
            mkdir -p "$dst/$rel"
            if command -v rsync >/dev/null 2>&1; then
                rsync -a --delete \
                    --exclude '.git/' --exclude '.git' --exclude 'dv/' \
                    --exclude '__pycache__/' \
                    "$tool_dir/$rel/" "$dst/$rel/"
            else
                rm -rf "${dst:?}/$rel"
                mkdir -p "$dst/$rel"
                cp -a "$tool_dir/$rel/." "$dst/$rel/"
            fi
        elif [[ -e "$tool_dir/$rel" ]]; then
            mkdir -p "$dst/$(dirname "$rel")"
            cp -a "$tool_dir/$rel" "$dst/$(dirname "$rel")/"
        elif declare -F log_warning >/dev/null 2>&1; then
            log_warning "Snapshot path missing: $rel"
        fi
    done
    if declare -F log_success >/dev/null 2>&1; then
        log_success "Snapshot paths at $dst"
    fi
}

# Count Verilog/SystemVerilog files under a directory (robust vs glob/pipefail).
score_simple_count_rtl() {
    local root="$1"
    python3 -c '
import os, sys
root = sys.argv[1]
exts = {".sv", ".v", ".vh", ".svh"}
n = 0
if os.path.isdir(root):
    for dp, _, fns in os.walk(root):
        for f in fns:
            if os.path.splitext(f)[1].lower() in exts:
                n += 1
print(n)
' "$root" 2>/dev/null || echo 0
}

score_simple_write_manifest() {
    local dataset_dir="$1"
    local project="$2"
    local name="$3"
    local commit_id="$4"
    local host pretty vver
    host="$(uname -s -m 2>/dev/null || echo unknown)"
    pretty="unknown"
    if [[ -f /etc/os-release ]]; then
        # Source in a subshell so ID/NAME/PRETTY_NAME from os-release cannot
        # clobber caller variables (scripts use NAME= for the architecture).
        pretty="$(. /etc/os-release; printf '%s' "${PRETTY_NAME:-unknown}")"
    fi
    vver="missing"
    command -v verilator >/dev/null 2>&1 && vver="$(verilator --version 2>/dev/null | head -1 || echo unknown)"
    cat > "$dataset_dir/manifest.json" << EOF
{
  "project": "$project",
  "commit_short": "$commit_id",
  "dataset_name": "$name",
  "generated_at_utc": "$(date -u +"%Y-%m-%dT%H:%M:%SZ")",
  "host": "$host",
  "os_pretty": $(score_simple_json_escape "$pretty"),
  "verilator": $(score_simple_json_escape "$vver")
}
EOF
}

# Run verilator --lint-only from workdir with remaining args (files / -f lists).
# Sets SCORE_SIMPLE_LINT_RESULT to PASS|FAIL|SKIPPED.
score_simple_verilator_lint() {
    local workdir="$1"
    shift
    local log_file="${SCORE_SIMPLE_LINT_LOG:-/dev/null}"
    SCORE_SIMPLE_LINT_RESULT="UNKNOWN"
    if ! command -v verilator >/dev/null 2>&1; then
        if declare -F log_warning >/dev/null 2>&1; then
            log_warning "verilator not in PATH; skipping lint"
        fi
        SCORE_SIMPLE_LINT_RESULT="SKIPPED"
        return 0
    fi
    if [[ ! -d "$workdir" ]]; then
        if declare -F log_error >/dev/null 2>&1; then
            log_error "Lint workdir missing: $workdir"
        fi
        SCORE_SIMPLE_LINT_RESULT="FAIL"
        return 1
    fi
    mkdir -p "$(dirname "$log_file")"
    # Keep lint advisory: wrap in `if` so `set -e` callers are not aborted.
    if ( cd "$workdir" && verilator --lint-only -Wall -Wno-fatal "$@" 2>&1 | tee "$log_file" ); then
        SCORE_SIMPLE_LINT_RESULT="PASS"
        if declare -F log_success >/dev/null 2>&1; then
            log_success "Verilator lint PASS ($log_file)"
        fi
        return 0
    fi
    SCORE_SIMPLE_LINT_RESULT="FAIL"
    if declare -F log_warning >/dev/null 2>&1; then
        log_warning "Verilator lint FAIL ($log_file) — snapshot still written"
    fi
    return 0
}

# Minimal host deps: git + build tools + optional verilator. Mirrors install_rv12 OS cases.
score_simple_install_host_deps() {
    local install_verilator="${1:-true}"
    local os
    case "${OSTYPE:-}" in
        darwin*) os=macos ;;
        *)
            if [[ -f /etc/os-release ]]; then
                # shellcheck source=/dev/null
                . /etc/os-release
                case "${ID:-}" in
                    ubuntu|pop|linuxmint|debian|raspbian) os=debian ;;
                    fedora) os=fedora ;;
                    rhel|centos|rocky|almalinux|ol|amzn) os=rhel ;;
                    arch|manjaro) os=arch ;;
                    opensuse*|sles) os=opensuse ;;
                    *) os=linux ;;
                esac
            else
                os=linux
            fi
            ;;
    esac

    run_priv() {
        if [[ "$(id -u)" -eq 0 ]]; then
            "$@"
        elif command -v sudo >/dev/null 2>&1; then
            sudo "$@"
        else
            return 1
        fi
    }

    case "$os" in
        debian)
            run_priv apt-get update -y || true
            local pkgs=(git curl wget make g++ pkg-config)
            [[ "$install_verilator" == true ]] && pkgs+=(verilator)
            run_priv apt-get install -y "${pkgs[@]}" || return 1
            ;;
        rhel|fedora|amazon)
            local pkgs=(git curl wget make gcc gcc-c++ pkgconfig)
            [[ "$install_verilator" == true ]] && pkgs+=(verilator)
            if command -v dnf >/dev/null 2>&1; then
                run_priv dnf install -y "${pkgs[@]}" || return 1
            else
                run_priv yum install -y "${pkgs[@]}" || return 1
            fi
            ;;
        arch)
            local pkgs=(git curl wget make gcc pkgconf)
            [[ "$install_verilator" == true ]] && pkgs+=(verilator)
            run_priv pacman -S --needed --noconfirm "${pkgs[@]}" || return 1
            ;;
        opensuse)
            local pkgs=(git curl wget make gcc gcc-c++ pkg-config)
            [[ "$install_verilator" == true ]] && pkgs+=(verilator)
            run_priv zypper install -y "${pkgs[@]}" || return 1
            ;;
        macos)
            command -v brew >/dev/null 2>&1 || return 1
            local pkgs=(git curl wget make gcc pkg-config)
            [[ "$install_verilator" == true ]] && pkgs+=(verilator)
            brew install "${pkgs[@]}" || return 1
            ;;
        *)
            if declare -F log_warning >/dev/null 2>&1; then
                log_warning "Unknown OS; install git/make/g++/verilator manually"
            fi
            ;;
    esac
    return 0
}
