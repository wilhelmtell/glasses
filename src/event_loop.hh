#ifndef GLS_EVENT_LOOP_HH_
#define GLS_EVENT_LOOP_HH_

namespace gls {
template <typename DispatchT, typename App>
void event_loop(DispatchT const* dispatch, App& app);

template <typename T>
void update(T& object);
template <typename T>
void draw(T const& object);
}

#include "event_loop.tcc"

#endif
