#include <catch/catch.hpp>
#include "../src/positioned_rectangle.hh"
#include "../src/point.hh"
#include "../src/dim/width.hh"
#include "../src/dim/height.hh"

TEST_CASE(
  "value-initialized positioned_rectangle has value-initialized state") {
  tls::positioned_rectangle const r{};
  SECTION("value-initialized positioned_rectangle is at origin") {
    REQUIRE(0 == r.top_left().x);
    REQUIRE(0 == r.top_left().y);
  }
  SECTION("value-initialized positioned_rectangle is of size 0") {
    REQUIRE(0 == r.width());
    REQUIRE(0 == r.height());
  }
}

TEST_CASE(
  "positioned_rectangle \"zero\"-initialized has value-initialized state") {
  tls::positioned_rectangle const r{
    tls::point{0, 0}, tls::rectangle{tls::dim::width{0}, tls::dim::height{0}}};
  SECTION("positioned_rectangle initialized to origin is at origin") {
    REQUIRE(0 == r.top_left().x);
    REQUIRE(0 == r.top_left().y);
  }
  SECTION("positioned_rectangle \"zero\"-initialized in size is of size 0") {
    REQUIRE(0 == r.width());
    REQUIRE(0 == r.height());
  }
}

TEST_CASE(
  "direct-initialized positioned_rectangle has direct-initialized state") {
  tls::positioned_rectangle const r{
    tls::point{3, 4}, tls::rectangle{tls::dim::width{5}, tls::dim::height{6}}};
  SECTION("direct-initialized positioned_rectangle is in position") {
    REQUIRE(3 == r.top_left().x);
    REQUIRE(4 == r.top_left().y);
  }
  SECTION("direct-initialized positioned_rectangle has its size set") {
    REQUIRE(5 == r.width());
    REQUIRE(6 == r.height());
  }
}