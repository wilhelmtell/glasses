#include "title.hh"
#include <utility>

namespace tls {
title::title(char const* t) : t(std::move(t)) {}

char const* title::c_str() const { return t; }
}
