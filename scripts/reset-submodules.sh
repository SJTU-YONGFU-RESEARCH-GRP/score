#!/bin/bash
# Reset all submodules to committed versions

set -e  # Exit on error

echo "🔄 Resetting all submodules to committed versions..."
git submodule update --init --force --recursive

echo "✅ All submodules reset to committed state"
echo ""
echo "📋 Current submodule status:"
git submodule status 