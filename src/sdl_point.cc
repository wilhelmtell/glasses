#include "sdl_point.hh"
#include <SDL2/SDL_rect.h>
#include <utility>

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
bool equal(SDL_Point const& lhs, SDL_Point const& rhs) {
  return lhs.x == rhs.x && lhs.y == rhs.y;
}

bool not_equal(SDL_Point const& lhs, SDL_Point const& rhs) {
  return !equal(lhs, rhs);
}

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

SDL_Point origin_point() { return SDL_Point{}; }

SDL_Point shifted_up(SDL_Point const& p, int const& offset) {
  return {p.x, p.y - offset};
}

SDL_Point shifted_down(SDL_Point const& p, int const& offset) {
  return {p.x, p.y + offset};
}

SDL_Point shifted_left(SDL_Point const& p, int const& offset) {
  return {p.x - offset, p.y};
}

SDL_Point shifted_right(SDL_Point const& p, int const& offset) {
  return {p.x + offset, p.y};
}

SDL_Point shifted_down_left(SDL_Point const& p, int const& offset) {
  return {p.x - offset, p.y + offset};
}

SDL_Point shifted_down_right(SDL_Point const& p, int const& offset) {
  return {p.x + offset, p.y + offset};
}

SDL_Point shifted_up_left(SDL_Point const& p, int const& offset) {
  return {p.x - offset, p.y - offset};
}

SDL_Point shifted_up_right(SDL_Point const& p, int const& offset) {
  return {p.x + offset, p.y - offset};
}
}
