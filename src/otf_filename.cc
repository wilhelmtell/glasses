#include "otf_filename.hh"
#include <string>

namespace gls {
otf_filename::otf_filename(std::string const& name) : name(name) {}

char const* otf_filename::c_str() const { return name.c_str(); }
}
