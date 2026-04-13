#!/usr/bin/env bash
#
# pulp_cluster (pulp-platform/pulp_cluster): source before bender checkout or generate_pulp_cluster.sh.
# Bender is typically installed to ~/.local/bin by scripts/install_pulp_cluster.sh.
#
# Usage (from SCORE repo root):
#   source scripts/pulp_cluster_env.sh
#

# When sourced from a parent with `set -u`, relax nounset for this file only.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

export PATH="${HOME}/.local/bin:${PATH}"

export PULP_CLUSTER_DIR="$(cd "$(dirname "${BASH_SOURCE[0]:-$0}")/../tools/pulp-cluster" && pwd)"

echo "pulp_cluster environment loaded"
echo "PULP_CLUSTER_DIR: $PULP_CLUSTER_DIR"
