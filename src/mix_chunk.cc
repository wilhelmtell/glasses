#include "mix_chunk.hh"
#include "mix_chunk_open_error.hh"
#include <SDL2/SDL_mixer.h>
#include "wav_filename.hh"
#include "flac_filename.hh"

namespace gls {
mix_chunk::mix_chunk(Mix_Chunk* chunk) : c(chunk, &Mix_FreeChunk) {
  if(c == nullptr) throw mix_chunk_open_error(Mix_GetError());
}

mix_chunk::mix_chunk(wav_filename const& name)
: mix_chunk(Mix_LoadWAV(name.c_str())) {}

mix_chunk::mix_chunk(flac_filename const& name)
: mix_chunk(Mix_LoadWAV(name.c_str())) {}

Mix_Chunk* mix_chunk::get() const { return c.get(); }
}
