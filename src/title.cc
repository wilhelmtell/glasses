#include "title.hh"
#include <utility>

namespace gls {
title::title(char const* t) : t(std::move(t)) {}

char const* title::c_str() const { return t.c_str(); }
}  // namespace gls
