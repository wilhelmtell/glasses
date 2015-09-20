#include <catch/catch.hpp>
#include "rectangle_io.hh"
#include "../src/rectangle.hh"
#include "../src/width.hh"
#include "../src/height.hh"

TEST_CASE("unit_rectangle()") {
  auto const r = gls::unit_rectangle();
  REQUIRE(r.width() == 1);
  REQUIRE(r.height() == 1);
}

TEST_CASE("rectangle equality") {
  auto const r = gls::unit_rectangle();
  gls::rectangle const x(gls::dim::width(1), gls::dim::height(1));
  REQUIRE(r == x);
}

TEST_CASE("rectangle inequality") {
  gls::rectangle const r(gls::dim::width(2), gls::dim::height(3));
  REQUIRE(r != gls::unit_rectangle());
}
