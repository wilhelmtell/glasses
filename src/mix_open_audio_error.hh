#ifndef GLS_MIX_OPEN_AUDIO_ERROR_HH_
#define GLS_MIX_OPEN_AUDIO_ERROR_HH_

#include <stdexcept>

namespace gls {
struct mix_open_audio_error : std::runtime_error {
  mix_open_audio_error() = default;
  explicit mix_open_audio_error(char const* const m);
};
}

#endif
