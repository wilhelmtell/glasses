#ifndef GLS_EVENT_LOOP_HH_
#define GLS_EVENT_LOOP_HH_

namespace gls {
template <typename DispatchT, typename App>
void event_loop(DispatchT const* dispatch, App& app, int const& FPS = 60);

template <typename T, typename D>
void update(T& object, D const& delta);
template <typename T>
void update(T& object);
template <typename T>
void draw(T const& object);
}

#include "event_loop.tcc"

#endif
