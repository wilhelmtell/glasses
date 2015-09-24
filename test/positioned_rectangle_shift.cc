#include <catch/catch.hpp>
#include "../src/positioned_rectangle.hh"
#include "../src/point.hh"
#include "../src/rectangle.hh"
#include "../src/width_t.hh"
#include "../src/height_t.hh"
#include "positioned_rectangle_io.hh"

namespace {
gls::rectangle const unit_rectangle(gls::width_t(1), gls::height_t(1));
gls::point const origin(0, 0);
}

// +-------+
// | 4 | 3 |
// |---+---|
// | 1 | 2 |
// +-------+

TEST_CASE("positioned_rectangle shifted_up() from within the 1st quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-12, 32), unit_rectangle);
  REQUIRE(gls::shifted_up(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_up() from within the 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(12, 32), unit_rectangle);
  REQUIRE(gls::shifted_up(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_up() from within the 3rd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(12, -36), unit_rectangle);
  REQUIRE(gls::shifted_up(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_up() from within the 4th quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-12, -36), unit_rectangle);
  REQUIRE(gls::shifted_up(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_up() from origin") {
  gls::positioned_rectangle const p(gls::point(0, 0), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(0, -2), unit_rectangle);
  REQUIRE(gls::shifted_up(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_up() 0 from origin") {
  gls::positioned_rectangle const p(origin, unit_rectangle);
  REQUIRE(gls::shifted_up(p, 0) == p);
}

TEST_CASE("positioned_rectangle shifted_up() 0 from 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(98, 56), unit_rectangle);
  REQUIRE(gls::shifted_up(p, 0) == p);
}

TEST_CASE("positioned_rectangle shifted_down() from within the 1st quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-12, 36), unit_rectangle);
  REQUIRE(gls::shifted_down(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_down() from within the 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(12, 36), unit_rectangle);
  REQUIRE(gls::shifted_down(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_down() from within the 3rd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(12, -32), unit_rectangle);
  REQUIRE(gls::shifted_down(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_down() from within the 4th quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-12, -32), unit_rectangle);
  REQUIRE(gls::shifted_down(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_down() from origin") {
  gls::positioned_rectangle const p(gls::point(0, 0), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(0, 2), unit_rectangle);
  REQUIRE(gls::shifted_down(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_down() 0 from origin") {
  gls::positioned_rectangle const p(origin, unit_rectangle);
  REQUIRE(gls::shifted_down(p, 0) == p);
}

TEST_CASE("positioned_rectangle shifted_down() 0 from 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(98, 56), unit_rectangle);
  REQUIRE(gls::shifted_down(p, 0) == p);
}

TEST_CASE("positioned_rectangle shifted_left() from within the 1st quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-14, 34), unit_rectangle);
  REQUIRE(gls::shifted_left(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_left() from within the 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(10, 34), unit_rectangle);
  REQUIRE(gls::shifted_left(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_left() from within the 3rd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(10, -34), unit_rectangle);
  REQUIRE(gls::shifted_left(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_left() from within the 4th quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-14, -34), unit_rectangle);
  REQUIRE(gls::shifted_left(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_left() from origin") {
  gls::positioned_rectangle const p(gls::point(0, 0), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-2, 0), unit_rectangle);
  REQUIRE(gls::shifted_left(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_left() 0 from origin") {
  gls::positioned_rectangle const p(origin, unit_rectangle);
  REQUIRE(gls::shifted_left(p, 0) == p);
}

TEST_CASE("positioned_rectangle shifted_left() 0 from 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(98, 56), unit_rectangle);
  REQUIRE(gls::shifted_left(p, 0) == p);
}

TEST_CASE(
  "positioned_rectangle shifted_right() from within the 1st quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-10, 34), unit_rectangle);
  REQUIRE(gls::shifted_right(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_right() from within the 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(14, 34), unit_rectangle);
  REQUIRE(gls::shifted_right(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_right() from within the 3rd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(14, -34), unit_rectangle);
  REQUIRE(gls::shifted_right(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_right() from within the 4th quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-10, -34), unit_rectangle);
  REQUIRE(gls::shifted_right(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_right() from origin") {
  gls::positioned_rectangle const p(gls::point(0, 0), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(2, 0), unit_rectangle);
  REQUIRE(gls::shifted_right(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_right() 0 from origin") {
  gls::positioned_rectangle const p(origin, unit_rectangle);
  REQUIRE(gls::shifted_right(p, 0) == p);
}

TEST_CASE("positioned_rectangle shifted_right() 0 from 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(98, 56), unit_rectangle);
  REQUIRE(gls::shifted_right(p, 0) == p);
}

TEST_CASE(
  "positioned_rectangle shifted_down_left() from within the 1st quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-14, 36), unit_rectangle);
  REQUIRE(gls::shifted_down_left(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_down_left() from within the 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(10, 36), unit_rectangle);
  REQUIRE(gls::shifted_down_left(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_down_left() from within the 3rd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(10, -32), unit_rectangle);
  REQUIRE(gls::shifted_down_left(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_down_left() from within the 4th quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-14, -32), unit_rectangle);
  REQUIRE(gls::shifted_down_left(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_down_left() from origin") {
  gls::positioned_rectangle const p(gls::point(0, 0), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-2, 2), unit_rectangle);
  REQUIRE(gls::shifted_down_left(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_down_left() 0 from origin") {
  gls::positioned_rectangle const p(origin, unit_rectangle);
  REQUIRE(gls::shifted_down_left(p, 0) == p);
}

TEST_CASE("positioned_rectangle shifted_down_left() 0 from 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(98, 56), unit_rectangle);
  REQUIRE(gls::shifted_down_left(p, 0) == p);
}

TEST_CASE(
  "positioned_rectangle shifted_down_right() from within the 1st quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-10, 36), unit_rectangle);
  REQUIRE(gls::shifted_down_right(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_down_right() from within the 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(14, 36), unit_rectangle);
  REQUIRE(gls::shifted_down_right(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_down_right() from within the 3rd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(14, -32), unit_rectangle);
  REQUIRE(gls::shifted_down_right(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_down_right() from within the 4th quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-10, -32), unit_rectangle);
  REQUIRE(gls::shifted_down_right(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_down_right() from origin") {
  gls::positioned_rectangle const p(gls::point(0, 0), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(2, 2), unit_rectangle);
  REQUIRE(gls::shifted_down_right(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_down_right() 0 from origin") {
  gls::positioned_rectangle const p(origin, unit_rectangle);
  REQUIRE(gls::shifted_down_right(p, 0) == p);
}

TEST_CASE("positioned_rectangle shifted_down_right() 0 from 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(98, 56), unit_rectangle);
  REQUIRE(gls::shifted_down_right(p, 0) == p);
}

TEST_CASE(
  "positioned_rectangle shifted_up_left() from within the 1st quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-14, 32), unit_rectangle);
  REQUIRE(gls::shifted_up_left(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_up_left() from within the 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(10, 32), unit_rectangle);
  REQUIRE(gls::shifted_up_left(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_up_left() from within the 3rd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(10, -36), unit_rectangle);
  REQUIRE(gls::shifted_up_left(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_up_left() from within the 4th quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-14, -36), unit_rectangle);
  REQUIRE(gls::shifted_up_left(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_up_left() from origin") {
  gls::positioned_rectangle const p(gls::point(0, 0), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-2, -2), unit_rectangle);
  REQUIRE(gls::shifted_up_left(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_up_left() 0 from origin") {
  gls::positioned_rectangle const p(origin, unit_rectangle);
  REQUIRE(gls::shifted_up_left(p, 0) == p);
}

TEST_CASE("positioned_rectangle shifted_up_left() 0 from 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(98, 56), unit_rectangle);
  REQUIRE(gls::shifted_up_left(p, 0) == p);
}

TEST_CASE(
  "positioned_rectangle shifted_up_right() from within the 1st quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-10, 32), unit_rectangle);
  REQUIRE(gls::shifted_up_right(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_up_right() from within the 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, 34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(14, 32), unit_rectangle);
  REQUIRE(gls::shifted_up_right(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_up_right() from within the 3rd quadrant") {
  gls::positioned_rectangle const p(gls::point(12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(14, -36), unit_rectangle);
  REQUIRE(gls::shifted_up_right(p, 2) == x);
}

TEST_CASE(
  "positioned_rectangle shifted_up_right() from within the 4th quadrant") {
  gls::positioned_rectangle const p(gls::point(-12, -34), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(-10, -36), unit_rectangle);
  REQUIRE(gls::shifted_up_right(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_up_right() from origin") {
  gls::positioned_rectangle const p(gls::point(0, 0), unit_rectangle);
  gls::positioned_rectangle const x(gls::point(2, -2), unit_rectangle);
  REQUIRE(gls::shifted_up_right(p, 2) == x);
}

TEST_CASE("positioned_rectangle shifted_up_right() 0 from origin") {
  gls::positioned_rectangle const p(origin, unit_rectangle);
  REQUIRE(gls::shifted_up_right(p, 0) == p);
}

TEST_CASE("positioned_rectangle shifted_up_right() 0 from 2nd quadrant") {
  gls::positioned_rectangle const p(gls::point(98, 56), unit_rectangle);
  REQUIRE(gls::shifted_up_right(p, 0) == p);
}
