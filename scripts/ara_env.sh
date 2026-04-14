#!/usr/bin/env bash
#
# Ara (pulp-platform/ara): source before running hardware make targets or generate_ara.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_ara.sh; upstream also
# vendors a copy under tools/ara/hardware/bender via `make -C hardware bender`.
#
# Usage (from SCORE repo root):
#   source scripts/ara_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

_SCRIPT_LOG_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$_SCRIPT_LOG_DIR/common_logging.sh"
init_script_logging ara_env

export PATH="${HOME}/.local/bin:${PATH}"

export ARA_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/ara" && pwd)"

echo "Ara environment loaded"
echo "ARA_DIR: $ARA_DIR"
