#include <catch/catch.hpp>
#include "../src/point.hh"
#include "../src/positioned_rectangle.hh"
#include "../src/width_t.hh"
#include "../src/height_t.hh"

TEST_CASE("bounding() outside a zero-sized positioned_rectangle") {
  gls::point const p(1, 1);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(0), gls::height_t(0)));
  REQUIRE(!gls::bounding(p, r));
}

TEST_CASE("bounding() on a zero-sized positioned_rectangle") {
  gls::point const p(0, 0);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle{gls::width_t(0), gls::height_t(0)});
  REQUIRE(gls::bounding(p, r));
}

TEST_CASE("bounding() inside a non-zero-sized positioned_rectangle") {
  gls::point const p(1, 1);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::height_t(2)));
  REQUIRE(!gls::bounding(p, r));
}

TEST_CASE("bounding() outside a non-zero-sized positioned_rectangle") {
  gls::point const p(0, 0);
  gls::positioned_rectangle const r(
    gls::point(1, 1), gls::rectangle(gls::width_t(2), gls::height_t(2)));
  REQUIRE(!gls::bounding(p, r));
}

TEST_CASE(
  "bounding() on the top bound of a non-zero-sized positioned_rectangle") {
  gls::point const p(1, 0);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::height_t(2)));
  REQUIRE(gls::bounding(p, r));
}

TEST_CASE(
  "bounding() on the right bound of a non-zero-sized positioned_rectangle") {
  gls::point const p(2, 1);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::height_t(2)));
  REQUIRE(gls::bounding(p, r));
}

TEST_CASE(
  "bounding() on the bottom bound of a non-zero-sized positioned_rectangle") {
  gls::point const p(1, 2);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::height_t(2)));
  REQUIRE(gls::bounding(p, r));
}

TEST_CASE(
  "bounding() on the left bound of a non-zero-sized positioned_rectangle") {
  gls::point const p(0, 1);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::height_t(2)));
  REQUIRE(gls::bounding(p, r));
}
