#include "mix_open_audio_error.hh"

namespace gls {
mix_open_audio_error::mix_open_audio_error(char const* const m)
: std::runtime_error(m) {}
}  // namespace gls
