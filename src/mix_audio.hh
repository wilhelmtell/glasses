#ifndef GLS_MIX_AUDIO_HH_
#define GLS_MIX_AUDIO_HH_

#include "logical_scope_guard.hh"
#include <SDL2/SDL_mixer.h>

namespace gls {
struct mix_audio {
  mix_audio(int const& frequency,
            Uint16 const& format,
            int const& channels,
            int chunksize);

private:
  logical_scope_guard guard;
};
}

#endif
