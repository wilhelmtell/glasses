#!/bin/bash

version_string() {
  git describe |perl -pne 's/^v?(\d+(?:\.(?:\d+))*).*/$1/'
}

component_count() {
  echo $(($(tr -dC . <<<"$1" |wc -c) + 1))
}

major_component() {
  if [ $(component_count "$1") -gt 0 ]
  then
    perl -pne 's/^(\d+).*/$1/' <<<"$1"
  fi
}

minor_component() {
  if [ $(component_count "$1") -gt 1 ]
  then
    perl -pne 's/^\d+\.(\d+).*/$1/' <<<"$1"
  fi
}

patch_component() {
  if [ $(component_count "$1") -gt 2 ]
  then
    perl -pne 's/^\d+\.\d+\.(\d+).*/$1/' <<<"$1"
  fi
}

tweak_component() {
  if [ $(component_count "$1") -gt 3 ]
  then
    perl -pne 's/^\d+\.\d+\.\d+\.(\d+).*/$1/' <<<"$1"
  fi
}

version_components() {
  local V_STR="$(version_string)"
  local V=""
  for arg in "$@"
  do
    case "$arg" in
      major)
        V="${V}$(major_component "$V_STR")"
        ;;
      minor)
        V="${V}$(minor_component "$V_STR")"
        ;;
      patch)
        V="${V}$(patch_component "$V_STR")"
        ;;
      tweak)
        V="${V}$(tweak_component "$V_STR")"
        ;;
      *)
        V="${V}${arg}"
        ;;
    esac
  done
  [ -n "$V" ] && echo "$V"
}

version() {
  if [ $# -lt 1 ]
  then
    version_string
  else
    version_components "$@"
  fi
}

version "$@"
