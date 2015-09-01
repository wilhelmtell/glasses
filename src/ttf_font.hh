#ifndef TLS_TTF_FONT_HH_
#define TLS_TTF_FONT_HH_

#include <memory>
#include <SDL2/SDL_ttf.h>
#include <cstddef>
#include "surface_fwd.hh"

namespace tls {
struct ttf_font {
  ttf_font(char const * const name, std::size_t const& size);

  TTF_Font* get() const;

private:
  using pointer = std::unique_ptr<TTF_Font, decltype(&TTF_CloseFont)>;
  pointer f;
};
}

#endif
