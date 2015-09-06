#include "event_dispatch.hh"
#include <SDL2/SDL.h>

namespace {
void push_quit_event_onto_the_sdl_event_queue() {
  SDL_Event sdl_quit_event;
  SDL_zero(sdl_quit_event);
  sdl_quit_event.type = SDL_QUIT;
  SDL_PushEvent(&sdl_quit_event);
}
}

namespace gls {
event_dispatch::event_dispatch() {
  on_quit(&::push_quit_event_onto_the_sdl_event_queue);
}

void event_dispatch::quit() const { quit_signal(); }

connection event_dispatch::on_quit(quit_slot_t const& op) {
  return quit_signal.connect(op);
}

void event_dispatch::keydown_0() const { keydown_0_signal(); }

connection event_dispatch::on_keydown_0(keydown_0_slot_t const& op) {
  return keydown_0_signal.connect(op);
}

void event_dispatch::keydown_1() const { keydown_1_signal(); }

connection event_dispatch::on_keydown_1(keydown_1_slot_t const& op) {
  return keydown_1_signal.connect(op);
}
}
