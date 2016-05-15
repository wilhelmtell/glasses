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
      update(app, elapsed);
    }
    tick0 = tick;
    draw(app, lag / TICKS_PER_FRAME);
  }
}

template <typename T, typename D>
void update(T& object, D const& delta) {
  object.update(delta);
}

template <typename T>
void update(T& object) {
  object.update();
}

// the frame to render may not have been completely updated. the frame argument
// expresses what fraction of a frame we render. if U means update, and D means
// draw, then the game loop timeline might look like
//
// U   U   U   U   U
// D     D     D  D
//
// this is because we update at fixed time steps, but render at arbitrary
// points in time. in the diagram above, consider for example the last draw;
// all it has to draw with is the last update's values, and so we have two draw
// calls drawing with the same data. a bullet, to illustrate, would be drawn in
// the same position in two frames.
//
// the frame argument provides the "fraction of a frame" we are to draw. this
// allows us to extrapolate our frame. in the example above, we might get
// 0.6667 for the frame, so we draw with the last update's data "0.6667th of a
// frame into the future". a bullet might therefore be with x from the last
// update set to 100 pixels from the left, and a velocity of 200 pixels per
// frame, and rather than drawing it again at 100px we draw it at
// (100+200*0.6667), or 133.
//
// it may be the case that something would block the bullet at 120px, and so
// the next update would clarify that the bullet should actually stop at 120px,
// but getting the extrapolation wrong should happen less often than stuttering
// would occur if we wouldn't extrapolate at all.
template <typename T, typename F>
void draw(T const& object, F const& frame) {
  object.draw(frame);
}

template <typename T>
void draw(T const& object) {
  object.draw();
}
}

#endif
