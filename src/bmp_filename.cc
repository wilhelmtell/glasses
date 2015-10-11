#include "bmp_filename.hh"
#include <string>

namespace gls {
bmp_filename::bmp_filename(std::string const& name) : name(name) {}

char const* bmp_filename::c_str() const { return name.c_str(); }
}
