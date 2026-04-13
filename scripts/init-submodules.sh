#!/bin/bash
# Initialize and download git submodules (all or specific ones)
# This script performs the initial clone of submodules defined in .gitmodules

set -e  # Exit on error

# Function to show usage
show_usage() {
    echo "📋 Usage: $0 [options] [submodule-paths...]"
    echo ""
    echo "Initialize and download git submodules defined in .gitmodules"
    echo ""
    echo "Arguments:"
    echo "  submodule-paths    Specific submodule paths to initialize (e.g., tools/hero)"
    echo "                     If no paths provided, initializes all submodules"
    echo ""
    echo "Options:"
    echo "  -h, --help         Show this help message"
    echo "  -f, --force        Force initialization (equivalent to --force flag)"
    echo "  -l, --list         List all available submodules and exit"
    echo ""
    echo "Examples:"
    echo "  $0                           # Initialize all submodules"
    echo "  $0 tools/hero               # Initialize only hero submodule"
    echo "  $0 tools/hero tools/gemmini # Initialize multiple specific submodules"
    echo "  $0 --force tools/hero       # Force initialize hero submodule"
    echo "  $0 --list                   # Show all available submodules"
    echo ""
}

# Function to list all available submodules
list_submodules() {
    echo "📋 Available submodules in .gitmodules:"
    echo ""
    grep '\[submodule' .gitmodules | sed 's/\[submodule "//;s/".*//' | while read -r submodule; do
        echo "   • $submodule"
    done
    echo ""
    echo "Total: $(grep -c '\[submodule' .gitmodules) submodules"
    exit 0
}

# Parse command line arguments
FORCE_FLAG=""
LIST_ONLY=false
SUBMODULES=()

while [[ $# -gt 0 ]]; do
    case $1 in
        -h|--help)
            show_usage
            exit 0
            ;;
        -f|--force)
            FORCE_FLAG="--force"
            echo "🔄 Force initialization enabled"
            shift
            ;;
        -l|--list)
            LIST_ONLY=true
            shift
            ;;
        -*)
            echo "❌ Unknown option: $1"
            show_usage
            exit 1
            ;;
        *)
            SUBMODULES+=("$1")
            shift
            ;;
    esac
done

# List submodules if requested
if [ "$LIST_ONLY" = true ]; then
    list_submodules
fi

# Check if .gitmodules exists
if [ ! -f ".gitmodules" ]; then
    echo "❌ Error: .gitmodules file not found in current directory"
    echo "   Make sure you're running this script from the repository root"
    exit 1
fi

# Check if we're in a git repository
if ! git rev-parse --git-dir > /dev/null 2>&1; then
    echo "❌ Error: Not in a git repository"
    exit 1
fi

# Get all available submodules
ALL_SUBMODULES=$(grep '\[submodule' .gitmodules | sed 's/\[submodule "//;s/".*//')

# Determine which submodules to initialize
if [ ${#SUBMODULES[@]} -eq 0 ]; then
    # No specific submodules provided, initialize all
    TARGET_SUBMODULES="$ALL_SUBMODULES"
    echo "🚀 Initializing and downloading all git submodules..."
else
    # Specific submodules provided, validate them
    echo "🚀 Initializing and downloading specific git submodules..."
    TARGET_SUBMODULES=""
    for submodule in "${SUBMODULES[@]}"; do
        if echo "$ALL_SUBMODULES" | grep -q "^${submodule}$"; then
            TARGET_SUBMODULES="$TARGET_SUBMODULES $submodule"
            echo "   ✓ $submodule"
        else
            echo "❌ Error: Submodule '$submodule' not found in .gitmodules"
            echo ""
            echo "Available submodules:"
            echo "$ALL_SUBMODULES" | sed 's/^/   • /'
            exit 1
        fi
    done
fi

TOTAL_COUNT=$(echo "$TARGET_SUBMODULES" | wc -w)
echo ""
echo "📦 Target submodules ($TOTAL_COUNT):"
echo "$TARGET_SUBMODULES" | tr ' ' '\n' | sed 's/^/   • /'
echo ""

# Perform the submodule initialization
echo "🔄 Running: git submodule update --init --recursive $FORCE_FLAG $TARGET_SUBMODULES"
if git submodule update --init --recursive $FORCE_FLAG $TARGET_SUBMODULES; then
    echo ""
    echo "✅ Submodules initialized and downloaded successfully!"
    echo ""
    echo "📋 Current submodule status:"
    git submodule status $TARGET_SUBMODULES
    echo ""
    echo "💡 Next steps:"
    echo "   - Run './scripts/check-submodules.sh' to verify submodule status"
    echo "   - Run './scripts/update-submodules.sh' to update to latest versions"
    echo "   - Check individual tool documentation for setup requirements"
else
    echo ""
    echo "❌ Failed to initialize some submodules"
    echo ""
    echo "🔍 Troubleshooting tips:"
    echo "   - Check your internet connection"
    echo "   - Verify SSH keys are set up for GitHub access"
    echo "   - Some repositories might require specific permissions"
    echo "   - Try running: git submodule status"
    exit 1
fi
