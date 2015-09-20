#include <catch/catch.hpp>
#include "../src/rectangle.hh"
#include "../src/width.hh"
#include "../src/height.hh"

TEST_CASE("unit_rectangle()") {
  auto const r = gls::unit_rectangle();
  REQUIRE(r.width() == 1);
  REQUIRE(r.height() == 1);
}
