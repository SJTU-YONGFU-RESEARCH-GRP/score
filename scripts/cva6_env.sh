#!/usr/bin/env bash
#
# cva6 (pulp-platform/cva6): source before bender checkout or generate_cva6.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_cva6.sh.
#
# Usage (from SCORE repo root):
#   source scripts/cva6_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

export PATH="${HOME}/.local/bin:${PATH}"

export CVA6_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/cva6" && pwd)"

echo "cva6 environment loaded"
echo "CVA6_DIR: $CVA6_DIR"
