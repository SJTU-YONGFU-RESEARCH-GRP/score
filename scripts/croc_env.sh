#!/usr/bin/env bash
#
# croc (pulp-platform/croc): source before bender checkout or generate_croc.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_croc.sh.
#
# Usage (from SCORE repo root):
#   source scripts/croc_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

_SCRIPT_LOG_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$_SCRIPT_LOG_DIR/common_logging.sh"
init_script_logging croc_env

export PATH="${HOME}/.local/bin:${PATH}"

export CROC_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/croc" && pwd)"

echo "croc environment loaded"
echo "CROC_DIR: $CROC_DIR"
