#include <catch/catch.hpp>
#include "../src/basic_length.hh"

namespace test {
struct length_t {};
using length = gls::dim::basic_length<length_t>;
}


TEST_CASE("value-initialized length equals 0") {
  test::length const l{};
  REQUIRE(l == 0);
}

TEST_CASE("direct-initialized length equals the value it was initialized to") {
  test::length const l{4};
  REQUIRE(l == 4);
}

TEST_CASE("length::value_type compiles") {
  test::length::value_type const x{4};
  test::length const l{4};
  REQUIRE(x == l);
}

TEST_CASE("length::operator+=() with a positive rhs") {
  test::length l(4);
  l += 3;
  REQUIRE(l == 7);
}

TEST_CASE("length::operator+=() with a negative rhs") {
  test::length l(4);
  l += -3;
  REQUIRE(l == 1);
}

TEST_CASE("length::operator+=() with a 0 rhs") {
  test::length l(4);
  l += 0;
  REQUIRE(l == 4);
}

TEST_CASE("length::operator+=() capturing the evaluation") {
  test::length a(4), b(0);
  b = a += 3;
  REQUIRE(b == 7);
}

TEST_CASE("length::operator-=() with a positive rhs") {
  test::length l(4);
  l -= 3;
  REQUIRE(l == 1);
}

TEST_CASE("length::operator-=() with a negative rhs") {
  test::length l(4);
  l -= -3;
  REQUIRE(l == 7);
}

TEST_CASE("length::operator-=() with a 0 rhs") {
  test::length l(4);
  l -= 0;
  REQUIRE(l == 4);
}

TEST_CASE("length::operator-=() capturing the evaluation") {
  test::length a(4), b(0);
  b = a -= 3;
  REQUIRE(b == 1);
}

TEST_CASE("length::operator*=() with a positive rhs") {
  test::length l(4);
  l *= 3;
  REQUIRE(l == 12);
}

TEST_CASE("length::operator*=() with a 0 rhs") {
  test::length l(4);
  l *= 0;
  REQUIRE(l == 0);
}

TEST_CASE("length::operator*=() capturing the evaluation") {
  test::length a(4), b(0);
  b = a *= 3;
  REQUIRE(b == 12);
}

TEST_CASE("length::operator/=() with a positive rhs") {
  test::length l(6);
  l /= 3;
  REQUIRE(l == 2);
}

TEST_CASE("length::operator/=() with a non-whole division") {
  test::length l(4);
  l /= 3;
  REQUIRE(l == 1);
}

TEST_CASE("length::operator/=() capturing the evaluation") {
  test::length a(6), b(0);
  b = a /= 3;
  REQUIRE(b == 2);
}

TEST_CASE("operator+(length) with a positive rhs") {
  REQUIRE(test::length(4) + 3 == 7);
}

TEST_CASE("operator+(length) with a negative rhs") {
  REQUIRE(test::length(4) + -3 == 1);
}

TEST_CASE("operator+(length) with a 0 rhs") {
  REQUIRE(test::length(4) + 0 == 4);
}

TEST_CASE("chained operator+(length)") {
  REQUIRE(test::length(4) + 3 + 2 == 9);
}

TEST_CASE("operator-(length) with a positive rhs") {
  REQUIRE(test::length(4) - 3 == 1);
}

TEST_CASE("operator-(length) with a negative rhs") {
  REQUIRE(test::length(4) - -3 == 7);
}

TEST_CASE("operator-(length) with a 0 rhs") {
  REQUIRE(test::length(4) - 0 == 4);
}

TEST_CASE("chained operator-(length)") {
  REQUIRE(test::length(8) - 3 - 2 == 3);
}

TEST_CASE("operator*(length) with a positive rhs") {
  REQUIRE(test::length(4) * 3 == 12);
}

TEST_CASE("operator*(length) with a 0 rhs") {
  REQUIRE(test::length(4) * 0 == 0);
}

TEST_CASE("chained operator*(length)") {
  REQUIRE(test::length(4) * 3 * 2 == 24);
}

TEST_CASE("operator/(length) with a positive rhs") {
  REQUIRE(test::length(6) / 3 == 2);
}

TEST_CASE("operator/(length) with a non-whole division") {
  REQUIRE(test::length(4) / 3 == 1);
}

TEST_CASE("chained operator/(length)") {
  REQUIRE(test::length(8) / 3 / 2 == 1);
}

TEST_CASE("chained operator[-+*/](length)") {
  REQUIRE(test::length(8) + 4 / 2 * 30 - 12 == 56);
}
