#!/usr/bin/env bash
#
# auteur (pulp-platform/auteur): source before bender checkout or generate_auteur.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_auteur.sh.
#
# Usage (from SCORE repo root):
#   source scripts/auteur_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

_SCRIPT_LOG_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$_SCRIPT_LOG_DIR/common_logging.sh"
init_script_logging auteur_env

export PATH="${HOME}/.local/bin:${PATH}"

export AUTEUR_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/auteur" && pwd)"

echo "auteur environment loaded"
echo "AUTEUR_DIR: $AUTEUR_DIR"
