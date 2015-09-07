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

void event_dispatch::keydown_unknown() const { keydown_unknown_signal(); }

connection event_dispatch::on_keydown_unknown(
  keydown_unknown_slot_t const& op) {
  return keydown_unknown_signal.connect(op);
}

void event_dispatch::keydown_backspace() const { keydown_backspace_signal(); }

connection event_dispatch::on_keydown_backspace(
  keydown_backspace_slot_t const& op) {
  return keydown_backspace_signal.connect(op);
}

void event_dispatch::keydown_tab() const { keydown_tab_signal(); }

connection event_dispatch::on_keydown_tab(keydown_tab_slot_t const& op) {
  return keydown_tab_signal.connect(op);
}

void event_dispatch::keydown_return() const { keydown_return_signal(); }

connection event_dispatch::on_keydown_return(keydown_return_slot_t const& op) {
  return keydown_return_signal.connect(op);
}

void event_dispatch::keydown_escape() const { keydown_escape_signal(); }

connection event_dispatch::on_keydown_escape(keydown_escape_slot_t const& op) {
  return keydown_escape_signal.connect(op);
}

void event_dispatch::keydown_space() const { keydown_space_signal(); }

connection event_dispatch::on_keydown_space(keydown_space_slot_t const& op) {
  return keydown_space_signal.connect(op);
}

void event_dispatch::keydown_exclaim() const { keydown_exclaim_signal(); }

connection event_dispatch::on_keydown_exclaim(
  keydown_exclaim_slot_t const& op) {
  return keydown_exclaim_signal.connect(op);
}

void event_dispatch::keydown_quotedbl() const { keydown_quotedbl_signal(); }

connection event_dispatch::on_keydown_quotedbl(
  keydown_quotedbl_slot_t const& op) {
  return keydown_quotedbl_signal.connect(op);
}

void event_dispatch::keydown_hash() const { keydown_hash_signal(); }

connection event_dispatch::on_keydown_hash(keydown_hash_slot_t const& op) {
  return keydown_hash_signal.connect(op);
}

void event_dispatch::keydown_dollar() const { keydown_dollar_signal(); }

connection event_dispatch::on_keydown_dollar(keydown_dollar_slot_t const& op) {
  return keydown_dollar_signal.connect(op);
}

void event_dispatch::keydown_percent() const { keydown_percent_signal(); }

connection event_dispatch::on_keydown_percent(
  keydown_percent_slot_t const& op) {
  return keydown_percent_signal.connect(op);
}

void event_dispatch::keydown_ampersand() const { keydown_ampersand_signal(); }

connection event_dispatch::on_keydown_ampersand(
  keydown_ampersand_slot_t const& op) {
  return keydown_ampersand_signal.connect(op);
}

void event_dispatch::keydown_quote() const { keydown_quote_signal(); }

connection event_dispatch::on_keydown_quote(keydown_quote_slot_t const& op) {
  return keydown_quote_signal.connect(op);
}

void event_dispatch::keydown_leftparen() const { keydown_leftparen_signal(); }

connection event_dispatch::on_keydown_leftparen(
  keydown_leftparen_slot_t const& op) {
  return keydown_leftparen_signal.connect(op);
}

void event_dispatch::keydown_rightparen() const {
  keydown_rightparen_signal();
}

connection event_dispatch::on_keydown_rightparen(
  keydown_rightparen_slot_t const& op) {
  return keydown_rightparen_signal.connect(op);
}

void event_dispatch::keydown_asterisk() const { keydown_asterisk_signal(); }

connection event_dispatch::on_keydown_asterisk(
  keydown_asterisk_slot_t const& op) {
  return keydown_asterisk_signal.connect(op);
}

void event_dispatch::keydown_plus() const { keydown_plus_signal(); }

connection event_dispatch::on_keydown_plus(keydown_plus_slot_t const& op) {
  return keydown_plus_signal.connect(op);
}

void event_dispatch::keydown_comma() const { keydown_comma_signal(); }

connection event_dispatch::on_keydown_comma(keydown_comma_slot_t const& op) {
  return keydown_comma_signal.connect(op);
}

void event_dispatch::keydown_minus() const { keydown_minus_signal(); }

connection event_dispatch::on_keydown_minus(keydown_minus_slot_t const& op) {
  return keydown_minus_signal.connect(op);
}

void event_dispatch::keydown_period() const { keydown_period_signal(); }

connection event_dispatch::on_keydown_period(keydown_period_slot_t const& op) {
  return keydown_period_signal.connect(op);
}

void event_dispatch::keydown_slash() const { keydown_slash_signal(); }

connection event_dispatch::on_keydown_slash(keydown_slash_slot_t const& op) {
  return keydown_slash_signal.connect(op);
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

void event_dispatch::keydown_colon() const { keydown_colon_signal(); }

connection event_dispatch::on_keydown_colon(keydown_colon_slot_t const& op) {
  return keydown_colon_signal.connect(op);
}

void event_dispatch::keydown_semicolon() const { keydown_semicolon_signal(); }

connection event_dispatch::on_keydown_semicolon(
  keydown_semicolon_slot_t const& op) {
  return keydown_semicolon_signal.connect(op);
}

void event_dispatch::keydown_less() const { keydown_less_signal(); }

connection event_dispatch::on_keydown_less(keydown_less_slot_t const& op) {
  return keydown_less_signal.connect(op);
}

void event_dispatch::keydown_equals() const { keydown_equals_signal(); }

connection event_dispatch::on_keydown_equals(keydown_equals_slot_t const& op) {
  return keydown_equals_signal.connect(op);
}

void event_dispatch::keydown_greater() const { keydown_greater_signal(); }

connection event_dispatch::on_keydown_greater(
  keydown_greater_slot_t const& op) {
  return keydown_greater_signal.connect(op);
}

void event_dispatch::keydown_question() const { keydown_question_signal(); }

connection event_dispatch::on_keydown_question(
  keydown_question_slot_t const& op) {
  return keydown_question_signal.connect(op);
}

void event_dispatch::keydown_at() const { keydown_at_signal(); }

connection event_dispatch::on_keydown_at(keydown_at_slot_t const& op) {
  return keydown_at_signal.connect(op);
}

void event_dispatch::keydown_leftbracket() const {
  keydown_leftbracket_signal();
}

connection event_dispatch::on_keydown_leftbracket(
  keydown_leftbracket_slot_t const& op) {
  return keydown_leftbracket_signal.connect(op);
}

void event_dispatch::keydown_backslash() const { keydown_backslash_signal(); }

connection event_dispatch::on_keydown_backslash(
  keydown_backslash_slot_t const& op) {
  return keydown_backslash_signal.connect(op);
}

void event_dispatch::keydown_rightbracket() const {
  keydown_rightbracket_signal();
}

connection event_dispatch::on_keydown_rightbracket(
  keydown_rightbracket_slot_t const& op) {
  return keydown_rightbracket_signal.connect(op);
}

void event_dispatch::keydown_caret() const { keydown_caret_signal(); }

connection event_dispatch::on_keydown_caret(keydown_caret_slot_t const& op) {
  return keydown_caret_signal.connect(op);
}

void event_dispatch::keydown_underscore() const {
  keydown_underscore_signal();
}

connection event_dispatch::on_keydown_underscore(
  keydown_underscore_slot_t const& op) {
  return keydown_underscore_signal.connect(op);
}

void event_dispatch::keydown_backquote() const { keydown_backquote_signal(); }

connection event_dispatch::on_keydown_backquote(
  keydown_backquote_slot_t const& op) {
  return keydown_backquote_signal.connect(op);
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

void event_dispatch::keydown_delete() const { keydown_delete_signal(); }

connection event_dispatch::on_keydown_delete(keydown_delete_slot_t const& op) {
  return keydown_delete_signal.connect(op);
}

void event_dispatch::keydown_capslock() const { keydown_capslock_signal(); }

connection event_dispatch::on_keydown_capslock(
  keydown_capslock_slot_t const& op) {
  return keydown_capslock_signal.connect(op);
}

void event_dispatch::keydown_f1() const { keydown_f1_signal(); }

connection event_dispatch::on_keydown_f1(keydown_f1_slot_t const& op) {
  return keydown_f1_signal.connect(op);
}

void event_dispatch::keydown_f2() const { keydown_f2_signal(); }

connection event_dispatch::on_keydown_f2(keydown_f2_slot_t const& op) {
  return keydown_f2_signal.connect(op);
}

void event_dispatch::keydown_f3() const { keydown_f3_signal(); }

connection event_dispatch::on_keydown_f3(keydown_f3_slot_t const& op) {
  return keydown_f3_signal.connect(op);
}

void event_dispatch::keydown_f4() const { keydown_f4_signal(); }

connection event_dispatch::on_keydown_f4(keydown_f4_slot_t const& op) {
  return keydown_f4_signal.connect(op);
}

void event_dispatch::keydown_f5() const { keydown_f5_signal(); }

connection event_dispatch::on_keydown_f5(keydown_f5_slot_t const& op) {
  return keydown_f5_signal.connect(op);
}

void event_dispatch::keydown_f6() const { keydown_f6_signal(); }

connection event_dispatch::on_keydown_f6(keydown_f6_slot_t const& op) {
  return keydown_f6_signal.connect(op);
}

void event_dispatch::keydown_f7() const { keydown_f7_signal(); }

connection event_dispatch::on_keydown_f7(keydown_f7_slot_t const& op) {
  return keydown_f7_signal.connect(op);
}

void event_dispatch::keydown_f8() const { keydown_f8_signal(); }

connection event_dispatch::on_keydown_f8(keydown_f8_slot_t const& op) {
  return keydown_f8_signal.connect(op);
}

void event_dispatch::keydown_f9() const { keydown_f9_signal(); }

connection event_dispatch::on_keydown_f9(keydown_f9_slot_t const& op) {
  return keydown_f9_signal.connect(op);
}

void event_dispatch::keydown_f10() const { keydown_f10_signal(); }

connection event_dispatch::on_keydown_f10(keydown_f10_slot_t const& op) {
  return keydown_f10_signal.connect(op);
}

void event_dispatch::keydown_f11() const { keydown_f11_signal(); }

connection event_dispatch::on_keydown_f11(keydown_f11_slot_t const& op) {
  return keydown_f11_signal.connect(op);
}

void event_dispatch::keydown_f12() const { keydown_f12_signal(); }

connection event_dispatch::on_keydown_f12(keydown_f12_slot_t const& op) {
  return keydown_f12_signal.connect(op);
}

void event_dispatch::keydown_printscreen() const {
  keydown_printscreen_signal();
}

connection event_dispatch::on_keydown_printscreen(
  keydown_printscreen_slot_t const& op) {
  return keydown_printscreen_signal.connect(op);
}

void event_dispatch::keydown_scrolllock() const {
  keydown_scrolllock_signal();
}

connection event_dispatch::on_keydown_scrolllock(
  keydown_scrolllock_slot_t const& op) {
  return keydown_scrolllock_signal.connect(op);
}

void event_dispatch::keydown_pause() const { keydown_pause_signal(); }

connection event_dispatch::on_keydown_pause(keydown_pause_slot_t const& op) {
  return keydown_pause_signal.connect(op);
}

void event_dispatch::keydown_insert() const { keydown_insert_signal(); }

connection event_dispatch::on_keydown_insert(keydown_insert_slot_t const& op) {
  return keydown_insert_signal.connect(op);
}

void event_dispatch::keydown_home() const { keydown_home_signal(); }

connection event_dispatch::on_keydown_home(keydown_home_slot_t const& op) {
  return keydown_home_signal.connect(op);
}

void event_dispatch::keydown_pageup() const { keydown_pageup_signal(); }

connection event_dispatch::on_keydown_pageup(keydown_pageup_slot_t const& op) {
  return keydown_pageup_signal.connect(op);
}

void event_dispatch::keydown_end() const { keydown_end_signal(); }

connection event_dispatch::on_keydown_end(keydown_end_slot_t const& op) {
  return keydown_end_signal.connect(op);
}

void event_dispatch::keydown_pagedown() const { keydown_pagedown_signal(); }

connection event_dispatch::on_keydown_pagedown(
  keydown_pagedown_slot_t const& op) {
  return keydown_pagedown_signal.connect(op);
}

void event_dispatch::keydown_right() const { keydown_right_signal(); }

connection event_dispatch::on_keydown_right(keydown_right_slot_t const& op) {
  return keydown_right_signal.connect(op);
}

void event_dispatch::keydown_left() const { keydown_left_signal(); }

connection event_dispatch::on_keydown_left(keydown_left_slot_t const& op) {
  return keydown_left_signal.connect(op);
}

void event_dispatch::keydown_down() const { keydown_down_signal(); }

connection event_dispatch::on_keydown_down(keydown_down_slot_t const& op) {
  return keydown_down_signal.connect(op);
}

void event_dispatch::keydown_up() const { keydown_up_signal(); }

connection event_dispatch::on_keydown_up(keydown_up_slot_t const& op) {
  return keydown_up_signal.connect(op);
}

void event_dispatch::keydown_numlockclear() const {
  keydown_numlockclear_signal();
}

connection event_dispatch::on_keydown_numlockclear(
  keydown_numlockclear_slot_t const& op) {
  return keydown_numlockclear_signal.connect(op);
}

void event_dispatch::keydown_kp_divide() const { keydown_kp_divide_signal(); }

connection event_dispatch::on_keydown_kp_divide(
  keydown_kp_divide_slot_t const& op) {
  return keydown_kp_divide_signal.connect(op);
}

void event_dispatch::keydown_kp_multiply() const {
  keydown_kp_multiply_signal();
}

connection event_dispatch::on_keydown_kp_multiply(
  keydown_kp_multiply_slot_t const& op) {
  return keydown_kp_multiply_signal.connect(op);
}

void event_dispatch::keydown_kp_minus() const { keydown_kp_minus_signal(); }

connection event_dispatch::on_keydown_kp_minus(
  keydown_kp_minus_slot_t const& op) {
  return keydown_kp_minus_signal.connect(op);
}

void event_dispatch::keydown_kp_plus() const { keydown_kp_plus_signal(); }

connection event_dispatch::on_keydown_kp_plus(
  keydown_kp_plus_slot_t const& op) {
  return keydown_kp_plus_signal.connect(op);
}

void event_dispatch::keydown_kp_enter() const { keydown_kp_enter_signal(); }

connection event_dispatch::on_keydown_kp_enter(
  keydown_kp_enter_slot_t const& op) {
  return keydown_kp_enter_signal.connect(op);
}

void event_dispatch::keydown_kp_1() const { keydown_kp_1_signal(); }

connection event_dispatch::on_keydown_kp_1(keydown_kp_1_slot_t const& op) {
  return keydown_kp_1_signal.connect(op);
}

void event_dispatch::keydown_kp_2() const { keydown_kp_2_signal(); }

connection event_dispatch::on_keydown_kp_2(keydown_kp_2_slot_t const& op) {
  return keydown_kp_2_signal.connect(op);
}

void event_dispatch::keydown_kp_3() const { keydown_kp_3_signal(); }

connection event_dispatch::on_keydown_kp_3(keydown_kp_3_slot_t const& op) {
  return keydown_kp_3_signal.connect(op);
}

void event_dispatch::keydown_kp_4() const { keydown_kp_4_signal(); }

connection event_dispatch::on_keydown_kp_4(keydown_kp_4_slot_t const& op) {
  return keydown_kp_4_signal.connect(op);
}

void event_dispatch::keydown_kp_5() const { keydown_kp_5_signal(); }

connection event_dispatch::on_keydown_kp_5(keydown_kp_5_slot_t const& op) {
  return keydown_kp_5_signal.connect(op);
}

void event_dispatch::keydown_kp_6() const { keydown_kp_6_signal(); }

connection event_dispatch::on_keydown_kp_6(keydown_kp_6_slot_t const& op) {
  return keydown_kp_6_signal.connect(op);
}

void event_dispatch::keydown_kp_7() const { keydown_kp_7_signal(); }

connection event_dispatch::on_keydown_kp_7(keydown_kp_7_slot_t const& op) {
  return keydown_kp_7_signal.connect(op);
}

void event_dispatch::keydown_kp_8() const { keydown_kp_8_signal(); }

connection event_dispatch::on_keydown_kp_8(keydown_kp_8_slot_t const& op) {
  return keydown_kp_8_signal.connect(op);
}

void event_dispatch::keydown_kp_9() const { keydown_kp_9_signal(); }

connection event_dispatch::on_keydown_kp_9(keydown_kp_9_slot_t const& op) {
  return keydown_kp_9_signal.connect(op);
}

void event_dispatch::keydown_kp_0() const { keydown_kp_0_signal(); }

connection event_dispatch::on_keydown_kp_0(keydown_kp_0_slot_t const& op) {
  return keydown_kp_0_signal.connect(op);
}

void event_dispatch::keydown_kp_period() const { keydown_kp_period_signal(); }

connection event_dispatch::on_keydown_kp_period(
  keydown_kp_period_slot_t const& op) {
  return keydown_kp_period_signal.connect(op);
}

void event_dispatch::keydown_application() const {
  keydown_application_signal();
}

connection event_dispatch::on_keydown_application(
  keydown_application_slot_t const& op) {
  return keydown_application_signal.connect(op);
}

void event_dispatch::keydown_power() const { keydown_power_signal(); }

connection event_dispatch::on_keydown_power(keydown_power_slot_t const& op) {
  return keydown_power_signal.connect(op);
}

void event_dispatch::keydown_kp_equals() const { keydown_kp_equals_signal(); }

connection event_dispatch::on_keydown_kp_equals(
  keydown_kp_equals_slot_t const& op) {
  return keydown_kp_equals_signal.connect(op);
}

void event_dispatch::keydown_f13() const { keydown_f13_signal(); }

connection event_dispatch::on_keydown_f13(keydown_f13_slot_t const& op) {
  return keydown_f13_signal.connect(op);
}

void event_dispatch::keydown_f14() const { keydown_f14_signal(); }

connection event_dispatch::on_keydown_f14(keydown_f14_slot_t const& op) {
  return keydown_f14_signal.connect(op);
}

void event_dispatch::keydown_f15() const { keydown_f15_signal(); }

connection event_dispatch::on_keydown_f15(keydown_f15_slot_t const& op) {
  return keydown_f15_signal.connect(op);
}

void event_dispatch::keydown_f16() const { keydown_f16_signal(); }

connection event_dispatch::on_keydown_f16(keydown_f16_slot_t const& op) {
  return keydown_f16_signal.connect(op);
}

void event_dispatch::keydown_f17() const { keydown_f17_signal(); }

connection event_dispatch::on_keydown_f17(keydown_f17_slot_t const& op) {
  return keydown_f17_signal.connect(op);
}

void event_dispatch::keydown_f18() const { keydown_f18_signal(); }

connection event_dispatch::on_keydown_f18(keydown_f18_slot_t const& op) {
  return keydown_f18_signal.connect(op);
}

void event_dispatch::keydown_f19() const { keydown_f19_signal(); }

connection event_dispatch::on_keydown_f19(keydown_f19_slot_t const& op) {
  return keydown_f19_signal.connect(op);
}

void event_dispatch::keydown_f20() const { keydown_f20_signal(); }

connection event_dispatch::on_keydown_f20(keydown_f20_slot_t const& op) {
  return keydown_f20_signal.connect(op);
}

void event_dispatch::keydown_f21() const { keydown_f21_signal(); }

connection event_dispatch::on_keydown_f21(keydown_f21_slot_t const& op) {
  return keydown_f21_signal.connect(op);
}

void event_dispatch::keydown_f22() const { keydown_f22_signal(); }

connection event_dispatch::on_keydown_f22(keydown_f22_slot_t const& op) {
  return keydown_f22_signal.connect(op);
}

void event_dispatch::keydown_f23() const { keydown_f23_signal(); }

connection event_dispatch::on_keydown_f23(keydown_f23_slot_t const& op) {
  return keydown_f23_signal.connect(op);
}

void event_dispatch::keydown_f24() const { keydown_f24_signal(); }

connection event_dispatch::on_keydown_f24(keydown_f24_slot_t const& op) {
  return keydown_f24_signal.connect(op);
}

void event_dispatch::keydown_execute() const { keydown_execute_signal(); }

connection event_dispatch::on_keydown_execute(
  keydown_execute_slot_t const& op) {
  return keydown_execute_signal.connect(op);
}

void event_dispatch::keydown_help() const { keydown_help_signal(); }

connection event_dispatch::on_keydown_help(keydown_help_slot_t const& op) {
  return keydown_help_signal.connect(op);
}

void event_dispatch::keydown_menu() const { keydown_menu_signal(); }

connection event_dispatch::on_keydown_menu(keydown_menu_slot_t const& op) {
  return keydown_menu_signal.connect(op);
}

void event_dispatch::keydown_select() const { keydown_select_signal(); }

connection event_dispatch::on_keydown_select(keydown_select_slot_t const& op) {
  return keydown_select_signal.connect(op);
}

void event_dispatch::keydown_stop() const { keydown_stop_signal(); }

connection event_dispatch::on_keydown_stop(keydown_stop_slot_t const& op) {
  return keydown_stop_signal.connect(op);
}

void event_dispatch::keydown_again() const { keydown_again_signal(); }

connection event_dispatch::on_keydown_again(keydown_again_slot_t const& op) {
  return keydown_again_signal.connect(op);
}

void event_dispatch::keydown_undo() const { keydown_undo_signal(); }

connection event_dispatch::on_keydown_undo(keydown_undo_slot_t const& op) {
  return keydown_undo_signal.connect(op);
}

void event_dispatch::keydown_cut() const { keydown_cut_signal(); }

connection event_dispatch::on_keydown_cut(keydown_cut_slot_t const& op) {
  return keydown_cut_signal.connect(op);
}

void event_dispatch::keydown_copy() const { keydown_copy_signal(); }

connection event_dispatch::on_keydown_copy(keydown_copy_slot_t const& op) {
  return keydown_copy_signal.connect(op);
}

void event_dispatch::keydown_paste() const { keydown_paste_signal(); }

connection event_dispatch::on_keydown_paste(keydown_paste_slot_t const& op) {
  return keydown_paste_signal.connect(op);
}

void event_dispatch::keydown_find() const { keydown_find_signal(); }

connection event_dispatch::on_keydown_find(keydown_find_slot_t const& op) {
  return keydown_find_signal.connect(op);
}

void event_dispatch::keydown_mute() const { keydown_mute_signal(); }

connection event_dispatch::on_keydown_mute(keydown_mute_slot_t const& op) {
  return keydown_mute_signal.connect(op);
}

void event_dispatch::keydown_volumeup() const { keydown_volumeup_signal(); }

connection event_dispatch::on_keydown_volumeup(
  keydown_volumeup_slot_t const& op) {
  return keydown_volumeup_signal.connect(op);
}

void event_dispatch::keydown_volumedown() const {
  keydown_volumedown_signal();
}

connection event_dispatch::on_keydown_volumedown(
  keydown_volumedown_slot_t const& op) {
  return keydown_volumedown_signal.connect(op);
}

void event_dispatch::keydown_kp_comma() const { keydown_kp_comma_signal(); }

connection event_dispatch::on_keydown_kp_comma(
  keydown_kp_comma_slot_t const& op) {
  return keydown_kp_comma_signal.connect(op);
}

void event_dispatch::keydown_kp_equalsas400() const {
  keydown_kp_equalsas400_signal();
}

connection event_dispatch::on_keydown_kp_equalsas400(
  keydown_kp_equalsas400_slot_t const& op) {
  return keydown_kp_equalsas400_signal.connect(op);
}

void event_dispatch::keydown_alterase() const { keydown_alterase_signal(); }

connection event_dispatch::on_keydown_alterase(
  keydown_alterase_slot_t const& op) {
  return keydown_alterase_signal.connect(op);
}

void event_dispatch::keydown_sysreq() const { keydown_sysreq_signal(); }

connection event_dispatch::on_keydown_sysreq(keydown_sysreq_slot_t const& op) {
  return keydown_sysreq_signal.connect(op);
}

void event_dispatch::keydown_cancel() const { keydown_cancel_signal(); }

connection event_dispatch::on_keydown_cancel(keydown_cancel_slot_t const& op) {
  return keydown_cancel_signal.connect(op);
}

void event_dispatch::keydown_clear() const { keydown_clear_signal(); }

connection event_dispatch::on_keydown_clear(keydown_clear_slot_t const& op) {
  return keydown_clear_signal.connect(op);
}

void event_dispatch::keydown_prior() const { keydown_prior_signal(); }

connection event_dispatch::on_keydown_prior(keydown_prior_slot_t const& op) {
  return keydown_prior_signal.connect(op);
}

void event_dispatch::keydown_return2() const { keydown_return2_signal(); }

connection event_dispatch::on_keydown_return2(
  keydown_return2_slot_t const& op) {
  return keydown_return2_signal.connect(op);
}

void event_dispatch::keydown_separator() const { keydown_separator_signal(); }

connection event_dispatch::on_keydown_separator(
  keydown_separator_slot_t const& op) {
  return keydown_separator_signal.connect(op);
}

void event_dispatch::keydown_out() const { keydown_out_signal(); }

connection event_dispatch::on_keydown_out(keydown_out_slot_t const& op) {
  return keydown_out_signal.connect(op);
}

void event_dispatch::keydown_oper() const { keydown_oper_signal(); }

connection event_dispatch::on_keydown_oper(keydown_oper_slot_t const& op) {
  return keydown_oper_signal.connect(op);
}

void event_dispatch::keydown_clearagain() const {
  keydown_clearagain_signal();
}

connection event_dispatch::on_keydown_clearagain(
  keydown_clearagain_slot_t const& op) {
  return keydown_clearagain_signal.connect(op);
}

void event_dispatch::keydown_crsel() const { keydown_crsel_signal(); }

connection event_dispatch::on_keydown_crsel(keydown_crsel_slot_t const& op) {
  return keydown_crsel_signal.connect(op);
}

void event_dispatch::keydown_exsel() const { keydown_exsel_signal(); }

connection event_dispatch::on_keydown_exsel(keydown_exsel_slot_t const& op) {
  return keydown_exsel_signal.connect(op);
}

void event_dispatch::keydown_kp_00() const { keydown_kp_00_signal(); }

connection event_dispatch::on_keydown_kp_00(keydown_kp_00_slot_t const& op) {
  return keydown_kp_00_signal.connect(op);
}

void event_dispatch::keydown_kp_000() const { keydown_kp_000_signal(); }

connection event_dispatch::on_keydown_kp_000(keydown_kp_000_slot_t const& op) {
  return keydown_kp_000_signal.connect(op);
}

void event_dispatch::keydown_thousandsseparator() const {
  keydown_thousandsseparator_signal();
}

connection event_dispatch::on_keydown_thousandsseparator(
  keydown_thousandsseparator_slot_t const& op) {
  return keydown_thousandsseparator_signal.connect(op);
}

void event_dispatch::keydown_decimalseparator() const {
  keydown_decimalseparator_signal();
}

connection event_dispatch::on_keydown_decimalseparator(
  keydown_decimalseparator_slot_t const& op) {
  return keydown_decimalseparator_signal.connect(op);
}

void event_dispatch::keydown_currencyunit() const {
  keydown_currencyunit_signal();
}

connection event_dispatch::on_keydown_currencyunit(
  keydown_currencyunit_slot_t const& op) {
  return keydown_currencyunit_signal.connect(op);
}

void event_dispatch::keydown_currencysubunit() const {
  keydown_currencysubunit_signal();
}

connection event_dispatch::on_keydown_currencysubunit(
  keydown_currencysubunit_slot_t const& op) {
  return keydown_currencysubunit_signal.connect(op);
}

void event_dispatch::keydown_kp_leftparen() const {
  keydown_kp_leftparen_signal();
}

connection event_dispatch::on_keydown_kp_leftparen(
  keydown_kp_leftparen_slot_t const& op) {
  return keydown_kp_leftparen_signal.connect(op);
}

void event_dispatch::keydown_kp_rightparen() const {
  keydown_kp_rightparen_signal();
}

connection event_dispatch::on_keydown_kp_rightparen(
  keydown_kp_rightparen_slot_t const& op) {
  return keydown_kp_rightparen_signal.connect(op);
}

void event_dispatch::keydown_kp_leftbrace() const {
  keydown_kp_leftbrace_signal();
}

connection event_dispatch::on_keydown_kp_leftbrace(
  keydown_kp_leftbrace_slot_t const& op) {
  return keydown_kp_leftbrace_signal.connect(op);
}

void event_dispatch::keydown_kp_rightbrace() const {
  keydown_kp_rightbrace_signal();
}

connection event_dispatch::on_keydown_kp_rightbrace(
  keydown_kp_rightbrace_slot_t const& op) {
  return keydown_kp_rightbrace_signal.connect(op);
}

void event_dispatch::keydown_kp_tab() const { keydown_kp_tab_signal(); }

connection event_dispatch::on_keydown_kp_tab(keydown_kp_tab_slot_t const& op) {
  return keydown_kp_tab_signal.connect(op);
}

void event_dispatch::keydown_kp_backspace() const {
  keydown_kp_backspace_signal();
}

connection event_dispatch::on_keydown_kp_backspace(
  keydown_kp_backspace_slot_t const& op) {
  return keydown_kp_backspace_signal.connect(op);
}

void event_dispatch::keydown_kp_a() const { keydown_kp_a_signal(); }

connection event_dispatch::on_keydown_kp_a(keydown_kp_a_slot_t const& op) {
  return keydown_kp_a_signal.connect(op);
}

void event_dispatch::keydown_kp_b() const { keydown_kp_b_signal(); }

connection event_dispatch::on_keydown_kp_b(keydown_kp_b_slot_t const& op) {
  return keydown_kp_b_signal.connect(op);
}

void event_dispatch::keydown_kp_c() const { keydown_kp_c_signal(); }

connection event_dispatch::on_keydown_kp_c(keydown_kp_c_slot_t const& op) {
  return keydown_kp_c_signal.connect(op);
}

void event_dispatch::keydown_kp_d() const { keydown_kp_d_signal(); }

connection event_dispatch::on_keydown_kp_d(keydown_kp_d_slot_t const& op) {
  return keydown_kp_d_signal.connect(op);
}

void event_dispatch::keydown_kp_e() const { keydown_kp_e_signal(); }

connection event_dispatch::on_keydown_kp_e(keydown_kp_e_slot_t const& op) {
  return keydown_kp_e_signal.connect(op);
}

void event_dispatch::keydown_kp_f() const { keydown_kp_f_signal(); }

connection event_dispatch::on_keydown_kp_f(keydown_kp_f_slot_t const& op) {
  return keydown_kp_f_signal.connect(op);
}

void event_dispatch::keydown_kp_xor() const { keydown_kp_xor_signal(); }

connection event_dispatch::on_keydown_kp_xor(keydown_kp_xor_slot_t const& op) {
  return keydown_kp_xor_signal.connect(op);
}

void event_dispatch::keydown_kp_power() const { keydown_kp_power_signal(); }

connection event_dispatch::on_keydown_kp_power(
  keydown_kp_power_slot_t const& op) {
  return keydown_kp_power_signal.connect(op);
}

void event_dispatch::keydown_kp_percent() const {
  keydown_kp_percent_signal();
}

connection event_dispatch::on_keydown_kp_percent(
  keydown_kp_percent_slot_t const& op) {
  return keydown_kp_percent_signal.connect(op);
}

void event_dispatch::keydown_kp_less() const { keydown_kp_less_signal(); }

connection event_dispatch::on_keydown_kp_less(
  keydown_kp_less_slot_t const& op) {
  return keydown_kp_less_signal.connect(op);
}

void event_dispatch::keydown_kp_greater() const {
  keydown_kp_greater_signal();
}

connection event_dispatch::on_keydown_kp_greater(
  keydown_kp_greater_slot_t const& op) {
  return keydown_kp_greater_signal.connect(op);
}

void event_dispatch::keydown_kp_ampersand() const {
  keydown_kp_ampersand_signal();
}

connection event_dispatch::on_keydown_kp_ampersand(
  keydown_kp_ampersand_slot_t const& op) {
  return keydown_kp_ampersand_signal.connect(op);
}

void event_dispatch::keydown_kp_dblampersand() const {
  keydown_kp_dblampersand_signal();
}

connection event_dispatch::on_keydown_kp_dblampersand(
  keydown_kp_dblampersand_slot_t const& op) {
  return keydown_kp_dblampersand_signal.connect(op);
}

void event_dispatch::keydown_kp_verticalbar() const {
  keydown_kp_verticalbar_signal();
}

connection event_dispatch::on_keydown_kp_verticalbar(
  keydown_kp_verticalbar_slot_t const& op) {
  return keydown_kp_verticalbar_signal.connect(op);
}

void event_dispatch::keydown_kp_dblverticalbar() const {
  keydown_kp_dblverticalbar_signal();
}

connection event_dispatch::on_keydown_kp_dblverticalbar(
  keydown_kp_dblverticalbar_slot_t const& op) {
  return keydown_kp_dblverticalbar_signal.connect(op);
}

void event_dispatch::keydown_kp_colon() const { keydown_kp_colon_signal(); }

connection event_dispatch::on_keydown_kp_colon(
  keydown_kp_colon_slot_t const& op) {
  return keydown_kp_colon_signal.connect(op);
}

void event_dispatch::keydown_kp_hash() const { keydown_kp_hash_signal(); }

connection event_dispatch::on_keydown_kp_hash(
  keydown_kp_hash_slot_t const& op) {
  return keydown_kp_hash_signal.connect(op);
}

void event_dispatch::keydown_kp_space() const { keydown_kp_space_signal(); }

connection event_dispatch::on_keydown_kp_space(
  keydown_kp_space_slot_t const& op) {
  return keydown_kp_space_signal.connect(op);
}

void event_dispatch::keydown_kp_at() const { keydown_kp_at_signal(); }

connection event_dispatch::on_keydown_kp_at(keydown_kp_at_slot_t const& op) {
  return keydown_kp_at_signal.connect(op);
}

void event_dispatch::keydown_kp_exclam() const { keydown_kp_exclam_signal(); }

connection event_dispatch::on_keydown_kp_exclam(
  keydown_kp_exclam_slot_t const& op) {
  return keydown_kp_exclam_signal.connect(op);
}

void event_dispatch::keydown_kp_memstore() const {
  keydown_kp_memstore_signal();
}

connection event_dispatch::on_keydown_kp_memstore(
  keydown_kp_memstore_slot_t const& op) {
  return keydown_kp_memstore_signal.connect(op);
}

void event_dispatch::keydown_kp_memrecall() const {
  keydown_kp_memrecall_signal();
}

connection event_dispatch::on_keydown_kp_memrecall(
  keydown_kp_memrecall_slot_t const& op) {
  return keydown_kp_memrecall_signal.connect(op);
}

void event_dispatch::keydown_kp_memclear() const {
  keydown_kp_memclear_signal();
}

connection event_dispatch::on_keydown_kp_memclear(
  keydown_kp_memclear_slot_t const& op) {
  return keydown_kp_memclear_signal.connect(op);
}

void event_dispatch::keydown_kp_memadd() const { keydown_kp_memadd_signal(); }

connection event_dispatch::on_keydown_kp_memadd(
  keydown_kp_memadd_slot_t const& op) {
  return keydown_kp_memadd_signal.connect(op);
}

void event_dispatch::keydown_kp_memsubtract() const {
  keydown_kp_memsubtract_signal();
}

connection event_dispatch::on_keydown_kp_memsubtract(
  keydown_kp_memsubtract_slot_t const& op) {
  return keydown_kp_memsubtract_signal.connect(op);
}

void event_dispatch::keydown_kp_memmultiply() const {
  keydown_kp_memmultiply_signal();
}

connection event_dispatch::on_keydown_kp_memmultiply(
  keydown_kp_memmultiply_slot_t const& op) {
  return keydown_kp_memmultiply_signal.connect(op);
}

void event_dispatch::keydown_kp_memdivide() const {
  keydown_kp_memdivide_signal();
}

connection event_dispatch::on_keydown_kp_memdivide(
  keydown_kp_memdivide_slot_t const& op) {
  return keydown_kp_memdivide_signal.connect(op);
}

void event_dispatch::keydown_kp_plusminus() const {
  keydown_kp_plusminus_signal();
}

connection event_dispatch::on_keydown_kp_plusminus(
  keydown_kp_plusminus_slot_t const& op) {
  return keydown_kp_plusminus_signal.connect(op);
}

void event_dispatch::keydown_kp_clear() const { keydown_kp_clear_signal(); }

connection event_dispatch::on_keydown_kp_clear(
  keydown_kp_clear_slot_t const& op) {
  return keydown_kp_clear_signal.connect(op);
}

void event_dispatch::keydown_kp_clearentry() const {
  keydown_kp_clearentry_signal();
}

connection event_dispatch::on_keydown_kp_clearentry(
  keydown_kp_clearentry_slot_t const& op) {
  return keydown_kp_clearentry_signal.connect(op);
}

void event_dispatch::keydown_kp_binary() const { keydown_kp_binary_signal(); }

connection event_dispatch::on_keydown_kp_binary(
  keydown_kp_binary_slot_t const& op) {
  return keydown_kp_binary_signal.connect(op);
}

void event_dispatch::keydown_kp_octal() const { keydown_kp_octal_signal(); }

connection event_dispatch::on_keydown_kp_octal(
  keydown_kp_octal_slot_t const& op) {
  return keydown_kp_octal_signal.connect(op);
}

void event_dispatch::keydown_kp_decimal() const {
  keydown_kp_decimal_signal();
}

connection event_dispatch::on_keydown_kp_decimal(
  keydown_kp_decimal_slot_t const& op) {
  return keydown_kp_decimal_signal.connect(op);
}

void event_dispatch::keydown_kp_hexadecimal() const {
  keydown_kp_hexadecimal_signal();
}

connection event_dispatch::on_keydown_kp_hexadecimal(
  keydown_kp_hexadecimal_slot_t const& op) {
  return keydown_kp_hexadecimal_signal.connect(op);
}

void event_dispatch::keydown_lctrl() const { keydown_lctrl_signal(); }

connection event_dispatch::on_keydown_lctrl(keydown_lctrl_slot_t const& op) {
  return keydown_lctrl_signal.connect(op);
}

void event_dispatch::keydown_lshift() const { keydown_lshift_signal(); }

connection event_dispatch::on_keydown_lshift(keydown_lshift_slot_t const& op) {
  return keydown_lshift_signal.connect(op);
}

void event_dispatch::keydown_lalt() const { keydown_lalt_signal(); }

connection event_dispatch::on_keydown_lalt(keydown_lalt_slot_t const& op) {
  return keydown_lalt_signal.connect(op);
}

void event_dispatch::keydown_lgui() const { keydown_lgui_signal(); }

connection event_dispatch::on_keydown_lgui(keydown_lgui_slot_t const& op) {
  return keydown_lgui_signal.connect(op);
}

void event_dispatch::keydown_rctrl() const { keydown_rctrl_signal(); }

connection event_dispatch::on_keydown_rctrl(keydown_rctrl_slot_t const& op) {
  return keydown_rctrl_signal.connect(op);
}

void event_dispatch::keydown_rshift() const { keydown_rshift_signal(); }

connection event_dispatch::on_keydown_rshift(keydown_rshift_slot_t const& op) {
  return keydown_rshift_signal.connect(op);
}

void event_dispatch::keydown_ralt() const { keydown_ralt_signal(); }

connection event_dispatch::on_keydown_ralt(keydown_ralt_slot_t const& op) {
  return keydown_ralt_signal.connect(op);
}

void event_dispatch::keydown_rgui() const { keydown_rgui_signal(); }

connection event_dispatch::on_keydown_rgui(keydown_rgui_slot_t const& op) {
  return keydown_rgui_signal.connect(op);
}

void event_dispatch::keydown_mode() const { keydown_mode_signal(); }

connection event_dispatch::on_keydown_mode(keydown_mode_slot_t const& op) {
  return keydown_mode_signal.connect(op);
}

void event_dispatch::keydown_audionext() const { keydown_audionext_signal(); }

connection event_dispatch::on_keydown_audionext(
  keydown_audionext_slot_t const& op) {
  return keydown_audionext_signal.connect(op);
}

void event_dispatch::keydown_audioprev() const { keydown_audioprev_signal(); }

connection event_dispatch::on_keydown_audioprev(
  keydown_audioprev_slot_t const& op) {
  return keydown_audioprev_signal.connect(op);
}

void event_dispatch::keydown_audiostop() const { keydown_audiostop_signal(); }

connection event_dispatch::on_keydown_audiostop(
  keydown_audiostop_slot_t const& op) {
  return keydown_audiostop_signal.connect(op);
}

void event_dispatch::keydown_audioplay() const { keydown_audioplay_signal(); }

connection event_dispatch::on_keydown_audioplay(
  keydown_audioplay_slot_t const& op) {
  return keydown_audioplay_signal.connect(op);
}

void event_dispatch::keydown_audiomute() const { keydown_audiomute_signal(); }

connection event_dispatch::on_keydown_audiomute(
  keydown_audiomute_slot_t const& op) {
  return keydown_audiomute_signal.connect(op);
}

void event_dispatch::keydown_mediaselect() const {
  keydown_mediaselect_signal();
}

connection event_dispatch::on_keydown_mediaselect(
  keydown_mediaselect_slot_t const& op) {
  return keydown_mediaselect_signal.connect(op);
}

void event_dispatch::keydown_www() const { keydown_www_signal(); }

connection event_dispatch::on_keydown_www(keydown_www_slot_t const& op) {
  return keydown_www_signal.connect(op);
}

void event_dispatch::keydown_mail() const { keydown_mail_signal(); }

connection event_dispatch::on_keydown_mail(keydown_mail_slot_t const& op) {
  return keydown_mail_signal.connect(op);
}

void event_dispatch::keydown_calculator() const {
  keydown_calculator_signal();
}

connection event_dispatch::on_keydown_calculator(
  keydown_calculator_slot_t const& op) {
  return keydown_calculator_signal.connect(op);
}

void event_dispatch::keydown_computer() const { keydown_computer_signal(); }

connection event_dispatch::on_keydown_computer(
  keydown_computer_slot_t const& op) {
  return keydown_computer_signal.connect(op);
}

void event_dispatch::keydown_ac_search() const { keydown_ac_search_signal(); }

connection event_dispatch::on_keydown_ac_search(
  keydown_ac_search_slot_t const& op) {
  return keydown_ac_search_signal.connect(op);
}

void event_dispatch::keydown_ac_home() const { keydown_ac_home_signal(); }

connection event_dispatch::on_keydown_ac_home(
  keydown_ac_home_slot_t const& op) {
  return keydown_ac_home_signal.connect(op);
}

void event_dispatch::keydown_ac_back() const { keydown_ac_back_signal(); }

connection event_dispatch::on_keydown_ac_back(
  keydown_ac_back_slot_t const& op) {
  return keydown_ac_back_signal.connect(op);
}

void event_dispatch::keydown_ac_forward() const {
  keydown_ac_forward_signal();
}

connection event_dispatch::on_keydown_ac_forward(
  keydown_ac_forward_slot_t const& op) {
  return keydown_ac_forward_signal.connect(op);
}

void event_dispatch::keydown_ac_stop() const { keydown_ac_stop_signal(); }

connection event_dispatch::on_keydown_ac_stop(
  keydown_ac_stop_slot_t const& op) {
  return keydown_ac_stop_signal.connect(op);
}

void event_dispatch::keydown_ac_refresh() const {
  keydown_ac_refresh_signal();
}

connection event_dispatch::on_keydown_ac_refresh(
  keydown_ac_refresh_slot_t const& op) {
  return keydown_ac_refresh_signal.connect(op);
}

void event_dispatch::keydown_ac_bookmarks() const {
  keydown_ac_bookmarks_signal();
}

connection event_dispatch::on_keydown_ac_bookmarks(
  keydown_ac_bookmarks_slot_t const& op) {
  return keydown_ac_bookmarks_signal.connect(op);
}

void event_dispatch::keydown_brightnessdown() const {
  keydown_brightnessdown_signal();
}

connection event_dispatch::on_keydown_brightnessdown(
  keydown_brightnessdown_slot_t const& op) {
  return keydown_brightnessdown_signal.connect(op);
}

void event_dispatch::keydown_brightnessup() const {
  keydown_brightnessup_signal();
}

connection event_dispatch::on_keydown_brightnessup(
  keydown_brightnessup_slot_t const& op) {
  return keydown_brightnessup_signal.connect(op);
}

void event_dispatch::keydown_displayswitch() const {
  keydown_displayswitch_signal();
}

connection event_dispatch::on_keydown_displayswitch(
  keydown_displayswitch_slot_t const& op) {
  return keydown_displayswitch_signal.connect(op);
}

void event_dispatch::keydown_kbdillumtoggle() const {
  keydown_kbdillumtoggle_signal();
}

connection event_dispatch::on_keydown_kbdillumtoggle(
  keydown_kbdillumtoggle_slot_t const& op) {
  return keydown_kbdillumtoggle_signal.connect(op);
}

void event_dispatch::keydown_kbdillumdown() const {
  keydown_kbdillumdown_signal();
}

connection event_dispatch::on_keydown_kbdillumdown(
  keydown_kbdillumdown_slot_t const& op) {
  return keydown_kbdillumdown_signal.connect(op);
}

void event_dispatch::keydown_kbdillumup() const {
  keydown_kbdillumup_signal();
}

connection event_dispatch::on_keydown_kbdillumup(
  keydown_kbdillumup_slot_t const& op) {
  return keydown_kbdillumup_signal.connect(op);
}

void event_dispatch::keydown_eject() const { keydown_eject_signal(); }

connection event_dispatch::on_keydown_eject(keydown_eject_slot_t const& op) {
  return keydown_eject_signal.connect(op);
}

void event_dispatch::keydown_sleep() const { keydown_sleep_signal(); }

connection event_dispatch::on_keydown_sleep(keydown_sleep_slot_t const& op) {
  return keydown_sleep_signal.connect(op);
}
}
