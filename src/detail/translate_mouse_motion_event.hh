#ifndef GLS_TRANSLATE_MOUSE_MOTION_EVENT_HH_
#define GLS_TRANSLATE_MOUSE_MOTION_EVENT_HH_

#include <SDL2/SDL.h>

namespace gls {
template <typename DispatchT>
void translate_mouse_motion_event(SDL_Event const& e,
                                  DispatchT const* dispatch);
}

#include "translate_mouse_motion_event.tcc"

#endif
