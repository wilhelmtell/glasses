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
void translate_keydown_event(SDL_Event const& e, DispatchT const* dispatch) {
  if(e.key.keysym.sym == SDLK_0) translate_keydown_0_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_1) translate_keydown_1_event(e, dispatch);
}
}
}

#endif
