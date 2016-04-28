#ifndef GLS_EVENT_LOOP_TCC_
#define GLS_EVENT_LOOP_TCC_

#include "event_loop.hh"
#include <SDL2/SDL.h>
#include "detail/translate_event.hh"

namespace gls {
template <typename DispatchT, typename App>
void event_loop(DispatchT const* dispatch, App& app, int const& FPS) {
  auto const SECONDS_PER_FRAME = 1.0 / FPS;
  auto const TICKS_PER_SECOND = 1000;  // as per SDL_GetTicks()
  auto const TICKS_PER_FRAME = SECONDS_PER_FRAME * TICKS_PER_SECOND;
  auto tick0 = SDL_GetTicks();
  auto lag = 0.0;
  while(true) {
    auto tick = SDL_GetTicks();
    auto elapsed = tick - tick0;
    lag += elapsed;
    for(SDL_Event e; SDL_PollEvent(&e);) {
      detail::translate_event(e, dispatch);
      if(e.type == SDL_QUIT) return;
    }
    for(; lag >= TICKS_PER_FRAME; lag -= TICKS_PER_FRAME) {
      update(app);
    }
    tick0 = tick;
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
