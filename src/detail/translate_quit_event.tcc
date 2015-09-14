#ifndef GLS_TRANSLATE_QUIT_EVENT_TCC_
#define GLS_TRANSLATE_QUIT_EVENT_TCC_

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_quit_event(SDL_Event const& /*e*/, DispatchT const* dispatch) {
  dispatch->quit();
}
}
}

#endif
