#include "gamecontroller_subsystem.hh"
#include <SDL2/SDL.h>
#include "subsystem_init_error.hh"

namespace tls {
gamecontroller_subsystem::gamecontroller_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER) < 0)
    throw subsystem_init_error(SDL_GetError());
}
}
