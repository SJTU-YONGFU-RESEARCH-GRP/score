#!/usr/bin/env bash
#
# Install ./bender under tools/hero/hardware without fabianschuiki/bender init (which requires lsb_release).
# Default: pulp-platform static binary for Linux x86_64, same major line as HERO Makefile (0.21.0).
#
# Usage:
#   scripts/hero_hardware_bender_install.sh /abs/path/to/tools/hero/hardware
#
# Environment:
#   HERO_HARDWARE_BENDER_VERSION  Bender tag without leading v (default: 0.21.0)
#
set -euo pipefail

HW_DIR="${1:?path to tools/hero/hardware required}"
VER="${HERO_HARDWARE_BENDER_VERSION:-0.21.0}"

cd "$HW_DIR"

if [[ -x ./bender ]]; then
    echo "[hero_hardware_bender] ./bender already executable ($(./bender --version 2>/dev/null | head -1 || echo ok))"
    exit 0
fi

if [[ -f ./bender ]]; then
    rm -f ./bender
fi

if [[ "$(uname -s)" == Linux && "$(uname -m)" == x86_64 ]]; then
    url="https://github.com/pulp-platform/bender/releases/download/v${VER}/bender"
    echo "[hero_hardware_bender] Downloading Bender ${VER} from pulp-platform (${url})..."
    curl -fsSL -o bender "$url"
    chmod +x bender
    echo "[hero_hardware_bender] OK: $(./bender --version 2>/dev/null | head -1 || echo installed)"
    exit 0
fi

if command -v lsb_release >/dev/null 2>&1; then
    echo "[hero_hardware_bender] Running make bender (HERO Makefile)..."
    make bender
    exit 0
fi

echo "[hero_hardware_bender] ERROR: Need Linux x86_64, or lsb_release + make bender (e.g. sudo dnf install -y redhat-lsb-core)." >&2
exit 1
