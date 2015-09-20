#include <catch/catch.hpp>
#include "../src/point.hh"
#include "point_io.hh"

// +-------+
// | 4 | 3 |
// |---+---|
// | 1 | 2 |
// +-------+

TEST_CASE("point shifted_up() from within the 1st quadrant") {
  gls::point const p(-12, 34);
  gls::point const x(-12, 32);  // 1st quadrant up means towards x axis
  REQUIRE(gls::shifted_up(p, 2) == x);
}

TEST_CASE("point shifted_up() from within the 2nd quadrant") {
  gls::point const p(12, 34);
  gls::point const x(12, 32);  // 2nd quadrant up means towards x axis
  REQUIRE(gls::shifted_up(p, 2) == x);
}

TEST_CASE("point shifted_up() from within the 3rd quadrant") {
  gls::point const p(12, -34);
  gls::point const x(12, -36);  // 3rd quadrant up means further from x axis
  REQUIRE(gls::shifted_up(p, 2) == x);
}

TEST_CASE("point shifted_up() from within the 4th quadrant") {
  gls::point const p(-12, -34);
  gls::point const x(-12, -36);  // 4th quadrant up means further from x axis
  REQUIRE(gls::shifted_up(p, 2) == x);
}

TEST_CASE("point shifted_up() from origin") {
  gls::point const p(0, 0);
  gls::point const x(0, -2);
  REQUIRE(gls::shifted_up(p, 2) == x);
}

TEST_CASE("point shifted_up() 0 from origin") {
  gls::point const p(0, 0);
  REQUIRE(gls::shifted_up(p, 0) == p);
}

TEST_CASE("point shifted_up() 0 from 2nd quadrant") {
  gls::point const p(98, 56);
  REQUIRE(gls::shifted_up(p, 0) == p);
}

TEST_CASE("point shifted_down() from within the 1st quadrant") {
  gls::point const p(-12, 34);
  gls::point const x(-12, 36);  // 1st quadrant down means further from x axis
  REQUIRE(gls::shifted_down(p, 2) == x);
}

TEST_CASE("point shifted_down() from within the 2nd quadrant") {
  gls::point const p(12, 34);
  gls::point const x(12, 36);  // 2nd quadrant down means further from x axis
  REQUIRE(gls::shifted_down(p, 2) == x);
}

TEST_CASE("point shifted_down() from within the 3rd quadrant") {
  gls::point const p(12, -34);
  gls::point const x(12, -32);  // 3rd quadrant down means towards x axis
  REQUIRE(gls::shifted_down(p, 2) == x);
}

TEST_CASE("point shifted_down() from within the 4th quadrant") {
  gls::point const p(-12, -34);
  gls::point const x(-12, -32);  // 4th quadrant down means towards x axis
  REQUIRE(gls::shifted_down(p, 2) == x);
}

TEST_CASE("point shifted_down() from origin") {
  gls::point const p(0, 0);
  gls::point const x(0, 2);
  REQUIRE(gls::shifted_down(p, 2) == x);
}

TEST_CASE("point shifted_down() 0 from origin") {
  gls::point const p(0, 0);
  REQUIRE(gls::shifted_down(p, 0) == p);
}

TEST_CASE("point shifted_down() 0 from 2nd quadrant") {
  gls::point const p(98, 56);
  REQUIRE(gls::shifted_down(p, 0) == p);
}

TEST_CASE("point shifted_left() from within the 1st quadrant") {
  gls::point const p(-12, 34);
  gls::point const x(-14, 34);  // 1st quadrant left means further from y axis
  REQUIRE(gls::shifted_left(p, 2) == x);
}

TEST_CASE("point shifted_left() from within the 2nd quadrant") {
  gls::point const p(12, 34);
  gls::point const x(10, 34);  // 2nd quadrant left means towards y axis
  REQUIRE(gls::shifted_left(p, 2) == x);
}

TEST_CASE("point shifted_left() from within the 3rd quadrant") {
  gls::point const p(12, -34);
  gls::point const x(10, -34);  // 3rd quadrant left means towards y axis
  REQUIRE(gls::shifted_left(p, 2) == x);
}

TEST_CASE("point shifted_left() from within the 4th quadrant") {
  gls::point const p(-12, -34);
  gls::point const x(-14, -34);  // 4th quadrant left means further from y axis
  REQUIRE(gls::shifted_left(p, 2) == x);
}

TEST_CASE("point shifted_left() from origin") {
  gls::point const p(0, 0);
  gls::point const x(-2, 0);
  REQUIRE(gls::shifted_left(p, 2) == x);
}

TEST_CASE("point shifted_left() 0 from origin") {
  gls::point const p(0, 0);
  REQUIRE(gls::shifted_left(p, 0) == p);
}

TEST_CASE("point shifted_left() 0 from 2nd quadrant") {
  gls::point const p(98, 56);
  REQUIRE(gls::shifted_left(p, 0) == p);
}

TEST_CASE("point shifted_right() from within the 1st quadrant") {
  gls::point const p(-12, 34);
  gls::point const x(-10, 34);  // 1st quadrant right means towards y axis
  REQUIRE(gls::shifted_right(p, 2) == x);
}

TEST_CASE("point shifted_right() from within the 2nd quadrant") {
  gls::point const p(12, 34);
  gls::point const x(14, 34);  // 2nd quadrant right means further from y axis
  REQUIRE(gls::shifted_right(p, 2) == x);
}

TEST_CASE("point shifted_right() from within the 3rd quadrant") {
  gls::point const p(12, -34);
  gls::point const x(14, -34);  // 3rd quadrant right means further from y axis
  REQUIRE(gls::shifted_right(p, 2) == x);
}

TEST_CASE("point shifted_right() from within the 4th quadrant") {
  gls::point const p(-12, -34);
  gls::point const x(-10, -34);  // 4th quadrant right means towards y axis
  REQUIRE(gls::shifted_right(p, 2) == x);
}

TEST_CASE("point shifted_right() from origin") {
  gls::point const p(0, 0);
  gls::point const x(2, 0);
  REQUIRE(gls::shifted_right(p, 2) == x);
}

TEST_CASE("point shifted_right() 0 from origin") {
  gls::point const p(0, 0);
  REQUIRE(gls::shifted_right(p, 0) == p);
}

TEST_CASE("point shifted_right() 0 from 2nd quadrant") {
  gls::point const p(98, 56);
  REQUIRE(gls::shifted_right(p, 0) == p);
}

TEST_CASE("point shifted_down_left() from within the 1st quadrant") {
  gls::point const p(-12, 34);
  gls::point const x(-14, 36);
  REQUIRE(gls::shifted_down_left(p, 2) == x);
}

TEST_CASE("point shifted_down_left() from within the 2nd quadrant") {
  gls::point const p(12, 34);
  gls::point const x(10, 36);
  REQUIRE(gls::shifted_down_left(p, 2) == x);
}

TEST_CASE("point shifted_down_left() from within the 3rd quadrant") {
  gls::point const p(12, -34);
  gls::point const x(10, -32);
  REQUIRE(gls::shifted_down_left(p, 2) == x);
}

TEST_CASE("point shifted_down_left() from within the 4th quadrant") {
  gls::point const p(-12, -34);
  gls::point const x(-14, -32);
  REQUIRE(gls::shifted_down_left(p, 2) == x);
}

TEST_CASE("point shifted_down_left() from origin") {
  gls::point const p(0, 0);
  gls::point const x(-2, 2);
  REQUIRE(gls::shifted_down_left(p, 2) == x);
}

TEST_CASE("point shifted_down_left() 0 from origin") {
  gls::point const p(0, 0);
  REQUIRE(gls::shifted_down_left(p, 0) == p);
}

TEST_CASE("point shifted_down_left() 0 from 2nd quadrant") {
  gls::point const p(98, 56);
  REQUIRE(gls::shifted_down_left(p, 0) == p);
}

TEST_CASE("point shifted_down_right() from within the 1st quadrant") {
  gls::point const p(-12, 34);
  gls::point const x(-10, 36);
  REQUIRE(gls::shifted_down_right(p, 2) == x);
}

TEST_CASE("point shifted_down_right() from within the 2nd quadrant") {
  gls::point const p(12, 34);
  gls::point const x(14, 36);
  REQUIRE(gls::shifted_down_right(p, 2) == x);
}

TEST_CASE("point shifted_down_right() from within the 3rd quadrant") {
  gls::point const p(12, -34);
  gls::point const x(14, -32);
  REQUIRE(gls::shifted_down_right(p, 2) == x);
}

TEST_CASE("point shifted_down_right() from within the 4th quadrant") {
  gls::point const p(-12, -34);
  gls::point const x(-10, -32);
  REQUIRE(gls::shifted_down_right(p, 2) == x);
}

TEST_CASE("point shifted_down_right() from origin") {
  gls::point const p(0, 0);
  gls::point const x(2, 2);
  REQUIRE(gls::shifted_down_right(p, 2) == x);
}

TEST_CASE("point shifted_down_right() 0 from origin") {
  gls::point const p(0, 0);
  REQUIRE(gls::shifted_down_right(p, 0) == p);
}

TEST_CASE("point shifted_down_right() 0 from 2nd quadrant") {
  gls::point const p(98, 56);
  REQUIRE(gls::shifted_down_right(p, 0) == p);
}
