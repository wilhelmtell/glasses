#include <catch/catch.hpp>
#include "../src/point.hh"
#include "../src/rectangle.hh"
#include "../src/dim/width.hh"
#include "../src/dim/height.hh"

TEST_CASE("outside() with point inside a non-zero-sized rectangle") {
  tls::point const p{1, 1};
  tls::rectangle const r{
    tls::point{0, 0}, tls::dim::width{2}, tls::dim::height{2}};
  REQUIRE(!tls::outside(p, r));
}

TEST_CASE("outside() on the top bound of a non-zero-sized rectangle") {
  tls::point const p{1, 0};
  tls::rectangle const r{
    tls::point{0, 0}, tls::dim::width{2}, tls::dim::height{2}};
  REQUIRE(!tls::outside(p, r));
}

TEST_CASE("outside() on the right bound of a non-zero-sized rectangle") {
  tls::point const p{2, 1};
  tls::rectangle const r{
    tls::point{0, 0}, tls::dim::width{2}, tls::dim::height{2}};
  REQUIRE(!tls::outside(p, r));
}

TEST_CASE("outside() on the bottom bound of a non-zero-sized rectangle") {
  tls::point const p{1, 2};
  tls::rectangle const r{
    tls::point{0, 0}, tls::dim::width{2}, tls::dim::height{2}};
  REQUIRE(!tls::outside(p, r));
}

TEST_CASE("outside() on the left bound of a non-zero-sized rectangle") {
  tls::point const p{0, 1};
  tls::rectangle const r{
    tls::point{0, 0}, tls::dim::width{2}, tls::dim::height{2}};
  REQUIRE(!tls::outside(p, r));
}

TEST_CASE("outside() outside a non-zero-sized rectangle") {
  tls::point const p{0, 1};
  tls::rectangle const r{
    tls::point{2, 2}, tls::dim::width{2}, tls::dim::height{2}};
  REQUIRE(tls::outside(p, r));
}

TEST_CASE("outside() outside a zero-sized rectangle") {
  tls::point const p{0, 0};
  tls::rectangle const r{
    tls::point{2, 2}, tls::dim::width{0}, tls::dim::height{0}};
  REQUIRE(tls::outside(p, r));
}

TEST_CASE("outside() on a zero-sized rectangle") {
  tls::point const p{0, 0};
  tls::rectangle const r{
    tls::point{0, 0}, tls::dim::width{0}, tls::dim::height{0}};
  REQUIRE(!tls::outside(p, r));  // can't possibly be outside a zero-sized rect
}
