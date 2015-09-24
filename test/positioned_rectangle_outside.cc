#include <catch/catch.hpp>
#include "../src/positioned_rectangle.hh"
#include "../src/point.hh"
#include "../src/width_t.hh"
#include "../src/height.hh"

TEST_CASE(
  "outside() with positioned_rectangle a completely outside "
  "positioned_rectangle b") {
  gls::positioned_rectangle const a(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::dim::height(1)));
  gls::positioned_rectangle const b(
    gls::point(2, 2), gls::rectangle(gls::width_t(3), gls::dim::height(3)));
  REQUIRE(outside(a, b));
}

TEST_CASE(
  "outside() with positioned_rectangle a completely inside "
  "positioned_rectangle b") {
  gls::positioned_rectangle const a(
    gls::point(1, 1), gls::rectangle(gls::width_t(1), gls::dim::height(1)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(3), gls::dim::height(3)));
  REQUIRE(!outside(a, b));
}

TEST_CASE(
  "outside() with positioned_rectangle a's top right within "
  "positioned_rectangle b") {
  gls::positioned_rectangle const a(
    gls::point(1, 1), gls::rectangle(gls::width_t(2), gls::dim::height(2)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::dim::height(2)));
  REQUIRE(!outside(a, b));
}

TEST_CASE(
  "outside() with positioned_rectangle a's bottom left within "
  "positioned_rectangle b") {
  gls::positioned_rectangle const a(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::dim::height(2)));
  gls::positioned_rectangle const b(
    gls::point(1, 1), gls::rectangle(gls::width_t(2), gls::dim::height(2)));
  REQUIRE(!outside(a, b));
}

TEST_CASE(
  "outside() with positioned_rectangle a on positioned_rectangle b's top "
  "bound") {
  gls::positioned_rectangle const a(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::dim::height(1)));
  gls::positioned_rectangle const b(
    gls::point(0, 1), gls::rectangle(gls::width_t(1), gls::dim::height(1)));
  REQUIRE(!outside(a, b));
}

TEST_CASE(
  "outside() with positioned_rectangle a on positioned_rectangle b's right "
  "bound") {
  gls::positioned_rectangle const a(
    gls::point(1, 0), gls::rectangle(gls::width_t(1), gls::dim::height(1)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::dim::height(1)));
  REQUIRE(!outside(a, b));
}

TEST_CASE(
  "outside() with positioned_rectangle a on positioned_rectangle b's bottom "
  "bound") {
  gls::positioned_rectangle const a(
    gls::point(0, 1), gls::rectangle(gls::width_t(1), gls::dim::height(1)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::dim::height(1)));
  REQUIRE(!outside(a, b));
}

TEST_CASE(
  "outside() with positioned_rectangle a on positioned_rectangle b's left "
  "bound") {
  gls::positioned_rectangle const a(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::dim::height(1)));
  gls::positioned_rectangle const b(
    gls::point(1, 0), gls::rectangle(gls::width_t(1), gls::dim::height(1)));
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with 0-sized rect a outside non-0-sized rect b") {
  gls::positioned_rectangle const a(
    gls::point(0, 0), gls::rectangle(gls::width_t(0), gls::dim::height(0)));
  gls::positioned_rectangle const b(
    gls::point(1, 1), gls::rectangle(gls::width_t(1), gls::dim::height(1)));
  REQUIRE(outside(a, b));
}

TEST_CASE("outside() with 0-sized rect a inside non-0-sized rect b") {
  gls::positioned_rectangle const a(
    gls::point(1, 1), gls::rectangle(gls::width_t(0), gls::dim::height(0)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::dim::height(2)));
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with 0-sized rect a on non-0-sized rect b's top bound") {
  gls::positioned_rectangle const a(
    gls::point(1, 0), gls::rectangle(gls::width_t(0), gls::dim::height(0)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::dim::height(2)));
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with 0-sized rect a on non-0-sized b's right bound") {
  gls::positioned_rectangle const a(
    gls::point(1, 1), gls::rectangle(gls::width_t(0), gls::dim::height(0)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::dim::height(2)));
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with 0-sized rect a on non-0-sized b's bottom bound") {
  gls::positioned_rectangle const a(
    gls::point(1, 1), gls::rectangle(gls::width_t(0), gls::dim::height(0)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::dim::height(1)));
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with 0-sized rect a on non-0-sized rect b's left bound") {
  gls::positioned_rectangle const a(
    gls::point(0, 1), gls::rectangle(gls::width_t(0), gls::dim::height(0)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::dim::height(2)));
  REQUIRE(!outside(a, b));
}
