#!/usr/bin/env bash
#
# AraXL (pulp-platform/AraXL): source before bender checkout or generate_araxl.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_araxl.sh.
#
# Usage (from SCORE repo root):
#   source scripts/araxl_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

_SCRIPT_LOG_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$_SCRIPT_LOG_DIR/common_logging.sh"
init_script_logging araxl_env

export PATH="${HOME}/.local/bin:${PATH}"

export ARAXL_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/araxl" && pwd)"

echo "araxl (AraXL) environment loaded"
echo "ARAXL_DIR: $ARAXL_DIR"
