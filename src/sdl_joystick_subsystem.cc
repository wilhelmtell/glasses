#include "sdl_joystick_subsystem.hh"
#include <SDL2/SDL.h>
#include "sdl_subsystem_init_error.hh"

namespace tls {
sdl_joystick_subsystem::sdl_joystick_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_JOYSTICK) < 0)
    throw sdl_subsystem_init_error(SDL_GetError());
}
}
