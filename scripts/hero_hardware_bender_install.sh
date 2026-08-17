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

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# shellcheck source=scripts/common_logging.sh
source "$SCRIPT_DIR/common_logging.sh"
init_script_logging hero_hardware_bender_install

HW_DIR="${1:?path to tools/hero/hardware required}"
VER="${HERO_HARDWARE_BENDER_VERSION:-0.21.0}"

cd "$HW_DIR"

if [[ -x ./bender ]]; then
    log_info "./bender already executable ($(./bender --version 2>/dev/null | head -1 || echo ok))"
    exit 0
fi

if [[ -f ./bender ]]; then
    rm -f ./bender
fi

if [[ "$(uname -s)" == Linux && "$(uname -m)" == x86_64 ]]; then
    url="https://github.com/pulp-platform/bender/releases/download/v${VER}/bender"
    log_info "Downloading Bender ${VER} from pulp-platform (${url})..."
    if curl -fsSL --retry 5 --retry-delay 2 -o bender "$url"; then
        chmod +x bender
        # Makefile lists `bender: Makefile`; keep binary newer than Makefile so make does not re-download.
        touch bender
        log_success "OK: $(./bender --version 2>/dev/null | head -1 || echo installed)"
        exit 0
    fi
    log_warning "curl download of Bender ${VER} failed; trying wget"
    rm -f bender
    if command -v wget >/dev/null 2>&1 && wget -q -O bender "$url"; then
        chmod +x bender
        touch bender
        log_success "OK (wget): $(./bender --version 2>/dev/null | head -1 || echo installed)"
        exit 0
    fi
    log_warning "Download of Bender ${VER} failed; trying Bender already on PATH"
    rm -f bender
fi

if command -v bender >/dev/null 2>&1; then
    ln -sf "$(command -v bender)" ./bender
    touch -h bender 2>/dev/null || touch bender
    log_success "Using PATH Bender via symlink: $(./bender --version 2>/dev/null | head -1 || echo ok)"
    exit 0
fi

if command -v lsb_release >/dev/null 2>&1; then
    log_info "Running make bender (HERO Makefile)..."
    make bender
    exit 0
fi

log_error "Need Linux x86_64 download, Bender on PATH, or lsb_release + make bender (e.g. sudo dnf install -y redhat-lsb-core)."
exit 1
