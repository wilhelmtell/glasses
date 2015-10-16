#include <catch/catch.hpp>
#include "../src/sdl_point.hh"

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
