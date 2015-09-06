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
void translate_keydown_2_event(SDL_Event const& e, DispatchT const* dispatch);
template <typename DispatchT>
void translate_keydown_3_event(SDL_Event const& e, DispatchT const* dispatch);
template <typename DispatchT>
void translate_keydown_4_event(SDL_Event const& e, DispatchT const* dispatch);
template <typename DispatchT>
void translate_keydown_5_event(SDL_Event const& e, DispatchT const* dispatch);
template <typename DispatchT>
void translate_keydown_6_event(SDL_Event const& e, DispatchT const* dispatch);
template <typename DispatchT>
void translate_keydown_7_event(SDL_Event const& e, DispatchT const* dispatch);
template <typename DispatchT>
void translate_keydown_8_event(SDL_Event const& e, DispatchT const* dispatch);
template <typename DispatchT>
void translate_keydown_9_event(SDL_Event const& e, DispatchT const* dispatch);
template <typename DispatchT>
void translate_keydown_event(SDL_Event const& e, DispatchT const* dispatch);
}
}

#include "translate_keydown_event.tcc"

#endif
