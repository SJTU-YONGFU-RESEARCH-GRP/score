#!/usr/bin/env bash
#
# safety_island (pulp-platform/safety_island): source before bender checkout or generate_safety_island.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_safety_island.sh.
#
# Usage (from SCORE repo root):
#   source scripts/safety_island_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

export PATH="${HOME}/.local/bin:${PATH}"

export SAFETY_ISLAND_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/safety-island" && pwd)"

echo "safety_island environment loaded"
echo "SAFETY_ISLAND_DIR: $SAFETY_ISLAND_DIR"
