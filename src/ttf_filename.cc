#include "ttf_filename.hh"

namespace gls {
ttf_filename::ttf_filename(char const* name) : name(name) {}

char const* ttf_filename::c_str() const { return name.c_str(); }
}
