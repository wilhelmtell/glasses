#!/bin/bash

PREFIX="$HOME/usr/local/stow/$(basename $(pwd))"
CXX=clang++-3.7
COMMON_CXXFLAGS="-std=c++14 -stdlib=libc++"
AR=ar
ARFLAGS=rcs
GIT_CLEAN_FLAGS="-qfdx -e '.sw[op]' -e '.*.sw[op]'"

# install debug and release glasses
cd ~/Development/glasses &&
  git clean "$GIT_CLEAN_FLAGS" &&
  make AR="$AR" ARFLAGS="$ARFLAGS" CXX="$CXX" CXXFLAGS="$COMMON_CXXFLAGS -Wall -Wextra -pedantic -g -O0" OUT_SUFFIX=d PREFIX="$PREFIX" -j2 install &&
  git clean "$GIT_CLEAN_FLAGS" &&
  make AR="$AR" ARFLAGS="$ARFLAGS" CXX="$CXX" CXXFLAGS="$COMMON_CXXFLAGS -O2" PREFIX="$PREFIX" -j2 install &&
  git clean "$GIT_CLEAN_FLAGS"
