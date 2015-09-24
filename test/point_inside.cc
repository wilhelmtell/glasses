#include <catch/catch.hpp>
#include "../src/point.hh"
#include "../src/positioned_rectangle.hh"
#include "../src/rectangle.hh"
#include "../src/width_t.hh"
#include "../src/height.hh"

TEST_CASE("inside() with point inside a non-zero-sized positioned_rectangle") {
  gls::point const p(1, 1);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::dim::height(2)));
  REQUIRE(gls::inside(p, r));
}

TEST_CASE(
  "inside() on the top bound of a non-zero-sized positioned_rectangle") {
  gls::point const p(1, 0);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::dim::height(2)));
  REQUIRE(!gls::inside(p, r));
}

TEST_CASE(
  "inside() on the right bound of a non-zero-sized positioned_rectangle") {
  gls::point const p(2, 1);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::dim::height(2)));
  REQUIRE(!gls::inside(p, r));
}

TEST_CASE(
  "inside() on the bottom bound of a non-zero-sized positioned_rectangle") {
  gls::point const p(1, 2);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::dim::height(2)));
  REQUIRE(!gls::inside(p, r));
}

TEST_CASE(
  "inside() on the left bound of a non-zero-sized positioned_rectangle") {
  gls::point const p(0, 1);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::dim::height(2)));
  REQUIRE(!gls::inside(p, r));
}

TEST_CASE("inside() outside a non-zero-sized positioned_rectangle") {
  gls::point const p(0, 1);
  gls::positioned_rectangle const r(
    gls::point(2, 2), gls::rectangle(gls::width_t(2), gls::dim::height(2)));
  REQUIRE(!gls::inside(p, r));
}

TEST_CASE("inside() outside a zero-sized positioned_rectangle") {
  gls::point const p(0, 0);
  gls::positioned_rectangle const r(
    gls::point(2, 2), gls::rectangle(gls::width_t(0), gls::dim::height(0)));
  REQUIRE(!gls::inside(p, r));
}

TEST_CASE("inside() on a zero-sized positioned_rectangle") {
  gls::point const p(0, 0);
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(0), gls::dim::height(0)));
  REQUIRE(!gls::inside(p, r));  // can't possibly be inside a zero-sized rect
}
