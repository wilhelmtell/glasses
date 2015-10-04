#ifndef GLS_EVENT_LOOP_HH_
#define GLS_EVENT_LOOP_HH_

namespace gls {
template <typename DispatchT, typename App>
void event_loop(DispatchT const* dispatch, App& app);
}

#include "event_loop.tcc"

#endif
