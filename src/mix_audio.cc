#include "mix_audio.hh"
#include <SDL2/SDL_mixer.h>
#include "logical_cleanup.hh"
#include "logical_init.hh"
#include "mix_open_audio_error.hh"

namespace {
void open_audio_or_throw(int const& frequency,
                         Uint16 const& format,
                         int const& channels,
                         int chunksize) {
  if(Mix_OpenAudio(frequency, format, channels, chunksize) < 0)
    throw gls::mix_open_audio_error(Mix_GetError());
}
}

namespace gls {
mix_audio::mix_audio(int const& frequency,
                     Uint16 const& format,
                     int const& channels,
                     int chunksize)
: guard(logical_init([&] {
  open_audio_or_throw(frequency, format, channels, chunksize);
}),
        logical_cleanup(&Mix_CloseAudio)) {}
}
