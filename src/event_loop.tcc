#ifndef GLS_EVENT_LOOP_TCC_
#define GLS_EVENT_LOOP_TCC_

#include "event_loop.hh"
#include <SDL2/SDL.h>
#include "detail/translate_event.hh"

namespace gls {
template <typename DispatchT, typename App>
void event_loop(DispatchT const* dispatch, App& app) {
  while(true) {
    for(SDL_Event e; SDL_PollEvent(&e);) {
      detail::translate_event(e, dispatch);
      if(e.type == SDL_QUIT) return;
    }
    update(app);
    draw(app);
  }
}

template <typename T>
void update(T& object) {
  object.update();
}

template <typename T>
void draw(T const& object) {
  object.draw();
}
}

#endif
