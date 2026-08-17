#!/usr/bin/env bash
# SCORE install for lowRISC/opentitan — full checkout + Bazel/FuseSoC host env.
#
# Follows upstream getting-started (RHEL uses yum-requirements.txt mapping):
#   full clone, Python ≥3.10 venv + python-requirements.txt, Verilator 4.210,
#   Verible, RISC-V toolchain (reuse tools/ibex-host-tools when present).
#
# Usage: ./scripts/install_opentitan.sh [--no-system-deps] [--check-only] [--skip-venv]
#        [--skip-host-tools] [--force-reclone]
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
RELATIVE_SUBMODULE_PATH="tools/opentitan"
TOOL_DIR="$PROJECT_ROOT/$RELATIVE_SUBMODULE_PATH"
UPSTREAM_URL="https://github.com/lowRISC/opentitan.git"
HOST_TOOLS_DIR="$PROJECT_ROOT/tools/opentitan-host-tools"
IBEX_HOST_TOOLS="$PROJECT_ROOT/tools/ibex-host-tools"
INSTALL_SYSTEM_DEPS=true
CHECK_ONLY=false
SKIP_VENV=false
SKIP_HOST_TOOLS=false
FORCE_RECLONE=false
[[ "${OPENTITAN_SKIP_SYSTEM_DEPS:-}" == "1" ]] && INSTALL_SYSTEM_DEPS=false

source "$SCRIPT_DIR/common_logging.sh"
init_script_logging install_opentitan
source "$SCRIPT_DIR/common_submodule_bootstrap.sh"
source "$SCRIPT_DIR/common_simple_rtl.sh"

show_help() {
    cat << EOF
Usage: $0 [OPTIONS]
Full OpenTitan install (https://github.com/lowRISC/opentitan):
  - Non-sparse clone under tools/opentitan
  - RHEL/Ubuntu system packages when permitted
  - Python 3.10+ venv + hashed python-requirements (includes FuseSoC)
  - Verilator 4.210 + Verible + rv32 toolchain under tools/opentitan-host-tools
    (reuses tools/ibex-host-tools when already present)

  --check-only         Verify checkout + venv + verilator 4.210
  --no-system-deps     Skip apt/dnf (same as OPENTITAN_SKIP_SYSTEM_DEPS=1)
  --skip-venv          Do not create/update tools/opentitan/.venv
  --skip-host-tools    Do not download Verilator/Verible/toolchain
  --force-reclone      Remove tools/opentitan and clone fresh (depth 1)
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help) show_help; exit 0 ;;
        --check-only) CHECK_ONLY=true; shift ;;
        --no-system-deps) INSTALL_SYSTEM_DEPS=false; shift ;;
        --skip-venv) SKIP_VENV=true; shift ;;
        --skip-host-tools) SKIP_HOST_TOOLS=true; shift ;;
        --force-reclone) FORCE_RECLONE=true; shift ;;
        *) log_error "Unknown option: $1"; show_help; exit 1 ;;
    esac
done

run_priv() {
    if [[ "$(id -u)" -eq 0 ]]; then
        "$@"
    elif [[ -n "${SCORE_SUDO_PASSWORD:-}" ]]; then
        printf '%s\n' "$SCORE_SUDO_PASSWORD" | sudo -S -p '' "$@"
    elif sudo -n true 2>/dev/null; then
        sudo "$@"
    else
        log_error "sudo required for: $*"
        log_error "Re-run with passwordless sudo, as root, or SCORE_SUDO_PASSWORD set."
        return 1
    fi
}

pick_python() {
    local c
    for c in python3.12 python3.11 python3.10; do
        if command -v "$c" >/dev/null 2>&1; then
            echo "$c"
            return 0
        fi
    done
    return 1
}

verilator_is_ok() {
    local bin="$1"
    [[ -x "$bin" ]] || return 1
    local ver
    ver="$("$bin" --version 2>/dev/null | head -1 || true)"
    [[ "$ver" == *"4.210"* ]]
}

find_verilator_4210() {
    local cand
    for cand in \
        "$HOST_TOOLS_DIR/verilator/v4.210/bin/verilator" \
        "$IBEX_HOST_TOOLS/verilator/v4.210/bin/verilator"; do
        if verilator_is_ok "$cand"; then
            echo "$cand"
            return 0
        fi
    done
    return 1
}

check_opentitan_ready() {
    local pybin venv_py fusesoc_bin ver_bin
    [[ -f "$TOOL_DIR/bazelisk.sh" ]] || { log_error "Missing $TOOL_DIR/bazelisk.sh"; return 1; }
    [[ -d "$TOOL_DIR/hw/ip" ]] || { log_error "Missing $TOOL_DIR/hw/ip"; return 1; }
    [[ -d "$TOOL_DIR/util" ]] || { log_error "Missing $TOOL_DIR/util (sparse checkout?)"; return 1; }
    [[ -f "$TOOL_DIR/python-requirements.txt" ]] || { log_error "Missing python-requirements.txt"; return 1; }

    if [[ -x "$TOOL_DIR/.venv/bin/python" ]]; then
        venv_py="$TOOL_DIR/.venv/bin/python"
        py_ver="$("$venv_py" -c 'import sys; print("%d.%d"%sys.version_info[:2])')"
        if [[ "$(printf '%s\n' "$py_ver" | awk -F. '{print ($1*100+$2)}')" -lt 310 ]]; then
            log_error "venv Python $py_ver < 3.10 (OpenTitan requires ≥3.10)"
            return 1
        fi
        fusesoc_bin="$TOOL_DIR/.venv/bin/fusesoc"
        [[ -x "$fusesoc_bin" ]] || { log_error "FuseSoC missing in venv — re-run without --skip-venv"; return 1; }
        log_success "venv OK (Python $py_ver, FuseSoC present)"
    else
        log_warning "venv not present at $TOOL_DIR/.venv"
    fi

    if ver_bin="$(find_verilator_4210)"; then
        log_success "Verilator 4.210: $ver_bin"
    else
        log_warning "Verilator 4.210 not found under opentitan/ibex host-tools"
    fi
    log_success "opentitan present: $(git -C "$TOOL_DIR" rev-parse --short HEAD 2>/dev/null || echo '?')"
}

install_rhel_packages() {
    log_info "Installing RHEL packages for OpenTitan…"
    local pkgs=(
        brotli cmake curl gcc-c++ git make autoconf
        elfutils-libelf elfutils-libelf-devel
        openssl-devel ncurses ncurses-devel
        libusbx libxslt zlib-devel xz xz-devel zip unzip
        perl pkgconf-pkg-config tree
        python3.12 python3.12-devel
        ninja-build
        # opentitantool (libudev-sys) needs libudev.pc for Bazel SW tests
        systemd-devel
        # rules_rust bindgen/libclang (prebuilt) needs libtinfo.so.5
        ncurses-compat-libs
    )
    # Optional / EPEL-ish packages — try, do not hard-fail the whole set.
    local optional=(libftdi libftdi-devel srecord dfu-util lrzsz)
    run_priv dnf install -y "${pkgs[@]}" || return 1
    local p
    for p in "${optional[@]}"; do
        run_priv dnf install -y "$p" || log_warning "Optional package unavailable: $p"
    done
}

install_debian_packages() {
    log_info "Installing Debian/Ubuntu packages from apt-requirements.txt…"
    run_priv apt-get update -y || true
    # shellcheck disable=SC2046
    run_priv apt-get install -y $(sed '/^#/d;/^$/d' "$TOOL_DIR/apt-requirements.txt") \
        python3.12 python3.12-venv python3.12-dev ninja-build || return 1
}

install_system_deps() {
    if [[ ! -f /etc/os-release ]]; then
        log_warning "No /etc/os-release; skip system packages"
        return 0
    fi
    # shellcheck source=/dev/null
    . /etc/os-release
    case "${ID:-}" in
        rhel|centos|rocky|almalinux|ol|amzn|fedora)
            install_rhel_packages
            ;;
        ubuntu|debian|pop|linuxmint|raspbian)
            # Need the repo present for apt-requirements.txt
            if [[ ! -f "$TOOL_DIR/apt-requirements.txt" ]]; then
                log_warning "apt-requirements.txt missing; install host packages after clone"
                return 0
            fi
            install_debian_packages
            ;;
        *)
            log_warning "Unsupported ID=${ID:-}; install OT deps manually"
            ;;
    esac
}

ensure_full_checkout() {
    if [[ "$FORCE_RECLONE" == true ]] && [[ -e "$TOOL_DIR" ]]; then
        log_warning "Removing $TOOL_DIR for --force-reclone"
        rm -rf "$TOOL_DIR"
    fi

    local need_fresh=false
    if [[ ! -d "$TOOL_DIR/.git" ]]; then
        need_fresh=true
    elif git -C "$TOOL_DIR" sparse-checkout list >/dev/null 2>&1; then
        local sparse_count
        sparse_count="$(git -C "$TOOL_DIR" sparse-checkout list 2>/dev/null | wc -l || echo 0)"
        if [[ "$sparse_count" -gt 0 ]]; then
            log_info "Existing checkout is sparse ($sparse_count paths) — replacing with full clone"
            need_fresh=true
            rm -rf "$TOOL_DIR"
        fi
    elif [[ ! -d "$TOOL_DIR/util" ]] || [[ ! -f "$TOOL_DIR/MODULE.bazel" ]]; then
        log_info "Checkout incomplete for Bazel — replacing with full clone"
        need_fresh=true
        rm -rf "$TOOL_DIR"
    fi

    if [[ "$need_fresh" == true ]]; then
        log_info "Cloning OpenTitan (depth 1, full tree)…"
        git clone --depth 1 "$UPSTREAM_URL" "$TOOL_DIR"
    else
        log_info "Updating existing full checkout…"
        score_prepare_tool_checkout "$PROJECT_ROOT" "$RELATIVE_SUBMODULE_PATH" || true
        git -C "$TOOL_DIR" pull --ff-only || log_warning "git pull failed; using existing commit"
    fi

    [[ -f "$TOOL_DIR/bazelisk.sh" ]] || { log_error "bazelisk.sh missing after clone"; exit 1; }
    [[ -d "$TOOL_DIR/util" ]] || { log_error "util/ missing after clone"; exit 1; }
}

link_or_download_host_tools() {
    mkdir -p "$HOST_TOOLS_DIR"
    local cache="$HOST_TOOLS_DIR/build-cache"
    mkdir -p "$cache"

    # Prefer sharing Ibex portable tools (same Verilator 4.210 / Verible / rv32).
    if [[ -d "$IBEX_HOST_TOOLS/verilator/v4.210" ]]; then
        mkdir -p "$HOST_TOOLS_DIR/verilator"
        ln -sfn "$IBEX_HOST_TOOLS/verilator/v4.210" "$HOST_TOOLS_DIR/verilator/v4.210"
        log_info "Reusing Ibex Verilator 4.210 via symlink"
    fi
    if [[ -d "$IBEX_HOST_TOOLS/verible/bin" ]]; then
        ln -sfn "$IBEX_HOST_TOOLS/verible" "$HOST_TOOLS_DIR/verible"
        log_info "Reusing Ibex Verible via symlink"
    fi
    if [[ -x "$IBEX_HOST_TOOLS/riscv/bin/riscv32-unknown-elf-gcc" ]]; then
        ln -sfn "$IBEX_HOST_TOOLS/riscv" "$HOST_TOOLS_DIR/riscv"
        log_info "Reusing Ibex RISC-V toolchain via symlink"
    fi
    if [[ -x "$IBEX_HOST_TOOLS/srecord/bin/srec_cat" ]]; then
        ln -sfn "$IBEX_HOST_TOOLS/srecord" "$HOST_TOOLS_DIR/srecord"
        log_info "Reusing Ibex srecord via symlink"
    fi

    local VERILATOR_VERSION="v4.210"
    local VERIBLE_VERSION="v0.0-3622-g07b310a3"
    local RISCV_TOOLCHAIN_TAR_VERSION="20230427-1"
    local RISCV_TOOLCHAIN_TAR_VARIANT="lowrisc-toolchain-gcc-rv32imcb"

    if [[ ! -x "$HOST_TOOLS_DIR/verilator/${VERILATOR_VERSION}/bin/verilator" ]]; then
        log_info "Downloading Verilator ${VERILATOR_VERSION}…"
        local ver_url="https://storage.googleapis.com/verilator-builds/verilator-${VERILATOR_VERSION}.tar.gz"
        local ver_file="$cache/verilator-${VERILATOR_VERSION}.tar.gz"
        curl -fsSL "$ver_url" -o "$ver_file"
        mkdir -p "$HOST_TOOLS_DIR/verilator"
        tar -C "$HOST_TOOLS_DIR/verilator" -xzf "$ver_file"
        local _vpre="$HOST_TOOLS_DIR/verilator/${VERILATOR_VERSION}"
        if [[ -x "$_vpre/bin/verilator" && -d "$_vpre/share/verilator/bin" ]]; then
            ln -sfn ../../../bin/verilator "$_vpre/share/verilator/bin/verilator"
            ln -sfn ../../../bin/verilator_bin "$_vpre/share/verilator/bin/verilator_bin"
        fi
    fi

    if [[ ! -d "$HOST_TOOLS_DIR/verible/bin" ]]; then
        log_info "Downloading Verible ${VERIBLE_VERSION}…"
        local verb_url="https://github.com/chipsalliance/verible/releases/download/${VERIBLE_VERSION}/verible-${VERIBLE_VERSION}-linux-static-x86_64.tar.gz"
        local verb_file="$cache/verible-${VERIBLE_VERSION}.tar.gz"
        curl -fsSL "$verb_url" -o "$verb_file"
        mkdir -p "$HOST_TOOLS_DIR/verible"
        tar -C "$HOST_TOOLS_DIR/verible" -xzf "$verb_file" --strip-components=1
    fi

    if [[ ! -x "$HOST_TOOLS_DIR/riscv/bin/riscv32-unknown-elf-gcc" ]]; then
        log_info "Downloading lowRISC RISC-V toolchain…"
        local tc_url="https://github.com/lowRISC/lowrisc-toolchains/releases/download/${RISCV_TOOLCHAIN_TAR_VERSION}/${RISCV_TOOLCHAIN_TAR_VARIANT}-${RISCV_TOOLCHAIN_TAR_VERSION}.tar.xz"
        local tc_file="$cache/rv32-toolchain.tar.xz"
        curl -fsSL "$tc_url" -o "$tc_file"
        mkdir -p "$HOST_TOOLS_DIR/riscv"
        tar -C "$HOST_TOOLS_DIR/riscv" -xf "$tc_file" --strip-components=1
    fi

    verilator_is_ok "$HOST_TOOLS_DIR/verilator/${VERILATOR_VERSION}/bin/verilator" \
        || { log_error "Verilator ${VERILATOR_VERSION} install failed"; exit 1; }

    # lowRISC prebuilt Verilator is configured with --prefix=/tools/verilator/v4.210;
    # FuseSoC/make embeds that path. Symlink so verilated.mk resolves.
    local sys_ver="/tools/verilator/${VERILATOR_VERSION}"
    if [[ ! -e "$sys_ver/share/verilator/include/verilated.mk" ]]; then
        log_info "Linking $sys_ver → $HOST_TOOLS_DIR/verilator/${VERILATOR_VERSION}"
        if run_priv mkdir -p /tools/verilator \
            && run_priv ln -sfn "$HOST_TOOLS_DIR/verilator/${VERILATOR_VERSION}" "$sys_ver"; then
            log_success "System Verilator prefix ready at $sys_ver"
        else
            log_warning "Could not create $sys_ver — Bazel //hw:verilator may fail until linked"
        fi
    else
        log_info "System Verilator prefix already present: $sys_ver"
    fi

    # Bazel uses --incompatible_strict_action_env, so PATH is not passed into the
    # sandbox. OpenTitan runs bare `srec_cat`; RHEL often lacks the srecord RPM.
    # Link portable binaries into /usr/bin (always on Bazel's default PATH).
    if [[ -x "$HOST_TOOLS_DIR/srecord/bin/srec_cat" ]]; then
        local srec_bin
        for srec_bin in srec_cat srec_cmp srec_info; do
            if [[ ! -x "/usr/bin/$srec_bin" ]]; then
                if run_priv ln -sfn "$HOST_TOOLS_DIR/srecord/bin/$srec_bin" "/usr/bin/$srec_bin"; then
                    log_info "Linked /usr/bin/$srec_bin → host-tools srecord"
                else
                    log_warning "Could not link /usr/bin/$srec_bin — Bazel SW vmem steps need srec_cat"
                fi
            fi
        done
    fi

    log_success "Host tools ready under $HOST_TOOLS_DIR"
}

write_env_script() {
    local env_file="$TOOL_DIR/setup_score_env.sh"
    cat >"$env_file" << 'EOF'
# Generated by scripts/install_opentitan.sh — SCORE OpenTitan environment
# shellcheck shell=bash
_OT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
_OT_HOST="$(cd "$_OT_ROOT/../opentitan-host-tools" && pwd)"
if [[ -f "$_OT_ROOT/.venv/bin/activate" ]]; then
    # shellcheck source=/dev/null
    source "$_OT_ROOT/.venv/bin/activate"
fi
# Prefer /tools/verilator/v4.210 — lowRISC prebuilts bake that prefix into makefiles.
export PATH="/tools/verilator/v4.210/bin:$_OT_ROOT/.venv/bin:$_OT_HOST/verilator/v4.210/bin:$_OT_HOST/verible/bin:$_OT_HOST/riscv/bin:$_OT_HOST/srecord/bin:${PATH}"
if [[ -d /tools/verilator/v4.210/share/verilator ]]; then
    export VERILATOR_ROOT="/tools/verilator/v4.210/share/verilator"
elif [[ -d "$_OT_HOST/verilator/v4.210/share/verilator" ]]; then
    export VERILATOR_ROOT="$_OT_HOST/verilator/v4.210/share/verilator"
fi
export RISCV="$_OT_HOST/riscv"
export REPO_TOP="$_OT_ROOT"
unset _OT_ROOT _OT_HOST
EOF
    log_success "Wrote $env_file"
}

setup_venv() {
    local py
    py="$(pick_python)" || {
        log_error "Need python3.10+ on PATH (found only $(command -v python3 || echo none))"
        log_error "On RHEL 9: dnf install python3.12 python3.12-devel"
        exit 1
    }
    log_info "Creating venv with $py…"
    "$py" -m venv "$TOOL_DIR/.venv"
    # shellcheck source=/dev/null
    source "$TOOL_DIR/.venv/bin/activate"
    pip install --upgrade pip wheel
    # Upstream pins hashes; setuptools pin matches getting-started.
    pip install "setuptools<66.0.0"
    log_info "Installing python-requirements.txt (includes FuseSoC) — this can take several minutes…"
    pip install -r "$TOOL_DIR/python-requirements.txt" --require-hashes
    command -v fusesoc >/dev/null || { log_error "fusesoc not on PATH after pip install"; exit 1; }
    log_success "FuseSoC $(python -c "import importlib.metadata as m; print(m.version('fusesoc'))")"
}

cd "$PROJECT_ROOT"

if [[ "$CHECK_ONLY" == true ]]; then
    check_opentitan_ready
    exit 0
fi

if [[ "$INSTALL_SYSTEM_DEPS" == true ]]; then
    # Clone first on Debian so apt-requirements.txt exists; on RHEL list is fixed.
    if [[ -f /etc/os-release ]]; then
        # shellcheck source=/dev/null
        . /etc/os-release
        case "${ID:-}" in
            ubuntu|debian|pop|linuxmint|raspbian)
                ensure_full_checkout
                install_system_deps || log_warning "System package install had errors"
                ;;
            *)
                install_system_deps || log_warning "System package install had errors"
                ensure_full_checkout
                ;;
        esac
    else
        ensure_full_checkout
    fi
else
    log_info "Skipping system deps"
    ensure_full_checkout
fi

if [[ "$SKIP_HOST_TOOLS" == true ]]; then
    log_info "Skipping host-tools download"
else
    link_or_download_host_tools
fi

if [[ "$SKIP_VENV" == true ]]; then
    log_info "Skipping venv"
else
    setup_venv
fi

write_env_script
check_opentitan_ready
log_success "opentitan full install ready at $TOOL_DIR ($(git -C "$TOOL_DIR" rev-parse --short HEAD))"
log_info "Activate with: source $TOOL_DIR/setup_score_env.sh"
log_info "Then: cd $TOOL_DIR && ./bazelisk.sh build //hw:verilator"
