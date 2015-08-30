#include "sdl_timer_subsystem.hh"
#include <SDL2/SDL.h>
#include "sdl_subsystem_init_error.hh"

namespace tls {
sdl_timer_subsystem::sdl_timer_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_TIMER) < 0)
    throw sdl_subsystem_init_error(SDL_GetError());
}
}
