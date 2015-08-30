#include "sdl_video_subsystem.hh"
#include <SDL2/SDL.h>
#include "sdl_subsystem_init_error.hh"

namespace tls {
sdl_video_subsystem::sdl_video_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_VIDEO) < 0)
    throw sdl_subsystem_init_error(SDL_GetError());
}
}
