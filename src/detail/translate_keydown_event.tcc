#ifndef GLS_DETAIL_TRANSLATE_KEYDOWN_EVENT_TCC_
#define GLS_DETAIL_TRANSLATE_KEYDOWN_EVENT_TCC_

#include <SDL2/SDL.h>

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_keydown_0_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_0();
}

template <typename DispatchT>
void translate_keydown_1_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_1();
}

template <typename DispatchT>
void translate_keydown_2_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_2();
}

template <typename DispatchT>
void translate_keydown_3_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_3();
}

template <typename DispatchT>
void translate_keydown_4_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_4();
}

template <typename DispatchT>
void translate_keydown_5_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_5();
}

template <typename DispatchT>
void translate_keydown_6_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_6();
}

template <typename DispatchT>
void translate_keydown_7_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_7();
}

template <typename DispatchT>
void translate_keydown_8_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_8();
}

template <typename DispatchT>
void translate_keydown_9_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_9();
}

template <typename DispatchT>
void translate_keydown_event(SDL_Event const& e, DispatchT const* dispatch) {
  if(e.key.keysym.sym == SDLK_0) translate_keydown_0_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_1) translate_keydown_1_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_2) translate_keydown_2_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_3) translate_keydown_3_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_4) translate_keydown_4_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_5) translate_keydown_5_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_6) translate_keydown_6_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_7) translate_keydown_7_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_8) translate_keydown_8_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_9) translate_keydown_9_event(e, dispatch);
}
}
}

#endif
