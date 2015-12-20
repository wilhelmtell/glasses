#!/usr/bin/env bash

SCRIPT_PATHNAME="$(cd $(dirname "$0") && pwd)"
SCRIPT_BASENAME="$(basename "$0")"
ROOT_PATHNAME="$(dirname "$SCRIPT_PATHNAME")"
SRC_DIR="src"
SRC_PATHNAME="$ROOT_PATHNAME/$SRC_DIR"
NAMESPACE=gls
INCLUDE_GUARD_PREFIX=$(echo $NAMESPACE |tr a-z A-Z)
CLANG_FORMAT=clang-format-3.7

add_fwd_hh() {
  local name=$1
  local name_upcase=$(echo -n $name |tr a-z A-Z)
  cat <<EOF |"$CLANG_FORMAT"
#ifndef ${INCLUDE_GUARD_PREFIX}_${name_upcase}_FWD_HH_
#define ${INCLUDE_GUARD_PREFIX}_${name_upcase}_FWD_HH_

namespace $NAMESPACE {
struct $name;
}

#endif
EOF
}

add_hh() {
  local name=$1
  local name_upcase=$(echo -n $name |tr a-z A-Z)
  cat <<EOF |"$CLANG_FORMAT"
#ifndef ${INCLUDE_GUARD_PREFIX}_${name_upcase}_HH_
#define ${INCLUDE_GUARD_PREFIX}_${name_upcase}_HH_

#include "assets_fwd.hh"
#include <glasses/event_dispatch_fwd.hh>
#include <SDL2/SDL.h>

namespace $NAMESPACE {
struct $name {
  $name() = default;
  $name(assets const* a, gls::event_dispatch* d, SDL_Window* w);

  void update();
  void draw() const;
};
}

#endif
EOF
}

add_cc() {
  local name=$1
  cat <<EOF |"$CLANG_FORMAT"
#include "$1.hh"
#include "assets_fwd.hh"
#include <glasses/event_dispatch_fwd.hh>
#include <SDL2/SDL.h>

namespace $NAMESPACE {
$name::$name(assets const*, gls::event_dispatch*, SDL_Window*) {}

void $name::update() {}

void $name::draw() const {}
}
EOF
}

add_component() {
  local name="$1"
  add_fwd_hh "$name" >"$SRC_PATHNAME/${name}_fwd.hh"
  add_hh "$name" >"$SRC_PATHNAME/${name}.hh"
  add_cc "$name" >"$SRC_PATHNAME/${name}.cc"
}

verify_input() {
  if ! which "$CLANG_FORMAT" >/dev/null 2>&1;
  then
    echo "error: clang-format binary $CLANG_FORMAT not found" >&2
    false
  elif [ $# -ne 1 ];
  then
    echo "usage: $SCRIPT_BASENAME <component_name>"
    false
  elif [ ! -d "$SRC_PATHNAME" ];
  then
    echo "error: $SRC_DIR directory not found" >&2
    false
  elif ls "$SRC_PATHNAME/${1}_fwd.hh" >/dev/null 2>&1
  then
    echo "error: refusing to overwrite $SRC_DIR/${1}_fwd.hh" >&2
    false
  elif ls "$SRC_PATHNAME/${1}.hh" >/dev/null 2>&1
  then
    echo "error: refusing to overwrite $SRC_DIR/${1}.hh" >&2
    false
  elif ls "$SRC_PATHNAME/${1}.cc" >/dev/null 2>&1
  then
    echo "error: refusing to overwrite $SRC_DIR/${1}.cc" >&2
    false
  elif echo -n "$1" |grep -qv '^[a-z_]\+$';
  then
    echo "error: component name ought to match /^[a-z_]+$/" >&2
    false
  fi
}

verify_input "$@" && add_component "$1"
