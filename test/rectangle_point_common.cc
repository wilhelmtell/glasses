#include <catch/catch.hpp>
#include "../src/rectangle_point_common.hh"
#include "../src/point.hh"
#include "../src/rectangle.hh"

TEST_CASE("top_left()") {
  auto const p = gls::top_left(gls::unit_rectangle<float>());
  REQUIRE(p.x == 0);
  REQUIRE(p.y == 0);
}

TEST_CASE("top_right()") {
  auto const p = gls::top_right(gls::unit_rectangle<float>());
  REQUIRE(p.x == 1);
  REQUIRE(p.y == 0);
}

TEST_CASE("bottom_left()") {
  auto const p = gls::bottom_left(gls::unit_rectangle<float>());
  REQUIRE(p.x == 0);
  REQUIRE(p.y == 1);
}

TEST_CASE("bottom_right()") {
  auto const p = gls::bottom_right(gls::unit_rectangle<float>());
  REQUIRE(p.x == 1);
  REQUIRE(p.y == 1);
}

TEST_CASE("at()") {
  auto const p = gls::origin_point<float>();
  SECTION("true at()") {
    auto const r = gls::unit_rectangle<float>();
    REQUIRE(gls::at(r, p));
  }
  SECTION("false at()") {
    gls::rectangle<float> const r{1, 1, 1, 1};
    REQUIRE(!gls::at(r, p));
  }
  SECTION("point inside rect is not at() rect") {
    gls::rectangle<float> const r{-1, -1, 2, 2};
    REQUIRE(!gls::at(r, p));
  }
  SECTION("point merely bounding with rect is not at() rect") {
    gls::rectangle<float> const r{0, -1, 2, 2};
    REQUIRE(!gls::at(r, p));
  }
}

TEST_CASE("inside(point, rect)") {
  gls::point<float> const p{1, 1};
  SECTION("true point inside() rect") {
    gls::rectangle<float> const r{0, 0, 2, 2};
    REQUIRE(gls::inside(p, r));
  }
  SECTION("false point inside() rect") {
    gls::rectangle<float> const r{2, 2, 2, 2};
    REQUIRE(!gls::inside(p, r));
  }
  SECTION("point bounding with rect is inside() rect") {
    gls::rectangle<float> const r{1, 0, 2, 2};
    REQUIRE(gls::inside(p, r));
  }
}

TEST_CASE("outside()") {
  gls::point<float> const p{1, 1};
  SECTION("true point outside() rect") {
    gls::rectangle<float> const r{2, 2, 2, 2};
    REQUIRE(gls::outside(p, r));
  }
  SECTION("false point outside() rect") {
    gls::rectangle<float> const r{0, 0, 2, 2};
    REQUIRE(!gls::outside(p, r));
  }
  SECTION("point merely bounding with rect is not outside() rect") {
    gls::rectangle<float> const r{1, 0, 2, 2};
    REQUIRE(!gls::outside(p, r));
  }
}

TEST_CASE("bounding()") {
  gls::point<float> const p{1, 1};
  SECTION("point bounding() rect on the left") {
    gls::rectangle<float> const r{1, 0, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the right") {
    gls::rectangle<float> const r{-1, 0, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the top") {
    gls::rectangle<float> const r{0, 1, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the bottom") {
    gls::rectangle<float> const r{0, -1, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the top left") {
    gls::rectangle<float> const r{1, 1, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the top right") {
    gls::rectangle<float> const r{-1, 1, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the bottom left") {
    gls::rectangle<float> const r{1, -1, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point bounding() rect on the bottom right") {
    gls::rectangle<float> const r{-1, -1, 2, 2};
    REQUIRE(gls::bounding(p, r));
  }
  SECTION("point outside rect is not bounding() with rect") {
    gls::rectangle<float> const r{2, 2, 2, 2};
    REQUIRE(!gls::bounding(p, r));
  }
  SECTION("point inside rect is not bounding() with rect") {
    gls::rectangle<float> const r{2, 2, 2, 2};
    REQUIRE(!gls::bounding(p, r));
  }
}

TEST_CASE("bounding_on_top()") {
  gls::rectangle<float> const r{0, 0, 4, 4};
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
  gls::rectangle<float> const r{0, 0, 4, 4};
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
  gls::rectangle<float> const r{0, 0, 4, 4};
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
  gls::rectangle<float> const r{0, 0, 4, 4};
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
