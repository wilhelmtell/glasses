#include <catch/catch.hpp>
#include "../src/sdl_rect.hh"

TEST_CASE("unit_rectangle() returns a 1x1 rect at origin") {
  auto const r = gls::unit_rectangle();
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("q1_rectangle() returns a 1x1 rect in the bottom left quadrant") {
  auto const r = gls::q1_rectangle();
  REQUIRE(r.x == -1);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("q2_rectangle() returns a 1x1 rect in the bottom right quadrant") {
  auto const r = gls::q2_rectangle();
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("q3_rectangle() returns a 1x1 rect in the upper right quadrant") {
  auto const r = gls::q3_rectangle();
  REQUIRE(r.x == 0);
  REQUIRE(r.y == -1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("q4_rectangle() returns a 1x1 rect in the upper left quadrant") {
  auto const r = gls::q4_rectangle();
  REQUIRE(r.x == -1);
  REQUIRE(r.y == -1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("wstretched() returns a rect with w + 1") {
  auto const r = gls::wstretched(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 2);
  REQUIRE(r.h == 1);
}

TEST_CASE("hstretched() returns a rect with h + 1") {
  auto const r = gls::hstretched(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 2);
}

TEST_CASE("wcompressed() returns a rect with w - 1") {
  SDL_Rect const r0{0, 0, 2, 2};
  auto const r = gls::wcompressed(r0, 1);
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 2);
}

TEST_CASE("hcompressed() returns a rect with h - 1") {
  SDL_Rect const r0{0, 0, 2, 2};
  auto const r = gls::hcompressed(r0, 1);
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 2);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_left()") {
  auto const r = gls::shifted_left(gls::unit_rectangle(), 1);
  REQUIRE(r.x == -1);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_right()") {
  auto const r = gls::shifted_right(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 1);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_up()") {
  auto const r = gls::shifted_up(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 0);
  REQUIRE(r.y == -1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_down()") {
  auto const r = gls::shifted_down(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_up_left()") {
  auto const r = gls::shifted_up_left(gls::unit_rectangle(), 1);
  REQUIRE(r.x == -1);
  REQUIRE(r.y == -1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_up_right()") {
  auto const r = gls::shifted_up_right(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 1);
  REQUIRE(r.y == -1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_down_left()") {
  auto const r = gls::shifted_down_left(gls::unit_rectangle(), 1);
  REQUIRE(r.x == -1);
  REQUIRE(r.y == 1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_down_right()") {
  auto const r = gls::shifted_down_right(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 1);
  REQUIRE(r.y == 1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("inside(rect, rect)") {
  SDL_Rect const r0{0, 0, 4, 4};
  SECTION("merely top left within is not inside()") {
    auto const r1 = gls::shifted_down(gls::shifted_right(r0, 1), 1);
    REQUIRE(!gls::inside(r1, r0));
  }
  SECTION("merely bottom right within is not inside()") {
    auto const r1 = gls::shifted_up(gls::shifted_left(r0, 1), 1);
    REQUIRE(!gls::inside(r1, r0));
  }
  SECTION("merely top right within is not inside()") {
    auto const r1 = gls::shifted_down(gls::shifted_left(r0, 1), 1);
    REQUIRE(!gls::inside(r1, r0));
  }
  SECTION("merely bottom left within is not inside()") {
    auto const r1 = gls::shifted_up(gls::shifted_right(r0, 1), 1);
    REQUIRE(!gls::inside(r1, r0));
  }
  SECTION("all corners within is inside()") {
    auto const compressed = gls::wcompressed(gls::hcompressed(r0, 2), 2);
    auto const r1 = gls::shifted_right(gls::shifted_down(compressed, 1), 1);
    REQUIRE(gls::inside(r1, r0));
  }
  SECTION("all corners outside is not inside()") {
    auto const stretched = gls::wstretched(gls::hstretched(r0, 2), 2);
    auto const r1 = gls::shifted_left(gls::shifted_up(stretched, 1), 1);
    REQUIRE(!gls::inside(r1, r0));
  }
  SECTION("all corners matching (i.e. rect copy) is not inside()") {
    auto const r1 = r0;
    REQUIRE(!gls::inside(r1, r0));
  }
}

TEST_CASE("outside(rect, rect)") {
  SDL_Rect const r0{0, 0, 4, 4};
  SECTION("merely top left within is not outside()") {
    auto const r1 = gls::shifted_down(gls::shifted_right(r0, 1), 1);
    REQUIRE(!gls::outside(r1, r0));
  }
  SECTION("merely bottom right within is not outside()") {
    auto const r1 = gls::shifted_up(gls::shifted_left(r0, 1), 1);
    REQUIRE(!gls::outside(r1, r0));
  }
  SECTION("merely top right within is not outside()") {
    auto const r1 = gls::shifted_down(gls::shifted_left(r0, 1), 1);
    REQUIRE(!gls::outside(r1, r0));
  }
  SECTION("merely bottom left within is not outside()") {
    auto const r1 = gls::shifted_up(gls::shifted_right(r0, 1), 1);
    REQUIRE(!gls::outside(r1, r0));
  }
  SECTION("all corners within is not outside()") {
    auto const compressed = gls::wcompressed(gls::hcompressed(r0, 2), 2);
    auto const r1 = gls::shifted_right(gls::shifted_down(compressed, 1), 1);
    REQUIRE(!gls::outside(r1, r0));
  }
  SECTION("all corners outside is outside()") {
    auto const stretched = gls::wstretched(gls::hstretched(r0, 2), 2);
    auto const r1 = gls::shifted_left(gls::shifted_up(stretched, 1), 1);
    REQUIRE(gls::outside(r1, r0));
  }
  SECTION("all corners matching (i.e. rect copy) is not outside()") {
    auto const r1 = r0;
    REQUIRE(!gls::outside(r1, r0));
  }
}

TEST_CASE("rect intersect() rect") {
  SDL_Rect const r0{0, 0, 4, 4};
  SECTION("top left inside is an intersection") {
    auto const r1 = gls::shifted_right(gls::shifted_down(r0, 1), 1);
    REQUIRE(gls::intersect(r0, r1));
  }
  SECTION("top right inside is an intersection") {
    auto const r1 = gls::shifted_left(gls::shifted_down(r0, 1), 1);
    REQUIRE(gls::intersect(r0, r1));
  }
  SECTION("bottom left inside is an intersection") {
    auto const r1 = gls::shifted_up(gls::shifted_right(r0, 1), 1);
    REQUIRE(gls::intersect(r0, r1));
  }
  SECTION("bottom right inside is an intersection") {
    auto const r1 = gls::shifted_up(gls::shifted_left(r0, 1), 1);
    REQUIRE(gls::intersect(r0, r1));
  }
  SECTION("entirely inside is an intersection") {
    auto const smaller_rect = gls::wcompressed(gls::hcompressed(r0, 2), 2);
    auto const r1 = gls::shifted_down(gls::shifted_right(smaller_rect, 1), 1);
    REQUIRE(gls::intersect(r0, r1));
  }
}
