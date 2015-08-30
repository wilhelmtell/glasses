#include "video_subsystem.hh"
#include <SDL2/SDL.h>
#include "subsystem_init_error.hh"

namespace tls {
video_subsystem::video_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_VIDEO) < 0)
    throw subsystem_init_error(SDL_GetError());
}
}
