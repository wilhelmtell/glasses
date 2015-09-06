#include "event_dispatch.hh"
#include <SDL2/SDL.h>

namespace {
void push_quit_event_onto_the_sdl_event_queue() {
  SDL_Event sdl_quit_event;
  SDL_zero(sdl_quit_event);
  sdl_quit_event.type = SDL_QUIT;
  SDL_PushEvent(&sdl_quit_event);
}
}

namespace gls {
event_dispatch::event_dispatch() {
  on_quit(&::push_quit_event_onto_the_sdl_event_queue);
}

void event_dispatch::quit() const { quit_signal(); }

connection event_dispatch::on_quit(quit_slot_t const& op) {
  return quit_signal.connect(op);
}

void event_dispatch::keydown_0() const { keydown_0_signal(); }

connection event_dispatch::on_keydown_0(keydown_0_slot_t const& op) {
  return keydown_0_signal.connect(op);
}

void event_dispatch::keydown_1() const { keydown_1_signal(); }

connection event_dispatch::on_keydown_1(keydown_1_slot_t const& op) {
  return keydown_1_signal.connect(op);
}

void event_dispatch::keydown_2() const { keydown_2_signal(); }

connection event_dispatch::on_keydown_2(keydown_2_slot_t const& op) {
  return keydown_2_signal.connect(op);
}

void event_dispatch::keydown_3() const { keydown_3_signal(); }

connection event_dispatch::on_keydown_3(keydown_3_slot_t const& op) {
  return keydown_3_signal.connect(op);
}

void event_dispatch::keydown_4() const { keydown_4_signal(); }

connection event_dispatch::on_keydown_4(keydown_4_slot_t const& op) {
  return keydown_4_signal.connect(op);
}

void event_dispatch::keydown_5() const { keydown_5_signal(); }

connection event_dispatch::on_keydown_5(keydown_5_slot_t const& op) {
  return keydown_5_signal.connect(op);
}

void event_dispatch::keydown_6() const { keydown_6_signal(); }

connection event_dispatch::on_keydown_6(keydown_6_slot_t const& op) {
  return keydown_6_signal.connect(op);
}

void event_dispatch::keydown_7() const { keydown_7_signal(); }

connection event_dispatch::on_keydown_7(keydown_7_slot_t const& op) {
  return keydown_7_signal.connect(op);
}

void event_dispatch::keydown_8() const { keydown_8_signal(); }

connection event_dispatch::on_keydown_8(keydown_8_slot_t const& op) {
  return keydown_8_signal.connect(op);
}

void event_dispatch::keydown_9() const { keydown_9_signal(); }

connection event_dispatch::on_keydown_9(keydown_9_slot_t const& op) {
  return keydown_9_signal.connect(op);
}

void event_dispatch::keydown_a() const { keydown_a_signal(); }

connection event_dispatch::on_keydown_a(keydown_a_slot_t const& op) {
  return keydown_a_signal.connect(op);
}

void event_dispatch::keydown_b() const { keydown_b_signal(); }

connection event_dispatch::on_keydown_b(keydown_b_slot_t const& op) {
  return keydown_b_signal.connect(op);
}

void event_dispatch::keydown_c() const { keydown_c_signal(); }

connection event_dispatch::on_keydown_c(keydown_c_slot_t const& op) {
  return keydown_c_signal.connect(op);
}

void event_dispatch::keydown_d() const { keydown_d_signal(); }

connection event_dispatch::on_keydown_d(keydown_d_slot_t const& op) {
  return keydown_d_signal.connect(op);
}

void event_dispatch::keydown_e() const { keydown_e_signal(); }

connection event_dispatch::on_keydown_e(keydown_e_slot_t const& op) {
  return keydown_e_signal.connect(op);
}

void event_dispatch::keydown_f() const { keydown_f_signal(); }

connection event_dispatch::on_keydown_f(keydown_f_slot_t const& op) {
  return keydown_f_signal.connect(op);
}

void event_dispatch::keydown_g() const { keydown_g_signal(); }

connection event_dispatch::on_keydown_g(keydown_g_slot_t const& op) {
  return keydown_g_signal.connect(op);
}

void event_dispatch::keydown_h() const { keydown_h_signal(); }

connection event_dispatch::on_keydown_h(keydown_h_slot_t const& op) {
  return keydown_h_signal.connect(op);
}

void event_dispatch::keydown_i() const { keydown_i_signal(); }

connection event_dispatch::on_keydown_i(keydown_i_slot_t const& op) {
  return keydown_i_signal.connect(op);
}

void event_dispatch::keydown_j() const { keydown_j_signal(); }

connection event_dispatch::on_keydown_j(keydown_j_slot_t const& op) {
  return keydown_j_signal.connect(op);
}

void event_dispatch::keydown_k() const { keydown_k_signal(); }

connection event_dispatch::on_keydown_k(keydown_k_slot_t const& op) {
  return keydown_k_signal.connect(op);
}

void event_dispatch::keydown_l() const { keydown_l_signal(); }

connection event_dispatch::on_keydown_l(keydown_l_slot_t const& op) {
  return keydown_l_signal.connect(op);
}

void event_dispatch::keydown_m() const { keydown_m_signal(); }

connection event_dispatch::on_keydown_m(keydown_m_slot_t const& op) {
  return keydown_m_signal.connect(op);
}

void event_dispatch::keydown_n() const { keydown_n_signal(); }

connection event_dispatch::on_keydown_n(keydown_n_slot_t const& op) {
  return keydown_n_signal.connect(op);
}

void event_dispatch::keydown_o() const { keydown_o_signal(); }

connection event_dispatch::on_keydown_o(keydown_o_slot_t const& op) {
  return keydown_o_signal.connect(op);
}

void event_dispatch::keydown_p() const { keydown_p_signal(); }

connection event_dispatch::on_keydown_p(keydown_p_slot_t const& op) {
  return keydown_p_signal.connect(op);
}

void event_dispatch::keydown_q() const { keydown_q_signal(); }

connection event_dispatch::on_keydown_q(keydown_q_slot_t const& op) {
  return keydown_q_signal.connect(op);
}

void event_dispatch::keydown_r() const { keydown_r_signal(); }

connection event_dispatch::on_keydown_r(keydown_r_slot_t const& op) {
  return keydown_r_signal.connect(op);
}

void event_dispatch::keydown_s() const { keydown_s_signal(); }

connection event_dispatch::on_keydown_s(keydown_s_slot_t const& op) {
  return keydown_s_signal.connect(op);
}

void event_dispatch::keydown_t() const { keydown_t_signal(); }

connection event_dispatch::on_keydown_t(keydown_t_slot_t const& op) {
  return keydown_t_signal.connect(op);
}

void event_dispatch::keydown_u() const { keydown_u_signal(); }

connection event_dispatch::on_keydown_u(keydown_u_slot_t const& op) {
  return keydown_u_signal.connect(op);
}

void event_dispatch::keydown_v() const { keydown_v_signal(); }

connection event_dispatch::on_keydown_v(keydown_v_slot_t const& op) {
  return keydown_v_signal.connect(op);
}

void event_dispatch::keydown_w() const { keydown_w_signal(); }

connection event_dispatch::on_keydown_w(keydown_w_slot_t const& op) {
  return keydown_w_signal.connect(op);
}

void event_dispatch::keydown_x() const { keydown_x_signal(); }

connection event_dispatch::on_keydown_x(keydown_x_slot_t const& op) {
  return keydown_x_signal.connect(op);
}

void event_dispatch::keydown_y() const { keydown_y_signal(); }

connection event_dispatch::on_keydown_y(keydown_y_slot_t const& op) {
  return keydown_y_signal.connect(op);
}

void event_dispatch::keydown_z() const { keydown_z_signal(); }

connection event_dispatch::on_keydown_z(keydown_z_slot_t const& op) {
  return keydown_z_signal.connect(op);
}
}
