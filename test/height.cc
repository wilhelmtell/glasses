#include <catch/catch.hpp>
#include "../src/height.hh"

TEST_CASE("value-initialized height equals 0") {
  gls::dim::height const h{};
  REQUIRE(h == 0);
}

TEST_CASE("direct-initialized height equals the value it was initialized to") {
  gls::dim::height const h{4};
  REQUIRE(h == 4);
}

TEST_CASE("height::value_type compiles") {
  gls::dim::height::value_type const x{4};
  gls::dim::height const h{4};
  REQUIRE(x == h);
}

TEST_CASE("height::operator+=() with a positive rhs") {
  gls::dim::height h(4);
  h += 3;
  REQUIRE(h == 7);
}

TEST_CASE("height::operator+=() with a negative rhs") {
  gls::dim::height h(4);
  h += -3;
  REQUIRE(h == 1);
}

TEST_CASE("height::operator+=() with a 0 rhs") {
  gls::dim::height h(4);
  h += 0;
  REQUIRE(h == 4);
}

TEST_CASE("height::operator+=() capturing the evaluation") {
  gls::dim::height a(4), b(0);
  b = a += 3;
  REQUIRE(b == 7);
}

TEST_CASE("height::operator-=() with a positive rhs") {
  gls::dim::height h(4);
  h -= 3;
  REQUIRE(h == 1);
}

TEST_CASE("height::operator-=() with a negative rhs") {
  gls::dim::height h(4);
  h -= -3;
  REQUIRE(h == 7);
}

TEST_CASE("height::operator-=() with a 0 rhs") {
  gls::dim::height h(4);
  h -= 0;
  REQUIRE(h == 4);
}

TEST_CASE("height::operator-=() capturing the evaluation") {
  gls::dim::height a(4), b(0);
  b = a -= 3;
  REQUIRE(b == 1);
}

TEST_CASE("height::operator*=() with a positive rhs") {
  gls::dim::height h(4);
  h *= 3;
  REQUIRE(h == 12);
}

TEST_CASE("height::operator*=() with a 0 rhs") {
  gls::dim::height h(4);
  h *= 0;
  REQUIRE(h == 0);
}

TEST_CASE("height::operator*=() capturing the evaluation") {
  gls::dim::height a(4), b(0);
  b = a *= 3;
  REQUIRE(b == 12);
}

TEST_CASE("height::operator/=() with a positive rhs") {
  gls::dim::height h(6);
  h /= 3;
  REQUIRE(h == 2);
}

TEST_CASE("height::operator/=() with a non-whole division") {
  gls::dim::height h(4);
  h /= 3;
  REQUIRE(h == 1);
}

TEST_CASE("height::operator/=() capturing the evaluation") {
  gls::dim::height a(6), b(0);
  b = a /= 3;
  REQUIRE(b == 2);
}

TEST_CASE("operator+(height) with a positive rhs") {
  REQUIRE(gls::dim::height(4) + 3 == 7);
}

TEST_CASE("operator+(height) with a negative rhs") {
  REQUIRE(gls::dim::height(4) + -3 == 1);
}

TEST_CASE("operator+(height) with a 0 rhs") {
  REQUIRE(gls::dim::height(4) + 0 == 4);
}

TEST_CASE("chained operator+(height)") {
  REQUIRE(gls::dim::height(4) + 3 + 2 == 9);
}

TEST_CASE("operator-(height) with a positive rhs") {
  REQUIRE(gls::dim::height(4) - 3 == 1);
}

TEST_CASE("operator-(height) with a negative rhs") {
  REQUIRE(gls::dim::height(4) - -3 == 7);
}

TEST_CASE("operator-(height) with a 0 rhs") {
  REQUIRE(gls::dim::height(4) - 0 == 4);
}

TEST_CASE("chained operator-(height)") {
  REQUIRE(gls::dim::height(8) - 3 - 2 == 3);
}

TEST_CASE("operator*(height) with a positive rhs") {
  REQUIRE(gls::dim::height(4) * 3 == 12);
}

TEST_CASE("operator*(height) with a 0 rhs") {
  REQUIRE(gls::dim::height(4) * 0 == 0);
}

TEST_CASE("chained operator*(height)") {
  REQUIRE(gls::dim::height(4) * 3 * 2 == 24);
}

TEST_CASE("operator/(height) with a positive rhs") {
  REQUIRE(gls::dim::height(6) / 3 == 2);
}

TEST_CASE("operator/(height) with a non-whole division") {
  REQUIRE(gls::dim::height(4) / 3 == 1);
}

TEST_CASE("chained operator/(height)") {
  REQUIRE(gls::dim::height(8) / 3 / 2 == 1);
}

TEST_CASE("chained operator[-+*/](height)") {
  REQUIRE(gls::dim::height(8) + 4 / 2 * 30 - 12 == 56);
}
