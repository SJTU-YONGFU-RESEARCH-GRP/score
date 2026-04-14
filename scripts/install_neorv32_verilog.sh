#!/usr/bin/env bash
#
# NEORV32 Verilog toolchain install: same core as install_neorv32_vhdl.sh plus tools/neorv32-verilog
# and a conversion smoke test. Use with run_neorv32_verilog.sh / generate_neorv32_verilog.sh.
#
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_neorv32_verilog
export NEORV32_INSTALL_PROFILE=verilog
exec bash "$SCRIPT_DIR/install_neorv32_vhdl.sh" "$@"
