#include "filename.hh"
#include <string>
#include <utility>

namespace gls {
filename::filename(std::string name) : name(std::move(name)) {}

char const* filename::c_str() const { return name.c_str(); }
}
