#include <catch/catch.hpp>
#include "../src/point.hh"
#include "../src/positioned_rectangle.hh"
#include "../src/rectangle.hh"
#include "../src/dim/width.hh"
#include "../src/dim/height.hh"

TEST_CASE(
  "outside() with point inside a non-zero-sized positioned_rectangle") {
  gls::point const p{1, 1};
  gls::positioned_rectangle const r{
    gls::point{0, 0}, gls::rectangle{gls::dim::width{2}, gls::dim::height{2}}};
  REQUIRE(!gls::outside(p, r));
}

TEST_CASE(
  "outside() on the top bound of a non-zero-sized positioned_rectangle") {
  gls::point const p{1, 0};
  gls::positioned_rectangle const r{
    gls::point{0, 0}, gls::rectangle{gls::dim::width{2}, gls::dim::height{2}}};
  REQUIRE(!gls::outside(p, r));
}

TEST_CASE(
  "outside() on the right bound of a non-zero-sized positioned_rectangle") {
  gls::point const p{2, 1};
  gls::positioned_rectangle const r{
    gls::point{0, 0}, gls::rectangle{gls::dim::width{2}, gls::dim::height{2}}};
  REQUIRE(!gls::outside(p, r));
}

TEST_CASE(
  "outside() on the bottom bound of a non-zero-sized positioned_rectangle") {
  gls::point const p{1, 2};
  gls::positioned_rectangle const r{
    gls::point{0, 0}, gls::rectangle{gls::dim::width{2}, gls::dim::height{2}}};
  REQUIRE(!gls::outside(p, r));
}

TEST_CASE(
  "outside() on the left bound of a non-zero-sized positioned_rectangle") {
  gls::point const p{0, 1};
  gls::positioned_rectangle const r{
    gls::point{0, 0}, gls::rectangle{gls::dim::width{2}, gls::dim::height{2}}};
  REQUIRE(!gls::outside(p, r));
}

TEST_CASE("outside() outside a non-zero-sized positioned_rectangle") {
  gls::point const p{0, 1};
  gls::positioned_rectangle const r{
    gls::point{2, 2}, gls::rectangle{gls::dim::width{2}, gls::dim::height{2}}};
  REQUIRE(gls::outside(p, r));
}

TEST_CASE("outside() outside a zero-sized positioned_rectangle") {
  gls::point const p{0, 0};
  gls::positioned_rectangle const r{
    gls::point{2, 2}, gls::rectangle{gls::dim::width{0}, gls::dim::height{0}}};
  REQUIRE(gls::outside(p, r));
}

TEST_CASE("outside() on a zero-sized positioned_rectangle") {
  gls::point const p{0, 0};
  gls::positioned_rectangle const r{
    gls::point{0, 0}, gls::rectangle{gls::dim::width{0}, gls::dim::height{0}}};
  REQUIRE(!gls::outside(p, r));  // can't possibly be outside a zero-sized rect
}
