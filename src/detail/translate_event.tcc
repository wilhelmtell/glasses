#ifndef GLS_DETAIL_TRANSLATE_EVENT_TCC_
#define GLS_DETAIL_TRANSLATE_EVENT_TCC_

#include "translate_event.hh"
#include <SDL2/SDL.h>

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_event(SDL_Event const& e, DispatchT const* d) {
  if(e.type == SDL_QUIT)
    d->quit(e);
  else if(e.type == SDL_KEYDOWN)
    d->keydown(e);
  else if(e.type == SDL_KEYUP)
    d->keyup(e);
  else if(e.type == SDL_MOUSEMOTION)
    d->mousemotion(e);
  else if(e.type == SDL_MOUSEBUTTONDOWN)
    d->mousebuttondown(e);
  else if(e.type == SDL_MOUSEBUTTONUP)
    d->mousebuttonup(e);
  else if(e.type == SDL_USEREVENT)
    d->userevent(e);
}
}
}

#endif
