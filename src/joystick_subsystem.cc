#include "joystick_subsystem.hh"
#include <SDL2/SDL.h>
#include "subsystem_init_error.hh"

namespace tls {
joystick_subsystem::joystick_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_JOYSTICK) < 0)
    throw subsystem_init_error(SDL_GetError());
}
}
