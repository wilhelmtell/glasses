#ifndef GLS_EVENT_LOOP_TCC_
#define GLS_EVENT_LOOP_TCC_

#include "event_loop.hh"
#include <SDL2/SDL.h>
#include "detail/translate_event.hh"

namespace gls {
template <typename DispatchT, typename App>
void event_loop(DispatchT const* dispatch, App& app, int const& FPS) {
  auto t0 = SDL_GetTicks();
  while(true) {
    for(SDL_Event e; SDL_PollEvent(&e);) {
      detail::translate_event(e, dispatch);
      if(e.type == SDL_QUIT) return;
    }
    auto t1 = SDL_GetTicks();
    while(t1 - t0 < (1000u / FPS)) {
      update(app);
      t1 = SDL_GetTicks();
    }
    t0 = t1;
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
