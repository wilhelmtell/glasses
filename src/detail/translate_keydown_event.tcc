#ifndef GLS_DETAIL_TRANSLATE_KEYDOWN_EVENT_TCC_
#define GLS_DETAIL_TRANSLATE_KEYDOWN_EVENT_TCC_

#include <SDL2/SDL.h>
#include "translate_keydown_repeat_event.hh"
#include "translate_keydown_nonrepeat_event.hh"

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_keydown_event(SDL_Event const& e, DispatchT const* dispatch) {
  if(e.key.repeat == 0)
    translate_keydown_nonrepeat_event(e, dispatch);
  else
    translate_keydown_repeat_event(e, dispatch);
}
}
}

#endif
