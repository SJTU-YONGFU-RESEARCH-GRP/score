#!/usr/bin/env bash
#
# Spatz (pulp-platform/spatz): source before bender checkout or generate_spatz.sh.
# Upstream vendors Bender under tools/spatz/install/bender via `make bender`.
# Optional: scripts/install_spatz.sh also places Bender on PATH (~/.local/bin).
#
# Usage (from SCORE repo root):
#   source scripts/spatz_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

export PATH="${HOME}/.local/bin:${PATH}"

export SPATZ_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/spatz" && pwd)"

echo "Spatz environment loaded"
echo "SPATZ_DIR: $SPATZ_DIR"
