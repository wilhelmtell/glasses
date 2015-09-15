#include "ttf_font.hh"
#include "ttf_font_open_error.hh"
#include <SDL2/SDL_ttf.h>
#include <cstddef>
#include "filename.hh"

namespace gls {
ttf_font::ttf_font(TTF_Font* font) : f(font, &TTF_CloseFont) {}

ttf_font::ttf_font(filename const& name, std::size_t const& size)
: f{TTF_OpenFont(name.c_str(), size), TTF_CloseFont} {
  if(f == nullptr) throw ttf_font_open_error{TTF_GetError()};
}

TTF_Font* ttf_font::get() const { return f.get(); }
}
