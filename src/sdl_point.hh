#ifndef GLS_POINT_HH_
#define GLS_POINT_HH_

#include <SDL2/SDL_rect.h>
#include "sdl_rect_point_common.hh"

namespace gls {
bool equal(SDL_Point const& lhs, SDL_Point const& rhs);
bool not_equal(SDL_Point const& lhs, SDL_Point const& rhs);
SDL_Point origin_point();
SDL_Point shifted_up(SDL_Point const& p, int const& offset);
SDL_Point shifted_down(SDL_Point const& p, int const& offset);
SDL_Point shifted_left(SDL_Point const& p, int const& offset);
SDL_Point shifted_right(SDL_Point const& p, int const& offset);
SDL_Point shifted_down_left(SDL_Point const& p, int const& offset);
SDL_Point shifted_down_right(SDL_Point const& p, int const& offset);
SDL_Point shifted_up_left(SDL_Point const& p, int const& offset);
SDL_Point shifted_up_right(SDL_Point const& p, int const& offset);
}

#endif
