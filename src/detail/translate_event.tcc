#ifndef GLS_DETAIL_TRANSLATE_EVENT_TCC_
#define GLS_DETAIL_TRANSLATE_EVENT_TCC_

#include "translate_event.hh"
#include <SDL2/SDL.h>
#include "translate_keydown_event.hh"

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_event(SDL_Event const& e, DispatchT const* dispatch) {
  if(e.type == SDL_KEYDOWN) translate_keydown_event(e, dispatch);
}
}
}

#endif
