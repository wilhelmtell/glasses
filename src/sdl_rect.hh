#ifndef GLS_SDL_RECT_HH_
#define GLS_SDL_RECT_HH_

#include <SDL2/SDL.h>

namespace gls {
bool at(SDL_Rect const& r, SDL_Point const& p);
SDL_Rect unit_rectangle();
SDL_Rect xstretched(SDL_Rect const& r, int const& addition);
SDL_Rect ystretched(SDL_Rect const& r, int const& addition);
bool intersect(SDL_Rect const& a, SDL_Rect const& b);
bool outside(SDL_Rect const& a, SDL_Rect const& b);
SDL_Point top_left(SDL_Rect const& r);
SDL_Point bottom_right(SDL_Rect const& r);
SDL_Point top_right(SDL_Rect const& r);
SDL_Point bottom_left(SDL_Rect const& r);
SDL_Rect q1_rectangle();
SDL_Rect q2_rectangle();
SDL_Rect q3_rectangle();
SDL_Rect q4_rectangle();
SDL_Rect shifted_left(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_right(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_up(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_down(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_up_left(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_up_right(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_down_left(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_down_right(SDL_Rect const& r, int const& offset);
SDL_Rect to_sdl_rect(SDL_Rect const& r);
}

#endif
