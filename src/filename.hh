#ifndef GLS_FILENAME_HH_
#define GLS_FILENAME_HH_

namespace gls {
struct filename {
  filename() = default;
  explicit filename(char const* name);

  char const* c_str() const;

private:
  char const* name;
};
}

#endif
