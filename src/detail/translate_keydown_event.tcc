#ifndef GLS_DETAIL_TRANSLATE_KEYDOWN_EVENT_TCC_
#define GLS_DETAIL_TRANSLATE_KEYDOWN_EVENT_TCC_

#include <SDL2/SDL.h>

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_keydown_0_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_0();
}

template <typename DispatchT>
void translate_keydown_1_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_1();
}

template <typename DispatchT>
void translate_keydown_2_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_2();
}

template <typename DispatchT>
void translate_keydown_3_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_3();
}

template <typename DispatchT>
void translate_keydown_4_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_4();
}

template <typename DispatchT>
void translate_keydown_5_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_5();
}

template <typename DispatchT>
void translate_keydown_6_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_6();
}

template <typename DispatchT>
void translate_keydown_7_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_7();
}

template <typename DispatchT>
void translate_keydown_8_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_8();
}

template <typename DispatchT>
void translate_keydown_9_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_9();
}

template <typename DispatchT>
void translate_keydown_a_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_a();
}

template <typename DispatchT>
void translate_keydown_b_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_b();
}

template <typename DispatchT>
void translate_keydown_c_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_c();
}

template <typename DispatchT>
void translate_keydown_d_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_d();
}

template <typename DispatchT>
void translate_keydown_e_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_e();
}

template <typename DispatchT>
void translate_keydown_f_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f();
}

template <typename DispatchT>
void translate_keydown_g_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_g();
}

template <typename DispatchT>
void translate_keydown_h_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_h();
}

template <typename DispatchT>
void translate_keydown_i_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_i();
}

template <typename DispatchT>
void translate_keydown_j_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_j();
}

template <typename DispatchT>
void translate_keydown_k_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_k();
}

template <typename DispatchT>
void translate_keydown_l_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_l();
}

template <typename DispatchT>
void translate_keydown_m_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_m();
}

template <typename DispatchT>
void translate_keydown_n_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_n();
}

template <typename DispatchT>
void translate_keydown_o_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_o();
}

template <typename DispatchT>
void translate_keydown_p_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_p();
}

template <typename DispatchT>
void translate_keydown_q_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_q();
}

template <typename DispatchT>
void translate_keydown_r_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_r();
}

template <typename DispatchT>
void translate_keydown_s_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_s();
}

template <typename DispatchT>
void translate_keydown_t_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_t();
}

template <typename DispatchT>
void translate_keydown_u_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_u();
}

template <typename DispatchT>
void translate_keydown_v_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_v();
}

template <typename DispatchT>
void translate_keydown_w_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_w();
}

template <typename DispatchT>
void translate_keydown_x_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_x();
}

template <typename DispatchT>
void translate_keydown_y_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_y();
}

template <typename DispatchT>
void translate_keydown_z_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_z();
}

template <typename DispatchT>
void translate_keydown_event(SDL_Event const& e, DispatchT const* dispatch) {
  if(e.key.keysym.sym == SDLK_0) translate_keydown_0_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_1) translate_keydown_1_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_2) translate_keydown_2_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_3) translate_keydown_3_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_4) translate_keydown_4_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_5) translate_keydown_5_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_6) translate_keydown_6_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_7) translate_keydown_7_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_8) translate_keydown_8_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_9) translate_keydown_9_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_a) translate_keydown_a_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_b) translate_keydown_b_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_c) translate_keydown_c_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_d) translate_keydown_d_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_e) translate_keydown_e_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_f) translate_keydown_f_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_g) translate_keydown_g_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_h) translate_keydown_h_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_i) translate_keydown_i_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_j) translate_keydown_j_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_k) translate_keydown_k_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_l) translate_keydown_l_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_m) translate_keydown_m_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_n) translate_keydown_n_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_o) translate_keydown_o_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_p) translate_keydown_p_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_q) translate_keydown_q_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_r) translate_keydown_r_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_s) translate_keydown_s_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_t) translate_keydown_t_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_u) translate_keydown_u_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_v) translate_keydown_v_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_w) translate_keydown_w_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_x) translate_keydown_x_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_y) translate_keydown_y_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_z) translate_keydown_z_event(e, dispatch);
}
}
}

#endif
