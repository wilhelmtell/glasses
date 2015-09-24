#include <catch/catch.hpp>
#include "../src/text.hh"
#include <string>

TEST_CASE("default-constructed text compiles") { gls::text t; }

TEST_CASE("value-initialized text zeroes out") {
  gls::text const t{};
  REQUIRE(t.c_str() == nullptr);  // XXX: should this be the empty string?
}

TEST_CASE("text constructed with a C string compiles") {
  gls::text const t("a");
}

TEST_CASE("8 characters text constructed with a C string equals c_str()") {
  gls::text const t("01234567");
  REQUIRE(std::string("01234567") == t.c_str());
}

TEST_CASE("1 character text constructed with a C string equals c_str()") {
  gls::text const t("a");
  REQUIRE(std::string("a") == t.c_str());
}

TEST_CASE("empty text constructed with a C string equals c_str()") {
  gls::text const t("");
  REQUIRE(std::string("") == t.c_str());
}
