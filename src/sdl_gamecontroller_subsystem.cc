#include "sdl_gamecontroller_subsystem.hh"
#include <SDL2/SDL.h>
#include "sdl_subsystem_init_error.hh"

namespace tls {
sdl_gamecontroller_subsystem::sdl_gamecontroller_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER) < 0)
    throw sdl_subsystem_init_error(SDL_GetError());
}
}
