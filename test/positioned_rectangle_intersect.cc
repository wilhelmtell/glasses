#include <catch/catch.hpp>
#include "../src/positioned_rectangle.hh"
#include "../src/point.hh"
#include "../src/width_t.hh"
#include "../src/height_t.hh"

TEST_CASE("intersect() with rect a completely inside rect b") {
  gls::positioned_rectangle const a(
    gls::point(1, 1), gls::rectangle(gls::width_t(1), gls::height_t(1)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(3), gls::height_t(3)));
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rect a completely outside rect b") {
  gls::positioned_rectangle const a(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::height_t(1)));
  gls::positioned_rectangle const b(
    gls::point(2, 2), gls::rectangle(gls::width_t(1), gls::height_t(1)));
  REQUIRE(!intersect(a, b));
}

TEST_CASE("intersect() with rect a's top-right inside rect b") {
  gls::positioned_rectangle const a(
    gls::point(1, 1), gls::rectangle(gls::width_t(3), gls::height_t(3)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::height_t(2)));
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rect a's bottom-left inside rect b") {
  gls::positioned_rectangle const a(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::height_t(2)));
  gls::positioned_rectangle const b(
    gls::point(1, 1), gls::rectangle(gls::width_t(3), gls::height_t(3)));
  REQUIRE(intersect(a, b));
}

TEST_CASE(
  "intersect() with positioned_rectangle a on positioned_rectangle b's top "
  "bound") {
  gls::positioned_rectangle const a(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::height_t(1)));
  gls::positioned_rectangle const b(
    gls::point(0, 1), gls::rectangle(gls::width_t(1), gls::height_t(1)));
  REQUIRE(intersect(a, b));
}

TEST_CASE(
  "intersect() with positioned_rectangle a on positioned_rectangle b's right "
  "bound") {
  gls::positioned_rectangle const a(
    gls::point(1, 0), gls::rectangle(gls::width_t(1), gls::height_t(1)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::height_t(1)));
  REQUIRE(intersect(a, b));
}

TEST_CASE(
  "intersect() with positioned_rectangle a on positioned_rectangle b's bottom "
  "bound") {
  gls::positioned_rectangle const a(
    gls::point(0, 1), gls::rectangle(gls::width_t(1), gls::height_t(1)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::height_t(1)));
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a outside non-0-sized rect b") {
  gls::positioned_rectangle const a(
    gls::point(0, 0), gls::rectangle(gls::width_t(0), gls::height_t(0)));
  gls::positioned_rectangle const b(
    gls::point(1, 1), gls::rectangle(gls::width_t(1), gls::height_t(1)));
  REQUIRE(!intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a inside non-0-sized rect b") {
  gls::positioned_rectangle const a(
    gls::point(1, 1), gls::rectangle(gls::width_t(0), gls::height_t(0)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::height_t(2)));
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a on non-0-sized b's top bound") {
  gls::positioned_rectangle const a(
    gls::point(1, 0), gls::rectangle(gls::width_t(0), gls::height_t(0)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::height_t(2)));
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a on non-0-sized b's right bound") {
  gls::positioned_rectangle const a(
    gls::point(1, 1), gls::rectangle(gls::width_t(0), gls::height_t(0)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::height_t(2)));
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a on non-0-sized b's bottom bound") {
  gls::positioned_rectangle const a(
    gls::point(1, 1), gls::rectangle(gls::width_t(0), gls::height_t(0)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(2), gls::height_t(1)));
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a on non-0-sized b's left bound") {
  gls::positioned_rectangle const a(
    gls::point(0, 1), gls::rectangle(gls::width_t(0), gls::height_t(0)));
  gls::positioned_rectangle const b(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::height_t(2)));
  REQUIRE(intersect(a, b));
}

TEST_CASE(
  "intersect() with positioned_rectangle a on positioned_rectangle b's left "
  "bound") {
  gls::positioned_rectangle const a(
    gls::point(0, 0), gls::rectangle(gls::width_t(1), gls::height_t(1)));
  gls::positioned_rectangle const b(
    gls::point(1, 0), gls::rectangle(gls::width_t(1), gls::height_t(1)));
  REQUIRE(intersect(a, b));
}
