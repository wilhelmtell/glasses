#include <catch/catch.hpp>
#include "positioned_rectangle_io.hh"
#include "../src/positioned_rectangle.hh"
#include "../src/rectangle.hh"
#include "../src/point.hh"
#include "../src/width_t.hh"
#include "../src/height.hh"

TEST_CASE("q1_rectangle") {
  gls::positioned_rectangle const x(gls::point(-1, 0), gls::unit_rectangle());
  REQUIRE(gls::q1_rectangle() == x);
}

TEST_CASE("q2_rectangle") {
  gls::positioned_rectangle const x(gls::point(0, 0), gls::unit_rectangle());
  REQUIRE(gls::q2_rectangle() == x);
}

TEST_CASE("q3_rectangle") {
  gls::positioned_rectangle const x(gls::point(0, -1), gls::unit_rectangle());
  REQUIRE(gls::q3_rectangle() == x);
}

TEST_CASE("q4_rectangle") {
  gls::positioned_rectangle const x(gls::point(-1, -1), gls::unit_rectangle());
  REQUIRE(gls::q4_rectangle() == x);
}
