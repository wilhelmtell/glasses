#ifndef GLS_EVENT_LOOP_TCC_
#define GLS_EVENT_LOOP_TCC_

#include "event_loop.hh"
#include <SDL2/SDL.h>
#include "detail/translate_event.hh"

namespace gls {
template <typename DispatchT, typename UpdateOp, typename RenderOp>
void event_loop(DispatchT const* dispatch, UpdateOp update, RenderOp render) {
  while(true) {
    for(SDL_Event e; SDL_PollEvent(&e);) {
      if(e.type == SDL_QUIT) return;
      detail::translate_event(e, dispatch);
    }
    update();
    render();
  }
}
}

#endif
