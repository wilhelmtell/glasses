#include <catch/catch.hpp>
#include "point_io.hh"
#include "../src/positioned_rectangle.hh"
#include "../src/point.hh"
#include "../src/dim/width.hh"
#include "../src/dim/height.hh"

TEST_CASE("bottom_right() of value-initialized positioned_rectangle") {
  gls::point const x{0, 0};
  gls::positioned_rectangle const r{};
  REQUIRE(x == gls::bottom_right(r));
}

TEST_CASE("bottom_right() of positioned_rectangle sitting on origin in Q3") {
  gls::point const x{3, 2};
  gls::positioned_rectangle const r{
    gls::point{0, 0}, gls::rectangle{gls::dim::width{3}, gls::dim::height{2}}};
  REQUIRE(x == gls::bottom_right(r));
}

TEST_CASE("bottom_right() of positioned_rectangle in Q3") {
  gls::point const x{5, 5};
  gls::positioned_rectangle const r{
    gls::point{2, 1}, gls::rectangle{gls::dim::width{3}, gls::dim::height{4}}};
  REQUIRE(x == gls::bottom_right(r));
}
