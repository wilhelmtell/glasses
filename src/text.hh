#ifndef GLS_TEXT_HH_
#define GLS_TEXT_HH_

namespace gls {
struct text {
  text() = default;
  explicit text(char const* t);

  char const* c_str() const;

private:
  char const* t;
};
}

#endif
