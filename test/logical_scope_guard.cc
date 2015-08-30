#include <catch/catch.hpp>
#include "../src/logical_scope_guard.hh"

TEST_CASE("logical_scope_guard ctor") {
  int cleanup_touched = 0;

  SECTION("no cleanup with default ctor inside guard scope") {
    tls::logical_scope_guard guard;
    REQUIRE(cleanup_touched == 0);
  }

  SECTION("no cleanup with default ctor outside guard scope") {
    { tls::logical_scope_guard guard; }
    REQUIRE(cleanup_touched == 0);
  }

  SECTION("no cleanup with cleanup ctor inside guard scope") {
    tls::logical_scope_guard guard([&]() { ++cleanup_touched; });
    REQUIRE(cleanup_touched == 0);
  }

  SECTION("cleanup with cleanup ctor outside guard scope") {
    {
      tls::logical_scope_guard guard([&]() { ++cleanup_touched; });
    }
    REQUIRE(cleanup_touched == 1);
  }

  SECTION("no cleanup with init and cleanup ctor inside guard scope") {
    tls::logical_scope_guard guard([&]() {}, [&]() { ++cleanup_touched; });
    REQUIRE(cleanup_touched == 0);
  }

  SECTION("cleanup with init and cleanup ctor outside guard scope") {
    {
      tls::logical_scope_guard guard([&]() {}, [&]() { ++cleanup_touched; });
    }
    REQUIRE(cleanup_touched == 1);
  }
  SECTION("init with init and cleanup ctor inside guard scope") {
    int init_touched = 0;
    tls::logical_scope_guard guard([&]() { ++init_touched; }, [&]() {});
    REQUIRE(init_touched == 1);
  }

  SECTION("init with init and cleanup ctor outside guard scope") {
    int init_touched = 0;
    {
      tls::logical_scope_guard guard([&]() { ++init_touched; }, [&]() {});
    }
    REQUIRE(init_touched == 1);
  }

  SECTION("init and cleaup with init and cleanup ctor inside guard scope") {
    int init_touched = 0;
    tls::logical_scope_guard guard([&]() { ++init_touched; },
                                   [&]() { ++cleanup_touched; });
    REQUIRE(init_touched == 1);
    REQUIRE(cleanup_touched == 0);
  }

  SECTION("init and cleaup with init and cleanup ctor outside guard scope") {
    int init_touched = 0;
    {
      tls::logical_scope_guard guard([&]() { ++init_touched; },
                                     [&]() { ++cleanup_touched; });
    }
    REQUIRE(init_touched == 1);
    REQUIRE(cleanup_touched == 1);
  }

  SECTION("no cleanup with default ctor inside guard scope, and a move") {
    tls::logical_scope_guard guard;
    tls::logical_scope_guard guard2(std::move(guard));
    REQUIRE(cleanup_touched == 0);
  }

  SECTION("no cleanup with default ctor outside guard scope, and a move") {
    {
      tls::logical_scope_guard guard;
      tls::logical_scope_guard guard2(std::move(guard));
    }
    REQUIRE(cleanup_touched == 0);
  }

  SECTION("no cleanup with cleanup ctor inside guard scope, and a move") {
    tls::logical_scope_guard guard([&]() { ++cleanup_touched; });
    auto guard2 = std::move(guard);
    REQUIRE(cleanup_touched == 0);
  }

  SECTION("cleanup with cleanup ctor outside guard scope, and a move") {
    {
      tls::logical_scope_guard guard([&]() { ++cleanup_touched; });
      auto guard2 = std::move(guard);
    }
    REQUIRE(cleanup_touched == 1);
  }

  SECTION(
    "no cleanup with init and cleanup ctor inside guard scope, and a move") {
    tls::logical_scope_guard guard([&]() {}, [&]() { ++cleanup_touched; });
    auto guard2 = std::move(guard);
    REQUIRE(cleanup_touched == 0);
  }

  SECTION(
    "cleanup with init and cleanup ctor outside guard scope, and a move") {
    {
      tls::logical_scope_guard guard([&]() {}, [&]() { ++cleanup_touched; });
      auto guard2 = std::move(guard);
    }
    REQUIRE(cleanup_touched == 1);
  }

  SECTION("init with init and cleanup ctor inside guard scope, and a move") {
    int init_touched = 0;
    tls::logical_scope_guard guard([&]() { ++init_touched; }, [&]() {});
    auto guard2 = std::move(guard);
    REQUIRE(init_touched == 1);
  }

  SECTION("init with init and cleanup ctor outside guard scope, and a move") {
    int init_touched = 0;
    {
      tls::logical_scope_guard guard([&]() { ++init_touched; }, [&]() {});
      auto guard2 = std::move(guard);
    }
    REQUIRE(init_touched == 1);
  }

  SECTION(
    "init and cleaup with init and cleanup ctor inside guard scope, and a "
    "move") {
    int init_touched = 0;
    tls::logical_scope_guard guard([&]() { ++init_touched; },
                                   [&]() { ++cleanup_touched; });
    auto guard2 = std::move(guard);
    REQUIRE(init_touched == 1);
    REQUIRE(cleanup_touched == 0);
  }

  SECTION(
    "init and cleaup with init and cleanup ctor outside guard scope, and a "
    "move") {
    int init_touched = 0;
    {
      tls::logical_scope_guard guard([&]() { ++init_touched; },
                                     [&]() { ++cleanup_touched; });
      auto guard2 = std::move(guard);
    }
    REQUIRE(init_touched == 1);
    REQUIRE(cleanup_touched == 1);
  }

  SECTION(
    "no cleanup with default ctor inside guard scope, and a move-assign") {
    tls::logical_scope_guard guard;
    tls::logical_scope_guard guard2;
    guard2 = std::move(guard);
    REQUIRE(cleanup_touched == 0);
  }

  SECTION(
    "no cleanup with default ctor outside guard scope, and a move-assign") {
    {
      tls::logical_scope_guard guard;
      tls::logical_scope_guard guard2;
      guard2 = std::move(guard);
    }
    REQUIRE(cleanup_touched == 0);
  }

  SECTION(
    "no cleanup with cleanup ctor inside guard scope, and a move-assign") {
    tls::logical_scope_guard guard([&]() { ++cleanup_touched; });
    tls::logical_scope_guard guard2;
    guard2 = std::move(guard);
    REQUIRE(cleanup_touched == 0);
  }

  SECTION("cleanup with cleanup ctor outside guard scope, and a move-assign") {
    {
      tls::logical_scope_guard guard([&]() { ++cleanup_touched; });
      tls::logical_scope_guard guard2;
      guard2 = std::move(guard);
    }
    REQUIRE(cleanup_touched == 1);
  }

  SECTION(
    "no cleanup with init and cleanup ctor inside guard scope, and a "
    "move-assign") {
    tls::logical_scope_guard guard([&]() {}, [&]() { ++cleanup_touched; });
    tls::logical_scope_guard guard2;
    guard2 = std::move(guard);
    REQUIRE(cleanup_touched == 0);
  }

  SECTION(
    "cleanup with init and cleanup ctor outside guard scope, and a "
    "move-assign") {
    {
      tls::logical_scope_guard guard([&]() {}, [&]() { ++cleanup_touched; });
      tls::logical_scope_guard guard2;
      guard2 = std::move(guard);
    }
    REQUIRE(cleanup_touched == 1);
  }

  SECTION(
    "init with init and cleanup ctor inside guard scope, and a move-assign") {
    int init_touched = 0;
    tls::logical_scope_guard guard([&]() { ++init_touched; }, [&]() {});
    tls::logical_scope_guard guard2;
    guard2 = std::move(guard);
    REQUIRE(init_touched == 1);
  }

  SECTION(
    "init with init and cleanup ctor outside guard scope, and a move-assign") {
    int init_touched = 0;
    {
      tls::logical_scope_guard guard([&]() { ++init_touched; }, [&]() {});
      tls::logical_scope_guard guard2;
      guard2 = std::move(guard);
    }
    REQUIRE(init_touched == 1);
  }

  SECTION(
    "init and cleaup with init and cleanup ctor inside guard scope, and a "
    "move-assign") {
    int init_touched = 0;
    tls::logical_scope_guard guard([&]() { ++init_touched; },
                                   [&]() { ++cleanup_touched; });
    tls::logical_scope_guard guard2;
    guard2 = std::move(guard);
    REQUIRE(init_touched == 1);
    REQUIRE(cleanup_touched == 0);
  }

  SECTION(
    "init and cleaup with init and cleanup ctor outside guard scope, and a "
    "move-assign") {
    int init_touched = 0;
    {
      tls::logical_scope_guard guard([&]() { ++init_touched; },
                                     [&]() { ++cleanup_touched; });
      tls::logical_scope_guard guard2;
      guard2 = std::move(guard);
    }
    REQUIRE(init_touched == 1);
    REQUIRE(cleanup_touched == 1);
  }
}
