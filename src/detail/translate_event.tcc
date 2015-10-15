#ifndef GLS_DETAIL_TRANSLATE_EVENT_TCC_
#define GLS_DETAIL_TRANSLATE_EVENT_TCC_

#include "translate_event.hh"
#include <SDL2/SDL.h>
#include "translate_quit_event.hh"
#include "translate_keydown_event.hh"
#include "translate_keyup_event.hh"
#include "translate_mouse_motion_event.hh"
#include "translate_mouse_buttondown_event.hh"
#include "translate_mouse_buttonup_event.hh"

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_event(SDL_Event const& e, DispatchT const* dispatch) {
  if(e.type == SDL_QUIT)
    translate_quit_event(e, dispatch);
  else if(e.type == SDL_KEYDOWN)
    translate_keydown_repeat_and_nonrepeat_event(e, dispatch);
  else if(e.type == SDL_KEYUP)
    translate_keyup_event(e, dispatch);
  else if(e.type == SDL_MOUSEMOTION)
    translate_mouse_motion_event(e, dispatch);
  else if(e.type == SDL_MOUSEBUTTONDOWN)
    translate_mouse_buttondown_event(e, dispatch);
  else if(e.type == SDL_MOUSEBUTTONUP)
    translate_mouse_buttonup_event(e, dispatch);
}
}
}

#endif
