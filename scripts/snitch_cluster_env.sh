#!/usr/bin/env bash
#
# snitch_cluster (pulp-platform/snitch_cluster): source before bender checkout or generate_snitch_cluster.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_snitch_cluster.sh.
#
# Usage (from SCORE repo root):
#   source scripts/snitch_cluster_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

export PATH="${HOME}/.local/bin:${PATH}"

export SNITCH_CLUSTER_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/snitch-cluster" && pwd)"

echo "snitch_cluster environment loaded"
echo "SNITCH_CLUSTER_DIR: $SNITCH_CLUSTER_DIR"
