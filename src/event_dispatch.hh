#ifndef GLS_EVENT_DISPATCH_HH_
#define GLS_EVENT_DISPATCH_HH_

#include <boost/signals2.hpp>
#include <SDL2/SDL.h>

namespace gls {
struct event_dispatch {
  template <typename T>
  using signal = boost::signals2::signal<T>;
  template <typename T>
  using slot = typename signal<T>::slot_type;

  using signal_sdl = signal<void(SDL_Event const&)>;
  using slot_sdl = signal_sdl::slot_type;
  using connection = boost::signals2::connection;
  using scoped_connection = boost::signals2::scoped_connection;

  event_dispatch();

  void quit(SDL_Event const& e) const;
  void keydown(SDL_Event const& e) const;
  void keyup(SDL_Event const& e) const;
  void mousemotion(SDL_Event const& e) const;
  void mousebuttondown(SDL_Event const& e) const;
  void mousebuttonup(SDL_Event const& e) const;
  void userevent(SDL_Event const& e) const;

  connection on_quit(slot_sdl const& op);
  connection on_keydown(slot_sdl const& op);
  connection on_keyup(slot_sdl const& op);
  connection on_mousemotion(slot_sdl const& op);
  connection on_mousebuttondown(slot_sdl const& op);
  connection on_mousebuttonup(slot_sdl const& op);
  connection on_userevent(slot_sdl const& op);

private:
  signal_sdl quit_signal;
  signal_sdl keydown_signal;
  signal_sdl keyup_signal;
  signal_sdl mousemotion_signal;
  signal_sdl mousebuttondown_signal;
  signal_sdl mousebuttonup_signal;
  signal_sdl userevent_signal;
};
}

#endif
