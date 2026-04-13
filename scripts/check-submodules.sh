#!/bin/bash
# Check status and information of all submodules, with optional automatic fixing

set -e  # Exit on error

# Function to show usage
show_usage() {
    echo "📋 Usage: $0 [options]"
    echo ""
    echo "Check status and information of all submodules"
    echo ""
    echo "Options:"
    echo "  -h, --help         Show this help message"
    echo "  -f, --fix          Automatically fix upstream branch configuration issues"
    echo "  -q, --quiet        Only show summary, not detailed information"
    echo ""
    echo "Examples:"
    echo "  $0                    # Check submodule status"
    echo "  $0 --fix             # Check and fix upstream issues"
    echo "  $0 --quiet           # Show only summary"
    echo ""
}

# Function to fix upstream branch configuration for a submodule
fix_upstream_branch() {
    local submodule_path="$1"
    echo "🔧 Fixing upstream branch for $submodule_path..."

    # Check if we're in a submodule directory
    if ! git rev-parse --git-dir > /dev/null 2>&1; then
        echo "   ❌ Not in a git repository"
        return 1
    fi

    # Stash any local changes to avoid conflicts
    if [ -n "$(git status --porcelain)" ]; then
        echo "   📦 Stashing local changes..."
        if git stash push -m "Auto-stash before upstream fix" > /dev/null 2>&1; then
            STASHED=true
        else
            echo "   ❌ Failed to stash changes"
            return 1
        fi
    fi

    # Get the default remote branch
    DEFAULT_BRANCH=$(git remote show origin 2>/dev/null | grep 'HEAD branch' | cut -d' ' -f5)

    if [ -z "$DEFAULT_BRANCH" ]; then
        echo "   ❌ Could not determine default remote branch"
        # Restore stashed changes if any
        [ "$STASHED" = true ] && git stash pop > /dev/null 2>&1
        return 1
    fi

    # Checkout the default branch
    if git checkout "$DEFAULT_BRANCH" > /dev/null 2>&1; then
        echo "   ✅ Checked out $DEFAULT_BRANCH branch"

        # Set up upstream tracking
        if git branch --set-upstream-to="origin/$DEFAULT_BRANCH" "$(git branch --show-current)" > /dev/null 2>&1; then
            echo "   ✅ Configured upstream tracking"
        else
            echo "   ❌ Failed to set upstream tracking"
        fi
    else
        echo "   ❌ Failed to checkout $DEFAULT_BRANCH branch"
        # Restore stashed changes if any
        [ "$STASHED" = true ] && git stash pop > /dev/null 2>&1
        return 1
    fi

    # Restore stashed changes if any
    if [ "$STASHED" = true ]; then
        if git stash pop > /dev/null 2>&1; then
            echo "   ✅ Restored local changes"
        else
            echo "   ⚠️  Could not restore stashed changes"
        fi
    fi

    return 0
}

# Parse command line arguments
FIX_MODE=false
QUIET_MODE=false

while [[ $# -gt 0 ]]; do
    case $1 in
        -h|--help)
            show_usage
            exit 0
            ;;
        -f|--fix)
            FIX_MODE=true
            shift
            ;;
        -q|--quiet)
            QUIET_MODE=true
            shift
            ;;
        -*)
            echo "❌ Unknown option: $1"
            show_usage
            exit 1
            ;;
    esac
done

echo "🔍 === Submodule Status ==="
git submodule status

echo ""
echo "📋 === Individual Submodule Information ==="
git submodule foreach '
    echo "--- 📦 $name ---"
    echo "Current commit: $(git log --oneline -1)"
    if [ -n "$(git status --porcelain)" ]; then
        echo "⚠️  Uncommitted changes:"
        git status --porcelain
    else
        echo "✅ Clean working directory"
    fi
    echo ""
'

echo "🌐 === Remote Status ==="

git submodule foreach '
    echo "--- 📦 $name ---"
    git fetch --quiet
    LOCAL=$(git rev-parse @)
    REMOTE=$(git rev-parse @{u} 2>/dev/null || echo "no-remote")

    if [ "$LOCAL" = "$REMOTE" ] && [ "$REMOTE" != "no-remote" ]; then
        echo "✅ Up to date with remote"
    elif [ "$REMOTE" = "no-remote" ]; then
        echo "⚠️  No upstream branch configured"
    else
        echo "📥 Updates available from remote"
        echo "   Local:  $LOCAL"
        echo "   Remote: $REMOTE"
    fi
    echo ""
'

# Fix submodules if requested
if [ "$FIX_MODE" = true ]; then
    echo "🔧 === Fixing Submodules ==="
    FIXED_COUNT=0

    # Parse the NEEDS_FIXING output from the foreach command
    # We need to do this after the foreach command completes
    while read -r line; do
        if [[ "$line" =~ ^NEEDS_FIXING:(.+)$ ]]; then
            submodule="${BASH_REMATCH[1]}"
            echo "Fixing $submodule..."
            cd "$submodule"

            if fix_upstream_branch "$submodule"; then
                echo "✅ Successfully fixed $submodule"
                ((FIXED_COUNT++))
            else
                echo "❌ Failed to fix $submodule"
            fi

            cd - > /dev/null
            echo ""
        fi
    done < <(git submodule foreach '
        git fetch --quiet
        LOCAL=$(git rev-parse @)
        REMOTE=$(git rev-parse @{u} 2>/dev/null || echo "no-remote")

        if [ "$REMOTE" = "no-remote" ]; then
            echo "NEEDS_FIXING:$name"
        fi
    ' 2>/dev/null)

    if [ $FIXED_COUNT -gt 0 ]; then
        echo "🎉 Fixed $FIXED_COUNT submodule(s) with upstream branch configuration"
        echo ""
        echo "💡 Re-running check to verify fixes..."
        echo ""

        # Re-run the remote status check to show improvements
        echo "🌐 === Updated Remote Status ==="
        git submodule foreach '
            echo "--- 📦 $name ---"
            git fetch --quiet
            LOCAL=$(git rev-parse @)
            REMOTE=$(git rev-parse @{u} 2>/dev/null || echo "no-remote")

            if [ "$LOCAL" = "$REMOTE" ] && [ "$REMOTE" != "no-remote" ]; then
                echo "✅ Up to date with remote"
            elif [ "$REMOTE" = "no-remote" ]; then
                echo "⚠️  No upstream branch configured"
            else
                echo "📥 Updates available from remote"
                echo "   Local:  $LOCAL"
                echo "   Remote: $REMOTE"
            fi
            echo ""
        '
    else
        echo "✨ All submodules are properly configured!"
    fi
fi

# Summary in quiet mode
if [ "$QUIET_MODE" = true ]; then
    echo ""
    echo "📊 === Summary ==="
    TOTAL_SUBMODULES=$(git submodule status | wc -l)
    UP_TO_DATE_COUNT=0
    NO_UPSTREAM_COUNT=0
    UPDATES_AVAILABLE_COUNT=0

    # Count different statuses
    git submodule foreach '
        git fetch --quiet
        LOCAL=$(git rev-parse @)
        REMOTE=$(git rev-parse @{u} 2>/dev/null || echo "no-remote")

        if [ "$LOCAL" = "$REMOTE" ] && [ "$REMOTE" != "no-remote" ]; then
            echo "UP_TO_DATE"
        elif [ "$REMOTE" = "no-remote" ]; then
            echo "NO_UPSTREAM"
        else
            echo "UPDATES_AVAILABLE"
        fi
    ' 2>/dev/null | while read -r status; do
        case "$status" in
            "UP_TO_DATE") ((UP_TO_DATE_COUNT++)) ;;
            "NO_UPSTREAM") ((NO_UPSTREAM_COUNT++)) ;;
            "UPDATES_AVAILABLE") ((UPDATES_AVAILABLE_COUNT++)) ;;
        esac
    done

    echo "Total submodules: $TOTAL_SUBMODULES"
    echo "✅ Up to date: $UP_TO_DATE_COUNT"
    echo "⚠️  No upstream: $NO_UPSTREAM_COUNT"
    echo "📥 Updates available: $UPDATES_AVAILABLE_COUNT"
fi 