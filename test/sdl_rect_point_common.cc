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

TEST_CASE("inside(point, rect)") {
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

TEST_CASE("bounding_on_top()") {
  SDL_Rect const r{0, 0, 4, 4};
  SECTION("point on top bound is bounding_on_top()") {
    auto const p = gls::shifted_right(gls::top_left(r), 1);
    REQUIRE(gls::bounding_on_top(p, r));
  }
  SECTION("point on bottom bound is not bounding_on_top()") {
    auto const p = gls::shifted_left(gls::bottom_right(r), 1);
    REQUIRE(!gls::bounding_on_top(p, r));
  }
  SECTION("point on left bound is not bounding_on_top()") {
    auto const p = gls::shifted_down(gls::top_left(r), 1);
    REQUIRE(!gls::bounding_on_top(p, r));
  }
  SECTION("point on right bound is not bounding_on_top()") {
    auto const p = gls::shifted_up(gls::bottom_right(r), 1);
    REQUIRE(!gls::bounding_on_top(p, r));
  }
  SECTION("top left point is bounding_on_top()") {
    auto const p = gls::top_left(r);
    REQUIRE(gls::bounding_on_top(p, r));
  }
  SECTION("top right point is bounding_on_top()") {
    auto const p = gls::top_right(r);
    REQUIRE(gls::bounding_on_top(p, r));
  }
  SECTION("bottom left point is not bounding_on_top()") {
    auto const p = gls::bottom_left(r);
    REQUIRE(!gls::bounding_on_top(p, r));
  }
  SECTION("bottom right point is not bounding_on_top()") {
    auto const p = gls::bottom_right(r);
    REQUIRE(!gls::bounding_on_top(p, r));
  }
  SECTION("point outside is not bounding_on_top()") {
    auto const top_left = gls::top_left(r);
    auto const p = gls::shifted_left(gls::shifted_up(top_left, 1), 1);
    REQUIRE(!gls::bounding_on_top(p, r));
  }
  SECTION("point inside is not bounding_on_top()") {
    auto const top_left = gls::top_left(r);
    auto const p = gls::shifted_right(gls::shifted_down(top_left, 1), 1);
    REQUIRE(!gls::bounding_on_top(p, r));
  }
}

TEST_CASE("bounding_on_right()") {
  SDL_Rect const r{0, 0, 4, 4};
  SECTION("point on top bound is not bounding_on_right()") {
    auto const p = gls::shifted_right(gls::top_left(r), 1);
    REQUIRE(!gls::bounding_on_right(p, r));
  }
  SECTION("point on bottom bound is not bounding_on_right()") {
    auto const p = gls::shifted_left(gls::bottom_right(r), 1);
    REQUIRE(!gls::bounding_on_right(p, r));
  }
  SECTION("point on left bound is not bounding_on_right()") {
    auto const p = gls::shifted_down(gls::top_left(r), 1);
    REQUIRE(!gls::bounding_on_right(p, r));
  }
  SECTION("point on right bound is bounding_on_right()") {
    auto const p = gls::shifted_up(gls::bottom_right(r), 1);
    REQUIRE(gls::bounding_on_right(p, r));
  }
  SECTION("top left point is not bounding_on_right()") {
    auto const p = gls::top_left(r);
    REQUIRE(!gls::bounding_on_right(p, r));
  }
  SECTION("top right point is bounding_on_right()") {
    auto const p = gls::top_right(r);
    REQUIRE(gls::bounding_on_right(p, r));
  }
  SECTION("bottom left point is not bounding_on_right()") {
    auto const p = gls::bottom_left(r);
    REQUIRE(!gls::bounding_on_right(p, r));
  }
  SECTION("bottom right point is bounding_on_right()") {
    auto const p = gls::bottom_right(r);
    REQUIRE(gls::bounding_on_right(p, r));
  }
  SECTION("point outside is not bounding_on_right()") {
    auto const top_left = gls::top_left(r);
    auto const p = gls::shifted_left(gls::shifted_up(top_left, 1), 1);
    REQUIRE(!gls::bounding_on_right(p, r));
  }
  SECTION("point inside is not bounding_on_right()") {
    auto const top_left = gls::top_left(r);
    auto const p = gls::shifted_right(gls::shifted_down(top_left, 1), 1);
    REQUIRE(!gls::bounding_on_right(p, r));
  }
}

TEST_CASE("bounding_on_bottom()") {
  SDL_Rect const r{0, 0, 4, 4};
  SECTION("point on top bound is not bounding_on_bottom()") {
    auto const p = gls::shifted_right(gls::top_left(r), 1);
    REQUIRE(!gls::bounding_on_bottom(p, r));
  }
  SECTION("point on bottom bound is bounding_on_bottom()") {
    auto const p = gls::shifted_left(gls::bottom_right(r), 1);
    REQUIRE(gls::bounding_on_bottom(p, r));
  }
  SECTION("point on left bound is not bounding_on_bottom()") {
    auto const p = gls::shifted_down(gls::top_left(r), 1);
    REQUIRE(!gls::bounding_on_bottom(p, r));
  }
  SECTION("point on right bound is not bounding_on_bottom()") {
    auto const p = gls::shifted_up(gls::bottom_right(r), 1);
    REQUIRE(!gls::bounding_on_bottom(p, r));
  }
  SECTION("top left point is not bounding_on_bottom()") {
    auto const p = gls::top_left(r);
    REQUIRE(!gls::bounding_on_bottom(p, r));
  }
  SECTION("top right point is not bounding_on_bottom()") {
    auto const p = gls::top_right(r);
    REQUIRE(!gls::bounding_on_bottom(p, r));
  }
  SECTION("bottom left point is bounding_on_bottom()") {
    auto const p = gls::bottom_left(r);
    REQUIRE(gls::bounding_on_bottom(p, r));
  }
  SECTION("bottom right point is bounding_on_bottom()") {
    auto const p = gls::bottom_right(r);
    REQUIRE(gls::bounding_on_bottom(p, r));
  }
  SECTION("point outside is not bounding_on_bottom()") {
    auto const top_left = gls::top_left(r);
    auto const p = gls::shifted_left(gls::shifted_up(top_left, 1), 1);
    REQUIRE(!gls::bounding_on_bottom(p, r));
  }
  SECTION("point inside is not bounding_on_bottom()") {
    auto const top_left = gls::top_left(r);
    auto const p = gls::shifted_right(gls::shifted_down(top_left, 1), 1);
    REQUIRE(!gls::bounding_on_bottom(p, r));
  }
}

TEST_CASE("bounding_on_left()") {
  SDL_Rect const r{0, 0, 4, 4};
  SECTION("point on top bound is not bounding_on_left()") {
    auto const p = gls::shifted_right(gls::top_left(r), 1);
    REQUIRE(!gls::bounding_on_left(p, r));
  }
  SECTION("point on bottom bound is not bounding_on_left()") {
    auto const p = gls::shifted_left(gls::bottom_right(r), 1);
    REQUIRE(!gls::bounding_on_left(p, r));
  }
  SECTION("point on left bound is bounding_on_left()") {
    auto const p = gls::shifted_down(gls::top_left(r), 1);
    REQUIRE(gls::bounding_on_left(p, r));
  }
  SECTION("point on right bound is not bounding_on_left()") {
    auto const p = gls::shifted_up(gls::bottom_right(r), 1);
    REQUIRE(!gls::bounding_on_left(p, r));
  }
  SECTION("top left point is bounding_on_left()") {
    auto const p = gls::top_left(r);
    REQUIRE(gls::bounding_on_left(p, r));
  }
  SECTION("top right point is not bounding_on_left()") {
    auto const p = gls::top_right(r);
    REQUIRE(!gls::bounding_on_left(p, r));
  }
  SECTION("bottom left point is bounding_on_left()") {
    auto const p = gls::bottom_left(r);
    REQUIRE(gls::bounding_on_left(p, r));
  }
  SECTION("bottom right point is not bounding_on_left()") {
    auto const p = gls::bottom_right(r);
    REQUIRE(!gls::bounding_on_left(p, r));
  }
  SECTION("point outside is not bounding_on_left()") {
    auto const top_left = gls::top_left(r);
    auto const p = gls::shifted_left(gls::shifted_up(top_left, 1), 1);
    REQUIRE(!gls::bounding_on_left(p, r));
  }
  SECTION("point inside is not bounding_on_left()") {
    auto const top_left = gls::top_left(r);
    auto const p = gls::shifted_right(gls::shifted_down(top_left, 1), 1);
    REQUIRE(!gls::bounding_on_left(p, r));
  }
}
