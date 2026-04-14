#!/bin/bash
# Add all optional RTL generation tools as submodules
# This script adds repositories from the "RTL Generation Tools (Optional Integration)" section

set -e  # Exit on error

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging add-optional-tools

# List of repositories to add as submodules
# Format: "repo-name git-url local-path"

REPOSITORIES=(
    # High-Level Synthesis (HLS) Tools
    "xls git@github.com:google/xls.git tools/xls"
    "aha git@github.com:StanfordAHA/aha.git tools/aha"
    "bambu git@github.com:ferrandi/PandA-bambu.git tools/bambu"
    "pipelinec git@github.com:JulianKemmerer/PipelineC.git tools/pipelinec"

    # Hardware Construction Languages (Meta-HDLs)
    "amaranth git@github.com:amaranth-lang/amaranth.git tools/amaranth"
    "chisel git@github.com:chipsalliance/chisel.git tools/chisel"
    "spinalhdl git@github.com:SpinalHDL/SpinalHDL.git tools/spinalhdl"
    "myhdl git@github.com:myhdl/myhdl.git tools/myhdl"
    "pymtl3 git@github.com:pymtl/pymtl3.git tools/pymtl3"

    # Hardware Intermediate Representations

    # Specialized RTL Generators
    "peakrdl git@github.com:SystemRDL/PeakRDL.git tools/peakrdl"
    "rggen git@github.com:rggen/rggen.git tools/rggen"
)

echo "🚀 Starting to add optional RTL generation tools as submodules..."
echo "📦 Total repositories to add: ${#REPOSITORIES[@]}"
echo ""

# Track success/failure
SUCCESS_COUNT=0
FAILURE_COUNT=0

for repo_info in "${REPOSITORIES[@]}"; do
    # Parse repo info (name url path)
    IFS=' ' read -r REPO_NAME GIT_URL LOCAL_PATH <<< "$repo_info"

    echo "➕ Adding $REPO_NAME..."
    echo "   📦 Repository: $GIT_URL"
    echo "   📂 Path: $LOCAL_PATH"
    echo ""

    # Check if path already exists
    if [ -e "$LOCAL_PATH" ]; then
        echo "⚠️  Warning: Path '$LOCAL_PATH' already exists, skipping..."
        echo ""
        continue
    fi

    # Check if already a submodule
    if git submodule status "$LOCAL_PATH" 2>/dev/null | grep -q "$LOCAL_PATH"; then
        echo "⚠️  Warning: '$LOCAL_PATH' is already configured as a submodule, skipping..."
        echo ""
        continue
    fi

    # Add the submodule
    echo "🔄 Adding submodule..."
    if git submodule add "$GIT_URL" "$LOCAL_PATH"; then
        echo "✅ Successfully added $REPO_NAME"
        SUCCESS_COUNT=$((SUCCESS_COUNT + 1))
    else
        echo "❌ Failed to add $REPO_NAME"
        FAILURE_COUNT=$((FAILURE_COUNT + 1))
    fi
    echo ""
done

echo "📊 Summary:"
echo "   ✅ Successfully added: $SUCCESS_COUNT repositories"
echo "   ❌ Failed to add: $FAILURE_COUNT repositories"
echo ""

if [ $FAILURE_COUNT -eq 0 ]; then
    echo "🎉 All repositories added successfully!"
    echo ""
    echo "📝 Next steps:"
    echo "   1. Initialize submodules: git submodule update --init --recursive"
    echo "   2. Commit the changes: git add .gitmodules && git commit -m 'Add optional RTL generation tools as submodules'"
    echo "   3. The repositories are now available in the tools/ directory"
else
    echo "⚠️  Some repositories failed to add. Please check the errors above."
    echo "   You may need to:"
    echo "   - Check your internet connection"
    echo "   - Verify the repository URLs are correct"
    echo "   - Check if you have sufficient permissions"
fi

echo ""
echo "📋 Added repositories:"
for repo_info in "${REPOSITORIES[@]}"; do
    IFS=' ' read -r REPO_NAME GIT_URL LOCAL_PATH <<< "$repo_info"
    echo "   • $REPO_NAME -> $LOCAL_PATH"
done
