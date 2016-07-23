#include "ttf_font_open_error.hh"
#include <stdexcept>

namespace gls {
ttf_font_open_error::ttf_font_open_error(char const* const m)
: std::runtime_error(m) {}
}  // namespace gls
