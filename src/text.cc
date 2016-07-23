#include "text.hh"

namespace gls {
text::text(char const* t) : t(t) {}

char const* text::c_str() const { return t; }
}  // namespace gls
