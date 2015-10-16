#ifndef GLS_SDL_RECT_HH_
#define GLS_SDL_RECT_HH_

#include <SDL2/SDL_rect.h>
#include "sdl_rect_point_common.hh"

namespace gls {
SDL_Rect unit_rectangle();
SDL_Rect q1_rectangle();
SDL_Rect q2_rectangle();
SDL_Rect q3_rectangle();
SDL_Rect q4_rectangle();
bool intersect(SDL_Rect const& a, SDL_Rect const& b);
bool outside(SDL_Rect const& a, SDL_Rect const& b);
SDL_Rect wstretched(SDL_Rect const& r, int const& addition);
SDL_Rect hstretched(SDL_Rect const& r, int const& addition);
SDL_Rect wcompressed(SDL_Rect const& r, int const& subtraction);
SDL_Rect hcompressed(SDL_Rect const& r, int const& subtraction);
SDL_Rect shifted_left(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_right(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_up(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_down(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_up_left(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_up_right(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_down_left(SDL_Rect const& r, int const& offset);
SDL_Rect shifted_down_right(SDL_Rect const& r, int const& offset);
}

#endif
