#ifndef GLS_SDL_RECT_POINT_COMMON_HH_
#define GLS_SDL_RECT_POINT_COMMON_HH_

#include <SDL2/SDL_rect.h>

namespace gls {
bool bounding(SDL_Point const& p, SDL_Rect const& b);
bool outside(SDL_Point const& p, SDL_Rect const& b);
bool inside(SDL_Point const& p, SDL_Rect const& b);
bool at(SDL_Rect const& r, SDL_Point const& p);
SDL_Point top_left(SDL_Rect const& r);
SDL_Point bottom_right(SDL_Rect const& r);
SDL_Point top_right(SDL_Rect const& r);
SDL_Point bottom_left(SDL_Rect const& r);
}

#endif
