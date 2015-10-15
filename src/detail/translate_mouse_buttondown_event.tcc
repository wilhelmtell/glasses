#ifndef GLS_TRANSLATE_MOUSE_BUTTONDOWN_EVENT_TCC_
#define GLS_TRANSLATE_MOUSE_BUTTONDOWN_EVENT_TCC_

#include <SDL2/SDL.h>
#include "translate_mouse_buttondown_event.hh"

namespace gls {
template <typename DispatchT>
void translate_mouse_buttondown_event(SDL_Event const& e,
                                      DispatchT const* dispatch) {
  if(e.button.button == SDL_BUTTON_LEFT)
    dispatch->mouse.buttondown.left(e.button.x, e.button.y);
  else if(e.button.button == SDL_BUTTON_RIGHT)
    dispatch->mouse.buttondown.right(e.button.x, e.button.y);
  else if(e.button.button == SDL_BUTTON_MIDDLE)
    dispatch->mouse.buttondown.middle(e.button.x, e.button.y);
  else if(e.button.button == SDL_BUTTON_X1)
    dispatch->mouse.buttondown.x1(e.button.x, e.button.y);
  else if(e.button.button == SDL_BUTTON_X2)
    dispatch->mouse.buttondown.x2(e.button.x, e.button.y);
}
}

#endif
