#include <catch/catch.hpp>
#include "../src/logical_init.hh"

TEST_CASE("logical_init ctor") {
  int cleanup_touched = 0;

  SECTION("init with init ctor inside scope") {
    int touched = 0;
    tls::logical_init init([&]() { ++touched; });
    REQUIRE(touched == 1);
  }

  SECTION("init with init ctor outside scope") {
    int touched = 0;
    {
      tls::logical_init init([&]() { ++touched; });
    }
    REQUIRE(touched == 1);
  }

  SECTION("init with init ctor inside scope, and a move") {
    int touched = 0;
    tls::logical_init init([&]() { ++touched; });
    auto init2 = std::move(init);
    REQUIRE(touched == 1);
  }

  SECTION("init with init ctor outside scope, and a move") {
    int touched = 0;
    {
      tls::logical_init init([&]() { ++touched; });
      auto init2 = std::move(init);
    }
    REQUIRE(touched == 1);
  }

  SECTION("init with init ctor inside scope, and a move-assign") {
    int touched = 0;
    tls::logical_init init([&]() { ++touched; });
    tls::logical_init init2;
    init2 = std::move(init);
    REQUIRE(touched == 1);
  }

  SECTION("init with init ctor outside scope, and a move-assign") {
    int touched = 0;
    {
      tls::logical_init init([&]() { ++touched; });
      tls::logical_init init2;
      init2 = std::move(init);
    }
    REQUIRE(touched == 1);
  }
}
