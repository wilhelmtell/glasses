#ifndef GLS_TRANSLATE_MOUSE_BUTTONUP_EVENT_TCC_
#define GLS_TRANSLATE_MOUSE_BUTTONUP_EVENT_TCC_

#include <SDL2/SDL.h>
#include "translate_mouse_buttonup_event.hh"

namespace gls {
template <typename DispatchT>
void translate_mouse_buttonup_event(SDL_Event const& e,
                                    DispatchT const* dispatch) {
  if(e.button.button == SDL_BUTTON_LEFT)
    dispatch->mouse.buttonup.left(e.button.x, e.button.y);
  else if(e.button.button == SDL_BUTTON_RIGHT)
    dispatch->mouse.buttonup.right(e.button.x, e.button.y);
  else if(e.button.button == SDL_BUTTON_MIDDLE)
    dispatch->mouse.buttonup.middle(e.button.x, e.button.y);
  else if(e.button.button == SDL_BUTTON_X1)
    dispatch->mouse.buttonup.x1(e.button.x, e.button.y);
  else if(e.button.button == SDL_BUTTON_X2)
    dispatch->mouse.buttonup.x2(e.button.x, e.button.y);
}
}

#endif
