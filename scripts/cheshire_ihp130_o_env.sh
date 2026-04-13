#!/usr/bin/env bash
#
# cheshire-ihp130-o (pulp-platform/cheshire-ihp130-o): source before bender checkout or generate_cheshire_ihp130_o.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_cheshire_ihp130_o.sh.
#
# Usage (from SCORE repo root):
#   source scripts/cheshire_ihp130_o_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

export PATH="${HOME}/.local/bin:${PATH}"

export CHESHIRE_IHP130_O_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/cheshire-ihp130-o" && pwd)"

echo "cheshire_ihp130_o environment loaded"
echo "CHESHIRE_IHP130_O_DIR: $CHESHIRE_IHP130_O_DIR"
