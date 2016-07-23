#include "events_subsystem.hh"
#include "subsystem_init_error.hh"
#include <SDL2/SDL.h>

namespace gls {
events_subsystem::events_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_EVENTS) < 0)
    throw subsystem_init_error(SDL_GetError());
}
}  // namespace gls
