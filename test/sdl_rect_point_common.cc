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

TEST_CASE("inside()") {
  SDL_Point const p{1, 1};
  SECTION("true point inside() rect") {
    SDL_Rect const r{0, 0, 2, 2};
    REQUIRE(gls::inside(p, r));
  }
  SECTION("false point inside() rect") {
    SDL_Rect const r{2, 2, 2, 2};
    REQUIRE(!gls::inside(p, r));
  }
  SECTION("point merely bounding with rect is not inside() rect") {
    SDL_Rect const r{1, 0, 2, 2};
    REQUIRE(!gls::inside(p, r));
  }
}

TEST_CASE("outside()") {
  SDL_Point const p{1, 1};
  SECTION("true point outside() rect") {
    SDL_Rect const r{2, 2, 2, 2};
    REQUIRE(gls::outside(p, r));
  }
  SECTION("false point outside() rect") {
    SDL_Rect const r{0, 0, 2, 2};
    REQUIRE(!gls::outside(p, r));
  }
  SECTION("point merely bounding with rect is not outside() rect") {
    SDL_Rect const r{1, 0, 2, 2};
    REQUIRE(!gls::outside(p, r));
  }
}
