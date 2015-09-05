#ifndef GLS_TITLE_HH_
#define GLS_TITLE_HH_

namespace gls {
struct title {
  title() = default;
  explicit title(char const* t);

  char const* c_str() const;

private:
  char const* t;
};
}

#endif
