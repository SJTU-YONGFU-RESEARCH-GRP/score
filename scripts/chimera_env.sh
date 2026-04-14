#!/usr/bin/env bash
#
# chimera (pulp-platform/chimera): source before bender checkout or generate_chimera.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_chimera.sh.
#
# Usage (from SCORE repo root):
#   source scripts/chimera_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

_SCRIPT_LOG_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$_SCRIPT_LOG_DIR/common_logging.sh"
init_script_logging chimera_env

export PATH="${HOME}/.local/bin:${PATH}"

export CHIMERA_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/chimera" && pwd)"

echo "chimera environment loaded"
echo "CHIMERA_DIR: $CHIMERA_DIR"
