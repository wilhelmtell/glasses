#ifndef TLS_SDL_TTF_SYSTEM_HH_
#define TLS_SDL_TTF_SYSTEM_HH_

namespace tls {
struct sdl_ttf_system {
  sdl_ttf_system();
  sdl_ttf_system(sdl_ttf_system&& rhs);
  sdl_ttf_system& operator=(sdl_ttf_system&& rhs);
  sdl_ttf_system(sdl_ttf_system const& rhs) = delete;
  sdl_ttf_system& operator=(sdl_ttf_system const& rhs) = delete;
  ~sdl_ttf_system();

private:
  bool owning;
};
}

#endif
