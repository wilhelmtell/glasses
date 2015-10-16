#include <catch/catch.hpp>
#include "../src/sdl_rect.hh"

TEST_CASE("unit_rectangle() returns a 1x1 rect at origin") {
  auto const r = gls::unit_rectangle();
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}
