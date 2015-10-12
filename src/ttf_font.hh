#ifndef GLS_TTF_FONT_HH_
#define GLS_TTF_FONT_HH_

#include <memory>
#include <SDL2/SDL_ttf.h>
#include <cstddef>
#include "ttf_filename_fwd.hh"
#include "otf_filename_fwd.hh"

namespace gls {
struct ttf_font {
  ttf_font() = default;
  explicit ttf_font(TTF_Font* font);
  ttf_font(ttf_filename const& name, std::size_t const& size);
  ttf_font(otf_filename const& name, std::size_t const& size);

  TTF_Font* get() const;

private:
  using pointer = std::unique_ptr<TTF_Font, decltype(&TTF_CloseFont)>;
  pointer f;
};
}

#endif
