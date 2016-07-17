#include "timer_subsystem.hh"
#include "subsystem_init_error.hh"
#include <SDL2/SDL.h>

namespace gls {
timer_subsystem::timer_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_TIMER) < 0)
    throw subsystem_init_error(SDL_GetError());
}
}
