#include "sdl_events_subsystem.hh"
#include <SDL2/SDL.h>
#include "sdl_subsystem_init_error.hh"

namespace tls {
sdl_events_subsystem::sdl_events_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_EVENTS) < 0)
    throw sdl_subsystem_init_error(SDL_GetError());
}
}
