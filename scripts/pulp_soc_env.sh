#!/usr/bin/env bash
#
# pulp_soc (pulp-platform/pulp_soc): source before bender checkout or generate_pulp_soc.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_pulp_soc.sh.
#
# Usage (from SCORE repo root):
#   source scripts/pulp_soc_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

_SCRIPT_LOG_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$_SCRIPT_LOG_DIR/common_logging.sh"
init_script_logging pulp_soc_env

export PATH="${HOME}/.local/bin:${PATH}"

export PULP_SOC_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/pulp-soc" && pwd)"

echo "pulp_soc environment loaded"
echo "PULP_SOC_DIR: $PULP_SOC_DIR"
