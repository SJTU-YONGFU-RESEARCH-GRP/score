#!/usr/bin/env bash
#
# cheshire (pulp-platform/cheshire): source before bender checkout or generate_cheshire.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_cheshire.sh.
#
# Usage (from SCORE repo root):
#   source scripts/cheshire_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

export PATH="${HOME}/.local/bin:${PATH}"

export CHESHIRE_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/cheshire" && pwd)"

echo "cheshire environment loaded"
echo "CHESHIRE_DIR: $CHESHIRE_DIR"
