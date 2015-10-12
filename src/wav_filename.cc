#include "wav_filename.hh"
#include <string>

namespace gls {
wav_filename::wav_filename(std::string const& name) : name(name) {}

char const* wav_filename::c_str() const { return name.c_str(); }
}
