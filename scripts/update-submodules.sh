#!/bin/bash
# Update all submodules to latest versions

set -e  # Exit on error

echo "🔄 Updating all submodules to latest..."
git submodule update --remote --recursive

echo "🔍 Checking for changes..."
if git diff --quiet HEAD -- libraries/; then
    echo "✅ No submodule updates available"
else
    echo "📝 Submodules updated. Changes detected:"
    git diff --name-only HEAD -- libraries/
    echo ""
    echo "📋 To commit these changes:"
    echo "   git add ."
    echo "   git commit -m 'Update submodules to latest versions'"
    echo ""
    echo "📋 To see detailed changes:"
    echo "   git submodule foreach 'git log --oneline -5'"
fi 