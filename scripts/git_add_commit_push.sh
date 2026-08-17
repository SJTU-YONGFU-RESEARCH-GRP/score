#!/usr/bin/env bash
# Scan working tree for paths that need `git add`, then for each path:
#   git add -- <path>
#   git commit -m "<basename>"
# and finally push once.
#
# Usage:
#   ./scripts/git_add_commit_push.sh [--dry-run] [--no-push]
#       [--remote ORIGIN] [--branch BRANCH] [--max-files N] [--force]
#       -- pathspec…
#
# Examples:
#   ./scripts/git_add_commit_push.sh --dry-run -- scripts/
#   ./scripts/git_add_commit_push.sh -- scripts/install_opentitan.sh
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
cd "$REPO_ROOT"

DRY_RUN=0
DO_PUSH=1
DO_CLEAN=0
REMOTE=""
BRANCH=""
MAX_FILES=500
FORCE=0
declare -a PATHSPECS=()

usage() {
    cat <<'EOF'
Usage: git_add_commit_push.sh [options] -- pathspec…

  --dry-run           Print planned add/commit/push; do not change git state
  --clean             Before scan: restore+clean dirty submodule worktrees under pathspecs
  --no-push           Commit only (skip push)
  --remote NAME       Remote for push (default: upstream of current branch, else origin)
  --branch NAME       Branch to push (default: current branch)
  --max-files N       Abort if more than N paths would be committed (default: 500)
  --force             Allow exceeding --max-files
  -h, --help          Show this help

  -- pathspec…        Required. Limit the scan (e.g. scripts/ README.md)

For each path that still needs staging, runs:
  git add -- <path>
  git commit -m "<basename of path>"

Never batches with `git add -A` / `.` or a single multi-file commit.

Refuses / skips:
  - dirty submodule worktrees (skip; parent cannot stage "-dirty")
  - local install / host-tool trees (tools/*-install/, tools/*-host-tools/, …)
SCORE-local config belongs under overlays/<arch>/ (commit that, not tools/ dirt).
EOF
}

die() {
    echo "error: $*" >&2
    exit 1
}

is_secret_path() {
    local p="$1"
    local base
    base="$(basename "$p")"
    case "$base" in
        .env|.env.*|*.pem|*.key|id_rsa|id_ed25519|credentials.json|secrets.json)
            return 0
            ;;
    esac
    case "$p" in
        *.env|*/.env|*/.env.*|*credentials*|*secret*)
            return 0
            ;;
    esac
    return 1
}

# Local build/install trees must not be committed into SCORE.
is_local_install_path() {
    local p="$1"
    case "$p" in
        tools/*-install|tools/*-install/*|tools/*-host-tools|tools/*-host-tools/*)
            return 0
            ;;
        tools/ghdl-install|tools/ghdl-install/*|tools/hero-install|tools/hero-install/*)
            return 0
            ;;
        tools/ibex-host-tools|tools/ibex-host-tools/*|tools/opentitan-host-tools|tools/opentitan-host-tools/*)
            return 0
            ;;
    esac
    return 1
}

# True if path is (or would be recorded as) a gitlink / submodule.
is_gitlink_path() {
    local p="$1"
    local mode
    mode="$(git ls-files -s -- "$p" 2>/dev/null | awk '{print $1; exit}')"
    [[ "$mode" == "160000" ]] && return 0
    # Untracked dir that is itself a git repo (new submodule checkout).
    if [[ -d "$p" && ( -f "$p/.git" || -d "$p/.git" ) ]]; then
        return 0
    fi
    # Porcelain often prints "tools/foo/" for untracked submodule dirs.
    local trimmed="${p%/}"
    if [[ "$trimmed" != "$p" && -d "$trimmed" && ( -f "$trimmed/.git" || -d "$trimmed/.git" ) ]]; then
        return 0
    fi
    return 1
}

# Dirty-only submodule: worktree dirty, recorded SHA unchanged → git add stages nothing.
is_dirty_only_submodule() {
    local p="$1"
    local trimmed="${p%/}"
    local mode
    mode="$(git ls-files -s -- "$trimmed" 2>/dev/null | awk '{print $1; exit}')"
    [[ "$mode" == "160000" ]] || return 1
    # Parent diff shows "-dirty" suffix and no SHA change.
    if git diff -- "$trimmed" 2>/dev/null | grep -q 'Subproject commit .*dirty'; then
        return 0
    fi
    # Also: status " M path" with no staged side, and add would be a no-op.
    local st
    st="$(git status --porcelain=v1 -- "$trimmed" 2>/dev/null | head -1)"
    [[ "${st:0:2}" == " M" ]] || return 1
    # If HEAD gitlink == worktree commit (ignoring dirty), nothing to stage.
    local head_sha work_sha
    head_sha="$(git ls-files -s -- "$trimmed" | awk '{print $2; exit}')"
    work_sha="$(git -C "$trimmed" rev-parse HEAD 2>/dev/null || true)"
    [[ -n "$head_sha" && -n "$work_sha" && "$head_sha" == "$work_sha" ]]
}

normalize_path() {
    local p="$1"
    # Drop trailing slash so submodule dirs are added as gitlinks, not file trees.
    p="${p%/}"
    printf '%s' "$p"
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        --dry-run)
            DRY_RUN=1
            shift
            ;;
        --clean)
            DO_CLEAN=1
            shift
            ;;
        --no-push)
            DO_PUSH=0
            shift
            ;;
        --remote)
            [[ $# -ge 2 ]] || die "$1 requires an argument"
            REMOTE="$2"
            shift 2
            ;;
        --branch)
            [[ $# -ge 2 ]] || die "$1 requires an argument"
            BRANCH="$2"
            shift 2
            ;;
        --max-files)
            [[ $# -ge 2 ]] || die "$1 requires an argument"
            MAX_FILES="$2"
            [[ "$MAX_FILES" =~ ^[0-9]+$ ]] || die "--max-files must be a non-negative integer"
            shift 2
            ;;
        --force)
            FORCE=1
            shift
            ;;
        -h|--help)
            usage
            exit 0
            ;;
        --)
            shift
            PATHSPECS+=("$@")
            break
            ;;
        -*)
            die "unknown option: $1 (use --help)"
            ;;
        *)
            PATHSPECS+=("$1")
            shift
            ;;
    esac
done

# Restore tracked files + remove untracked/ignored build junk inside a submodule.
clean_submodule_worktree() {
    local p="$1"
    [[ -e "$p" ]] || return 0
    if [[ ! -e "$p/.git" ]]; then
        return 0
    fi
    echo "clean: $p"
    git -C "$p" restore --source=HEAD --staged --worktree -- . 2>/dev/null || true
    git -C "$p" clean -fdx 2>/dev/null || true
    # Nested dirty gitlinks (e.g. openpiton aws): force checkout recorded SHA.
    local nested
    while read -r nested; do
        [[ -n "$nested" ]] || continue
        git -C "$p" submodule update --force --checkout -- "$nested" 2>/dev/null || true
    done < <(git -C "$p" submodule status --recursive 2>/dev/null | awk '/^-|^\+|U /{print $2}')
}

clean_dirty_submodules_under_pathspecs() {
    local line xy rest path mode
    echo "Cleaning dirty submodule worktrees under: ${PATHSPECS[*]}"
    while IFS= read -r line; do
        [[ -n "$line" ]] || continue
        xy="${line:0:2}"
        rest="${line:3}"
        path="$rest"
        if [[ "$path" == \"*\" ]]; then
            # shellcheck disable=SC2086
            eval "path=$path"
        fi
        path="$(normalize_path "$path")"
        mode="$(git ls-files -s -- "$path" 2>/dev/null | awk '{print $1; exit}')"
        [[ "$mode" == "160000" ]] || continue
        [[ "$xy" == " M" || "$xy" == "M " || "$xy" == "MM" ]] || continue
        if [[ "$DRY_RUN" -eq 1 ]]; then
            echo "+ clean submodule worktree: $path"
        else
            clean_submodule_worktree "$path"
        fi
    done < <(git status --porcelain=v1 -- "${PATHSPECS[@]}" 2>/dev/null || true)
}

git rev-parse --is-inside-work-tree >/dev/null 2>&1 \
    || die "not inside a git work tree: $REPO_ROOT"

# Full-tree status is unusable here (hundreds of thousands of dataset paths).
[[ ${#PATHSPECS[@]} -gt 0 ]] \
    || die "pathspecs required (full-tree scan is too large). Example:
  $0 --clean -- scripts/
  $0 --dry-run -- scripts/install_opentitan.sh scripts/generate_opentitan.sh"

if [[ "$DO_CLEAN" -eq 1 ]]; then
    clean_dirty_submodules_under_pathspecs
fi

echo "Scanning pathspecs: ${PATHSPECS[*]}"
mapfile -t STATUS_LINES < <(
    git status --porcelain=v1 -u --untracked-files=all -- "${PATHSPECS[@]}"
)

declare -a TO_COMMIT=()
declare -a DIRTY_SUBMODULES=()
declare -a REFUSED_INSTALL=()
declare -A SEEN=()

for line in "${STATUS_LINES[@]}"; do
    [[ -n "$line" ]] || continue
    xy="${line:0:2}"
    rest="${line:3}"
    y="${xy:1:1}"

    path=""
    case "$xy" in
        \?\?)
            path="$rest"
            ;;
        R\ |RM|RD|R\?|C\ |CM|CD|C\?)
            if [[ "$rest" == *" -> "* ]]; then
                path="${rest##* -> }"
            else
                path="$rest"
            fi
            ;;
        *)
            path="$rest"
            ;;
    esac

    if [[ "$path" == \"*\" ]]; then
        # Decode porcelain-quoted path (octal escapes / special chars).
        # shellcheck disable=SC2086
        eval "path=$path"
    fi

    [[ -n "$path" ]] || continue
    path="$(normalize_path "$path")"

    needs=0
    if [[ "$xy" == "??" ]]; then
        needs=1
    elif [[ "$y" != " " ]]; then
        needs=1
    fi
    [[ "$needs" -eq 1 ]] || continue
    [[ -z "${SEEN[$path]+x}" ]] || continue
    SEEN[$path]=1

    if is_secret_path "$path"; then
        die "refusing to add secret-looking path: $path"
    fi
    if is_local_install_path "$path"; then
        REFUSED_INSTALL+=("$path")
        continue
    fi
    if is_dirty_only_submodule "$path"; then
        DIRTY_SUBMODULES+=("$path")
        continue
    fi

    TO_COMMIT+=("$path")
done

if [[ ${#REFUSED_INSTALL[@]} -gt 0 ]]; then
    echo "Skipped local install/host-tool paths (${#REFUSED_INSTALL[@]}); add to .gitignore if needed:"
    # Show a short sample
    n=0
    for p in "${REFUSED_INSTALL[@]}"; do
        n=$((n + 1))
        [[ "$n" -le 8 ]] || break
        echo "  skip  $p"
    done
    if [[ ${#REFUSED_INSTALL[@]} -gt 8 ]]; then
        echo "  … and $((${#REFUSED_INSTALL[@]} - 8)) more"
    fi
fi

if [[ ${#DIRTY_SUBMODULES[@]} -gt 0 ]]; then
    echo "Skipping dirty-only submodule worktrees (${#DIRTY_SUBMODULES[@]}) — parent cannot stage them."
    echo "SCORE edits belong under overlays/<arch>/; build junk should be cleaned inside the submodule."
    for p in "${DIRTY_SUBMODULES[@]}"; do
        echo "  skip  $p"
    done
fi

if [[ ${#TO_COMMIT[@]} -eq 0 ]]; then
    if [[ ${#DIRTY_SUBMODULES[@]} -gt 0 ]]; then
        die "nothing stageable under pathspecs; only dirty submodules remain.
Clean or overlay each submodule, e.g.:
  (cd tools/hero && git restore --worktree -- . && cd ../.. && bash scripts/hero_submodule_remotes.sh)
  (cd tools/spatz && git restore --worktree -- . && git clean -fdX)
Then re-run, or commit overlays/scripts instead of tools/."
    fi
    echo "Nothing to add or commit."
    exit 0
fi

echo "Paths to add+commit individually (${#TO_COMMIT[@]}):"
for p in "${TO_COMMIT[@]}"; do
    echo "  $p  ->  commit -m $(printf '%q' "$(basename "$p")")"
done

if [[ ${#TO_COMMIT[@]} -gt "$MAX_FILES" && "$FORCE" -eq 0 ]]; then
    die "${#TO_COMMIT[@]} paths exceed --max-files=${MAX_FILES}; narrow with pathspecs or pass --force"
fi

if [[ -z "$BRANCH" ]]; then
    BRANCH="$(git branch --show-current)"
    [[ -n "$BRANCH" ]] || die "detached HEAD; pass --branch"
fi

if [[ -z "$REMOTE" ]]; then
    REMOTE="$(git config --get "branch.${BRANCH}.remote" || true)"
    if [[ -z "$REMOTE" ]]; then
        REMOTE="origin"
    fi
fi

if [[ "$DRY_RUN" -eq 1 ]]; then
    i=0
    for p in "${TO_COMMIT[@]}"; do
        i=$((i + 1))
        msg="$(basename "$p")"
        echo "+ [$i/${#TO_COMMIT[@]}] git add -- $p"
        echo "+ [$i/${#TO_COMMIT[@]}] git commit -m $(printf '%q' "$msg")"
    done
    if [[ "$DO_PUSH" -eq 1 ]]; then
        echo "+ git push -u $REMOTE $BRANCH"
    else
        echo "+ (push skipped: --no-push)"
    fi
    exit 0
fi

i=0
for p in "${TO_COMMIT[@]}"; do
    i=$((i + 1))
    msg="$(basename "$p")"
    echo "[$i/${#TO_COMMIT[@]}] git add -- $p"
    # For new submodule checkouts, add without trailing slash (path already normalized).
    git add -- "$p"
    if git diff --cached --quiet -- "$p"; then
        die "nothing staged after: git add -- $p
If this is a submodule with local edits, commit inside it first.
If this is an install tree, it should be gitignored (not committed)."
    fi
    echo "[$i/${#TO_COMMIT[@]}] git commit -m $(printf '%q' "$msg")"
    git commit -m "$msg"
done

if [[ "$DO_PUSH" -eq 0 ]]; then
    echo "Commits done (--no-push)."
    exit 0
fi

echo "git push -u $REMOTE $BRANCH"
git push -u "$REMOTE" "$BRANCH"
echo "Done."
