#!/usr/bin/env bash
# Shared Bender installer for SCORE install_*.sh scripts.
# Discovers the current pulp-platform/bender release asset from GitHub API
# (names/extensions change across releases — do not hardcode legacy filenames).
# shellcheck shell=bash

_COMMON_BENDER_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

_score_bender_msg() {
    local level="$1"
    shift
    if declare -F "log_${level}" >/dev/null 2>&1; then
        "log_${level}" "$@"
        return
    fi
    case "$level" in
        info) declare -F info >/dev/null 2>&1 && { info "$@"; return; } ;;
        success) declare -F ok >/dev/null 2>&1 && { ok "$@"; return; } ;;
        warning) declare -F warn >/dev/null 2>&1 && { warn "$@"; return; } ;;
        error) declare -F err >/dev/null 2>&1 && { err "$@"; return; } ;;
    esac
    printf '%s\n' "$*" >&2
}

# Resolve host triple fragment used in current cargo-dist asset names, e.g.:
#   x86_64-unknown-linux-gnu, aarch64-unknown-linux-gnu,
#   x86_64-apple-darwin, aarch64-apple-darwin
score_bender_host_triple() {
    local uname_s uname_m
    uname_s=$(uname -s)
    uname_m=$(uname -m)
    case "$uname_s" in
        Linux)
            case "$uname_m" in
                x86_64) echo "x86_64-unknown-linux-gnu" ;;
                aarch64|arm64) echo "aarch64-unknown-linux-gnu" ;;
                *)
                    _score_bender_msg error "Unsupported Linux machine type: $uname_m (need x86_64 or aarch64)"
                    return 1
                    ;;
            esac
            ;;
        Darwin)
            case "$uname_m" in
                x86_64) echo "x86_64-apple-darwin" ;;
                arm64|aarch64) echo "aarch64-apple-darwin" ;;
                *)
                    _score_bender_msg error "Unsupported Darwin machine type: $uname_m"
                    return 1
                    ;;
            esac
            ;;
        *)
            _score_bender_msg error "Unsupported OS for Bender install: $uname_s"
            return 1
            ;;
    esac
}

score_bender_pick_asset() {
    # args: host triple fragment, GitHub release JSON string
    local triple="$1"
    local json="$2"
    TRIPLE="$triple" RELEASE_JSON="$json" python3 <<'PY'
import json, os, sys
triple = os.environ["TRIPLE"]
release = json.loads(os.environ["RELEASE_JSON"])
assets = release.get("assets") or []
# Prefer archive assets that embed the host triple; ignore checksums/installers/source.
candidates = []
for a in assets:
    name = a.get("name") or ""
    url = a.get("browser_download_url") or ""
    if not url or triple not in name:
        continue
    if name.endswith((".sha256", ".sha256sum")) or name in ("sha256.sum",):
        continue
    if "installer" in name or name.startswith("source."):
        continue
    if not (name.endswith(".tar.xz") or name.endswith(".tar.gz") or name.endswith(".zip")):
        continue
    candidates.append((name, url))
if not candidates:
    sys.stderr.write(f"no Bender asset matching host triple {triple!r}\n")
    sys.exit(1)
# Prefer .tar.xz then .tar.gz then .zip
order = {".tar.xz": 0, ".tar.gz": 1, ".zip": 2}
def key(item):
    name = item[0]
    for ext, rank in order.items():
        if name.endswith(ext):
            return (rank, name)
    return (9, name)
candidates.sort(key=key)
name, url = candidates[0]
print(release.get("tag_name") or "")
print(name)
print(url)
PY
}

score_bender_extract_archive() {
    local archive="$1"
    local dest_dir="$2"
    case "$archive" in
        *.tar.xz|*.txz) tar -xJf "$archive" -C "$dest_dir" ;;
        *.tar.gz|*.tgz) tar -xzf "$archive" -C "$dest_dir" ;;
        *.zip)
            if command -v unzip >/dev/null 2>&1; then
                unzip -q "$archive" -d "$dest_dir"
            else
                _score_bender_msg error "Need unzip to extract $archive"
                return 1
            fi
            ;;
        *)
            _score_bender_msg error "Unsupported Bender archive type: $archive"
            return 1
            ;;
    esac
}

# Install latest Bender into ~/.local/bin and prepend it on PATH.
score_install_bender_binary() {
    local json tag_name pkg url triple tmp archive bin_path
    if ! command -v curl >/dev/null 2>&1; then
        _score_bender_msg error "Need curl to query/download Bender releases"
        return 1
    fi
    if ! command -v python3 >/dev/null 2>&1; then
        _score_bender_msg error "Need python3 to parse Bender release JSON"
        return 1
    fi
    triple=$(score_bender_host_triple) || return 1
    json=$(curl -fsSL "https://api.github.com/repos/pulp-platform/bender/releases/latest") || {
        _score_bender_msg error "Failed to query pulp-platform/bender releases"
        return 1
    }
    # Read tag / name / url (three lines)
    {
        read -r tag_name
        read -r pkg
        read -r url
    } < <(score_bender_pick_asset "$triple" "$json") || {
        _score_bender_msg error "Could not select a Bender asset for host triple ${triple}"
        return 1
    }
    if [[ -z "$url" || -z "$pkg" ]]; then
        _score_bender_msg error "Could not select a Bender asset for host triple ${triple}"
        return 1
    fi
    _score_bender_msg info "Installing Bender ${tag_name} asset ${pkg}"
    tmp=$(mktemp -d)
    archive="${tmp}/${pkg}"
    if ! curl -fsSL "$url" -o "$archive"; then
        rm -rf "$tmp"
        _score_bender_msg error "Failed to download ${url}"
        return 1
    fi
    if ! score_bender_extract_archive "$archive" "$tmp"; then
        rm -rf "$tmp"
        return 1
    fi
    bin_path="$(find "$tmp" -type f -name bender | head -n1)"
    if [[ -z "$bin_path" || ! -f "$bin_path" ]]; then
        rm -rf "$tmp"
        _score_bender_msg error "Archive did not contain bender binary"
        return 1
    fi
    mkdir -p "${HOME}/.local/bin"
    install -m0755 "$bin_path" "${HOME}/.local/bin/bender"
    rm -rf "$tmp"
    export PATH="${HOME}/.local/bin:${PATH}"
    _score_bender_msg success "Bender installed: $(bender --version 2>/dev/null || echo "${HOME}/.local/bin/bender")"
}

# Back-compat name used by existing install_*.sh call sites.
install_bender_binary() {
    score_install_bender_binary "$@"
}

# Create any missing paths listed under export_include_dirs in checked-out Bender.yml
# manifests. Packages such as pulp-platform/iDMA declare target/rtl/include before
# codegen; Bender >= 0.32 fails checkout with E24 if those directories are absent.
# Prints the number of directories created on stdout (for callers); messages on stderr/log.
score_bender_ensure_export_include_dirs() {
    local root="${1:-.}"
    local created=0
    local yml dir rel
    while IFS= read -r -d '' yml; do
        dir=$(dirname "$yml")
        while IFS= read -r rel; do
            [[ -z "$rel" ]] && continue
            if [[ ! -d "${dir}/${rel}" ]]; then
                mkdir -p "${dir}/${rel}"
                created=$((created + 1))
                _score_bender_msg info "Created missing Bender export_include_dirs path: ${dir}/${rel}" >&2 || true
            fi
        done < <(python3 - "$yml" <<'PY'
import sys
from pathlib import Path
text = Path(sys.argv[1]).read_text(encoding="utf-8", errors="replace").splitlines()
in_section = False
for line in text:
    if line.startswith("export_include_dirs:"):
        in_section = True
        continue
    if not in_section:
        continue
    if line and not line[0].isspace() and not line.startswith("#"):
        break
    s = line.strip()
    if s.startswith("- "):
        print(s[2:].strip().strip("'\""))
PY
)
    done < <(find "${root}/.bender/git/checkouts" -name Bender.yml -print0 2>/dev/null)
    printf '%s\n' "$created"
}

# Run `bender checkout` or `bender update`, creating missing export_include_dirs between
# attempts when Bender E24 would otherwise abort after cloning dependencies.
#
# Git submodules of dependencies default OFF: many PULP trees pull ASIC PDKs / buildroot
# via nested submodules (often git@ SSH and multi-GB), which is out of scope for SCORE RTL
# snapshots. Override with SCORE_BENDER_GIT_SUBMODULES=true when a flow truly needs them.
score_bender_checkout() {
    local mode="${1:-checkout}"
    local max_rounds=5
    local round=1
    local log created rc
    local -a bender_args=()
    case "$mode" in
        checkout|update) ;;
        *)
            _score_bender_msg error "score_bender_checkout: mode must be checkout or update, got: $mode"
            return 1
            ;;
    esac
    case "${SCORE_BENDER_GIT_SUBMODULES:-false}" in
        1|true|TRUE|yes|YES|on|ON)
            if bender --help 2>&1 | grep -q -- '--git-submodules'; then
                bender_args+=(--git-submodules true)
            else
                _score_bender_msg warning "This Bender build has no --git-submodules; cannot force submodules on"
            fi
            ;;
        *)
            if bender --help 2>&1 | grep -q -- '--git-submodules'; then
                bender_args+=(--git-submodules false)
            fi
            ;;
    esac
    while [[ "$round" -le "$max_rounds" ]]; do
        log=$(mktemp)
        set +e
        bender "${bender_args[@]}" "$mode" >"$log" 2>&1
        rc=$?
        set -e
        cat "$log"
        if [[ "$rc" -eq 0 ]]; then
            rm -f "$log"
            return 0
        fi
        if ! grep -qE 'Include directory .* doesn'\''t exist|error\[E24\]' "$log"; then
            rm -f "$log"
            _score_bender_msg error "bender ${mode} failed (not missing export_include_dirs)"
            return 1
        fi
        rm -f "$log"
        if [[ ! -d .bender/git/checkouts ]]; then
            _score_bender_msg error "bender ${mode} failed before any checkouts existed"
            return 1
        fi
        created=$(score_bender_ensure_export_include_dirs .)
        if [[ "${created:-0}" -eq 0 ]]; then
            _score_bender_msg error "bender ${mode} reported missing include dirs but none could be created"
            return 1
        fi
        _score_bender_msg info "Retrying bender ${mode} after creating ${created} include dir(s) (round ${round}/${max_rounds})"
        round=$((round + 1))
    done
    _score_bender_msg error "bender ${mode} still failing after ${max_rounds} include-dir repair rounds"
    return 1
}
