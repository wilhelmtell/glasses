#include "filename.hh"

namespace gls {
filename::filename(char const* name) : name(name) {}

char const* filename::c_str() const { return name; }
}
