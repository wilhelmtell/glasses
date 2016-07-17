#ifndef GLS_MIX_CHUNK_HH_
#define GLS_MIX_CHUNK_HH_

#include "wav_filename_fwd.hh"
#include <SDL2/SDL_mixer.h>
#include <memory>

namespace gls {
struct mix_chunk {
  mix_chunk();
  mix_chunk(Mix_Chunk* chunk);
  explicit mix_chunk(wav_filename const& name);

  Mix_Chunk* get() const;

private:
  using pointer = std::unique_ptr<Mix_Chunk, decltype(&Mix_FreeChunk)>;
  pointer c;
};
}

#endif
