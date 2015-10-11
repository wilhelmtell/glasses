#include "ttf_filename.hh"
#include <string>

namespace gls {
ttf_filename::ttf_filename(std::string const& name) : name(name) {}

char const* ttf_filename::c_str() const { return name.c_str(); }
}
