#include "sdl_audio_subsystem.hh"
#include <SDL2/SDL.h>
#include "sdl_subsystem_init_error.hh"

namespace tls {
sdl_audio_subsystem::sdl_audio_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_AUDIO) < 0)
    throw sdl_subsystem_init_error(SDL_GetError());
}
}
