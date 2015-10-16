#include <catch/catch.hpp>
#include "../src/sdl_point.hh"

TEST_CASE("equal()") {
  SDL_Point const lhs{0, 0};
  SECTION("equals itself") {
    REQUIRE(gls::equal(lhs, lhs));
  }
  SECTION("doesn't equal a point with a different y") {
    SDL_Point const rhs{lhs.x, lhs.y + 1};
    REQUIRE(!gls::equal(lhs, rhs));
  }
  SECTION("doesn't equal a point with a different x") {
    SDL_Point const rhs{lhs.x + 1, lhs.y};
    REQUIRE(!gls::equal(lhs, rhs));
  }
  SECTION("doesn't equal a wholly diferent point") {
    SDL_Point const rhs{lhs.x + 1, lhs.y + 1};
    REQUIRE(!gls::equal(lhs, rhs));
  }
}

TEST_CASE("origin_point() returns the (0,0) point") {
  auto const p = gls::origin_point();
  REQUIRE(p.x == 0);
  REQUIRE(p.y == 0);
}

TEST_CASE("shifted_up(origin_point(), 1) is (0,-1)") {
  auto const p = gls::shifted_up(gls::origin_point(), 1);
  REQUIRE(p.x == 0);
  REQUIRE(p.y == -1);
}
