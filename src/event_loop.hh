#ifndef GLS_EVENT_LOOP_HH_
#define GLS_EVENT_LOOP_HH_

namespace gls {
template <typename DispatchT, typename UpdateOp, typename RenderOp>
void event_loop(DispatchT const* dispatch, UpdateOp update, RenderOp render);
}

#include "event_loop.tcc"

#endif
