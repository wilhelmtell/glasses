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

void event_dispatch::keydown_2() const { keydown_2_signal(); }

connection event_dispatch::on_keydown_2(keydown_2_slot_t const& op) {
  return keydown_2_signal.connect(op);
}

void event_dispatch::keydown_3() const { keydown_3_signal(); }

connection event_dispatch::on_keydown_3(keydown_3_slot_t const& op) {
  return keydown_3_signal.connect(op);
}

void event_dispatch::keydown_4() const { keydown_4_signal(); }

connection event_dispatch::on_keydown_4(keydown_4_slot_t const& op) {
  return keydown_4_signal.connect(op);
}

void event_dispatch::keydown_5() const { keydown_5_signal(); }

connection event_dispatch::on_keydown_5(keydown_5_slot_t const& op) {
  return keydown_5_signal.connect(op);
}

void event_dispatch::keydown_6() const { keydown_6_signal(); }

connection event_dispatch::on_keydown_6(keydown_6_slot_t const& op) {
  return keydown_6_signal.connect(op);
}

void event_dispatch::keydown_7() const { keydown_7_signal(); }

connection event_dispatch::on_keydown_7(keydown_7_slot_t const& op) {
  return keydown_7_signal.connect(op);
}

void event_dispatch::keydown_8() const { keydown_8_signal(); }

connection event_dispatch::on_keydown_8(keydown_8_slot_t const& op) {
  return keydown_8_signal.connect(op);
}

void event_dispatch::keydown_9() const { keydown_9_signal(); }

connection event_dispatch::on_keydown_9(keydown_9_slot_t const& op) {
  return keydown_9_signal.connect(op);
}
}
