#include <catch/catch.hpp>
#include "point_io.hh"
#include "../src/positioned_rectangle.hh"
#include "../src/point.hh"
#include "../src/dim/width.hh"
#include "../src/dim/height.hh"

TEST_CASE("bottom_right() of value-initialized positioned_rectangle") {
  tls::point const x{0, 0};
  tls::positioned_rectangle const r{};
  REQUIRE(x == tls::bottom_right(r));
}

TEST_CASE("bottom_right() of positioned_rectangle sitting on origin in Q3") {
  tls::point const x{3, 2};
  tls::positioned_rectangle const r{
    tls::point{0, 0}, tls::rectangle{tls::dim::width{3}, tls::dim::height{2}}};
  REQUIRE(x == tls::bottom_right(r));
}

TEST_CASE("bottom_right() of positioned_rectangle in Q3") {
  tls::point const x{5, 5};
  tls::positioned_rectangle const r{
    tls::point{2, 1}, tls::rectangle{tls::dim::width{3}, tls::dim::height{4}}};
  REQUIRE(x == tls::bottom_right(r));
}
