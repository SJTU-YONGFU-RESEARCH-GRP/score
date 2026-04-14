#!/usr/bin/env bash
#
# carfield (pulp-platform/carfield): source before bender checkout or generate_carfield.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_carfield.sh.
#
# Usage (from SCORE repo root):
#   source scripts/carfield_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

_SCRIPT_LOG_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$_SCRIPT_LOG_DIR/common_logging.sh"
init_script_logging carfield_env

export PATH="${HOME}/.local/bin:${PATH}"

export CARFIELD_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/carfield" && pwd)"

echo "carfield environment loaded"
echo "CARFIELD_DIR: $CARFIELD_DIR"
