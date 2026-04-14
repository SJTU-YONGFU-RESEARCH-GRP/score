#!/usr/bin/env bash
#
# MemPool (pulp-platform/mempool): source before running make update-deps or generate_mempool.sh.
# Upstream vendors Bender under tools/mempool/install/bender via `make bender`.
# Optional: scripts/install_mempool.sh also places Bender on PATH (~/.local/bin).
#
# Usage (from SCORE repo root):
#   source scripts/mempool_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

_SCRIPT_LOG_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$_SCRIPT_LOG_DIR/common_logging.sh"
init_script_logging mempool_env

export PATH="${HOME}/.local/bin:${PATH}"

export MEMPOOL_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/mempool" && pwd)"

echo "MemPool environment loaded"
echo "MEMPOOL_DIR: $MEMPOOL_DIR"
