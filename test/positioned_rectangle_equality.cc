#include <catch/catch.hpp>
#include "../src/positioned_rectangle.hh"

TEST_CASE("positioned_rectangle equality with 2 1st-quadrant rects") {
  gls::positioned_rectangle const a(
    gls::point(-5, -8), gls::rectangle(gls::width_t(2), gls::height_t(3)));
  gls::positioned_rectangle const b(
    gls::point(-5, -8), gls::rectangle(gls::width_t(2), gls::height_t(3)));
  REQUIRE(a == b);
}

TEST_CASE("positioned_rectangle inequality with 2 1st-quadrant rects") {
  gls::positioned_rectangle const a(
    gls::point(-6, -8), gls::rectangle(gls::width_t(2), gls::height_t(3)));
  gls::positioned_rectangle const b(
    gls::point(-5, -8), gls::rectangle(gls::width_t(2), gls::height_t(3)));
  REQUIRE(a != b);
}

TEST_CASE("positioned_rectangle equality with 2 2nd-quadrant rects") {
  gls::positioned_rectangle const a(
    gls::point(1, 1), gls::rectangle(gls::width_t(2), gls::height_t(3)));
  gls::positioned_rectangle const b(
    gls::point(1, 1), gls::rectangle(gls::width_t(2), gls::height_t(3)));
  REQUIRE(a == b);
}

TEST_CASE("positioned_rectangle equality with 2 0-sized rects") {
  gls::positioned_rectangle const a(
    gls::point(0, 0), gls::rectangle(gls::width_t(0), gls::height_t(0)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(0), gls::height_t(0)));
  REQUIRE(a == b);
}

TEST_CASE(
  "positioned_rectangle inequality with 2 0-sized, different positions, "
  "rects") {
  gls::positioned_rectangle const a(
    gls::point(0, 0), gls::rectangle(gls::width_t(0), gls::height_t(0)));
  gls::positioned_rectangle const b(
    gls::point(1, -1), gls::rectangle(gls::width_t(0), gls::height_t(0)));
  REQUIRE(a != b);
}
