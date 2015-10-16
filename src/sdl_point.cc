#include "sdl_point.hh"
#include <SDL2/SDL_rect.h>
#include <utility>

namespace gls {
bool equal(SDL_Point const& lhs, SDL_Point const& rhs) {
  return lhs.x == rhs.x && lhs.y == rhs.y;
}

bool not_equal(SDL_Point const& lhs, SDL_Point const& rhs) {
  return !equal(lhs, rhs);
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
