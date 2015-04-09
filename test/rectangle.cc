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

TEST_CASE("intersect() with rect a completely inside rect b") {
  tls::rectangle const a{tls::point{1, 1}, tls::width{1}, tls::height{1}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{3}, tls::height{3}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rect a completely outside rect b") {
  tls::rectangle const a{tls::point{0, 0}, tls::width{1}, tls::height{1}};
  tls::rectangle const b{tls::point{2, 2}, tls::width{1}, tls::height{1}};
  REQUIRE(!intersect(a, b));
}

TEST_CASE("intersect() with rect a's top-right inside rect b") {
  tls::rectangle const a{tls::point{1, 1}, tls::width{3}, tls::height{3}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rect a's bottom-left inside rect b") {
  tls::rectangle const a{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  tls::rectangle const b{tls::point{1, 1}, tls::width{3}, tls::height{3}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rectangle a on rectangle b's top bound") {
  tls::rectangle const a{tls::point{0, 0}, tls::width{1}, tls::height{1}};
  tls::rectangle const b{tls::point{0, 1}, tls::width{1}, tls::height{1}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rectangle a on rectangle b's right bound") {
  tls::rectangle const a{tls::point{1, 0}, tls::width{1}, tls::height{1}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{1}, tls::height{1}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rectangle a on rectangle b's bottom bound") {
  tls::rectangle const a{tls::point{0, 1}, tls::width{1}, tls::height{1}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{1}, tls::height{1}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a outside non-0-sized rect b") {
  tls::rectangle const a{tls::point{0, 0}, tls::width{0}, tls::height{0}};
  tls::rectangle const b{tls::point{1, 1}, tls::width{1}, tls::height{1}};
  REQUIRE(!intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a inside non-0-sized rect b") {
  tls::rectangle const a{tls::point{1, 1}, tls::width{0}, tls::height{0}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a on non-0-sized b's top bound") {
  tls::rectangle const a{tls::point{1, 0}, tls::width{0}, tls::height{0}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a on non-0-sized b's right bound") {
  tls::rectangle const a{tls::point{1, 1}, tls::width{0}, tls::height{0}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{1}, tls::height{2}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a on non-0-sized b's bottom bound") {
  tls::rectangle const a{tls::point{1, 1}, tls::width{0}, tls::height{0}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{2}, tls::height{1}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a on non-0-sized b's left bound") {
  tls::rectangle const a{tls::point{0, 1}, tls::width{0}, tls::height{0}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{1}, tls::height{2}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rectangle a on rectangle b's left bound") {
  tls::rectangle const a{tls::point{0, 0}, tls::width{1}, tls::height{1}};
  tls::rectangle const b{tls::point{1, 0}, tls::width{1}, tls::height{1}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("outside() with rectangle a completely outside rectangle b") {
  tls::rectangle const a{tls::point{0, 0}, tls::width{1}, tls::height{1}};
  tls::rectangle const b{tls::point{2, 2}, tls::width{3}, tls::height{3}};
  REQUIRE(outside(a, b));
}

TEST_CASE("outside() with rectangle a completely inside rectangle b") {
  tls::rectangle const a{tls::point{1, 1}, tls::width{1}, tls::height{1}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{3}, tls::height{3}};
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with rectangle a's top right within rectangle b") {
  tls::rectangle const a{tls::point{1, 1}, tls::width{2}, tls::height{2}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with rectangle a's bottom left within rectangle b") {
  tls::rectangle const a{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  tls::rectangle const b{tls::point{1, 1}, tls::width{2}, tls::height{2}};
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with rectangle a on rectangle b's top bound") {
  tls::rectangle const a{tls::point{0, 0}, tls::width{1}, tls::height{1}};
  tls::rectangle const b{tls::point{0, 1}, tls::width{1}, tls::height{1}};
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with rectangle a on rectangle b's right bound") {
  tls::rectangle const a{tls::point{1, 0}, tls::width{1}, tls::height{1}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{1}, tls::height{1}};
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with rectangle a on rectangle b's bottom bound") {
  tls::rectangle const a{tls::point{0, 1}, tls::width{1}, tls::height{1}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{1}, tls::height{1}};
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with rectangle a on rectangle b's left bound") {
  tls::rectangle const a{tls::point{0, 0}, tls::width{1}, tls::height{1}};
  tls::rectangle const b{tls::point{1, 0}, tls::width{1}, tls::height{1}};
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with 0-sized rect a outside non-0-sized rect b") {
  tls::rectangle const a{tls::point{0, 0}, tls::width{0}, tls::height{0}};
  tls::rectangle const b{tls::point{1, 1}, tls::width{1}, tls::height{1}};
  REQUIRE(outside(a, b));
}

TEST_CASE("outside() with 0-sized rect a inside non-0-sized rect b") {
  tls::rectangle const a{tls::point{1, 1}, tls::width{0}, tls::height{0}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with 0-sized rect a on non-0-sized rect b's top bound") {
  tls::rectangle const a{tls::point{1, 0}, tls::width{0}, tls::height{0}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with 0-sized rect a on non-0-sized b's right bound") {
  tls::rectangle const a{tls::point{1, 1}, tls::width{0}, tls::height{0}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{1}, tls::height{2}};
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with 0-sized rect a on non-0-sized b's bottom bound") {
  tls::rectangle const a{tls::point{1, 1}, tls::width{0}, tls::height{0}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{2}, tls::height{1}};
  REQUIRE(!outside(a, b));
}

TEST_CASE("outside() with 0-sized rect a on non-0-sized rect b's left bound") {
  tls::rectangle const a{tls::point{0, 1}, tls::width{0}, tls::height{0}};
  tls::rectangle const b{tls::point{0, 0}, tls::width{1}, tls::height{2}};
  REQUIRE(!outside(a, b));
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

TEST_CASE("bottom_right() of rectangle in Q3") {
  tls::point const x{5, 5};
  tls::rectangle const r{tls::point{2, 1}, tls::width{3}, tls::height{4}};
  REQUIRE(x == tls::bottom_right(r));
}
