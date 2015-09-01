#include <catch/catch.hpp>
#include "point_io.hh"
#include "../src/rectangle.hh"
#include "../src/point.hh"
#include "../src/dim/width.hh"
#include "../src/dim/height.hh"

TEST_CASE("bottom_right() of value-initialized rectangle") {
  tls::point const x{0, 0};
  tls::rectangle const r{};
  REQUIRE(x == tls::bottom_right(r));
}

TEST_CASE("bottom_right() of rectangle sitting on origin in Q3") {
  tls::point const x{3, 2};
  tls::rectangle const r{
    tls::point{0, 0}, tls::dim::width{3}, tls::dim::height{2}};
  REQUIRE(x == tls::bottom_right(r));
}

TEST_CASE("bottom_right() of rectangle in Q3") {
  tls::point const x{5, 5};
  tls::rectangle const r{
    tls::point{2, 1}, tls::dim::width{3}, tls::dim::height{4}};
  REQUIRE(x == tls::bottom_right(r));
}
