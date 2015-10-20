#ifndef GLS_EVENT_DISPATCH_HH_
#define GLS_EVENT_DISPATCH_HH_

#include <boost/signals2.hpp>
#include <SDL2/SDL.h>

namespace gls {
struct event_dispatch {
  using signal = boost::signals2::signal<void(SDL_Event const&)>;
  using slot = signal::slot_type;
  using connection = boost::signals2::connection;

  event_dispatch();

  void quit(SDL_Event const& e) const;
  void keydown(SDL_Event const& e) const;
  void keyup(SDL_Event const& e) const;
  void mousemotion(SDL_Event const& e) const;
  void mousebuttondown(SDL_Event const& e) const;
  void mousebuttonup(SDL_Event const& e) const;
  void userevent(SDL_Event const& e) const;

  connection on_quit(slot const& op);
  connection on_keydown(slot const& op);
  connection on_keyup(slot const& op);
  connection on_mousemotion(slot const& op);
  connection on_mousebuttondown(slot const& op);
  connection on_mousebuttonup(slot const& op);
  connection on_userevent(slot const& op);

private:
  signal quit_signal;
  signal keydown_signal;
  signal keyup_signal;
  signal mousemotion_signal;
  signal mousebuttondown_signal;
  signal mousebuttonup_signal;
  signal userevent_signal;
};
}

#endif
