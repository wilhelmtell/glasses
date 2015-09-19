#include <catch/catch.hpp>
#include "../src/text.hh"

TEST_CASE("default-constructed text compiles") {
  gls::text t;
}

TEST_CASE("text constructed with a C string compiles") {
  gls::text const t("a");
}
