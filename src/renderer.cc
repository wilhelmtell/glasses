#include "renderer.hh"

namespace gls {
SDL_Renderer* renderer::get() const { return r.get(); }
}
