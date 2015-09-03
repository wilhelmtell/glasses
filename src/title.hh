#ifndef TLS_TITLE_HH_
#define TLS_TITLE_HH_

namespace tls {
struct title {
  title() = default;
  explicit title(char const* t);

  char const* c_str() const;

private:
  char const* t;
};
}

#endif
