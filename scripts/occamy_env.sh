#!/usr/bin/env bash
#
# occamy (pulp-platform/occamy): source before bender checkout or generate_occamy.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_occamy.sh.
#
# Usage (from SCORE repo root):
#   source scripts/occamy_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

export PATH="${HOME}/.local/bin:${PATH}"

export OCCAMY_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/occamy" && pwd)"

echo "occamy environment loaded"
echo "OCCAMY_DIR: $OCCAMY_DIR"
