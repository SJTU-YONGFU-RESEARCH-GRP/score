#!/usr/bin/env bash
# Batch install+generate for SCORE architectures. Logs under .score-run-logs/.
set -uo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
LOG_ROOT="${ROOT}/.score-run-logs"
STATUS_CSV="${LOG_ROOT}/status.csv"
export PATH="${HOME}/.local/bin:${PATH}"

mkdir -p "${LOG_ROOT}"
if [[ ! -f "${STATUS_CSV}" ]]; then
  echo "arch,install_rc,generate_rc,notes,timestamp" >"${STATUS_CSV}"
fi

# Basename after install_/generate_ (must match scripts)
ARCHES=(
  auteur
  rv_tracer
  chimera
  picobello
  pulp_soc
  pulp_cluster
  safety_island
  magia
  cheshire
  astral
  spatz
  cva6
  neorv32_verilog
  neorv32_vhdl
  rv12
  iob_soc
  riscv_vhdl
  soc_automation
  openpiton
  rocket_chip
  ibex
  gemmini
  ara
  araxl
  croc
  cheshire_ihp130_o
  pulpissimo
  carfield
  occamy
  snitch_cluster
  mempool
  hero
  picorv32
  darkriscv
  serv
  hazard3
  scr1
  vexriscv
  opentitan
  black_parrot
  veer_el2
)

# Map script basename -> tools/ submodule path (when different)
tool_path_for() {
  case "$1" in
    pulp_soc) echo tools/pulp-soc ;;
    pulp_cluster) echo tools/pulp-cluster ;;
    rv_tracer) echo tools/rv-tracer ;;
    snitch_cluster) echo tools/snitch-cluster ;;
    cheshire_ihp130_o) echo tools/cheshire-ihp130-o ;;
    rocket_chip) echo tools/rocket-chip ;;
    iob_soc) echo tools/iob-soc ;;
    safety_island) echo tools/safety-island ;;
    neorv32_verilog|neorv32_vhdl) echo tools/neorv32 ;;
    riscv_vhdl) echo tools/riscv_vhdl ;;
    soc_automation) echo tools/SoC_Automation ;;
    openpiton) echo tools/openpiton ;;
    gemmini) echo tools/gemmini ;;
    black_parrot) echo tools/black-parrot ;;
    veer_el2) echo tools/veer-el2 ;;
    *) echo "tools/$1" ;;
  esac
}

run_one() {
  local arch="$1"
  local ts tool install_script generate_script install_log generate_log install_rc generate_rc notes
  ts="$(date -u +%Y%m%dT%H%M%SZ)"
  tool="$(tool_path_for "$arch")"
  install_script="${ROOT}/scripts/install_${arch}.sh"
  generate_script="${ROOT}/scripts/generate_${arch}.sh"
  install_log="${LOG_ROOT}/${arch}_install_${ts}.log"
  generate_log="${LOG_ROOT}/${arch}_generate_${ts}.log"
  install_rc=0
  generate_rc=0
  notes=""

  echo "======== ${arch} @ ${ts} ========"

  if [[ ! -x "${install_script}" && ! -f "${install_script}" ]]; then
    echo "${arch},missing,skipped,no install script,${ts}" >>"${STATUS_CSV}"
    return 0
  fi

  # Init submodule if listed. P1 simple-RTL arches clone themselves (sparse/shallow).
  if [[ "${arch}" == opentitan || "${arch}" == black_parrot || "${arch}" == vexriscv || "${arch}" == veer_el2 ]]; then
    notes="clone_via_install"
  elif grep -q "path = ${tool}$" "${ROOT}/.gitmodules" 2>/dev/null; then
    echo "[${arch}] submodule init ${tool}"
    # shellcheck source=/dev/null
    source "${ROOT}/scripts/common_logging.sh"
    # shellcheck source=/dev/null
    source "${ROOT}/scripts/common_submodule_bootstrap.sh"
    if ! (
      cd "${ROOT}"
      if git ls-files --error-unmatch -- "${tool}" >/dev/null 2>&1; then
        git submodule sync -- "${tool}"
        # Default: shallow tool checkout only. Recursive nested repos (u-boot, PDKs,
        # buildroot) are multi-GB and often unnecessary for SCORE RTL snapshots.
        # Set SCORE_SUBMODULE_RECURSIVE=true to opt in.
        if [[ "${SCORE_SUBMODULE_RECURSIVE:-false}" =~ ^(1|true|TRUE|yes|YES|on|ON)$ ]]; then
          git submodule update --init --recursive "${tool}"
        else
          git submodule update --init "${tool}"
        fi
      else
        echo "[${arch}] ${tool} in .gitmodules but not in index; cloning from URL"
        score_bootstrap_missing_checkout "${ROOT}" "${tool}" "[${arch}] "
      fi
    ) >"${LOG_ROOT}/${arch}_submodule_${ts}.log" 2>&1; then
      notes="submodule_init_failed"
      echo "${arch},1,skipped,${notes},${ts}" >>"${STATUS_CSV}"
      echo "[${arch}] FAIL submodule"
      return 0
    fi
  else
    notes="no_gitmodules_entry"
  fi

  echo "[${arch}] install"
  set +e
  # Architecture-specific non-interactive flags (avoid y/N prompts and redundant submodule work).
  local -a install_args=()
  case "${arch}" in
    gemmini)
      install_args=(--no-system-deps --auto)
      ;;
    hero)
      install_args=(--skip-deps --auto)
      ;;
    iob_soc)
      install_args=(--skip-deps --force-build)
      ;;
    ibex)
      install_args=(--no-system-deps --skip-update)
      ;;
    rocket_chip)
      install_args=(--no-system-deps)
      ;;
    neorv32_verilog|neorv32_vhdl)
      install_args=(--skip-neorv32-submodule)
      ;;
    *)
      if grep -q -- '--no-system-deps' "${install_script}"; then
        install_args=(--no-system-deps)
      fi
      ;;
  esac
  bash "${install_script}" "${install_args[@]}" >"${install_log}" 2>&1
  install_rc=$?
  set -e

  if [[ "${install_rc}" -ne 0 ]]; then
    echo "${arch},${install_rc},skipped,install_failed;${notes},${ts}" >>"${STATUS_CSV}"
    echo "[${arch}] FAIL install rc=${install_rc} log=${install_log}"
    return 0
  fi

  if [[ ! -f "${generate_script}" ]]; then
    echo "${arch},${install_rc},skipped,no generate script;${notes},${ts}" >>"${STATUS_CSV}"
    echo "[${arch}] OK install; no generate"
    return 0
  fi

  echo "[${arch}] generate"
  set +e
  bash "${generate_script}" >"${generate_log}" 2>&1
  generate_rc=$?
  set -e

  echo "${arch},${install_rc},${generate_rc},${notes},${ts}" >>"${STATUS_CSV}"
  if [[ "${generate_rc}" -eq 0 ]]; then
    echo "[${arch}] OK install+generate"
  else
    echo "[${arch}] FAIL generate rc=${generate_rc} log=${generate_log}"
  fi
}

ONLY="${1:-}"
if [[ -n "${ONLY}" ]]; then
  run_one "${ONLY}"
  exit 0
fi

for a in "${ARCHES[@]}"; do
  run_one "$a"
done

echo "Done. Status: ${STATUS_CSV}"
