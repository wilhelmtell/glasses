#include "haptic_subsystem.hh"
#include <SDL2/SDL.h>
#include "subsystem_init_error.hh"

namespace gls {
haptic_subsystem::haptic_subsystem() {
  if(SDL_InitSubSystem(SDL_INIT_HAPTIC) < 0)
    throw subsystem_init_error(SDL_GetError());
}
}
