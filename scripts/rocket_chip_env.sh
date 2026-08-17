#!/bin/bash

# Rocket Chip Environment Setup Script
# Source this script to set up the environment for Rocket Chip development

# When sourced from a parent with `set -u` (e.g. run_rocket_chip.sh), inherited
# nounset makes even guarded tests fragile across bash versions. Relax -u for
# this file only, then restore the caller's mode on return.
if [[ "${-}" == *u* ]]; then
    trap 'set -u; trap - RETURN' RETURN
    set +u
fi

_rc_java_major_from_exe() {
    local exe="$1" line v major
    [[ -z "$exe" || ! -x "$exe" ]] && echo 0 && return
    line=$("$exe" -version 2>&1 | head -n1)
    v=$(echo "$line" | sed -n 's/.*version "\([^"]*\)".*/\1/p')
    [[ -z "$v" ]] && echo 0 && return
    major="${v%%.*}"
    if [[ "$major" == "1" ]]; then
        v="${v#*.}"
        echo "${v%%.*}"
    else
        echo "$major"
    fi
}

_rc_pick_openjdk11_home() {
    if [[ -d "/usr/lib/jvm/java-11-openjdk-amd64" ]]; then
        echo "/usr/lib/jvm/java-11-openjdk-amd64"
        return
    fi
    local _d
    if compgen -G "/usr/lib/jvm/java-11-openjdk-*" >/dev/null 2>&1; then
        for _d in /usr/lib/jvm/java-11-openjdk-*; do
            [[ -d "$_d" && -x "$_d/bin/java" ]] || continue
            echo "$_d"
            return
        done
    fi
    if [[ -d "/opt/homebrew/opt/openjdk@11" ]]; then
        echo "/opt/homebrew/opt/openjdk@11"
        return
    fi
    if [[ -d "/usr/local/opt/openjdk@11" ]]; then
        echo "/usr/local/opt/openjdk@11"
        return
    fi
    echo ""
}

# Add local Scala installation to PATH if it exists
if [[ -d "$HOME/.local/scala/bin" ]]; then
    export PATH="$HOME/.local/scala/bin:$PATH"
fi

# Prefer OpenJDK 11 when JAVA_HOME is unset or points to JDK < 11 (stale JAVA_HOME=8 is common).
_rc_jh11="$(_rc_pick_openjdk11_home)"
if [[ -n "$_rc_jh11" ]]; then
    if [[ -z "${JAVA_HOME:-}" ]] || [[ "$(_rc_java_major_from_exe "${JAVA_HOME}/bin/java")" -lt 11 ]]; then
        export JAVA_HOME="$_rc_jh11"
    fi
fi
unset -v _rc_jh11

if [[ -z "${JAVA_HOME:-}" ]] && command -v java >/dev/null 2>&1; then
    _rc_java="$(readlink -f "$(command -v java)" 2>/dev/null || command -v java)"
    if [[ -n "$_rc_java" && -x "$_rc_java" ]]; then
        export JAVA_HOME="$(dirname "$(dirname "$_rc_java")")"
    fi
    unset _rc_java
fi

unset -f _rc_java_major_from_exe _rc_pick_openjdk11_home

# Put this JDK's java(1) before other copies on PATH
if [[ -n "${JAVA_HOME:-}" && -x "${JAVA_HOME}/bin/java" ]]; then
    export PATH="${JAVA_HOME}/bin:${PATH}"
fi

# Add user-local binaries to PATH (firtool, etc.)
export PATH="$HOME/.local/bin:$PATH"

# Rocket Chip specific environment variables
export ROCKET_CHIP_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/../tools/rocket-chip" && pwd)"

echo "Rocket Chip environment loaded"
echo "JAVA_HOME: ${JAVA_HOME:-<unset>}"
echo "ROCKET_CHIP_DIR: $ROCKET_CHIP_DIR"
