#include "bmp_filename.hh"

namespace gls {
bmp_filename::bmp_filename(char const* name) : name(name) {}

char const* bmp_filename::c_str() const { return name.c_str(); }
}
