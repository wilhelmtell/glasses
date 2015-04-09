#include <catch/catch.hpp>
#include "point_io.hh"
#include "../src/point.hh"
#include "../src/rectangle.hh"
#include "../src/width.hh"
#include "../src/height.hh"

TEST_CASE("value-initialized point is at origin") {
  tls::point const p{};
  REQUIRE(0 == p.x);
  REQUIRE(0 == p.y);
}

TEST_CASE("point direct-initialized to origin is at origin") {
  tls::point const p{0, 0};
  REQUIRE(0 == p.x);
  REQUIRE(0 == p.y);
}

TEST_CASE("direct-initialized point is in position") {
  tls::point const p{3, 4};
  REQUIRE(3 == p.x);
  REQUIRE(4 == p.y);
}

TEST_CASE("value-initialized points are equal") {
  tls::point const a{};
  tls::point const b{};
  REQUIRE(a == b);
}

TEST_CASE("value-initialized points are not inequal") {
  tls::point const a{};
  tls::point const b{};
  REQUIRE(!(a != b));
}

TEST_CASE("a value-initialized point equals origin") {
  tls::point const a{};
  tls::point const b{0, 0};
  REQUIRE(a == b);
}

TEST_CASE("a value-initialized point doesn't equal some non-origin point") {
  tls::point const a{};
  tls::point const b{1, 1};
  REQUIRE(a != b);
}

TEST_CASE("two points with the same x and y are equal") {
  tls::point const a{1, 2};
  tls::point const b{1, 2};
  REQUIRE(a == b);
}

TEST_CASE("two points with different x and y are different") {
  tls::point const a{1, 2};
  tls::point const b{3, 4};
  SECTION("two points with different x and y are inequal") { REQUIRE(a != b); }
  SECTION("two points with different x and y are not equal") {
    REQUIRE(!(a == b));
  }
}

TEST_CASE("crossing() outside a zero-sized rectangle") {
  tls::point const p{1, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{0}, tls::height{0}};
  REQUIRE(!tls::crossing(p, r));
}

TEST_CASE("crossing() on a zero-sized rectangle") {
  tls::point const p{0, 0};
  tls::rectangle const r{tls::point{0, 0}, tls::width{0}, tls::height{0}};
  REQUIRE(tls::crossing(p, r));
}

TEST_CASE("crossing() inside a non-zero-sized rectangle") {
  tls::point const p{1, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::crossing(p, r));
}

TEST_CASE("crossing() outside a non-zero-sized rectangle") {
  tls::point const p{0, 0};
  tls::rectangle const r{tls::point{1, 1}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::crossing(p, r));
}

TEST_CASE("crossing() on the top bound of a non-zero-sized rectangle") {
  tls::point const p{1, 0};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(tls::crossing(p, r));
}

TEST_CASE("crossing() on the right bound of a non-zero-sized rectangle") {
  tls::point const p{2, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(tls::crossing(p, r));
}

TEST_CASE("crossing() on the bottom bound of a non-zero-sized rectangle") {
  tls::point const p{1, 2};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(tls::crossing(p, r));
}

TEST_CASE("crossing() on the left bound of a non-zero-sized rectangle") {
  tls::point const p{0, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(tls::crossing(p, r));
}

TEST_CASE("outside() with point inside a non-zero-sized rectangle") {
  tls::point const p{1, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::outside(p, r));
}

TEST_CASE("outside() on the top bound of a non-zero-sized rectangle") {
  tls::point const p{1, 0};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::outside(p, r));
}

TEST_CASE("outside() on the right bound of a non-zero-sized rectangle") {
  tls::point const p{2, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::outside(p, r));
}

TEST_CASE("outside() on the bottom bound of a non-zero-sized rectangle") {
  tls::point const p{1, 2};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::outside(p, r));
}

TEST_CASE("outside() on the left bound of a non-zero-sized rectangle") {
  tls::point const p{0, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::outside(p, r));
}

TEST_CASE("outside() outside a non-zero-sized rectangle") {
  tls::point const p{0, 1};
  tls::rectangle const r{tls::point{2, 2}, tls::width{2}, tls::height{2}};
  REQUIRE(tls::outside(p, r));
}

TEST_CASE("outside() outside a zero-sized rectangle") {
  tls::point const p{0, 0};
  tls::rectangle const r{tls::point{2, 2}, tls::width{0}, tls::height{0}};
  REQUIRE(tls::outside(p, r));
}

TEST_CASE("outside() on a zero-sized rectangle") {
  tls::point const p{0, 0};
  tls::rectangle const r{tls::point{0, 0}, tls::width{0}, tls::height{0}};
  REQUIRE(!tls::outside(p, r));  // can't possibly be outside a zero-sized rect
}

TEST_CASE("inside() with point inside a non-zero-sized rectangle") {
  tls::point const p{1, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(tls::inside(p, r));
}

TEST_CASE("inside() on the top bound of a non-zero-sized rectangle") {
  tls::point const p{1, 0};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::inside(p, r));
}

TEST_CASE("inside() on the right bound of a non-zero-sized rectangle") {
  tls::point const p{2, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::inside(p, r));
}

TEST_CASE("inside() on the bottom bound of a non-zero-sized rectangle") {
  tls::point const p{1, 2};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::inside(p, r));
}

TEST_CASE("inside() on the left bound of a non-zero-sized rectangle") {
  tls::point const p{0, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::inside(p, r));
}

TEST_CASE("inside() outside a non-zero-sized rectangle") {
  tls::point const p{0, 1};
  tls::rectangle const r{tls::point{2, 2}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::inside(p, r));
}

TEST_CASE("inside() outside a zero-sized rectangle") {
  tls::point const p{0, 0};
  tls::rectangle const r{tls::point{2, 2}, tls::width{0}, tls::height{0}};
  REQUIRE(!tls::inside(p, r));
}

TEST_CASE("inside() on a zero-sized rectangle") {
  tls::point const p{0, 0};
  tls::rectangle const r{tls::point{0, 0}, tls::width{0}, tls::height{0}};
  REQUIRE(!tls::inside(p, r));  // can't possibly be inside a zero-sized rect
}
