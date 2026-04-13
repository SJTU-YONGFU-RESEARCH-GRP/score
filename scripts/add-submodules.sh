#!/bin/bash
# Add a new submodule to the repository
# Usage: ./scripts/add-submodules.sh <git-url> <local-path>

set -e  # Exit on error

# Function to show usage
show_usage() {
    echo "📋 Usage: $0 <git-url> <local-path>"
    echo ""
    echo "Examples:"
    echo "  $0 git@github.com:ucb-bar/gemmini.git tools/gemmini"
    echo ""
    echo "Options:"
    echo "  -h, --help    Show this help message"
}

# Check for help flag
if [[ "$1" == "-h" || "$1" == "--help" ]]; then
    show_usage
    exit 0
fi

# Check if correct number of arguments provided
if [ $# -ne 2 ]; then
    echo "❌ Error: Incorrect number of arguments"
    echo ""
    show_usage
    exit 1
fi

GIT_URL="$1"
LOCAL_PATH="$2"

echo "➕ Adding submodule..."
echo "   📦 Repository: $GIT_URL"
echo "   📂 Path: $LOCAL_PATH"
echo ""

# Validate that the path doesn't already exist
if [ -e "$LOCAL_PATH" ]; then
    echo "❌ Error: Path '$LOCAL_PATH' already exists"
    exit 1
fi

# Validate that it's not already a submodule
if git submodule status "$LOCAL_PATH" 2>/dev/null | grep -q "$LOCAL_PATH"; then
    echo "❌ Error: '$LOCAL_PATH' is already configured as a submodule"
    exit 1
fi

# Add the submodule
echo "🔄 Adding submodule..."
if git submodule add "$GIT_URL" "$LOCAL_PATH"; then
    echo "✅ Submodule added successfully!"
    echo ""
    echo "📋 Submodule information:"
    echo "   Path: $LOCAL_PATH"
    echo "   URL:  $GIT_URL"
    echo ""
    echo "🔍 Current submodule status:"
    git submodule status "$LOCAL_PATH"
    echo ""
    echo "📝 Don't forget to commit the changes:"
    echo "   git add .gitmodules $LOCAL_PATH"
    echo "   git commit -m 'Add $LOCAL_PATH submodule'"
else
    echo "❌ Failed to add submodule"
    echo "   This could be due to:"
    echo "   - Invalid Git URL"
    echo "   - Network connectivity issues"
    echo "   - Insufficient permissions"
    exit 1
fi 