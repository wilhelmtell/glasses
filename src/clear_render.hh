#ifndef GLS_CLEAR_RENDER_HH_
#define GLS_CLEAR_RENDER_HH_

#include "logical_scope_guard.hh"
#include "renderer_fwd.hh"
#include <SDL2/SDL.h>

namespace gls {
struct clear_render {
  clear_render() = default;
  explicit clear_render(SDL_Renderer* renderer);

private:
  logical_scope_guard guard;
};
}

#endif
