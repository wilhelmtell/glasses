#ifndef GLS_TRANSLATE_QUIT_EVENT_HH_
#define GLS_TRANSLATE_QUIT_EVENT_HH_

#include <SDL2/SDL.h>

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_quit_event(SDL_Event const& e, DispatchT const* dispatch);
}
}

#include "translate_quit_event.tcc"

#endif
