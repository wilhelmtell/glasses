#include <catch/catch.hpp>
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
