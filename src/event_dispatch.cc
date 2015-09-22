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

void event_dispatch::keydown_unknown_repeat() const {
  keydown_unknown_repeat_signal();
}

connection event_dispatch::on_keydown_unknown_repeat(
  keydown_unknown_repeat_slot_t const& op) {
  return keydown_unknown_repeat_signal.connect(op);
}

void event_dispatch::keydown_backspace_repeat() const {
  keydown_backspace_repeat_signal();
}

connection event_dispatch::on_keydown_backspace_repeat(
  keydown_backspace_repeat_slot_t const& op) {
  return keydown_backspace_repeat_signal.connect(op);
}

void event_dispatch::keydown_tab_repeat() const {
  keydown_tab_repeat_signal();
}

connection event_dispatch::on_keydown_tab_repeat(
  keydown_tab_repeat_slot_t const& op) {
  return keydown_tab_repeat_signal.connect(op);
}

void event_dispatch::keydown_return_repeat() const {
  keydown_return_repeat_signal();
}

connection event_dispatch::on_keydown_return_repeat(
  keydown_return_repeat_slot_t const& op) {
  return keydown_return_repeat_signal.connect(op);
}

void event_dispatch::keydown_escape_repeat() const {
  keydown_escape_repeat_signal();
}

connection event_dispatch::on_keydown_escape_repeat(
  keydown_escape_repeat_slot_t const& op) {
  return keydown_escape_repeat_signal.connect(op);
}

void event_dispatch::keydown_space_repeat() const {
  keydown_space_repeat_signal();
}

connection event_dispatch::on_keydown_space_repeat(
  keydown_space_repeat_slot_t const& op) {
  return keydown_space_repeat_signal.connect(op);
}

void event_dispatch::keydown_exclaim_repeat() const {
  keydown_exclaim_repeat_signal();
}

connection event_dispatch::on_keydown_exclaim_repeat(
  keydown_exclaim_repeat_slot_t const& op) {
  return keydown_exclaim_repeat_signal.connect(op);
}

void event_dispatch::keydown_quotedbl_repeat() const {
  keydown_quotedbl_repeat_signal();
}

connection event_dispatch::on_keydown_quotedbl_repeat(
  keydown_quotedbl_repeat_slot_t const& op) {
  return keydown_quotedbl_repeat_signal.connect(op);
}

void event_dispatch::keydown_hash_repeat() const {
  keydown_hash_repeat_signal();
}

connection event_dispatch::on_keydown_hash_repeat(
  keydown_hash_repeat_slot_t const& op) {
  return keydown_hash_repeat_signal.connect(op);
}

void event_dispatch::keydown_dollar_repeat() const {
  keydown_dollar_repeat_signal();
}

connection event_dispatch::on_keydown_dollar_repeat(
  keydown_dollar_repeat_slot_t const& op) {
  return keydown_dollar_repeat_signal.connect(op);
}

void event_dispatch::keydown_percent_repeat() const {
  keydown_percent_repeat_signal();
}

connection event_dispatch::on_keydown_percent_repeat(
  keydown_percent_repeat_slot_t const& op) {
  return keydown_percent_repeat_signal.connect(op);
}

void event_dispatch::keydown_ampersand_repeat() const {
  keydown_ampersand_repeat_signal();
}

connection event_dispatch::on_keydown_ampersand_repeat(
  keydown_ampersand_repeat_slot_t const& op) {
  return keydown_ampersand_repeat_signal.connect(op);
}

void event_dispatch::keydown_quote_repeat() const {
  keydown_quote_repeat_signal();
}

connection event_dispatch::on_keydown_quote_repeat(
  keydown_quote_repeat_slot_t const& op) {
  return keydown_quote_repeat_signal.connect(op);
}

void event_dispatch::keydown_leftparen_repeat() const {
  keydown_leftparen_repeat_signal();
}

connection event_dispatch::on_keydown_leftparen_repeat(
  keydown_leftparen_repeat_slot_t const& op) {
  return keydown_leftparen_repeat_signal.connect(op);
}

void event_dispatch::keydown_rightparen_repeat() const {
  keydown_rightparen_repeat_signal();
}

connection event_dispatch::on_keydown_rightparen_repeat(
  keydown_rightparen_repeat_slot_t const& op) {
  return keydown_rightparen_repeat_signal.connect(op);
}

void event_dispatch::keydown_asterisk_repeat() const {
  keydown_asterisk_repeat_signal();
}

connection event_dispatch::on_keydown_asterisk_repeat(
  keydown_asterisk_repeat_slot_t const& op) {
  return keydown_asterisk_repeat_signal.connect(op);
}

void event_dispatch::keydown_plus_repeat() const {
  keydown_plus_repeat_signal();
}

connection event_dispatch::on_keydown_plus_repeat(
  keydown_plus_repeat_slot_t const& op) {
  return keydown_plus_repeat_signal.connect(op);
}

void event_dispatch::keydown_comma_repeat() const {
  keydown_comma_repeat_signal();
}

connection event_dispatch::on_keydown_comma_repeat(
  keydown_comma_repeat_slot_t const& op) {
  return keydown_comma_repeat_signal.connect(op);
}

void event_dispatch::keydown_minus_repeat() const {
  keydown_minus_repeat_signal();
}

connection event_dispatch::on_keydown_minus_repeat(
  keydown_minus_repeat_slot_t const& op) {
  return keydown_minus_repeat_signal.connect(op);
}

void event_dispatch::keydown_period_repeat() const {
  keydown_period_repeat_signal();
}

connection event_dispatch::on_keydown_period_repeat(
  keydown_period_repeat_slot_t const& op) {
  return keydown_period_repeat_signal.connect(op);
}

void event_dispatch::keydown_slash_repeat() const {
  keydown_slash_repeat_signal();
}

connection event_dispatch::on_keydown_slash_repeat(
  keydown_slash_repeat_slot_t const& op) {
  return keydown_slash_repeat_signal.connect(op);
}

void event_dispatch::keydown_0_repeat() const { keydown_0_repeat_signal(); }

connection event_dispatch::on_keydown_0_repeat(
  keydown_0_repeat_slot_t const& op) {
  return keydown_0_repeat_signal.connect(op);
}

void event_dispatch::keydown_1_repeat() const { keydown_1_repeat_signal(); }

connection event_dispatch::on_keydown_1_repeat(
  keydown_1_repeat_slot_t const& op) {
  return keydown_1_repeat_signal.connect(op);
}

void event_dispatch::keydown_2_repeat() const { keydown_2_repeat_signal(); }

connection event_dispatch::on_keydown_2_repeat(
  keydown_2_repeat_slot_t const& op) {
  return keydown_2_repeat_signal.connect(op);
}

void event_dispatch::keydown_3_repeat() const { keydown_3_repeat_signal(); }

connection event_dispatch::on_keydown_3_repeat(
  keydown_3_repeat_slot_t const& op) {
  return keydown_3_repeat_signal.connect(op);
}

void event_dispatch::keydown_4_repeat() const { keydown_4_repeat_signal(); }

connection event_dispatch::on_keydown_4_repeat(
  keydown_4_repeat_slot_t const& op) {
  return keydown_4_repeat_signal.connect(op);
}

void event_dispatch::keydown_5_repeat() const { keydown_5_repeat_signal(); }

connection event_dispatch::on_keydown_5_repeat(
  keydown_5_repeat_slot_t const& op) {
  return keydown_5_repeat_signal.connect(op);
}

void event_dispatch::keydown_6_repeat() const { keydown_6_repeat_signal(); }

connection event_dispatch::on_keydown_6_repeat(
  keydown_6_repeat_slot_t const& op) {
  return keydown_6_repeat_signal.connect(op);
}

void event_dispatch::keydown_7_repeat() const { keydown_7_repeat_signal(); }

connection event_dispatch::on_keydown_7_repeat(
  keydown_7_repeat_slot_t const& op) {
  return keydown_7_repeat_signal.connect(op);
}

void event_dispatch::keydown_8_repeat() const { keydown_8_repeat_signal(); }

connection event_dispatch::on_keydown_8_repeat(
  keydown_8_repeat_slot_t const& op) {
  return keydown_8_repeat_signal.connect(op);
}

void event_dispatch::keydown_9_repeat() const { keydown_9_repeat_signal(); }

connection event_dispatch::on_keydown_9_repeat(
  keydown_9_repeat_slot_t const& op) {
  return keydown_9_repeat_signal.connect(op);
}

void event_dispatch::keydown_colon_repeat() const {
  keydown_colon_repeat_signal();
}

connection event_dispatch::on_keydown_colon_repeat(
  keydown_colon_repeat_slot_t const& op) {
  return keydown_colon_repeat_signal.connect(op);
}

void event_dispatch::keydown_semicolon_repeat() const {
  keydown_semicolon_repeat_signal();
}

connection event_dispatch::on_keydown_semicolon_repeat(
  keydown_semicolon_repeat_slot_t const& op) {
  return keydown_semicolon_repeat_signal.connect(op);
}

void event_dispatch::keydown_less_repeat() const {
  keydown_less_repeat_signal();
}

connection event_dispatch::on_keydown_less_repeat(
  keydown_less_repeat_slot_t const& op) {
  return keydown_less_repeat_signal.connect(op);
}

void event_dispatch::keydown_equals_repeat() const {
  keydown_equals_repeat_signal();
}

connection event_dispatch::on_keydown_equals_repeat(
  keydown_equals_repeat_slot_t const& op) {
  return keydown_equals_repeat_signal.connect(op);
}

void event_dispatch::keydown_greater_repeat() const {
  keydown_greater_repeat_signal();
}

connection event_dispatch::on_keydown_greater_repeat(
  keydown_greater_repeat_slot_t const& op) {
  return keydown_greater_repeat_signal.connect(op);
}

void event_dispatch::keydown_question_repeat() const {
  keydown_question_repeat_signal();
}

connection event_dispatch::on_keydown_question_repeat(
  keydown_question_repeat_slot_t const& op) {
  return keydown_question_repeat_signal.connect(op);
}

void event_dispatch::keydown_at_repeat() const { keydown_at_repeat_signal(); }

connection event_dispatch::on_keydown_at_repeat(
  keydown_at_repeat_slot_t const& op) {
  return keydown_at_repeat_signal.connect(op);
}

void event_dispatch::keydown_leftbracket_repeat() const {
  keydown_leftbracket_repeat_signal();
}

connection event_dispatch::on_keydown_leftbracket_repeat(
  keydown_leftbracket_repeat_slot_t const& op) {
  return keydown_leftbracket_repeat_signal.connect(op);
}

void event_dispatch::keydown_backslash_repeat() const {
  keydown_backslash_repeat_signal();
}

connection event_dispatch::on_keydown_backslash_repeat(
  keydown_backslash_repeat_slot_t const& op) {
  return keydown_backslash_repeat_signal.connect(op);
}

void event_dispatch::keydown_rightbracket_repeat() const {
  keydown_rightbracket_repeat_signal();
}

connection event_dispatch::on_keydown_rightbracket_repeat(
  keydown_rightbracket_repeat_slot_t const& op) {
  return keydown_rightbracket_repeat_signal.connect(op);
}

void event_dispatch::keydown_caret_repeat() const {
  keydown_caret_repeat_signal();
}

connection event_dispatch::on_keydown_caret_repeat(
  keydown_caret_repeat_slot_t const& op) {
  return keydown_caret_repeat_signal.connect(op);
}

void event_dispatch::keydown_underscore_repeat() const {
  keydown_underscore_repeat_signal();
}

connection event_dispatch::on_keydown_underscore_repeat(
  keydown_underscore_repeat_slot_t const& op) {
  return keydown_underscore_repeat_signal.connect(op);
}

void event_dispatch::keydown_backquote_repeat() const {
  keydown_backquote_repeat_signal();
}

connection event_dispatch::on_keydown_backquote_repeat(
  keydown_backquote_repeat_slot_t const& op) {
  return keydown_backquote_repeat_signal.connect(op);
}

void event_dispatch::keydown_a_repeat() const { keydown_a_repeat_signal(); }

connection event_dispatch::on_keydown_a_repeat(
  keydown_a_repeat_slot_t const& op) {
  return keydown_a_repeat_signal.connect(op);
}

void event_dispatch::keydown_b_repeat() const { keydown_b_repeat_signal(); }

connection event_dispatch::on_keydown_b_repeat(
  keydown_b_repeat_slot_t const& op) {
  return keydown_b_repeat_signal.connect(op);
}

void event_dispatch::keydown_c_repeat() const { keydown_c_repeat_signal(); }

connection event_dispatch::on_keydown_c_repeat(
  keydown_c_repeat_slot_t const& op) {
  return keydown_c_repeat_signal.connect(op);
}

void event_dispatch::keydown_d_repeat() const { keydown_d_repeat_signal(); }

connection event_dispatch::on_keydown_d_repeat(
  keydown_d_repeat_slot_t const& op) {
  return keydown_d_repeat_signal.connect(op);
}

void event_dispatch::keydown_e_repeat() const { keydown_e_repeat_signal(); }

connection event_dispatch::on_keydown_e_repeat(
  keydown_e_repeat_slot_t const& op) {
  return keydown_e_repeat_signal.connect(op);
}

void event_dispatch::keydown_f_repeat() const { keydown_f_repeat_signal(); }

connection event_dispatch::on_keydown_f_repeat(
  keydown_f_repeat_slot_t const& op) {
  return keydown_f_repeat_signal.connect(op);
}

void event_dispatch::keydown_g_repeat() const { keydown_g_repeat_signal(); }

connection event_dispatch::on_keydown_g_repeat(
  keydown_g_repeat_slot_t const& op) {
  return keydown_g_repeat_signal.connect(op);
}

void event_dispatch::keydown_h_repeat() const { keydown_h_repeat_signal(); }

connection event_dispatch::on_keydown_h_repeat(
  keydown_h_repeat_slot_t const& op) {
  return keydown_h_repeat_signal.connect(op);
}

void event_dispatch::keydown_i_repeat() const { keydown_i_repeat_signal(); }

connection event_dispatch::on_keydown_i_repeat(
  keydown_i_repeat_slot_t const& op) {
  return keydown_i_repeat_signal.connect(op);
}

void event_dispatch::keydown_j_repeat() const { keydown_j_repeat_signal(); }

connection event_dispatch::on_keydown_j_repeat(
  keydown_j_repeat_slot_t const& op) {
  return keydown_j_repeat_signal.connect(op);
}

void event_dispatch::keydown_k_repeat() const { keydown_k_repeat_signal(); }

connection event_dispatch::on_keydown_k_repeat(
  keydown_k_repeat_slot_t const& op) {
  return keydown_k_repeat_signal.connect(op);
}

void event_dispatch::keydown_l_repeat() const { keydown_l_repeat_signal(); }

connection event_dispatch::on_keydown_l_repeat(
  keydown_l_repeat_slot_t const& op) {
  return keydown_l_repeat_signal.connect(op);
}

void event_dispatch::keydown_m_repeat() const { keydown_m_repeat_signal(); }

connection event_dispatch::on_keydown_m_repeat(
  keydown_m_repeat_slot_t const& op) {
  return keydown_m_repeat_signal.connect(op);
}

void event_dispatch::keydown_n_repeat() const { keydown_n_repeat_signal(); }

connection event_dispatch::on_keydown_n_repeat(
  keydown_n_repeat_slot_t const& op) {
  return keydown_n_repeat_signal.connect(op);
}

void event_dispatch::keydown_o_repeat() const { keydown_o_repeat_signal(); }

connection event_dispatch::on_keydown_o_repeat(
  keydown_o_repeat_slot_t const& op) {
  return keydown_o_repeat_signal.connect(op);
}

void event_dispatch::keydown_p_repeat() const { keydown_p_repeat_signal(); }

connection event_dispatch::on_keydown_p_repeat(
  keydown_p_repeat_slot_t const& op) {
  return keydown_p_repeat_signal.connect(op);
}

void event_dispatch::keydown_q_repeat() const { keydown_q_repeat_signal(); }

connection event_dispatch::on_keydown_q_repeat(
  keydown_q_repeat_slot_t const& op) {
  return keydown_q_repeat_signal.connect(op);
}

void event_dispatch::keydown_r_repeat() const { keydown_r_repeat_signal(); }

connection event_dispatch::on_keydown_r_repeat(
  keydown_r_repeat_slot_t const& op) {
  return keydown_r_repeat_signal.connect(op);
}

void event_dispatch::keydown_s_repeat() const { keydown_s_repeat_signal(); }

connection event_dispatch::on_keydown_s_repeat(
  keydown_s_repeat_slot_t const& op) {
  return keydown_s_repeat_signal.connect(op);
}

void event_dispatch::keydown_t_repeat() const { keydown_t_repeat_signal(); }

connection event_dispatch::on_keydown_t_repeat(
  keydown_t_repeat_slot_t const& op) {
  return keydown_t_repeat_signal.connect(op);
}

void event_dispatch::keydown_u_repeat() const { keydown_u_repeat_signal(); }

connection event_dispatch::on_keydown_u_repeat(
  keydown_u_repeat_slot_t const& op) {
  return keydown_u_repeat_signal.connect(op);
}

void event_dispatch::keydown_v_repeat() const { keydown_v_repeat_signal(); }

connection event_dispatch::on_keydown_v_repeat(
  keydown_v_repeat_slot_t const& op) {
  return keydown_v_repeat_signal.connect(op);
}

void event_dispatch::keydown_w_repeat() const { keydown_w_repeat_signal(); }

connection event_dispatch::on_keydown_w_repeat(
  keydown_w_repeat_slot_t const& op) {
  return keydown_w_repeat_signal.connect(op);
}

void event_dispatch::keydown_x_repeat() const { keydown_x_repeat_signal(); }

connection event_dispatch::on_keydown_x_repeat(
  keydown_x_repeat_slot_t const& op) {
  return keydown_x_repeat_signal.connect(op);
}

void event_dispatch::keydown_y_repeat() const { keydown_y_repeat_signal(); }

connection event_dispatch::on_keydown_y_repeat(
  keydown_y_repeat_slot_t const& op) {
  return keydown_y_repeat_signal.connect(op);
}

void event_dispatch::keydown_z_repeat() const { keydown_z_repeat_signal(); }

connection event_dispatch::on_keydown_z_repeat(
  keydown_z_repeat_slot_t const& op) {
  return keydown_z_repeat_signal.connect(op);
}

void event_dispatch::keydown_delete_repeat() const {
  keydown_delete_repeat_signal();
}

connection event_dispatch::on_keydown_delete_repeat(
  keydown_delete_repeat_slot_t const& op) {
  return keydown_delete_repeat_signal.connect(op);
}

void event_dispatch::keydown_capslock_repeat() const {
  keydown_capslock_repeat_signal();
}

connection event_dispatch::on_keydown_capslock_repeat(
  keydown_capslock_repeat_slot_t const& op) {
  return keydown_capslock_repeat_signal.connect(op);
}

void event_dispatch::keydown_f1_repeat() const { keydown_f1_repeat_signal(); }

connection event_dispatch::on_keydown_f1_repeat(
  keydown_f1_repeat_slot_t const& op) {
  return keydown_f1_repeat_signal.connect(op);
}

void event_dispatch::keydown_f2_repeat() const { keydown_f2_repeat_signal(); }

connection event_dispatch::on_keydown_f2_repeat(
  keydown_f2_repeat_slot_t const& op) {
  return keydown_f2_repeat_signal.connect(op);
}

void event_dispatch::keydown_f3_repeat() const { keydown_f3_repeat_signal(); }

connection event_dispatch::on_keydown_f3_repeat(
  keydown_f3_repeat_slot_t const& op) {
  return keydown_f3_repeat_signal.connect(op);
}

void event_dispatch::keydown_f4_repeat() const { keydown_f4_repeat_signal(); }

connection event_dispatch::on_keydown_f4_repeat(
  keydown_f4_repeat_slot_t const& op) {
  return keydown_f4_repeat_signal.connect(op);
}

void event_dispatch::keydown_f5_repeat() const { keydown_f5_repeat_signal(); }

connection event_dispatch::on_keydown_f5_repeat(
  keydown_f5_repeat_slot_t const& op) {
  return keydown_f5_repeat_signal.connect(op);
}

void event_dispatch::keydown_f6_repeat() const { keydown_f6_repeat_signal(); }

connection event_dispatch::on_keydown_f6_repeat(
  keydown_f6_repeat_slot_t const& op) {
  return keydown_f6_repeat_signal.connect(op);
}

void event_dispatch::keydown_f7_repeat() const { keydown_f7_repeat_signal(); }

connection event_dispatch::on_keydown_f7_repeat(
  keydown_f7_repeat_slot_t const& op) {
  return keydown_f7_repeat_signal.connect(op);
}

void event_dispatch::keydown_f8_repeat() const { keydown_f8_repeat_signal(); }

connection event_dispatch::on_keydown_f8_repeat(
  keydown_f8_repeat_slot_t const& op) {
  return keydown_f8_repeat_signal.connect(op);
}

void event_dispatch::keydown_f9_repeat() const { keydown_f9_repeat_signal(); }

connection event_dispatch::on_keydown_f9_repeat(
  keydown_f9_repeat_slot_t const& op) {
  return keydown_f9_repeat_signal.connect(op);
}

void event_dispatch::keydown_f10_repeat() const {
  keydown_f10_repeat_signal();
}

connection event_dispatch::on_keydown_f10_repeat(
  keydown_f10_repeat_slot_t const& op) {
  return keydown_f10_repeat_signal.connect(op);
}

void event_dispatch::keydown_f11_repeat() const {
  keydown_f11_repeat_signal();
}

connection event_dispatch::on_keydown_f11_repeat(
  keydown_f11_repeat_slot_t const& op) {
  return keydown_f11_repeat_signal.connect(op);
}

void event_dispatch::keydown_f12_repeat() const {
  keydown_f12_repeat_signal();
}

connection event_dispatch::on_keydown_f12_repeat(
  keydown_f12_repeat_slot_t const& op) {
  return keydown_f12_repeat_signal.connect(op);
}

void event_dispatch::keydown_printscreen_repeat() const {
  keydown_printscreen_repeat_signal();
}

connection event_dispatch::on_keydown_printscreen_repeat(
  keydown_printscreen_repeat_slot_t const& op) {
  return keydown_printscreen_repeat_signal.connect(op);
}

void event_dispatch::keydown_scrolllock_repeat() const {
  keydown_scrolllock_repeat_signal();
}

connection event_dispatch::on_keydown_scrolllock_repeat(
  keydown_scrolllock_repeat_slot_t const& op) {
  return keydown_scrolllock_repeat_signal.connect(op);
}

void event_dispatch::keydown_pause_repeat() const {
  keydown_pause_repeat_signal();
}

connection event_dispatch::on_keydown_pause_repeat(
  keydown_pause_repeat_slot_t const& op) {
  return keydown_pause_repeat_signal.connect(op);
}

void event_dispatch::keydown_insert_repeat() const {
  keydown_insert_repeat_signal();
}

connection event_dispatch::on_keydown_insert_repeat(
  keydown_insert_repeat_slot_t const& op) {
  return keydown_insert_repeat_signal.connect(op);
}

void event_dispatch::keydown_home_repeat() const {
  keydown_home_repeat_signal();
}

connection event_dispatch::on_keydown_home_repeat(
  keydown_home_repeat_slot_t const& op) {
  return keydown_home_repeat_signal.connect(op);
}

void event_dispatch::keydown_pageup_repeat() const {
  keydown_pageup_repeat_signal();
}

connection event_dispatch::on_keydown_pageup_repeat(
  keydown_pageup_repeat_slot_t const& op) {
  return keydown_pageup_repeat_signal.connect(op);
}

void event_dispatch::keydown_end_repeat() const {
  keydown_end_repeat_signal();
}

connection event_dispatch::on_keydown_end_repeat(
  keydown_end_repeat_slot_t const& op) {
  return keydown_end_repeat_signal.connect(op);
}

void event_dispatch::keydown_pagedown_repeat() const {
  keydown_pagedown_repeat_signal();
}

connection event_dispatch::on_keydown_pagedown_repeat(
  keydown_pagedown_repeat_slot_t const& op) {
  return keydown_pagedown_repeat_signal.connect(op);
}

void event_dispatch::keydown_right_repeat() const {
  keydown_right_repeat_signal();
}

connection event_dispatch::on_keydown_right_repeat(
  keydown_right_repeat_slot_t const& op) {
  return keydown_right_repeat_signal.connect(op);
}

void event_dispatch::keydown_left_repeat() const {
  keydown_left_repeat_signal();
}

connection event_dispatch::on_keydown_left_repeat(
  keydown_left_repeat_slot_t const& op) {
  return keydown_left_repeat_signal.connect(op);
}

void event_dispatch::keydown_down_repeat() const {
  keydown_down_repeat_signal();
}

connection event_dispatch::on_keydown_down_repeat(
  keydown_down_repeat_slot_t const& op) {
  return keydown_down_repeat_signal.connect(op);
}

void event_dispatch::keydown_up_repeat() const { keydown_up_repeat_signal(); }

connection event_dispatch::on_keydown_up_repeat(
  keydown_up_repeat_slot_t const& op) {
  return keydown_up_repeat_signal.connect(op);
}

void event_dispatch::keydown_numlockclear_repeat() const {
  keydown_numlockclear_repeat_signal();
}

connection event_dispatch::on_keydown_numlockclear_repeat(
  keydown_numlockclear_repeat_slot_t const& op) {
  return keydown_numlockclear_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_divide_repeat() const {
  keydown_kp_divide_repeat_signal();
}

connection event_dispatch::on_keydown_kp_divide_repeat(
  keydown_kp_divide_repeat_slot_t const& op) {
  return keydown_kp_divide_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_multiply_repeat() const {
  keydown_kp_multiply_repeat_signal();
}

connection event_dispatch::on_keydown_kp_multiply_repeat(
  keydown_kp_multiply_repeat_slot_t const& op) {
  return keydown_kp_multiply_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_minus_repeat() const {
  keydown_kp_minus_repeat_signal();
}

connection event_dispatch::on_keydown_kp_minus_repeat(
  keydown_kp_minus_repeat_slot_t const& op) {
  return keydown_kp_minus_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_plus_repeat() const {
  keydown_kp_plus_repeat_signal();
}

connection event_dispatch::on_keydown_kp_plus_repeat(
  keydown_kp_plus_repeat_slot_t const& op) {
  return keydown_kp_plus_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_enter_repeat() const {
  keydown_kp_enter_repeat_signal();
}

connection event_dispatch::on_keydown_kp_enter_repeat(
  keydown_kp_enter_repeat_slot_t const& op) {
  return keydown_kp_enter_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_1_repeat() const {
  keydown_kp_1_repeat_signal();
}

connection event_dispatch::on_keydown_kp_1_repeat(
  keydown_kp_1_repeat_slot_t const& op) {
  return keydown_kp_1_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_2_repeat() const {
  keydown_kp_2_repeat_signal();
}

connection event_dispatch::on_keydown_kp_2_repeat(
  keydown_kp_2_repeat_slot_t const& op) {
  return keydown_kp_2_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_3_repeat() const {
  keydown_kp_3_repeat_signal();
}

connection event_dispatch::on_keydown_kp_3_repeat(
  keydown_kp_3_repeat_slot_t const& op) {
  return keydown_kp_3_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_4_repeat() const {
  keydown_kp_4_repeat_signal();
}

connection event_dispatch::on_keydown_kp_4_repeat(
  keydown_kp_4_repeat_slot_t const& op) {
  return keydown_kp_4_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_5_repeat() const {
  keydown_kp_5_repeat_signal();
}

connection event_dispatch::on_keydown_kp_5_repeat(
  keydown_kp_5_repeat_slot_t const& op) {
  return keydown_kp_5_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_6_repeat() const {
  keydown_kp_6_repeat_signal();
}

connection event_dispatch::on_keydown_kp_6_repeat(
  keydown_kp_6_repeat_slot_t const& op) {
  return keydown_kp_6_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_7_repeat() const {
  keydown_kp_7_repeat_signal();
}

connection event_dispatch::on_keydown_kp_7_repeat(
  keydown_kp_7_repeat_slot_t const& op) {
  return keydown_kp_7_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_8_repeat() const {
  keydown_kp_8_repeat_signal();
}

connection event_dispatch::on_keydown_kp_8_repeat(
  keydown_kp_8_repeat_slot_t const& op) {
  return keydown_kp_8_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_9_repeat() const {
  keydown_kp_9_repeat_signal();
}

connection event_dispatch::on_keydown_kp_9_repeat(
  keydown_kp_9_repeat_slot_t const& op) {
  return keydown_kp_9_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_0_repeat() const {
  keydown_kp_0_repeat_signal();
}

connection event_dispatch::on_keydown_kp_0_repeat(
  keydown_kp_0_repeat_slot_t const& op) {
  return keydown_kp_0_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_period_repeat() const {
  keydown_kp_period_repeat_signal();
}

connection event_dispatch::on_keydown_kp_period_repeat(
  keydown_kp_period_repeat_slot_t const& op) {
  return keydown_kp_period_repeat_signal.connect(op);
}

void event_dispatch::keydown_application_repeat() const {
  keydown_application_repeat_signal();
}

connection event_dispatch::on_keydown_application_repeat(
  keydown_application_repeat_slot_t const& op) {
  return keydown_application_repeat_signal.connect(op);
}

void event_dispatch::keydown_power_repeat() const {
  keydown_power_repeat_signal();
}

connection event_dispatch::on_keydown_power_repeat(
  keydown_power_repeat_slot_t const& op) {
  return keydown_power_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_equals_repeat() const {
  keydown_kp_equals_repeat_signal();
}

connection event_dispatch::on_keydown_kp_equals_repeat(
  keydown_kp_equals_repeat_slot_t const& op) {
  return keydown_kp_equals_repeat_signal.connect(op);
}

void event_dispatch::keydown_f13_repeat() const {
  keydown_f13_repeat_signal();
}

connection event_dispatch::on_keydown_f13_repeat(
  keydown_f13_repeat_slot_t const& op) {
  return keydown_f13_repeat_signal.connect(op);
}

void event_dispatch::keydown_f14_repeat() const {
  keydown_f14_repeat_signal();
}

connection event_dispatch::on_keydown_f14_repeat(
  keydown_f14_repeat_slot_t const& op) {
  return keydown_f14_repeat_signal.connect(op);
}

void event_dispatch::keydown_f15_repeat() const {
  keydown_f15_repeat_signal();
}

connection event_dispatch::on_keydown_f15_repeat(
  keydown_f15_repeat_slot_t const& op) {
  return keydown_f15_repeat_signal.connect(op);
}

void event_dispatch::keydown_f16_repeat() const {
  keydown_f16_repeat_signal();
}

connection event_dispatch::on_keydown_f16_repeat(
  keydown_f16_repeat_slot_t const& op) {
  return keydown_f16_repeat_signal.connect(op);
}

void event_dispatch::keydown_f17_repeat() const {
  keydown_f17_repeat_signal();
}

connection event_dispatch::on_keydown_f17_repeat(
  keydown_f17_repeat_slot_t const& op) {
  return keydown_f17_repeat_signal.connect(op);
}

void event_dispatch::keydown_f18_repeat() const {
  keydown_f18_repeat_signal();
}

connection event_dispatch::on_keydown_f18_repeat(
  keydown_f18_repeat_slot_t const& op) {
  return keydown_f18_repeat_signal.connect(op);
}

void event_dispatch::keydown_f19_repeat() const {
  keydown_f19_repeat_signal();
}

connection event_dispatch::on_keydown_f19_repeat(
  keydown_f19_repeat_slot_t const& op) {
  return keydown_f19_repeat_signal.connect(op);
}

void event_dispatch::keydown_f20_repeat() const {
  keydown_f20_repeat_signal();
}

connection event_dispatch::on_keydown_f20_repeat(
  keydown_f20_repeat_slot_t const& op) {
  return keydown_f20_repeat_signal.connect(op);
}

void event_dispatch::keydown_f21_repeat() const {
  keydown_f21_repeat_signal();
}

connection event_dispatch::on_keydown_f21_repeat(
  keydown_f21_repeat_slot_t const& op) {
  return keydown_f21_repeat_signal.connect(op);
}

void event_dispatch::keydown_f22_repeat() const {
  keydown_f22_repeat_signal();
}

connection event_dispatch::on_keydown_f22_repeat(
  keydown_f22_repeat_slot_t const& op) {
  return keydown_f22_repeat_signal.connect(op);
}

void event_dispatch::keydown_f23_repeat() const {
  keydown_f23_repeat_signal();
}

connection event_dispatch::on_keydown_f23_repeat(
  keydown_f23_repeat_slot_t const& op) {
  return keydown_f23_repeat_signal.connect(op);
}

void event_dispatch::keydown_f24_repeat() const {
  keydown_f24_repeat_signal();
}

connection event_dispatch::on_keydown_f24_repeat(
  keydown_f24_repeat_slot_t const& op) {
  return keydown_f24_repeat_signal.connect(op);
}

void event_dispatch::keydown_execute_repeat() const {
  keydown_execute_repeat_signal();
}

connection event_dispatch::on_keydown_execute_repeat(
  keydown_execute_repeat_slot_t const& op) {
  return keydown_execute_repeat_signal.connect(op);
}

void event_dispatch::keydown_help_repeat() const {
  keydown_help_repeat_signal();
}

connection event_dispatch::on_keydown_help_repeat(
  keydown_help_repeat_slot_t const& op) {
  return keydown_help_repeat_signal.connect(op);
}

void event_dispatch::keydown_menu_repeat() const {
  keydown_menu_repeat_signal();
}

connection event_dispatch::on_keydown_menu_repeat(
  keydown_menu_repeat_slot_t const& op) {
  return keydown_menu_repeat_signal.connect(op);
}

void event_dispatch::keydown_select_repeat() const {
  keydown_select_repeat_signal();
}

connection event_dispatch::on_keydown_select_repeat(
  keydown_select_repeat_slot_t const& op) {
  return keydown_select_repeat_signal.connect(op);
}

void event_dispatch::keydown_stop_repeat() const {
  keydown_stop_repeat_signal();
}

connection event_dispatch::on_keydown_stop_repeat(
  keydown_stop_repeat_slot_t const& op) {
  return keydown_stop_repeat_signal.connect(op);
}

void event_dispatch::keydown_again_repeat() const {
  keydown_again_repeat_signal();
}

connection event_dispatch::on_keydown_again_repeat(
  keydown_again_repeat_slot_t const& op) {
  return keydown_again_repeat_signal.connect(op);
}

void event_dispatch::keydown_undo_repeat() const {
  keydown_undo_repeat_signal();
}

connection event_dispatch::on_keydown_undo_repeat(
  keydown_undo_repeat_slot_t const& op) {
  return keydown_undo_repeat_signal.connect(op);
}

void event_dispatch::keydown_cut_repeat() const {
  keydown_cut_repeat_signal();
}

connection event_dispatch::on_keydown_cut_repeat(
  keydown_cut_repeat_slot_t const& op) {
  return keydown_cut_repeat_signal.connect(op);
}

void event_dispatch::keydown_copy_repeat() const {
  keydown_copy_repeat_signal();
}

connection event_dispatch::on_keydown_copy_repeat(
  keydown_copy_repeat_slot_t const& op) {
  return keydown_copy_repeat_signal.connect(op);
}

void event_dispatch::keydown_paste_repeat() const {
  keydown_paste_repeat_signal();
}

connection event_dispatch::on_keydown_paste_repeat(
  keydown_paste_repeat_slot_t const& op) {
  return keydown_paste_repeat_signal.connect(op);
}

void event_dispatch::keydown_find_repeat() const {
  keydown_find_repeat_signal();
}

connection event_dispatch::on_keydown_find_repeat(
  keydown_find_repeat_slot_t const& op) {
  return keydown_find_repeat_signal.connect(op);
}

void event_dispatch::keydown_mute_repeat() const {
  keydown_mute_repeat_signal();
}

connection event_dispatch::on_keydown_mute_repeat(
  keydown_mute_repeat_slot_t const& op) {
  return keydown_mute_repeat_signal.connect(op);
}

void event_dispatch::keydown_volumeup_repeat() const {
  keydown_volumeup_repeat_signal();
}

connection event_dispatch::on_keydown_volumeup_repeat(
  keydown_volumeup_repeat_slot_t const& op) {
  return keydown_volumeup_repeat_signal.connect(op);
}

void event_dispatch::keydown_volumedown_repeat() const {
  keydown_volumedown_repeat_signal();
}

connection event_dispatch::on_keydown_volumedown_repeat(
  keydown_volumedown_repeat_slot_t const& op) {
  return keydown_volumedown_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_comma_repeat() const {
  keydown_kp_comma_repeat_signal();
}

connection event_dispatch::on_keydown_kp_comma_repeat(
  keydown_kp_comma_repeat_slot_t const& op) {
  return keydown_kp_comma_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_equalsas400_repeat() const {
  keydown_kp_equalsas400_repeat_signal();
}

connection event_dispatch::on_keydown_kp_equalsas400_repeat(
  keydown_kp_equalsas400_repeat_slot_t const& op) {
  return keydown_kp_equalsas400_repeat_signal.connect(op);
}

void event_dispatch::keydown_alterase_repeat() const {
  keydown_alterase_repeat_signal();
}

connection event_dispatch::on_keydown_alterase_repeat(
  keydown_alterase_repeat_slot_t const& op) {
  return keydown_alterase_repeat_signal.connect(op);
}

void event_dispatch::keydown_sysreq_repeat() const {
  keydown_sysreq_repeat_signal();
}

connection event_dispatch::on_keydown_sysreq_repeat(
  keydown_sysreq_repeat_slot_t const& op) {
  return keydown_sysreq_repeat_signal.connect(op);
}

void event_dispatch::keydown_cancel_repeat() const {
  keydown_cancel_repeat_signal();
}

connection event_dispatch::on_keydown_cancel_repeat(
  keydown_cancel_repeat_slot_t const& op) {
  return keydown_cancel_repeat_signal.connect(op);
}

void event_dispatch::keydown_clear_repeat() const {
  keydown_clear_repeat_signal();
}

connection event_dispatch::on_keydown_clear_repeat(
  keydown_clear_repeat_slot_t const& op) {
  return keydown_clear_repeat_signal.connect(op);
}

void event_dispatch::keydown_prior_repeat() const {
  keydown_prior_repeat_signal();
}

connection event_dispatch::on_keydown_prior_repeat(
  keydown_prior_repeat_slot_t const& op) {
  return keydown_prior_repeat_signal.connect(op);
}

void event_dispatch::keydown_return2_repeat() const {
  keydown_return2_repeat_signal();
}

connection event_dispatch::on_keydown_return2_repeat(
  keydown_return2_repeat_slot_t const& op) {
  return keydown_return2_repeat_signal.connect(op);
}

void event_dispatch::keydown_separator_repeat() const {
  keydown_separator_repeat_signal();
}

connection event_dispatch::on_keydown_separator_repeat(
  keydown_separator_repeat_slot_t const& op) {
  return keydown_separator_repeat_signal.connect(op);
}

void event_dispatch::keydown_out_repeat() const {
  keydown_out_repeat_signal();
}

connection event_dispatch::on_keydown_out_repeat(
  keydown_out_repeat_slot_t const& op) {
  return keydown_out_repeat_signal.connect(op);
}

void event_dispatch::keydown_oper_repeat() const {
  keydown_oper_repeat_signal();
}

connection event_dispatch::on_keydown_oper_repeat(
  keydown_oper_repeat_slot_t const& op) {
  return keydown_oper_repeat_signal.connect(op);
}

void event_dispatch::keydown_clearagain_repeat() const {
  keydown_clearagain_repeat_signal();
}

connection event_dispatch::on_keydown_clearagain_repeat(
  keydown_clearagain_repeat_slot_t const& op) {
  return keydown_clearagain_repeat_signal.connect(op);
}

void event_dispatch::keydown_crsel_repeat() const {
  keydown_crsel_repeat_signal();
}

connection event_dispatch::on_keydown_crsel_repeat(
  keydown_crsel_repeat_slot_t const& op) {
  return keydown_crsel_repeat_signal.connect(op);
}

void event_dispatch::keydown_exsel_repeat() const {
  keydown_exsel_repeat_signal();
}

connection event_dispatch::on_keydown_exsel_repeat(
  keydown_exsel_repeat_slot_t const& op) {
  return keydown_exsel_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_00_repeat() const {
  keydown_kp_00_repeat_signal();
}

connection event_dispatch::on_keydown_kp_00_repeat(
  keydown_kp_00_repeat_slot_t const& op) {
  return keydown_kp_00_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_000_repeat() const {
  keydown_kp_000_repeat_signal();
}

connection event_dispatch::on_keydown_kp_000_repeat(
  keydown_kp_000_repeat_slot_t const& op) {
  return keydown_kp_000_repeat_signal.connect(op);
}

void event_dispatch::keydown_thousandsseparator_repeat() const {
  keydown_thousandsseparator_repeat_signal();
}

connection event_dispatch::on_keydown_thousandsseparator_repeat(
  keydown_thousandsseparator_repeat_slot_t const& op) {
  return keydown_thousandsseparator_repeat_signal.connect(op);
}

void event_dispatch::keydown_decimalseparator_repeat() const {
  keydown_decimalseparator_repeat_signal();
}

connection event_dispatch::on_keydown_decimalseparator_repeat(
  keydown_decimalseparator_repeat_slot_t const& op) {
  return keydown_decimalseparator_repeat_signal.connect(op);
}

void event_dispatch::keydown_currencyunit_repeat() const {
  keydown_currencyunit_repeat_signal();
}

connection event_dispatch::on_keydown_currencyunit_repeat(
  keydown_currencyunit_repeat_slot_t const& op) {
  return keydown_currencyunit_repeat_signal.connect(op);
}

void event_dispatch::keydown_currencysubunit_repeat() const {
  keydown_currencysubunit_repeat_signal();
}

connection event_dispatch::on_keydown_currencysubunit_repeat(
  keydown_currencysubunit_repeat_slot_t const& op) {
  return keydown_currencysubunit_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_leftparen_repeat() const {
  keydown_kp_leftparen_repeat_signal();
}

connection event_dispatch::on_keydown_kp_leftparen_repeat(
  keydown_kp_leftparen_repeat_slot_t const& op) {
  return keydown_kp_leftparen_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_rightparen_repeat() const {
  keydown_kp_rightparen_repeat_signal();
}

connection event_dispatch::on_keydown_kp_rightparen_repeat(
  keydown_kp_rightparen_repeat_slot_t const& op) {
  return keydown_kp_rightparen_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_leftbrace_repeat() const {
  keydown_kp_leftbrace_repeat_signal();
}

connection event_dispatch::on_keydown_kp_leftbrace_repeat(
  keydown_kp_leftbrace_repeat_slot_t const& op) {
  return keydown_kp_leftbrace_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_rightbrace_repeat() const {
  keydown_kp_rightbrace_repeat_signal();
}

connection event_dispatch::on_keydown_kp_rightbrace_repeat(
  keydown_kp_rightbrace_repeat_slot_t const& op) {
  return keydown_kp_rightbrace_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_tab_repeat() const {
  keydown_kp_tab_repeat_signal();
}

connection event_dispatch::on_keydown_kp_tab_repeat(
  keydown_kp_tab_repeat_slot_t const& op) {
  return keydown_kp_tab_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_backspace_repeat() const {
  keydown_kp_backspace_repeat_signal();
}

connection event_dispatch::on_keydown_kp_backspace_repeat(
  keydown_kp_backspace_repeat_slot_t const& op) {
  return keydown_kp_backspace_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_a_repeat() const {
  keydown_kp_a_repeat_signal();
}

connection event_dispatch::on_keydown_kp_a_repeat(
  keydown_kp_a_repeat_slot_t const& op) {
  return keydown_kp_a_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_b_repeat() const {
  keydown_kp_b_repeat_signal();
}

connection event_dispatch::on_keydown_kp_b_repeat(
  keydown_kp_b_repeat_slot_t const& op) {
  return keydown_kp_b_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_c_repeat() const {
  keydown_kp_c_repeat_signal();
}

connection event_dispatch::on_keydown_kp_c_repeat(
  keydown_kp_c_repeat_slot_t const& op) {
  return keydown_kp_c_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_d_repeat() const {
  keydown_kp_d_repeat_signal();
}

connection event_dispatch::on_keydown_kp_d_repeat(
  keydown_kp_d_repeat_slot_t const& op) {
  return keydown_kp_d_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_e_repeat() const {
  keydown_kp_e_repeat_signal();
}

connection event_dispatch::on_keydown_kp_e_repeat(
  keydown_kp_e_repeat_slot_t const& op) {
  return keydown_kp_e_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_f_repeat() const {
  keydown_kp_f_repeat_signal();
}

connection event_dispatch::on_keydown_kp_f_repeat(
  keydown_kp_f_repeat_slot_t const& op) {
  return keydown_kp_f_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_xor_repeat() const {
  keydown_kp_xor_repeat_signal();
}

connection event_dispatch::on_keydown_kp_xor_repeat(
  keydown_kp_xor_repeat_slot_t const& op) {
  return keydown_kp_xor_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_power_repeat() const {
  keydown_kp_power_repeat_signal();
}

connection event_dispatch::on_keydown_kp_power_repeat(
  keydown_kp_power_repeat_slot_t const& op) {
  return keydown_kp_power_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_percent_repeat() const {
  keydown_kp_percent_repeat_signal();
}

connection event_dispatch::on_keydown_kp_percent_repeat(
  keydown_kp_percent_repeat_slot_t const& op) {
  return keydown_kp_percent_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_less_repeat() const {
  keydown_kp_less_repeat_signal();
}

connection event_dispatch::on_keydown_kp_less_repeat(
  keydown_kp_less_repeat_slot_t const& op) {
  return keydown_kp_less_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_greater_repeat() const {
  keydown_kp_greater_repeat_signal();
}

connection event_dispatch::on_keydown_kp_greater_repeat(
  keydown_kp_greater_repeat_slot_t const& op) {
  return keydown_kp_greater_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_ampersand_repeat() const {
  keydown_kp_ampersand_repeat_signal();
}

connection event_dispatch::on_keydown_kp_ampersand_repeat(
  keydown_kp_ampersand_repeat_slot_t const& op) {
  return keydown_kp_ampersand_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_dblampersand_repeat() const {
  keydown_kp_dblampersand_repeat_signal();
}

connection event_dispatch::on_keydown_kp_dblampersand_repeat(
  keydown_kp_dblampersand_repeat_slot_t const& op) {
  return keydown_kp_dblampersand_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_verticalbar_repeat() const {
  keydown_kp_verticalbar_repeat_signal();
}

connection event_dispatch::on_keydown_kp_verticalbar_repeat(
  keydown_kp_verticalbar_repeat_slot_t const& op) {
  return keydown_kp_verticalbar_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_dblverticalbar_repeat() const {
  keydown_kp_dblverticalbar_repeat_signal();
}

connection event_dispatch::on_keydown_kp_dblverticalbar_repeat(
  keydown_kp_dblverticalbar_repeat_slot_t const& op) {
  return keydown_kp_dblverticalbar_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_colon_repeat() const {
  keydown_kp_colon_repeat_signal();
}

connection event_dispatch::on_keydown_kp_colon_repeat(
  keydown_kp_colon_repeat_slot_t const& op) {
  return keydown_kp_colon_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_hash_repeat() const {
  keydown_kp_hash_repeat_signal();
}

connection event_dispatch::on_keydown_kp_hash_repeat(
  keydown_kp_hash_repeat_slot_t const& op) {
  return keydown_kp_hash_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_space_repeat() const {
  keydown_kp_space_repeat_signal();
}

connection event_dispatch::on_keydown_kp_space_repeat(
  keydown_kp_space_repeat_slot_t const& op) {
  return keydown_kp_space_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_at_repeat() const {
  keydown_kp_at_repeat_signal();
}

connection event_dispatch::on_keydown_kp_at_repeat(
  keydown_kp_at_repeat_slot_t const& op) {
  return keydown_kp_at_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_exclam_repeat() const {
  keydown_kp_exclam_repeat_signal();
}

connection event_dispatch::on_keydown_kp_exclam_repeat(
  keydown_kp_exclam_repeat_slot_t const& op) {
  return keydown_kp_exclam_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memstore_repeat() const {
  keydown_kp_memstore_repeat_signal();
}

connection event_dispatch::on_keydown_kp_memstore_repeat(
  keydown_kp_memstore_repeat_slot_t const& op) {
  return keydown_kp_memstore_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memrecall_repeat() const {
  keydown_kp_memrecall_repeat_signal();
}

connection event_dispatch::on_keydown_kp_memrecall_repeat(
  keydown_kp_memrecall_repeat_slot_t const& op) {
  return keydown_kp_memrecall_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memclear_repeat() const {
  keydown_kp_memclear_repeat_signal();
}

connection event_dispatch::on_keydown_kp_memclear_repeat(
  keydown_kp_memclear_repeat_slot_t const& op) {
  return keydown_kp_memclear_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memadd_repeat() const {
  keydown_kp_memadd_repeat_signal();
}

connection event_dispatch::on_keydown_kp_memadd_repeat(
  keydown_kp_memadd_repeat_slot_t const& op) {
  return keydown_kp_memadd_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memsubtract_repeat() const {
  keydown_kp_memsubtract_repeat_signal();
}

connection event_dispatch::on_keydown_kp_memsubtract_repeat(
  keydown_kp_memsubtract_repeat_slot_t const& op) {
  return keydown_kp_memsubtract_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memmultiply_repeat() const {
  keydown_kp_memmultiply_repeat_signal();
}

connection event_dispatch::on_keydown_kp_memmultiply_repeat(
  keydown_kp_memmultiply_repeat_slot_t const& op) {
  return keydown_kp_memmultiply_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memdivide_repeat() const {
  keydown_kp_memdivide_repeat_signal();
}

connection event_dispatch::on_keydown_kp_memdivide_repeat(
  keydown_kp_memdivide_repeat_slot_t const& op) {
  return keydown_kp_memdivide_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_plusminus_repeat() const {
  keydown_kp_plusminus_repeat_signal();
}

connection event_dispatch::on_keydown_kp_plusminus_repeat(
  keydown_kp_plusminus_repeat_slot_t const& op) {
  return keydown_kp_plusminus_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_clear_repeat() const {
  keydown_kp_clear_repeat_signal();
}

connection event_dispatch::on_keydown_kp_clear_repeat(
  keydown_kp_clear_repeat_slot_t const& op) {
  return keydown_kp_clear_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_clearentry_repeat() const {
  keydown_kp_clearentry_repeat_signal();
}

connection event_dispatch::on_keydown_kp_clearentry_repeat(
  keydown_kp_clearentry_repeat_slot_t const& op) {
  return keydown_kp_clearentry_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_binary_repeat() const {
  keydown_kp_binary_repeat_signal();
}

connection event_dispatch::on_keydown_kp_binary_repeat(
  keydown_kp_binary_repeat_slot_t const& op) {
  return keydown_kp_binary_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_octal_repeat() const {
  keydown_kp_octal_repeat_signal();
}

connection event_dispatch::on_keydown_kp_octal_repeat(
  keydown_kp_octal_repeat_slot_t const& op) {
  return keydown_kp_octal_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_decimal_repeat() const {
  keydown_kp_decimal_repeat_signal();
}

connection event_dispatch::on_keydown_kp_decimal_repeat(
  keydown_kp_decimal_repeat_slot_t const& op) {
  return keydown_kp_decimal_repeat_signal.connect(op);
}

void event_dispatch::keydown_kp_hexadecimal_repeat() const {
  keydown_kp_hexadecimal_repeat_signal();
}

connection event_dispatch::on_keydown_kp_hexadecimal_repeat(
  keydown_kp_hexadecimal_repeat_slot_t const& op) {
  return keydown_kp_hexadecimal_repeat_signal.connect(op);
}

void event_dispatch::keydown_lctrl_repeat() const {
  keydown_lctrl_repeat_signal();
}

connection event_dispatch::on_keydown_lctrl_repeat(
  keydown_lctrl_repeat_slot_t const& op) {
  return keydown_lctrl_repeat_signal.connect(op);
}

void event_dispatch::keydown_lshift_repeat() const {
  keydown_lshift_repeat_signal();
}

connection event_dispatch::on_keydown_lshift_repeat(
  keydown_lshift_repeat_slot_t const& op) {
  return keydown_lshift_repeat_signal.connect(op);
}

void event_dispatch::keydown_lalt_repeat() const {
  keydown_lalt_repeat_signal();
}

connection event_dispatch::on_keydown_lalt_repeat(
  keydown_lalt_repeat_slot_t const& op) {
  return keydown_lalt_repeat_signal.connect(op);
}

void event_dispatch::keydown_lgui_repeat() const {
  keydown_lgui_repeat_signal();
}

connection event_dispatch::on_keydown_lgui_repeat(
  keydown_lgui_repeat_slot_t const& op) {
  return keydown_lgui_repeat_signal.connect(op);
}

void event_dispatch::keydown_rctrl_repeat() const {
  keydown_rctrl_repeat_signal();
}

connection event_dispatch::on_keydown_rctrl_repeat(
  keydown_rctrl_repeat_slot_t const& op) {
  return keydown_rctrl_repeat_signal.connect(op);
}

void event_dispatch::keydown_rshift_repeat() const {
  keydown_rshift_repeat_signal();
}

connection event_dispatch::on_keydown_rshift_repeat(
  keydown_rshift_repeat_slot_t const& op) {
  return keydown_rshift_repeat_signal.connect(op);
}

void event_dispatch::keydown_ralt_repeat() const {
  keydown_ralt_repeat_signal();
}

connection event_dispatch::on_keydown_ralt_repeat(
  keydown_ralt_repeat_slot_t const& op) {
  return keydown_ralt_repeat_signal.connect(op);
}

void event_dispatch::keydown_rgui_repeat() const {
  keydown_rgui_repeat_signal();
}

connection event_dispatch::on_keydown_rgui_repeat(
  keydown_rgui_repeat_slot_t const& op) {
  return keydown_rgui_repeat_signal.connect(op);
}

void event_dispatch::keydown_mode_repeat() const {
  keydown_mode_repeat_signal();
}

connection event_dispatch::on_keydown_mode_repeat(
  keydown_mode_repeat_slot_t const& op) {
  return keydown_mode_repeat_signal.connect(op);
}

void event_dispatch::keydown_audionext_repeat() const {
  keydown_audionext_repeat_signal();
}

connection event_dispatch::on_keydown_audionext_repeat(
  keydown_audionext_repeat_slot_t const& op) {
  return keydown_audionext_repeat_signal.connect(op);
}

void event_dispatch::keydown_audioprev_repeat() const {
  keydown_audioprev_repeat_signal();
}

connection event_dispatch::on_keydown_audioprev_repeat(
  keydown_audioprev_repeat_slot_t const& op) {
  return keydown_audioprev_repeat_signal.connect(op);
}

void event_dispatch::keydown_audiostop_repeat() const {
  keydown_audiostop_repeat_signal();
}

connection event_dispatch::on_keydown_audiostop_repeat(
  keydown_audiostop_repeat_slot_t const& op) {
  return keydown_audiostop_repeat_signal.connect(op);
}

void event_dispatch::keydown_audioplay_repeat() const {
  keydown_audioplay_repeat_signal();
}

connection event_dispatch::on_keydown_audioplay_repeat(
  keydown_audioplay_repeat_slot_t const& op) {
  return keydown_audioplay_repeat_signal.connect(op);
}

void event_dispatch::keydown_audiomute_repeat() const {
  keydown_audiomute_repeat_signal();
}

connection event_dispatch::on_keydown_audiomute_repeat(
  keydown_audiomute_repeat_slot_t const& op) {
  return keydown_audiomute_repeat_signal.connect(op);
}

void event_dispatch::keydown_mediaselect_repeat() const {
  keydown_mediaselect_repeat_signal();
}

connection event_dispatch::on_keydown_mediaselect_repeat(
  keydown_mediaselect_repeat_slot_t const& op) {
  return keydown_mediaselect_repeat_signal.connect(op);
}

void event_dispatch::keydown_www_repeat() const {
  keydown_www_repeat_signal();
}

connection event_dispatch::on_keydown_www_repeat(
  keydown_www_repeat_slot_t const& op) {
  return keydown_www_repeat_signal.connect(op);
}

void event_dispatch::keydown_mail_repeat() const {
  keydown_mail_repeat_signal();
}

connection event_dispatch::on_keydown_mail_repeat(
  keydown_mail_repeat_slot_t const& op) {
  return keydown_mail_repeat_signal.connect(op);
}

void event_dispatch::keydown_calculator_repeat() const {
  keydown_calculator_repeat_signal();
}

connection event_dispatch::on_keydown_calculator_repeat(
  keydown_calculator_repeat_slot_t const& op) {
  return keydown_calculator_repeat_signal.connect(op);
}

void event_dispatch::keydown_computer_repeat() const {
  keydown_computer_repeat_signal();
}

connection event_dispatch::on_keydown_computer_repeat(
  keydown_computer_repeat_slot_t const& op) {
  return keydown_computer_repeat_signal.connect(op);
}

void event_dispatch::keydown_ac_search_repeat() const {
  keydown_ac_search_repeat_signal();
}

connection event_dispatch::on_keydown_ac_search_repeat(
  keydown_ac_search_repeat_slot_t const& op) {
  return keydown_ac_search_repeat_signal.connect(op);
}

void event_dispatch::keydown_ac_home_repeat() const {
  keydown_ac_home_repeat_signal();
}

connection event_dispatch::on_keydown_ac_home_repeat(
  keydown_ac_home_repeat_slot_t const& op) {
  return keydown_ac_home_repeat_signal.connect(op);
}

void event_dispatch::keydown_ac_back_repeat() const {
  keydown_ac_back_repeat_signal();
}

connection event_dispatch::on_keydown_ac_back_repeat(
  keydown_ac_back_repeat_slot_t const& op) {
  return keydown_ac_back_repeat_signal.connect(op);
}

void event_dispatch::keydown_ac_forward_repeat() const {
  keydown_ac_forward_repeat_signal();
}

connection event_dispatch::on_keydown_ac_forward_repeat(
  keydown_ac_forward_repeat_slot_t const& op) {
  return keydown_ac_forward_repeat_signal.connect(op);
}

void event_dispatch::keydown_ac_stop_repeat() const {
  keydown_ac_stop_repeat_signal();
}

connection event_dispatch::on_keydown_ac_stop_repeat(
  keydown_ac_stop_repeat_slot_t const& op) {
  return keydown_ac_stop_repeat_signal.connect(op);
}

void event_dispatch::keydown_ac_refresh_repeat() const {
  keydown_ac_refresh_repeat_signal();
}

connection event_dispatch::on_keydown_ac_refresh_repeat(
  keydown_ac_refresh_repeat_slot_t const& op) {
  return keydown_ac_refresh_repeat_signal.connect(op);
}

void event_dispatch::keydown_ac_bookmarks_repeat() const {
  keydown_ac_bookmarks_repeat_signal();
}

connection event_dispatch::on_keydown_ac_bookmarks_repeat(
  keydown_ac_bookmarks_repeat_slot_t const& op) {
  return keydown_ac_bookmarks_repeat_signal.connect(op);
}

void event_dispatch::keydown_brightnessdown_repeat() const {
  keydown_brightnessdown_repeat_signal();
}

connection event_dispatch::on_keydown_brightnessdown_repeat(
  keydown_brightnessdown_repeat_slot_t const& op) {
  return keydown_brightnessdown_repeat_signal.connect(op);
}

void event_dispatch::keydown_brightnessup_repeat() const {
  keydown_brightnessup_repeat_signal();
}

connection event_dispatch::on_keydown_brightnessup_repeat(
  keydown_brightnessup_repeat_slot_t const& op) {
  return keydown_brightnessup_repeat_signal.connect(op);
}

void event_dispatch::keydown_displayswitch_repeat() const {
  keydown_displayswitch_repeat_signal();
}

connection event_dispatch::on_keydown_displayswitch_repeat(
  keydown_displayswitch_repeat_slot_t const& op) {
  return keydown_displayswitch_repeat_signal.connect(op);
}

void event_dispatch::keydown_kbdillumtoggle_repeat() const {
  keydown_kbdillumtoggle_repeat_signal();
}

connection event_dispatch::on_keydown_kbdillumtoggle_repeat(
  keydown_kbdillumtoggle_repeat_slot_t const& op) {
  return keydown_kbdillumtoggle_repeat_signal.connect(op);
}

void event_dispatch::keydown_kbdillumdown_repeat() const {
  keydown_kbdillumdown_repeat_signal();
}

connection event_dispatch::on_keydown_kbdillumdown_repeat(
  keydown_kbdillumdown_repeat_slot_t const& op) {
  return keydown_kbdillumdown_repeat_signal.connect(op);
}

void event_dispatch::keydown_kbdillumup_repeat() const {
  keydown_kbdillumup_repeat_signal();
}

connection event_dispatch::on_keydown_kbdillumup_repeat(
  keydown_kbdillumup_repeat_slot_t const& op) {
  return keydown_kbdillumup_repeat_signal.connect(op);
}

void event_dispatch::keydown_eject_repeat() const {
  keydown_eject_repeat_signal();
}

connection event_dispatch::on_keydown_eject_repeat(
  keydown_eject_repeat_slot_t const& op) {
  return keydown_eject_repeat_signal.connect(op);
}

void event_dispatch::keydown_sleep_repeat() const {
  keydown_sleep_repeat_signal();
}

connection event_dispatch::on_keydown_sleep_repeat(
  keydown_sleep_repeat_slot_t const& op) {
  return keydown_sleep_repeat_signal.connect(op);
}

void event_dispatch::keydown_unknown_nonrepeat() const {
  keydown_unknown_nonrepeat_signal();
}

connection event_dispatch::on_keydown_unknown_nonrepeat(
  keydown_unknown_nonrepeat_slot_t const& op) {
  return keydown_unknown_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_backspace_nonrepeat() const {
  keydown_backspace_nonrepeat_signal();
}

connection event_dispatch::on_keydown_backspace_nonrepeat(
  keydown_backspace_nonrepeat_slot_t const& op) {
  return keydown_backspace_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_tab_nonrepeat() const {
  keydown_tab_nonrepeat_signal();
}

connection event_dispatch::on_keydown_tab_nonrepeat(
  keydown_tab_nonrepeat_slot_t const& op) {
  return keydown_tab_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_return_nonrepeat() const {
  keydown_return_nonrepeat_signal();
}

connection event_dispatch::on_keydown_return_nonrepeat(
  keydown_return_nonrepeat_slot_t const& op) {
  return keydown_return_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_escape_nonrepeat() const {
  keydown_escape_nonrepeat_signal();
}

connection event_dispatch::on_keydown_escape_nonrepeat(
  keydown_escape_nonrepeat_slot_t const& op) {
  return keydown_escape_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_space_nonrepeat() const {
  keydown_space_nonrepeat_signal();
}

connection event_dispatch::on_keydown_space_nonrepeat(
  keydown_space_nonrepeat_slot_t const& op) {
  return keydown_space_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_exclaim_nonrepeat() const {
  keydown_exclaim_nonrepeat_signal();
}

connection event_dispatch::on_keydown_exclaim_nonrepeat(
  keydown_exclaim_nonrepeat_slot_t const& op) {
  return keydown_exclaim_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_quotedbl_nonrepeat() const {
  keydown_quotedbl_nonrepeat_signal();
}

connection event_dispatch::on_keydown_quotedbl_nonrepeat(
  keydown_quotedbl_nonrepeat_slot_t const& op) {
  return keydown_quotedbl_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_hash_nonrepeat() const {
  keydown_hash_nonrepeat_signal();
}

connection event_dispatch::on_keydown_hash_nonrepeat(
  keydown_hash_nonrepeat_slot_t const& op) {
  return keydown_hash_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_dollar_nonrepeat() const {
  keydown_dollar_nonrepeat_signal();
}

connection event_dispatch::on_keydown_dollar_nonrepeat(
  keydown_dollar_nonrepeat_slot_t const& op) {
  return keydown_dollar_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_percent_nonrepeat() const {
  keydown_percent_nonrepeat_signal();
}

connection event_dispatch::on_keydown_percent_nonrepeat(
  keydown_percent_nonrepeat_slot_t const& op) {
  return keydown_percent_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_ampersand_nonrepeat() const {
  keydown_ampersand_nonrepeat_signal();
}

connection event_dispatch::on_keydown_ampersand_nonrepeat(
  keydown_ampersand_nonrepeat_slot_t const& op) {
  return keydown_ampersand_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_quote_nonrepeat() const {
  keydown_quote_nonrepeat_signal();
}

connection event_dispatch::on_keydown_quote_nonrepeat(
  keydown_quote_nonrepeat_slot_t const& op) {
  return keydown_quote_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_leftparen_nonrepeat() const {
  keydown_leftparen_nonrepeat_signal();
}

connection event_dispatch::on_keydown_leftparen_nonrepeat(
  keydown_leftparen_nonrepeat_slot_t const& op) {
  return keydown_leftparen_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_rightparen_nonrepeat() const {
  keydown_rightparen_nonrepeat_signal();
}

connection event_dispatch::on_keydown_rightparen_nonrepeat(
  keydown_rightparen_nonrepeat_slot_t const& op) {
  return keydown_rightparen_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_asterisk_nonrepeat() const {
  keydown_asterisk_nonrepeat_signal();
}

connection event_dispatch::on_keydown_asterisk_nonrepeat(
  keydown_asterisk_nonrepeat_slot_t const& op) {
  return keydown_asterisk_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_plus_nonrepeat() const {
  keydown_plus_nonrepeat_signal();
}

connection event_dispatch::on_keydown_plus_nonrepeat(
  keydown_plus_nonrepeat_slot_t const& op) {
  return keydown_plus_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_comma_nonrepeat() const {
  keydown_comma_nonrepeat_signal();
}

connection event_dispatch::on_keydown_comma_nonrepeat(
  keydown_comma_nonrepeat_slot_t const& op) {
  return keydown_comma_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_minus_nonrepeat() const {
  keydown_minus_nonrepeat_signal();
}

connection event_dispatch::on_keydown_minus_nonrepeat(
  keydown_minus_nonrepeat_slot_t const& op) {
  return keydown_minus_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_period_nonrepeat() const {
  keydown_period_nonrepeat_signal();
}

connection event_dispatch::on_keydown_period_nonrepeat(
  keydown_period_nonrepeat_slot_t const& op) {
  return keydown_period_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_slash_nonrepeat() const {
  keydown_slash_nonrepeat_signal();
}

connection event_dispatch::on_keydown_slash_nonrepeat(
  keydown_slash_nonrepeat_slot_t const& op) {
  return keydown_slash_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_0_nonrepeat() const {
  keydown_0_nonrepeat_signal();
}

connection event_dispatch::on_keydown_0_nonrepeat(
  keydown_0_nonrepeat_slot_t const& op) {
  return keydown_0_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_1_nonrepeat() const {
  keydown_1_nonrepeat_signal();
}

connection event_dispatch::on_keydown_1_nonrepeat(
  keydown_1_nonrepeat_slot_t const& op) {
  return keydown_1_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_2_nonrepeat() const {
  keydown_2_nonrepeat_signal();
}

connection event_dispatch::on_keydown_2_nonrepeat(
  keydown_2_nonrepeat_slot_t const& op) {
  return keydown_2_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_3_nonrepeat() const {
  keydown_3_nonrepeat_signal();
}

connection event_dispatch::on_keydown_3_nonrepeat(
  keydown_3_nonrepeat_slot_t const& op) {
  return keydown_3_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_4_nonrepeat() const {
  keydown_4_nonrepeat_signal();
}

connection event_dispatch::on_keydown_4_nonrepeat(
  keydown_4_nonrepeat_slot_t const& op) {
  return keydown_4_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_5_nonrepeat() const {
  keydown_5_nonrepeat_signal();
}

connection event_dispatch::on_keydown_5_nonrepeat(
  keydown_5_nonrepeat_slot_t const& op) {
  return keydown_5_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_6_nonrepeat() const {
  keydown_6_nonrepeat_signal();
}

connection event_dispatch::on_keydown_6_nonrepeat(
  keydown_6_nonrepeat_slot_t const& op) {
  return keydown_6_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_7_nonrepeat() const {
  keydown_7_nonrepeat_signal();
}

connection event_dispatch::on_keydown_7_nonrepeat(
  keydown_7_nonrepeat_slot_t const& op) {
  return keydown_7_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_8_nonrepeat() const {
  keydown_8_nonrepeat_signal();
}

connection event_dispatch::on_keydown_8_nonrepeat(
  keydown_8_nonrepeat_slot_t const& op) {
  return keydown_8_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_9_nonrepeat() const {
  keydown_9_nonrepeat_signal();
}

connection event_dispatch::on_keydown_9_nonrepeat(
  keydown_9_nonrepeat_slot_t const& op) {
  return keydown_9_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_colon_nonrepeat() const {
  keydown_colon_nonrepeat_signal();
}

connection event_dispatch::on_keydown_colon_nonrepeat(
  keydown_colon_nonrepeat_slot_t const& op) {
  return keydown_colon_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_semicolon_nonrepeat() const {
  keydown_semicolon_nonrepeat_signal();
}

connection event_dispatch::on_keydown_semicolon_nonrepeat(
  keydown_semicolon_nonrepeat_slot_t const& op) {
  return keydown_semicolon_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_less_nonrepeat() const {
  keydown_less_nonrepeat_signal();
}

connection event_dispatch::on_keydown_less_nonrepeat(
  keydown_less_nonrepeat_slot_t const& op) {
  return keydown_less_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_equals_nonrepeat() const {
  keydown_equals_nonrepeat_signal();
}

connection event_dispatch::on_keydown_equals_nonrepeat(
  keydown_equals_nonrepeat_slot_t const& op) {
  return keydown_equals_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_greater_nonrepeat() const {
  keydown_greater_nonrepeat_signal();
}

connection event_dispatch::on_keydown_greater_nonrepeat(
  keydown_greater_nonrepeat_slot_t const& op) {
  return keydown_greater_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_question_nonrepeat() const {
  keydown_question_nonrepeat_signal();
}

connection event_dispatch::on_keydown_question_nonrepeat(
  keydown_question_nonrepeat_slot_t const& op) {
  return keydown_question_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_at_nonrepeat() const {
  keydown_at_nonrepeat_signal();
}

connection event_dispatch::on_keydown_at_nonrepeat(
  keydown_at_nonrepeat_slot_t const& op) {
  return keydown_at_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_leftbracket_nonrepeat() const {
  keydown_leftbracket_nonrepeat_signal();
}

connection event_dispatch::on_keydown_leftbracket_nonrepeat(
  keydown_leftbracket_nonrepeat_slot_t const& op) {
  return keydown_leftbracket_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_backslash_nonrepeat() const {
  keydown_backslash_nonrepeat_signal();
}

connection event_dispatch::on_keydown_backslash_nonrepeat(
  keydown_backslash_nonrepeat_slot_t const& op) {
  return keydown_backslash_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_rightbracket_nonrepeat() const {
  keydown_rightbracket_nonrepeat_signal();
}

connection event_dispatch::on_keydown_rightbracket_nonrepeat(
  keydown_rightbracket_nonrepeat_slot_t const& op) {
  return keydown_rightbracket_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_caret_nonrepeat() const {
  keydown_caret_nonrepeat_signal();
}

connection event_dispatch::on_keydown_caret_nonrepeat(
  keydown_caret_nonrepeat_slot_t const& op) {
  return keydown_caret_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_underscore_nonrepeat() const {
  keydown_underscore_nonrepeat_signal();
}

connection event_dispatch::on_keydown_underscore_nonrepeat(
  keydown_underscore_nonrepeat_slot_t const& op) {
  return keydown_underscore_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_backquote_nonrepeat() const {
  keydown_backquote_nonrepeat_signal();
}

connection event_dispatch::on_keydown_backquote_nonrepeat(
  keydown_backquote_nonrepeat_slot_t const& op) {
  return keydown_backquote_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_a_nonrepeat() const {
  keydown_a_nonrepeat_signal();
}

connection event_dispatch::on_keydown_a_nonrepeat(
  keydown_a_nonrepeat_slot_t const& op) {
  return keydown_a_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_b_nonrepeat() const {
  keydown_b_nonrepeat_signal();
}

connection event_dispatch::on_keydown_b_nonrepeat(
  keydown_b_nonrepeat_slot_t const& op) {
  return keydown_b_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_c_nonrepeat() const {
  keydown_c_nonrepeat_signal();
}

connection event_dispatch::on_keydown_c_nonrepeat(
  keydown_c_nonrepeat_slot_t const& op) {
  return keydown_c_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_d_nonrepeat() const {
  keydown_d_nonrepeat_signal();
}

connection event_dispatch::on_keydown_d_nonrepeat(
  keydown_d_nonrepeat_slot_t const& op) {
  return keydown_d_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_e_nonrepeat() const {
  keydown_e_nonrepeat_signal();
}

connection event_dispatch::on_keydown_e_nonrepeat(
  keydown_e_nonrepeat_slot_t const& op) {
  return keydown_e_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f_nonrepeat() const {
  keydown_f_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f_nonrepeat(
  keydown_f_nonrepeat_slot_t const& op) {
  return keydown_f_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_g_nonrepeat() const {
  keydown_g_nonrepeat_signal();
}

connection event_dispatch::on_keydown_g_nonrepeat(
  keydown_g_nonrepeat_slot_t const& op) {
  return keydown_g_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_h_nonrepeat() const {
  keydown_h_nonrepeat_signal();
}

connection event_dispatch::on_keydown_h_nonrepeat(
  keydown_h_nonrepeat_slot_t const& op) {
  return keydown_h_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_i_nonrepeat() const {
  keydown_i_nonrepeat_signal();
}

connection event_dispatch::on_keydown_i_nonrepeat(
  keydown_i_nonrepeat_slot_t const& op) {
  return keydown_i_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_j_nonrepeat() const {
  keydown_j_nonrepeat_signal();
}

connection event_dispatch::on_keydown_j_nonrepeat(
  keydown_j_nonrepeat_slot_t const& op) {
  return keydown_j_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_k_nonrepeat() const {
  keydown_k_nonrepeat_signal();
}

connection event_dispatch::on_keydown_k_nonrepeat(
  keydown_k_nonrepeat_slot_t const& op) {
  return keydown_k_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_l_nonrepeat() const {
  keydown_l_nonrepeat_signal();
}

connection event_dispatch::on_keydown_l_nonrepeat(
  keydown_l_nonrepeat_slot_t const& op) {
  return keydown_l_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_m_nonrepeat() const {
  keydown_m_nonrepeat_signal();
}

connection event_dispatch::on_keydown_m_nonrepeat(
  keydown_m_nonrepeat_slot_t const& op) {
  return keydown_m_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_n_nonrepeat() const {
  keydown_n_nonrepeat_signal();
}

connection event_dispatch::on_keydown_n_nonrepeat(
  keydown_n_nonrepeat_slot_t const& op) {
  return keydown_n_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_o_nonrepeat() const {
  keydown_o_nonrepeat_signal();
}

connection event_dispatch::on_keydown_o_nonrepeat(
  keydown_o_nonrepeat_slot_t const& op) {
  return keydown_o_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_p_nonrepeat() const {
  keydown_p_nonrepeat_signal();
}

connection event_dispatch::on_keydown_p_nonrepeat(
  keydown_p_nonrepeat_slot_t const& op) {
  return keydown_p_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_q_nonrepeat() const {
  keydown_q_nonrepeat_signal();
}

connection event_dispatch::on_keydown_q_nonrepeat(
  keydown_q_nonrepeat_slot_t const& op) {
  return keydown_q_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_r_nonrepeat() const {
  keydown_r_nonrepeat_signal();
}

connection event_dispatch::on_keydown_r_nonrepeat(
  keydown_r_nonrepeat_slot_t const& op) {
  return keydown_r_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_s_nonrepeat() const {
  keydown_s_nonrepeat_signal();
}

connection event_dispatch::on_keydown_s_nonrepeat(
  keydown_s_nonrepeat_slot_t const& op) {
  return keydown_s_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_t_nonrepeat() const {
  keydown_t_nonrepeat_signal();
}

connection event_dispatch::on_keydown_t_nonrepeat(
  keydown_t_nonrepeat_slot_t const& op) {
  return keydown_t_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_u_nonrepeat() const {
  keydown_u_nonrepeat_signal();
}

connection event_dispatch::on_keydown_u_nonrepeat(
  keydown_u_nonrepeat_slot_t const& op) {
  return keydown_u_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_v_nonrepeat() const {
  keydown_v_nonrepeat_signal();
}

connection event_dispatch::on_keydown_v_nonrepeat(
  keydown_v_nonrepeat_slot_t const& op) {
  return keydown_v_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_w_nonrepeat() const {
  keydown_w_nonrepeat_signal();
}

connection event_dispatch::on_keydown_w_nonrepeat(
  keydown_w_nonrepeat_slot_t const& op) {
  return keydown_w_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_x_nonrepeat() const {
  keydown_x_nonrepeat_signal();
}

connection event_dispatch::on_keydown_x_nonrepeat(
  keydown_x_nonrepeat_slot_t const& op) {
  return keydown_x_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_y_nonrepeat() const {
  keydown_y_nonrepeat_signal();
}

connection event_dispatch::on_keydown_y_nonrepeat(
  keydown_y_nonrepeat_slot_t const& op) {
  return keydown_y_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_z_nonrepeat() const {
  keydown_z_nonrepeat_signal();
}

connection event_dispatch::on_keydown_z_nonrepeat(
  keydown_z_nonrepeat_slot_t const& op) {
  return keydown_z_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_delete_nonrepeat() const {
  keydown_delete_nonrepeat_signal();
}

connection event_dispatch::on_keydown_delete_nonrepeat(
  keydown_delete_nonrepeat_slot_t const& op) {
  return keydown_delete_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_capslock_nonrepeat() const {
  keydown_capslock_nonrepeat_signal();
}

connection event_dispatch::on_keydown_capslock_nonrepeat(
  keydown_capslock_nonrepeat_slot_t const& op) {
  return keydown_capslock_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f1_nonrepeat() const {
  keydown_f1_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f1_nonrepeat(
  keydown_f1_nonrepeat_slot_t const& op) {
  return keydown_f1_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f2_nonrepeat() const {
  keydown_f2_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f2_nonrepeat(
  keydown_f2_nonrepeat_slot_t const& op) {
  return keydown_f2_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f3_nonrepeat() const {
  keydown_f3_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f3_nonrepeat(
  keydown_f3_nonrepeat_slot_t const& op) {
  return keydown_f3_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f4_nonrepeat() const {
  keydown_f4_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f4_nonrepeat(
  keydown_f4_nonrepeat_slot_t const& op) {
  return keydown_f4_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f5_nonrepeat() const {
  keydown_f5_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f5_nonrepeat(
  keydown_f5_nonrepeat_slot_t const& op) {
  return keydown_f5_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f6_nonrepeat() const {
  keydown_f6_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f6_nonrepeat(
  keydown_f6_nonrepeat_slot_t const& op) {
  return keydown_f6_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f7_nonrepeat() const {
  keydown_f7_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f7_nonrepeat(
  keydown_f7_nonrepeat_slot_t const& op) {
  return keydown_f7_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f8_nonrepeat() const {
  keydown_f8_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f8_nonrepeat(
  keydown_f8_nonrepeat_slot_t const& op) {
  return keydown_f8_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f9_nonrepeat() const {
  keydown_f9_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f9_nonrepeat(
  keydown_f9_nonrepeat_slot_t const& op) {
  return keydown_f9_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f10_nonrepeat() const {
  keydown_f10_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f10_nonrepeat(
  keydown_f10_nonrepeat_slot_t const& op) {
  return keydown_f10_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f11_nonrepeat() const {
  keydown_f11_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f11_nonrepeat(
  keydown_f11_nonrepeat_slot_t const& op) {
  return keydown_f11_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f12_nonrepeat() const {
  keydown_f12_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f12_nonrepeat(
  keydown_f12_nonrepeat_slot_t const& op) {
  return keydown_f12_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_printscreen_nonrepeat() const {
  keydown_printscreen_nonrepeat_signal();
}

connection event_dispatch::on_keydown_printscreen_nonrepeat(
  keydown_printscreen_nonrepeat_slot_t const& op) {
  return keydown_printscreen_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_scrolllock_nonrepeat() const {
  keydown_scrolllock_nonrepeat_signal();
}

connection event_dispatch::on_keydown_scrolllock_nonrepeat(
  keydown_scrolllock_nonrepeat_slot_t const& op) {
  return keydown_scrolllock_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_pause_nonrepeat() const {
  keydown_pause_nonrepeat_signal();
}

connection event_dispatch::on_keydown_pause_nonrepeat(
  keydown_pause_nonrepeat_slot_t const& op) {
  return keydown_pause_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_insert_nonrepeat() const {
  keydown_insert_nonrepeat_signal();
}

connection event_dispatch::on_keydown_insert_nonrepeat(
  keydown_insert_nonrepeat_slot_t const& op) {
  return keydown_insert_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_home_nonrepeat() const {
  keydown_home_nonrepeat_signal();
}

connection event_dispatch::on_keydown_home_nonrepeat(
  keydown_home_nonrepeat_slot_t const& op) {
  return keydown_home_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_pageup_nonrepeat() const {
  keydown_pageup_nonrepeat_signal();
}

connection event_dispatch::on_keydown_pageup_nonrepeat(
  keydown_pageup_nonrepeat_slot_t const& op) {
  return keydown_pageup_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_end_nonrepeat() const {
  keydown_end_nonrepeat_signal();
}

connection event_dispatch::on_keydown_end_nonrepeat(
  keydown_end_nonrepeat_slot_t const& op) {
  return keydown_end_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_pagedown_nonrepeat() const {
  keydown_pagedown_nonrepeat_signal();
}

connection event_dispatch::on_keydown_pagedown_nonrepeat(
  keydown_pagedown_nonrepeat_slot_t const& op) {
  return keydown_pagedown_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_right_nonrepeat() const {
  keydown_right_nonrepeat_signal();
}

connection event_dispatch::on_keydown_right_nonrepeat(
  keydown_right_nonrepeat_slot_t const& op) {
  return keydown_right_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_left_nonrepeat() const {
  keydown_left_nonrepeat_signal();
}

connection event_dispatch::on_keydown_left_nonrepeat(
  keydown_left_nonrepeat_slot_t const& op) {
  return keydown_left_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_down_nonrepeat() const {
  keydown_down_nonrepeat_signal();
}

connection event_dispatch::on_keydown_down_nonrepeat(
  keydown_down_nonrepeat_slot_t const& op) {
  return keydown_down_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_up_nonrepeat() const {
  keydown_up_nonrepeat_signal();
}

connection event_dispatch::on_keydown_up_nonrepeat(
  keydown_up_nonrepeat_slot_t const& op) {
  return keydown_up_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_numlockclear_nonrepeat() const {
  keydown_numlockclear_nonrepeat_signal();
}

connection event_dispatch::on_keydown_numlockclear_nonrepeat(
  keydown_numlockclear_nonrepeat_slot_t const& op) {
  return keydown_numlockclear_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_divide_nonrepeat() const {
  keydown_kp_divide_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_divide_nonrepeat(
  keydown_kp_divide_nonrepeat_slot_t const& op) {
  return keydown_kp_divide_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_multiply_nonrepeat() const {
  keydown_kp_multiply_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_multiply_nonrepeat(
  keydown_kp_multiply_nonrepeat_slot_t const& op) {
  return keydown_kp_multiply_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_minus_nonrepeat() const {
  keydown_kp_minus_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_minus_nonrepeat(
  keydown_kp_minus_nonrepeat_slot_t const& op) {
  return keydown_kp_minus_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_plus_nonrepeat() const {
  keydown_kp_plus_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_plus_nonrepeat(
  keydown_kp_plus_nonrepeat_slot_t const& op) {
  return keydown_kp_plus_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_enter_nonrepeat() const {
  keydown_kp_enter_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_enter_nonrepeat(
  keydown_kp_enter_nonrepeat_slot_t const& op) {
  return keydown_kp_enter_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_1_nonrepeat() const {
  keydown_kp_1_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_1_nonrepeat(
  keydown_kp_1_nonrepeat_slot_t const& op) {
  return keydown_kp_1_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_2_nonrepeat() const {
  keydown_kp_2_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_2_nonrepeat(
  keydown_kp_2_nonrepeat_slot_t const& op) {
  return keydown_kp_2_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_3_nonrepeat() const {
  keydown_kp_3_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_3_nonrepeat(
  keydown_kp_3_nonrepeat_slot_t const& op) {
  return keydown_kp_3_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_4_nonrepeat() const {
  keydown_kp_4_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_4_nonrepeat(
  keydown_kp_4_nonrepeat_slot_t const& op) {
  return keydown_kp_4_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_5_nonrepeat() const {
  keydown_kp_5_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_5_nonrepeat(
  keydown_kp_5_nonrepeat_slot_t const& op) {
  return keydown_kp_5_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_6_nonrepeat() const {
  keydown_kp_6_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_6_nonrepeat(
  keydown_kp_6_nonrepeat_slot_t const& op) {
  return keydown_kp_6_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_7_nonrepeat() const {
  keydown_kp_7_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_7_nonrepeat(
  keydown_kp_7_nonrepeat_slot_t const& op) {
  return keydown_kp_7_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_8_nonrepeat() const {
  keydown_kp_8_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_8_nonrepeat(
  keydown_kp_8_nonrepeat_slot_t const& op) {
  return keydown_kp_8_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_9_nonrepeat() const {
  keydown_kp_9_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_9_nonrepeat(
  keydown_kp_9_nonrepeat_slot_t const& op) {
  return keydown_kp_9_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_0_nonrepeat() const {
  keydown_kp_0_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_0_nonrepeat(
  keydown_kp_0_nonrepeat_slot_t const& op) {
  return keydown_kp_0_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_period_nonrepeat() const {
  keydown_kp_period_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_period_nonrepeat(
  keydown_kp_period_nonrepeat_slot_t const& op) {
  return keydown_kp_period_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_application_nonrepeat() const {
  keydown_application_nonrepeat_signal();
}

connection event_dispatch::on_keydown_application_nonrepeat(
  keydown_application_nonrepeat_slot_t const& op) {
  return keydown_application_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_power_nonrepeat() const {
  keydown_power_nonrepeat_signal();
}

connection event_dispatch::on_keydown_power_nonrepeat(
  keydown_power_nonrepeat_slot_t const& op) {
  return keydown_power_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_equals_nonrepeat() const {
  keydown_kp_equals_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_equals_nonrepeat(
  keydown_kp_equals_nonrepeat_slot_t const& op) {
  return keydown_kp_equals_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f13_nonrepeat() const {
  keydown_f13_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f13_nonrepeat(
  keydown_f13_nonrepeat_slot_t const& op) {
  return keydown_f13_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f14_nonrepeat() const {
  keydown_f14_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f14_nonrepeat(
  keydown_f14_nonrepeat_slot_t const& op) {
  return keydown_f14_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f15_nonrepeat() const {
  keydown_f15_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f15_nonrepeat(
  keydown_f15_nonrepeat_slot_t const& op) {
  return keydown_f15_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f16_nonrepeat() const {
  keydown_f16_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f16_nonrepeat(
  keydown_f16_nonrepeat_slot_t const& op) {
  return keydown_f16_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f17_nonrepeat() const {
  keydown_f17_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f17_nonrepeat(
  keydown_f17_nonrepeat_slot_t const& op) {
  return keydown_f17_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f18_nonrepeat() const {
  keydown_f18_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f18_nonrepeat(
  keydown_f18_nonrepeat_slot_t const& op) {
  return keydown_f18_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f19_nonrepeat() const {
  keydown_f19_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f19_nonrepeat(
  keydown_f19_nonrepeat_slot_t const& op) {
  return keydown_f19_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f20_nonrepeat() const {
  keydown_f20_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f20_nonrepeat(
  keydown_f20_nonrepeat_slot_t const& op) {
  return keydown_f20_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f21_nonrepeat() const {
  keydown_f21_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f21_nonrepeat(
  keydown_f21_nonrepeat_slot_t const& op) {
  return keydown_f21_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f22_nonrepeat() const {
  keydown_f22_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f22_nonrepeat(
  keydown_f22_nonrepeat_slot_t const& op) {
  return keydown_f22_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f23_nonrepeat() const {
  keydown_f23_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f23_nonrepeat(
  keydown_f23_nonrepeat_slot_t const& op) {
  return keydown_f23_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_f24_nonrepeat() const {
  keydown_f24_nonrepeat_signal();
}

connection event_dispatch::on_keydown_f24_nonrepeat(
  keydown_f24_nonrepeat_slot_t const& op) {
  return keydown_f24_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_execute_nonrepeat() const {
  keydown_execute_nonrepeat_signal();
}

connection event_dispatch::on_keydown_execute_nonrepeat(
  keydown_execute_nonrepeat_slot_t const& op) {
  return keydown_execute_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_help_nonrepeat() const {
  keydown_help_nonrepeat_signal();
}

connection event_dispatch::on_keydown_help_nonrepeat(
  keydown_help_nonrepeat_slot_t const& op) {
  return keydown_help_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_menu_nonrepeat() const {
  keydown_menu_nonrepeat_signal();
}

connection event_dispatch::on_keydown_menu_nonrepeat(
  keydown_menu_nonrepeat_slot_t const& op) {
  return keydown_menu_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_select_nonrepeat() const {
  keydown_select_nonrepeat_signal();
}

connection event_dispatch::on_keydown_select_nonrepeat(
  keydown_select_nonrepeat_slot_t const& op) {
  return keydown_select_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_stop_nonrepeat() const {
  keydown_stop_nonrepeat_signal();
}

connection event_dispatch::on_keydown_stop_nonrepeat(
  keydown_stop_nonrepeat_slot_t const& op) {
  return keydown_stop_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_again_nonrepeat() const {
  keydown_again_nonrepeat_signal();
}

connection event_dispatch::on_keydown_again_nonrepeat(
  keydown_again_nonrepeat_slot_t const& op) {
  return keydown_again_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_undo_nonrepeat() const {
  keydown_undo_nonrepeat_signal();
}

connection event_dispatch::on_keydown_undo_nonrepeat(
  keydown_undo_nonrepeat_slot_t const& op) {
  return keydown_undo_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_cut_nonrepeat() const {
  keydown_cut_nonrepeat_signal();
}

connection event_dispatch::on_keydown_cut_nonrepeat(
  keydown_cut_nonrepeat_slot_t const& op) {
  return keydown_cut_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_copy_nonrepeat() const {
  keydown_copy_nonrepeat_signal();
}

connection event_dispatch::on_keydown_copy_nonrepeat(
  keydown_copy_nonrepeat_slot_t const& op) {
  return keydown_copy_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_paste_nonrepeat() const {
  keydown_paste_nonrepeat_signal();
}

connection event_dispatch::on_keydown_paste_nonrepeat(
  keydown_paste_nonrepeat_slot_t const& op) {
  return keydown_paste_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_find_nonrepeat() const {
  keydown_find_nonrepeat_signal();
}

connection event_dispatch::on_keydown_find_nonrepeat(
  keydown_find_nonrepeat_slot_t const& op) {
  return keydown_find_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_mute_nonrepeat() const {
  keydown_mute_nonrepeat_signal();
}

connection event_dispatch::on_keydown_mute_nonrepeat(
  keydown_mute_nonrepeat_slot_t const& op) {
  return keydown_mute_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_volumeup_nonrepeat() const {
  keydown_volumeup_nonrepeat_signal();
}

connection event_dispatch::on_keydown_volumeup_nonrepeat(
  keydown_volumeup_nonrepeat_slot_t const& op) {
  return keydown_volumeup_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_volumedown_nonrepeat() const {
  keydown_volumedown_nonrepeat_signal();
}

connection event_dispatch::on_keydown_volumedown_nonrepeat(
  keydown_volumedown_nonrepeat_slot_t const& op) {
  return keydown_volumedown_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_comma_nonrepeat() const {
  keydown_kp_comma_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_comma_nonrepeat(
  keydown_kp_comma_nonrepeat_slot_t const& op) {
  return keydown_kp_comma_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_equalsas400_nonrepeat() const {
  keydown_kp_equalsas400_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_equalsas400_nonrepeat(
  keydown_kp_equalsas400_nonrepeat_slot_t const& op) {
  return keydown_kp_equalsas400_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_alterase_nonrepeat() const {
  keydown_alterase_nonrepeat_signal();
}

connection event_dispatch::on_keydown_alterase_nonrepeat(
  keydown_alterase_nonrepeat_slot_t const& op) {
  return keydown_alterase_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_sysreq_nonrepeat() const {
  keydown_sysreq_nonrepeat_signal();
}

connection event_dispatch::on_keydown_sysreq_nonrepeat(
  keydown_sysreq_nonrepeat_slot_t const& op) {
  return keydown_sysreq_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_cancel_nonrepeat() const {
  keydown_cancel_nonrepeat_signal();
}

connection event_dispatch::on_keydown_cancel_nonrepeat(
  keydown_cancel_nonrepeat_slot_t const& op) {
  return keydown_cancel_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_clear_nonrepeat() const {
  keydown_clear_nonrepeat_signal();
}

connection event_dispatch::on_keydown_clear_nonrepeat(
  keydown_clear_nonrepeat_slot_t const& op) {
  return keydown_clear_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_prior_nonrepeat() const {
  keydown_prior_nonrepeat_signal();
}

connection event_dispatch::on_keydown_prior_nonrepeat(
  keydown_prior_nonrepeat_slot_t const& op) {
  return keydown_prior_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_return2_nonrepeat() const {
  keydown_return2_nonrepeat_signal();
}

connection event_dispatch::on_keydown_return2_nonrepeat(
  keydown_return2_nonrepeat_slot_t const& op) {
  return keydown_return2_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_separator_nonrepeat() const {
  keydown_separator_nonrepeat_signal();
}

connection event_dispatch::on_keydown_separator_nonrepeat(
  keydown_separator_nonrepeat_slot_t const& op) {
  return keydown_separator_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_out_nonrepeat() const {
  keydown_out_nonrepeat_signal();
}

connection event_dispatch::on_keydown_out_nonrepeat(
  keydown_out_nonrepeat_slot_t const& op) {
  return keydown_out_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_oper_nonrepeat() const {
  keydown_oper_nonrepeat_signal();
}

connection event_dispatch::on_keydown_oper_nonrepeat(
  keydown_oper_nonrepeat_slot_t const& op) {
  return keydown_oper_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_clearagain_nonrepeat() const {
  keydown_clearagain_nonrepeat_signal();
}

connection event_dispatch::on_keydown_clearagain_nonrepeat(
  keydown_clearagain_nonrepeat_slot_t const& op) {
  return keydown_clearagain_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_crsel_nonrepeat() const {
  keydown_crsel_nonrepeat_signal();
}

connection event_dispatch::on_keydown_crsel_nonrepeat(
  keydown_crsel_nonrepeat_slot_t const& op) {
  return keydown_crsel_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_exsel_nonrepeat() const {
  keydown_exsel_nonrepeat_signal();
}

connection event_dispatch::on_keydown_exsel_nonrepeat(
  keydown_exsel_nonrepeat_slot_t const& op) {
  return keydown_exsel_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_00_nonrepeat() const {
  keydown_kp_00_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_00_nonrepeat(
  keydown_kp_00_nonrepeat_slot_t const& op) {
  return keydown_kp_00_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_000_nonrepeat() const {
  keydown_kp_000_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_000_nonrepeat(
  keydown_kp_000_nonrepeat_slot_t const& op) {
  return keydown_kp_000_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_thousandsseparator_nonrepeat() const {
  keydown_thousandsseparator_nonrepeat_signal();
}

connection event_dispatch::on_keydown_thousandsseparator_nonrepeat(
  keydown_thousandsseparator_nonrepeat_slot_t const& op) {
  return keydown_thousandsseparator_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_decimalseparator_nonrepeat() const {
  keydown_decimalseparator_nonrepeat_signal();
}

connection event_dispatch::on_keydown_decimalseparator_nonrepeat(
  keydown_decimalseparator_nonrepeat_slot_t const& op) {
  return keydown_decimalseparator_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_currencyunit_nonrepeat() const {
  keydown_currencyunit_nonrepeat_signal();
}

connection event_dispatch::on_keydown_currencyunit_nonrepeat(
  keydown_currencyunit_nonrepeat_slot_t const& op) {
  return keydown_currencyunit_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_currencysubunit_nonrepeat() const {
  keydown_currencysubunit_nonrepeat_signal();
}

connection event_dispatch::on_keydown_currencysubunit_nonrepeat(
  keydown_currencysubunit_nonrepeat_slot_t const& op) {
  return keydown_currencysubunit_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_leftparen_nonrepeat() const {
  keydown_kp_leftparen_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_leftparen_nonrepeat(
  keydown_kp_leftparen_nonrepeat_slot_t const& op) {
  return keydown_kp_leftparen_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_rightparen_nonrepeat() const {
  keydown_kp_rightparen_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_rightparen_nonrepeat(
  keydown_kp_rightparen_nonrepeat_slot_t const& op) {
  return keydown_kp_rightparen_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_leftbrace_nonrepeat() const {
  keydown_kp_leftbrace_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_leftbrace_nonrepeat(
  keydown_kp_leftbrace_nonrepeat_slot_t const& op) {
  return keydown_kp_leftbrace_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_rightbrace_nonrepeat() const {
  keydown_kp_rightbrace_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_rightbrace_nonrepeat(
  keydown_kp_rightbrace_nonrepeat_slot_t const& op) {
  return keydown_kp_rightbrace_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_tab_nonrepeat() const {
  keydown_kp_tab_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_tab_nonrepeat(
  keydown_kp_tab_nonrepeat_slot_t const& op) {
  return keydown_kp_tab_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_backspace_nonrepeat() const {
  keydown_kp_backspace_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_backspace_nonrepeat(
  keydown_kp_backspace_nonrepeat_slot_t const& op) {
  return keydown_kp_backspace_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_a_nonrepeat() const {
  keydown_kp_a_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_a_nonrepeat(
  keydown_kp_a_nonrepeat_slot_t const& op) {
  return keydown_kp_a_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_b_nonrepeat() const {
  keydown_kp_b_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_b_nonrepeat(
  keydown_kp_b_nonrepeat_slot_t const& op) {
  return keydown_kp_b_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_c_nonrepeat() const {
  keydown_kp_c_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_c_nonrepeat(
  keydown_kp_c_nonrepeat_slot_t const& op) {
  return keydown_kp_c_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_d_nonrepeat() const {
  keydown_kp_d_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_d_nonrepeat(
  keydown_kp_d_nonrepeat_slot_t const& op) {
  return keydown_kp_d_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_e_nonrepeat() const {
  keydown_kp_e_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_e_nonrepeat(
  keydown_kp_e_nonrepeat_slot_t const& op) {
  return keydown_kp_e_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_f_nonrepeat() const {
  keydown_kp_f_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_f_nonrepeat(
  keydown_kp_f_nonrepeat_slot_t const& op) {
  return keydown_kp_f_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_xor_nonrepeat() const {
  keydown_kp_xor_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_xor_nonrepeat(
  keydown_kp_xor_nonrepeat_slot_t const& op) {
  return keydown_kp_xor_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_power_nonrepeat() const {
  keydown_kp_power_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_power_nonrepeat(
  keydown_kp_power_nonrepeat_slot_t const& op) {
  return keydown_kp_power_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_percent_nonrepeat() const {
  keydown_kp_percent_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_percent_nonrepeat(
  keydown_kp_percent_nonrepeat_slot_t const& op) {
  return keydown_kp_percent_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_less_nonrepeat() const {
  keydown_kp_less_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_less_nonrepeat(
  keydown_kp_less_nonrepeat_slot_t const& op) {
  return keydown_kp_less_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_greater_nonrepeat() const {
  keydown_kp_greater_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_greater_nonrepeat(
  keydown_kp_greater_nonrepeat_slot_t const& op) {
  return keydown_kp_greater_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_ampersand_nonrepeat() const {
  keydown_kp_ampersand_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_ampersand_nonrepeat(
  keydown_kp_ampersand_nonrepeat_slot_t const& op) {
  return keydown_kp_ampersand_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_dblampersand_nonrepeat() const {
  keydown_kp_dblampersand_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_dblampersand_nonrepeat(
  keydown_kp_dblampersand_nonrepeat_slot_t const& op) {
  return keydown_kp_dblampersand_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_verticalbar_nonrepeat() const {
  keydown_kp_verticalbar_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_verticalbar_nonrepeat(
  keydown_kp_verticalbar_nonrepeat_slot_t const& op) {
  return keydown_kp_verticalbar_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_dblverticalbar_nonrepeat() const {
  keydown_kp_dblverticalbar_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_dblverticalbar_nonrepeat(
  keydown_kp_dblverticalbar_nonrepeat_slot_t const& op) {
  return keydown_kp_dblverticalbar_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_colon_nonrepeat() const {
  keydown_kp_colon_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_colon_nonrepeat(
  keydown_kp_colon_nonrepeat_slot_t const& op) {
  return keydown_kp_colon_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_hash_nonrepeat() const {
  keydown_kp_hash_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_hash_nonrepeat(
  keydown_kp_hash_nonrepeat_slot_t const& op) {
  return keydown_kp_hash_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_space_nonrepeat() const {
  keydown_kp_space_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_space_nonrepeat(
  keydown_kp_space_nonrepeat_slot_t const& op) {
  return keydown_kp_space_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_at_nonrepeat() const {
  keydown_kp_at_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_at_nonrepeat(
  keydown_kp_at_nonrepeat_slot_t const& op) {
  return keydown_kp_at_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_exclam_nonrepeat() const {
  keydown_kp_exclam_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_exclam_nonrepeat(
  keydown_kp_exclam_nonrepeat_slot_t const& op) {
  return keydown_kp_exclam_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memstore_nonrepeat() const {
  keydown_kp_memstore_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_memstore_nonrepeat(
  keydown_kp_memstore_nonrepeat_slot_t const& op) {
  return keydown_kp_memstore_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memrecall_nonrepeat() const {
  keydown_kp_memrecall_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_memrecall_nonrepeat(
  keydown_kp_memrecall_nonrepeat_slot_t const& op) {
  return keydown_kp_memrecall_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memclear_nonrepeat() const {
  keydown_kp_memclear_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_memclear_nonrepeat(
  keydown_kp_memclear_nonrepeat_slot_t const& op) {
  return keydown_kp_memclear_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memadd_nonrepeat() const {
  keydown_kp_memadd_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_memadd_nonrepeat(
  keydown_kp_memadd_nonrepeat_slot_t const& op) {
  return keydown_kp_memadd_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memsubtract_nonrepeat() const {
  keydown_kp_memsubtract_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_memsubtract_nonrepeat(
  keydown_kp_memsubtract_nonrepeat_slot_t const& op) {
  return keydown_kp_memsubtract_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memmultiply_nonrepeat() const {
  keydown_kp_memmultiply_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_memmultiply_nonrepeat(
  keydown_kp_memmultiply_nonrepeat_slot_t const& op) {
  return keydown_kp_memmultiply_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_memdivide_nonrepeat() const {
  keydown_kp_memdivide_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_memdivide_nonrepeat(
  keydown_kp_memdivide_nonrepeat_slot_t const& op) {
  return keydown_kp_memdivide_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_plusminus_nonrepeat() const {
  keydown_kp_plusminus_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_plusminus_nonrepeat(
  keydown_kp_plusminus_nonrepeat_slot_t const& op) {
  return keydown_kp_plusminus_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_clear_nonrepeat() const {
  keydown_kp_clear_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_clear_nonrepeat(
  keydown_kp_clear_nonrepeat_slot_t const& op) {
  return keydown_kp_clear_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_clearentry_nonrepeat() const {
  keydown_kp_clearentry_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_clearentry_nonrepeat(
  keydown_kp_clearentry_nonrepeat_slot_t const& op) {
  return keydown_kp_clearentry_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_binary_nonrepeat() const {
  keydown_kp_binary_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_binary_nonrepeat(
  keydown_kp_binary_nonrepeat_slot_t const& op) {
  return keydown_kp_binary_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_octal_nonrepeat() const {
  keydown_kp_octal_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_octal_nonrepeat(
  keydown_kp_octal_nonrepeat_slot_t const& op) {
  return keydown_kp_octal_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_decimal_nonrepeat() const {
  keydown_kp_decimal_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_decimal_nonrepeat(
  keydown_kp_decimal_nonrepeat_slot_t const& op) {
  return keydown_kp_decimal_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kp_hexadecimal_nonrepeat() const {
  keydown_kp_hexadecimal_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kp_hexadecimal_nonrepeat(
  keydown_kp_hexadecimal_nonrepeat_slot_t const& op) {
  return keydown_kp_hexadecimal_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_lctrl_nonrepeat() const {
  keydown_lctrl_nonrepeat_signal();
}

connection event_dispatch::on_keydown_lctrl_nonrepeat(
  keydown_lctrl_nonrepeat_slot_t const& op) {
  return keydown_lctrl_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_lshift_nonrepeat() const {
  keydown_lshift_nonrepeat_signal();
}

connection event_dispatch::on_keydown_lshift_nonrepeat(
  keydown_lshift_nonrepeat_slot_t const& op) {
  return keydown_lshift_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_lalt_nonrepeat() const {
  keydown_lalt_nonrepeat_signal();
}

connection event_dispatch::on_keydown_lalt_nonrepeat(
  keydown_lalt_nonrepeat_slot_t const& op) {
  return keydown_lalt_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_lgui_nonrepeat() const {
  keydown_lgui_nonrepeat_signal();
}

connection event_dispatch::on_keydown_lgui_nonrepeat(
  keydown_lgui_nonrepeat_slot_t const& op) {
  return keydown_lgui_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_rctrl_nonrepeat() const {
  keydown_rctrl_nonrepeat_signal();
}

connection event_dispatch::on_keydown_rctrl_nonrepeat(
  keydown_rctrl_nonrepeat_slot_t const& op) {
  return keydown_rctrl_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_rshift_nonrepeat() const {
  keydown_rshift_nonrepeat_signal();
}

connection event_dispatch::on_keydown_rshift_nonrepeat(
  keydown_rshift_nonrepeat_slot_t const& op) {
  return keydown_rshift_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_ralt_nonrepeat() const {
  keydown_ralt_nonrepeat_signal();
}

connection event_dispatch::on_keydown_ralt_nonrepeat(
  keydown_ralt_nonrepeat_slot_t const& op) {
  return keydown_ralt_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_rgui_nonrepeat() const {
  keydown_rgui_nonrepeat_signal();
}

connection event_dispatch::on_keydown_rgui_nonrepeat(
  keydown_rgui_nonrepeat_slot_t const& op) {
  return keydown_rgui_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_mode_nonrepeat() const {
  keydown_mode_nonrepeat_signal();
}

connection event_dispatch::on_keydown_mode_nonrepeat(
  keydown_mode_nonrepeat_slot_t const& op) {
  return keydown_mode_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_audionext_nonrepeat() const {
  keydown_audionext_nonrepeat_signal();
}

connection event_dispatch::on_keydown_audionext_nonrepeat(
  keydown_audionext_nonrepeat_slot_t const& op) {
  return keydown_audionext_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_audioprev_nonrepeat() const {
  keydown_audioprev_nonrepeat_signal();
}

connection event_dispatch::on_keydown_audioprev_nonrepeat(
  keydown_audioprev_nonrepeat_slot_t const& op) {
  return keydown_audioprev_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_audiostop_nonrepeat() const {
  keydown_audiostop_nonrepeat_signal();
}

connection event_dispatch::on_keydown_audiostop_nonrepeat(
  keydown_audiostop_nonrepeat_slot_t const& op) {
  return keydown_audiostop_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_audioplay_nonrepeat() const {
  keydown_audioplay_nonrepeat_signal();
}

connection event_dispatch::on_keydown_audioplay_nonrepeat(
  keydown_audioplay_nonrepeat_slot_t const& op) {
  return keydown_audioplay_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_audiomute_nonrepeat() const {
  keydown_audiomute_nonrepeat_signal();
}

connection event_dispatch::on_keydown_audiomute_nonrepeat(
  keydown_audiomute_nonrepeat_slot_t const& op) {
  return keydown_audiomute_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_mediaselect_nonrepeat() const {
  keydown_mediaselect_nonrepeat_signal();
}

connection event_dispatch::on_keydown_mediaselect_nonrepeat(
  keydown_mediaselect_nonrepeat_slot_t const& op) {
  return keydown_mediaselect_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_www_nonrepeat() const {
  keydown_www_nonrepeat_signal();
}

connection event_dispatch::on_keydown_www_nonrepeat(
  keydown_www_nonrepeat_slot_t const& op) {
  return keydown_www_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_mail_nonrepeat() const {
  keydown_mail_nonrepeat_signal();
}

connection event_dispatch::on_keydown_mail_nonrepeat(
  keydown_mail_nonrepeat_slot_t const& op) {
  return keydown_mail_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_calculator_nonrepeat() const {
  keydown_calculator_nonrepeat_signal();
}

connection event_dispatch::on_keydown_calculator_nonrepeat(
  keydown_calculator_nonrepeat_slot_t const& op) {
  return keydown_calculator_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_computer_nonrepeat() const {
  keydown_computer_nonrepeat_signal();
}

connection event_dispatch::on_keydown_computer_nonrepeat(
  keydown_computer_nonrepeat_slot_t const& op) {
  return keydown_computer_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_ac_search_nonrepeat() const {
  keydown_ac_search_nonrepeat_signal();
}

connection event_dispatch::on_keydown_ac_search_nonrepeat(
  keydown_ac_search_nonrepeat_slot_t const& op) {
  return keydown_ac_search_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_ac_home_nonrepeat() const {
  keydown_ac_home_nonrepeat_signal();
}

connection event_dispatch::on_keydown_ac_home_nonrepeat(
  keydown_ac_home_nonrepeat_slot_t const& op) {
  return keydown_ac_home_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_ac_back_nonrepeat() const {
  keydown_ac_back_nonrepeat_signal();
}

connection event_dispatch::on_keydown_ac_back_nonrepeat(
  keydown_ac_back_nonrepeat_slot_t const& op) {
  return keydown_ac_back_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_ac_forward_nonrepeat() const {
  keydown_ac_forward_nonrepeat_signal();
}

connection event_dispatch::on_keydown_ac_forward_nonrepeat(
  keydown_ac_forward_nonrepeat_slot_t const& op) {
  return keydown_ac_forward_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_ac_stop_nonrepeat() const {
  keydown_ac_stop_nonrepeat_signal();
}

connection event_dispatch::on_keydown_ac_stop_nonrepeat(
  keydown_ac_stop_nonrepeat_slot_t const& op) {
  return keydown_ac_stop_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_ac_refresh_nonrepeat() const {
  keydown_ac_refresh_nonrepeat_signal();
}

connection event_dispatch::on_keydown_ac_refresh_nonrepeat(
  keydown_ac_refresh_nonrepeat_slot_t const& op) {
  return keydown_ac_refresh_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_ac_bookmarks_nonrepeat() const {
  keydown_ac_bookmarks_nonrepeat_signal();
}

connection event_dispatch::on_keydown_ac_bookmarks_nonrepeat(
  keydown_ac_bookmarks_nonrepeat_slot_t const& op) {
  return keydown_ac_bookmarks_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_brightnessdown_nonrepeat() const {
  keydown_brightnessdown_nonrepeat_signal();
}

connection event_dispatch::on_keydown_brightnessdown_nonrepeat(
  keydown_brightnessdown_nonrepeat_slot_t const& op) {
  return keydown_brightnessdown_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_brightnessup_nonrepeat() const {
  keydown_brightnessup_nonrepeat_signal();
}

connection event_dispatch::on_keydown_brightnessup_nonrepeat(
  keydown_brightnessup_nonrepeat_slot_t const& op) {
  return keydown_brightnessup_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_displayswitch_nonrepeat() const {
  keydown_displayswitch_nonrepeat_signal();
}

connection event_dispatch::on_keydown_displayswitch_nonrepeat(
  keydown_displayswitch_nonrepeat_slot_t const& op) {
  return keydown_displayswitch_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kbdillumtoggle_nonrepeat() const {
  keydown_kbdillumtoggle_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kbdillumtoggle_nonrepeat(
  keydown_kbdillumtoggle_nonrepeat_slot_t const& op) {
  return keydown_kbdillumtoggle_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kbdillumdown_nonrepeat() const {
  keydown_kbdillumdown_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kbdillumdown_nonrepeat(
  keydown_kbdillumdown_nonrepeat_slot_t const& op) {
  return keydown_kbdillumdown_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_kbdillumup_nonrepeat() const {
  keydown_kbdillumup_nonrepeat_signal();
}

connection event_dispatch::on_keydown_kbdillumup_nonrepeat(
  keydown_kbdillumup_nonrepeat_slot_t const& op) {
  return keydown_kbdillumup_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_eject_nonrepeat() const {
  keydown_eject_nonrepeat_signal();
}

connection event_dispatch::on_keydown_eject_nonrepeat(
  keydown_eject_nonrepeat_slot_t const& op) {
  return keydown_eject_nonrepeat_signal.connect(op);
}

void event_dispatch::keydown_sleep_nonrepeat() const {
  keydown_sleep_nonrepeat_signal();
}

connection event_dispatch::on_keydown_sleep_nonrepeat(
  keydown_sleep_nonrepeat_slot_t const& op) {
  return keydown_sleep_nonrepeat_signal.connect(op);
}

void event_dispatch::keyup_unknown() const { keyup_unknown_signal(); }

connection event_dispatch::on_keyup_unknown(keyup_unknown_slot_t const& op) {
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

connection event_dispatch::on_keyup_exclaim(keyup_exclaim_slot_t const& op) {
  return keyup_exclaim_signal.connect(op);
}

void event_dispatch::keyup_quotedbl() const { keyup_quotedbl_signal(); }

connection event_dispatch::on_keyup_quotedbl(keyup_quotedbl_slot_t const& op) {
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

connection event_dispatch::on_keyup_percent(keyup_percent_slot_t const& op) {
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

void event_dispatch::keyup_rightparen() const { keyup_rightparen_signal(); }

connection event_dispatch::on_keyup_rightparen(
  keyup_rightparen_slot_t const& op) {
  return keyup_rightparen_signal.connect(op);
}

void event_dispatch::keyup_asterisk() const { keyup_asterisk_signal(); }

connection event_dispatch::on_keyup_asterisk(keyup_asterisk_slot_t const& op) {
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

connection event_dispatch::on_keyup_greater(keyup_greater_slot_t const& op) {
  return keyup_greater_signal.connect(op);
}

void event_dispatch::keyup_question() const { keyup_question_signal(); }

connection event_dispatch::on_keyup_question(keyup_question_slot_t const& op) {
  return keyup_question_signal.connect(op);
}

void event_dispatch::keyup_at() const { keyup_at_signal(); }

connection event_dispatch::on_keyup_at(keyup_at_slot_t const& op) {
  return keyup_at_signal.connect(op);
}

void event_dispatch::keyup_leftbracket() const { keyup_leftbracket_signal(); }

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

void event_dispatch::keyup_underscore() const { keyup_underscore_signal(); }

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

connection event_dispatch::on_keyup_capslock(keyup_capslock_slot_t const& op) {
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

void event_dispatch::keyup_printscreen() const { keyup_printscreen_signal(); }

connection event_dispatch::on_keyup_printscreen(
  keyup_printscreen_slot_t const& op) {
  return keyup_printscreen_signal.connect(op);
}

void event_dispatch::keyup_scrolllock() const { keyup_scrolllock_signal(); }

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

connection event_dispatch::on_keyup_pagedown(keyup_pagedown_slot_t const& op) {
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

void event_dispatch::keyup_kp_multiply() const { keyup_kp_multiply_signal(); }

connection event_dispatch::on_keyup_kp_multiply(
  keyup_kp_multiply_slot_t const& op) {
  return keyup_kp_multiply_signal.connect(op);
}

void event_dispatch::keyup_kp_minus() const { keyup_kp_minus_signal(); }

connection event_dispatch::on_keyup_kp_minus(keyup_kp_minus_slot_t const& op) {
  return keyup_kp_minus_signal.connect(op);
}

void event_dispatch::keyup_kp_plus() const { keyup_kp_plus_signal(); }

connection event_dispatch::on_keyup_kp_plus(keyup_kp_plus_slot_t const& op) {
  return keyup_kp_plus_signal.connect(op);
}

void event_dispatch::keyup_kp_enter() const { keyup_kp_enter_signal(); }

connection event_dispatch::on_keyup_kp_enter(keyup_kp_enter_slot_t const& op) {
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

void event_dispatch::keyup_application() const { keyup_application_signal(); }

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

connection event_dispatch::on_keyup_execute(keyup_execute_slot_t const& op) {
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

connection event_dispatch::on_keyup_volumeup(keyup_volumeup_slot_t const& op) {
  return keyup_volumeup_signal.connect(op);
}

void event_dispatch::keyup_volumedown() const { keyup_volumedown_signal(); }

connection event_dispatch::on_keyup_volumedown(
  keyup_volumedown_slot_t const& op) {
  return keyup_volumedown_signal.connect(op);
}

void event_dispatch::keyup_kp_comma() const { keyup_kp_comma_signal(); }

connection event_dispatch::on_keyup_kp_comma(keyup_kp_comma_slot_t const& op) {
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

connection event_dispatch::on_keyup_alterase(keyup_alterase_slot_t const& op) {
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

connection event_dispatch::on_keyup_return2(keyup_return2_slot_t const& op) {
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

void event_dispatch::keyup_clearagain() const { keyup_clearagain_signal(); }

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

connection event_dispatch::on_keyup_kp_power(keyup_kp_power_slot_t const& op) {
  return keyup_kp_power_signal.connect(op);
}

void event_dispatch::keyup_kp_percent() const { keyup_kp_percent_signal(); }

connection event_dispatch::on_keyup_kp_percent(
  keyup_kp_percent_slot_t const& op) {
  return keyup_kp_percent_signal.connect(op);
}

void event_dispatch::keyup_kp_less() const { keyup_kp_less_signal(); }

connection event_dispatch::on_keyup_kp_less(keyup_kp_less_slot_t const& op) {
  return keyup_kp_less_signal.connect(op);
}

void event_dispatch::keyup_kp_greater() const { keyup_kp_greater_signal(); }

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

connection event_dispatch::on_keyup_kp_colon(keyup_kp_colon_slot_t const& op) {
  return keyup_kp_colon_signal.connect(op);
}

void event_dispatch::keyup_kp_hash() const { keyup_kp_hash_signal(); }

connection event_dispatch::on_keyup_kp_hash(keyup_kp_hash_slot_t const& op) {
  return keyup_kp_hash_signal.connect(op);
}

void event_dispatch::keyup_kp_space() const { keyup_kp_space_signal(); }

connection event_dispatch::on_keyup_kp_space(keyup_kp_space_slot_t const& op) {
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

void event_dispatch::keyup_kp_memstore() const { keyup_kp_memstore_signal(); }

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

void event_dispatch::keyup_kp_memclear() const { keyup_kp_memclear_signal(); }

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

connection event_dispatch::on_keyup_kp_clear(keyup_kp_clear_slot_t const& op) {
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

connection event_dispatch::on_keyup_kp_octal(keyup_kp_octal_slot_t const& op) {
  return keyup_kp_octal_signal.connect(op);
}

void event_dispatch::keyup_kp_decimal() const { keyup_kp_decimal_signal(); }

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

void event_dispatch::keyup_mediaselect() const { keyup_mediaselect_signal(); }

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

void event_dispatch::keyup_calculator() const { keyup_calculator_signal(); }

connection event_dispatch::on_keyup_calculator(
  keyup_calculator_slot_t const& op) {
  return keyup_calculator_signal.connect(op);
}

void event_dispatch::keyup_computer() const { keyup_computer_signal(); }

connection event_dispatch::on_keyup_computer(keyup_computer_slot_t const& op) {
  return keyup_computer_signal.connect(op);
}

void event_dispatch::keyup_ac_search() const { keyup_ac_search_signal(); }

connection event_dispatch::on_keyup_ac_search(
  keyup_ac_search_slot_t const& op) {
  return keyup_ac_search_signal.connect(op);
}

void event_dispatch::keyup_ac_home() const { keyup_ac_home_signal(); }

connection event_dispatch::on_keyup_ac_home(keyup_ac_home_slot_t const& op) {
  return keyup_ac_home_signal.connect(op);
}

void event_dispatch::keyup_ac_back() const { keyup_ac_back_signal(); }

connection event_dispatch::on_keyup_ac_back(keyup_ac_back_slot_t const& op) {
  return keyup_ac_back_signal.connect(op);
}

void event_dispatch::keyup_ac_forward() const { keyup_ac_forward_signal(); }

connection event_dispatch::on_keyup_ac_forward(
  keyup_ac_forward_slot_t const& op) {
  return keyup_ac_forward_signal.connect(op);
}

void event_dispatch::keyup_ac_stop() const { keyup_ac_stop_signal(); }

connection event_dispatch::on_keyup_ac_stop(keyup_ac_stop_slot_t const& op) {
  return keyup_ac_stop_signal.connect(op);
}

void event_dispatch::keyup_ac_refresh() const { keyup_ac_refresh_signal(); }

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

void event_dispatch::keyup_kbdillumup() const { keyup_kbdillumup_signal(); }

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
