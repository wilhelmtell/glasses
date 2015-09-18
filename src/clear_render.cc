#include "clear_render.hh"
#include "renderer.hh"
#include "logical_init.hh"
#include "logical_cleanup.hh"
#include <SDL2/SDL.h>

namespace gls {
clear_render::clear_render(renderer const& renderer)
: guard(logical_init([&] { SDL_RenderClear(renderer.get()); }),
        logical_cleanup([&] { SDL_RenderPresent(renderer.get()); })) {}
}
