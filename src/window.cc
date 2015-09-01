#include "window.hh"
#include <SDL2/SDL.h>
#include "window_creation_error.hh"
#include "rectangle.hh"
#include "point.hh"
#include "dim/width.hh"
#include "dim/height.hh"

namespace tls {
window::window(char const* const title,
               rectangle const& bounds,
               int const& flags)
: w{SDL_CreateWindow(title, bounds.p.x, bounds.p.y, bounds.w, bounds.h, flags),
    &SDL_DestroyWindow} {
  if(w == nullptr) throw window_creation_error(SDL_GetError());
}

window::window(char const* const title,
               dim::width w,
               dim::height h,
               int const& flags)
: window(
    title,
    rectangle(point(SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED), w, h),
    flags) {}

SDL_Window* window::get() const { return w.get(); }
}
