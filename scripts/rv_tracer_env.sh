#!/usr/bin/env bash
#
# rv_tracer (PULP RISC-V E-trace RTL): source before running bender or generate_rv_tracer.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_rv_tracer.sh.
#
# Usage (from SCORE repo root):
#   source scripts/rv_tracer_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

export PATH="${HOME}/.local/bin:${PATH}"

export RV_TRACER_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/rv-tracer" && pwd)"

echo "rv_tracer environment loaded"
echo "RV_TRACER_DIR: $RV_TRACER_DIR"
