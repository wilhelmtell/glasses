#include "png_filename.hh"
#include <string>

namespace gls {
png_filename::png_filename(std::string const& name) : name(name) {}

char const* png_filename::c_str() const { return name.c_str(); }
}
