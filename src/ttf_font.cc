#include "ttf_font.hh"
#include "otf_filename.hh"
#include "ttf_filename.hh"
#include "ttf_font_open_error.hh"
#include <SDL2/SDL_ttf.h>
#include <cstddef>

namespace gls {
ttf_font::ttf_font() : f{nullptr, [](TTF_Font*) {}} {}

ttf_font::ttf_font(TTF_Font* font) : f(font, &TTF_CloseFont) {
  if(f == nullptr) throw ttf_font_open_error(TTF_GetError());
}

ttf_font::ttf_font(ttf_filename const& name, std::size_t const& size)
: ttf_font(TTF_OpenFont(name.c_str(), size)) {}

ttf_font::ttf_font(otf_filename const& name, std::size_t const& size)
: ttf_font(TTF_OpenFont(name.c_str(), size)) {}

TTF_Font* ttf_font::get() const { return f.get(); }
}  // namespace gls
