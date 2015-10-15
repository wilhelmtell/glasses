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
}
