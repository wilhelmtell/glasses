#ifndef GLS_DETAIL_TRANSLATE_KEYDOWN_EVENT_HH_
#define GLS_DETAIL_TRANSLATE_KEYDOWN_EVENT_HH_

#include <SDL2/SDL.h>

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_keydown_0_event(SDL_Event const& e, DispatchT const* dispatch);
template <typename DispatchT>
void translate_keydown_1_event(SDL_Event const& e, DispatchT const* dispatch);
template <typename DispatchT>
void translate_keydown_event(SDL_Event const& e, DispatchT const* dispatch);
}
}

#include "translate_keydown_event.tcc"

#endif
