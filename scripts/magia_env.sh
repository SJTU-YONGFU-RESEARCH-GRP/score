#!/usr/bin/env bash
#
# MAGIA (pulp-platform/MAGIA): source before bender checkout or generate_magia.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_magia.sh.
#
# Usage (from SCORE repo root):
#   source scripts/magia_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

export PATH="${HOME}/.local/bin:${PATH}"

export MAGIA_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/magia" && pwd)"

echo "magia environment loaded"
echo "MAGIA_DIR: $MAGIA_DIR"
