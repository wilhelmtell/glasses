#include "audio_subsystem.hh"
#include <SDL2/SDL.h>
#include "subsystem_init_error.hh"

namespace gls {
audio_subsystem::audio_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_AUDIO) < 0)
    throw subsystem_init_error(SDL_GetError());
}
}
