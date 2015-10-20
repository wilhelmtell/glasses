#include "event_dispatch.hh"
#include <SDL2/SDL.h>

namespace {
using slot = gls::event_dispatch::slot;
using connection = gls::event_dispatch::connection;
}

namespace {
void push_quit_event_onto_the_sdl_event_queue(SDL_Event const& e) {
  SDL_Event sdl_quit_event;
  sdl_quit_event.type = SDL_QUIT;
  SDL_PushEvent(&sdl_quit_event);
}
}

namespace gls {
event_dispatch::event_dispatch() {
  // it might seem like handling a quit event from the sdl event queue by
  // pusing a quit event onto the sdl event queue would cause a ping-pong
  // effect: translate_event() pumps the event, event_dispatch pushes it back
  // in, translate_event() pumps it, ... but in the case of a quit event,
  // event_loop() breaks immediately after receiving it and translating it for
  // the dispatch. so, a quit event on the sdl queue gets pumped, then
  // dispatched, which pushes it back onto the queue, and then immediately the
  // event loop breaks, before the second quit event gets a chance to be seen.
  on_quit(&::push_quit_event_onto_the_sdl_event_queue);
}

void event_dispatch::quit(SDL_Event const& e) const { quit_signal(e); }

connection event_dispatch::on_quit(slot const& op) {
  return quit_signal.connect(op);
}

void event_dispatch::keydown(SDL_Event const& e) const { keydown_signal(e); }

connection event_dispatch::on_keydown(slot const& op) {
  return keydown_signal.connect(op);
}

void event_dispatch::keyup(SDL_Event const& e) const { keyup_signal(e); }

connection event_dispatch::on_keyup(slot const& op) {
  return keyup_signal.connect(op);
}

void event_dispatch::mousemotion(SDL_Event const& e) const {
  mousemotion_signal(e);
}

connection event_dispatch::on_mousemotion(slot const& op) {
  return mousemotion_signal.connect(op);
}

void event_dispatch::mousebuttondown(SDL_Event const& e) const {
  mousebuttondown_signal(e);
}

connection event_dispatch::on_mousebuttondown(slot const& op) {
  return mousebuttondown_signal.connect(op);
}

void event_dispatch::mousebuttonup(SDL_Event const& e) const {
  mousebuttonup_signal(e);
}

connection event_dispatch::on_mousebuttonup(slot const& op) {
  return mousebuttonup_signal.connect(op);
}

void event_dispatch::userevent(SDL_Event const& e) const {
  userevent_signal(e);
}

connection event_dispatch::on_userevent(slot const& op) {
  return userevent_signal.connect(op);
}
}
