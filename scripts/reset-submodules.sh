#!/bin/bash
# Reset all submodules to committed versions

set -e  # Exit on error

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging reset-submodules

echo "🔄 Resetting all submodules to committed versions..."
git submodule update --init --force --recursive

echo "✅ All submodules reset to committed state"
echo ""
echo "📋 Current submodule status:"
git submodule status 