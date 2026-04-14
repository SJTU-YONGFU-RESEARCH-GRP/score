#!/usr/bin/env bash
#
# astral (pulp-platform/astral): source before bender checkout or generate_astral.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_astral.sh.
#
# Usage (from SCORE repo root):
#   source scripts/astral_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

_SCRIPT_LOG_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$_SCRIPT_LOG_DIR/common_logging.sh"
init_script_logging astral_env

export PATH="${HOME}/.local/bin:${PATH}"

export ASTRAL_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/astral" && pwd)"

echo "astral environment loaded"
echo "ASTRAL_DIR: $ASTRAL_DIR"
