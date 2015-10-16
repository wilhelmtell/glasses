#include <catch/catch.hpp>
#include "../src/sdl_rect_point_common.hh"
#include "../src/sdl_point.hh"
#include "../src/sdl_rect.hh"

TEST_CASE("at()") {
  auto const p = gls::origin_point();
  SECTION("true at()") {
    auto const r = gls::unit_rectangle();
    REQUIRE(gls::at(r, p));
  }
  SECTION("false at()") {
    SDL_Rect const r{1, 1, 1, 1};
    REQUIRE(!gls::at(r, p));
  }
  SECTION("point inside rect is not at() rect") {
    SDL_Rect const r{-1, -1, 2, 2};
    REQUIRE(!gls::at(r, p));
  }
  SECTION("point merely bounding with rect is not at() rect") {
    SDL_Rect const r{0, -1, 2, 2};
    REQUIRE(!gls::at(r, p));
  }
}
