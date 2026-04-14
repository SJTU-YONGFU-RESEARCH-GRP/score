#!/usr/bin/env bash
#
# Normalize HERO nested submodule URLs for reliable clones in SCORE:
#   - HerculesCompiler: upstream is ETH iis-git (private; no anonymous clone). SCORE hardware flow
#     (generate_hero.sh, install_hero hardware/Bender) does not need it. By default we omit this path
#     from `git submodule update` so ./scripts/run_hero.sh works without ETH credentials. Opt in:
#     HERO_FETCH_HERCULES_COMPILER=1 (needs iis-git access or HERO_HERCULES_COMPILER_URL).
#     Optional fork: HERO_HERCULES_COMPILER_URL=https://github.com/<you>/HerculesCompiler-public.git
#     Opt-in SSH for iis-git: HERO_IIS_GIT_USE_SSH=1 (requires your key on iis-git).
#   - axi_riscv_atomics (vendored under hardware/deps): old Bender.yml lists pulp-restricted/vip on
#     iis-git; upstream pulp-platform/axi_riscv_atomics on GitHub removed that dep (uses only
#     common_verification). We delete the vip line so ./bender update does not hit iis-git.
#   - buildroot: prefer https://github.com/buildroot/buildroot.git (same tree, fewer EOF/corruption
#     issues than git.buildroot.net for some networks). Override with HERO_BUILDROOT_URL or keep
#     official host with HERO_BUILDROOT_USE_OFFICIAL=1.
#   - HerculesCompiler-public: there is no known public GitHub mirror of the ETH repo; SCORE skips
#     cloning it by default (use HERO_HERCULES_COMPILER_URL if you mirror it yourself on GitHub).
#
# Optional environment overrides:
#   HERO_FETCH_HERCULES_COMPILER If 1/true/yes, clone toolchain/HerculesCompiler-public (default: skip).
#   HERO_HERCULES_COMPILER_URL   If set, submodule uses this URL and is cloned (e.g. public GitHub fork).
#                                Omit both this and HERO_FETCH_* to skip Hercules entirely (SCORE default).
#   HERO_BUILDROOT_URL           If set, use this URL for submodule buildroot (highest priority).
#   HERO_BUILDROOT_USE_OFFICIAL    If 1/true/yes, do not rewrite git.buildroot.net -> GitHub.
#   HERO_USE_SSH                 If 1/true/yes, use SSH for GitHub submodule URLs (https://github.com/…
#                                -> git@github.com:…/….git) and for buildroot when its URL is GitHub HTTPS.
#   HERO_IIS_GIT_USE_SSH         If 1/true/yes, rewrite HerculesCompiler iis-git HTTPS -> SSH.
#   HERO_IIS_GIT_FORCE_HTTPS     Deprecated alias for default HTTPS behavior; if set with
#                                HERO_IIS_GIT_USE_SSH, HTTPS wins (SSH -> HTTPS).
#   HERO_KEEP_AXI_RISCV_ATOMICS_VIP If 1/true/yes, do not remove the private vip line from
#                                hardware/deps/axi_riscv_atomics/Bender.yml (default: remove).
#
# Expects tools/hero to exist (git submodule init/update for tools/hero, not necessarily recursive).
# Idempotent: safe to run multiple times.
#
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
HERO_DIR="${HERO_DIR:-$PROJECT_ROOT/tools/hero}"

# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging hero_submodule_remotes
GITMODULES="$HERO_DIR/.gitmodules"

if [[ ! -f "$GITMODULES" ]]; then
    echo "[hero_submodule_remotes] No $GITMODULES (HERO not checked out); skipping." >&2
    exit 0
fi

# Drop private iis-git vip dependency from vendored axi_riscv_atomics (aligns with public GitHub upstream).
patch_hero_axi_riscv_atomics_remove_private_vip() {
    local f="$HERO_DIR/hardware/deps/axi_riscv_atomics/Bender.yml"
    if [[ ! -f "$f" ]]; then
        return 0
    fi
    if ! grep -qF 'pulp-restricted/vip.git' "$f" 2>/dev/null; then
        return 0
    fi
    sed -i '/^[[:space:]]*vip:.*pulp-restricted\/vip\.git/d' "$f"
    echo "[hero_submodule_remotes] Removed private iis-git vip dependency from hardware/deps/axi_riscv_atomics/Bender.yml (public upstream uses common_verification only)." >&2
}

if [[ "${HERO_KEEP_AXI_RISCV_ATOMICS_VIP:-}" == 1 || "${HERO_KEEP_AXI_RISCV_ATOMICS_VIP:-}" == true || "${HERO_KEEP_AXI_RISCV_ATOMICS_VIP:-}" == yes ]]; then
    echo "[hero_submodule_remotes] Keeping axi_riscv_atomics vip line (HERO_KEEP_AXI_RISCV_ATOMICS_VIP)" >&2
else
    patch_hero_axi_riscv_atomics_remove_private_vip
fi

changed=false

hercules_https='https://iis-git.ee.ethz.ch/H2020-Compiler/HerculesCompiler-public.git'
hercules_ssh='git@iis-git.ee.ethz.ch:H2020-Compiler/HerculesCompiler-public.git'
iis_git_use_ssh=false
if [[ "${HERO_IIS_GIT_USE_SSH:-}" == 1 || "${HERO_IIS_GIT_USE_SSH:-}" == true || "${HERO_IIS_GIT_USE_SSH:-}" == yes ]]; then
    iis_git_use_ssh=true
fi
force_https_legacy=false
if [[ "${HERO_IIS_GIT_FORCE_HTTPS:-}" == 1 || "${HERO_IIS_GIT_FORCE_HTTPS:-}" == true || "${HERO_IIS_GIT_FORCE_HTTPS:-}" == yes ]]; then
    force_https_legacy=true
fi

if [[ -n "${HERO_HERCULES_COMPILER_URL:-}" ]]; then
    git config -f "$GITMODULES" submodule."toolchain/HerculesCompiler-public".url "$HERO_HERCULES_COMPILER_URL"
    echo "[hero_submodule_remotes] Set HerculesCompiler URL from HERO_HERCULES_COMPILER_URL" >&2
    changed=true
elif [[ "$force_https_legacy" == true || "$iis_git_use_ssh" != true ]]; then
    if grep -qF "$hercules_ssh" "$GITMODULES" 2>/dev/null; then
        sed -i "s#${hercules_ssh}#${hercules_https}#" "$GITMODULES"
        echo "[hero_submodule_remotes] Using HTTPS for HerculesCompiler (default: avoid SSH password prompts)" >&2
        changed=true
    fi
else
    if grep -qF "$hercules_https" "$GITMODULES" 2>/dev/null; then
        sed -i "s#${hercules_https}#${hercules_ssh}#" "$GITMODULES"
        echo "[hero_submodule_remotes] Using SSH for HerculesCompiler (HERO_IIS_GIT_USE_SSH)" >&2
        changed=true
    fi
fi

if [[ -n "${HERO_BUILDROOT_URL:-}" ]]; then
    git config -f "$GITMODULES" submodule.buildroot.url "$HERO_BUILDROOT_URL"
    echo "[hero_submodule_remotes] Set buildroot URL from HERO_BUILDROOT_URL" >&2
    changed=true
elif grep -q 'git://git.buildroot.net/buildroot' "$GITMODULES" 2>/dev/null; then
    sed -i 's#git://git.buildroot.net/buildroot#https://github.com/buildroot/buildroot.git#' "$GITMODULES"
    echo "[hero_submodule_remotes] buildroot: git:// -> https://github.com/buildroot/buildroot.git" >&2
    changed=true
elif grep -qF 'url = https://git.buildroot.net/buildroot' "$GITMODULES" 2>/dev/null; then
    use_official=false
    if [[ "${HERO_BUILDROOT_USE_OFFICIAL:-}" == 1 || "${HERO_BUILDROOT_USE_OFFICIAL:-}" == true || "${HERO_BUILDROOT_USE_OFFICIAL:-}" == yes ]]; then
        use_official=true
    fi
    if [[ "$use_official" != true ]]; then
        sed -i 's#url = https://git.buildroot.net/buildroot#url = https://github.com/buildroot/buildroot.git#' "$GITMODULES"
        echo "[hero_submodule_remotes] buildroot -> https://github.com/buildroot/buildroot.git (set HERO_BUILDROOT_USE_OFFICIAL=1 for git.buildroot.net)" >&2
        changed=true
    fi
fi

hero_use_ssh=false
if [[ "${HERO_USE_SSH:-}" == 1 || "${HERO_USE_SSH:-}" == true || "${HERO_USE_SSH:-}" == yes ]]; then
    hero_use_ssh=true
fi
if [[ "$hero_use_ssh" == true ]]; then
    if grep -qE '[[:space:]]url = https://github.com/' "$GITMODULES" 2>/dev/null; then
        sed -E -i 's#([[:space:]]url = )https://github.com/([^/]+)/([^[:space:]]+)#\1git@github.com:\2/\3#g' "$GITMODULES"
        echo "[hero_submodule_remotes] GitHub submodule URLs -> SSH (HERO_USE_SSH)" >&2
        changed=true
    fi
    # GitHub mirror (default after rewrite above); use SSH URL when requested.
    if grep -qF 'url = https://github.com/buildroot/buildroot.git' "$GITMODULES" 2>/dev/null; then
        sed -i 's#url = https://github.com/buildroot/buildroot.git#url = git@github.com:buildroot/buildroot.git#' "$GITMODULES"
        echo "[hero_submodule_remotes] buildroot -> git@github.com:buildroot/buildroot.git (HERO_USE_SSH)" >&2
        changed=true
    fi
fi

if [[ "$changed" == true ]]; then
    echo "[hero_submodule_remotes] Updated submodule URLs in $GITMODULES" >&2
fi

# Interrupted clones leave nested repos with HEAD -> refs/heads/.invalid. `git submodule sync`
# then fails with "fatal: No such ref: HEAD". Deinit those paths so sync/update can retry.
repair_invalid_nested_submodule_heads() {
    local hero_dir="$1"
    local mods="$hero_dir/.gitmodules"
    local key relpath gitfile gd headf
    while read -r key relpath; do
        gitfile="$hero_dir/$relpath/.git"
        [[ -f "$gitfile" ]] || continue
        gd=$(sed -n 's/^gitdir:[[:space:]]*//p' "$gitfile" | tr -d '\r')
        [[ -n "$gd" ]] || continue
        if [[ "$gd" != /* ]]; then
            gd=$(cd "$hero_dir/$relpath" && realpath "$gd")
        fi
        headf="$gd/HEAD"
        [[ -f "$headf" ]] || continue
        if grep -qF 'refs/heads/.invalid' "$headf" 2>/dev/null; then
            echo "[hero_submodule_remotes] Repairing broken nested submodule '$relpath' (invalid HEAD)" >&2
            git -C "$hero_dir" submodule deinit -f "$relpath" 2>/dev/null || true
        fi
    done < <(git config -f "$mods" --get-regexp '^submodule\..*\.path$' 2>/dev/null || true)
}

repair_invalid_nested_submodule_heads "$HERO_DIR"

hercules_path="toolchain/HerculesCompiler-public"
fetch_hercules=false
if [[ "${HERO_FETCH_HERCULES_COMPILER:-}" == 1 || "${HERO_FETCH_HERCULES_COMPILER:-}" == true || "${HERO_FETCH_HERCULES_COMPILER:-}" == yes ]]; then
    fetch_hercules=true
elif [[ -n "${HERO_HERCULES_COMPILER_URL:-}" ]]; then
    # User pointed Hercules at a fork (e.g. GitHub); include it in submodule update.
    fetch_hercules=true
fi

# SCORE default: do not clone Hercules (private ETH host). Deinit clears partial clones; we pass an
# explicit submodule path list to `submodule update` because `submodule.<name>.update=none` is not
# enough to stop Git from fetching after `submodule sync` re-registers all entries from .gitmodules.
if [[ "$fetch_hercules" == true ]]; then
    echo "[hero_submodule_remotes] Will fetch ${hercules_path} (HERO_FETCH_HERCULES_COMPILER)" >&2
else
    echo "[hero_submodule_remotes] Skipping ${hercules_path} (private iis-git; SCORE HW-only default). Set HERO_FETCH_HERCULES_COMPILER=1 or HERO_HERCULES_COMPILER_URL=<fork> to clone." >&2
    git -C "$HERO_DIR" submodule deinit -f "$hercules_path" 2>/dev/null || true
fi

# Do not use `submodule sync --recursive` here: it enters each nested repo before
# `submodule update` has created a valid HEAD (e.g. interrupted clone leaves
# HEAD -> refs/heads/.invalid), which fails with "fatal: No such ref: HEAD".
# Top-level sync applies URL fixes from this repo's .gitmodules; update populates checkouts.
git -C "$HERO_DIR" submodule sync

if [[ "$fetch_hercules" == true ]]; then
    git -C "$HERO_DIR" submodule update --init --recursive
else
    hero_other_subs=()
    while read -r _key sub_path; do
        [[ "$sub_path" == "$hercules_path" ]] && continue
        [[ -n "$sub_path" ]] || continue
        hero_other_subs+=("$sub_path")
    done < <(git config -f "$GITMODULES" --get-regexp '^submodule\..*\.path$' 2>/dev/null || true)
    if [[ ${#hero_other_subs[@]} -eq 0 ]]; then
        echo "[hero_submodule_remotes] Warning: no submodule paths in $GITMODULES (unexpected)" >&2
    else
        git -C "$HERO_DIR" submodule update --init --recursive "${hero_other_subs[@]}"
    fi
fi
