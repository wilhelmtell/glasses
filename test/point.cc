#include <catch/catch.hpp>
#include "point_io.hh"
#include "../src/point.hh"

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
