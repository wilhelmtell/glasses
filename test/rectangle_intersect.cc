#include <catch/catch.hpp>
#include "../src/rectangle.hh"
#include "../src/point.hh"
#include "../src/dim/width.hh"
#include "../src/dim/height.hh"

TEST_CASE("intersect() with rect a completely inside rect b") {
  tls::rectangle const a{
    tls::point{1, 1}, tls::dim::width{1}, tls::dim::height{1}};
  tls::rectangle const b{
    tls::point{0, 0}, tls::dim::width{3}, tls::dim::height{3}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rect a completely outside rect b") {
  tls::rectangle const a{
    tls::point{0, 0}, tls::dim::width{1}, tls::dim::height{1}};
  tls::rectangle const b{
    tls::point{2, 2}, tls::dim::width{1}, tls::dim::height{1}};
  REQUIRE(!intersect(a, b));
}

TEST_CASE("intersect() with rect a's top-right inside rect b") {
  tls::rectangle const a{
    tls::point{1, 1}, tls::dim::width{3}, tls::dim::height{3}};
  tls::rectangle const b{
    tls::point{0, 0}, tls::dim::width{2}, tls::dim::height{2}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rect a's bottom-left inside rect b") {
  tls::rectangle const a{
    tls::point{0, 0}, tls::dim::width{2}, tls::dim::height{2}};
  tls::rectangle const b{
    tls::point{1, 1}, tls::dim::width{3}, tls::dim::height{3}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rectangle a on rectangle b's top bound") {
  tls::rectangle const a{
    tls::point{0, 0}, tls::dim::width{1}, tls::dim::height{1}};
  tls::rectangle const b{
    tls::point{0, 1}, tls::dim::width{1}, tls::dim::height{1}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rectangle a on rectangle b's right bound") {
  tls::rectangle const a{
    tls::point{1, 0}, tls::dim::width{1}, tls::dim::height{1}};
  tls::rectangle const b{
    tls::point{0, 0}, tls::dim::width{1}, tls::dim::height{1}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rectangle a on rectangle b's bottom bound") {
  tls::rectangle const a{
    tls::point{0, 1}, tls::dim::width{1}, tls::dim::height{1}};
  tls::rectangle const b{
    tls::point{0, 0}, tls::dim::width{1}, tls::dim::height{1}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a outside non-0-sized rect b") {
  tls::rectangle const a{
    tls::point{0, 0}, tls::dim::width{0}, tls::dim::height{0}};
  tls::rectangle const b{
    tls::point{1, 1}, tls::dim::width{1}, tls::dim::height{1}};
  REQUIRE(!intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a inside non-0-sized rect b") {
  tls::rectangle const a{
    tls::point{1, 1}, tls::dim::width{0}, tls::dim::height{0}};
  tls::rectangle const b{
    tls::point{0, 0}, tls::dim::width{2}, tls::dim::height{2}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a on non-0-sized b's top bound") {
  tls::rectangle const a{
    tls::point{1, 0}, tls::dim::width{0}, tls::dim::height{0}};
  tls::rectangle const b{
    tls::point{0, 0}, tls::dim::width{2}, tls::dim::height{2}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a on non-0-sized b's right bound") {
  tls::rectangle const a{
    tls::point{1, 1}, tls::dim::width{0}, tls::dim::height{0}};
  tls::rectangle const b{
    tls::point{0, 0}, tls::dim::width{1}, tls::dim::height{2}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a on non-0-sized b's bottom bound") {
  tls::rectangle const a{
    tls::point{1, 1}, tls::dim::width{0}, tls::dim::height{0}};
  tls::rectangle const b{
    tls::point{0, 0}, tls::dim::width{2}, tls::dim::height{1}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with 0-sized rect a on non-0-sized b's left bound") {
  tls::rectangle const a{
    tls::point{0, 1}, tls::dim::width{0}, tls::dim::height{0}};
  tls::rectangle const b{
    tls::point{0, 0}, tls::dim::width{1}, tls::dim::height{2}};
  REQUIRE(intersect(a, b));
}

TEST_CASE("intersect() with rectangle a on rectangle b's left bound") {
  tls::rectangle const a{
    tls::point{0, 0}, tls::dim::width{1}, tls::dim::height{1}};
  tls::rectangle const b{
    tls::point{1, 0}, tls::dim::width{1}, tls::dim::height{1}};
  REQUIRE(intersect(a, b));
}
