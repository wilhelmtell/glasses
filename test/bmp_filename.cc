#include <catch/catch.hpp>
#include "../src/bmp_filename.hh"
#include <string>

TEST_CASE("default-constructed bmp_filename compiles") {
  gls::bmp_filename t;
}

TEST_CASE("value-initialized bmp_filename zeroes out") {
  gls::bmp_filename const t{};
  REQUIRE(t.c_str() == nullptr);  // XXX: should this be the empty string?
}

TEST_CASE("bmp_filename constructed with a C string compiles") {
  gls::bmp_filename const t("a");
}

TEST_CASE("8 characters bmp_filename constructed with a C string equals c_str()") {
  gls::bmp_filename const t("01234567");
  REQUIRE(std::string("01234567") == t.c_str());
}

TEST_CASE("1 character bmp_filename constructed with a C string equals c_str()") {
  gls::bmp_filename const t("a");
  REQUIRE(std::string("a") == t.c_str());
}

TEST_CASE("empty bmp_filename constructed with a C string equals c_str()") {
  gls::bmp_filename const t("");
  REQUIRE(std::string("") == t.c_str());
}
