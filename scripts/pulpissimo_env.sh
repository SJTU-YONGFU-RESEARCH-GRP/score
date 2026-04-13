#!/usr/bin/env bash
#
# PULPissimo (pulp-platform/pulpissimo): source before bender checkout or generate_pulpissimo.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_pulpissimo.sh.
#
# Usage (from SCORE repo root):
#   source scripts/pulpissimo_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

export PATH="${HOME}/.local/bin:${PATH}"

export PULPISSIMO_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/pulpissimo" && pwd)"

echo "pulpissimo environment loaded"
echo "PULPISSIMO_DIR: $PULPISSIMO_DIR"
