#include <catch/catch.hpp>
#include "../src/sdl_rect_point_common.hh"
#include "../src/sdl_point.hh"
#include "../src/sdl_rect.hh"

TEST_CASE("top_left()") {
  auto const p = gls::top_left(gls::unit_rectangle());
  REQUIRE(p.x == 0);
  REQUIRE(p.y == 0);
}

TEST_CASE("top_right()") {
  auto const p = gls::top_right(gls::unit_rectangle());
  REQUIRE(p.x == 1);
  REQUIRE(p.y == 0);
}

TEST_CASE("bottom_left()") {
  auto const p = gls::bottom_left(gls::unit_rectangle());
  REQUIRE(p.x == 0);
  REQUIRE(p.y == 1);
}

TEST_CASE("bottom_right()") {
  auto const p = gls::bottom_right(gls::unit_rectangle());
  REQUIRE(p.x == 1);
  REQUIRE(p.y == 1);
}

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

TEST_CASE("bounding()") {
  SDL_Point const p{1, 1};
  SECTION("point bounding() rect on the left") {
    SDL_Rect const r{1, 0, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the right") {
    SDL_Rect const r{-1, 0, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the top") {
    SDL_Rect const r{0, 1, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the bottom") {
    SDL_Rect const r{0, -1, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the top left") {
    SDL_Rect const r{1, 1, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the top right") {
    SDL_Rect const r{-1, 1, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the bottom left") {
    SDL_Rect const r{1, -1, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the bottom right") {
    SDL_Rect const r{-1, -1, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point outside rect is not bounding() with rect") {
    SDL_Rect const r{2, 2, 2, 2};
    REQUIRE(!gls::bounding(p, r));
  }
  SECTION("point inside rect is not bounding() with rect") {
    SDL_Rect const r{2, 2, 2, 2};
    REQUIRE(!gls::bounding(p, r));
  }
}
