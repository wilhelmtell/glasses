#include "sdl_rect.hh"
#include "sdl_point.hh"
#include "sdl_rect_point_common.hh"
#include <SDL2/SDL.h>
#include <utility>

namespace gls {
SDL_Rect unit_rectangle() { return {0, 0, 1, 1}; }

SDL_Rect q1_rectangle() {
  auto const p = shifted_left(origin_point(), 1);
  auto const r = unit_rectangle();
  return {p.x, p.y, r.w, r.h};
}

SDL_Rect q2_rectangle() {
  auto const p = origin_point();
  auto const r = unit_rectangle();
  return {p.x, p.y, r.w, r.h};
}

SDL_Rect q3_rectangle() {
  auto const p = shifted_up(origin_point(), 1);
  auto const r = unit_rectangle();
  return {p.x, p.y, r.w, r.h};
}

SDL_Rect q4_rectangle() {
  auto const p = shifted_up_left(origin_point(), 1);
  auto const r = unit_rectangle();
  return {p.x, p.y, r.w, r.h};
}

bool inside(SDL_Rect const& a, SDL_Rect const& b) {
  return inside(top_left(a), b) && inside(bottom_right(a), b)
         && inside(bottom_left(a), b) && inside(top_right(a), b);
}

bool outside(SDL_Rect const& a, SDL_Rect const& b) {
  return outside(top_left(a), b) && outside(bottom_right(a), b)
         && outside(top_right(a), b) && outside(bottom_left(a), b);
}

bool intersect(SDL_Rect const& a, SDL_Rect const& b) {
  return !outside(a, b) || !outside(b, a);
}

SDL_Rect wstretched(SDL_Rect const& r, int const& addition) {
  return {r.x, r.y, r.w + addition, r.h};
}

SDL_Rect hstretched(SDL_Rect const& r, int const& addition) {
  return {r.x, r.y, r.w, r.h + addition};
}

SDL_Rect wcompressed(SDL_Rect const& r, int const& subtraction) {
  return {r.x, r.y, r.w - subtraction, r.h};
}

SDL_Rect hcompressed(SDL_Rect const& r, int const& subtraction) {
  return {r.x, r.y, r.w, r.h - subtraction};
}

SDL_Rect shifted_left(SDL_Rect const& r, int const& offset) {
  auto const p = shifted_left(top_left(r), offset);
  return {p.x, p.y, r.w, r.h};
}

SDL_Rect shifted_right(SDL_Rect const& r, int const& offset) {
  auto const p = shifted_right(top_left(r), offset);
  return {p.x, p.y, r.w, r.h};
}

SDL_Rect shifted_up(SDL_Rect const& r, int const& offset) {
  auto const p = shifted_up(top_left(r), offset);
  return {p.x, p.y, r.w, r.h};
}

SDL_Rect shifted_down(SDL_Rect const& r, int const& offset) {
  auto const p = shifted_down(top_left(r), offset);
  return {p.x, p.y, r.w, r.h};
}

SDL_Rect shifted_up_left(SDL_Rect const& r, int const& offset) {
  auto const p = shifted_up_left(top_left(r), offset);
  return {p.x, p.y, r.w, r.h};
}

SDL_Rect shifted_up_right(SDL_Rect const& r, int const& offset) {
  auto const p = shifted_up_right(top_left(r), offset);
  return {p.x, p.y, r.w, r.h};
}

SDL_Rect shifted_down_left(SDL_Rect const& r, int const& offset) {
  auto const p = shifted_down_left(top_left(r), offset);
  return {p.x, p.y, r.w, r.h};
}

SDL_Rect shifted_down_right(SDL_Rect const& r, int const& offset) {
  auto const p = shifted_down_right(top_left(r), offset);
  return {p.x, p.y, r.w, r.h};
}
}
