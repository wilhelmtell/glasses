#include "png_filename.hh"

namespace gls {
png_filename::png_filename(char const* name) : name(name) {}

char const* png_filename::c_str() const { return name.c_str(); }
}
