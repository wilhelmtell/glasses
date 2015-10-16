#include <catch/catch.hpp>
#include "../src/sdl_point.hh"

TEST_CASE("origin_point() returns the (0,0) point") {
  auto const p = gls::origin_point();
  REQUIRE(p.x == 0);
  REQUIRE(p.y == 0);
}
