#include "clear_render.hh"
#include "logical_cleanup.hh"
#include "logical_init.hh"
#include <SDL2/SDL.h>

namespace gls {
clear_render::clear_render(SDL_Renderer* renderer)
: guard(logical_init([=] { SDL_RenderClear(renderer); }),
        logical_cleanup([=] { SDL_RenderPresent(renderer); })) {}
}
