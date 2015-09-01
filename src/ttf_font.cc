#include "ttf_font.hh"
#include "ttf_font_open_error.hh"
#include <SDL2/SDL_ttf.h>
#include <cstddef>

namespace tls {
ttf_font::ttf_font(char const * const name, std::size_t const& size)
: f{TTF_OpenFont(name, size), TTF_CloseFont} {
  if(f == nullptr) throw ttf_font_open_error{TTF_GetError()};
}

TTF_Font* ttf_font::get() const { return f.get(); }
}
