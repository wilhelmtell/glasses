#include "mix_chunk_open_error.hh"
#include <stdexcept>

namespace gls {
mix_chunk_open_error::mix_chunk_open_error(char const* const m)
: std::runtime_error(m) {}
}  // namespace gls
