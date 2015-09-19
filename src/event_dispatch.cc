#include "event_dispatch.hh"
#include <SDL2/SDL.h>

namespace {
void push_quit_event_onto_the_sdl_event_queue() {
  SDL_Event sdl_quit_event;
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

void event_dispatch::keyup_unknown() const { keyup_unknown_signal(); }

connection event_dispatch::on_keyup_unknown(
  keyup_unknown_slot_t const& op) {
  return keyup_unknown_signal.connect(op);
}

void event_dispatch::keyup_backspace() const { keyup_backspace_signal(); }

connection event_dispatch::on_keyup_backspace(
  keyup_backspace_slot_t const& op) {
  return keyup_backspace_signal.connect(op);
}

void event_dispatch::keyup_tab() const { keyup_tab_signal(); }

connection event_dispatch::on_keyup_tab(keyup_tab_slot_t const& op) {
  return keyup_tab_signal.connect(op);
}

void event_dispatch::keyup_return() const { keyup_return_signal(); }

connection event_dispatch::on_keyup_return(keyup_return_slot_t const& op) {
  return keyup_return_signal.connect(op);
}

void event_dispatch::keyup_escape() const { keyup_escape_signal(); }

connection event_dispatch::on_keyup_escape(keyup_escape_slot_t const& op) {
  return keyup_escape_signal.connect(op);
}

void event_dispatch::keyup_space() const { keyup_space_signal(); }

connection event_dispatch::on_keyup_space(keyup_space_slot_t const& op) {
  return keyup_space_signal.connect(op);
}

void event_dispatch::keyup_exclaim() const { keyup_exclaim_signal(); }

connection event_dispatch::on_keyup_exclaim(
  keyup_exclaim_slot_t const& op) {
  return keyup_exclaim_signal.connect(op);
}

void event_dispatch::keyup_quotedbl() const { keyup_quotedbl_signal(); }

connection event_dispatch::on_keyup_quotedbl(
  keyup_quotedbl_slot_t const& op) {
  return keyup_quotedbl_signal.connect(op);
}

void event_dispatch::keyup_hash() const { keyup_hash_signal(); }

connection event_dispatch::on_keyup_hash(keyup_hash_slot_t const& op) {
  return keyup_hash_signal.connect(op);
}

void event_dispatch::keyup_dollar() const { keyup_dollar_signal(); }

connection event_dispatch::on_keyup_dollar(keyup_dollar_slot_t const& op) {
  return keyup_dollar_signal.connect(op);
}

void event_dispatch::keyup_percent() const { keyup_percent_signal(); }

connection event_dispatch::on_keyup_percent(
  keyup_percent_slot_t const& op) {
  return keyup_percent_signal.connect(op);
}

void event_dispatch::keyup_ampersand() const { keyup_ampersand_signal(); }

connection event_dispatch::on_keyup_ampersand(
  keyup_ampersand_slot_t const& op) {
  return keyup_ampersand_signal.connect(op);
}

void event_dispatch::keyup_quote() const { keyup_quote_signal(); }

connection event_dispatch::on_keyup_quote(keyup_quote_slot_t const& op) {
  return keyup_quote_signal.connect(op);
}

void event_dispatch::keyup_leftparen() const { keyup_leftparen_signal(); }

connection event_dispatch::on_keyup_leftparen(
  keyup_leftparen_slot_t const& op) {
  return keyup_leftparen_signal.connect(op);
}

void event_dispatch::keyup_rightparen() const {
  keyup_rightparen_signal();
}

connection event_dispatch::on_keyup_rightparen(
  keyup_rightparen_slot_t const& op) {
  return keyup_rightparen_signal.connect(op);
}

void event_dispatch::keyup_asterisk() const { keyup_asterisk_signal(); }

connection event_dispatch::on_keyup_asterisk(
  keyup_asterisk_slot_t const& op) {
  return keyup_asterisk_signal.connect(op);
}

void event_dispatch::keyup_plus() const { keyup_plus_signal(); }

connection event_dispatch::on_keyup_plus(keyup_plus_slot_t const& op) {
  return keyup_plus_signal.connect(op);
}

void event_dispatch::keyup_comma() const { keyup_comma_signal(); }

connection event_dispatch::on_keyup_comma(keyup_comma_slot_t const& op) {
  return keyup_comma_signal.connect(op);
}

void event_dispatch::keyup_minus() const { keyup_minus_signal(); }

connection event_dispatch::on_keyup_minus(keyup_minus_slot_t const& op) {
  return keyup_minus_signal.connect(op);
}

void event_dispatch::keyup_period() const { keyup_period_signal(); }

connection event_dispatch::on_keyup_period(keyup_period_slot_t const& op) {
  return keyup_period_signal.connect(op);
}

void event_dispatch::keyup_slash() const { keyup_slash_signal(); }

connection event_dispatch::on_keyup_slash(keyup_slash_slot_t const& op) {
  return keyup_slash_signal.connect(op);
}

void event_dispatch::keyup_0() const { keyup_0_signal(); }

connection event_dispatch::on_keyup_0(keyup_0_slot_t const& op) {
  return keyup_0_signal.connect(op);
}

void event_dispatch::keyup_1() const { keyup_1_signal(); }

connection event_dispatch::on_keyup_1(keyup_1_slot_t const& op) {
  return keyup_1_signal.connect(op);
}

void event_dispatch::keyup_2() const { keyup_2_signal(); }

connection event_dispatch::on_keyup_2(keyup_2_slot_t const& op) {
  return keyup_2_signal.connect(op);
}

void event_dispatch::keyup_3() const { keyup_3_signal(); }

connection event_dispatch::on_keyup_3(keyup_3_slot_t const& op) {
  return keyup_3_signal.connect(op);
}

void event_dispatch::keyup_4() const { keyup_4_signal(); }

connection event_dispatch::on_keyup_4(keyup_4_slot_t const& op) {
  return keyup_4_signal.connect(op);
}

void event_dispatch::keyup_5() const { keyup_5_signal(); }

connection event_dispatch::on_keyup_5(keyup_5_slot_t const& op) {
  return keyup_5_signal.connect(op);
}

void event_dispatch::keyup_6() const { keyup_6_signal(); }

connection event_dispatch::on_keyup_6(keyup_6_slot_t const& op) {
  return keyup_6_signal.connect(op);
}

void event_dispatch::keyup_7() const { keyup_7_signal(); }

connection event_dispatch::on_keyup_7(keyup_7_slot_t const& op) {
  return keyup_7_signal.connect(op);
}

void event_dispatch::keyup_8() const { keyup_8_signal(); }

connection event_dispatch::on_keyup_8(keyup_8_slot_t const& op) {
  return keyup_8_signal.connect(op);
}

void event_dispatch::keyup_9() const { keyup_9_signal(); }

connection event_dispatch::on_keyup_9(keyup_9_slot_t const& op) {
  return keyup_9_signal.connect(op);
}

void event_dispatch::keyup_colon() const { keyup_colon_signal(); }

connection event_dispatch::on_keyup_colon(keyup_colon_slot_t const& op) {
  return keyup_colon_signal.connect(op);
}

void event_dispatch::keyup_semicolon() const { keyup_semicolon_signal(); }

connection event_dispatch::on_keyup_semicolon(
  keyup_semicolon_slot_t const& op) {
  return keyup_semicolon_signal.connect(op);
}

void event_dispatch::keyup_less() const { keyup_less_signal(); }

connection event_dispatch::on_keyup_less(keyup_less_slot_t const& op) {
  return keyup_less_signal.connect(op);
}

void event_dispatch::keyup_equals() const { keyup_equals_signal(); }

connection event_dispatch::on_keyup_equals(keyup_equals_slot_t const& op) {
  return keyup_equals_signal.connect(op);
}

void event_dispatch::keyup_greater() const { keyup_greater_signal(); }

connection event_dispatch::on_keyup_greater(
  keyup_greater_slot_t const& op) {
  return keyup_greater_signal.connect(op);
}

void event_dispatch::keyup_question() const { keyup_question_signal(); }

connection event_dispatch::on_keyup_question(
  keyup_question_slot_t const& op) {
  return keyup_question_signal.connect(op);
}

void event_dispatch::keyup_at() const { keyup_at_signal(); }

connection event_dispatch::on_keyup_at(keyup_at_slot_t const& op) {
  return keyup_at_signal.connect(op);
}

void event_dispatch::keyup_leftbracket() const {
  keyup_leftbracket_signal();
}

connection event_dispatch::on_keyup_leftbracket(
  keyup_leftbracket_slot_t const& op) {
  return keyup_leftbracket_signal.connect(op);
}

void event_dispatch::keyup_backslash() const { keyup_backslash_signal(); }

connection event_dispatch::on_keyup_backslash(
  keyup_backslash_slot_t const& op) {
  return keyup_backslash_signal.connect(op);
}

void event_dispatch::keyup_rightbracket() const {
  keyup_rightbracket_signal();
}

connection event_dispatch::on_keyup_rightbracket(
  keyup_rightbracket_slot_t const& op) {
  return keyup_rightbracket_signal.connect(op);
}

void event_dispatch::keyup_caret() const { keyup_caret_signal(); }

connection event_dispatch::on_keyup_caret(keyup_caret_slot_t const& op) {
  return keyup_caret_signal.connect(op);
}

void event_dispatch::keyup_underscore() const {
  keyup_underscore_signal();
}

connection event_dispatch::on_keyup_underscore(
  keyup_underscore_slot_t const& op) {
  return keyup_underscore_signal.connect(op);
}

void event_dispatch::keyup_backquote() const { keyup_backquote_signal(); }

connection event_dispatch::on_keyup_backquote(
  keyup_backquote_slot_t const& op) {
  return keyup_backquote_signal.connect(op);
}

void event_dispatch::keyup_a() const { keyup_a_signal(); }

connection event_dispatch::on_keyup_a(keyup_a_slot_t const& op) {
  return keyup_a_signal.connect(op);
}

void event_dispatch::keyup_b() const { keyup_b_signal(); }

connection event_dispatch::on_keyup_b(keyup_b_slot_t const& op) {
  return keyup_b_signal.connect(op);
}

void event_dispatch::keyup_c() const { keyup_c_signal(); }

connection event_dispatch::on_keyup_c(keyup_c_slot_t const& op) {
  return keyup_c_signal.connect(op);
}

void event_dispatch::keyup_d() const { keyup_d_signal(); }

connection event_dispatch::on_keyup_d(keyup_d_slot_t const& op) {
  return keyup_d_signal.connect(op);
}

void event_dispatch::keyup_e() const { keyup_e_signal(); }

connection event_dispatch::on_keyup_e(keyup_e_slot_t const& op) {
  return keyup_e_signal.connect(op);
}

void event_dispatch::keyup_f() const { keyup_f_signal(); }

connection event_dispatch::on_keyup_f(keyup_f_slot_t const& op) {
  return keyup_f_signal.connect(op);
}

void event_dispatch::keyup_g() const { keyup_g_signal(); }

connection event_dispatch::on_keyup_g(keyup_g_slot_t const& op) {
  return keyup_g_signal.connect(op);
}

void event_dispatch::keyup_h() const { keyup_h_signal(); }

connection event_dispatch::on_keyup_h(keyup_h_slot_t const& op) {
  return keyup_h_signal.connect(op);
}

void event_dispatch::keyup_i() const { keyup_i_signal(); }

connection event_dispatch::on_keyup_i(keyup_i_slot_t const& op) {
  return keyup_i_signal.connect(op);
}

void event_dispatch::keyup_j() const { keyup_j_signal(); }

connection event_dispatch::on_keyup_j(keyup_j_slot_t const& op) {
  return keyup_j_signal.connect(op);
}

void event_dispatch::keyup_k() const { keyup_k_signal(); }

connection event_dispatch::on_keyup_k(keyup_k_slot_t const& op) {
  return keyup_k_signal.connect(op);
}

void event_dispatch::keyup_l() const { keyup_l_signal(); }

connection event_dispatch::on_keyup_l(keyup_l_slot_t const& op) {
  return keyup_l_signal.connect(op);
}

void event_dispatch::keyup_m() const { keyup_m_signal(); }

connection event_dispatch::on_keyup_m(keyup_m_slot_t const& op) {
  return keyup_m_signal.connect(op);
}

void event_dispatch::keyup_n() const { keyup_n_signal(); }

connection event_dispatch::on_keyup_n(keyup_n_slot_t const& op) {
  return keyup_n_signal.connect(op);
}

void event_dispatch::keyup_o() const { keyup_o_signal(); }

connection event_dispatch::on_keyup_o(keyup_o_slot_t const& op) {
  return keyup_o_signal.connect(op);
}

void event_dispatch::keyup_p() const { keyup_p_signal(); }

connection event_dispatch::on_keyup_p(keyup_p_slot_t const& op) {
  return keyup_p_signal.connect(op);
}

void event_dispatch::keyup_q() const { keyup_q_signal(); }

connection event_dispatch::on_keyup_q(keyup_q_slot_t const& op) {
  return keyup_q_signal.connect(op);
}

void event_dispatch::keyup_r() const { keyup_r_signal(); }

connection event_dispatch::on_keyup_r(keyup_r_slot_t const& op) {
  return keyup_r_signal.connect(op);
}

void event_dispatch::keyup_s() const { keyup_s_signal(); }

connection event_dispatch::on_keyup_s(keyup_s_slot_t const& op) {
  return keyup_s_signal.connect(op);
}

void event_dispatch::keyup_t() const { keyup_t_signal(); }

connection event_dispatch::on_keyup_t(keyup_t_slot_t const& op) {
  return keyup_t_signal.connect(op);
}

void event_dispatch::keyup_u() const { keyup_u_signal(); }

connection event_dispatch::on_keyup_u(keyup_u_slot_t const& op) {
  return keyup_u_signal.connect(op);
}

void event_dispatch::keyup_v() const { keyup_v_signal(); }

connection event_dispatch::on_keyup_v(keyup_v_slot_t const& op) {
  return keyup_v_signal.connect(op);
}

void event_dispatch::keyup_w() const { keyup_w_signal(); }

connection event_dispatch::on_keyup_w(keyup_w_slot_t const& op) {
  return keyup_w_signal.connect(op);
}

void event_dispatch::keyup_x() const { keyup_x_signal(); }

connection event_dispatch::on_keyup_x(keyup_x_slot_t const& op) {
  return keyup_x_signal.connect(op);
}

void event_dispatch::keyup_y() const { keyup_y_signal(); }

connection event_dispatch::on_keyup_y(keyup_y_slot_t const& op) {
  return keyup_y_signal.connect(op);
}

void event_dispatch::keyup_z() const { keyup_z_signal(); }

connection event_dispatch::on_keyup_z(keyup_z_slot_t const& op) {
  return keyup_z_signal.connect(op);
}

void event_dispatch::keyup_delete() const { keyup_delete_signal(); }

connection event_dispatch::on_keyup_delete(keyup_delete_slot_t const& op) {
  return keyup_delete_signal.connect(op);
}

void event_dispatch::keyup_capslock() const { keyup_capslock_signal(); }

connection event_dispatch::on_keyup_capslock(
  keyup_capslock_slot_t const& op) {
  return keyup_capslock_signal.connect(op);
}

void event_dispatch::keyup_f1() const { keyup_f1_signal(); }

connection event_dispatch::on_keyup_f1(keyup_f1_slot_t const& op) {
  return keyup_f1_signal.connect(op);
}

void event_dispatch::keyup_f2() const { keyup_f2_signal(); }

connection event_dispatch::on_keyup_f2(keyup_f2_slot_t const& op) {
  return keyup_f2_signal.connect(op);
}

void event_dispatch::keyup_f3() const { keyup_f3_signal(); }

connection event_dispatch::on_keyup_f3(keyup_f3_slot_t const& op) {
  return keyup_f3_signal.connect(op);
}

void event_dispatch::keyup_f4() const { keyup_f4_signal(); }

connection event_dispatch::on_keyup_f4(keyup_f4_slot_t const& op) {
  return keyup_f4_signal.connect(op);
}

void event_dispatch::keyup_f5() const { keyup_f5_signal(); }

connection event_dispatch::on_keyup_f5(keyup_f5_slot_t const& op) {
  return keyup_f5_signal.connect(op);
}

void event_dispatch::keyup_f6() const { keyup_f6_signal(); }

connection event_dispatch::on_keyup_f6(keyup_f6_slot_t const& op) {
  return keyup_f6_signal.connect(op);
}

void event_dispatch::keyup_f7() const { keyup_f7_signal(); }

connection event_dispatch::on_keyup_f7(keyup_f7_slot_t const& op) {
  return keyup_f7_signal.connect(op);
}

void event_dispatch::keyup_f8() const { keyup_f8_signal(); }

connection event_dispatch::on_keyup_f8(keyup_f8_slot_t const& op) {
  return keyup_f8_signal.connect(op);
}

void event_dispatch::keyup_f9() const { keyup_f9_signal(); }

connection event_dispatch::on_keyup_f9(keyup_f9_slot_t const& op) {
  return keyup_f9_signal.connect(op);
}

void event_dispatch::keyup_f10() const { keyup_f10_signal(); }

connection event_dispatch::on_keyup_f10(keyup_f10_slot_t const& op) {
  return keyup_f10_signal.connect(op);
}

void event_dispatch::keyup_f11() const { keyup_f11_signal(); }

connection event_dispatch::on_keyup_f11(keyup_f11_slot_t const& op) {
  return keyup_f11_signal.connect(op);
}

void event_dispatch::keyup_f12() const { keyup_f12_signal(); }

connection event_dispatch::on_keyup_f12(keyup_f12_slot_t const& op) {
  return keyup_f12_signal.connect(op);
}

void event_dispatch::keyup_printscreen() const {
  keyup_printscreen_signal();
}

connection event_dispatch::on_keyup_printscreen(
  keyup_printscreen_slot_t const& op) {
  return keyup_printscreen_signal.connect(op);
}

void event_dispatch::keyup_scrolllock() const {
  keyup_scrolllock_signal();
}

connection event_dispatch::on_keyup_scrolllock(
  keyup_scrolllock_slot_t const& op) {
  return keyup_scrolllock_signal.connect(op);
}

void event_dispatch::keyup_pause() const { keyup_pause_signal(); }

connection event_dispatch::on_keyup_pause(keyup_pause_slot_t const& op) {
  return keyup_pause_signal.connect(op);
}

void event_dispatch::keyup_insert() const { keyup_insert_signal(); }

connection event_dispatch::on_keyup_insert(keyup_insert_slot_t const& op) {
  return keyup_insert_signal.connect(op);
}

void event_dispatch::keyup_home() const { keyup_home_signal(); }

connection event_dispatch::on_keyup_home(keyup_home_slot_t const& op) {
  return keyup_home_signal.connect(op);
}

void event_dispatch::keyup_pageup() const { keyup_pageup_signal(); }

connection event_dispatch::on_keyup_pageup(keyup_pageup_slot_t const& op) {
  return keyup_pageup_signal.connect(op);
}

void event_dispatch::keyup_end() const { keyup_end_signal(); }

connection event_dispatch::on_keyup_end(keyup_end_slot_t const& op) {
  return keyup_end_signal.connect(op);
}

void event_dispatch::keyup_pagedown() const { keyup_pagedown_signal(); }

connection event_dispatch::on_keyup_pagedown(
  keyup_pagedown_slot_t const& op) {
  return keyup_pagedown_signal.connect(op);
}

void event_dispatch::keyup_right() const { keyup_right_signal(); }

connection event_dispatch::on_keyup_right(keyup_right_slot_t const& op) {
  return keyup_right_signal.connect(op);
}

void event_dispatch::keyup_left() const { keyup_left_signal(); }

connection event_dispatch::on_keyup_left(keyup_left_slot_t const& op) {
  return keyup_left_signal.connect(op);
}

void event_dispatch::keyup_down() const { keyup_down_signal(); }

connection event_dispatch::on_keyup_down(keyup_down_slot_t const& op) {
  return keyup_down_signal.connect(op);
}

void event_dispatch::keyup_up() const { keyup_up_signal(); }

connection event_dispatch::on_keyup_up(keyup_up_slot_t const& op) {
  return keyup_up_signal.connect(op);
}

void event_dispatch::keyup_numlockclear() const {
  keyup_numlockclear_signal();
}

connection event_dispatch::on_keyup_numlockclear(
  keyup_numlockclear_slot_t const& op) {
  return keyup_numlockclear_signal.connect(op);
}

void event_dispatch::keyup_kp_divide() const { keyup_kp_divide_signal(); }

connection event_dispatch::on_keyup_kp_divide(
  keyup_kp_divide_slot_t const& op) {
  return keyup_kp_divide_signal.connect(op);
}

void event_dispatch::keyup_kp_multiply() const {
  keyup_kp_multiply_signal();
}

connection event_dispatch::on_keyup_kp_multiply(
  keyup_kp_multiply_slot_t const& op) {
  return keyup_kp_multiply_signal.connect(op);
}

void event_dispatch::keyup_kp_minus() const { keyup_kp_minus_signal(); }

connection event_dispatch::on_keyup_kp_minus(
  keyup_kp_minus_slot_t const& op) {
  return keyup_kp_minus_signal.connect(op);
}

void event_dispatch::keyup_kp_plus() const { keyup_kp_plus_signal(); }

connection event_dispatch::on_keyup_kp_plus(
  keyup_kp_plus_slot_t const& op) {
  return keyup_kp_plus_signal.connect(op);
}

void event_dispatch::keyup_kp_enter() const { keyup_kp_enter_signal(); }

connection event_dispatch::on_keyup_kp_enter(
  keyup_kp_enter_slot_t const& op) {
  return keyup_kp_enter_signal.connect(op);
}

void event_dispatch::keyup_kp_1() const { keyup_kp_1_signal(); }

connection event_dispatch::on_keyup_kp_1(keyup_kp_1_slot_t const& op) {
  return keyup_kp_1_signal.connect(op);
}

void event_dispatch::keyup_kp_2() const { keyup_kp_2_signal(); }

connection event_dispatch::on_keyup_kp_2(keyup_kp_2_slot_t const& op) {
  return keyup_kp_2_signal.connect(op);
}

void event_dispatch::keyup_kp_3() const { keyup_kp_3_signal(); }

connection event_dispatch::on_keyup_kp_3(keyup_kp_3_slot_t const& op) {
  return keyup_kp_3_signal.connect(op);
}

void event_dispatch::keyup_kp_4() const { keyup_kp_4_signal(); }

connection event_dispatch::on_keyup_kp_4(keyup_kp_4_slot_t const& op) {
  return keyup_kp_4_signal.connect(op);
}

void event_dispatch::keyup_kp_5() const { keyup_kp_5_signal(); }

connection event_dispatch::on_keyup_kp_5(keyup_kp_5_slot_t const& op) {
  return keyup_kp_5_signal.connect(op);
}

void event_dispatch::keyup_kp_6() const { keyup_kp_6_signal(); }

connection event_dispatch::on_keyup_kp_6(keyup_kp_6_slot_t const& op) {
  return keyup_kp_6_signal.connect(op);
}

void event_dispatch::keyup_kp_7() const { keyup_kp_7_signal(); }

connection event_dispatch::on_keyup_kp_7(keyup_kp_7_slot_t const& op) {
  return keyup_kp_7_signal.connect(op);
}

void event_dispatch::keyup_kp_8() const { keyup_kp_8_signal(); }

connection event_dispatch::on_keyup_kp_8(keyup_kp_8_slot_t const& op) {
  return keyup_kp_8_signal.connect(op);
}

void event_dispatch::keyup_kp_9() const { keyup_kp_9_signal(); }

connection event_dispatch::on_keyup_kp_9(keyup_kp_9_slot_t const& op) {
  return keyup_kp_9_signal.connect(op);
}

void event_dispatch::keyup_kp_0() const { keyup_kp_0_signal(); }

connection event_dispatch::on_keyup_kp_0(keyup_kp_0_slot_t const& op) {
  return keyup_kp_0_signal.connect(op);
}

void event_dispatch::keyup_kp_period() const { keyup_kp_period_signal(); }

connection event_dispatch::on_keyup_kp_period(
  keyup_kp_period_slot_t const& op) {
  return keyup_kp_period_signal.connect(op);
}

void event_dispatch::keyup_application() const {
  keyup_application_signal();
}

connection event_dispatch::on_keyup_application(
  keyup_application_slot_t const& op) {
  return keyup_application_signal.connect(op);
}

void event_dispatch::keyup_power() const { keyup_power_signal(); }

connection event_dispatch::on_keyup_power(keyup_power_slot_t const& op) {
  return keyup_power_signal.connect(op);
}

void event_dispatch::keyup_kp_equals() const { keyup_kp_equals_signal(); }

connection event_dispatch::on_keyup_kp_equals(
  keyup_kp_equals_slot_t const& op) {
  return keyup_kp_equals_signal.connect(op);
}

void event_dispatch::keyup_f13() const { keyup_f13_signal(); }

connection event_dispatch::on_keyup_f13(keyup_f13_slot_t const& op) {
  return keyup_f13_signal.connect(op);
}

void event_dispatch::keyup_f14() const { keyup_f14_signal(); }

connection event_dispatch::on_keyup_f14(keyup_f14_slot_t const& op) {
  return keyup_f14_signal.connect(op);
}

void event_dispatch::keyup_f15() const { keyup_f15_signal(); }

connection event_dispatch::on_keyup_f15(keyup_f15_slot_t const& op) {
  return keyup_f15_signal.connect(op);
}

void event_dispatch::keyup_f16() const { keyup_f16_signal(); }

connection event_dispatch::on_keyup_f16(keyup_f16_slot_t const& op) {
  return keyup_f16_signal.connect(op);
}

void event_dispatch::keyup_f17() const { keyup_f17_signal(); }

connection event_dispatch::on_keyup_f17(keyup_f17_slot_t const& op) {
  return keyup_f17_signal.connect(op);
}

void event_dispatch::keyup_f18() const { keyup_f18_signal(); }

connection event_dispatch::on_keyup_f18(keyup_f18_slot_t const& op) {
  return keyup_f18_signal.connect(op);
}

void event_dispatch::keyup_f19() const { keyup_f19_signal(); }

connection event_dispatch::on_keyup_f19(keyup_f19_slot_t const& op) {
  return keyup_f19_signal.connect(op);
}

void event_dispatch::keyup_f20() const { keyup_f20_signal(); }

connection event_dispatch::on_keyup_f20(keyup_f20_slot_t const& op) {
  return keyup_f20_signal.connect(op);
}

void event_dispatch::keyup_f21() const { keyup_f21_signal(); }

connection event_dispatch::on_keyup_f21(keyup_f21_slot_t const& op) {
  return keyup_f21_signal.connect(op);
}

void event_dispatch::keyup_f22() const { keyup_f22_signal(); }

connection event_dispatch::on_keyup_f22(keyup_f22_slot_t const& op) {
  return keyup_f22_signal.connect(op);
}

void event_dispatch::keyup_f23() const { keyup_f23_signal(); }

connection event_dispatch::on_keyup_f23(keyup_f23_slot_t const& op) {
  return keyup_f23_signal.connect(op);
}

void event_dispatch::keyup_f24() const { keyup_f24_signal(); }

connection event_dispatch::on_keyup_f24(keyup_f24_slot_t const& op) {
  return keyup_f24_signal.connect(op);
}

void event_dispatch::keyup_execute() const { keyup_execute_signal(); }

connection event_dispatch::on_keyup_execute(
  keyup_execute_slot_t const& op) {
  return keyup_execute_signal.connect(op);
}

void event_dispatch::keyup_help() const { keyup_help_signal(); }

connection event_dispatch::on_keyup_help(keyup_help_slot_t const& op) {
  return keyup_help_signal.connect(op);
}

void event_dispatch::keyup_menu() const { keyup_menu_signal(); }

connection event_dispatch::on_keyup_menu(keyup_menu_slot_t const& op) {
  return keyup_menu_signal.connect(op);
}

void event_dispatch::keyup_select() const { keyup_select_signal(); }

connection event_dispatch::on_keyup_select(keyup_select_slot_t const& op) {
  return keyup_select_signal.connect(op);
}

void event_dispatch::keyup_stop() const { keyup_stop_signal(); }

connection event_dispatch::on_keyup_stop(keyup_stop_slot_t const& op) {
  return keyup_stop_signal.connect(op);
}

void event_dispatch::keyup_again() const { keyup_again_signal(); }

connection event_dispatch::on_keyup_again(keyup_again_slot_t const& op) {
  return keyup_again_signal.connect(op);
}

void event_dispatch::keyup_undo() const { keyup_undo_signal(); }

connection event_dispatch::on_keyup_undo(keyup_undo_slot_t const& op) {
  return keyup_undo_signal.connect(op);
}

void event_dispatch::keyup_cut() const { keyup_cut_signal(); }

connection event_dispatch::on_keyup_cut(keyup_cut_slot_t const& op) {
  return keyup_cut_signal.connect(op);
}

void event_dispatch::keyup_copy() const { keyup_copy_signal(); }

connection event_dispatch::on_keyup_copy(keyup_copy_slot_t const& op) {
  return keyup_copy_signal.connect(op);
}

void event_dispatch::keyup_paste() const { keyup_paste_signal(); }

connection event_dispatch::on_keyup_paste(keyup_paste_slot_t const& op) {
  return keyup_paste_signal.connect(op);
}

void event_dispatch::keyup_find() const { keyup_find_signal(); }

connection event_dispatch::on_keyup_find(keyup_find_slot_t const& op) {
  return keyup_find_signal.connect(op);
}

void event_dispatch::keyup_mute() const { keyup_mute_signal(); }

connection event_dispatch::on_keyup_mute(keyup_mute_slot_t const& op) {
  return keyup_mute_signal.connect(op);
}

void event_dispatch::keyup_volumeup() const { keyup_volumeup_signal(); }

connection event_dispatch::on_keyup_volumeup(
  keyup_volumeup_slot_t const& op) {
  return keyup_volumeup_signal.connect(op);
}

void event_dispatch::keyup_volumedown() const {
  keyup_volumedown_signal();
}

connection event_dispatch::on_keyup_volumedown(
  keyup_volumedown_slot_t const& op) {
  return keyup_volumedown_signal.connect(op);
}

void event_dispatch::keyup_kp_comma() const { keyup_kp_comma_signal(); }

connection event_dispatch::on_keyup_kp_comma(
  keyup_kp_comma_slot_t const& op) {
  return keyup_kp_comma_signal.connect(op);
}

void event_dispatch::keyup_kp_equalsas400() const {
  keyup_kp_equalsas400_signal();
}

connection event_dispatch::on_keyup_kp_equalsas400(
  keyup_kp_equalsas400_slot_t const& op) {
  return keyup_kp_equalsas400_signal.connect(op);
}

void event_dispatch::keyup_alterase() const { keyup_alterase_signal(); }

connection event_dispatch::on_keyup_alterase(
  keyup_alterase_slot_t const& op) {
  return keyup_alterase_signal.connect(op);
}

void event_dispatch::keyup_sysreq() const { keyup_sysreq_signal(); }

connection event_dispatch::on_keyup_sysreq(keyup_sysreq_slot_t const& op) {
  return keyup_sysreq_signal.connect(op);
}

void event_dispatch::keyup_cancel() const { keyup_cancel_signal(); }

connection event_dispatch::on_keyup_cancel(keyup_cancel_slot_t const& op) {
  return keyup_cancel_signal.connect(op);
}

void event_dispatch::keyup_clear() const { keyup_clear_signal(); }

connection event_dispatch::on_keyup_clear(keyup_clear_slot_t const& op) {
  return keyup_clear_signal.connect(op);
}

void event_dispatch::keyup_prior() const { keyup_prior_signal(); }

connection event_dispatch::on_keyup_prior(keyup_prior_slot_t const& op) {
  return keyup_prior_signal.connect(op);
}

void event_dispatch::keyup_return2() const { keyup_return2_signal(); }

connection event_dispatch::on_keyup_return2(
  keyup_return2_slot_t const& op) {
  return keyup_return2_signal.connect(op);
}

void event_dispatch::keyup_separator() const { keyup_separator_signal(); }

connection event_dispatch::on_keyup_separator(
  keyup_separator_slot_t const& op) {
  return keyup_separator_signal.connect(op);
}

void event_dispatch::keyup_out() const { keyup_out_signal(); }

connection event_dispatch::on_keyup_out(keyup_out_slot_t const& op) {
  return keyup_out_signal.connect(op);
}

void event_dispatch::keyup_oper() const { keyup_oper_signal(); }

connection event_dispatch::on_keyup_oper(keyup_oper_slot_t const& op) {
  return keyup_oper_signal.connect(op);
}

void event_dispatch::keyup_clearagain() const {
  keyup_clearagain_signal();
}

connection event_dispatch::on_keyup_clearagain(
  keyup_clearagain_slot_t const& op) {
  return keyup_clearagain_signal.connect(op);
}

void event_dispatch::keyup_crsel() const { keyup_crsel_signal(); }

connection event_dispatch::on_keyup_crsel(keyup_crsel_slot_t const& op) {
  return keyup_crsel_signal.connect(op);
}

void event_dispatch::keyup_exsel() const { keyup_exsel_signal(); }

connection event_dispatch::on_keyup_exsel(keyup_exsel_slot_t const& op) {
  return keyup_exsel_signal.connect(op);
}

void event_dispatch::keyup_kp_00() const { keyup_kp_00_signal(); }

connection event_dispatch::on_keyup_kp_00(keyup_kp_00_slot_t const& op) {
  return keyup_kp_00_signal.connect(op);
}

void event_dispatch::keyup_kp_000() const { keyup_kp_000_signal(); }

connection event_dispatch::on_keyup_kp_000(keyup_kp_000_slot_t const& op) {
  return keyup_kp_000_signal.connect(op);
}

void event_dispatch::keyup_thousandsseparator() const {
  keyup_thousandsseparator_signal();
}

connection event_dispatch::on_keyup_thousandsseparator(
  keyup_thousandsseparator_slot_t const& op) {
  return keyup_thousandsseparator_signal.connect(op);
}

void event_dispatch::keyup_decimalseparator() const {
  keyup_decimalseparator_signal();
}

connection event_dispatch::on_keyup_decimalseparator(
  keyup_decimalseparator_slot_t const& op) {
  return keyup_decimalseparator_signal.connect(op);
}

void event_dispatch::keyup_currencyunit() const {
  keyup_currencyunit_signal();
}

connection event_dispatch::on_keyup_currencyunit(
  keyup_currencyunit_slot_t const& op) {
  return keyup_currencyunit_signal.connect(op);
}

void event_dispatch::keyup_currencysubunit() const {
  keyup_currencysubunit_signal();
}

connection event_dispatch::on_keyup_currencysubunit(
  keyup_currencysubunit_slot_t const& op) {
  return keyup_currencysubunit_signal.connect(op);
}

void event_dispatch::keyup_kp_leftparen() const {
  keyup_kp_leftparen_signal();
}

connection event_dispatch::on_keyup_kp_leftparen(
  keyup_kp_leftparen_slot_t const& op) {
  return keyup_kp_leftparen_signal.connect(op);
}

void event_dispatch::keyup_kp_rightparen() const {
  keyup_kp_rightparen_signal();
}

connection event_dispatch::on_keyup_kp_rightparen(
  keyup_kp_rightparen_slot_t const& op) {
  return keyup_kp_rightparen_signal.connect(op);
}

void event_dispatch::keyup_kp_leftbrace() const {
  keyup_kp_leftbrace_signal();
}

connection event_dispatch::on_keyup_kp_leftbrace(
  keyup_kp_leftbrace_slot_t const& op) {
  return keyup_kp_leftbrace_signal.connect(op);
}

void event_dispatch::keyup_kp_rightbrace() const {
  keyup_kp_rightbrace_signal();
}

connection event_dispatch::on_keyup_kp_rightbrace(
  keyup_kp_rightbrace_slot_t const& op) {
  return keyup_kp_rightbrace_signal.connect(op);
}

void event_dispatch::keyup_kp_tab() const { keyup_kp_tab_signal(); }

connection event_dispatch::on_keyup_kp_tab(keyup_kp_tab_slot_t const& op) {
  return keyup_kp_tab_signal.connect(op);
}

void event_dispatch::keyup_kp_backspace() const {
  keyup_kp_backspace_signal();
}

connection event_dispatch::on_keyup_kp_backspace(
  keyup_kp_backspace_slot_t const& op) {
  return keyup_kp_backspace_signal.connect(op);
}

void event_dispatch::keyup_kp_a() const { keyup_kp_a_signal(); }

connection event_dispatch::on_keyup_kp_a(keyup_kp_a_slot_t const& op) {
  return keyup_kp_a_signal.connect(op);
}

void event_dispatch::keyup_kp_b() const { keyup_kp_b_signal(); }

connection event_dispatch::on_keyup_kp_b(keyup_kp_b_slot_t const& op) {
  return keyup_kp_b_signal.connect(op);
}

void event_dispatch::keyup_kp_c() const { keyup_kp_c_signal(); }

connection event_dispatch::on_keyup_kp_c(keyup_kp_c_slot_t const& op) {
  return keyup_kp_c_signal.connect(op);
}

void event_dispatch::keyup_kp_d() const { keyup_kp_d_signal(); }

connection event_dispatch::on_keyup_kp_d(keyup_kp_d_slot_t const& op) {
  return keyup_kp_d_signal.connect(op);
}

void event_dispatch::keyup_kp_e() const { keyup_kp_e_signal(); }

connection event_dispatch::on_keyup_kp_e(keyup_kp_e_slot_t const& op) {
  return keyup_kp_e_signal.connect(op);
}

void event_dispatch::keyup_kp_f() const { keyup_kp_f_signal(); }

connection event_dispatch::on_keyup_kp_f(keyup_kp_f_slot_t const& op) {
  return keyup_kp_f_signal.connect(op);
}

void event_dispatch::keyup_kp_xor() const { keyup_kp_xor_signal(); }

connection event_dispatch::on_keyup_kp_xor(keyup_kp_xor_slot_t const& op) {
  return keyup_kp_xor_signal.connect(op);
}

void event_dispatch::keyup_kp_power() const { keyup_kp_power_signal(); }

connection event_dispatch::on_keyup_kp_power(
  keyup_kp_power_slot_t const& op) {
  return keyup_kp_power_signal.connect(op);
}

void event_dispatch::keyup_kp_percent() const {
  keyup_kp_percent_signal();
}

connection event_dispatch::on_keyup_kp_percent(
  keyup_kp_percent_slot_t const& op) {
  return keyup_kp_percent_signal.connect(op);
}

void event_dispatch::keyup_kp_less() const { keyup_kp_less_signal(); }

connection event_dispatch::on_keyup_kp_less(
  keyup_kp_less_slot_t const& op) {
  return keyup_kp_less_signal.connect(op);
}

void event_dispatch::keyup_kp_greater() const {
  keyup_kp_greater_signal();
}

connection event_dispatch::on_keyup_kp_greater(
  keyup_kp_greater_slot_t const& op) {
  return keyup_kp_greater_signal.connect(op);
}

void event_dispatch::keyup_kp_ampersand() const {
  keyup_kp_ampersand_signal();
}

connection event_dispatch::on_keyup_kp_ampersand(
  keyup_kp_ampersand_slot_t const& op) {
  return keyup_kp_ampersand_signal.connect(op);
}

void event_dispatch::keyup_kp_dblampersand() const {
  keyup_kp_dblampersand_signal();
}

connection event_dispatch::on_keyup_kp_dblampersand(
  keyup_kp_dblampersand_slot_t const& op) {
  return keyup_kp_dblampersand_signal.connect(op);
}

void event_dispatch::keyup_kp_verticalbar() const {
  keyup_kp_verticalbar_signal();
}

connection event_dispatch::on_keyup_kp_verticalbar(
  keyup_kp_verticalbar_slot_t const& op) {
  return keyup_kp_verticalbar_signal.connect(op);
}

void event_dispatch::keyup_kp_dblverticalbar() const {
  keyup_kp_dblverticalbar_signal();
}

connection event_dispatch::on_keyup_kp_dblverticalbar(
  keyup_kp_dblverticalbar_slot_t const& op) {
  return keyup_kp_dblverticalbar_signal.connect(op);
}

void event_dispatch::keyup_kp_colon() const { keyup_kp_colon_signal(); }

connection event_dispatch::on_keyup_kp_colon(
  keyup_kp_colon_slot_t const& op) {
  return keyup_kp_colon_signal.connect(op);
}

void event_dispatch::keyup_kp_hash() const { keyup_kp_hash_signal(); }

connection event_dispatch::on_keyup_kp_hash(
  keyup_kp_hash_slot_t const& op) {
  return keyup_kp_hash_signal.connect(op);
}

void event_dispatch::keyup_kp_space() const { keyup_kp_space_signal(); }

connection event_dispatch::on_keyup_kp_space(
  keyup_kp_space_slot_t const& op) {
  return keyup_kp_space_signal.connect(op);
}

void event_dispatch::keyup_kp_at() const { keyup_kp_at_signal(); }

connection event_dispatch::on_keyup_kp_at(keyup_kp_at_slot_t const& op) {
  return keyup_kp_at_signal.connect(op);
}

void event_dispatch::keyup_kp_exclam() const { keyup_kp_exclam_signal(); }

connection event_dispatch::on_keyup_kp_exclam(
  keyup_kp_exclam_slot_t const& op) {
  return keyup_kp_exclam_signal.connect(op);
}

void event_dispatch::keyup_kp_memstore() const {
  keyup_kp_memstore_signal();
}

connection event_dispatch::on_keyup_kp_memstore(
  keyup_kp_memstore_slot_t const& op) {
  return keyup_kp_memstore_signal.connect(op);
}

void event_dispatch::keyup_kp_memrecall() const {
  keyup_kp_memrecall_signal();
}

connection event_dispatch::on_keyup_kp_memrecall(
  keyup_kp_memrecall_slot_t const& op) {
  return keyup_kp_memrecall_signal.connect(op);
}

void event_dispatch::keyup_kp_memclear() const {
  keyup_kp_memclear_signal();
}

connection event_dispatch::on_keyup_kp_memclear(
  keyup_kp_memclear_slot_t const& op) {
  return keyup_kp_memclear_signal.connect(op);
}

void event_dispatch::keyup_kp_memadd() const { keyup_kp_memadd_signal(); }

connection event_dispatch::on_keyup_kp_memadd(
  keyup_kp_memadd_slot_t const& op) {
  return keyup_kp_memadd_signal.connect(op);
}

void event_dispatch::keyup_kp_memsubtract() const {
  keyup_kp_memsubtract_signal();
}

connection event_dispatch::on_keyup_kp_memsubtract(
  keyup_kp_memsubtract_slot_t const& op) {
  return keyup_kp_memsubtract_signal.connect(op);
}

void event_dispatch::keyup_kp_memmultiply() const {
  keyup_kp_memmultiply_signal();
}

connection event_dispatch::on_keyup_kp_memmultiply(
  keyup_kp_memmultiply_slot_t const& op) {
  return keyup_kp_memmultiply_signal.connect(op);
}

void event_dispatch::keyup_kp_memdivide() const {
  keyup_kp_memdivide_signal();
}

connection event_dispatch::on_keyup_kp_memdivide(
  keyup_kp_memdivide_slot_t const& op) {
  return keyup_kp_memdivide_signal.connect(op);
}

void event_dispatch::keyup_kp_plusminus() const {
  keyup_kp_plusminus_signal();
}

connection event_dispatch::on_keyup_kp_plusminus(
  keyup_kp_plusminus_slot_t const& op) {
  return keyup_kp_plusminus_signal.connect(op);
}

void event_dispatch::keyup_kp_clear() const { keyup_kp_clear_signal(); }

connection event_dispatch::on_keyup_kp_clear(
  keyup_kp_clear_slot_t const& op) {
  return keyup_kp_clear_signal.connect(op);
}

void event_dispatch::keyup_kp_clearentry() const {
  keyup_kp_clearentry_signal();
}

connection event_dispatch::on_keyup_kp_clearentry(
  keyup_kp_clearentry_slot_t const& op) {
  return keyup_kp_clearentry_signal.connect(op);
}

void event_dispatch::keyup_kp_binary() const { keyup_kp_binary_signal(); }

connection event_dispatch::on_keyup_kp_binary(
  keyup_kp_binary_slot_t const& op) {
  return keyup_kp_binary_signal.connect(op);
}

void event_dispatch::keyup_kp_octal() const { keyup_kp_octal_signal(); }

connection event_dispatch::on_keyup_kp_octal(
  keyup_kp_octal_slot_t const& op) {
  return keyup_kp_octal_signal.connect(op);
}

void event_dispatch::keyup_kp_decimal() const {
  keyup_kp_decimal_signal();
}

connection event_dispatch::on_keyup_kp_decimal(
  keyup_kp_decimal_slot_t const& op) {
  return keyup_kp_decimal_signal.connect(op);
}

void event_dispatch::keyup_kp_hexadecimal() const {
  keyup_kp_hexadecimal_signal();
}

connection event_dispatch::on_keyup_kp_hexadecimal(
  keyup_kp_hexadecimal_slot_t const& op) {
  return keyup_kp_hexadecimal_signal.connect(op);
}

void event_dispatch::keyup_lctrl() const { keyup_lctrl_signal(); }

connection event_dispatch::on_keyup_lctrl(keyup_lctrl_slot_t const& op) {
  return keyup_lctrl_signal.connect(op);
}

void event_dispatch::keyup_lshift() const { keyup_lshift_signal(); }

connection event_dispatch::on_keyup_lshift(keyup_lshift_slot_t const& op) {
  return keyup_lshift_signal.connect(op);
}

void event_dispatch::keyup_lalt() const { keyup_lalt_signal(); }

connection event_dispatch::on_keyup_lalt(keyup_lalt_slot_t const& op) {
  return keyup_lalt_signal.connect(op);
}

void event_dispatch::keyup_lgui() const { keyup_lgui_signal(); }

connection event_dispatch::on_keyup_lgui(keyup_lgui_slot_t const& op) {
  return keyup_lgui_signal.connect(op);
}

void event_dispatch::keyup_rctrl() const { keyup_rctrl_signal(); }

connection event_dispatch::on_keyup_rctrl(keyup_rctrl_slot_t const& op) {
  return keyup_rctrl_signal.connect(op);
}

void event_dispatch::keyup_rshift() const { keyup_rshift_signal(); }

connection event_dispatch::on_keyup_rshift(keyup_rshift_slot_t const& op) {
  return keyup_rshift_signal.connect(op);
}

void event_dispatch::keyup_ralt() const { keyup_ralt_signal(); }

connection event_dispatch::on_keyup_ralt(keyup_ralt_slot_t const& op) {
  return keyup_ralt_signal.connect(op);
}

void event_dispatch::keyup_rgui() const { keyup_rgui_signal(); }

connection event_dispatch::on_keyup_rgui(keyup_rgui_slot_t const& op) {
  return keyup_rgui_signal.connect(op);
}

void event_dispatch::keyup_mode() const { keyup_mode_signal(); }

connection event_dispatch::on_keyup_mode(keyup_mode_slot_t const& op) {
  return keyup_mode_signal.connect(op);
}

void event_dispatch::keyup_audionext() const { keyup_audionext_signal(); }

connection event_dispatch::on_keyup_audionext(
  keyup_audionext_slot_t const& op) {
  return keyup_audionext_signal.connect(op);
}

void event_dispatch::keyup_audioprev() const { keyup_audioprev_signal(); }

connection event_dispatch::on_keyup_audioprev(
  keyup_audioprev_slot_t const& op) {
  return keyup_audioprev_signal.connect(op);
}

void event_dispatch::keyup_audiostop() const { keyup_audiostop_signal(); }

connection event_dispatch::on_keyup_audiostop(
  keyup_audiostop_slot_t const& op) {
  return keyup_audiostop_signal.connect(op);
}

void event_dispatch::keyup_audioplay() const { keyup_audioplay_signal(); }

connection event_dispatch::on_keyup_audioplay(
  keyup_audioplay_slot_t const& op) {
  return keyup_audioplay_signal.connect(op);
}

void event_dispatch::keyup_audiomute() const { keyup_audiomute_signal(); }

connection event_dispatch::on_keyup_audiomute(
  keyup_audiomute_slot_t const& op) {
  return keyup_audiomute_signal.connect(op);
}

void event_dispatch::keyup_mediaselect() const {
  keyup_mediaselect_signal();
}

connection event_dispatch::on_keyup_mediaselect(
  keyup_mediaselect_slot_t const& op) {
  return keyup_mediaselect_signal.connect(op);
}

void event_dispatch::keyup_www() const { keyup_www_signal(); }

connection event_dispatch::on_keyup_www(keyup_www_slot_t const& op) {
  return keyup_www_signal.connect(op);
}

void event_dispatch::keyup_mail() const { keyup_mail_signal(); }

connection event_dispatch::on_keyup_mail(keyup_mail_slot_t const& op) {
  return keyup_mail_signal.connect(op);
}

void event_dispatch::keyup_calculator() const {
  keyup_calculator_signal();
}

connection event_dispatch::on_keyup_calculator(
  keyup_calculator_slot_t const& op) {
  return keyup_calculator_signal.connect(op);
}

void event_dispatch::keyup_computer() const { keyup_computer_signal(); }

connection event_dispatch::on_keyup_computer(
  keyup_computer_slot_t const& op) {
  return keyup_computer_signal.connect(op);
}

void event_dispatch::keyup_ac_search() const { keyup_ac_search_signal(); }

connection event_dispatch::on_keyup_ac_search(
  keyup_ac_search_slot_t const& op) {
  return keyup_ac_search_signal.connect(op);
}

void event_dispatch::keyup_ac_home() const { keyup_ac_home_signal(); }

connection event_dispatch::on_keyup_ac_home(
  keyup_ac_home_slot_t const& op) {
  return keyup_ac_home_signal.connect(op);
}

void event_dispatch::keyup_ac_back() const { keyup_ac_back_signal(); }

connection event_dispatch::on_keyup_ac_back(
  keyup_ac_back_slot_t const& op) {
  return keyup_ac_back_signal.connect(op);
}

void event_dispatch::keyup_ac_forward() const {
  keyup_ac_forward_signal();
}

connection event_dispatch::on_keyup_ac_forward(
  keyup_ac_forward_slot_t const& op) {
  return keyup_ac_forward_signal.connect(op);
}

void event_dispatch::keyup_ac_stop() const { keyup_ac_stop_signal(); }

connection event_dispatch::on_keyup_ac_stop(
  keyup_ac_stop_slot_t const& op) {
  return keyup_ac_stop_signal.connect(op);
}

void event_dispatch::keyup_ac_refresh() const {
  keyup_ac_refresh_signal();
}

connection event_dispatch::on_keyup_ac_refresh(
  keyup_ac_refresh_slot_t const& op) {
  return keyup_ac_refresh_signal.connect(op);
}

void event_dispatch::keyup_ac_bookmarks() const {
  keyup_ac_bookmarks_signal();
}

connection event_dispatch::on_keyup_ac_bookmarks(
  keyup_ac_bookmarks_slot_t const& op) {
  return keyup_ac_bookmarks_signal.connect(op);
}

void event_dispatch::keyup_brightnessdown() const {
  keyup_brightnessdown_signal();
}

connection event_dispatch::on_keyup_brightnessdown(
  keyup_brightnessdown_slot_t const& op) {
  return keyup_brightnessdown_signal.connect(op);
}

void event_dispatch::keyup_brightnessup() const {
  keyup_brightnessup_signal();
}

connection event_dispatch::on_keyup_brightnessup(
  keyup_brightnessup_slot_t const& op) {
  return keyup_brightnessup_signal.connect(op);
}

void event_dispatch::keyup_displayswitch() const {
  keyup_displayswitch_signal();
}

connection event_dispatch::on_keyup_displayswitch(
  keyup_displayswitch_slot_t const& op) {
  return keyup_displayswitch_signal.connect(op);
}

void event_dispatch::keyup_kbdillumtoggle() const {
  keyup_kbdillumtoggle_signal();
}

connection event_dispatch::on_keyup_kbdillumtoggle(
  keyup_kbdillumtoggle_slot_t const& op) {
  return keyup_kbdillumtoggle_signal.connect(op);
}

void event_dispatch::keyup_kbdillumdown() const {
  keyup_kbdillumdown_signal();
}

connection event_dispatch::on_keyup_kbdillumdown(
  keyup_kbdillumdown_slot_t const& op) {
  return keyup_kbdillumdown_signal.connect(op);
}

void event_dispatch::keyup_kbdillumup() const {
  keyup_kbdillumup_signal();
}

connection event_dispatch::on_keyup_kbdillumup(
  keyup_kbdillumup_slot_t const& op) {
  return keyup_kbdillumup_signal.connect(op);
}

void event_dispatch::keyup_eject() const { keyup_eject_signal(); }

connection event_dispatch::on_keyup_eject(keyup_eject_slot_t const& op) {
  return keyup_eject_signal.connect(op);
}

void event_dispatch::keyup_sleep() const { keyup_sleep_signal(); }

connection event_dispatch::on_keyup_sleep(keyup_sleep_slot_t const& op) {
  return keyup_sleep_signal.connect(op);
}
}
