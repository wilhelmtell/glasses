#ifndef GLS_DETAIL_TRANSLATE_EVENT_HH_
#define GLS_DETAIL_TRANSLATE_EVENT_HH_

#include <SDL2/SDL.h>

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_event(SDL_Event const& e, DispatchT const* dispatch);
}
}

#include "translate_event.tcc"

#endif
