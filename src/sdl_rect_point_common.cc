#include <SDL2/SDL_rect.h>
#include "sdl_rect_point_common.hh"
#include "sdl_point.hh"
#include "sdl_rect.hh"

namespace {
bool bounding_top(SDL_Point const& p, SDL_Rect const& b) {
  return p.x >= b.x && p.x <= b.x + b.w && p.y == b.y;
}

bool bounding_right(SDL_Point const& p, SDL_Rect const& b) {
  return p.x == b.x + b.w && p.y >= b.y && p.y <= b.y + b.h;
}

bool bounding_bottom(SDL_Point const& p, SDL_Rect const& b) {
  return p.x >= b.x && p.x <= b.x + b.w && p.y == b.y + b.h;
}

bool bounding_left(SDL_Point const& p, SDL_Rect const& b) {
  return p.x == b.x && p.y >= b.y && p.y <= b.y + b.h;
}
}

namespace gls {
bool bounding(SDL_Point const& p, SDL_Rect const& b) {
  return bounding_top(p, b) || bounding_right(p, b) || bounding_bottom(p, b)
         || bounding_left(p, b);
}

bool outside(SDL_Point const& p, SDL_Rect const& b) {
  return p.x < b.x || p.x > b.x + b.w || p.y < b.y || p.y > b.y + b.h;
}

bool inside(SDL_Point const& p, SDL_Rect const& b) {
  return !outside(p, b) && !bounding(p, b);
}

bool at(SDL_Rect const& r, SDL_Point const& p) {
  return r.x == p.x && r.y == p.y;
}

SDL_Point top_left(SDL_Rect const& r) { return {r.x, r.y}; }

SDL_Point bottom_right(SDL_Rect const& r) { return {r.x + r.w, r.y + r.h}; }

SDL_Point top_right(SDL_Rect const& r) { return {r.x + r.w, r.y}; }

SDL_Point bottom_left(SDL_Rect const& r) { return {r.x, r.y + r.h}; }
}
