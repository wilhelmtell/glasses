#include <catch/catch.hpp>
#include "point_io.hh"
#include "../src/rectangle.hh"
#include "../src/point.hh"
#include "../src/width.hh"
#include "../src/height.hh"

TEST_CASE("value-initialized rectangle has value-initialized state") {
  tls::rectangle const r{};
  SECTION("value-initialized rectangle is at origin") {
    REQUIRE(0 == r.p.x);
    REQUIRE(0 == r.p.y);
  }
  SECTION("value-initialized rectangle is of size 0") {
    REQUIRE(0 == r.w);
    REQUIRE(0 == r.h);
  }
}

TEST_CASE("rectangle \"zero\"-initialized has value-initialized state") {
  tls::rectangle const r{tls::point{0, 0}, tls::width{0}, tls::height{0}};
  SECTION("rectangle initialized to origin is at origin") {
    REQUIRE(0 == r.p.x);
    REQUIRE(0 == r.p.y);
  }
  SECTION("rectangle \"zero\"-initialized in size is of size 0") {
    REQUIRE(0 == r.w);
    REQUIRE(0 == r.h);
  }
}

TEST_CASE("direct-initialized rectangle has direct-initialized state") {
  tls::rectangle const r{tls::point{3, 4}, tls::width{5}, tls::height{6}};
  SECTION("direct-initialized rectangle is in position") {
    REQUIRE(3 == r.p.x);
    REQUIRE(4 == r.p.y);
  }
  SECTION("direct-initialized rectangle has its size set") {
    REQUIRE(5 == r.w);
    REQUIRE(6 == r.h);
  }
}

TEST_CASE("bottom_right() of value-initialized rectangle") {
  tls::point const x{0, 0};
  tls::rectangle const r{};
  REQUIRE(x == tls::bottom_right(r));
}

TEST_CASE("bottom_right() of rectangle sitting on origin in Q3") {
  tls::point const x{3, 2};
  tls::rectangle const r{tls::point{0, 0}, tls::width{3}, tls::height{2}};
  REQUIRE(x == tls::bottom_right(r));
}
