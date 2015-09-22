#ifndef GLS_EVENT_DISPATCH_HH_
#define GLS_EVENT_DISPATCH_HH_

#include <boost/signals2.hpp>

namespace gls {
template <typename Op>
using signal = boost::signals2::signal<Op>;
using connection = boost::signals2::connection;

struct event_dispatch {
  using quit_signal_t = signal<void()>;
  using quit_slot_t = quit_signal_t::slot_type;
  using keydown_unknown_repeat_signal_t = signal<void()>;
  using keydown_unknown_repeat_slot_t
    = keydown_unknown_repeat_signal_t::slot_type;
  using keydown_backspace_repeat_signal_t = signal<void()>;
  using keydown_backspace_repeat_slot_t
    = keydown_backspace_repeat_signal_t::slot_type;
  using keydown_tab_repeat_signal_t = signal<void()>;
  using keydown_tab_repeat_slot_t = keydown_tab_repeat_signal_t::slot_type;
  using keydown_return_repeat_signal_t = signal<void()>;
  using keydown_return_repeat_slot_t
    = keydown_return_repeat_signal_t::slot_type;
  using keydown_escape_repeat_signal_t = signal<void()>;
  using keydown_escape_repeat_slot_t
    = keydown_escape_repeat_signal_t::slot_type;
  using keydown_space_repeat_signal_t = signal<void()>;
  using keydown_space_repeat_slot_t = keydown_space_repeat_signal_t::slot_type;
  using keydown_exclaim_repeat_signal_t = signal<void()>;
  using keydown_exclaim_repeat_slot_t
    = keydown_exclaim_repeat_signal_t::slot_type;
  using keydown_quotedbl_repeat_signal_t = signal<void()>;
  using keydown_quotedbl_repeat_slot_t
    = keydown_quotedbl_repeat_signal_t::slot_type;
  using keydown_hash_repeat_signal_t = signal<void()>;
  using keydown_hash_repeat_slot_t = keydown_hash_repeat_signal_t::slot_type;
  using keydown_dollar_repeat_signal_t = signal<void()>;
  using keydown_dollar_repeat_slot_t
    = keydown_dollar_repeat_signal_t::slot_type;
  using keydown_percent_repeat_signal_t = signal<void()>;
  using keydown_percent_repeat_slot_t
    = keydown_percent_repeat_signal_t::slot_type;
  using keydown_ampersand_repeat_signal_t = signal<void()>;
  using keydown_ampersand_repeat_slot_t
    = keydown_ampersand_repeat_signal_t::slot_type;
  using keydown_quote_repeat_signal_t = signal<void()>;
  using keydown_quote_repeat_slot_t = keydown_quote_repeat_signal_t::slot_type;
  using keydown_leftparen_repeat_signal_t = signal<void()>;
  using keydown_leftparen_repeat_slot_t
    = keydown_leftparen_repeat_signal_t::slot_type;
  using keydown_rightparen_repeat_signal_t = signal<void()>;
  using keydown_rightparen_repeat_slot_t
    = keydown_rightparen_repeat_signal_t::slot_type;
  using keydown_asterisk_repeat_signal_t = signal<void()>;
  using keydown_asterisk_repeat_slot_t
    = keydown_asterisk_repeat_signal_t::slot_type;
  using keydown_plus_repeat_signal_t = signal<void()>;
  using keydown_plus_repeat_slot_t = keydown_plus_repeat_signal_t::slot_type;
  using keydown_comma_repeat_signal_t = signal<void()>;
  using keydown_comma_repeat_slot_t = keydown_comma_repeat_signal_t::slot_type;
  using keydown_minus_repeat_signal_t = signal<void()>;
  using keydown_minus_repeat_slot_t = keydown_minus_repeat_signal_t::slot_type;
  using keydown_period_repeat_signal_t = signal<void()>;
  using keydown_period_repeat_slot_t
    = keydown_period_repeat_signal_t::slot_type;
  using keydown_slash_repeat_signal_t = signal<void()>;
  using keydown_slash_repeat_slot_t = keydown_slash_repeat_signal_t::slot_type;
  using keydown_0_repeat_signal_t = signal<void()>;
  using keydown_0_repeat_slot_t = keydown_0_repeat_signal_t::slot_type;
  using keydown_1_repeat_signal_t = signal<void()>;
  using keydown_1_repeat_slot_t = keydown_1_repeat_signal_t::slot_type;
  using keydown_2_repeat_signal_t = signal<void()>;
  using keydown_2_repeat_slot_t = keydown_2_repeat_signal_t::slot_type;
  using keydown_3_repeat_signal_t = signal<void()>;
  using keydown_3_repeat_slot_t = keydown_3_repeat_signal_t::slot_type;
  using keydown_4_repeat_signal_t = signal<void()>;
  using keydown_4_repeat_slot_t = keydown_4_repeat_signal_t::slot_type;
  using keydown_5_repeat_signal_t = signal<void()>;
  using keydown_5_repeat_slot_t = keydown_5_repeat_signal_t::slot_type;
  using keydown_6_repeat_signal_t = signal<void()>;
  using keydown_6_repeat_slot_t = keydown_6_repeat_signal_t::slot_type;
  using keydown_7_repeat_signal_t = signal<void()>;
  using keydown_7_repeat_slot_t = keydown_7_repeat_signal_t::slot_type;
  using keydown_8_repeat_signal_t = signal<void()>;
  using keydown_8_repeat_slot_t = keydown_8_repeat_signal_t::slot_type;
  using keydown_9_repeat_signal_t = signal<void()>;
  using keydown_9_repeat_slot_t = keydown_9_repeat_signal_t::slot_type;
  using keydown_colon_repeat_signal_t = signal<void()>;
  using keydown_colon_repeat_slot_t = keydown_colon_repeat_signal_t::slot_type;
  using keydown_semicolon_repeat_signal_t = signal<void()>;
  using keydown_semicolon_repeat_slot_t
    = keydown_semicolon_repeat_signal_t::slot_type;
  using keydown_less_repeat_signal_t = signal<void()>;
  using keydown_less_repeat_slot_t = keydown_less_repeat_signal_t::slot_type;
  using keydown_equals_repeat_signal_t = signal<void()>;
  using keydown_equals_repeat_slot_t
    = keydown_equals_repeat_signal_t::slot_type;
  using keydown_greater_repeat_signal_t = signal<void()>;
  using keydown_greater_repeat_slot_t
    = keydown_greater_repeat_signal_t::slot_type;
  using keydown_question_repeat_signal_t = signal<void()>;
  using keydown_question_repeat_slot_t
    = keydown_question_repeat_signal_t::slot_type;
  using keydown_at_repeat_signal_t = signal<void()>;
  using keydown_at_repeat_slot_t = keydown_at_repeat_signal_t::slot_type;
  using keydown_leftbracket_repeat_signal_t = signal<void()>;
  using keydown_leftbracket_repeat_slot_t
    = keydown_leftbracket_repeat_signal_t::slot_type;
  using keydown_backslash_repeat_signal_t = signal<void()>;
  using keydown_backslash_repeat_slot_t
    = keydown_backslash_repeat_signal_t::slot_type;
  using keydown_rightbracket_repeat_signal_t = signal<void()>;
  using keydown_rightbracket_repeat_slot_t
    = keydown_rightbracket_repeat_signal_t::slot_type;
  using keydown_caret_repeat_signal_t = signal<void()>;
  using keydown_caret_repeat_slot_t = keydown_caret_repeat_signal_t::slot_type;
  using keydown_underscore_repeat_signal_t = signal<void()>;
  using keydown_underscore_repeat_slot_t
    = keydown_underscore_repeat_signal_t::slot_type;
  using keydown_backquote_repeat_signal_t = signal<void()>;
  using keydown_backquote_repeat_slot_t
    = keydown_backquote_repeat_signal_t::slot_type;
  using keydown_a_repeat_signal_t = signal<void()>;
  using keydown_a_repeat_slot_t = keydown_a_repeat_signal_t::slot_type;
  using keydown_b_repeat_signal_t = signal<void()>;
  using keydown_b_repeat_slot_t = keydown_b_repeat_signal_t::slot_type;
  using keydown_c_repeat_signal_t = signal<void()>;
  using keydown_c_repeat_slot_t = keydown_c_repeat_signal_t::slot_type;
  using keydown_d_repeat_signal_t = signal<void()>;
  using keydown_d_repeat_slot_t = keydown_d_repeat_signal_t::slot_type;
  using keydown_e_repeat_signal_t = signal<void()>;
  using keydown_e_repeat_slot_t = keydown_e_repeat_signal_t::slot_type;
  using keydown_f_repeat_signal_t = signal<void()>;
  using keydown_f_repeat_slot_t = keydown_f_repeat_signal_t::slot_type;
  using keydown_g_repeat_signal_t = signal<void()>;
  using keydown_g_repeat_slot_t = keydown_g_repeat_signal_t::slot_type;
  using keydown_h_repeat_signal_t = signal<void()>;
  using keydown_h_repeat_slot_t = keydown_h_repeat_signal_t::slot_type;
  using keydown_i_repeat_signal_t = signal<void()>;
  using keydown_i_repeat_slot_t = keydown_i_repeat_signal_t::slot_type;
  using keydown_j_repeat_signal_t = signal<void()>;
  using keydown_j_repeat_slot_t = keydown_j_repeat_signal_t::slot_type;
  using keydown_k_repeat_signal_t = signal<void()>;
  using keydown_k_repeat_slot_t = keydown_k_repeat_signal_t::slot_type;
  using keydown_l_repeat_signal_t = signal<void()>;
  using keydown_l_repeat_slot_t = keydown_l_repeat_signal_t::slot_type;
  using keydown_m_repeat_signal_t = signal<void()>;
  using keydown_m_repeat_slot_t = keydown_m_repeat_signal_t::slot_type;
  using keydown_n_repeat_signal_t = signal<void()>;
  using keydown_n_repeat_slot_t = keydown_n_repeat_signal_t::slot_type;
  using keydown_o_repeat_signal_t = signal<void()>;
  using keydown_o_repeat_slot_t = keydown_o_repeat_signal_t::slot_type;
  using keydown_p_repeat_signal_t = signal<void()>;
  using keydown_p_repeat_slot_t = keydown_p_repeat_signal_t::slot_type;
  using keydown_q_repeat_signal_t = signal<void()>;
  using keydown_q_repeat_slot_t = keydown_q_repeat_signal_t::slot_type;
  using keydown_r_repeat_signal_t = signal<void()>;
  using keydown_r_repeat_slot_t = keydown_r_repeat_signal_t::slot_type;
  using keydown_s_repeat_signal_t = signal<void()>;
  using keydown_s_repeat_slot_t = keydown_s_repeat_signal_t::slot_type;
  using keydown_t_repeat_signal_t = signal<void()>;
  using keydown_t_repeat_slot_t = keydown_t_repeat_signal_t::slot_type;
  using keydown_u_repeat_signal_t = signal<void()>;
  using keydown_u_repeat_slot_t = keydown_u_repeat_signal_t::slot_type;
  using keydown_v_repeat_signal_t = signal<void()>;
  using keydown_v_repeat_slot_t = keydown_v_repeat_signal_t::slot_type;
  using keydown_w_repeat_signal_t = signal<void()>;
  using keydown_w_repeat_slot_t = keydown_w_repeat_signal_t::slot_type;
  using keydown_x_repeat_signal_t = signal<void()>;
  using keydown_x_repeat_slot_t = keydown_x_repeat_signal_t::slot_type;
  using keydown_y_repeat_signal_t = signal<void()>;
  using keydown_y_repeat_slot_t = keydown_y_repeat_signal_t::slot_type;
  using keydown_z_repeat_signal_t = signal<void()>;
  using keydown_z_repeat_slot_t = keydown_z_repeat_signal_t::slot_type;
  using keydown_delete_repeat_signal_t = signal<void()>;
  using keydown_delete_repeat_slot_t
    = keydown_delete_repeat_signal_t::slot_type;
  using keydown_capslock_repeat_signal_t = signal<void()>;
  using keydown_capslock_repeat_slot_t
    = keydown_capslock_repeat_signal_t::slot_type;
  using keydown_f1_repeat_signal_t = signal<void()>;
  using keydown_f1_repeat_slot_t = keydown_f1_repeat_signal_t::slot_type;
  using keydown_f2_repeat_signal_t = signal<void()>;
  using keydown_f2_repeat_slot_t = keydown_f2_repeat_signal_t::slot_type;
  using keydown_f3_repeat_signal_t = signal<void()>;
  using keydown_f3_repeat_slot_t = keydown_f3_repeat_signal_t::slot_type;
  using keydown_f4_repeat_signal_t = signal<void()>;
  using keydown_f4_repeat_slot_t = keydown_f4_repeat_signal_t::slot_type;
  using keydown_f5_repeat_signal_t = signal<void()>;
  using keydown_f5_repeat_slot_t = keydown_f5_repeat_signal_t::slot_type;
  using keydown_f6_repeat_signal_t = signal<void()>;
  using keydown_f6_repeat_slot_t = keydown_f6_repeat_signal_t::slot_type;
  using keydown_f7_repeat_signal_t = signal<void()>;
  using keydown_f7_repeat_slot_t = keydown_f7_repeat_signal_t::slot_type;
  using keydown_f8_repeat_signal_t = signal<void()>;
  using keydown_f8_repeat_slot_t = keydown_f8_repeat_signal_t::slot_type;
  using keydown_f9_repeat_signal_t = signal<void()>;
  using keydown_f9_repeat_slot_t = keydown_f9_repeat_signal_t::slot_type;
  using keydown_f10_repeat_signal_t = signal<void()>;
  using keydown_f10_repeat_slot_t = keydown_f10_repeat_signal_t::slot_type;
  using keydown_f11_repeat_signal_t = signal<void()>;
  using keydown_f11_repeat_slot_t = keydown_f11_repeat_signal_t::slot_type;
  using keydown_f12_repeat_signal_t = signal<void()>;
  using keydown_f12_repeat_slot_t = keydown_f12_repeat_signal_t::slot_type;
  using keydown_printscreen_repeat_signal_t = signal<void()>;
  using keydown_printscreen_repeat_slot_t
    = keydown_printscreen_repeat_signal_t::slot_type;
  using keydown_scrolllock_repeat_signal_t = signal<void()>;
  using keydown_scrolllock_repeat_slot_t
    = keydown_scrolllock_repeat_signal_t::slot_type;
  using keydown_pause_repeat_signal_t = signal<void()>;
  using keydown_pause_repeat_slot_t = keydown_pause_repeat_signal_t::slot_type;
  using keydown_insert_repeat_signal_t = signal<void()>;
  using keydown_insert_repeat_slot_t
    = keydown_insert_repeat_signal_t::slot_type;
  using keydown_home_repeat_signal_t = signal<void()>;
  using keydown_home_repeat_slot_t = keydown_home_repeat_signal_t::slot_type;
  using keydown_pageup_repeat_signal_t = signal<void()>;
  using keydown_pageup_repeat_slot_t
    = keydown_pageup_repeat_signal_t::slot_type;
  using keydown_end_repeat_signal_t = signal<void()>;
  using keydown_end_repeat_slot_t = keydown_end_repeat_signal_t::slot_type;
  using keydown_pagedown_repeat_signal_t = signal<void()>;
  using keydown_pagedown_repeat_slot_t
    = keydown_pagedown_repeat_signal_t::slot_type;
  using keydown_right_repeat_signal_t = signal<void()>;
  using keydown_right_repeat_slot_t = keydown_right_repeat_signal_t::slot_type;
  using keydown_left_repeat_signal_t = signal<void()>;
  using keydown_left_repeat_slot_t = keydown_left_repeat_signal_t::slot_type;
  using keydown_down_repeat_signal_t = signal<void()>;
  using keydown_down_repeat_slot_t = keydown_down_repeat_signal_t::slot_type;
  using keydown_up_repeat_signal_t = signal<void()>;
  using keydown_up_repeat_slot_t = keydown_up_repeat_signal_t::slot_type;
  using keydown_numlockclear_repeat_signal_t = signal<void()>;
  using keydown_numlockclear_repeat_slot_t
    = keydown_numlockclear_repeat_signal_t::slot_type;
  using keydown_kp_divide_repeat_signal_t = signal<void()>;
  using keydown_kp_divide_repeat_slot_t
    = keydown_kp_divide_repeat_signal_t::slot_type;
  using keydown_kp_multiply_repeat_signal_t = signal<void()>;
  using keydown_kp_multiply_repeat_slot_t
    = keydown_kp_multiply_repeat_signal_t::slot_type;
  using keydown_kp_minus_repeat_signal_t = signal<void()>;
  using keydown_kp_minus_repeat_slot_t
    = keydown_kp_minus_repeat_signal_t::slot_type;
  using keydown_kp_plus_repeat_signal_t = signal<void()>;
  using keydown_kp_plus_repeat_slot_t
    = keydown_kp_plus_repeat_signal_t::slot_type;
  using keydown_kp_enter_repeat_signal_t = signal<void()>;
  using keydown_kp_enter_repeat_slot_t
    = keydown_kp_enter_repeat_signal_t::slot_type;
  using keydown_kp_1_repeat_signal_t = signal<void()>;
  using keydown_kp_1_repeat_slot_t = keydown_kp_1_repeat_signal_t::slot_type;
  using keydown_kp_2_repeat_signal_t = signal<void()>;
  using keydown_kp_2_repeat_slot_t = keydown_kp_2_repeat_signal_t::slot_type;
  using keydown_kp_3_repeat_signal_t = signal<void()>;
  using keydown_kp_3_repeat_slot_t = keydown_kp_3_repeat_signal_t::slot_type;
  using keydown_kp_4_repeat_signal_t = signal<void()>;
  using keydown_kp_4_repeat_slot_t = keydown_kp_4_repeat_signal_t::slot_type;
  using keydown_kp_5_repeat_signal_t = signal<void()>;
  using keydown_kp_5_repeat_slot_t = keydown_kp_5_repeat_signal_t::slot_type;
  using keydown_kp_6_repeat_signal_t = signal<void()>;
  using keydown_kp_6_repeat_slot_t = keydown_kp_6_repeat_signal_t::slot_type;
  using keydown_kp_7_repeat_signal_t = signal<void()>;
  using keydown_kp_7_repeat_slot_t = keydown_kp_7_repeat_signal_t::slot_type;
  using keydown_kp_8_repeat_signal_t = signal<void()>;
  using keydown_kp_8_repeat_slot_t = keydown_kp_8_repeat_signal_t::slot_type;
  using keydown_kp_9_repeat_signal_t = signal<void()>;
  using keydown_kp_9_repeat_slot_t = keydown_kp_9_repeat_signal_t::slot_type;
  using keydown_kp_0_repeat_signal_t = signal<void()>;
  using keydown_kp_0_repeat_slot_t = keydown_kp_0_repeat_signal_t::slot_type;
  using keydown_kp_period_repeat_signal_t = signal<void()>;
  using keydown_kp_period_repeat_slot_t
    = keydown_kp_period_repeat_signal_t::slot_type;
  using keydown_application_repeat_signal_t = signal<void()>;
  using keydown_application_repeat_slot_t
    = keydown_application_repeat_signal_t::slot_type;
  using keydown_power_repeat_signal_t = signal<void()>;
  using keydown_power_repeat_slot_t = keydown_power_repeat_signal_t::slot_type;
  using keydown_kp_equals_repeat_signal_t = signal<void()>;
  using keydown_kp_equals_repeat_slot_t
    = keydown_kp_equals_repeat_signal_t::slot_type;
  using keydown_f13_repeat_signal_t = signal<void()>;
  using keydown_f13_repeat_slot_t = keydown_f13_repeat_signal_t::slot_type;
  using keydown_f14_repeat_signal_t = signal<void()>;
  using keydown_f14_repeat_slot_t = keydown_f14_repeat_signal_t::slot_type;
  using keydown_f15_repeat_signal_t = signal<void()>;
  using keydown_f15_repeat_slot_t = keydown_f15_repeat_signal_t::slot_type;
  using keydown_f16_repeat_signal_t = signal<void()>;
  using keydown_f16_repeat_slot_t = keydown_f16_repeat_signal_t::slot_type;
  using keydown_f17_repeat_signal_t = signal<void()>;
  using keydown_f17_repeat_slot_t = keydown_f17_repeat_signal_t::slot_type;
  using keydown_f18_repeat_signal_t = signal<void()>;
  using keydown_f18_repeat_slot_t = keydown_f18_repeat_signal_t::slot_type;
  using keydown_f19_repeat_signal_t = signal<void()>;
  using keydown_f19_repeat_slot_t = keydown_f19_repeat_signal_t::slot_type;
  using keydown_f20_repeat_signal_t = signal<void()>;
  using keydown_f20_repeat_slot_t = keydown_f20_repeat_signal_t::slot_type;
  using keydown_f21_repeat_signal_t = signal<void()>;
  using keydown_f21_repeat_slot_t = keydown_f21_repeat_signal_t::slot_type;
  using keydown_f22_repeat_signal_t = signal<void()>;
  using keydown_f22_repeat_slot_t = keydown_f22_repeat_signal_t::slot_type;
  using keydown_f23_repeat_signal_t = signal<void()>;
  using keydown_f23_repeat_slot_t = keydown_f23_repeat_signal_t::slot_type;
  using keydown_f24_repeat_signal_t = signal<void()>;
  using keydown_f24_repeat_slot_t = keydown_f24_repeat_signal_t::slot_type;
  using keydown_execute_repeat_signal_t = signal<void()>;
  using keydown_execute_repeat_slot_t
    = keydown_execute_repeat_signal_t::slot_type;
  using keydown_help_repeat_signal_t = signal<void()>;
  using keydown_help_repeat_slot_t = keydown_help_repeat_signal_t::slot_type;
  using keydown_menu_repeat_signal_t = signal<void()>;
  using keydown_menu_repeat_slot_t = keydown_menu_repeat_signal_t::slot_type;
  using keydown_select_repeat_signal_t = signal<void()>;
  using keydown_select_repeat_slot_t
    = keydown_select_repeat_signal_t::slot_type;
  using keydown_stop_repeat_signal_t = signal<void()>;
  using keydown_stop_repeat_slot_t = keydown_stop_repeat_signal_t::slot_type;
  using keydown_again_repeat_signal_t = signal<void()>;
  using keydown_again_repeat_slot_t = keydown_again_repeat_signal_t::slot_type;
  using keydown_undo_repeat_signal_t = signal<void()>;
  using keydown_undo_repeat_slot_t = keydown_undo_repeat_signal_t::slot_type;
  using keydown_cut_repeat_signal_t = signal<void()>;
  using keydown_cut_repeat_slot_t = keydown_cut_repeat_signal_t::slot_type;
  using keydown_copy_repeat_signal_t = signal<void()>;
  using keydown_copy_repeat_slot_t = keydown_copy_repeat_signal_t::slot_type;
  using keydown_paste_repeat_signal_t = signal<void()>;
  using keydown_paste_repeat_slot_t = keydown_paste_repeat_signal_t::slot_type;
  using keydown_find_repeat_signal_t = signal<void()>;
  using keydown_find_repeat_slot_t = keydown_find_repeat_signal_t::slot_type;
  using keydown_mute_repeat_signal_t = signal<void()>;
  using keydown_mute_repeat_slot_t = keydown_mute_repeat_signal_t::slot_type;
  using keydown_volumeup_repeat_signal_t = signal<void()>;
  using keydown_volumeup_repeat_slot_t
    = keydown_volumeup_repeat_signal_t::slot_type;
  using keydown_volumedown_repeat_signal_t = signal<void()>;
  using keydown_volumedown_repeat_slot_t
    = keydown_volumedown_repeat_signal_t::slot_type;
  using keydown_kp_comma_repeat_signal_t = signal<void()>;
  using keydown_kp_comma_repeat_slot_t
    = keydown_kp_comma_repeat_signal_t::slot_type;
  using keydown_kp_equalsas400_repeat_signal_t = signal<void()>;
  using keydown_kp_equalsas400_repeat_slot_t
    = keydown_kp_equalsas400_repeat_signal_t::slot_type;
  using keydown_alterase_repeat_signal_t = signal<void()>;
  using keydown_alterase_repeat_slot_t
    = keydown_alterase_repeat_signal_t::slot_type;
  using keydown_sysreq_repeat_signal_t = signal<void()>;
  using keydown_sysreq_repeat_slot_t
    = keydown_sysreq_repeat_signal_t::slot_type;
  using keydown_cancel_repeat_signal_t = signal<void()>;
  using keydown_cancel_repeat_slot_t
    = keydown_cancel_repeat_signal_t::slot_type;
  using keydown_clear_repeat_signal_t = signal<void()>;
  using keydown_clear_repeat_slot_t = keydown_clear_repeat_signal_t::slot_type;
  using keydown_prior_repeat_signal_t = signal<void()>;
  using keydown_prior_repeat_slot_t = keydown_prior_repeat_signal_t::slot_type;
  using keydown_return2_repeat_signal_t = signal<void()>;
  using keydown_return2_repeat_slot_t
    = keydown_return2_repeat_signal_t::slot_type;
  using keydown_separator_repeat_signal_t = signal<void()>;
  using keydown_separator_repeat_slot_t
    = keydown_separator_repeat_signal_t::slot_type;
  using keydown_out_repeat_signal_t = signal<void()>;
  using keydown_out_repeat_slot_t = keydown_out_repeat_signal_t::slot_type;
  using keydown_oper_repeat_signal_t = signal<void()>;
  using keydown_oper_repeat_slot_t = keydown_oper_repeat_signal_t::slot_type;
  using keydown_clearagain_repeat_signal_t = signal<void()>;
  using keydown_clearagain_repeat_slot_t
    = keydown_clearagain_repeat_signal_t::slot_type;
  using keydown_crsel_repeat_signal_t = signal<void()>;
  using keydown_crsel_repeat_slot_t = keydown_crsel_repeat_signal_t::slot_type;
  using keydown_exsel_repeat_signal_t = signal<void()>;
  using keydown_exsel_repeat_slot_t = keydown_exsel_repeat_signal_t::slot_type;
  using keydown_kp_00_repeat_signal_t = signal<void()>;
  using keydown_kp_00_repeat_slot_t = keydown_kp_00_repeat_signal_t::slot_type;
  using keydown_kp_000_repeat_signal_t = signal<void()>;
  using keydown_kp_000_repeat_slot_t
    = keydown_kp_000_repeat_signal_t::slot_type;
  using keydown_thousandsseparator_repeat_signal_t = signal<void()>;
  using keydown_thousandsseparator_repeat_slot_t
    = keydown_thousandsseparator_repeat_signal_t::slot_type;
  using keydown_decimalseparator_repeat_signal_t = signal<void()>;
  using keydown_decimalseparator_repeat_slot_t
    = keydown_decimalseparator_repeat_signal_t::slot_type;
  using keydown_currencyunit_repeat_signal_t = signal<void()>;
  using keydown_currencyunit_repeat_slot_t
    = keydown_currencyunit_repeat_signal_t::slot_type;
  using keydown_currencysubunit_repeat_signal_t = signal<void()>;
  using keydown_currencysubunit_repeat_slot_t
    = keydown_currencysubunit_repeat_signal_t::slot_type;
  using keydown_kp_leftparen_repeat_signal_t = signal<void()>;
  using keydown_kp_leftparen_repeat_slot_t
    = keydown_kp_leftparen_repeat_signal_t::slot_type;
  using keydown_kp_rightparen_repeat_signal_t = signal<void()>;
  using keydown_kp_rightparen_repeat_slot_t
    = keydown_kp_rightparen_repeat_signal_t::slot_type;
  using keydown_kp_leftbrace_repeat_signal_t = signal<void()>;
  using keydown_kp_leftbrace_repeat_slot_t
    = keydown_kp_leftbrace_repeat_signal_t::slot_type;
  using keydown_kp_rightbrace_repeat_signal_t = signal<void()>;
  using keydown_kp_rightbrace_repeat_slot_t
    = keydown_kp_rightbrace_repeat_signal_t::slot_type;
  using keydown_kp_tab_repeat_signal_t = signal<void()>;
  using keydown_kp_tab_repeat_slot_t
    = keydown_kp_tab_repeat_signal_t::slot_type;
  using keydown_kp_backspace_repeat_signal_t = signal<void()>;
  using keydown_kp_backspace_repeat_slot_t
    = keydown_kp_backspace_repeat_signal_t::slot_type;
  using keydown_kp_a_repeat_signal_t = signal<void()>;
  using keydown_kp_a_repeat_slot_t = keydown_kp_a_repeat_signal_t::slot_type;
  using keydown_kp_b_repeat_signal_t = signal<void()>;
  using keydown_kp_b_repeat_slot_t = keydown_kp_b_repeat_signal_t::slot_type;
  using keydown_kp_c_repeat_signal_t = signal<void()>;
  using keydown_kp_c_repeat_slot_t = keydown_kp_c_repeat_signal_t::slot_type;
  using keydown_kp_d_repeat_signal_t = signal<void()>;
  using keydown_kp_d_repeat_slot_t = keydown_kp_d_repeat_signal_t::slot_type;
  using keydown_kp_e_repeat_signal_t = signal<void()>;
  using keydown_kp_e_repeat_slot_t = keydown_kp_e_repeat_signal_t::slot_type;
  using keydown_kp_f_repeat_signal_t = signal<void()>;
  using keydown_kp_f_repeat_slot_t = keydown_kp_f_repeat_signal_t::slot_type;
  using keydown_kp_xor_repeat_signal_t = signal<void()>;
  using keydown_kp_xor_repeat_slot_t
    = keydown_kp_xor_repeat_signal_t::slot_type;
  using keydown_kp_power_repeat_signal_t = signal<void()>;
  using keydown_kp_power_repeat_slot_t
    = keydown_kp_power_repeat_signal_t::slot_type;
  using keydown_kp_percent_repeat_signal_t = signal<void()>;
  using keydown_kp_percent_repeat_slot_t
    = keydown_kp_percent_repeat_signal_t::slot_type;
  using keydown_kp_less_repeat_signal_t = signal<void()>;
  using keydown_kp_less_repeat_slot_t
    = keydown_kp_less_repeat_signal_t::slot_type;
  using keydown_kp_greater_repeat_signal_t = signal<void()>;
  using keydown_kp_greater_repeat_slot_t
    = keydown_kp_greater_repeat_signal_t::slot_type;
  using keydown_kp_ampersand_repeat_signal_t = signal<void()>;
  using keydown_kp_ampersand_repeat_slot_t
    = keydown_kp_ampersand_repeat_signal_t::slot_type;
  using keydown_kp_dblampersand_repeat_signal_t = signal<void()>;
  using keydown_kp_dblampersand_repeat_slot_t
    = keydown_kp_dblampersand_repeat_signal_t::slot_type;
  using keydown_kp_verticalbar_repeat_signal_t = signal<void()>;
  using keydown_kp_verticalbar_repeat_slot_t
    = keydown_kp_verticalbar_repeat_signal_t::slot_type;
  using keydown_kp_dblverticalbar_repeat_signal_t = signal<void()>;
  using keydown_kp_dblverticalbar_repeat_slot_t
    = keydown_kp_dblverticalbar_repeat_signal_t::slot_type;
  using keydown_kp_colon_repeat_signal_t = signal<void()>;
  using keydown_kp_colon_repeat_slot_t
    = keydown_kp_colon_repeat_signal_t::slot_type;
  using keydown_kp_hash_repeat_signal_t = signal<void()>;
  using keydown_kp_hash_repeat_slot_t
    = keydown_kp_hash_repeat_signal_t::slot_type;
  using keydown_kp_space_repeat_signal_t = signal<void()>;
  using keydown_kp_space_repeat_slot_t
    = keydown_kp_space_repeat_signal_t::slot_type;
  using keydown_kp_at_repeat_signal_t = signal<void()>;
  using keydown_kp_at_repeat_slot_t = keydown_kp_at_repeat_signal_t::slot_type;
  using keydown_kp_exclam_repeat_signal_t = signal<void()>;
  using keydown_kp_exclam_repeat_slot_t
    = keydown_kp_exclam_repeat_signal_t::slot_type;
  using keydown_kp_memstore_repeat_signal_t = signal<void()>;
  using keydown_kp_memstore_repeat_slot_t
    = keydown_kp_memstore_repeat_signal_t::slot_type;
  using keydown_kp_memrecall_repeat_signal_t = signal<void()>;
  using keydown_kp_memrecall_repeat_slot_t
    = keydown_kp_memrecall_repeat_signal_t::slot_type;
  using keydown_kp_memclear_repeat_signal_t = signal<void()>;
  using keydown_kp_memclear_repeat_slot_t
    = keydown_kp_memclear_repeat_signal_t::slot_type;
  using keydown_kp_memadd_repeat_signal_t = signal<void()>;
  using keydown_kp_memadd_repeat_slot_t
    = keydown_kp_memadd_repeat_signal_t::slot_type;
  using keydown_kp_memsubtract_repeat_signal_t = signal<void()>;
  using keydown_kp_memsubtract_repeat_slot_t
    = keydown_kp_memsubtract_repeat_signal_t::slot_type;
  using keydown_kp_memmultiply_repeat_signal_t = signal<void()>;
  using keydown_kp_memmultiply_repeat_slot_t
    = keydown_kp_memmultiply_repeat_signal_t::slot_type;
  using keydown_kp_memdivide_repeat_signal_t = signal<void()>;
  using keydown_kp_memdivide_repeat_slot_t
    = keydown_kp_memdivide_repeat_signal_t::slot_type;
  using keydown_kp_plusminus_repeat_signal_t = signal<void()>;
  using keydown_kp_plusminus_repeat_slot_t
    = keydown_kp_plusminus_repeat_signal_t::slot_type;
  using keydown_kp_clear_repeat_signal_t = signal<void()>;
  using keydown_kp_clear_repeat_slot_t
    = keydown_kp_clear_repeat_signal_t::slot_type;
  using keydown_kp_clearentry_repeat_signal_t = signal<void()>;
  using keydown_kp_clearentry_repeat_slot_t
    = keydown_kp_clearentry_repeat_signal_t::slot_type;
  using keydown_kp_binary_repeat_signal_t = signal<void()>;
  using keydown_kp_binary_repeat_slot_t
    = keydown_kp_binary_repeat_signal_t::slot_type;
  using keydown_kp_octal_repeat_signal_t = signal<void()>;
  using keydown_kp_octal_repeat_slot_t
    = keydown_kp_octal_repeat_signal_t::slot_type;
  using keydown_kp_decimal_repeat_signal_t = signal<void()>;
  using keydown_kp_decimal_repeat_slot_t
    = keydown_kp_decimal_repeat_signal_t::slot_type;
  using keydown_kp_hexadecimal_repeat_signal_t = signal<void()>;
  using keydown_kp_hexadecimal_repeat_slot_t
    = keydown_kp_hexadecimal_repeat_signal_t::slot_type;
  using keydown_lctrl_repeat_signal_t = signal<void()>;
  using keydown_lctrl_repeat_slot_t = keydown_lctrl_repeat_signal_t::slot_type;
  using keydown_lshift_repeat_signal_t = signal<void()>;
  using keydown_lshift_repeat_slot_t
    = keydown_lshift_repeat_signal_t::slot_type;
  using keydown_lalt_repeat_signal_t = signal<void()>;
  using keydown_lalt_repeat_slot_t = keydown_lalt_repeat_signal_t::slot_type;
  using keydown_lgui_repeat_signal_t = signal<void()>;
  using keydown_lgui_repeat_slot_t = keydown_lgui_repeat_signal_t::slot_type;
  using keydown_rctrl_repeat_signal_t = signal<void()>;
  using keydown_rctrl_repeat_slot_t = keydown_rctrl_repeat_signal_t::slot_type;
  using keydown_rshift_repeat_signal_t = signal<void()>;
  using keydown_rshift_repeat_slot_t
    = keydown_rshift_repeat_signal_t::slot_type;
  using keydown_ralt_repeat_signal_t = signal<void()>;
  using keydown_ralt_repeat_slot_t = keydown_ralt_repeat_signal_t::slot_type;
  using keydown_rgui_repeat_signal_t = signal<void()>;
  using keydown_rgui_repeat_slot_t = keydown_rgui_repeat_signal_t::slot_type;
  using keydown_mode_repeat_signal_t = signal<void()>;
  using keydown_mode_repeat_slot_t = keydown_mode_repeat_signal_t::slot_type;
  using keydown_audionext_repeat_signal_t = signal<void()>;
  using keydown_audionext_repeat_slot_t
    = keydown_audionext_repeat_signal_t::slot_type;
  using keydown_audioprev_repeat_signal_t = signal<void()>;
  using keydown_audioprev_repeat_slot_t
    = keydown_audioprev_repeat_signal_t::slot_type;
  using keydown_audiostop_repeat_signal_t = signal<void()>;
  using keydown_audiostop_repeat_slot_t
    = keydown_audiostop_repeat_signal_t::slot_type;
  using keydown_audioplay_repeat_signal_t = signal<void()>;
  using keydown_audioplay_repeat_slot_t
    = keydown_audioplay_repeat_signal_t::slot_type;
  using keydown_audiomute_repeat_signal_t = signal<void()>;
  using keydown_audiomute_repeat_slot_t
    = keydown_audiomute_repeat_signal_t::slot_type;
  using keydown_mediaselect_repeat_signal_t = signal<void()>;
  using keydown_mediaselect_repeat_slot_t
    = keydown_mediaselect_repeat_signal_t::slot_type;
  using keydown_www_repeat_signal_t = signal<void()>;
  using keydown_www_repeat_slot_t = keydown_www_repeat_signal_t::slot_type;
  using keydown_mail_repeat_signal_t = signal<void()>;
  using keydown_mail_repeat_slot_t = keydown_mail_repeat_signal_t::slot_type;
  using keydown_calculator_repeat_signal_t = signal<void()>;
  using keydown_calculator_repeat_slot_t
    = keydown_calculator_repeat_signal_t::slot_type;
  using keydown_computer_repeat_signal_t = signal<void()>;
  using keydown_computer_repeat_slot_t
    = keydown_computer_repeat_signal_t::slot_type;
  using keydown_ac_search_repeat_signal_t = signal<void()>;
  using keydown_ac_search_repeat_slot_t
    = keydown_ac_search_repeat_signal_t::slot_type;
  using keydown_ac_home_repeat_signal_t = signal<void()>;
  using keydown_ac_home_repeat_slot_t
    = keydown_ac_home_repeat_signal_t::slot_type;
  using keydown_ac_back_repeat_signal_t = signal<void()>;
  using keydown_ac_back_repeat_slot_t
    = keydown_ac_back_repeat_signal_t::slot_type;
  using keydown_ac_forward_repeat_signal_t = signal<void()>;
  using keydown_ac_forward_repeat_slot_t
    = keydown_ac_forward_repeat_signal_t::slot_type;
  using keydown_ac_stop_repeat_signal_t = signal<void()>;
  using keydown_ac_stop_repeat_slot_t
    = keydown_ac_stop_repeat_signal_t::slot_type;
  using keydown_ac_refresh_repeat_signal_t = signal<void()>;
  using keydown_ac_refresh_repeat_slot_t
    = keydown_ac_refresh_repeat_signal_t::slot_type;
  using keydown_ac_bookmarks_repeat_signal_t = signal<void()>;
  using keydown_ac_bookmarks_repeat_slot_t
    = keydown_ac_bookmarks_repeat_signal_t::slot_type;
  using keydown_brightnessdown_repeat_signal_t = signal<void()>;
  using keydown_brightnessdown_repeat_slot_t
    = keydown_brightnessdown_repeat_signal_t::slot_type;
  using keydown_brightnessup_repeat_signal_t = signal<void()>;
  using keydown_brightnessup_repeat_slot_t
    = keydown_brightnessup_repeat_signal_t::slot_type;
  using keydown_displayswitch_repeat_signal_t = signal<void()>;
  using keydown_displayswitch_repeat_slot_t
    = keydown_displayswitch_repeat_signal_t::slot_type;
  using keydown_kbdillumtoggle_repeat_signal_t = signal<void()>;
  using keydown_kbdillumtoggle_repeat_slot_t
    = keydown_kbdillumtoggle_repeat_signal_t::slot_type;
  using keydown_kbdillumdown_repeat_signal_t = signal<void()>;
  using keydown_kbdillumdown_repeat_slot_t
    = keydown_kbdillumdown_repeat_signal_t::slot_type;
  using keydown_kbdillumup_repeat_signal_t = signal<void()>;
  using keydown_kbdillumup_repeat_slot_t
    = keydown_kbdillumup_repeat_signal_t::slot_type;
  using keydown_eject_repeat_signal_t = signal<void()>;
  using keydown_eject_repeat_slot_t = keydown_eject_repeat_signal_t::slot_type;
  using keydown_sleep_repeat_signal_t = signal<void()>;
  using keydown_sleep_repeat_slot_t = keydown_sleep_repeat_signal_t::slot_type;
  using keydown_unknown_nonrepeat_signal_t = signal<void()>;
  using keydown_unknown_nonrepeat_slot_t
    = keydown_unknown_nonrepeat_signal_t::slot_type;
  using keydown_backspace_nonrepeat_signal_t = signal<void()>;
  using keydown_backspace_nonrepeat_slot_t
    = keydown_backspace_nonrepeat_signal_t::slot_type;
  using keydown_tab_nonrepeat_signal_t = signal<void()>;
  using keydown_tab_nonrepeat_slot_t
    = keydown_tab_nonrepeat_signal_t::slot_type;
  using keydown_return_nonrepeat_signal_t = signal<void()>;
  using keydown_return_nonrepeat_slot_t
    = keydown_return_nonrepeat_signal_t::slot_type;
  using keydown_escape_nonrepeat_signal_t = signal<void()>;
  using keydown_escape_nonrepeat_slot_t
    = keydown_escape_nonrepeat_signal_t::slot_type;
  using keydown_space_nonrepeat_signal_t = signal<void()>;
  using keydown_space_nonrepeat_slot_t
    = keydown_space_nonrepeat_signal_t::slot_type;
  using keydown_exclaim_nonrepeat_signal_t = signal<void()>;
  using keydown_exclaim_nonrepeat_slot_t
    = keydown_exclaim_nonrepeat_signal_t::slot_type;
  using keydown_quotedbl_nonrepeat_signal_t = signal<void()>;
  using keydown_quotedbl_nonrepeat_slot_t
    = keydown_quotedbl_nonrepeat_signal_t::slot_type;
  using keydown_hash_nonrepeat_signal_t = signal<void()>;
  using keydown_hash_nonrepeat_slot_t
    = keydown_hash_nonrepeat_signal_t::slot_type;
  using keydown_dollar_nonrepeat_signal_t = signal<void()>;
  using keydown_dollar_nonrepeat_slot_t
    = keydown_dollar_nonrepeat_signal_t::slot_type;
  using keydown_percent_nonrepeat_signal_t = signal<void()>;
  using keydown_percent_nonrepeat_slot_t
    = keydown_percent_nonrepeat_signal_t::slot_type;
  using keydown_ampersand_nonrepeat_signal_t = signal<void()>;
  using keydown_ampersand_nonrepeat_slot_t
    = keydown_ampersand_nonrepeat_signal_t::slot_type;
  using keydown_quote_nonrepeat_signal_t = signal<void()>;
  using keydown_quote_nonrepeat_slot_t
    = keydown_quote_nonrepeat_signal_t::slot_type;
  using keydown_leftparen_nonrepeat_signal_t = signal<void()>;
  using keydown_leftparen_nonrepeat_slot_t
    = keydown_leftparen_nonrepeat_signal_t::slot_type;
  using keydown_rightparen_nonrepeat_signal_t = signal<void()>;
  using keydown_rightparen_nonrepeat_slot_t
    = keydown_rightparen_nonrepeat_signal_t::slot_type;
  using keydown_asterisk_nonrepeat_signal_t = signal<void()>;
  using keydown_asterisk_nonrepeat_slot_t
    = keydown_asterisk_nonrepeat_signal_t::slot_type;
  using keydown_plus_nonrepeat_signal_t = signal<void()>;
  using keydown_plus_nonrepeat_slot_t
    = keydown_plus_nonrepeat_signal_t::slot_type;
  using keydown_comma_nonrepeat_signal_t = signal<void()>;
  using keydown_comma_nonrepeat_slot_t
    = keydown_comma_nonrepeat_signal_t::slot_type;
  using keydown_minus_nonrepeat_signal_t = signal<void()>;
  using keydown_minus_nonrepeat_slot_t
    = keydown_minus_nonrepeat_signal_t::slot_type;
  using keydown_period_nonrepeat_signal_t = signal<void()>;
  using keydown_period_nonrepeat_slot_t
    = keydown_period_nonrepeat_signal_t::slot_type;
  using keydown_slash_nonrepeat_signal_t = signal<void()>;
  using keydown_slash_nonrepeat_slot_t
    = keydown_slash_nonrepeat_signal_t::slot_type;
  using keydown_0_nonrepeat_signal_t = signal<void()>;
  using keydown_0_nonrepeat_slot_t = keydown_0_nonrepeat_signal_t::slot_type;
  using keydown_1_nonrepeat_signal_t = signal<void()>;
  using keydown_1_nonrepeat_slot_t = keydown_1_nonrepeat_signal_t::slot_type;
  using keydown_2_nonrepeat_signal_t = signal<void()>;
  using keydown_2_nonrepeat_slot_t = keydown_2_nonrepeat_signal_t::slot_type;
  using keydown_3_nonrepeat_signal_t = signal<void()>;
  using keydown_3_nonrepeat_slot_t = keydown_3_nonrepeat_signal_t::slot_type;
  using keydown_4_nonrepeat_signal_t = signal<void()>;
  using keydown_4_nonrepeat_slot_t = keydown_4_nonrepeat_signal_t::slot_type;
  using keydown_5_nonrepeat_signal_t = signal<void()>;
  using keydown_5_nonrepeat_slot_t = keydown_5_nonrepeat_signal_t::slot_type;
  using keydown_6_nonrepeat_signal_t = signal<void()>;
  using keydown_6_nonrepeat_slot_t = keydown_6_nonrepeat_signal_t::slot_type;
  using keydown_7_nonrepeat_signal_t = signal<void()>;
  using keydown_7_nonrepeat_slot_t = keydown_7_nonrepeat_signal_t::slot_type;
  using keydown_8_nonrepeat_signal_t = signal<void()>;
  using keydown_8_nonrepeat_slot_t = keydown_8_nonrepeat_signal_t::slot_type;
  using keydown_9_nonrepeat_signal_t = signal<void()>;
  using keydown_9_nonrepeat_slot_t = keydown_9_nonrepeat_signal_t::slot_type;
  using keydown_colon_nonrepeat_signal_t = signal<void()>;
  using keydown_colon_nonrepeat_slot_t
    = keydown_colon_nonrepeat_signal_t::slot_type;
  using keydown_semicolon_nonrepeat_signal_t = signal<void()>;
  using keydown_semicolon_nonrepeat_slot_t
    = keydown_semicolon_nonrepeat_signal_t::slot_type;
  using keydown_less_nonrepeat_signal_t = signal<void()>;
  using keydown_less_nonrepeat_slot_t
    = keydown_less_nonrepeat_signal_t::slot_type;
  using keydown_equals_nonrepeat_signal_t = signal<void()>;
  using keydown_equals_nonrepeat_slot_t
    = keydown_equals_nonrepeat_signal_t::slot_type;
  using keydown_greater_nonrepeat_signal_t = signal<void()>;
  using keydown_greater_nonrepeat_slot_t
    = keydown_greater_nonrepeat_signal_t::slot_type;
  using keydown_question_nonrepeat_signal_t = signal<void()>;
  using keydown_question_nonrepeat_slot_t
    = keydown_question_nonrepeat_signal_t::slot_type;
  using keydown_at_nonrepeat_signal_t = signal<void()>;
  using keydown_at_nonrepeat_slot_t = keydown_at_nonrepeat_signal_t::slot_type;
  using keydown_leftbracket_nonrepeat_signal_t = signal<void()>;
  using keydown_leftbracket_nonrepeat_slot_t
    = keydown_leftbracket_nonrepeat_signal_t::slot_type;
  using keydown_backslash_nonrepeat_signal_t = signal<void()>;
  using keydown_backslash_nonrepeat_slot_t
    = keydown_backslash_nonrepeat_signal_t::slot_type;
  using keydown_rightbracket_nonrepeat_signal_t = signal<void()>;
  using keydown_rightbracket_nonrepeat_slot_t
    = keydown_rightbracket_nonrepeat_signal_t::slot_type;
  using keydown_caret_nonrepeat_signal_t = signal<void()>;
  using keydown_caret_nonrepeat_slot_t
    = keydown_caret_nonrepeat_signal_t::slot_type;
  using keydown_underscore_nonrepeat_signal_t = signal<void()>;
  using keydown_underscore_nonrepeat_slot_t
    = keydown_underscore_nonrepeat_signal_t::slot_type;
  using keydown_backquote_nonrepeat_signal_t = signal<void()>;
  using keydown_backquote_nonrepeat_slot_t
    = keydown_backquote_nonrepeat_signal_t::slot_type;
  using keydown_a_nonrepeat_signal_t = signal<void()>;
  using keydown_a_nonrepeat_slot_t = keydown_a_nonrepeat_signal_t::slot_type;
  using keydown_b_nonrepeat_signal_t = signal<void()>;
  using keydown_b_nonrepeat_slot_t = keydown_b_nonrepeat_signal_t::slot_type;
  using keydown_c_nonrepeat_signal_t = signal<void()>;
  using keydown_c_nonrepeat_slot_t = keydown_c_nonrepeat_signal_t::slot_type;
  using keydown_d_nonrepeat_signal_t = signal<void()>;
  using keydown_d_nonrepeat_slot_t = keydown_d_nonrepeat_signal_t::slot_type;
  using keydown_e_nonrepeat_signal_t = signal<void()>;
  using keydown_e_nonrepeat_slot_t = keydown_e_nonrepeat_signal_t::slot_type;
  using keydown_f_nonrepeat_signal_t = signal<void()>;
  using keydown_f_nonrepeat_slot_t = keydown_f_nonrepeat_signal_t::slot_type;
  using keydown_g_nonrepeat_signal_t = signal<void()>;
  using keydown_g_nonrepeat_slot_t = keydown_g_nonrepeat_signal_t::slot_type;
  using keydown_h_nonrepeat_signal_t = signal<void()>;
  using keydown_h_nonrepeat_slot_t = keydown_h_nonrepeat_signal_t::slot_type;
  using keydown_i_nonrepeat_signal_t = signal<void()>;
  using keydown_i_nonrepeat_slot_t = keydown_i_nonrepeat_signal_t::slot_type;
  using keydown_j_nonrepeat_signal_t = signal<void()>;
  using keydown_j_nonrepeat_slot_t = keydown_j_nonrepeat_signal_t::slot_type;
  using keydown_k_nonrepeat_signal_t = signal<void()>;
  using keydown_k_nonrepeat_slot_t = keydown_k_nonrepeat_signal_t::slot_type;
  using keydown_l_nonrepeat_signal_t = signal<void()>;
  using keydown_l_nonrepeat_slot_t = keydown_l_nonrepeat_signal_t::slot_type;
  using keydown_m_nonrepeat_signal_t = signal<void()>;
  using keydown_m_nonrepeat_slot_t = keydown_m_nonrepeat_signal_t::slot_type;
  using keydown_n_nonrepeat_signal_t = signal<void()>;
  using keydown_n_nonrepeat_slot_t = keydown_n_nonrepeat_signal_t::slot_type;
  using keydown_o_nonrepeat_signal_t = signal<void()>;
  using keydown_o_nonrepeat_slot_t = keydown_o_nonrepeat_signal_t::slot_type;
  using keydown_p_nonrepeat_signal_t = signal<void()>;
  using keydown_p_nonrepeat_slot_t = keydown_p_nonrepeat_signal_t::slot_type;
  using keydown_q_nonrepeat_signal_t = signal<void()>;
  using keydown_q_nonrepeat_slot_t = keydown_q_nonrepeat_signal_t::slot_type;
  using keydown_r_nonrepeat_signal_t = signal<void()>;
  using keydown_r_nonrepeat_slot_t = keydown_r_nonrepeat_signal_t::slot_type;
  using keydown_s_nonrepeat_signal_t = signal<void()>;
  using keydown_s_nonrepeat_slot_t = keydown_s_nonrepeat_signal_t::slot_type;
  using keydown_t_nonrepeat_signal_t = signal<void()>;
  using keydown_t_nonrepeat_slot_t = keydown_t_nonrepeat_signal_t::slot_type;
  using keydown_u_nonrepeat_signal_t = signal<void()>;
  using keydown_u_nonrepeat_slot_t = keydown_u_nonrepeat_signal_t::slot_type;
  using keydown_v_nonrepeat_signal_t = signal<void()>;
  using keydown_v_nonrepeat_slot_t = keydown_v_nonrepeat_signal_t::slot_type;
  using keydown_w_nonrepeat_signal_t = signal<void()>;
  using keydown_w_nonrepeat_slot_t = keydown_w_nonrepeat_signal_t::slot_type;
  using keydown_x_nonrepeat_signal_t = signal<void()>;
  using keydown_x_nonrepeat_slot_t = keydown_x_nonrepeat_signal_t::slot_type;
  using keydown_y_nonrepeat_signal_t = signal<void()>;
  using keydown_y_nonrepeat_slot_t = keydown_y_nonrepeat_signal_t::slot_type;
  using keydown_z_nonrepeat_signal_t = signal<void()>;
  using keydown_z_nonrepeat_slot_t = keydown_z_nonrepeat_signal_t::slot_type;
  using keydown_delete_nonrepeat_signal_t = signal<void()>;
  using keydown_delete_nonrepeat_slot_t
    = keydown_delete_nonrepeat_signal_t::slot_type;
  using keydown_capslock_nonrepeat_signal_t = signal<void()>;
  using keydown_capslock_nonrepeat_slot_t
    = keydown_capslock_nonrepeat_signal_t::slot_type;
  using keydown_f1_nonrepeat_signal_t = signal<void()>;
  using keydown_f1_nonrepeat_slot_t = keydown_f1_nonrepeat_signal_t::slot_type;
  using keydown_f2_nonrepeat_signal_t = signal<void()>;
  using keydown_f2_nonrepeat_slot_t = keydown_f2_nonrepeat_signal_t::slot_type;
  using keydown_f3_nonrepeat_signal_t = signal<void()>;
  using keydown_f3_nonrepeat_slot_t = keydown_f3_nonrepeat_signal_t::slot_type;
  using keydown_f4_nonrepeat_signal_t = signal<void()>;
  using keydown_f4_nonrepeat_slot_t = keydown_f4_nonrepeat_signal_t::slot_type;
  using keydown_f5_nonrepeat_signal_t = signal<void()>;
  using keydown_f5_nonrepeat_slot_t = keydown_f5_nonrepeat_signal_t::slot_type;
  using keydown_f6_nonrepeat_signal_t = signal<void()>;
  using keydown_f6_nonrepeat_slot_t = keydown_f6_nonrepeat_signal_t::slot_type;
  using keydown_f7_nonrepeat_signal_t = signal<void()>;
  using keydown_f7_nonrepeat_slot_t = keydown_f7_nonrepeat_signal_t::slot_type;
  using keydown_f8_nonrepeat_signal_t = signal<void()>;
  using keydown_f8_nonrepeat_slot_t = keydown_f8_nonrepeat_signal_t::slot_type;
  using keydown_f9_nonrepeat_signal_t = signal<void()>;
  using keydown_f9_nonrepeat_slot_t = keydown_f9_nonrepeat_signal_t::slot_type;
  using keydown_f10_nonrepeat_signal_t = signal<void()>;
  using keydown_f10_nonrepeat_slot_t
    = keydown_f10_nonrepeat_signal_t::slot_type;
  using keydown_f11_nonrepeat_signal_t = signal<void()>;
  using keydown_f11_nonrepeat_slot_t
    = keydown_f11_nonrepeat_signal_t::slot_type;
  using keydown_f12_nonrepeat_signal_t = signal<void()>;
  using keydown_f12_nonrepeat_slot_t
    = keydown_f12_nonrepeat_signal_t::slot_type;
  using keydown_printscreen_nonrepeat_signal_t = signal<void()>;
  using keydown_printscreen_nonrepeat_slot_t
    = keydown_printscreen_nonrepeat_signal_t::slot_type;
  using keydown_scrolllock_nonrepeat_signal_t = signal<void()>;
  using keydown_scrolllock_nonrepeat_slot_t
    = keydown_scrolllock_nonrepeat_signal_t::slot_type;
  using keydown_pause_nonrepeat_signal_t = signal<void()>;
  using keydown_pause_nonrepeat_slot_t
    = keydown_pause_nonrepeat_signal_t::slot_type;
  using keydown_insert_nonrepeat_signal_t = signal<void()>;
  using keydown_insert_nonrepeat_slot_t
    = keydown_insert_nonrepeat_signal_t::slot_type;
  using keydown_home_nonrepeat_signal_t = signal<void()>;
  using keydown_home_nonrepeat_slot_t
    = keydown_home_nonrepeat_signal_t::slot_type;
  using keydown_pageup_nonrepeat_signal_t = signal<void()>;
  using keydown_pageup_nonrepeat_slot_t
    = keydown_pageup_nonrepeat_signal_t::slot_type;
  using keydown_end_nonrepeat_signal_t = signal<void()>;
  using keydown_end_nonrepeat_slot_t
    = keydown_end_nonrepeat_signal_t::slot_type;
  using keydown_pagedown_nonrepeat_signal_t = signal<void()>;
  using keydown_pagedown_nonrepeat_slot_t
    = keydown_pagedown_nonrepeat_signal_t::slot_type;
  using keydown_right_nonrepeat_signal_t = signal<void()>;
  using keydown_right_nonrepeat_slot_t
    = keydown_right_nonrepeat_signal_t::slot_type;
  using keydown_left_nonrepeat_signal_t = signal<void()>;
  using keydown_left_nonrepeat_slot_t
    = keydown_left_nonrepeat_signal_t::slot_type;
  using keydown_down_nonrepeat_signal_t = signal<void()>;
  using keydown_down_nonrepeat_slot_t
    = keydown_down_nonrepeat_signal_t::slot_type;
  using keydown_up_nonrepeat_signal_t = signal<void()>;
  using keydown_up_nonrepeat_slot_t = keydown_up_nonrepeat_signal_t::slot_type;
  using keydown_numlockclear_nonrepeat_signal_t = signal<void()>;
  using keydown_numlockclear_nonrepeat_slot_t
    = keydown_numlockclear_nonrepeat_signal_t::slot_type;
  using keydown_kp_divide_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_divide_nonrepeat_slot_t
    = keydown_kp_divide_nonrepeat_signal_t::slot_type;
  using keydown_kp_multiply_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_multiply_nonrepeat_slot_t
    = keydown_kp_multiply_nonrepeat_signal_t::slot_type;
  using keydown_kp_minus_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_minus_nonrepeat_slot_t
    = keydown_kp_minus_nonrepeat_signal_t::slot_type;
  using keydown_kp_plus_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_plus_nonrepeat_slot_t
    = keydown_kp_plus_nonrepeat_signal_t::slot_type;
  using keydown_kp_enter_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_enter_nonrepeat_slot_t
    = keydown_kp_enter_nonrepeat_signal_t::slot_type;
  using keydown_kp_1_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_1_nonrepeat_slot_t
    = keydown_kp_1_nonrepeat_signal_t::slot_type;
  using keydown_kp_2_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_2_nonrepeat_slot_t
    = keydown_kp_2_nonrepeat_signal_t::slot_type;
  using keydown_kp_3_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_3_nonrepeat_slot_t
    = keydown_kp_3_nonrepeat_signal_t::slot_type;
  using keydown_kp_4_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_4_nonrepeat_slot_t
    = keydown_kp_4_nonrepeat_signal_t::slot_type;
  using keydown_kp_5_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_5_nonrepeat_slot_t
    = keydown_kp_5_nonrepeat_signal_t::slot_type;
  using keydown_kp_6_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_6_nonrepeat_slot_t
    = keydown_kp_6_nonrepeat_signal_t::slot_type;
  using keydown_kp_7_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_7_nonrepeat_slot_t
    = keydown_kp_7_nonrepeat_signal_t::slot_type;
  using keydown_kp_8_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_8_nonrepeat_slot_t
    = keydown_kp_8_nonrepeat_signal_t::slot_type;
  using keydown_kp_9_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_9_nonrepeat_slot_t
    = keydown_kp_9_nonrepeat_signal_t::slot_type;
  using keydown_kp_0_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_0_nonrepeat_slot_t
    = keydown_kp_0_nonrepeat_signal_t::slot_type;
  using keydown_kp_period_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_period_nonrepeat_slot_t
    = keydown_kp_period_nonrepeat_signal_t::slot_type;
  using keydown_application_nonrepeat_signal_t = signal<void()>;
  using keydown_application_nonrepeat_slot_t
    = keydown_application_nonrepeat_signal_t::slot_type;
  using keydown_power_nonrepeat_signal_t = signal<void()>;
  using keydown_power_nonrepeat_slot_t
    = keydown_power_nonrepeat_signal_t::slot_type;
  using keydown_kp_equals_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_equals_nonrepeat_slot_t
    = keydown_kp_equals_nonrepeat_signal_t::slot_type;
  using keydown_f13_nonrepeat_signal_t = signal<void()>;
  using keydown_f13_nonrepeat_slot_t
    = keydown_f13_nonrepeat_signal_t::slot_type;
  using keydown_f14_nonrepeat_signal_t = signal<void()>;
  using keydown_f14_nonrepeat_slot_t
    = keydown_f14_nonrepeat_signal_t::slot_type;
  using keydown_f15_nonrepeat_signal_t = signal<void()>;
  using keydown_f15_nonrepeat_slot_t
    = keydown_f15_nonrepeat_signal_t::slot_type;
  using keydown_f16_nonrepeat_signal_t = signal<void()>;
  using keydown_f16_nonrepeat_slot_t
    = keydown_f16_nonrepeat_signal_t::slot_type;
  using keydown_f17_nonrepeat_signal_t = signal<void()>;
  using keydown_f17_nonrepeat_slot_t
    = keydown_f17_nonrepeat_signal_t::slot_type;
  using keydown_f18_nonrepeat_signal_t = signal<void()>;
  using keydown_f18_nonrepeat_slot_t
    = keydown_f18_nonrepeat_signal_t::slot_type;
  using keydown_f19_nonrepeat_signal_t = signal<void()>;
  using keydown_f19_nonrepeat_slot_t
    = keydown_f19_nonrepeat_signal_t::slot_type;
  using keydown_f20_nonrepeat_signal_t = signal<void()>;
  using keydown_f20_nonrepeat_slot_t
    = keydown_f20_nonrepeat_signal_t::slot_type;
  using keydown_f21_nonrepeat_signal_t = signal<void()>;
  using keydown_f21_nonrepeat_slot_t
    = keydown_f21_nonrepeat_signal_t::slot_type;
  using keydown_f22_nonrepeat_signal_t = signal<void()>;
  using keydown_f22_nonrepeat_slot_t
    = keydown_f22_nonrepeat_signal_t::slot_type;
  using keydown_f23_nonrepeat_signal_t = signal<void()>;
  using keydown_f23_nonrepeat_slot_t
    = keydown_f23_nonrepeat_signal_t::slot_type;
  using keydown_f24_nonrepeat_signal_t = signal<void()>;
  using keydown_f24_nonrepeat_slot_t
    = keydown_f24_nonrepeat_signal_t::slot_type;
  using keydown_execute_nonrepeat_signal_t = signal<void()>;
  using keydown_execute_nonrepeat_slot_t
    = keydown_execute_nonrepeat_signal_t::slot_type;
  using keydown_help_nonrepeat_signal_t = signal<void()>;
  using keydown_help_nonrepeat_slot_t
    = keydown_help_nonrepeat_signal_t::slot_type;
  using keydown_menu_nonrepeat_signal_t = signal<void()>;
  using keydown_menu_nonrepeat_slot_t
    = keydown_menu_nonrepeat_signal_t::slot_type;
  using keydown_select_nonrepeat_signal_t = signal<void()>;
  using keydown_select_nonrepeat_slot_t
    = keydown_select_nonrepeat_signal_t::slot_type;
  using keydown_stop_nonrepeat_signal_t = signal<void()>;
  using keydown_stop_nonrepeat_slot_t
    = keydown_stop_nonrepeat_signal_t::slot_type;
  using keydown_again_nonrepeat_signal_t = signal<void()>;
  using keydown_again_nonrepeat_slot_t
    = keydown_again_nonrepeat_signal_t::slot_type;
  using keydown_undo_nonrepeat_signal_t = signal<void()>;
  using keydown_undo_nonrepeat_slot_t
    = keydown_undo_nonrepeat_signal_t::slot_type;
  using keydown_cut_nonrepeat_signal_t = signal<void()>;
  using keydown_cut_nonrepeat_slot_t
    = keydown_cut_nonrepeat_signal_t::slot_type;
  using keydown_copy_nonrepeat_signal_t = signal<void()>;
  using keydown_copy_nonrepeat_slot_t
    = keydown_copy_nonrepeat_signal_t::slot_type;
  using keydown_paste_nonrepeat_signal_t = signal<void()>;
  using keydown_paste_nonrepeat_slot_t
    = keydown_paste_nonrepeat_signal_t::slot_type;
  using keydown_find_nonrepeat_signal_t = signal<void()>;
  using keydown_find_nonrepeat_slot_t
    = keydown_find_nonrepeat_signal_t::slot_type;
  using keydown_mute_nonrepeat_signal_t = signal<void()>;
  using keydown_mute_nonrepeat_slot_t
    = keydown_mute_nonrepeat_signal_t::slot_type;
  using keydown_volumeup_nonrepeat_signal_t = signal<void()>;
  using keydown_volumeup_nonrepeat_slot_t
    = keydown_volumeup_nonrepeat_signal_t::slot_type;
  using keydown_volumedown_nonrepeat_signal_t = signal<void()>;
  using keydown_volumedown_nonrepeat_slot_t
    = keydown_volumedown_nonrepeat_signal_t::slot_type;
  using keydown_kp_comma_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_comma_nonrepeat_slot_t
    = keydown_kp_comma_nonrepeat_signal_t::slot_type;
  using keydown_kp_equalsas400_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_equalsas400_nonrepeat_slot_t
    = keydown_kp_equalsas400_nonrepeat_signal_t::slot_type;
  using keydown_alterase_nonrepeat_signal_t = signal<void()>;
  using keydown_alterase_nonrepeat_slot_t
    = keydown_alterase_nonrepeat_signal_t::slot_type;
  using keydown_sysreq_nonrepeat_signal_t = signal<void()>;
  using keydown_sysreq_nonrepeat_slot_t
    = keydown_sysreq_nonrepeat_signal_t::slot_type;
  using keydown_cancel_nonrepeat_signal_t = signal<void()>;
  using keydown_cancel_nonrepeat_slot_t
    = keydown_cancel_nonrepeat_signal_t::slot_type;
  using keydown_clear_nonrepeat_signal_t = signal<void()>;
  using keydown_clear_nonrepeat_slot_t
    = keydown_clear_nonrepeat_signal_t::slot_type;
  using keydown_prior_nonrepeat_signal_t = signal<void()>;
  using keydown_prior_nonrepeat_slot_t
    = keydown_prior_nonrepeat_signal_t::slot_type;
  using keydown_return2_nonrepeat_signal_t = signal<void()>;
  using keydown_return2_nonrepeat_slot_t
    = keydown_return2_nonrepeat_signal_t::slot_type;
  using keydown_separator_nonrepeat_signal_t = signal<void()>;
  using keydown_separator_nonrepeat_slot_t
    = keydown_separator_nonrepeat_signal_t::slot_type;
  using keydown_out_nonrepeat_signal_t = signal<void()>;
  using keydown_out_nonrepeat_slot_t
    = keydown_out_nonrepeat_signal_t::slot_type;
  using keydown_oper_nonrepeat_signal_t = signal<void()>;
  using keydown_oper_nonrepeat_slot_t
    = keydown_oper_nonrepeat_signal_t::slot_type;
  using keydown_clearagain_nonrepeat_signal_t = signal<void()>;
  using keydown_clearagain_nonrepeat_slot_t
    = keydown_clearagain_nonrepeat_signal_t::slot_type;
  using keydown_crsel_nonrepeat_signal_t = signal<void()>;
  using keydown_crsel_nonrepeat_slot_t
    = keydown_crsel_nonrepeat_signal_t::slot_type;
  using keydown_exsel_nonrepeat_signal_t = signal<void()>;
  using keydown_exsel_nonrepeat_slot_t
    = keydown_exsel_nonrepeat_signal_t::slot_type;
  using keydown_kp_00_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_00_nonrepeat_slot_t
    = keydown_kp_00_nonrepeat_signal_t::slot_type;
  using keydown_kp_000_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_000_nonrepeat_slot_t
    = keydown_kp_000_nonrepeat_signal_t::slot_type;
  using keydown_thousandsseparator_nonrepeat_signal_t = signal<void()>;
  using keydown_thousandsseparator_nonrepeat_slot_t
    = keydown_thousandsseparator_nonrepeat_signal_t::slot_type;
  using keydown_decimalseparator_nonrepeat_signal_t = signal<void()>;
  using keydown_decimalseparator_nonrepeat_slot_t
    = keydown_decimalseparator_nonrepeat_signal_t::slot_type;
  using keydown_currencyunit_nonrepeat_signal_t = signal<void()>;
  using keydown_currencyunit_nonrepeat_slot_t
    = keydown_currencyunit_nonrepeat_signal_t::slot_type;
  using keydown_currencysubunit_nonrepeat_signal_t = signal<void()>;
  using keydown_currencysubunit_nonrepeat_slot_t
    = keydown_currencysubunit_nonrepeat_signal_t::slot_type;
  using keydown_kp_leftparen_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_leftparen_nonrepeat_slot_t
    = keydown_kp_leftparen_nonrepeat_signal_t::slot_type;
  using keydown_kp_rightparen_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_rightparen_nonrepeat_slot_t
    = keydown_kp_rightparen_nonrepeat_signal_t::slot_type;
  using keydown_kp_leftbrace_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_leftbrace_nonrepeat_slot_t
    = keydown_kp_leftbrace_nonrepeat_signal_t::slot_type;
  using keydown_kp_rightbrace_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_rightbrace_nonrepeat_slot_t
    = keydown_kp_rightbrace_nonrepeat_signal_t::slot_type;
  using keydown_kp_tab_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_tab_nonrepeat_slot_t
    = keydown_kp_tab_nonrepeat_signal_t::slot_type;
  using keydown_kp_backspace_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_backspace_nonrepeat_slot_t
    = keydown_kp_backspace_nonrepeat_signal_t::slot_type;
  using keydown_kp_a_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_a_nonrepeat_slot_t
    = keydown_kp_a_nonrepeat_signal_t::slot_type;
  using keydown_kp_b_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_b_nonrepeat_slot_t
    = keydown_kp_b_nonrepeat_signal_t::slot_type;
  using keydown_kp_c_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_c_nonrepeat_slot_t
    = keydown_kp_c_nonrepeat_signal_t::slot_type;
  using keydown_kp_d_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_d_nonrepeat_slot_t
    = keydown_kp_d_nonrepeat_signal_t::slot_type;
  using keydown_kp_e_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_e_nonrepeat_slot_t
    = keydown_kp_e_nonrepeat_signal_t::slot_type;
  using keydown_kp_f_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_f_nonrepeat_slot_t
    = keydown_kp_f_nonrepeat_signal_t::slot_type;
  using keydown_kp_xor_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_xor_nonrepeat_slot_t
    = keydown_kp_xor_nonrepeat_signal_t::slot_type;
  using keydown_kp_power_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_power_nonrepeat_slot_t
    = keydown_kp_power_nonrepeat_signal_t::slot_type;
  using keydown_kp_percent_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_percent_nonrepeat_slot_t
    = keydown_kp_percent_nonrepeat_signal_t::slot_type;
  using keydown_kp_less_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_less_nonrepeat_slot_t
    = keydown_kp_less_nonrepeat_signal_t::slot_type;
  using keydown_kp_greater_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_greater_nonrepeat_slot_t
    = keydown_kp_greater_nonrepeat_signal_t::slot_type;
  using keydown_kp_ampersand_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_ampersand_nonrepeat_slot_t
    = keydown_kp_ampersand_nonrepeat_signal_t::slot_type;
  using keydown_kp_dblampersand_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_dblampersand_nonrepeat_slot_t
    = keydown_kp_dblampersand_nonrepeat_signal_t::slot_type;
  using keydown_kp_verticalbar_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_verticalbar_nonrepeat_slot_t
    = keydown_kp_verticalbar_nonrepeat_signal_t::slot_type;
  using keydown_kp_dblverticalbar_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_dblverticalbar_nonrepeat_slot_t
    = keydown_kp_dblverticalbar_nonrepeat_signal_t::slot_type;
  using keydown_kp_colon_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_colon_nonrepeat_slot_t
    = keydown_kp_colon_nonrepeat_signal_t::slot_type;
  using keydown_kp_hash_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_hash_nonrepeat_slot_t
    = keydown_kp_hash_nonrepeat_signal_t::slot_type;
  using keydown_kp_space_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_space_nonrepeat_slot_t
    = keydown_kp_space_nonrepeat_signal_t::slot_type;
  using keydown_kp_at_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_at_nonrepeat_slot_t
    = keydown_kp_at_nonrepeat_signal_t::slot_type;
  using keydown_kp_exclam_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_exclam_nonrepeat_slot_t
    = keydown_kp_exclam_nonrepeat_signal_t::slot_type;
  using keydown_kp_memstore_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_memstore_nonrepeat_slot_t
    = keydown_kp_memstore_nonrepeat_signal_t::slot_type;
  using keydown_kp_memrecall_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_memrecall_nonrepeat_slot_t
    = keydown_kp_memrecall_nonrepeat_signal_t::slot_type;
  using keydown_kp_memclear_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_memclear_nonrepeat_slot_t
    = keydown_kp_memclear_nonrepeat_signal_t::slot_type;
  using keydown_kp_memadd_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_memadd_nonrepeat_slot_t
    = keydown_kp_memadd_nonrepeat_signal_t::slot_type;
  using keydown_kp_memsubtract_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_memsubtract_nonrepeat_slot_t
    = keydown_kp_memsubtract_nonrepeat_signal_t::slot_type;
  using keydown_kp_memmultiply_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_memmultiply_nonrepeat_slot_t
    = keydown_kp_memmultiply_nonrepeat_signal_t::slot_type;
  using keydown_kp_memdivide_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_memdivide_nonrepeat_slot_t
    = keydown_kp_memdivide_nonrepeat_signal_t::slot_type;
  using keydown_kp_plusminus_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_plusminus_nonrepeat_slot_t
    = keydown_kp_plusminus_nonrepeat_signal_t::slot_type;
  using keydown_kp_clear_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_clear_nonrepeat_slot_t
    = keydown_kp_clear_nonrepeat_signal_t::slot_type;
  using keydown_kp_clearentry_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_clearentry_nonrepeat_slot_t
    = keydown_kp_clearentry_nonrepeat_signal_t::slot_type;
  using keydown_kp_binary_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_binary_nonrepeat_slot_t
    = keydown_kp_binary_nonrepeat_signal_t::slot_type;
  using keydown_kp_octal_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_octal_nonrepeat_slot_t
    = keydown_kp_octal_nonrepeat_signal_t::slot_type;
  using keydown_kp_decimal_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_decimal_nonrepeat_slot_t
    = keydown_kp_decimal_nonrepeat_signal_t::slot_type;
  using keydown_kp_hexadecimal_nonrepeat_signal_t = signal<void()>;
  using keydown_kp_hexadecimal_nonrepeat_slot_t
    = keydown_kp_hexadecimal_nonrepeat_signal_t::slot_type;
  using keydown_lctrl_nonrepeat_signal_t = signal<void()>;
  using keydown_lctrl_nonrepeat_slot_t
    = keydown_lctrl_nonrepeat_signal_t::slot_type;
  using keydown_lshift_nonrepeat_signal_t = signal<void()>;
  using keydown_lshift_nonrepeat_slot_t
    = keydown_lshift_nonrepeat_signal_t::slot_type;
  using keydown_lalt_nonrepeat_signal_t = signal<void()>;
  using keydown_lalt_nonrepeat_slot_t
    = keydown_lalt_nonrepeat_signal_t::slot_type;
  using keydown_lgui_nonrepeat_signal_t = signal<void()>;
  using keydown_lgui_nonrepeat_slot_t
    = keydown_lgui_nonrepeat_signal_t::slot_type;
  using keydown_rctrl_nonrepeat_signal_t = signal<void()>;
  using keydown_rctrl_nonrepeat_slot_t
    = keydown_rctrl_nonrepeat_signal_t::slot_type;
  using keydown_rshift_nonrepeat_signal_t = signal<void()>;
  using keydown_rshift_nonrepeat_slot_t
    = keydown_rshift_nonrepeat_signal_t::slot_type;
  using keydown_ralt_nonrepeat_signal_t = signal<void()>;
  using keydown_ralt_nonrepeat_slot_t
    = keydown_ralt_nonrepeat_signal_t::slot_type;
  using keydown_rgui_nonrepeat_signal_t = signal<void()>;
  using keydown_rgui_nonrepeat_slot_t
    = keydown_rgui_nonrepeat_signal_t::slot_type;
  using keydown_mode_nonrepeat_signal_t = signal<void()>;
  using keydown_mode_nonrepeat_slot_t
    = keydown_mode_nonrepeat_signal_t::slot_type;
  using keydown_audionext_nonrepeat_signal_t = signal<void()>;
  using keydown_audionext_nonrepeat_slot_t
    = keydown_audionext_nonrepeat_signal_t::slot_type;
  using keydown_audioprev_nonrepeat_signal_t = signal<void()>;
  using keydown_audioprev_nonrepeat_slot_t
    = keydown_audioprev_nonrepeat_signal_t::slot_type;
  using keydown_audiostop_nonrepeat_signal_t = signal<void()>;
  using keydown_audiostop_nonrepeat_slot_t
    = keydown_audiostop_nonrepeat_signal_t::slot_type;
  using keydown_audioplay_nonrepeat_signal_t = signal<void()>;
  using keydown_audioplay_nonrepeat_slot_t
    = keydown_audioplay_nonrepeat_signal_t::slot_type;
  using keydown_audiomute_nonrepeat_signal_t = signal<void()>;
  using keydown_audiomute_nonrepeat_slot_t
    = keydown_audiomute_nonrepeat_signal_t::slot_type;
  using keydown_mediaselect_nonrepeat_signal_t = signal<void()>;
  using keydown_mediaselect_nonrepeat_slot_t
    = keydown_mediaselect_nonrepeat_signal_t::slot_type;
  using keydown_www_nonrepeat_signal_t = signal<void()>;
  using keydown_www_nonrepeat_slot_t
    = keydown_www_nonrepeat_signal_t::slot_type;
  using keydown_mail_nonrepeat_signal_t = signal<void()>;
  using keydown_mail_nonrepeat_slot_t
    = keydown_mail_nonrepeat_signal_t::slot_type;
  using keydown_calculator_nonrepeat_signal_t = signal<void()>;
  using keydown_calculator_nonrepeat_slot_t
    = keydown_calculator_nonrepeat_signal_t::slot_type;
  using keydown_computer_nonrepeat_signal_t = signal<void()>;
  using keydown_computer_nonrepeat_slot_t
    = keydown_computer_nonrepeat_signal_t::slot_type;
  using keydown_ac_search_nonrepeat_signal_t = signal<void()>;
  using keydown_ac_search_nonrepeat_slot_t
    = keydown_ac_search_nonrepeat_signal_t::slot_type;
  using keydown_ac_home_nonrepeat_signal_t = signal<void()>;
  using keydown_ac_home_nonrepeat_slot_t
    = keydown_ac_home_nonrepeat_signal_t::slot_type;
  using keydown_ac_back_nonrepeat_signal_t = signal<void()>;
  using keydown_ac_back_nonrepeat_slot_t
    = keydown_ac_back_nonrepeat_signal_t::slot_type;
  using keydown_ac_forward_nonrepeat_signal_t = signal<void()>;
  using keydown_ac_forward_nonrepeat_slot_t
    = keydown_ac_forward_nonrepeat_signal_t::slot_type;
  using keydown_ac_stop_nonrepeat_signal_t = signal<void()>;
  using keydown_ac_stop_nonrepeat_slot_t
    = keydown_ac_stop_nonrepeat_signal_t::slot_type;
  using keydown_ac_refresh_nonrepeat_signal_t = signal<void()>;
  using keydown_ac_refresh_nonrepeat_slot_t
    = keydown_ac_refresh_nonrepeat_signal_t::slot_type;
  using keydown_ac_bookmarks_nonrepeat_signal_t = signal<void()>;
  using keydown_ac_bookmarks_nonrepeat_slot_t
    = keydown_ac_bookmarks_nonrepeat_signal_t::slot_type;
  using keydown_brightnessdown_nonrepeat_signal_t = signal<void()>;
  using keydown_brightnessdown_nonrepeat_slot_t
    = keydown_brightnessdown_nonrepeat_signal_t::slot_type;
  using keydown_brightnessup_nonrepeat_signal_t = signal<void()>;
  using keydown_brightnessup_nonrepeat_slot_t
    = keydown_brightnessup_nonrepeat_signal_t::slot_type;
  using keydown_displayswitch_nonrepeat_signal_t = signal<void()>;
  using keydown_displayswitch_nonrepeat_slot_t
    = keydown_displayswitch_nonrepeat_signal_t::slot_type;
  using keydown_kbdillumtoggle_nonrepeat_signal_t = signal<void()>;
  using keydown_kbdillumtoggle_nonrepeat_slot_t
    = keydown_kbdillumtoggle_nonrepeat_signal_t::slot_type;
  using keydown_kbdillumdown_nonrepeat_signal_t = signal<void()>;
  using keydown_kbdillumdown_nonrepeat_slot_t
    = keydown_kbdillumdown_nonrepeat_signal_t::slot_type;
  using keydown_kbdillumup_nonrepeat_signal_t = signal<void()>;
  using keydown_kbdillumup_nonrepeat_slot_t
    = keydown_kbdillumup_nonrepeat_signal_t::slot_type;
  using keydown_eject_nonrepeat_signal_t = signal<void()>;
  using keydown_eject_nonrepeat_slot_t
    = keydown_eject_nonrepeat_signal_t::slot_type;
  using keydown_sleep_nonrepeat_signal_t = signal<void()>;
  using keydown_sleep_nonrepeat_slot_t
    = keydown_sleep_nonrepeat_signal_t::slot_type;
  using keyup_unknown_signal_t = signal<void()>;
  using keyup_unknown_slot_t = keyup_unknown_signal_t::slot_type;
  using keyup_backspace_signal_t = signal<void()>;
  using keyup_backspace_slot_t = keyup_backspace_signal_t::slot_type;
  using keyup_tab_signal_t = signal<void()>;
  using keyup_tab_slot_t = keyup_tab_signal_t::slot_type;
  using keyup_return_signal_t = signal<void()>;
  using keyup_return_slot_t = keyup_return_signal_t::slot_type;
  using keyup_escape_signal_t = signal<void()>;
  using keyup_escape_slot_t = keyup_escape_signal_t::slot_type;
  using keyup_space_signal_t = signal<void()>;
  using keyup_space_slot_t = keyup_space_signal_t::slot_type;
  using keyup_exclaim_signal_t = signal<void()>;
  using keyup_exclaim_slot_t = keyup_exclaim_signal_t::slot_type;
  using keyup_quotedbl_signal_t = signal<void()>;
  using keyup_quotedbl_slot_t = keyup_quotedbl_signal_t::slot_type;
  using keyup_hash_signal_t = signal<void()>;
  using keyup_hash_slot_t = keyup_hash_signal_t::slot_type;
  using keyup_dollar_signal_t = signal<void()>;
  using keyup_dollar_slot_t = keyup_dollar_signal_t::slot_type;
  using keyup_percent_signal_t = signal<void()>;
  using keyup_percent_slot_t = keyup_percent_signal_t::slot_type;
  using keyup_ampersand_signal_t = signal<void()>;
  using keyup_ampersand_slot_t = keyup_ampersand_signal_t::slot_type;
  using keyup_quote_signal_t = signal<void()>;
  using keyup_quote_slot_t = keyup_quote_signal_t::slot_type;
  using keyup_leftparen_signal_t = signal<void()>;
  using keyup_leftparen_slot_t = keyup_leftparen_signal_t::slot_type;
  using keyup_rightparen_signal_t = signal<void()>;
  using keyup_rightparen_slot_t = keyup_rightparen_signal_t::slot_type;
  using keyup_asterisk_signal_t = signal<void()>;
  using keyup_asterisk_slot_t = keyup_asterisk_signal_t::slot_type;
  using keyup_plus_signal_t = signal<void()>;
  using keyup_plus_slot_t = keyup_plus_signal_t::slot_type;
  using keyup_comma_signal_t = signal<void()>;
  using keyup_comma_slot_t = keyup_comma_signal_t::slot_type;
  using keyup_minus_signal_t = signal<void()>;
  using keyup_minus_slot_t = keyup_minus_signal_t::slot_type;
  using keyup_period_signal_t = signal<void()>;
  using keyup_period_slot_t = keyup_period_signal_t::slot_type;
  using keyup_slash_signal_t = signal<void()>;
  using keyup_slash_slot_t = keyup_slash_signal_t::slot_type;
  using keyup_0_signal_t = signal<void()>;
  using keyup_0_slot_t = keyup_0_signal_t::slot_type;
  using keyup_1_signal_t = signal<void()>;
  using keyup_1_slot_t = keyup_1_signal_t::slot_type;
  using keyup_2_signal_t = signal<void()>;
  using keyup_2_slot_t = keyup_2_signal_t::slot_type;
  using keyup_3_signal_t = signal<void()>;
  using keyup_3_slot_t = keyup_3_signal_t::slot_type;
  using keyup_4_signal_t = signal<void()>;
  using keyup_4_slot_t = keyup_4_signal_t::slot_type;
  using keyup_5_signal_t = signal<void()>;
  using keyup_5_slot_t = keyup_5_signal_t::slot_type;
  using keyup_6_signal_t = signal<void()>;
  using keyup_6_slot_t = keyup_6_signal_t::slot_type;
  using keyup_7_signal_t = signal<void()>;
  using keyup_7_slot_t = keyup_7_signal_t::slot_type;
  using keyup_8_signal_t = signal<void()>;
  using keyup_8_slot_t = keyup_8_signal_t::slot_type;
  using keyup_9_signal_t = signal<void()>;
  using keyup_9_slot_t = keyup_9_signal_t::slot_type;
  using keyup_colon_signal_t = signal<void()>;
  using keyup_colon_slot_t = keyup_colon_signal_t::slot_type;
  using keyup_semicolon_signal_t = signal<void()>;
  using keyup_semicolon_slot_t = keyup_semicolon_signal_t::slot_type;
  using keyup_less_signal_t = signal<void()>;
  using keyup_less_slot_t = keyup_less_signal_t::slot_type;
  using keyup_equals_signal_t = signal<void()>;
  using keyup_equals_slot_t = keyup_equals_signal_t::slot_type;
  using keyup_greater_signal_t = signal<void()>;
  using keyup_greater_slot_t = keyup_greater_signal_t::slot_type;
  using keyup_question_signal_t = signal<void()>;
  using keyup_question_slot_t = keyup_question_signal_t::slot_type;
  using keyup_at_signal_t = signal<void()>;
  using keyup_at_slot_t = keyup_at_signal_t::slot_type;
  using keyup_leftbracket_signal_t = signal<void()>;
  using keyup_leftbracket_slot_t = keyup_leftbracket_signal_t::slot_type;
  using keyup_backslash_signal_t = signal<void()>;
  using keyup_backslash_slot_t = keyup_backslash_signal_t::slot_type;
  using keyup_rightbracket_signal_t = signal<void()>;
  using keyup_rightbracket_slot_t = keyup_rightbracket_signal_t::slot_type;
  using keyup_caret_signal_t = signal<void()>;
  using keyup_caret_slot_t = keyup_caret_signal_t::slot_type;
  using keyup_underscore_signal_t = signal<void()>;
  using keyup_underscore_slot_t = keyup_underscore_signal_t::slot_type;
  using keyup_backquote_signal_t = signal<void()>;
  using keyup_backquote_slot_t = keyup_backquote_signal_t::slot_type;
  using keyup_a_signal_t = signal<void()>;
  using keyup_a_slot_t = keyup_a_signal_t::slot_type;
  using keyup_b_signal_t = signal<void()>;
  using keyup_b_slot_t = keyup_b_signal_t::slot_type;
  using keyup_c_signal_t = signal<void()>;
  using keyup_c_slot_t = keyup_c_signal_t::slot_type;
  using keyup_d_signal_t = signal<void()>;
  using keyup_d_slot_t = keyup_d_signal_t::slot_type;
  using keyup_e_signal_t = signal<void()>;
  using keyup_e_slot_t = keyup_e_signal_t::slot_type;
  using keyup_f_signal_t = signal<void()>;
  using keyup_f_slot_t = keyup_f_signal_t::slot_type;
  using keyup_g_signal_t = signal<void()>;
  using keyup_g_slot_t = keyup_g_signal_t::slot_type;
  using keyup_h_signal_t = signal<void()>;
  using keyup_h_slot_t = keyup_h_signal_t::slot_type;
  using keyup_i_signal_t = signal<void()>;
  using keyup_i_slot_t = keyup_i_signal_t::slot_type;
  using keyup_j_signal_t = signal<void()>;
  using keyup_j_slot_t = keyup_j_signal_t::slot_type;
  using keyup_k_signal_t = signal<void()>;
  using keyup_k_slot_t = keyup_k_signal_t::slot_type;
  using keyup_l_signal_t = signal<void()>;
  using keyup_l_slot_t = keyup_l_signal_t::slot_type;
  using keyup_m_signal_t = signal<void()>;
  using keyup_m_slot_t = keyup_m_signal_t::slot_type;
  using keyup_n_signal_t = signal<void()>;
  using keyup_n_slot_t = keyup_n_signal_t::slot_type;
  using keyup_o_signal_t = signal<void()>;
  using keyup_o_slot_t = keyup_o_signal_t::slot_type;
  using keyup_p_signal_t = signal<void()>;
  using keyup_p_slot_t = keyup_p_signal_t::slot_type;
  using keyup_q_signal_t = signal<void()>;
  using keyup_q_slot_t = keyup_q_signal_t::slot_type;
  using keyup_r_signal_t = signal<void()>;
  using keyup_r_slot_t = keyup_r_signal_t::slot_type;
  using keyup_s_signal_t = signal<void()>;
  using keyup_s_slot_t = keyup_s_signal_t::slot_type;
  using keyup_t_signal_t = signal<void()>;
  using keyup_t_slot_t = keyup_t_signal_t::slot_type;
  using keyup_u_signal_t = signal<void()>;
  using keyup_u_slot_t = keyup_u_signal_t::slot_type;
  using keyup_v_signal_t = signal<void()>;
  using keyup_v_slot_t = keyup_v_signal_t::slot_type;
  using keyup_w_signal_t = signal<void()>;
  using keyup_w_slot_t = keyup_w_signal_t::slot_type;
  using keyup_x_signal_t = signal<void()>;
  using keyup_x_slot_t = keyup_x_signal_t::slot_type;
  using keyup_y_signal_t = signal<void()>;
  using keyup_y_slot_t = keyup_y_signal_t::slot_type;
  using keyup_z_signal_t = signal<void()>;
  using keyup_z_slot_t = keyup_z_signal_t::slot_type;
  using keyup_delete_signal_t = signal<void()>;
  using keyup_delete_slot_t = keyup_delete_signal_t::slot_type;
  using keyup_capslock_signal_t = signal<void()>;
  using keyup_capslock_slot_t = keyup_capslock_signal_t::slot_type;
  using keyup_f1_signal_t = signal<void()>;
  using keyup_f1_slot_t = keyup_f1_signal_t::slot_type;
  using keyup_f2_signal_t = signal<void()>;
  using keyup_f2_slot_t = keyup_f2_signal_t::slot_type;
  using keyup_f3_signal_t = signal<void()>;
  using keyup_f3_slot_t = keyup_f3_signal_t::slot_type;
  using keyup_f4_signal_t = signal<void()>;
  using keyup_f4_slot_t = keyup_f4_signal_t::slot_type;
  using keyup_f5_signal_t = signal<void()>;
  using keyup_f5_slot_t = keyup_f5_signal_t::slot_type;
  using keyup_f6_signal_t = signal<void()>;
  using keyup_f6_slot_t = keyup_f6_signal_t::slot_type;
  using keyup_f7_signal_t = signal<void()>;
  using keyup_f7_slot_t = keyup_f7_signal_t::slot_type;
  using keyup_f8_signal_t = signal<void()>;
  using keyup_f8_slot_t = keyup_f8_signal_t::slot_type;
  using keyup_f9_signal_t = signal<void()>;
  using keyup_f9_slot_t = keyup_f9_signal_t::slot_type;
  using keyup_f10_signal_t = signal<void()>;
  using keyup_f10_slot_t = keyup_f10_signal_t::slot_type;
  using keyup_f11_signal_t = signal<void()>;
  using keyup_f11_slot_t = keyup_f11_signal_t::slot_type;
  using keyup_f12_signal_t = signal<void()>;
  using keyup_f12_slot_t = keyup_f12_signal_t::slot_type;
  using keyup_printscreen_signal_t = signal<void()>;
  using keyup_printscreen_slot_t = keyup_printscreen_signal_t::slot_type;
  using keyup_scrolllock_signal_t = signal<void()>;
  using keyup_scrolllock_slot_t = keyup_scrolllock_signal_t::slot_type;
  using keyup_pause_signal_t = signal<void()>;
  using keyup_pause_slot_t = keyup_pause_signal_t::slot_type;
  using keyup_insert_signal_t = signal<void()>;
  using keyup_insert_slot_t = keyup_insert_signal_t::slot_type;
  using keyup_home_signal_t = signal<void()>;
  using keyup_home_slot_t = keyup_home_signal_t::slot_type;
  using keyup_pageup_signal_t = signal<void()>;
  using keyup_pageup_slot_t = keyup_pageup_signal_t::slot_type;
  using keyup_end_signal_t = signal<void()>;
  using keyup_end_slot_t = keyup_end_signal_t::slot_type;
  using keyup_pagedown_signal_t = signal<void()>;
  using keyup_pagedown_slot_t = keyup_pagedown_signal_t::slot_type;
  using keyup_right_signal_t = signal<void()>;
  using keyup_right_slot_t = keyup_right_signal_t::slot_type;
  using keyup_left_signal_t = signal<void()>;
  using keyup_left_slot_t = keyup_left_signal_t::slot_type;
  using keyup_down_signal_t = signal<void()>;
  using keyup_down_slot_t = keyup_down_signal_t::slot_type;
  using keyup_up_signal_t = signal<void()>;
  using keyup_up_slot_t = keyup_up_signal_t::slot_type;
  using keyup_numlockclear_signal_t = signal<void()>;
  using keyup_numlockclear_slot_t = keyup_numlockclear_signal_t::slot_type;
  using keyup_kp_divide_signal_t = signal<void()>;
  using keyup_kp_divide_slot_t = keyup_kp_divide_signal_t::slot_type;
  using keyup_kp_multiply_signal_t = signal<void()>;
  using keyup_kp_multiply_slot_t = keyup_kp_multiply_signal_t::slot_type;
  using keyup_kp_minus_signal_t = signal<void()>;
  using keyup_kp_minus_slot_t = keyup_kp_minus_signal_t::slot_type;
  using keyup_kp_plus_signal_t = signal<void()>;
  using keyup_kp_plus_slot_t = keyup_kp_plus_signal_t::slot_type;
  using keyup_kp_enter_signal_t = signal<void()>;
  using keyup_kp_enter_slot_t = keyup_kp_enter_signal_t::slot_type;
  using keyup_kp_1_signal_t = signal<void()>;
  using keyup_kp_1_slot_t = keyup_kp_1_signal_t::slot_type;
  using keyup_kp_2_signal_t = signal<void()>;
  using keyup_kp_2_slot_t = keyup_kp_2_signal_t::slot_type;
  using keyup_kp_3_signal_t = signal<void()>;
  using keyup_kp_3_slot_t = keyup_kp_3_signal_t::slot_type;
  using keyup_kp_4_signal_t = signal<void()>;
  using keyup_kp_4_slot_t = keyup_kp_4_signal_t::slot_type;
  using keyup_kp_5_signal_t = signal<void()>;
  using keyup_kp_5_slot_t = keyup_kp_5_signal_t::slot_type;
  using keyup_kp_6_signal_t = signal<void()>;
  using keyup_kp_6_slot_t = keyup_kp_6_signal_t::slot_type;
  using keyup_kp_7_signal_t = signal<void()>;
  using keyup_kp_7_slot_t = keyup_kp_7_signal_t::slot_type;
  using keyup_kp_8_signal_t = signal<void()>;
  using keyup_kp_8_slot_t = keyup_kp_8_signal_t::slot_type;
  using keyup_kp_9_signal_t = signal<void()>;
  using keyup_kp_9_slot_t = keyup_kp_9_signal_t::slot_type;
  using keyup_kp_0_signal_t = signal<void()>;
  using keyup_kp_0_slot_t = keyup_kp_0_signal_t::slot_type;
  using keyup_kp_period_signal_t = signal<void()>;
  using keyup_kp_period_slot_t = keyup_kp_period_signal_t::slot_type;
  using keyup_application_signal_t = signal<void()>;
  using keyup_application_slot_t = keyup_application_signal_t::slot_type;
  using keyup_power_signal_t = signal<void()>;
  using keyup_power_slot_t = keyup_power_signal_t::slot_type;
  using keyup_kp_equals_signal_t = signal<void()>;
  using keyup_kp_equals_slot_t = keyup_kp_equals_signal_t::slot_type;
  using keyup_f13_signal_t = signal<void()>;
  using keyup_f13_slot_t = keyup_f13_signal_t::slot_type;
  using keyup_f14_signal_t = signal<void()>;
  using keyup_f14_slot_t = keyup_f14_signal_t::slot_type;
  using keyup_f15_signal_t = signal<void()>;
  using keyup_f15_slot_t = keyup_f15_signal_t::slot_type;
  using keyup_f16_signal_t = signal<void()>;
  using keyup_f16_slot_t = keyup_f16_signal_t::slot_type;
  using keyup_f17_signal_t = signal<void()>;
  using keyup_f17_slot_t = keyup_f17_signal_t::slot_type;
  using keyup_f18_signal_t = signal<void()>;
  using keyup_f18_slot_t = keyup_f18_signal_t::slot_type;
  using keyup_f19_signal_t = signal<void()>;
  using keyup_f19_slot_t = keyup_f19_signal_t::slot_type;
  using keyup_f20_signal_t = signal<void()>;
  using keyup_f20_slot_t = keyup_f20_signal_t::slot_type;
  using keyup_f21_signal_t = signal<void()>;
  using keyup_f21_slot_t = keyup_f21_signal_t::slot_type;
  using keyup_f22_signal_t = signal<void()>;
  using keyup_f22_slot_t = keyup_f22_signal_t::slot_type;
  using keyup_f23_signal_t = signal<void()>;
  using keyup_f23_slot_t = keyup_f23_signal_t::slot_type;
  using keyup_f24_signal_t = signal<void()>;
  using keyup_f24_slot_t = keyup_f24_signal_t::slot_type;
  using keyup_execute_signal_t = signal<void()>;
  using keyup_execute_slot_t = keyup_execute_signal_t::slot_type;
  using keyup_help_signal_t = signal<void()>;
  using keyup_help_slot_t = keyup_help_signal_t::slot_type;
  using keyup_menu_signal_t = signal<void()>;
  using keyup_menu_slot_t = keyup_menu_signal_t::slot_type;
  using keyup_select_signal_t = signal<void()>;
  using keyup_select_slot_t = keyup_select_signal_t::slot_type;
  using keyup_stop_signal_t = signal<void()>;
  using keyup_stop_slot_t = keyup_stop_signal_t::slot_type;
  using keyup_again_signal_t = signal<void()>;
  using keyup_again_slot_t = keyup_again_signal_t::slot_type;
  using keyup_undo_signal_t = signal<void()>;
  using keyup_undo_slot_t = keyup_undo_signal_t::slot_type;
  using keyup_cut_signal_t = signal<void()>;
  using keyup_cut_slot_t = keyup_cut_signal_t::slot_type;
  using keyup_copy_signal_t = signal<void()>;
  using keyup_copy_slot_t = keyup_copy_signal_t::slot_type;
  using keyup_paste_signal_t = signal<void()>;
  using keyup_paste_slot_t = keyup_paste_signal_t::slot_type;
  using keyup_find_signal_t = signal<void()>;
  using keyup_find_slot_t = keyup_find_signal_t::slot_type;
  using keyup_mute_signal_t = signal<void()>;
  using keyup_mute_slot_t = keyup_mute_signal_t::slot_type;
  using keyup_volumeup_signal_t = signal<void()>;
  using keyup_volumeup_slot_t = keyup_volumeup_signal_t::slot_type;
  using keyup_volumedown_signal_t = signal<void()>;
  using keyup_volumedown_slot_t = keyup_volumedown_signal_t::slot_type;
  using keyup_kp_comma_signal_t = signal<void()>;
  using keyup_kp_comma_slot_t = keyup_kp_comma_signal_t::slot_type;
  using keyup_kp_equalsas400_signal_t = signal<void()>;
  using keyup_kp_equalsas400_slot_t = keyup_kp_equalsas400_signal_t::slot_type;
  using keyup_alterase_signal_t = signal<void()>;
  using keyup_alterase_slot_t = keyup_alterase_signal_t::slot_type;
  using keyup_sysreq_signal_t = signal<void()>;
  using keyup_sysreq_slot_t = keyup_sysreq_signal_t::slot_type;
  using keyup_cancel_signal_t = signal<void()>;
  using keyup_cancel_slot_t = keyup_cancel_signal_t::slot_type;
  using keyup_clear_signal_t = signal<void()>;
  using keyup_clear_slot_t = keyup_clear_signal_t::slot_type;
  using keyup_prior_signal_t = signal<void()>;
  using keyup_prior_slot_t = keyup_prior_signal_t::slot_type;
  using keyup_return2_signal_t = signal<void()>;
  using keyup_return2_slot_t = keyup_return2_signal_t::slot_type;
  using keyup_separator_signal_t = signal<void()>;
  using keyup_separator_slot_t = keyup_separator_signal_t::slot_type;
  using keyup_out_signal_t = signal<void()>;
  using keyup_out_slot_t = keyup_out_signal_t::slot_type;
  using keyup_oper_signal_t = signal<void()>;
  using keyup_oper_slot_t = keyup_oper_signal_t::slot_type;
  using keyup_clearagain_signal_t = signal<void()>;
  using keyup_clearagain_slot_t = keyup_clearagain_signal_t::slot_type;
  using keyup_crsel_signal_t = signal<void()>;
  using keyup_crsel_slot_t = keyup_crsel_signal_t::slot_type;
  using keyup_exsel_signal_t = signal<void()>;
  using keyup_exsel_slot_t = keyup_exsel_signal_t::slot_type;
  using keyup_kp_00_signal_t = signal<void()>;
  using keyup_kp_00_slot_t = keyup_kp_00_signal_t::slot_type;
  using keyup_kp_000_signal_t = signal<void()>;
  using keyup_kp_000_slot_t = keyup_kp_000_signal_t::slot_type;
  using keyup_thousandsseparator_signal_t = signal<void()>;
  using keyup_thousandsseparator_slot_t
    = keyup_thousandsseparator_signal_t::slot_type;
  using keyup_decimalseparator_signal_t = signal<void()>;
  using keyup_decimalseparator_slot_t
    = keyup_decimalseparator_signal_t::slot_type;
  using keyup_currencyunit_signal_t = signal<void()>;
  using keyup_currencyunit_slot_t = keyup_currencyunit_signal_t::slot_type;
  using keyup_currencysubunit_signal_t = signal<void()>;
  using keyup_currencysubunit_slot_t
    = keyup_currencysubunit_signal_t::slot_type;
  using keyup_kp_leftparen_signal_t = signal<void()>;
  using keyup_kp_leftparen_slot_t = keyup_kp_leftparen_signal_t::slot_type;
  using keyup_kp_rightparen_signal_t = signal<void()>;
  using keyup_kp_rightparen_slot_t = keyup_kp_rightparen_signal_t::slot_type;
  using keyup_kp_leftbrace_signal_t = signal<void()>;
  using keyup_kp_leftbrace_slot_t = keyup_kp_leftbrace_signal_t::slot_type;
  using keyup_kp_rightbrace_signal_t = signal<void()>;
  using keyup_kp_rightbrace_slot_t = keyup_kp_rightbrace_signal_t::slot_type;
  using keyup_kp_tab_signal_t = signal<void()>;
  using keyup_kp_tab_slot_t = keyup_kp_tab_signal_t::slot_type;
  using keyup_kp_backspace_signal_t = signal<void()>;
  using keyup_kp_backspace_slot_t = keyup_kp_backspace_signal_t::slot_type;
  using keyup_kp_a_signal_t = signal<void()>;
  using keyup_kp_a_slot_t = keyup_kp_a_signal_t::slot_type;
  using keyup_kp_b_signal_t = signal<void()>;
  using keyup_kp_b_slot_t = keyup_kp_b_signal_t::slot_type;
  using keyup_kp_c_signal_t = signal<void()>;
  using keyup_kp_c_slot_t = keyup_kp_c_signal_t::slot_type;
  using keyup_kp_d_signal_t = signal<void()>;
  using keyup_kp_d_slot_t = keyup_kp_d_signal_t::slot_type;
  using keyup_kp_e_signal_t = signal<void()>;
  using keyup_kp_e_slot_t = keyup_kp_e_signal_t::slot_type;
  using keyup_kp_f_signal_t = signal<void()>;
  using keyup_kp_f_slot_t = keyup_kp_f_signal_t::slot_type;
  using keyup_kp_xor_signal_t = signal<void()>;
  using keyup_kp_xor_slot_t = keyup_kp_xor_signal_t::slot_type;
  using keyup_kp_power_signal_t = signal<void()>;
  using keyup_kp_power_slot_t = keyup_kp_power_signal_t::slot_type;
  using keyup_kp_percent_signal_t = signal<void()>;
  using keyup_kp_percent_slot_t = keyup_kp_percent_signal_t::slot_type;
  using keyup_kp_less_signal_t = signal<void()>;
  using keyup_kp_less_slot_t = keyup_kp_less_signal_t::slot_type;
  using keyup_kp_greater_signal_t = signal<void()>;
  using keyup_kp_greater_slot_t = keyup_kp_greater_signal_t::slot_type;
  using keyup_kp_ampersand_signal_t = signal<void()>;
  using keyup_kp_ampersand_slot_t = keyup_kp_ampersand_signal_t::slot_type;
  using keyup_kp_dblampersand_signal_t = signal<void()>;
  using keyup_kp_dblampersand_slot_t
    = keyup_kp_dblampersand_signal_t::slot_type;
  using keyup_kp_verticalbar_signal_t = signal<void()>;
  using keyup_kp_verticalbar_slot_t = keyup_kp_verticalbar_signal_t::slot_type;
  using keyup_kp_dblverticalbar_signal_t = signal<void()>;
  using keyup_kp_dblverticalbar_slot_t
    = keyup_kp_dblverticalbar_signal_t::slot_type;
  using keyup_kp_colon_signal_t = signal<void()>;
  using keyup_kp_colon_slot_t = keyup_kp_colon_signal_t::slot_type;
  using keyup_kp_hash_signal_t = signal<void()>;
  using keyup_kp_hash_slot_t = keyup_kp_hash_signal_t::slot_type;
  using keyup_kp_space_signal_t = signal<void()>;
  using keyup_kp_space_slot_t = keyup_kp_space_signal_t::slot_type;
  using keyup_kp_at_signal_t = signal<void()>;
  using keyup_kp_at_slot_t = keyup_kp_at_signal_t::slot_type;
  using keyup_kp_exclam_signal_t = signal<void()>;
  using keyup_kp_exclam_slot_t = keyup_kp_exclam_signal_t::slot_type;
  using keyup_kp_memstore_signal_t = signal<void()>;
  using keyup_kp_memstore_slot_t = keyup_kp_memstore_signal_t::slot_type;
  using keyup_kp_memrecall_signal_t = signal<void()>;
  using keyup_kp_memrecall_slot_t = keyup_kp_memrecall_signal_t::slot_type;
  using keyup_kp_memclear_signal_t = signal<void()>;
  using keyup_kp_memclear_slot_t = keyup_kp_memclear_signal_t::slot_type;
  using keyup_kp_memadd_signal_t = signal<void()>;
  using keyup_kp_memadd_slot_t = keyup_kp_memadd_signal_t::slot_type;
  using keyup_kp_memsubtract_signal_t = signal<void()>;
  using keyup_kp_memsubtract_slot_t = keyup_kp_memsubtract_signal_t::slot_type;
  using keyup_kp_memmultiply_signal_t = signal<void()>;
  using keyup_kp_memmultiply_slot_t = keyup_kp_memmultiply_signal_t::slot_type;
  using keyup_kp_memdivide_signal_t = signal<void()>;
  using keyup_kp_memdivide_slot_t = keyup_kp_memdivide_signal_t::slot_type;
  using keyup_kp_plusminus_signal_t = signal<void()>;
  using keyup_kp_plusminus_slot_t = keyup_kp_plusminus_signal_t::slot_type;
  using keyup_kp_clear_signal_t = signal<void()>;
  using keyup_kp_clear_slot_t = keyup_kp_clear_signal_t::slot_type;
  using keyup_kp_clearentry_signal_t = signal<void()>;
  using keyup_kp_clearentry_slot_t = keyup_kp_clearentry_signal_t::slot_type;
  using keyup_kp_binary_signal_t = signal<void()>;
  using keyup_kp_binary_slot_t = keyup_kp_binary_signal_t::slot_type;
  using keyup_kp_octal_signal_t = signal<void()>;
  using keyup_kp_octal_slot_t = keyup_kp_octal_signal_t::slot_type;
  using keyup_kp_decimal_signal_t = signal<void()>;
  using keyup_kp_decimal_slot_t = keyup_kp_decimal_signal_t::slot_type;
  using keyup_kp_hexadecimal_signal_t = signal<void()>;
  using keyup_kp_hexadecimal_slot_t = keyup_kp_hexadecimal_signal_t::slot_type;
  using keyup_lctrl_signal_t = signal<void()>;
  using keyup_lctrl_slot_t = keyup_lctrl_signal_t::slot_type;
  using keyup_lshift_signal_t = signal<void()>;
  using keyup_lshift_slot_t = keyup_lshift_signal_t::slot_type;
  using keyup_lalt_signal_t = signal<void()>;
  using keyup_lalt_slot_t = keyup_lalt_signal_t::slot_type;
  using keyup_lgui_signal_t = signal<void()>;
  using keyup_lgui_slot_t = keyup_lgui_signal_t::slot_type;
  using keyup_rctrl_signal_t = signal<void()>;
  using keyup_rctrl_slot_t = keyup_rctrl_signal_t::slot_type;
  using keyup_rshift_signal_t = signal<void()>;
  using keyup_rshift_slot_t = keyup_rshift_signal_t::slot_type;
  using keyup_ralt_signal_t = signal<void()>;
  using keyup_ralt_slot_t = keyup_ralt_signal_t::slot_type;
  using keyup_rgui_signal_t = signal<void()>;
  using keyup_rgui_slot_t = keyup_rgui_signal_t::slot_type;
  using keyup_mode_signal_t = signal<void()>;
  using keyup_mode_slot_t = keyup_mode_signal_t::slot_type;
  using keyup_audionext_signal_t = signal<void()>;
  using keyup_audionext_slot_t = keyup_audionext_signal_t::slot_type;
  using keyup_audioprev_signal_t = signal<void()>;
  using keyup_audioprev_slot_t = keyup_audioprev_signal_t::slot_type;
  using keyup_audiostop_signal_t = signal<void()>;
  using keyup_audiostop_slot_t = keyup_audiostop_signal_t::slot_type;
  using keyup_audioplay_signal_t = signal<void()>;
  using keyup_audioplay_slot_t = keyup_audioplay_signal_t::slot_type;
  using keyup_audiomute_signal_t = signal<void()>;
  using keyup_audiomute_slot_t = keyup_audiomute_signal_t::slot_type;
  using keyup_mediaselect_signal_t = signal<void()>;
  using keyup_mediaselect_slot_t = keyup_mediaselect_signal_t::slot_type;
  using keyup_www_signal_t = signal<void()>;
  using keyup_www_slot_t = keyup_www_signal_t::slot_type;
  using keyup_mail_signal_t = signal<void()>;
  using keyup_mail_slot_t = keyup_mail_signal_t::slot_type;
  using keyup_calculator_signal_t = signal<void()>;
  using keyup_calculator_slot_t = keyup_calculator_signal_t::slot_type;
  using keyup_computer_signal_t = signal<void()>;
  using keyup_computer_slot_t = keyup_computer_signal_t::slot_type;
  using keyup_ac_search_signal_t = signal<void()>;
  using keyup_ac_search_slot_t = keyup_ac_search_signal_t::slot_type;
  using keyup_ac_home_signal_t = signal<void()>;
  using keyup_ac_home_slot_t = keyup_ac_home_signal_t::slot_type;
  using keyup_ac_back_signal_t = signal<void()>;
  using keyup_ac_back_slot_t = keyup_ac_back_signal_t::slot_type;
  using keyup_ac_forward_signal_t = signal<void()>;
  using keyup_ac_forward_slot_t = keyup_ac_forward_signal_t::slot_type;
  using keyup_ac_stop_signal_t = signal<void()>;
  using keyup_ac_stop_slot_t = keyup_ac_stop_signal_t::slot_type;
  using keyup_ac_refresh_signal_t = signal<void()>;
  using keyup_ac_refresh_slot_t = keyup_ac_refresh_signal_t::slot_type;
  using keyup_ac_bookmarks_signal_t = signal<void()>;
  using keyup_ac_bookmarks_slot_t = keyup_ac_bookmarks_signal_t::slot_type;
  using keyup_brightnessdown_signal_t = signal<void()>;
  using keyup_brightnessdown_slot_t = keyup_brightnessdown_signal_t::slot_type;
  using keyup_brightnessup_signal_t = signal<void()>;
  using keyup_brightnessup_slot_t = keyup_brightnessup_signal_t::slot_type;
  using keyup_displayswitch_signal_t = signal<void()>;
  using keyup_displayswitch_slot_t = keyup_displayswitch_signal_t::slot_type;
  using keyup_kbdillumtoggle_signal_t = signal<void()>;
  using keyup_kbdillumtoggle_slot_t = keyup_kbdillumtoggle_signal_t::slot_type;
  using keyup_kbdillumdown_signal_t = signal<void()>;
  using keyup_kbdillumdown_slot_t = keyup_kbdillumdown_signal_t::slot_type;
  using keyup_kbdillumup_signal_t = signal<void()>;
  using keyup_kbdillumup_slot_t = keyup_kbdillumup_signal_t::slot_type;
  using keyup_eject_signal_t = signal<void()>;
  using keyup_eject_slot_t = keyup_eject_signal_t::slot_type;
  using keyup_sleep_signal_t = signal<void()>;
  using keyup_sleep_slot_t = keyup_sleep_signal_t::slot_type;

  event_dispatch();

  void quit() const;
  void keydown_unknown_repeat() const;
  void keydown_backspace_repeat() const;
  void keydown_tab_repeat() const;
  void keydown_return_repeat() const;
  void keydown_escape_repeat() const;
  void keydown_space_repeat() const;
  void keydown_exclaim_repeat() const;
  void keydown_quotedbl_repeat() const;
  void keydown_hash_repeat() const;
  void keydown_dollar_repeat() const;
  void keydown_percent_repeat() const;
  void keydown_ampersand_repeat() const;
  void keydown_quote_repeat() const;
  void keydown_leftparen_repeat() const;
  void keydown_rightparen_repeat() const;
  void keydown_asterisk_repeat() const;
  void keydown_plus_repeat() const;
  void keydown_comma_repeat() const;
  void keydown_minus_repeat() const;
  void keydown_period_repeat() const;
  void keydown_slash_repeat() const;
  void keydown_0_repeat() const;
  void keydown_1_repeat() const;
  void keydown_2_repeat() const;
  void keydown_3_repeat() const;
  void keydown_4_repeat() const;
  void keydown_5_repeat() const;
  void keydown_6_repeat() const;
  void keydown_7_repeat() const;
  void keydown_8_repeat() const;
  void keydown_9_repeat() const;
  void keydown_colon_repeat() const;
  void keydown_semicolon_repeat() const;
  void keydown_less_repeat() const;
  void keydown_equals_repeat() const;
  void keydown_greater_repeat() const;
  void keydown_question_repeat() const;
  void keydown_at_repeat() const;
  void keydown_leftbracket_repeat() const;
  void keydown_backslash_repeat() const;
  void keydown_rightbracket_repeat() const;
  void keydown_caret_repeat() const;
  void keydown_underscore_repeat() const;
  void keydown_backquote_repeat() const;
  void keydown_a_repeat() const;
  void keydown_b_repeat() const;
  void keydown_c_repeat() const;
  void keydown_d_repeat() const;
  void keydown_e_repeat() const;
  void keydown_f_repeat() const;
  void keydown_g_repeat() const;
  void keydown_h_repeat() const;
  void keydown_i_repeat() const;
  void keydown_j_repeat() const;
  void keydown_k_repeat() const;
  void keydown_l_repeat() const;
  void keydown_m_repeat() const;
  void keydown_n_repeat() const;
  void keydown_o_repeat() const;
  void keydown_p_repeat() const;
  void keydown_q_repeat() const;
  void keydown_r_repeat() const;
  void keydown_s_repeat() const;
  void keydown_t_repeat() const;
  void keydown_u_repeat() const;
  void keydown_v_repeat() const;
  void keydown_w_repeat() const;
  void keydown_x_repeat() const;
  void keydown_y_repeat() const;
  void keydown_z_repeat() const;
  void keydown_delete_repeat() const;
  void keydown_capslock_repeat() const;
  void keydown_f1_repeat() const;
  void keydown_f2_repeat() const;
  void keydown_f3_repeat() const;
  void keydown_f4_repeat() const;
  void keydown_f5_repeat() const;
  void keydown_f6_repeat() const;
  void keydown_f7_repeat() const;
  void keydown_f8_repeat() const;
  void keydown_f9_repeat() const;
  void keydown_f10_repeat() const;
  void keydown_f11_repeat() const;
  void keydown_f12_repeat() const;
  void keydown_printscreen_repeat() const;
  void keydown_scrolllock_repeat() const;
  void keydown_pause_repeat() const;
  void keydown_insert_repeat() const;
  void keydown_home_repeat() const;
  void keydown_pageup_repeat() const;
  void keydown_end_repeat() const;
  void keydown_pagedown_repeat() const;
  void keydown_right_repeat() const;
  void keydown_left_repeat() const;
  void keydown_down_repeat() const;
  void keydown_up_repeat() const;
  void keydown_numlockclear_repeat() const;
  void keydown_kp_divide_repeat() const;
  void keydown_kp_multiply_repeat() const;
  void keydown_kp_minus_repeat() const;
  void keydown_kp_plus_repeat() const;
  void keydown_kp_enter_repeat() const;
  void keydown_kp_1_repeat() const;
  void keydown_kp_2_repeat() const;
  void keydown_kp_3_repeat() const;
  void keydown_kp_4_repeat() const;
  void keydown_kp_5_repeat() const;
  void keydown_kp_6_repeat() const;
  void keydown_kp_7_repeat() const;
  void keydown_kp_8_repeat() const;
  void keydown_kp_9_repeat() const;
  void keydown_kp_0_repeat() const;
  void keydown_kp_period_repeat() const;
  void keydown_application_repeat() const;
  void keydown_power_repeat() const;
  void keydown_kp_equals_repeat() const;
  void keydown_f13_repeat() const;
  void keydown_f14_repeat() const;
  void keydown_f15_repeat() const;
  void keydown_f16_repeat() const;
  void keydown_f17_repeat() const;
  void keydown_f18_repeat() const;
  void keydown_f19_repeat() const;
  void keydown_f20_repeat() const;
  void keydown_f21_repeat() const;
  void keydown_f22_repeat() const;
  void keydown_f23_repeat() const;
  void keydown_f24_repeat() const;
  void keydown_execute_repeat() const;
  void keydown_help_repeat() const;
  void keydown_menu_repeat() const;
  void keydown_select_repeat() const;
  void keydown_stop_repeat() const;
  void keydown_again_repeat() const;
  void keydown_undo_repeat() const;
  void keydown_cut_repeat() const;
  void keydown_copy_repeat() const;
  void keydown_paste_repeat() const;
  void keydown_find_repeat() const;
  void keydown_mute_repeat() const;
  void keydown_volumeup_repeat() const;
  void keydown_volumedown_repeat() const;
  void keydown_kp_comma_repeat() const;
  void keydown_kp_equalsas400_repeat() const;
  void keydown_alterase_repeat() const;
  void keydown_sysreq_repeat() const;
  void keydown_cancel_repeat() const;
  void keydown_clear_repeat() const;
  void keydown_prior_repeat() const;
  void keydown_return2_repeat() const;
  void keydown_separator_repeat() const;
  void keydown_out_repeat() const;
  void keydown_oper_repeat() const;
  void keydown_clearagain_repeat() const;
  void keydown_crsel_repeat() const;
  void keydown_exsel_repeat() const;
  void keydown_kp_00_repeat() const;
  void keydown_kp_000_repeat() const;
  void keydown_thousandsseparator_repeat() const;
  void keydown_decimalseparator_repeat() const;
  void keydown_currencyunit_repeat() const;
  void keydown_currencysubunit_repeat() const;
  void keydown_kp_leftparen_repeat() const;
  void keydown_kp_rightparen_repeat() const;
  void keydown_kp_leftbrace_repeat() const;
  void keydown_kp_rightbrace_repeat() const;
  void keydown_kp_tab_repeat() const;
  void keydown_kp_backspace_repeat() const;
  void keydown_kp_a_repeat() const;
  void keydown_kp_b_repeat() const;
  void keydown_kp_c_repeat() const;
  void keydown_kp_d_repeat() const;
  void keydown_kp_e_repeat() const;
  void keydown_kp_f_repeat() const;
  void keydown_kp_xor_repeat() const;
  void keydown_kp_power_repeat() const;
  void keydown_kp_percent_repeat() const;
  void keydown_kp_less_repeat() const;
  void keydown_kp_greater_repeat() const;
  void keydown_kp_ampersand_repeat() const;
  void keydown_kp_dblampersand_repeat() const;
  void keydown_kp_verticalbar_repeat() const;
  void keydown_kp_dblverticalbar_repeat() const;
  void keydown_kp_colon_repeat() const;
  void keydown_kp_hash_repeat() const;
  void keydown_kp_space_repeat() const;
  void keydown_kp_at_repeat() const;
  void keydown_kp_exclam_repeat() const;
  void keydown_kp_memstore_repeat() const;
  void keydown_kp_memrecall_repeat() const;
  void keydown_kp_memclear_repeat() const;
  void keydown_kp_memadd_repeat() const;
  void keydown_kp_memsubtract_repeat() const;
  void keydown_kp_memmultiply_repeat() const;
  void keydown_kp_memdivide_repeat() const;
  void keydown_kp_plusminus_repeat() const;
  void keydown_kp_clear_repeat() const;
  void keydown_kp_clearentry_repeat() const;
  void keydown_kp_binary_repeat() const;
  void keydown_kp_octal_repeat() const;
  void keydown_kp_decimal_repeat() const;
  void keydown_kp_hexadecimal_repeat() const;
  void keydown_lctrl_repeat() const;
  void keydown_lshift_repeat() const;
  void keydown_lalt_repeat() const;
  void keydown_lgui_repeat() const;
  void keydown_rctrl_repeat() const;
  void keydown_rshift_repeat() const;
  void keydown_ralt_repeat() const;
  void keydown_rgui_repeat() const;
  void keydown_mode_repeat() const;
  void keydown_audionext_repeat() const;
  void keydown_audioprev_repeat() const;
  void keydown_audiostop_repeat() const;
  void keydown_audioplay_repeat() const;
  void keydown_audiomute_repeat() const;
  void keydown_mediaselect_repeat() const;
  void keydown_www_repeat() const;
  void keydown_mail_repeat() const;
  void keydown_calculator_repeat() const;
  void keydown_computer_repeat() const;
  void keydown_ac_search_repeat() const;
  void keydown_ac_home_repeat() const;
  void keydown_ac_back_repeat() const;
  void keydown_ac_forward_repeat() const;
  void keydown_ac_stop_repeat() const;
  void keydown_ac_refresh_repeat() const;
  void keydown_ac_bookmarks_repeat() const;
  void keydown_brightnessdown_repeat() const;
  void keydown_brightnessup_repeat() const;
  void keydown_displayswitch_repeat() const;
  void keydown_kbdillumtoggle_repeat() const;
  void keydown_kbdillumdown_repeat() const;
  void keydown_kbdillumup_repeat() const;
  void keydown_eject_repeat() const;
  void keydown_sleep_repeat() const;
  void keydown_unknown_nonrepeat() const;
  void keydown_backspace_nonrepeat() const;
  void keydown_tab_nonrepeat() const;
  void keydown_return_nonrepeat() const;
  void keydown_escape_nonrepeat() const;
  void keydown_space_nonrepeat() const;
  void keydown_exclaim_nonrepeat() const;
  void keydown_quotedbl_nonrepeat() const;
  void keydown_hash_nonrepeat() const;
  void keydown_dollar_nonrepeat() const;
  void keydown_percent_nonrepeat() const;
  void keydown_ampersand_nonrepeat() const;
  void keydown_quote_nonrepeat() const;
  void keydown_leftparen_nonrepeat() const;
  void keydown_rightparen_nonrepeat() const;
  void keydown_asterisk_nonrepeat() const;
  void keydown_plus_nonrepeat() const;
  void keydown_comma_nonrepeat() const;
  void keydown_minus_nonrepeat() const;
  void keydown_period_nonrepeat() const;
  void keydown_slash_nonrepeat() const;
  void keydown_0_nonrepeat() const;
  void keydown_1_nonrepeat() const;
  void keydown_2_nonrepeat() const;
  void keydown_3_nonrepeat() const;
  void keydown_4_nonrepeat() const;
  void keydown_5_nonrepeat() const;
  void keydown_6_nonrepeat() const;
  void keydown_7_nonrepeat() const;
  void keydown_8_nonrepeat() const;
  void keydown_9_nonrepeat() const;
  void keydown_colon_nonrepeat() const;
  void keydown_semicolon_nonrepeat() const;
  void keydown_less_nonrepeat() const;
  void keydown_equals_nonrepeat() const;
  void keydown_greater_nonrepeat() const;
  void keydown_question_nonrepeat() const;
  void keydown_at_nonrepeat() const;
  void keydown_leftbracket_nonrepeat() const;
  void keydown_backslash_nonrepeat() const;
  void keydown_rightbracket_nonrepeat() const;
  void keydown_caret_nonrepeat() const;
  void keydown_underscore_nonrepeat() const;
  void keydown_backquote_nonrepeat() const;
  void keydown_a_nonrepeat() const;
  void keydown_b_nonrepeat() const;
  void keydown_c_nonrepeat() const;
  void keydown_d_nonrepeat() const;
  void keydown_e_nonrepeat() const;
  void keydown_f_nonrepeat() const;
  void keydown_g_nonrepeat() const;
  void keydown_h_nonrepeat() const;
  void keydown_i_nonrepeat() const;
  void keydown_j_nonrepeat() const;
  void keydown_k_nonrepeat() const;
  void keydown_l_nonrepeat() const;
  void keydown_m_nonrepeat() const;
  void keydown_n_nonrepeat() const;
  void keydown_o_nonrepeat() const;
  void keydown_p_nonrepeat() const;
  void keydown_q_nonrepeat() const;
  void keydown_r_nonrepeat() const;
  void keydown_s_nonrepeat() const;
  void keydown_t_nonrepeat() const;
  void keydown_u_nonrepeat() const;
  void keydown_v_nonrepeat() const;
  void keydown_w_nonrepeat() const;
  void keydown_x_nonrepeat() const;
  void keydown_y_nonrepeat() const;
  void keydown_z_nonrepeat() const;
  void keydown_delete_nonrepeat() const;
  void keydown_capslock_nonrepeat() const;
  void keydown_f1_nonrepeat() const;
  void keydown_f2_nonrepeat() const;
  void keydown_f3_nonrepeat() const;
  void keydown_f4_nonrepeat() const;
  void keydown_f5_nonrepeat() const;
  void keydown_f6_nonrepeat() const;
  void keydown_f7_nonrepeat() const;
  void keydown_f8_nonrepeat() const;
  void keydown_f9_nonrepeat() const;
  void keydown_f10_nonrepeat() const;
  void keydown_f11_nonrepeat() const;
  void keydown_f12_nonrepeat() const;
  void keydown_printscreen_nonrepeat() const;
  void keydown_scrolllock_nonrepeat() const;
  void keydown_pause_nonrepeat() const;
  void keydown_insert_nonrepeat() const;
  void keydown_home_nonrepeat() const;
  void keydown_pageup_nonrepeat() const;
  void keydown_end_nonrepeat() const;
  void keydown_pagedown_nonrepeat() const;
  void keydown_right_nonrepeat() const;
  void keydown_left_nonrepeat() const;
  void keydown_down_nonrepeat() const;
  void keydown_up_nonrepeat() const;
  void keydown_numlockclear_nonrepeat() const;
  void keydown_kp_divide_nonrepeat() const;
  void keydown_kp_multiply_nonrepeat() const;
  void keydown_kp_minus_nonrepeat() const;
  void keydown_kp_plus_nonrepeat() const;
  void keydown_kp_enter_nonrepeat() const;
  void keydown_kp_1_nonrepeat() const;
  void keydown_kp_2_nonrepeat() const;
  void keydown_kp_3_nonrepeat() const;
  void keydown_kp_4_nonrepeat() const;
  void keydown_kp_5_nonrepeat() const;
  void keydown_kp_6_nonrepeat() const;
  void keydown_kp_7_nonrepeat() const;
  void keydown_kp_8_nonrepeat() const;
  void keydown_kp_9_nonrepeat() const;
  void keydown_kp_0_nonrepeat() const;
  void keydown_kp_period_nonrepeat() const;
  void keydown_application_nonrepeat() const;
  void keydown_power_nonrepeat() const;
  void keydown_kp_equals_nonrepeat() const;
  void keydown_f13_nonrepeat() const;
  void keydown_f14_nonrepeat() const;
  void keydown_f15_nonrepeat() const;
  void keydown_f16_nonrepeat() const;
  void keydown_f17_nonrepeat() const;
  void keydown_f18_nonrepeat() const;
  void keydown_f19_nonrepeat() const;
  void keydown_f20_nonrepeat() const;
  void keydown_f21_nonrepeat() const;
  void keydown_f22_nonrepeat() const;
  void keydown_f23_nonrepeat() const;
  void keydown_f24_nonrepeat() const;
  void keydown_execute_nonrepeat() const;
  void keydown_help_nonrepeat() const;
  void keydown_menu_nonrepeat() const;
  void keydown_select_nonrepeat() const;
  void keydown_stop_nonrepeat() const;
  void keydown_again_nonrepeat() const;
  void keydown_undo_nonrepeat() const;
  void keydown_cut_nonrepeat() const;
  void keydown_copy_nonrepeat() const;
  void keydown_paste_nonrepeat() const;
  void keydown_find_nonrepeat() const;
  void keydown_mute_nonrepeat() const;
  void keydown_volumeup_nonrepeat() const;
  void keydown_volumedown_nonrepeat() const;
  void keydown_kp_comma_nonrepeat() const;
  void keydown_kp_equalsas400_nonrepeat() const;
  void keydown_alterase_nonrepeat() const;
  void keydown_sysreq_nonrepeat() const;
  void keydown_cancel_nonrepeat() const;
  void keydown_clear_nonrepeat() const;
  void keydown_prior_nonrepeat() const;
  void keydown_return2_nonrepeat() const;
  void keydown_separator_nonrepeat() const;
  void keydown_out_nonrepeat() const;
  void keydown_oper_nonrepeat() const;
  void keydown_clearagain_nonrepeat() const;
  void keydown_crsel_nonrepeat() const;
  void keydown_exsel_nonrepeat() const;
  void keydown_kp_00_nonrepeat() const;
  void keydown_kp_000_nonrepeat() const;
  void keydown_thousandsseparator_nonrepeat() const;
  void keydown_decimalseparator_nonrepeat() const;
  void keydown_currencyunit_nonrepeat() const;
  void keydown_currencysubunit_nonrepeat() const;
  void keydown_kp_leftparen_nonrepeat() const;
  void keydown_kp_rightparen_nonrepeat() const;
  void keydown_kp_leftbrace_nonrepeat() const;
  void keydown_kp_rightbrace_nonrepeat() const;
  void keydown_kp_tab_nonrepeat() const;
  void keydown_kp_backspace_nonrepeat() const;
  void keydown_kp_a_nonrepeat() const;
  void keydown_kp_b_nonrepeat() const;
  void keydown_kp_c_nonrepeat() const;
  void keydown_kp_d_nonrepeat() const;
  void keydown_kp_e_nonrepeat() const;
  void keydown_kp_f_nonrepeat() const;
  void keydown_kp_xor_nonrepeat() const;
  void keydown_kp_power_nonrepeat() const;
  void keydown_kp_percent_nonrepeat() const;
  void keydown_kp_less_nonrepeat() const;
  void keydown_kp_greater_nonrepeat() const;
  void keydown_kp_ampersand_nonrepeat() const;
  void keydown_kp_dblampersand_nonrepeat() const;
  void keydown_kp_verticalbar_nonrepeat() const;
  void keydown_kp_dblverticalbar_nonrepeat() const;
  void keydown_kp_colon_nonrepeat() const;
  void keydown_kp_hash_nonrepeat() const;
  void keydown_kp_space_nonrepeat() const;
  void keydown_kp_at_nonrepeat() const;
  void keydown_kp_exclam_nonrepeat() const;
  void keydown_kp_memstore_nonrepeat() const;
  void keydown_kp_memrecall_nonrepeat() const;
  void keydown_kp_memclear_nonrepeat() const;
  void keydown_kp_memadd_nonrepeat() const;
  void keydown_kp_memsubtract_nonrepeat() const;
  void keydown_kp_memmultiply_nonrepeat() const;
  void keydown_kp_memdivide_nonrepeat() const;
  void keydown_kp_plusminus_nonrepeat() const;
  void keydown_kp_clear_nonrepeat() const;
  void keydown_kp_clearentry_nonrepeat() const;
  void keydown_kp_binary_nonrepeat() const;
  void keydown_kp_octal_nonrepeat() const;
  void keydown_kp_decimal_nonrepeat() const;
  void keydown_kp_hexadecimal_nonrepeat() const;
  void keydown_lctrl_nonrepeat() const;
  void keydown_lshift_nonrepeat() const;
  void keydown_lalt_nonrepeat() const;
  void keydown_lgui_nonrepeat() const;
  void keydown_rctrl_nonrepeat() const;
  void keydown_rshift_nonrepeat() const;
  void keydown_ralt_nonrepeat() const;
  void keydown_rgui_nonrepeat() const;
  void keydown_mode_nonrepeat() const;
  void keydown_audionext_nonrepeat() const;
  void keydown_audioprev_nonrepeat() const;
  void keydown_audiostop_nonrepeat() const;
  void keydown_audioplay_nonrepeat() const;
  void keydown_audiomute_nonrepeat() const;
  void keydown_mediaselect_nonrepeat() const;
  void keydown_www_nonrepeat() const;
  void keydown_mail_nonrepeat() const;
  void keydown_calculator_nonrepeat() const;
  void keydown_computer_nonrepeat() const;
  void keydown_ac_search_nonrepeat() const;
  void keydown_ac_home_nonrepeat() const;
  void keydown_ac_back_nonrepeat() const;
  void keydown_ac_forward_nonrepeat() const;
  void keydown_ac_stop_nonrepeat() const;
  void keydown_ac_refresh_nonrepeat() const;
  void keydown_ac_bookmarks_nonrepeat() const;
  void keydown_brightnessdown_nonrepeat() const;
  void keydown_brightnessup_nonrepeat() const;
  void keydown_displayswitch_nonrepeat() const;
  void keydown_kbdillumtoggle_nonrepeat() const;
  void keydown_kbdillumdown_nonrepeat() const;
  void keydown_kbdillumup_nonrepeat() const;
  void keydown_eject_nonrepeat() const;
  void keydown_sleep_nonrepeat() const;
  void keyup_unknown() const;
  void keyup_backspace() const;
  void keyup_tab() const;
  void keyup_return() const;
  void keyup_escape() const;
  void keyup_space() const;
  void keyup_exclaim() const;
  void keyup_quotedbl() const;
  void keyup_hash() const;
  void keyup_dollar() const;
  void keyup_percent() const;
  void keyup_ampersand() const;
  void keyup_quote() const;
  void keyup_leftparen() const;
  void keyup_rightparen() const;
  void keyup_asterisk() const;
  void keyup_plus() const;
  void keyup_comma() const;
  void keyup_minus() const;
  void keyup_period() const;
  void keyup_slash() const;
  void keyup_0() const;
  void keyup_1() const;
  void keyup_2() const;
  void keyup_3() const;
  void keyup_4() const;
  void keyup_5() const;
  void keyup_6() const;
  void keyup_7() const;
  void keyup_8() const;
  void keyup_9() const;
  void keyup_colon() const;
  void keyup_semicolon() const;
  void keyup_less() const;
  void keyup_equals() const;
  void keyup_greater() const;
  void keyup_question() const;
  void keyup_at() const;
  void keyup_leftbracket() const;
  void keyup_backslash() const;
  void keyup_rightbracket() const;
  void keyup_caret() const;
  void keyup_underscore() const;
  void keyup_backquote() const;
  void keyup_a() const;
  void keyup_b() const;
  void keyup_c() const;
  void keyup_d() const;
  void keyup_e() const;
  void keyup_f() const;
  void keyup_g() const;
  void keyup_h() const;
  void keyup_i() const;
  void keyup_j() const;
  void keyup_k() const;
  void keyup_l() const;
  void keyup_m() const;
  void keyup_n() const;
  void keyup_o() const;
  void keyup_p() const;
  void keyup_q() const;
  void keyup_r() const;
  void keyup_s() const;
  void keyup_t() const;
  void keyup_u() const;
  void keyup_v() const;
  void keyup_w() const;
  void keyup_x() const;
  void keyup_y() const;
  void keyup_z() const;
  void keyup_delete() const;
  void keyup_capslock() const;
  void keyup_f1() const;
  void keyup_f2() const;
  void keyup_f3() const;
  void keyup_f4() const;
  void keyup_f5() const;
  void keyup_f6() const;
  void keyup_f7() const;
  void keyup_f8() const;
  void keyup_f9() const;
  void keyup_f10() const;
  void keyup_f11() const;
  void keyup_f12() const;
  void keyup_printscreen() const;
  void keyup_scrolllock() const;
  void keyup_pause() const;
  void keyup_insert() const;
  void keyup_home() const;
  void keyup_pageup() const;
  void keyup_end() const;
  void keyup_pagedown() const;
  void keyup_right() const;
  void keyup_left() const;
  void keyup_down() const;
  void keyup_up() const;
  void keyup_numlockclear() const;
  void keyup_kp_divide() const;
  void keyup_kp_multiply() const;
  void keyup_kp_minus() const;
  void keyup_kp_plus() const;
  void keyup_kp_enter() const;
  void keyup_kp_1() const;
  void keyup_kp_2() const;
  void keyup_kp_3() const;
  void keyup_kp_4() const;
  void keyup_kp_5() const;
  void keyup_kp_6() const;
  void keyup_kp_7() const;
  void keyup_kp_8() const;
  void keyup_kp_9() const;
  void keyup_kp_0() const;
  void keyup_kp_period() const;
  void keyup_application() const;
  void keyup_power() const;
  void keyup_kp_equals() const;
  void keyup_f13() const;
  void keyup_f14() const;
  void keyup_f15() const;
  void keyup_f16() const;
  void keyup_f17() const;
  void keyup_f18() const;
  void keyup_f19() const;
  void keyup_f20() const;
  void keyup_f21() const;
  void keyup_f22() const;
  void keyup_f23() const;
  void keyup_f24() const;
  void keyup_execute() const;
  void keyup_help() const;
  void keyup_menu() const;
  void keyup_select() const;
  void keyup_stop() const;
  void keyup_again() const;
  void keyup_undo() const;
  void keyup_cut() const;
  void keyup_copy() const;
  void keyup_paste() const;
  void keyup_find() const;
  void keyup_mute() const;
  void keyup_volumeup() const;
  void keyup_volumedown() const;
  void keyup_kp_comma() const;
  void keyup_kp_equalsas400() const;
  void keyup_alterase() const;
  void keyup_sysreq() const;
  void keyup_cancel() const;
  void keyup_clear() const;
  void keyup_prior() const;
  void keyup_return2() const;
  void keyup_separator() const;
  void keyup_out() const;
  void keyup_oper() const;
  void keyup_clearagain() const;
  void keyup_crsel() const;
  void keyup_exsel() const;
  void keyup_kp_00() const;
  void keyup_kp_000() const;
  void keyup_thousandsseparator() const;
  void keyup_decimalseparator() const;
  void keyup_currencyunit() const;
  void keyup_currencysubunit() const;
  void keyup_kp_leftparen() const;
  void keyup_kp_rightparen() const;
  void keyup_kp_leftbrace() const;
  void keyup_kp_rightbrace() const;
  void keyup_kp_tab() const;
  void keyup_kp_backspace() const;
  void keyup_kp_a() const;
  void keyup_kp_b() const;
  void keyup_kp_c() const;
  void keyup_kp_d() const;
  void keyup_kp_e() const;
  void keyup_kp_f() const;
  void keyup_kp_xor() const;
  void keyup_kp_power() const;
  void keyup_kp_percent() const;
  void keyup_kp_less() const;
  void keyup_kp_greater() const;
  void keyup_kp_ampersand() const;
  void keyup_kp_dblampersand() const;
  void keyup_kp_verticalbar() const;
  void keyup_kp_dblverticalbar() const;
  void keyup_kp_colon() const;
  void keyup_kp_hash() const;
  void keyup_kp_space() const;
  void keyup_kp_at() const;
  void keyup_kp_exclam() const;
  void keyup_kp_memstore() const;
  void keyup_kp_memrecall() const;
  void keyup_kp_memclear() const;
  void keyup_kp_memadd() const;
  void keyup_kp_memsubtract() const;
  void keyup_kp_memmultiply() const;
  void keyup_kp_memdivide() const;
  void keyup_kp_plusminus() const;
  void keyup_kp_clear() const;
  void keyup_kp_clearentry() const;
  void keyup_kp_binary() const;
  void keyup_kp_octal() const;
  void keyup_kp_decimal() const;
  void keyup_kp_hexadecimal() const;
  void keyup_lctrl() const;
  void keyup_lshift() const;
  void keyup_lalt() const;
  void keyup_lgui() const;
  void keyup_rctrl() const;
  void keyup_rshift() const;
  void keyup_ralt() const;
  void keyup_rgui() const;
  void keyup_mode() const;
  void keyup_audionext() const;
  void keyup_audioprev() const;
  void keyup_audiostop() const;
  void keyup_audioplay() const;
  void keyup_audiomute() const;
  void keyup_mediaselect() const;
  void keyup_www() const;
  void keyup_mail() const;
  void keyup_calculator() const;
  void keyup_computer() const;
  void keyup_ac_search() const;
  void keyup_ac_home() const;
  void keyup_ac_back() const;
  void keyup_ac_forward() const;
  void keyup_ac_stop() const;
  void keyup_ac_refresh() const;
  void keyup_ac_bookmarks() const;
  void keyup_brightnessdown() const;
  void keyup_brightnessup() const;
  void keyup_displayswitch() const;
  void keyup_kbdillumtoggle() const;
  void keyup_kbdillumdown() const;
  void keyup_kbdillumup() const;
  void keyup_eject() const;
  void keyup_sleep() const;

  connection on_quit(quit_slot_t const& op);
  connection on_keydown_unknown_repeat(
    keydown_unknown_repeat_slot_t const& op);
  connection on_keydown_backspace_repeat(
    keydown_backspace_repeat_slot_t const& op);
  connection on_keydown_tab_repeat(keydown_tab_repeat_slot_t const& op);
  connection on_keydown_return_repeat(keydown_return_repeat_slot_t const& op);
  connection on_keydown_escape_repeat(keydown_escape_repeat_slot_t const& op);
  connection on_keydown_space_repeat(keydown_space_repeat_slot_t const& op);
  connection on_keydown_exclaim_repeat(
    keydown_exclaim_repeat_slot_t const& op);
  connection on_keydown_quotedbl_repeat(
    keydown_quotedbl_repeat_slot_t const& op);
  connection on_keydown_hash_repeat(keydown_hash_repeat_slot_t const& op);
  connection on_keydown_dollar_repeat(keydown_dollar_repeat_slot_t const& op);
  connection on_keydown_percent_repeat(
    keydown_percent_repeat_slot_t const& op);
  connection on_keydown_ampersand_repeat(
    keydown_ampersand_repeat_slot_t const& op);
  connection on_keydown_quote_repeat(keydown_quote_repeat_slot_t const& op);
  connection on_keydown_leftparen_repeat(
    keydown_leftparen_repeat_slot_t const& op);
  connection on_keydown_rightparen_repeat(
    keydown_rightparen_repeat_slot_t const& op);
  connection on_keydown_asterisk_repeat(
    keydown_asterisk_repeat_slot_t const& op);
  connection on_keydown_plus_repeat(keydown_plus_repeat_slot_t const& op);
  connection on_keydown_comma_repeat(keydown_comma_repeat_slot_t const& op);
  connection on_keydown_minus_repeat(keydown_minus_repeat_slot_t const& op);
  connection on_keydown_period_repeat(keydown_period_repeat_slot_t const& op);
  connection on_keydown_slash_repeat(keydown_slash_repeat_slot_t const& op);
  connection on_keydown_0_repeat(keydown_0_repeat_slot_t const& op);
  connection on_keydown_1_repeat(keydown_1_repeat_slot_t const& op);
  connection on_keydown_2_repeat(keydown_2_repeat_slot_t const& op);
  connection on_keydown_3_repeat(keydown_3_repeat_slot_t const& op);
  connection on_keydown_4_repeat(keydown_4_repeat_slot_t const& op);
  connection on_keydown_5_repeat(keydown_5_repeat_slot_t const& op);
  connection on_keydown_6_repeat(keydown_6_repeat_slot_t const& op);
  connection on_keydown_7_repeat(keydown_7_repeat_slot_t const& op);
  connection on_keydown_8_repeat(keydown_8_repeat_slot_t const& op);
  connection on_keydown_9_repeat(keydown_9_repeat_slot_t const& op);
  connection on_keydown_colon_repeat(keydown_colon_repeat_slot_t const& op);
  connection on_keydown_semicolon_repeat(
    keydown_semicolon_repeat_slot_t const& op);
  connection on_keydown_less_repeat(keydown_less_repeat_slot_t const& op);
  connection on_keydown_equals_repeat(keydown_equals_repeat_slot_t const& op);
  connection on_keydown_greater_repeat(
    keydown_greater_repeat_slot_t const& op);
  connection on_keydown_question_repeat(
    keydown_question_repeat_slot_t const& op);
  connection on_keydown_at_repeat(keydown_at_repeat_slot_t const& op);
  connection on_keydown_leftbracket_repeat(
    keydown_leftbracket_repeat_slot_t const& op);
  connection on_keydown_backslash_repeat(
    keydown_backslash_repeat_slot_t const& op);
  connection on_keydown_rightbracket_repeat(
    keydown_rightbracket_repeat_slot_t const& op);
  connection on_keydown_caret_repeat(keydown_caret_repeat_slot_t const& op);
  connection on_keydown_underscore_repeat(
    keydown_underscore_repeat_slot_t const& op);
  connection on_keydown_backquote_repeat(
    keydown_backquote_repeat_slot_t const& op);
  connection on_keydown_a_repeat(keydown_a_repeat_slot_t const& op);
  connection on_keydown_b_repeat(keydown_b_repeat_slot_t const& op);
  connection on_keydown_c_repeat(keydown_c_repeat_slot_t const& op);
  connection on_keydown_d_repeat(keydown_d_repeat_slot_t const& op);
  connection on_keydown_e_repeat(keydown_e_repeat_slot_t const& op);
  connection on_keydown_f_repeat(keydown_f_repeat_slot_t const& op);
  connection on_keydown_g_repeat(keydown_g_repeat_slot_t const& op);
  connection on_keydown_h_repeat(keydown_h_repeat_slot_t const& op);
  connection on_keydown_i_repeat(keydown_i_repeat_slot_t const& op);
  connection on_keydown_j_repeat(keydown_j_repeat_slot_t const& op);
  connection on_keydown_k_repeat(keydown_k_repeat_slot_t const& op);
  connection on_keydown_l_repeat(keydown_l_repeat_slot_t const& op);
  connection on_keydown_m_repeat(keydown_m_repeat_slot_t const& op);
  connection on_keydown_n_repeat(keydown_n_repeat_slot_t const& op);
  connection on_keydown_o_repeat(keydown_o_repeat_slot_t const& op);
  connection on_keydown_p_repeat(keydown_p_repeat_slot_t const& op);
  connection on_keydown_q_repeat(keydown_q_repeat_slot_t const& op);
  connection on_keydown_r_repeat(keydown_r_repeat_slot_t const& op);
  connection on_keydown_s_repeat(keydown_s_repeat_slot_t const& op);
  connection on_keydown_t_repeat(keydown_t_repeat_slot_t const& op);
  connection on_keydown_u_repeat(keydown_u_repeat_slot_t const& op);
  connection on_keydown_v_repeat(keydown_v_repeat_slot_t const& op);
  connection on_keydown_w_repeat(keydown_w_repeat_slot_t const& op);
  connection on_keydown_x_repeat(keydown_x_repeat_slot_t const& op);
  connection on_keydown_y_repeat(keydown_y_repeat_slot_t const& op);
  connection on_keydown_z_repeat(keydown_z_repeat_slot_t const& op);
  connection on_keydown_delete_repeat(keydown_delete_repeat_slot_t const& op);
  connection on_keydown_capslock_repeat(
    keydown_capslock_repeat_slot_t const& op);
  connection on_keydown_f1_repeat(keydown_f1_repeat_slot_t const& op);
  connection on_keydown_f2_repeat(keydown_f2_repeat_slot_t const& op);
  connection on_keydown_f3_repeat(keydown_f3_repeat_slot_t const& op);
  connection on_keydown_f4_repeat(keydown_f4_repeat_slot_t const& op);
  connection on_keydown_f5_repeat(keydown_f5_repeat_slot_t const& op);
  connection on_keydown_f6_repeat(keydown_f6_repeat_slot_t const& op);
  connection on_keydown_f7_repeat(keydown_f7_repeat_slot_t const& op);
  connection on_keydown_f8_repeat(keydown_f8_repeat_slot_t const& op);
  connection on_keydown_f9_repeat(keydown_f9_repeat_slot_t const& op);
  connection on_keydown_f10_repeat(keydown_f10_repeat_slot_t const& op);
  connection on_keydown_f11_repeat(keydown_f11_repeat_slot_t const& op);
  connection on_keydown_f12_repeat(keydown_f12_repeat_slot_t const& op);
  connection on_keydown_printscreen_repeat(
    keydown_printscreen_repeat_slot_t const& op);
  connection on_keydown_scrolllock_repeat(
    keydown_scrolllock_repeat_slot_t const& op);
  connection on_keydown_pause_repeat(keydown_pause_repeat_slot_t const& op);
  connection on_keydown_insert_repeat(keydown_insert_repeat_slot_t const& op);
  connection on_keydown_home_repeat(keydown_home_repeat_slot_t const& op);
  connection on_keydown_pageup_repeat(keydown_pageup_repeat_slot_t const& op);
  connection on_keydown_end_repeat(keydown_end_repeat_slot_t const& op);
  connection on_keydown_pagedown_repeat(
    keydown_pagedown_repeat_slot_t const& op);
  connection on_keydown_right_repeat(keydown_right_repeat_slot_t const& op);
  connection on_keydown_left_repeat(keydown_left_repeat_slot_t const& op);
  connection on_keydown_down_repeat(keydown_down_repeat_slot_t const& op);
  connection on_keydown_up_repeat(keydown_up_repeat_slot_t const& op);
  connection on_keydown_numlockclear_repeat(
    keydown_numlockclear_repeat_slot_t const& op);
  connection on_keydown_kp_divide_repeat(
    keydown_kp_divide_repeat_slot_t const& op);
  connection on_keydown_kp_multiply_repeat(
    keydown_kp_multiply_repeat_slot_t const& op);
  connection on_keydown_kp_minus_repeat(
    keydown_kp_minus_repeat_slot_t const& op);
  connection on_keydown_kp_plus_repeat(
    keydown_kp_plus_repeat_slot_t const& op);
  connection on_keydown_kp_enter_repeat(
    keydown_kp_enter_repeat_slot_t const& op);
  connection on_keydown_kp_1_repeat(keydown_kp_1_repeat_slot_t const& op);
  connection on_keydown_kp_2_repeat(keydown_kp_2_repeat_slot_t const& op);
  connection on_keydown_kp_3_repeat(keydown_kp_3_repeat_slot_t const& op);
  connection on_keydown_kp_4_repeat(keydown_kp_4_repeat_slot_t const& op);
  connection on_keydown_kp_5_repeat(keydown_kp_5_repeat_slot_t const& op);
  connection on_keydown_kp_6_repeat(keydown_kp_6_repeat_slot_t const& op);
  connection on_keydown_kp_7_repeat(keydown_kp_7_repeat_slot_t const& op);
  connection on_keydown_kp_8_repeat(keydown_kp_8_repeat_slot_t const& op);
  connection on_keydown_kp_9_repeat(keydown_kp_9_repeat_slot_t const& op);
  connection on_keydown_kp_0_repeat(keydown_kp_0_repeat_slot_t const& op);
  connection on_keydown_kp_period_repeat(
    keydown_kp_period_repeat_slot_t const& op);
  connection on_keydown_application_repeat(
    keydown_application_repeat_slot_t const& op);
  connection on_keydown_power_repeat(keydown_power_repeat_slot_t const& op);
  connection on_keydown_kp_equals_repeat(
    keydown_kp_equals_repeat_slot_t const& op);
  connection on_keydown_f13_repeat(keydown_f13_repeat_slot_t const& op);
  connection on_keydown_f14_repeat(keydown_f14_repeat_slot_t const& op);
  connection on_keydown_f15_repeat(keydown_f15_repeat_slot_t const& op);
  connection on_keydown_f16_repeat(keydown_f16_repeat_slot_t const& op);
  connection on_keydown_f17_repeat(keydown_f17_repeat_slot_t const& op);
  connection on_keydown_f18_repeat(keydown_f18_repeat_slot_t const& op);
  connection on_keydown_f19_repeat(keydown_f19_repeat_slot_t const& op);
  connection on_keydown_f20_repeat(keydown_f20_repeat_slot_t const& op);
  connection on_keydown_f21_repeat(keydown_f21_repeat_slot_t const& op);
  connection on_keydown_f22_repeat(keydown_f22_repeat_slot_t const& op);
  connection on_keydown_f23_repeat(keydown_f23_repeat_slot_t const& op);
  connection on_keydown_f24_repeat(keydown_f24_repeat_slot_t const& op);
  connection on_keydown_execute_repeat(
    keydown_execute_repeat_slot_t const& op);
  connection on_keydown_help_repeat(keydown_help_repeat_slot_t const& op);
  connection on_keydown_menu_repeat(keydown_menu_repeat_slot_t const& op);
  connection on_keydown_select_repeat(keydown_select_repeat_slot_t const& op);
  connection on_keydown_stop_repeat(keydown_stop_repeat_slot_t const& op);
  connection on_keydown_again_repeat(keydown_again_repeat_slot_t const& op);
  connection on_keydown_undo_repeat(keydown_undo_repeat_slot_t const& op);
  connection on_keydown_cut_repeat(keydown_cut_repeat_slot_t const& op);
  connection on_keydown_copy_repeat(keydown_copy_repeat_slot_t const& op);
  connection on_keydown_paste_repeat(keydown_paste_repeat_slot_t const& op);
  connection on_keydown_find_repeat(keydown_find_repeat_slot_t const& op);
  connection on_keydown_mute_repeat(keydown_mute_repeat_slot_t const& op);
  connection on_keydown_volumeup_repeat(
    keydown_volumeup_repeat_slot_t const& op);
  connection on_keydown_volumedown_repeat(
    keydown_volumedown_repeat_slot_t const& op);
  connection on_keydown_kp_comma_repeat(
    keydown_kp_comma_repeat_slot_t const& op);
  connection on_keydown_kp_equalsas400_repeat(
    keydown_kp_equalsas400_repeat_slot_t const& op);
  connection on_keydown_alterase_repeat(
    keydown_alterase_repeat_slot_t const& op);
  connection on_keydown_sysreq_repeat(keydown_sysreq_repeat_slot_t const& op);
  connection on_keydown_cancel_repeat(keydown_cancel_repeat_slot_t const& op);
  connection on_keydown_clear_repeat(keydown_clear_repeat_slot_t const& op);
  connection on_keydown_prior_repeat(keydown_prior_repeat_slot_t const& op);
  connection on_keydown_return2_repeat(
    keydown_return2_repeat_slot_t const& op);
  connection on_keydown_separator_repeat(
    keydown_separator_repeat_slot_t const& op);
  connection on_keydown_out_repeat(keydown_out_repeat_slot_t const& op);
  connection on_keydown_oper_repeat(keydown_oper_repeat_slot_t const& op);
  connection on_keydown_clearagain_repeat(
    keydown_clearagain_repeat_slot_t const& op);
  connection on_keydown_crsel_repeat(keydown_crsel_repeat_slot_t const& op);
  connection on_keydown_exsel_repeat(keydown_exsel_repeat_slot_t const& op);
  connection on_keydown_kp_00_repeat(keydown_kp_00_repeat_slot_t const& op);
  connection on_keydown_kp_000_repeat(keydown_kp_000_repeat_slot_t const& op);
  connection on_keydown_thousandsseparator_repeat(
    keydown_thousandsseparator_repeat_slot_t const& op);
  connection on_keydown_decimalseparator_repeat(
    keydown_decimalseparator_repeat_slot_t const& op);
  connection on_keydown_currencyunit_repeat(
    keydown_currencyunit_repeat_slot_t const& op);
  connection on_keydown_currencysubunit_repeat(
    keydown_currencysubunit_repeat_slot_t const& op);
  connection on_keydown_kp_leftparen_repeat(
    keydown_kp_leftparen_repeat_slot_t const& op);
  connection on_keydown_kp_rightparen_repeat(
    keydown_kp_rightparen_repeat_slot_t const& op);
  connection on_keydown_kp_leftbrace_repeat(
    keydown_kp_leftbrace_repeat_slot_t const& op);
  connection on_keydown_kp_rightbrace_repeat(
    keydown_kp_rightbrace_repeat_slot_t const& op);
  connection on_keydown_kp_tab_repeat(keydown_kp_tab_repeat_slot_t const& op);
  connection on_keydown_kp_backspace_repeat(
    keydown_kp_backspace_repeat_slot_t const& op);
  connection on_keydown_kp_a_repeat(keydown_kp_a_repeat_slot_t const& op);
  connection on_keydown_kp_b_repeat(keydown_kp_b_repeat_slot_t const& op);
  connection on_keydown_kp_c_repeat(keydown_kp_c_repeat_slot_t const& op);
  connection on_keydown_kp_d_repeat(keydown_kp_d_repeat_slot_t const& op);
  connection on_keydown_kp_e_repeat(keydown_kp_e_repeat_slot_t const& op);
  connection on_keydown_kp_f_repeat(keydown_kp_f_repeat_slot_t const& op);
  connection on_keydown_kp_xor_repeat(keydown_kp_xor_repeat_slot_t const& op);
  connection on_keydown_kp_power_repeat(
    keydown_kp_power_repeat_slot_t const& op);
  connection on_keydown_kp_percent_repeat(
    keydown_kp_percent_repeat_slot_t const& op);
  connection on_keydown_kp_less_repeat(
    keydown_kp_less_repeat_slot_t const& op);
  connection on_keydown_kp_greater_repeat(
    keydown_kp_greater_repeat_slot_t const& op);
  connection on_keydown_kp_ampersand_repeat(
    keydown_kp_ampersand_repeat_slot_t const& op);
  connection on_keydown_kp_dblampersand_repeat(
    keydown_kp_dblampersand_repeat_slot_t const& op);
  connection on_keydown_kp_verticalbar_repeat(
    keydown_kp_verticalbar_repeat_slot_t const& op);
  connection on_keydown_kp_dblverticalbar_repeat(
    keydown_kp_dblverticalbar_repeat_slot_t const& op);
  connection on_keydown_kp_colon_repeat(
    keydown_kp_colon_repeat_slot_t const& op);
  connection on_keydown_kp_hash_repeat(
    keydown_kp_hash_repeat_slot_t const& op);
  connection on_keydown_kp_space_repeat(
    keydown_kp_space_repeat_slot_t const& op);
  connection on_keydown_kp_at_repeat(keydown_kp_at_repeat_slot_t const& op);
  connection on_keydown_kp_exclam_repeat(
    keydown_kp_exclam_repeat_slot_t const& op);
  connection on_keydown_kp_memstore_repeat(
    keydown_kp_memstore_repeat_slot_t const& op);
  connection on_keydown_kp_memrecall_repeat(
    keydown_kp_memrecall_repeat_slot_t const& op);
  connection on_keydown_kp_memclear_repeat(
    keydown_kp_memclear_repeat_slot_t const& op);
  connection on_keydown_kp_memadd_repeat(
    keydown_kp_memadd_repeat_slot_t const& op);
  connection on_keydown_kp_memsubtract_repeat(
    keydown_kp_memsubtract_repeat_slot_t const& op);
  connection on_keydown_kp_memmultiply_repeat(
    keydown_kp_memmultiply_repeat_slot_t const& op);
  connection on_keydown_kp_memdivide_repeat(
    keydown_kp_memdivide_repeat_slot_t const& op);
  connection on_keydown_kp_plusminus_repeat(
    keydown_kp_plusminus_repeat_slot_t const& op);
  connection on_keydown_kp_clear_repeat(
    keydown_kp_clear_repeat_slot_t const& op);
  connection on_keydown_kp_clearentry_repeat(
    keydown_kp_clearentry_repeat_slot_t const& op);
  connection on_keydown_kp_binary_repeat(
    keydown_kp_binary_repeat_slot_t const& op);
  connection on_keydown_kp_octal_repeat(
    keydown_kp_octal_repeat_slot_t const& op);
  connection on_keydown_kp_decimal_repeat(
    keydown_kp_decimal_repeat_slot_t const& op);
  connection on_keydown_kp_hexadecimal_repeat(
    keydown_kp_hexadecimal_repeat_slot_t const& op);
  connection on_keydown_lctrl_repeat(keydown_lctrl_repeat_slot_t const& op);
  connection on_keydown_lshift_repeat(keydown_lshift_repeat_slot_t const& op);
  connection on_keydown_lalt_repeat(keydown_lalt_repeat_slot_t const& op);
  connection on_keydown_lgui_repeat(keydown_lgui_repeat_slot_t const& op);
  connection on_keydown_rctrl_repeat(keydown_rctrl_repeat_slot_t const& op);
  connection on_keydown_rshift_repeat(keydown_rshift_repeat_slot_t const& op);
  connection on_keydown_ralt_repeat(keydown_ralt_repeat_slot_t const& op);
  connection on_keydown_rgui_repeat(keydown_rgui_repeat_slot_t const& op);
  connection on_keydown_mode_repeat(keydown_mode_repeat_slot_t const& op);
  connection on_keydown_audionext_repeat(
    keydown_audionext_repeat_slot_t const& op);
  connection on_keydown_audioprev_repeat(
    keydown_audioprev_repeat_slot_t const& op);
  connection on_keydown_audiostop_repeat(
    keydown_audiostop_repeat_slot_t const& op);
  connection on_keydown_audioplay_repeat(
    keydown_audioplay_repeat_slot_t const& op);
  connection on_keydown_audiomute_repeat(
    keydown_audiomute_repeat_slot_t const& op);
  connection on_keydown_mediaselect_repeat(
    keydown_mediaselect_repeat_slot_t const& op);
  connection on_keydown_www_repeat(keydown_www_repeat_slot_t const& op);
  connection on_keydown_mail_repeat(keydown_mail_repeat_slot_t const& op);
  connection on_keydown_calculator_repeat(
    keydown_calculator_repeat_slot_t const& op);
  connection on_keydown_computer_repeat(
    keydown_computer_repeat_slot_t const& op);
  connection on_keydown_ac_search_repeat(
    keydown_ac_search_repeat_slot_t const& op);
  connection on_keydown_ac_home_repeat(
    keydown_ac_home_repeat_slot_t const& op);
  connection on_keydown_ac_back_repeat(
    keydown_ac_back_repeat_slot_t const& op);
  connection on_keydown_ac_forward_repeat(
    keydown_ac_forward_repeat_slot_t const& op);
  connection on_keydown_ac_stop_repeat(
    keydown_ac_stop_repeat_slot_t const& op);
  connection on_keydown_ac_refresh_repeat(
    keydown_ac_refresh_repeat_slot_t const& op);
  connection on_keydown_ac_bookmarks_repeat(
    keydown_ac_bookmarks_repeat_slot_t const& op);
  connection on_keydown_brightnessdown_repeat(
    keydown_brightnessdown_repeat_slot_t const& op);
  connection on_keydown_brightnessup_repeat(
    keydown_brightnessup_repeat_slot_t const& op);
  connection on_keydown_displayswitch_repeat(
    keydown_displayswitch_repeat_slot_t const& op);
  connection on_keydown_kbdillumtoggle_repeat(
    keydown_kbdillumtoggle_repeat_slot_t const& op);
  connection on_keydown_kbdillumdown_repeat(
    keydown_kbdillumdown_repeat_slot_t const& op);
  connection on_keydown_kbdillumup_repeat(
    keydown_kbdillumup_repeat_slot_t const& op);
  connection on_keydown_eject_repeat(keydown_eject_repeat_slot_t const& op);
  connection on_keydown_sleep_repeat(keydown_sleep_repeat_slot_t const& op);
  connection on_keydown_unknown_nonrepeat(
    keydown_unknown_nonrepeat_slot_t const& op);
  connection on_keydown_backspace_nonrepeat(
    keydown_backspace_nonrepeat_slot_t const& op);
  connection on_keydown_tab_nonrepeat(keydown_tab_nonrepeat_slot_t const& op);
  connection on_keydown_return_nonrepeat(
    keydown_return_nonrepeat_slot_t const& op);
  connection on_keydown_escape_nonrepeat(
    keydown_escape_nonrepeat_slot_t const& op);
  connection on_keydown_space_nonrepeat(
    keydown_space_nonrepeat_slot_t const& op);
  connection on_keydown_exclaim_nonrepeat(
    keydown_exclaim_nonrepeat_slot_t const& op);
  connection on_keydown_quotedbl_nonrepeat(
    keydown_quotedbl_nonrepeat_slot_t const& op);
  connection on_keydown_hash_nonrepeat(
    keydown_hash_nonrepeat_slot_t const& op);
  connection on_keydown_dollar_nonrepeat(
    keydown_dollar_nonrepeat_slot_t const& op);
  connection on_keydown_percent_nonrepeat(
    keydown_percent_nonrepeat_slot_t const& op);
  connection on_keydown_ampersand_nonrepeat(
    keydown_ampersand_nonrepeat_slot_t const& op);
  connection on_keydown_quote_nonrepeat(
    keydown_quote_nonrepeat_slot_t const& op);
  connection on_keydown_leftparen_nonrepeat(
    keydown_leftparen_nonrepeat_slot_t const& op);
  connection on_keydown_rightparen_nonrepeat(
    keydown_rightparen_nonrepeat_slot_t const& op);
  connection on_keydown_asterisk_nonrepeat(
    keydown_asterisk_nonrepeat_slot_t const& op);
  connection on_keydown_plus_nonrepeat(
    keydown_plus_nonrepeat_slot_t const& op);
  connection on_keydown_comma_nonrepeat(
    keydown_comma_nonrepeat_slot_t const& op);
  connection on_keydown_minus_nonrepeat(
    keydown_minus_nonrepeat_slot_t const& op);
  connection on_keydown_period_nonrepeat(
    keydown_period_nonrepeat_slot_t const& op);
  connection on_keydown_slash_nonrepeat(
    keydown_slash_nonrepeat_slot_t const& op);
  connection on_keydown_0_nonrepeat(keydown_0_nonrepeat_slot_t const& op);
  connection on_keydown_1_nonrepeat(keydown_1_nonrepeat_slot_t const& op);
  connection on_keydown_2_nonrepeat(keydown_2_nonrepeat_slot_t const& op);
  connection on_keydown_3_nonrepeat(keydown_3_nonrepeat_slot_t const& op);
  connection on_keydown_4_nonrepeat(keydown_4_nonrepeat_slot_t const& op);
  connection on_keydown_5_nonrepeat(keydown_5_nonrepeat_slot_t const& op);
  connection on_keydown_6_nonrepeat(keydown_6_nonrepeat_slot_t const& op);
  connection on_keydown_7_nonrepeat(keydown_7_nonrepeat_slot_t const& op);
  connection on_keydown_8_nonrepeat(keydown_8_nonrepeat_slot_t const& op);
  connection on_keydown_9_nonrepeat(keydown_9_nonrepeat_slot_t const& op);
  connection on_keydown_colon_nonrepeat(
    keydown_colon_nonrepeat_slot_t const& op);
  connection on_keydown_semicolon_nonrepeat(
    keydown_semicolon_nonrepeat_slot_t const& op);
  connection on_keydown_less_nonrepeat(
    keydown_less_nonrepeat_slot_t const& op);
  connection on_keydown_equals_nonrepeat(
    keydown_equals_nonrepeat_slot_t const& op);
  connection on_keydown_greater_nonrepeat(
    keydown_greater_nonrepeat_slot_t const& op);
  connection on_keydown_question_nonrepeat(
    keydown_question_nonrepeat_slot_t const& op);
  connection on_keydown_at_nonrepeat(keydown_at_nonrepeat_slot_t const& op);
  connection on_keydown_leftbracket_nonrepeat(
    keydown_leftbracket_nonrepeat_slot_t const& op);
  connection on_keydown_backslash_nonrepeat(
    keydown_backslash_nonrepeat_slot_t const& op);
  connection on_keydown_rightbracket_nonrepeat(
    keydown_rightbracket_nonrepeat_slot_t const& op);
  connection on_keydown_caret_nonrepeat(
    keydown_caret_nonrepeat_slot_t const& op);
  connection on_keydown_underscore_nonrepeat(
    keydown_underscore_nonrepeat_slot_t const& op);
  connection on_keydown_backquote_nonrepeat(
    keydown_backquote_nonrepeat_slot_t const& op);
  connection on_keydown_a_nonrepeat(keydown_a_nonrepeat_slot_t const& op);
  connection on_keydown_b_nonrepeat(keydown_b_nonrepeat_slot_t const& op);
  connection on_keydown_c_nonrepeat(keydown_c_nonrepeat_slot_t const& op);
  connection on_keydown_d_nonrepeat(keydown_d_nonrepeat_slot_t const& op);
  connection on_keydown_e_nonrepeat(keydown_e_nonrepeat_slot_t const& op);
  connection on_keydown_f_nonrepeat(keydown_f_nonrepeat_slot_t const& op);
  connection on_keydown_g_nonrepeat(keydown_g_nonrepeat_slot_t const& op);
  connection on_keydown_h_nonrepeat(keydown_h_nonrepeat_slot_t const& op);
  connection on_keydown_i_nonrepeat(keydown_i_nonrepeat_slot_t const& op);
  connection on_keydown_j_nonrepeat(keydown_j_nonrepeat_slot_t const& op);
  connection on_keydown_k_nonrepeat(keydown_k_nonrepeat_slot_t const& op);
  connection on_keydown_l_nonrepeat(keydown_l_nonrepeat_slot_t const& op);
  connection on_keydown_m_nonrepeat(keydown_m_nonrepeat_slot_t const& op);
  connection on_keydown_n_nonrepeat(keydown_n_nonrepeat_slot_t const& op);
  connection on_keydown_o_nonrepeat(keydown_o_nonrepeat_slot_t const& op);
  connection on_keydown_p_nonrepeat(keydown_p_nonrepeat_slot_t const& op);
  connection on_keydown_q_nonrepeat(keydown_q_nonrepeat_slot_t const& op);
  connection on_keydown_r_nonrepeat(keydown_r_nonrepeat_slot_t const& op);
  connection on_keydown_s_nonrepeat(keydown_s_nonrepeat_slot_t const& op);
  connection on_keydown_t_nonrepeat(keydown_t_nonrepeat_slot_t const& op);
  connection on_keydown_u_nonrepeat(keydown_u_nonrepeat_slot_t const& op);
  connection on_keydown_v_nonrepeat(keydown_v_nonrepeat_slot_t const& op);
  connection on_keydown_w_nonrepeat(keydown_w_nonrepeat_slot_t const& op);
  connection on_keydown_x_nonrepeat(keydown_x_nonrepeat_slot_t const& op);
  connection on_keydown_y_nonrepeat(keydown_y_nonrepeat_slot_t const& op);
  connection on_keydown_z_nonrepeat(keydown_z_nonrepeat_slot_t const& op);
  connection on_keydown_delete_nonrepeat(
    keydown_delete_nonrepeat_slot_t const& op);
  connection on_keydown_capslock_nonrepeat(
    keydown_capslock_nonrepeat_slot_t const& op);
  connection on_keydown_f1_nonrepeat(keydown_f1_nonrepeat_slot_t const& op);
  connection on_keydown_f2_nonrepeat(keydown_f2_nonrepeat_slot_t const& op);
  connection on_keydown_f3_nonrepeat(keydown_f3_nonrepeat_slot_t const& op);
  connection on_keydown_f4_nonrepeat(keydown_f4_nonrepeat_slot_t const& op);
  connection on_keydown_f5_nonrepeat(keydown_f5_nonrepeat_slot_t const& op);
  connection on_keydown_f6_nonrepeat(keydown_f6_nonrepeat_slot_t const& op);
  connection on_keydown_f7_nonrepeat(keydown_f7_nonrepeat_slot_t const& op);
  connection on_keydown_f8_nonrepeat(keydown_f8_nonrepeat_slot_t const& op);
  connection on_keydown_f9_nonrepeat(keydown_f9_nonrepeat_slot_t const& op);
  connection on_keydown_f10_nonrepeat(keydown_f10_nonrepeat_slot_t const& op);
  connection on_keydown_f11_nonrepeat(keydown_f11_nonrepeat_slot_t const& op);
  connection on_keydown_f12_nonrepeat(keydown_f12_nonrepeat_slot_t const& op);
  connection on_keydown_printscreen_nonrepeat(
    keydown_printscreen_nonrepeat_slot_t const& op);
  connection on_keydown_scrolllock_nonrepeat(
    keydown_scrolllock_nonrepeat_slot_t const& op);
  connection on_keydown_pause_nonrepeat(
    keydown_pause_nonrepeat_slot_t const& op);
  connection on_keydown_insert_nonrepeat(
    keydown_insert_nonrepeat_slot_t const& op);
  connection on_keydown_home_nonrepeat(
    keydown_home_nonrepeat_slot_t const& op);
  connection on_keydown_pageup_nonrepeat(
    keydown_pageup_nonrepeat_slot_t const& op);
  connection on_keydown_end_nonrepeat(keydown_end_nonrepeat_slot_t const& op);
  connection on_keydown_pagedown_nonrepeat(
    keydown_pagedown_nonrepeat_slot_t const& op);
  connection on_keydown_right_nonrepeat(
    keydown_right_nonrepeat_slot_t const& op);
  connection on_keydown_left_nonrepeat(
    keydown_left_nonrepeat_slot_t const& op);
  connection on_keydown_down_nonrepeat(
    keydown_down_nonrepeat_slot_t const& op);
  connection on_keydown_up_nonrepeat(keydown_up_nonrepeat_slot_t const& op);
  connection on_keydown_numlockclear_nonrepeat(
    keydown_numlockclear_nonrepeat_slot_t const& op);
  connection on_keydown_kp_divide_nonrepeat(
    keydown_kp_divide_nonrepeat_slot_t const& op);
  connection on_keydown_kp_multiply_nonrepeat(
    keydown_kp_multiply_nonrepeat_slot_t const& op);
  connection on_keydown_kp_minus_nonrepeat(
    keydown_kp_minus_nonrepeat_slot_t const& op);
  connection on_keydown_kp_plus_nonrepeat(
    keydown_kp_plus_nonrepeat_slot_t const& op);
  connection on_keydown_kp_enter_nonrepeat(
    keydown_kp_enter_nonrepeat_slot_t const& op);
  connection on_keydown_kp_1_nonrepeat(
    keydown_kp_1_nonrepeat_slot_t const& op);
  connection on_keydown_kp_2_nonrepeat(
    keydown_kp_2_nonrepeat_slot_t const& op);
  connection on_keydown_kp_3_nonrepeat(
    keydown_kp_3_nonrepeat_slot_t const& op);
  connection on_keydown_kp_4_nonrepeat(
    keydown_kp_4_nonrepeat_slot_t const& op);
  connection on_keydown_kp_5_nonrepeat(
    keydown_kp_5_nonrepeat_slot_t const& op);
  connection on_keydown_kp_6_nonrepeat(
    keydown_kp_6_nonrepeat_slot_t const& op);
  connection on_keydown_kp_7_nonrepeat(
    keydown_kp_7_nonrepeat_slot_t const& op);
  connection on_keydown_kp_8_nonrepeat(
    keydown_kp_8_nonrepeat_slot_t const& op);
  connection on_keydown_kp_9_nonrepeat(
    keydown_kp_9_nonrepeat_slot_t const& op);
  connection on_keydown_kp_0_nonrepeat(
    keydown_kp_0_nonrepeat_slot_t const& op);
  connection on_keydown_kp_period_nonrepeat(
    keydown_kp_period_nonrepeat_slot_t const& op);
  connection on_keydown_application_nonrepeat(
    keydown_application_nonrepeat_slot_t const& op);
  connection on_keydown_power_nonrepeat(
    keydown_power_nonrepeat_slot_t const& op);
  connection on_keydown_kp_equals_nonrepeat(
    keydown_kp_equals_nonrepeat_slot_t const& op);
  connection on_keydown_f13_nonrepeat(keydown_f13_nonrepeat_slot_t const& op);
  connection on_keydown_f14_nonrepeat(keydown_f14_nonrepeat_slot_t const& op);
  connection on_keydown_f15_nonrepeat(keydown_f15_nonrepeat_slot_t const& op);
  connection on_keydown_f16_nonrepeat(keydown_f16_nonrepeat_slot_t const& op);
  connection on_keydown_f17_nonrepeat(keydown_f17_nonrepeat_slot_t const& op);
  connection on_keydown_f18_nonrepeat(keydown_f18_nonrepeat_slot_t const& op);
  connection on_keydown_f19_nonrepeat(keydown_f19_nonrepeat_slot_t const& op);
  connection on_keydown_f20_nonrepeat(keydown_f20_nonrepeat_slot_t const& op);
  connection on_keydown_f21_nonrepeat(keydown_f21_nonrepeat_slot_t const& op);
  connection on_keydown_f22_nonrepeat(keydown_f22_nonrepeat_slot_t const& op);
  connection on_keydown_f23_nonrepeat(keydown_f23_nonrepeat_slot_t const& op);
  connection on_keydown_f24_nonrepeat(keydown_f24_nonrepeat_slot_t const& op);
  connection on_keydown_execute_nonrepeat(
    keydown_execute_nonrepeat_slot_t const& op);
  connection on_keydown_help_nonrepeat(
    keydown_help_nonrepeat_slot_t const& op);
  connection on_keydown_menu_nonrepeat(
    keydown_menu_nonrepeat_slot_t const& op);
  connection on_keydown_select_nonrepeat(
    keydown_select_nonrepeat_slot_t const& op);
  connection on_keydown_stop_nonrepeat(
    keydown_stop_nonrepeat_slot_t const& op);
  connection on_keydown_again_nonrepeat(
    keydown_again_nonrepeat_slot_t const& op);
  connection on_keydown_undo_nonrepeat(
    keydown_undo_nonrepeat_slot_t const& op);
  connection on_keydown_cut_nonrepeat(keydown_cut_nonrepeat_slot_t const& op);
  connection on_keydown_copy_nonrepeat(
    keydown_copy_nonrepeat_slot_t const& op);
  connection on_keydown_paste_nonrepeat(
    keydown_paste_nonrepeat_slot_t const& op);
  connection on_keydown_find_nonrepeat(
    keydown_find_nonrepeat_slot_t const& op);
  connection on_keydown_mute_nonrepeat(
    keydown_mute_nonrepeat_slot_t const& op);
  connection on_keydown_volumeup_nonrepeat(
    keydown_volumeup_nonrepeat_slot_t const& op);
  connection on_keydown_volumedown_nonrepeat(
    keydown_volumedown_nonrepeat_slot_t const& op);
  connection on_keydown_kp_comma_nonrepeat(
    keydown_kp_comma_nonrepeat_slot_t const& op);
  connection on_keydown_kp_equalsas400_nonrepeat(
    keydown_kp_equalsas400_nonrepeat_slot_t const& op);
  connection on_keydown_alterase_nonrepeat(
    keydown_alterase_nonrepeat_slot_t const& op);
  connection on_keydown_sysreq_nonrepeat(
    keydown_sysreq_nonrepeat_slot_t const& op);
  connection on_keydown_cancel_nonrepeat(
    keydown_cancel_nonrepeat_slot_t const& op);
  connection on_keydown_clear_nonrepeat(
    keydown_clear_nonrepeat_slot_t const& op);
  connection on_keydown_prior_nonrepeat(
    keydown_prior_nonrepeat_slot_t const& op);
  connection on_keydown_return2_nonrepeat(
    keydown_return2_nonrepeat_slot_t const& op);
  connection on_keydown_separator_nonrepeat(
    keydown_separator_nonrepeat_slot_t const& op);
  connection on_keydown_out_nonrepeat(keydown_out_nonrepeat_slot_t const& op);
  connection on_keydown_oper_nonrepeat(
    keydown_oper_nonrepeat_slot_t const& op);
  connection on_keydown_clearagain_nonrepeat(
    keydown_clearagain_nonrepeat_slot_t const& op);
  connection on_keydown_crsel_nonrepeat(
    keydown_crsel_nonrepeat_slot_t const& op);
  connection on_keydown_exsel_nonrepeat(
    keydown_exsel_nonrepeat_slot_t const& op);
  connection on_keydown_kp_00_nonrepeat(
    keydown_kp_00_nonrepeat_slot_t const& op);
  connection on_keydown_kp_000_nonrepeat(
    keydown_kp_000_nonrepeat_slot_t const& op);
  connection on_keydown_thousandsseparator_nonrepeat(
    keydown_thousandsseparator_nonrepeat_slot_t const& op);
  connection on_keydown_decimalseparator_nonrepeat(
    keydown_decimalseparator_nonrepeat_slot_t const& op);
  connection on_keydown_currencyunit_nonrepeat(
    keydown_currencyunit_nonrepeat_slot_t const& op);
  connection on_keydown_currencysubunit_nonrepeat(
    keydown_currencysubunit_nonrepeat_slot_t const& op);
  connection on_keydown_kp_leftparen_nonrepeat(
    keydown_kp_leftparen_nonrepeat_slot_t const& op);
  connection on_keydown_kp_rightparen_nonrepeat(
    keydown_kp_rightparen_nonrepeat_slot_t const& op);
  connection on_keydown_kp_leftbrace_nonrepeat(
    keydown_kp_leftbrace_nonrepeat_slot_t const& op);
  connection on_keydown_kp_rightbrace_nonrepeat(
    keydown_kp_rightbrace_nonrepeat_slot_t const& op);
  connection on_keydown_kp_tab_nonrepeat(
    keydown_kp_tab_nonrepeat_slot_t const& op);
  connection on_keydown_kp_backspace_nonrepeat(
    keydown_kp_backspace_nonrepeat_slot_t const& op);
  connection on_keydown_kp_a_nonrepeat(
    keydown_kp_a_nonrepeat_slot_t const& op);
  connection on_keydown_kp_b_nonrepeat(
    keydown_kp_b_nonrepeat_slot_t const& op);
  connection on_keydown_kp_c_nonrepeat(
    keydown_kp_c_nonrepeat_slot_t const& op);
  connection on_keydown_kp_d_nonrepeat(
    keydown_kp_d_nonrepeat_slot_t const& op);
  connection on_keydown_kp_e_nonrepeat(
    keydown_kp_e_nonrepeat_slot_t const& op);
  connection on_keydown_kp_f_nonrepeat(
    keydown_kp_f_nonrepeat_slot_t const& op);
  connection on_keydown_kp_xor_nonrepeat(
    keydown_kp_xor_nonrepeat_slot_t const& op);
  connection on_keydown_kp_power_nonrepeat(
    keydown_kp_power_nonrepeat_slot_t const& op);
  connection on_keydown_kp_percent_nonrepeat(
    keydown_kp_percent_nonrepeat_slot_t const& op);
  connection on_keydown_kp_less_nonrepeat(
    keydown_kp_less_nonrepeat_slot_t const& op);
  connection on_keydown_kp_greater_nonrepeat(
    keydown_kp_greater_nonrepeat_slot_t const& op);
  connection on_keydown_kp_ampersand_nonrepeat(
    keydown_kp_ampersand_nonrepeat_slot_t const& op);
  connection on_keydown_kp_dblampersand_nonrepeat(
    keydown_kp_dblampersand_nonrepeat_slot_t const& op);
  connection on_keydown_kp_verticalbar_nonrepeat(
    keydown_kp_verticalbar_nonrepeat_slot_t const& op);
  connection on_keydown_kp_dblverticalbar_nonrepeat(
    keydown_kp_dblverticalbar_nonrepeat_slot_t const& op);
  connection on_keydown_kp_colon_nonrepeat(
    keydown_kp_colon_nonrepeat_slot_t const& op);
  connection on_keydown_kp_hash_nonrepeat(
    keydown_kp_hash_nonrepeat_slot_t const& op);
  connection on_keydown_kp_space_nonrepeat(
    keydown_kp_space_nonrepeat_slot_t const& op);
  connection on_keydown_kp_at_nonrepeat(
    keydown_kp_at_nonrepeat_slot_t const& op);
  connection on_keydown_kp_exclam_nonrepeat(
    keydown_kp_exclam_nonrepeat_slot_t const& op);
  connection on_keydown_kp_memstore_nonrepeat(
    keydown_kp_memstore_nonrepeat_slot_t const& op);
  connection on_keydown_kp_memrecall_nonrepeat(
    keydown_kp_memrecall_nonrepeat_slot_t const& op);
  connection on_keydown_kp_memclear_nonrepeat(
    keydown_kp_memclear_nonrepeat_slot_t const& op);
  connection on_keydown_kp_memadd_nonrepeat(
    keydown_kp_memadd_nonrepeat_slot_t const& op);
  connection on_keydown_kp_memsubtract_nonrepeat(
    keydown_kp_memsubtract_nonrepeat_slot_t const& op);
  connection on_keydown_kp_memmultiply_nonrepeat(
    keydown_kp_memmultiply_nonrepeat_slot_t const& op);
  connection on_keydown_kp_memdivide_nonrepeat(
    keydown_kp_memdivide_nonrepeat_slot_t const& op);
  connection on_keydown_kp_plusminus_nonrepeat(
    keydown_kp_plusminus_nonrepeat_slot_t const& op);
  connection on_keydown_kp_clear_nonrepeat(
    keydown_kp_clear_nonrepeat_slot_t const& op);
  connection on_keydown_kp_clearentry_nonrepeat(
    keydown_kp_clearentry_nonrepeat_slot_t const& op);
  connection on_keydown_kp_binary_nonrepeat(
    keydown_kp_binary_nonrepeat_slot_t const& op);
  connection on_keydown_kp_octal_nonrepeat(
    keydown_kp_octal_nonrepeat_slot_t const& op);
  connection on_keydown_kp_decimal_nonrepeat(
    keydown_kp_decimal_nonrepeat_slot_t const& op);
  connection on_keydown_kp_hexadecimal_nonrepeat(
    keydown_kp_hexadecimal_nonrepeat_slot_t const& op);
  connection on_keydown_lctrl_nonrepeat(
    keydown_lctrl_nonrepeat_slot_t const& op);
  connection on_keydown_lshift_nonrepeat(
    keydown_lshift_nonrepeat_slot_t const& op);
  connection on_keydown_lalt_nonrepeat(
    keydown_lalt_nonrepeat_slot_t const& op);
  connection on_keydown_lgui_nonrepeat(
    keydown_lgui_nonrepeat_slot_t const& op);
  connection on_keydown_rctrl_nonrepeat(
    keydown_rctrl_nonrepeat_slot_t const& op);
  connection on_keydown_rshift_nonrepeat(
    keydown_rshift_nonrepeat_slot_t const& op);
  connection on_keydown_ralt_nonrepeat(
    keydown_ralt_nonrepeat_slot_t const& op);
  connection on_keydown_rgui_nonrepeat(
    keydown_rgui_nonrepeat_slot_t const& op);
  connection on_keydown_mode_nonrepeat(
    keydown_mode_nonrepeat_slot_t const& op);
  connection on_keydown_audionext_nonrepeat(
    keydown_audionext_nonrepeat_slot_t const& op);
  connection on_keydown_audioprev_nonrepeat(
    keydown_audioprev_nonrepeat_slot_t const& op);
  connection on_keydown_audiostop_nonrepeat(
    keydown_audiostop_nonrepeat_slot_t const& op);
  connection on_keydown_audioplay_nonrepeat(
    keydown_audioplay_nonrepeat_slot_t const& op);
  connection on_keydown_audiomute_nonrepeat(
    keydown_audiomute_nonrepeat_slot_t const& op);
  connection on_keydown_mediaselect_nonrepeat(
    keydown_mediaselect_nonrepeat_slot_t const& op);
  connection on_keydown_www_nonrepeat(keydown_www_nonrepeat_slot_t const& op);
  connection on_keydown_mail_nonrepeat(
    keydown_mail_nonrepeat_slot_t const& op);
  connection on_keydown_calculator_nonrepeat(
    keydown_calculator_nonrepeat_slot_t const& op);
  connection on_keydown_computer_nonrepeat(
    keydown_computer_nonrepeat_slot_t const& op);
  connection on_keydown_ac_search_nonrepeat(
    keydown_ac_search_nonrepeat_slot_t const& op);
  connection on_keydown_ac_home_nonrepeat(
    keydown_ac_home_nonrepeat_slot_t const& op);
  connection on_keydown_ac_back_nonrepeat(
    keydown_ac_back_nonrepeat_slot_t const& op);
  connection on_keydown_ac_forward_nonrepeat(
    keydown_ac_forward_nonrepeat_slot_t const& op);
  connection on_keydown_ac_stop_nonrepeat(
    keydown_ac_stop_nonrepeat_slot_t const& op);
  connection on_keydown_ac_refresh_nonrepeat(
    keydown_ac_refresh_nonrepeat_slot_t const& op);
  connection on_keydown_ac_bookmarks_nonrepeat(
    keydown_ac_bookmarks_nonrepeat_slot_t const& op);
  connection on_keydown_brightnessdown_nonrepeat(
    keydown_brightnessdown_nonrepeat_slot_t const& op);
  connection on_keydown_brightnessup_nonrepeat(
    keydown_brightnessup_nonrepeat_slot_t const& op);
  connection on_keydown_displayswitch_nonrepeat(
    keydown_displayswitch_nonrepeat_slot_t const& op);
  connection on_keydown_kbdillumtoggle_nonrepeat(
    keydown_kbdillumtoggle_nonrepeat_slot_t const& op);
  connection on_keydown_kbdillumdown_nonrepeat(
    keydown_kbdillumdown_nonrepeat_slot_t const& op);
  connection on_keydown_kbdillumup_nonrepeat(
    keydown_kbdillumup_nonrepeat_slot_t const& op);
  connection on_keydown_eject_nonrepeat(
    keydown_eject_nonrepeat_slot_t const& op);
  connection on_keydown_sleep_nonrepeat(
    keydown_sleep_nonrepeat_slot_t const& op);
  connection on_keyup_unknown(keyup_unknown_slot_t const& op);
  connection on_keyup_backspace(keyup_backspace_slot_t const& op);
  connection on_keyup_tab(keyup_tab_slot_t const& op);
  connection on_keyup_return(keyup_return_slot_t const& op);
  connection on_keyup_escape(keyup_escape_slot_t const& op);
  connection on_keyup_space(keyup_space_slot_t const& op);
  connection on_keyup_exclaim(keyup_exclaim_slot_t const& op);
  connection on_keyup_quotedbl(keyup_quotedbl_slot_t const& op);
  connection on_keyup_hash(keyup_hash_slot_t const& op);
  connection on_keyup_dollar(keyup_dollar_slot_t const& op);
  connection on_keyup_percent(keyup_percent_slot_t const& op);
  connection on_keyup_ampersand(keyup_ampersand_slot_t const& op);
  connection on_keyup_quote(keyup_quote_slot_t const& op);
  connection on_keyup_leftparen(keyup_leftparen_slot_t const& op);
  connection on_keyup_rightparen(keyup_rightparen_slot_t const& op);
  connection on_keyup_asterisk(keyup_asterisk_slot_t const& op);
  connection on_keyup_plus(keyup_plus_slot_t const& op);
  connection on_keyup_comma(keyup_comma_slot_t const& op);
  connection on_keyup_minus(keyup_minus_slot_t const& op);
  connection on_keyup_period(keyup_period_slot_t const& op);
  connection on_keyup_slash(keyup_slash_slot_t const& op);
  connection on_keyup_0(keyup_0_slot_t const& op);
  connection on_keyup_1(keyup_1_slot_t const& op);
  connection on_keyup_2(keyup_2_slot_t const& op);
  connection on_keyup_3(keyup_3_slot_t const& op);
  connection on_keyup_4(keyup_4_slot_t const& op);
  connection on_keyup_5(keyup_5_slot_t const& op);
  connection on_keyup_6(keyup_6_slot_t const& op);
  connection on_keyup_7(keyup_7_slot_t const& op);
  connection on_keyup_8(keyup_8_slot_t const& op);
  connection on_keyup_9(keyup_9_slot_t const& op);
  connection on_keyup_colon(keyup_colon_slot_t const& op);
  connection on_keyup_semicolon(keyup_semicolon_slot_t const& op);
  connection on_keyup_less(keyup_less_slot_t const& op);
  connection on_keyup_equals(keyup_equals_slot_t const& op);
  connection on_keyup_greater(keyup_greater_slot_t const& op);
  connection on_keyup_question(keyup_question_slot_t const& op);
  connection on_keyup_at(keyup_at_slot_t const& op);
  connection on_keyup_leftbracket(keyup_leftbracket_slot_t const& op);
  connection on_keyup_backslash(keyup_backslash_slot_t const& op);
  connection on_keyup_rightbracket(keyup_rightbracket_slot_t const& op);
  connection on_keyup_caret(keyup_caret_slot_t const& op);
  connection on_keyup_underscore(keyup_underscore_slot_t const& op);
  connection on_keyup_backquote(keyup_backquote_slot_t const& op);
  connection on_keyup_a(keyup_a_slot_t const& op);
  connection on_keyup_b(keyup_b_slot_t const& op);
  connection on_keyup_c(keyup_c_slot_t const& op);
  connection on_keyup_d(keyup_d_slot_t const& op);
  connection on_keyup_e(keyup_e_slot_t const& op);
  connection on_keyup_f(keyup_f_slot_t const& op);
  connection on_keyup_g(keyup_g_slot_t const& op);
  connection on_keyup_h(keyup_h_slot_t const& op);
  connection on_keyup_i(keyup_i_slot_t const& op);
  connection on_keyup_j(keyup_j_slot_t const& op);
  connection on_keyup_k(keyup_k_slot_t const& op);
  connection on_keyup_l(keyup_l_slot_t const& op);
  connection on_keyup_m(keyup_m_slot_t const& op);
  connection on_keyup_n(keyup_n_slot_t const& op);
  connection on_keyup_o(keyup_o_slot_t const& op);
  connection on_keyup_p(keyup_p_slot_t const& op);
  connection on_keyup_q(keyup_q_slot_t const& op);
  connection on_keyup_r(keyup_r_slot_t const& op);
  connection on_keyup_s(keyup_s_slot_t const& op);
  connection on_keyup_t(keyup_t_slot_t const& op);
  connection on_keyup_u(keyup_u_slot_t const& op);
  connection on_keyup_v(keyup_v_slot_t const& op);
  connection on_keyup_w(keyup_w_slot_t const& op);
  connection on_keyup_x(keyup_x_slot_t const& op);
  connection on_keyup_y(keyup_y_slot_t const& op);
  connection on_keyup_z(keyup_z_slot_t const& op);
  connection on_keyup_delete(keyup_delete_slot_t const& op);
  connection on_keyup_capslock(keyup_capslock_slot_t const& op);
  connection on_keyup_f1(keyup_f1_slot_t const& op);
  connection on_keyup_f2(keyup_f2_slot_t const& op);
  connection on_keyup_f3(keyup_f3_slot_t const& op);
  connection on_keyup_f4(keyup_f4_slot_t const& op);
  connection on_keyup_f5(keyup_f5_slot_t const& op);
  connection on_keyup_f6(keyup_f6_slot_t const& op);
  connection on_keyup_f7(keyup_f7_slot_t const& op);
  connection on_keyup_f8(keyup_f8_slot_t const& op);
  connection on_keyup_f9(keyup_f9_slot_t const& op);
  connection on_keyup_f10(keyup_f10_slot_t const& op);
  connection on_keyup_f11(keyup_f11_slot_t const& op);
  connection on_keyup_f12(keyup_f12_slot_t const& op);
  connection on_keyup_printscreen(keyup_printscreen_slot_t const& op);
  connection on_keyup_scrolllock(keyup_scrolllock_slot_t const& op);
  connection on_keyup_pause(keyup_pause_slot_t const& op);
  connection on_keyup_insert(keyup_insert_slot_t const& op);
  connection on_keyup_home(keyup_home_slot_t const& op);
  connection on_keyup_pageup(keyup_pageup_slot_t const& op);
  connection on_keyup_end(keyup_end_slot_t const& op);
  connection on_keyup_pagedown(keyup_pagedown_slot_t const& op);
  connection on_keyup_right(keyup_right_slot_t const& op);
  connection on_keyup_left(keyup_left_slot_t const& op);
  connection on_keyup_down(keyup_down_slot_t const& op);
  connection on_keyup_up(keyup_up_slot_t const& op);
  connection on_keyup_numlockclear(keyup_numlockclear_slot_t const& op);
  connection on_keyup_kp_divide(keyup_kp_divide_slot_t const& op);
  connection on_keyup_kp_multiply(keyup_kp_multiply_slot_t const& op);
  connection on_keyup_kp_minus(keyup_kp_minus_slot_t const& op);
  connection on_keyup_kp_plus(keyup_kp_plus_slot_t const& op);
  connection on_keyup_kp_enter(keyup_kp_enter_slot_t const& op);
  connection on_keyup_kp_1(keyup_kp_1_slot_t const& op);
  connection on_keyup_kp_2(keyup_kp_2_slot_t const& op);
  connection on_keyup_kp_3(keyup_kp_3_slot_t const& op);
  connection on_keyup_kp_4(keyup_kp_4_slot_t const& op);
  connection on_keyup_kp_5(keyup_kp_5_slot_t const& op);
  connection on_keyup_kp_6(keyup_kp_6_slot_t const& op);
  connection on_keyup_kp_7(keyup_kp_7_slot_t const& op);
  connection on_keyup_kp_8(keyup_kp_8_slot_t const& op);
  connection on_keyup_kp_9(keyup_kp_9_slot_t const& op);
  connection on_keyup_kp_0(keyup_kp_0_slot_t const& op);
  connection on_keyup_kp_period(keyup_kp_period_slot_t const& op);
  connection on_keyup_application(keyup_application_slot_t const& op);
  connection on_keyup_power(keyup_power_slot_t const& op);
  connection on_keyup_kp_equals(keyup_kp_equals_slot_t const& op);
  connection on_keyup_f13(keyup_f13_slot_t const& op);
  connection on_keyup_f14(keyup_f14_slot_t const& op);
  connection on_keyup_f15(keyup_f15_slot_t const& op);
  connection on_keyup_f16(keyup_f16_slot_t const& op);
  connection on_keyup_f17(keyup_f17_slot_t const& op);
  connection on_keyup_f18(keyup_f18_slot_t const& op);
  connection on_keyup_f19(keyup_f19_slot_t const& op);
  connection on_keyup_f20(keyup_f20_slot_t const& op);
  connection on_keyup_f21(keyup_f21_slot_t const& op);
  connection on_keyup_f22(keyup_f22_slot_t const& op);
  connection on_keyup_f23(keyup_f23_slot_t const& op);
  connection on_keyup_f24(keyup_f24_slot_t const& op);
  connection on_keyup_execute(keyup_execute_slot_t const& op);
  connection on_keyup_help(keyup_help_slot_t const& op);
  connection on_keyup_menu(keyup_menu_slot_t const& op);
  connection on_keyup_select(keyup_select_slot_t const& op);
  connection on_keyup_stop(keyup_stop_slot_t const& op);
  connection on_keyup_again(keyup_again_slot_t const& op);
  connection on_keyup_undo(keyup_undo_slot_t const& op);
  connection on_keyup_cut(keyup_cut_slot_t const& op);
  connection on_keyup_copy(keyup_copy_slot_t const& op);
  connection on_keyup_paste(keyup_paste_slot_t const& op);
  connection on_keyup_find(keyup_find_slot_t const& op);
  connection on_keyup_mute(keyup_mute_slot_t const& op);
  connection on_keyup_volumeup(keyup_volumeup_slot_t const& op);
  connection on_keyup_volumedown(keyup_volumedown_slot_t const& op);
  connection on_keyup_kp_comma(keyup_kp_comma_slot_t const& op);
  connection on_keyup_kp_equalsas400(keyup_kp_equalsas400_slot_t const& op);
  connection on_keyup_alterase(keyup_alterase_slot_t const& op);
  connection on_keyup_sysreq(keyup_sysreq_slot_t const& op);
  connection on_keyup_cancel(keyup_cancel_slot_t const& op);
  connection on_keyup_clear(keyup_clear_slot_t const& op);
  connection on_keyup_prior(keyup_prior_slot_t const& op);
  connection on_keyup_return2(keyup_return2_slot_t const& op);
  connection on_keyup_separator(keyup_separator_slot_t const& op);
  connection on_keyup_out(keyup_out_slot_t const& op);
  connection on_keyup_oper(keyup_oper_slot_t const& op);
  connection on_keyup_clearagain(keyup_clearagain_slot_t const& op);
  connection on_keyup_crsel(keyup_crsel_slot_t const& op);
  connection on_keyup_exsel(keyup_exsel_slot_t const& op);
  connection on_keyup_kp_00(keyup_kp_00_slot_t const& op);
  connection on_keyup_kp_000(keyup_kp_000_slot_t const& op);
  connection on_keyup_thousandsseparator(
    keyup_thousandsseparator_slot_t const& op);
  connection on_keyup_decimalseparator(
    keyup_decimalseparator_slot_t const& op);
  connection on_keyup_currencyunit(keyup_currencyunit_slot_t const& op);
  connection on_keyup_currencysubunit(keyup_currencysubunit_slot_t const& op);
  connection on_keyup_kp_leftparen(keyup_kp_leftparen_slot_t const& op);
  connection on_keyup_kp_rightparen(keyup_kp_rightparen_slot_t const& op);
  connection on_keyup_kp_leftbrace(keyup_kp_leftbrace_slot_t const& op);
  connection on_keyup_kp_rightbrace(keyup_kp_rightbrace_slot_t const& op);
  connection on_keyup_kp_tab(keyup_kp_tab_slot_t const& op);
  connection on_keyup_kp_backspace(keyup_kp_backspace_slot_t const& op);
  connection on_keyup_kp_a(keyup_kp_a_slot_t const& op);
  connection on_keyup_kp_b(keyup_kp_b_slot_t const& op);
  connection on_keyup_kp_c(keyup_kp_c_slot_t const& op);
  connection on_keyup_kp_d(keyup_kp_d_slot_t const& op);
  connection on_keyup_kp_e(keyup_kp_e_slot_t const& op);
  connection on_keyup_kp_f(keyup_kp_f_slot_t const& op);
  connection on_keyup_kp_xor(keyup_kp_xor_slot_t const& op);
  connection on_keyup_kp_power(keyup_kp_power_slot_t const& op);
  connection on_keyup_kp_percent(keyup_kp_percent_slot_t const& op);
  connection on_keyup_kp_less(keyup_kp_less_slot_t const& op);
  connection on_keyup_kp_greater(keyup_kp_greater_slot_t const& op);
  connection on_keyup_kp_ampersand(keyup_kp_ampersand_slot_t const& op);
  connection on_keyup_kp_dblampersand(keyup_kp_dblampersand_slot_t const& op);
  connection on_keyup_kp_verticalbar(keyup_kp_verticalbar_slot_t const& op);
  connection on_keyup_kp_dblverticalbar(
    keyup_kp_dblverticalbar_slot_t const& op);
  connection on_keyup_kp_colon(keyup_kp_colon_slot_t const& op);
  connection on_keyup_kp_hash(keyup_kp_hash_slot_t const& op);
  connection on_keyup_kp_space(keyup_kp_space_slot_t const& op);
  connection on_keyup_kp_at(keyup_kp_at_slot_t const& op);
  connection on_keyup_kp_exclam(keyup_kp_exclam_slot_t const& op);
  connection on_keyup_kp_memstore(keyup_kp_memstore_slot_t const& op);
  connection on_keyup_kp_memrecall(keyup_kp_memrecall_slot_t const& op);
  connection on_keyup_kp_memclear(keyup_kp_memclear_slot_t const& op);
  connection on_keyup_kp_memadd(keyup_kp_memadd_slot_t const& op);
  connection on_keyup_kp_memsubtract(keyup_kp_memsubtract_slot_t const& op);
  connection on_keyup_kp_memmultiply(keyup_kp_memmultiply_slot_t const& op);
  connection on_keyup_kp_memdivide(keyup_kp_memdivide_slot_t const& op);
  connection on_keyup_kp_plusminus(keyup_kp_plusminus_slot_t const& op);
  connection on_keyup_kp_clear(keyup_kp_clear_slot_t const& op);
  connection on_keyup_kp_clearentry(keyup_kp_clearentry_slot_t const& op);
  connection on_keyup_kp_binary(keyup_kp_binary_slot_t const& op);
  connection on_keyup_kp_octal(keyup_kp_octal_slot_t const& op);
  connection on_keyup_kp_decimal(keyup_kp_decimal_slot_t const& op);
  connection on_keyup_kp_hexadecimal(keyup_kp_hexadecimal_slot_t const& op);
  connection on_keyup_lctrl(keyup_lctrl_slot_t const& op);
  connection on_keyup_lshift(keyup_lshift_slot_t const& op);
  connection on_keyup_lalt(keyup_lalt_slot_t const& op);
  connection on_keyup_lgui(keyup_lgui_slot_t const& op);
  connection on_keyup_rctrl(keyup_rctrl_slot_t const& op);
  connection on_keyup_rshift(keyup_rshift_slot_t const& op);
  connection on_keyup_ralt(keyup_ralt_slot_t const& op);
  connection on_keyup_rgui(keyup_rgui_slot_t const& op);
  connection on_keyup_mode(keyup_mode_slot_t const& op);
  connection on_keyup_audionext(keyup_audionext_slot_t const& op);
  connection on_keyup_audioprev(keyup_audioprev_slot_t const& op);
  connection on_keyup_audiostop(keyup_audiostop_slot_t const& op);
  connection on_keyup_audioplay(keyup_audioplay_slot_t const& op);
  connection on_keyup_audiomute(keyup_audiomute_slot_t const& op);
  connection on_keyup_mediaselect(keyup_mediaselect_slot_t const& op);
  connection on_keyup_www(keyup_www_slot_t const& op);
  connection on_keyup_mail(keyup_mail_slot_t const& op);
  connection on_keyup_calculator(keyup_calculator_slot_t const& op);
  connection on_keyup_computer(keyup_computer_slot_t const& op);
  connection on_keyup_ac_search(keyup_ac_search_slot_t const& op);
  connection on_keyup_ac_home(keyup_ac_home_slot_t const& op);
  connection on_keyup_ac_back(keyup_ac_back_slot_t const& op);
  connection on_keyup_ac_forward(keyup_ac_forward_slot_t const& op);
  connection on_keyup_ac_stop(keyup_ac_stop_slot_t const& op);
  connection on_keyup_ac_refresh(keyup_ac_refresh_slot_t const& op);
  connection on_keyup_ac_bookmarks(keyup_ac_bookmarks_slot_t const& op);
  connection on_keyup_brightnessdown(keyup_brightnessdown_slot_t const& op);
  connection on_keyup_brightnessup(keyup_brightnessup_slot_t const& op);
  connection on_keyup_displayswitch(keyup_displayswitch_slot_t const& op);
  connection on_keyup_kbdillumtoggle(keyup_kbdillumtoggle_slot_t const& op);
  connection on_keyup_kbdillumdown(keyup_kbdillumdown_slot_t const& op);
  connection on_keyup_kbdillumup(keyup_kbdillumup_slot_t const& op);
  connection on_keyup_eject(keyup_eject_slot_t const& op);
  connection on_keyup_sleep(keyup_sleep_slot_t const& op);

private:
  quit_signal_t quit_signal;
  keydown_unknown_repeat_signal_t keydown_unknown_repeat_signal;
  keydown_backspace_repeat_signal_t keydown_backspace_repeat_signal;
  keydown_tab_repeat_signal_t keydown_tab_repeat_signal;
  keydown_return_repeat_signal_t keydown_return_repeat_signal;
  keydown_escape_repeat_signal_t keydown_escape_repeat_signal;
  keydown_space_repeat_signal_t keydown_space_repeat_signal;
  keydown_exclaim_repeat_signal_t keydown_exclaim_repeat_signal;
  keydown_quotedbl_repeat_signal_t keydown_quotedbl_repeat_signal;
  keydown_hash_repeat_signal_t keydown_hash_repeat_signal;
  keydown_dollar_repeat_signal_t keydown_dollar_repeat_signal;
  keydown_percent_repeat_signal_t keydown_percent_repeat_signal;
  keydown_ampersand_repeat_signal_t keydown_ampersand_repeat_signal;
  keydown_quote_repeat_signal_t keydown_quote_repeat_signal;
  keydown_leftparen_repeat_signal_t keydown_leftparen_repeat_signal;
  keydown_rightparen_repeat_signal_t keydown_rightparen_repeat_signal;
  keydown_asterisk_repeat_signal_t keydown_asterisk_repeat_signal;
  keydown_plus_repeat_signal_t keydown_plus_repeat_signal;
  keydown_comma_repeat_signal_t keydown_comma_repeat_signal;
  keydown_minus_repeat_signal_t keydown_minus_repeat_signal;
  keydown_period_repeat_signal_t keydown_period_repeat_signal;
  keydown_slash_repeat_signal_t keydown_slash_repeat_signal;
  keydown_0_repeat_signal_t keydown_0_repeat_signal;
  keydown_1_repeat_signal_t keydown_1_repeat_signal;
  keydown_2_repeat_signal_t keydown_2_repeat_signal;
  keydown_3_repeat_signal_t keydown_3_repeat_signal;
  keydown_4_repeat_signal_t keydown_4_repeat_signal;
  keydown_5_repeat_signal_t keydown_5_repeat_signal;
  keydown_6_repeat_signal_t keydown_6_repeat_signal;
  keydown_7_repeat_signal_t keydown_7_repeat_signal;
  keydown_8_repeat_signal_t keydown_8_repeat_signal;
  keydown_9_repeat_signal_t keydown_9_repeat_signal;
  keydown_colon_repeat_signal_t keydown_colon_repeat_signal;
  keydown_semicolon_repeat_signal_t keydown_semicolon_repeat_signal;
  keydown_less_repeat_signal_t keydown_less_repeat_signal;
  keydown_equals_repeat_signal_t keydown_equals_repeat_signal;
  keydown_greater_repeat_signal_t keydown_greater_repeat_signal;
  keydown_question_repeat_signal_t keydown_question_repeat_signal;
  keydown_at_repeat_signal_t keydown_at_repeat_signal;
  keydown_leftbracket_repeat_signal_t keydown_leftbracket_repeat_signal;
  keydown_backslash_repeat_signal_t keydown_backslash_repeat_signal;
  keydown_rightbracket_repeat_signal_t keydown_rightbracket_repeat_signal;
  keydown_caret_repeat_signal_t keydown_caret_repeat_signal;
  keydown_underscore_repeat_signal_t keydown_underscore_repeat_signal;
  keydown_backquote_repeat_signal_t keydown_backquote_repeat_signal;
  keydown_a_repeat_signal_t keydown_a_repeat_signal;
  keydown_b_repeat_signal_t keydown_b_repeat_signal;
  keydown_c_repeat_signal_t keydown_c_repeat_signal;
  keydown_d_repeat_signal_t keydown_d_repeat_signal;
  keydown_e_repeat_signal_t keydown_e_repeat_signal;
  keydown_f_repeat_signal_t keydown_f_repeat_signal;
  keydown_g_repeat_signal_t keydown_g_repeat_signal;
  keydown_h_repeat_signal_t keydown_h_repeat_signal;
  keydown_i_repeat_signal_t keydown_i_repeat_signal;
  keydown_j_repeat_signal_t keydown_j_repeat_signal;
  keydown_k_repeat_signal_t keydown_k_repeat_signal;
  keydown_l_repeat_signal_t keydown_l_repeat_signal;
  keydown_m_repeat_signal_t keydown_m_repeat_signal;
  keydown_n_repeat_signal_t keydown_n_repeat_signal;
  keydown_o_repeat_signal_t keydown_o_repeat_signal;
  keydown_p_repeat_signal_t keydown_p_repeat_signal;
  keydown_q_repeat_signal_t keydown_q_repeat_signal;
  keydown_r_repeat_signal_t keydown_r_repeat_signal;
  keydown_s_repeat_signal_t keydown_s_repeat_signal;
  keydown_t_repeat_signal_t keydown_t_repeat_signal;
  keydown_u_repeat_signal_t keydown_u_repeat_signal;
  keydown_v_repeat_signal_t keydown_v_repeat_signal;
  keydown_w_repeat_signal_t keydown_w_repeat_signal;
  keydown_x_repeat_signal_t keydown_x_repeat_signal;
  keydown_y_repeat_signal_t keydown_y_repeat_signal;
  keydown_z_repeat_signal_t keydown_z_repeat_signal;
  keydown_delete_repeat_signal_t keydown_delete_repeat_signal;
  keydown_capslock_repeat_signal_t keydown_capslock_repeat_signal;
  keydown_f1_repeat_signal_t keydown_f1_repeat_signal;
  keydown_f2_repeat_signal_t keydown_f2_repeat_signal;
  keydown_f3_repeat_signal_t keydown_f3_repeat_signal;
  keydown_f4_repeat_signal_t keydown_f4_repeat_signal;
  keydown_f5_repeat_signal_t keydown_f5_repeat_signal;
  keydown_f6_repeat_signal_t keydown_f6_repeat_signal;
  keydown_f7_repeat_signal_t keydown_f7_repeat_signal;
  keydown_f8_repeat_signal_t keydown_f8_repeat_signal;
  keydown_f9_repeat_signal_t keydown_f9_repeat_signal;
  keydown_f10_repeat_signal_t keydown_f10_repeat_signal;
  keydown_f11_repeat_signal_t keydown_f11_repeat_signal;
  keydown_f12_repeat_signal_t keydown_f12_repeat_signal;
  keydown_printscreen_repeat_signal_t keydown_printscreen_repeat_signal;
  keydown_scrolllock_repeat_signal_t keydown_scrolllock_repeat_signal;
  keydown_pause_repeat_signal_t keydown_pause_repeat_signal;
  keydown_insert_repeat_signal_t keydown_insert_repeat_signal;
  keydown_home_repeat_signal_t keydown_home_repeat_signal;
  keydown_pageup_repeat_signal_t keydown_pageup_repeat_signal;
  keydown_end_repeat_signal_t keydown_end_repeat_signal;
  keydown_pagedown_repeat_signal_t keydown_pagedown_repeat_signal;
  keydown_right_repeat_signal_t keydown_right_repeat_signal;
  keydown_left_repeat_signal_t keydown_left_repeat_signal;
  keydown_down_repeat_signal_t keydown_down_repeat_signal;
  keydown_up_repeat_signal_t keydown_up_repeat_signal;
  keydown_numlockclear_repeat_signal_t keydown_numlockclear_repeat_signal;
  keydown_kp_divide_repeat_signal_t keydown_kp_divide_repeat_signal;
  keydown_kp_multiply_repeat_signal_t keydown_kp_multiply_repeat_signal;
  keydown_kp_minus_repeat_signal_t keydown_kp_minus_repeat_signal;
  keydown_kp_plus_repeat_signal_t keydown_kp_plus_repeat_signal;
  keydown_kp_enter_repeat_signal_t keydown_kp_enter_repeat_signal;
  keydown_kp_1_repeat_signal_t keydown_kp_1_repeat_signal;
  keydown_kp_2_repeat_signal_t keydown_kp_2_repeat_signal;
  keydown_kp_3_repeat_signal_t keydown_kp_3_repeat_signal;
  keydown_kp_4_repeat_signal_t keydown_kp_4_repeat_signal;
  keydown_kp_5_repeat_signal_t keydown_kp_5_repeat_signal;
  keydown_kp_6_repeat_signal_t keydown_kp_6_repeat_signal;
  keydown_kp_7_repeat_signal_t keydown_kp_7_repeat_signal;
  keydown_kp_8_repeat_signal_t keydown_kp_8_repeat_signal;
  keydown_kp_9_repeat_signal_t keydown_kp_9_repeat_signal;
  keydown_kp_0_repeat_signal_t keydown_kp_0_repeat_signal;
  keydown_kp_period_repeat_signal_t keydown_kp_period_repeat_signal;
  keydown_application_repeat_signal_t keydown_application_repeat_signal;
  keydown_power_repeat_signal_t keydown_power_repeat_signal;
  keydown_kp_equals_repeat_signal_t keydown_kp_equals_repeat_signal;
  keydown_f13_repeat_signal_t keydown_f13_repeat_signal;
  keydown_f14_repeat_signal_t keydown_f14_repeat_signal;
  keydown_f15_repeat_signal_t keydown_f15_repeat_signal;
  keydown_f16_repeat_signal_t keydown_f16_repeat_signal;
  keydown_f17_repeat_signal_t keydown_f17_repeat_signal;
  keydown_f18_repeat_signal_t keydown_f18_repeat_signal;
  keydown_f19_repeat_signal_t keydown_f19_repeat_signal;
  keydown_f20_repeat_signal_t keydown_f20_repeat_signal;
  keydown_f21_repeat_signal_t keydown_f21_repeat_signal;
  keydown_f22_repeat_signal_t keydown_f22_repeat_signal;
  keydown_f23_repeat_signal_t keydown_f23_repeat_signal;
  keydown_f24_repeat_signal_t keydown_f24_repeat_signal;
  keydown_execute_repeat_signal_t keydown_execute_repeat_signal;
  keydown_help_repeat_signal_t keydown_help_repeat_signal;
  keydown_menu_repeat_signal_t keydown_menu_repeat_signal;
  keydown_select_repeat_signal_t keydown_select_repeat_signal;
  keydown_stop_repeat_signal_t keydown_stop_repeat_signal;
  keydown_again_repeat_signal_t keydown_again_repeat_signal;
  keydown_undo_repeat_signal_t keydown_undo_repeat_signal;
  keydown_cut_repeat_signal_t keydown_cut_repeat_signal;
  keydown_copy_repeat_signal_t keydown_copy_repeat_signal;
  keydown_paste_repeat_signal_t keydown_paste_repeat_signal;
  keydown_find_repeat_signal_t keydown_find_repeat_signal;
  keydown_mute_repeat_signal_t keydown_mute_repeat_signal;
  keydown_volumeup_repeat_signal_t keydown_volumeup_repeat_signal;
  keydown_volumedown_repeat_signal_t keydown_volumedown_repeat_signal;
  keydown_kp_comma_repeat_signal_t keydown_kp_comma_repeat_signal;
  keydown_kp_equalsas400_repeat_signal_t keydown_kp_equalsas400_repeat_signal;
  keydown_alterase_repeat_signal_t keydown_alterase_repeat_signal;
  keydown_sysreq_repeat_signal_t keydown_sysreq_repeat_signal;
  keydown_cancel_repeat_signal_t keydown_cancel_repeat_signal;
  keydown_clear_repeat_signal_t keydown_clear_repeat_signal;
  keydown_prior_repeat_signal_t keydown_prior_repeat_signal;
  keydown_return2_repeat_signal_t keydown_return2_repeat_signal;
  keydown_separator_repeat_signal_t keydown_separator_repeat_signal;
  keydown_out_repeat_signal_t keydown_out_repeat_signal;
  keydown_oper_repeat_signal_t keydown_oper_repeat_signal;
  keydown_clearagain_repeat_signal_t keydown_clearagain_repeat_signal;
  keydown_crsel_repeat_signal_t keydown_crsel_repeat_signal;
  keydown_exsel_repeat_signal_t keydown_exsel_repeat_signal;
  keydown_kp_00_repeat_signal_t keydown_kp_00_repeat_signal;
  keydown_kp_000_repeat_signal_t keydown_kp_000_repeat_signal;
  keydown_thousandsseparator_repeat_signal_t
    keydown_thousandsseparator_repeat_signal;
  keydown_decimalseparator_repeat_signal_t
    keydown_decimalseparator_repeat_signal;
  keydown_currencyunit_repeat_signal_t keydown_currencyunit_repeat_signal;
  keydown_currencysubunit_repeat_signal_t
    keydown_currencysubunit_repeat_signal;
  keydown_kp_leftparen_repeat_signal_t keydown_kp_leftparen_repeat_signal;
  keydown_kp_rightparen_repeat_signal_t keydown_kp_rightparen_repeat_signal;
  keydown_kp_leftbrace_repeat_signal_t keydown_kp_leftbrace_repeat_signal;
  keydown_kp_rightbrace_repeat_signal_t keydown_kp_rightbrace_repeat_signal;
  keydown_kp_tab_repeat_signal_t keydown_kp_tab_repeat_signal;
  keydown_kp_backspace_repeat_signal_t keydown_kp_backspace_repeat_signal;
  keydown_kp_a_repeat_signal_t keydown_kp_a_repeat_signal;
  keydown_kp_b_repeat_signal_t keydown_kp_b_repeat_signal;
  keydown_kp_c_repeat_signal_t keydown_kp_c_repeat_signal;
  keydown_kp_d_repeat_signal_t keydown_kp_d_repeat_signal;
  keydown_kp_e_repeat_signal_t keydown_kp_e_repeat_signal;
  keydown_kp_f_repeat_signal_t keydown_kp_f_repeat_signal;
  keydown_kp_xor_repeat_signal_t keydown_kp_xor_repeat_signal;
  keydown_kp_power_repeat_signal_t keydown_kp_power_repeat_signal;
  keydown_kp_percent_repeat_signal_t keydown_kp_percent_repeat_signal;
  keydown_kp_less_repeat_signal_t keydown_kp_less_repeat_signal;
  keydown_kp_greater_repeat_signal_t keydown_kp_greater_repeat_signal;
  keydown_kp_ampersand_repeat_signal_t keydown_kp_ampersand_repeat_signal;
  keydown_kp_dblampersand_repeat_signal_t
    keydown_kp_dblampersand_repeat_signal;
  keydown_kp_verticalbar_repeat_signal_t keydown_kp_verticalbar_repeat_signal;
  keydown_kp_dblverticalbar_repeat_signal_t
    keydown_kp_dblverticalbar_repeat_signal;
  keydown_kp_colon_repeat_signal_t keydown_kp_colon_repeat_signal;
  keydown_kp_hash_repeat_signal_t keydown_kp_hash_repeat_signal;
  keydown_kp_space_repeat_signal_t keydown_kp_space_repeat_signal;
  keydown_kp_at_repeat_signal_t keydown_kp_at_repeat_signal;
  keydown_kp_exclam_repeat_signal_t keydown_kp_exclam_repeat_signal;
  keydown_kp_memstore_repeat_signal_t keydown_kp_memstore_repeat_signal;
  keydown_kp_memrecall_repeat_signal_t keydown_kp_memrecall_repeat_signal;
  keydown_kp_memclear_repeat_signal_t keydown_kp_memclear_repeat_signal;
  keydown_kp_memadd_repeat_signal_t keydown_kp_memadd_repeat_signal;
  keydown_kp_memsubtract_repeat_signal_t keydown_kp_memsubtract_repeat_signal;
  keydown_kp_memmultiply_repeat_signal_t keydown_kp_memmultiply_repeat_signal;
  keydown_kp_memdivide_repeat_signal_t keydown_kp_memdivide_repeat_signal;
  keydown_kp_plusminus_repeat_signal_t keydown_kp_plusminus_repeat_signal;
  keydown_kp_clear_repeat_signal_t keydown_kp_clear_repeat_signal;
  keydown_kp_clearentry_repeat_signal_t keydown_kp_clearentry_repeat_signal;
  keydown_kp_binary_repeat_signal_t keydown_kp_binary_repeat_signal;
  keydown_kp_octal_repeat_signal_t keydown_kp_octal_repeat_signal;
  keydown_kp_decimal_repeat_signal_t keydown_kp_decimal_repeat_signal;
  keydown_kp_hexadecimal_repeat_signal_t keydown_kp_hexadecimal_repeat_signal;
  keydown_lctrl_repeat_signal_t keydown_lctrl_repeat_signal;
  keydown_lshift_repeat_signal_t keydown_lshift_repeat_signal;
  keydown_lalt_repeat_signal_t keydown_lalt_repeat_signal;
  keydown_lgui_repeat_signal_t keydown_lgui_repeat_signal;
  keydown_rctrl_repeat_signal_t keydown_rctrl_repeat_signal;
  keydown_rshift_repeat_signal_t keydown_rshift_repeat_signal;
  keydown_ralt_repeat_signal_t keydown_ralt_repeat_signal;
  keydown_rgui_repeat_signal_t keydown_rgui_repeat_signal;
  keydown_mode_repeat_signal_t keydown_mode_repeat_signal;
  keydown_audionext_repeat_signal_t keydown_audionext_repeat_signal;
  keydown_audioprev_repeat_signal_t keydown_audioprev_repeat_signal;
  keydown_audiostop_repeat_signal_t keydown_audiostop_repeat_signal;
  keydown_audioplay_repeat_signal_t keydown_audioplay_repeat_signal;
  keydown_audiomute_repeat_signal_t keydown_audiomute_repeat_signal;
  keydown_mediaselect_repeat_signal_t keydown_mediaselect_repeat_signal;
  keydown_www_repeat_signal_t keydown_www_repeat_signal;
  keydown_mail_repeat_signal_t keydown_mail_repeat_signal;
  keydown_calculator_repeat_signal_t keydown_calculator_repeat_signal;
  keydown_computer_repeat_signal_t keydown_computer_repeat_signal;
  keydown_ac_search_repeat_signal_t keydown_ac_search_repeat_signal;
  keydown_ac_home_repeat_signal_t keydown_ac_home_repeat_signal;
  keydown_ac_back_repeat_signal_t keydown_ac_back_repeat_signal;
  keydown_ac_forward_repeat_signal_t keydown_ac_forward_repeat_signal;
  keydown_ac_stop_repeat_signal_t keydown_ac_stop_repeat_signal;
  keydown_ac_refresh_repeat_signal_t keydown_ac_refresh_repeat_signal;
  keydown_ac_bookmarks_repeat_signal_t keydown_ac_bookmarks_repeat_signal;
  keydown_brightnessdown_repeat_signal_t keydown_brightnessdown_repeat_signal;
  keydown_brightnessup_repeat_signal_t keydown_brightnessup_repeat_signal;
  keydown_displayswitch_repeat_signal_t keydown_displayswitch_repeat_signal;
  keydown_kbdillumtoggle_repeat_signal_t keydown_kbdillumtoggle_repeat_signal;
  keydown_kbdillumdown_repeat_signal_t keydown_kbdillumdown_repeat_signal;
  keydown_kbdillumup_repeat_signal_t keydown_kbdillumup_repeat_signal;
  keydown_eject_repeat_signal_t keydown_eject_repeat_signal;
  keydown_sleep_repeat_signal_t keydown_sleep_repeat_signal;
  keydown_unknown_nonrepeat_signal_t keydown_unknown_nonrepeat_signal;
  keydown_backspace_nonrepeat_signal_t keydown_backspace_nonrepeat_signal;
  keydown_tab_nonrepeat_signal_t keydown_tab_nonrepeat_signal;
  keydown_return_nonrepeat_signal_t keydown_return_nonrepeat_signal;
  keydown_escape_nonrepeat_signal_t keydown_escape_nonrepeat_signal;
  keydown_space_nonrepeat_signal_t keydown_space_nonrepeat_signal;
  keydown_exclaim_nonrepeat_signal_t keydown_exclaim_nonrepeat_signal;
  keydown_quotedbl_nonrepeat_signal_t keydown_quotedbl_nonrepeat_signal;
  keydown_hash_nonrepeat_signal_t keydown_hash_nonrepeat_signal;
  keydown_dollar_nonrepeat_signal_t keydown_dollar_nonrepeat_signal;
  keydown_percent_nonrepeat_signal_t keydown_percent_nonrepeat_signal;
  keydown_ampersand_nonrepeat_signal_t keydown_ampersand_nonrepeat_signal;
  keydown_quote_nonrepeat_signal_t keydown_quote_nonrepeat_signal;
  keydown_leftparen_nonrepeat_signal_t keydown_leftparen_nonrepeat_signal;
  keydown_rightparen_nonrepeat_signal_t keydown_rightparen_nonrepeat_signal;
  keydown_asterisk_nonrepeat_signal_t keydown_asterisk_nonrepeat_signal;
  keydown_plus_nonrepeat_signal_t keydown_plus_nonrepeat_signal;
  keydown_comma_nonrepeat_signal_t keydown_comma_nonrepeat_signal;
  keydown_minus_nonrepeat_signal_t keydown_minus_nonrepeat_signal;
  keydown_period_nonrepeat_signal_t keydown_period_nonrepeat_signal;
  keydown_slash_nonrepeat_signal_t keydown_slash_nonrepeat_signal;
  keydown_0_nonrepeat_signal_t keydown_0_nonrepeat_signal;
  keydown_1_nonrepeat_signal_t keydown_1_nonrepeat_signal;
  keydown_2_nonrepeat_signal_t keydown_2_nonrepeat_signal;
  keydown_3_nonrepeat_signal_t keydown_3_nonrepeat_signal;
  keydown_4_nonrepeat_signal_t keydown_4_nonrepeat_signal;
  keydown_5_nonrepeat_signal_t keydown_5_nonrepeat_signal;
  keydown_6_nonrepeat_signal_t keydown_6_nonrepeat_signal;
  keydown_7_nonrepeat_signal_t keydown_7_nonrepeat_signal;
  keydown_8_nonrepeat_signal_t keydown_8_nonrepeat_signal;
  keydown_9_nonrepeat_signal_t keydown_9_nonrepeat_signal;
  keydown_colon_nonrepeat_signal_t keydown_colon_nonrepeat_signal;
  keydown_semicolon_nonrepeat_signal_t keydown_semicolon_nonrepeat_signal;
  keydown_less_nonrepeat_signal_t keydown_less_nonrepeat_signal;
  keydown_equals_nonrepeat_signal_t keydown_equals_nonrepeat_signal;
  keydown_greater_nonrepeat_signal_t keydown_greater_nonrepeat_signal;
  keydown_question_nonrepeat_signal_t keydown_question_nonrepeat_signal;
  keydown_at_nonrepeat_signal_t keydown_at_nonrepeat_signal;
  keydown_leftbracket_nonrepeat_signal_t keydown_leftbracket_nonrepeat_signal;
  keydown_backslash_nonrepeat_signal_t keydown_backslash_nonrepeat_signal;
  keydown_rightbracket_nonrepeat_signal_t
    keydown_rightbracket_nonrepeat_signal;
  keydown_caret_nonrepeat_signal_t keydown_caret_nonrepeat_signal;
  keydown_underscore_nonrepeat_signal_t keydown_underscore_nonrepeat_signal;
  keydown_backquote_nonrepeat_signal_t keydown_backquote_nonrepeat_signal;
  keydown_a_nonrepeat_signal_t keydown_a_nonrepeat_signal;
  keydown_b_nonrepeat_signal_t keydown_b_nonrepeat_signal;
  keydown_c_nonrepeat_signal_t keydown_c_nonrepeat_signal;
  keydown_d_nonrepeat_signal_t keydown_d_nonrepeat_signal;
  keydown_e_nonrepeat_signal_t keydown_e_nonrepeat_signal;
  keydown_f_nonrepeat_signal_t keydown_f_nonrepeat_signal;
  keydown_g_nonrepeat_signal_t keydown_g_nonrepeat_signal;
  keydown_h_nonrepeat_signal_t keydown_h_nonrepeat_signal;
  keydown_i_nonrepeat_signal_t keydown_i_nonrepeat_signal;
  keydown_j_nonrepeat_signal_t keydown_j_nonrepeat_signal;
  keydown_k_nonrepeat_signal_t keydown_k_nonrepeat_signal;
  keydown_l_nonrepeat_signal_t keydown_l_nonrepeat_signal;
  keydown_m_nonrepeat_signal_t keydown_m_nonrepeat_signal;
  keydown_n_nonrepeat_signal_t keydown_n_nonrepeat_signal;
  keydown_o_nonrepeat_signal_t keydown_o_nonrepeat_signal;
  keydown_p_nonrepeat_signal_t keydown_p_nonrepeat_signal;
  keydown_q_nonrepeat_signal_t keydown_q_nonrepeat_signal;
  keydown_r_nonrepeat_signal_t keydown_r_nonrepeat_signal;
  keydown_s_nonrepeat_signal_t keydown_s_nonrepeat_signal;
  keydown_t_nonrepeat_signal_t keydown_t_nonrepeat_signal;
  keydown_u_nonrepeat_signal_t keydown_u_nonrepeat_signal;
  keydown_v_nonrepeat_signal_t keydown_v_nonrepeat_signal;
  keydown_w_nonrepeat_signal_t keydown_w_nonrepeat_signal;
  keydown_x_nonrepeat_signal_t keydown_x_nonrepeat_signal;
  keydown_y_nonrepeat_signal_t keydown_y_nonrepeat_signal;
  keydown_z_nonrepeat_signal_t keydown_z_nonrepeat_signal;
  keydown_delete_nonrepeat_signal_t keydown_delete_nonrepeat_signal;
  keydown_capslock_nonrepeat_signal_t keydown_capslock_nonrepeat_signal;
  keydown_f1_nonrepeat_signal_t keydown_f1_nonrepeat_signal;
  keydown_f2_nonrepeat_signal_t keydown_f2_nonrepeat_signal;
  keydown_f3_nonrepeat_signal_t keydown_f3_nonrepeat_signal;
  keydown_f4_nonrepeat_signal_t keydown_f4_nonrepeat_signal;
  keydown_f5_nonrepeat_signal_t keydown_f5_nonrepeat_signal;
  keydown_f6_nonrepeat_signal_t keydown_f6_nonrepeat_signal;
  keydown_f7_nonrepeat_signal_t keydown_f7_nonrepeat_signal;
  keydown_f8_nonrepeat_signal_t keydown_f8_nonrepeat_signal;
  keydown_f9_nonrepeat_signal_t keydown_f9_nonrepeat_signal;
  keydown_f10_nonrepeat_signal_t keydown_f10_nonrepeat_signal;
  keydown_f11_nonrepeat_signal_t keydown_f11_nonrepeat_signal;
  keydown_f12_nonrepeat_signal_t keydown_f12_nonrepeat_signal;
  keydown_printscreen_nonrepeat_signal_t keydown_printscreen_nonrepeat_signal;
  keydown_scrolllock_nonrepeat_signal_t keydown_scrolllock_nonrepeat_signal;
  keydown_pause_nonrepeat_signal_t keydown_pause_nonrepeat_signal;
  keydown_insert_nonrepeat_signal_t keydown_insert_nonrepeat_signal;
  keydown_home_nonrepeat_signal_t keydown_home_nonrepeat_signal;
  keydown_pageup_nonrepeat_signal_t keydown_pageup_nonrepeat_signal;
  keydown_end_nonrepeat_signal_t keydown_end_nonrepeat_signal;
  keydown_pagedown_nonrepeat_signal_t keydown_pagedown_nonrepeat_signal;
  keydown_right_nonrepeat_signal_t keydown_right_nonrepeat_signal;
  keydown_left_nonrepeat_signal_t keydown_left_nonrepeat_signal;
  keydown_down_nonrepeat_signal_t keydown_down_nonrepeat_signal;
  keydown_up_nonrepeat_signal_t keydown_up_nonrepeat_signal;
  keydown_numlockclear_nonrepeat_signal_t
    keydown_numlockclear_nonrepeat_signal;
  keydown_kp_divide_nonrepeat_signal_t keydown_kp_divide_nonrepeat_signal;
  keydown_kp_multiply_nonrepeat_signal_t keydown_kp_multiply_nonrepeat_signal;
  keydown_kp_minus_nonrepeat_signal_t keydown_kp_minus_nonrepeat_signal;
  keydown_kp_plus_nonrepeat_signal_t keydown_kp_plus_nonrepeat_signal;
  keydown_kp_enter_nonrepeat_signal_t keydown_kp_enter_nonrepeat_signal;
  keydown_kp_1_nonrepeat_signal_t keydown_kp_1_nonrepeat_signal;
  keydown_kp_2_nonrepeat_signal_t keydown_kp_2_nonrepeat_signal;
  keydown_kp_3_nonrepeat_signal_t keydown_kp_3_nonrepeat_signal;
  keydown_kp_4_nonrepeat_signal_t keydown_kp_4_nonrepeat_signal;
  keydown_kp_5_nonrepeat_signal_t keydown_kp_5_nonrepeat_signal;
  keydown_kp_6_nonrepeat_signal_t keydown_kp_6_nonrepeat_signal;
  keydown_kp_7_nonrepeat_signal_t keydown_kp_7_nonrepeat_signal;
  keydown_kp_8_nonrepeat_signal_t keydown_kp_8_nonrepeat_signal;
  keydown_kp_9_nonrepeat_signal_t keydown_kp_9_nonrepeat_signal;
  keydown_kp_0_nonrepeat_signal_t keydown_kp_0_nonrepeat_signal;
  keydown_kp_period_nonrepeat_signal_t keydown_kp_period_nonrepeat_signal;
  keydown_application_nonrepeat_signal_t keydown_application_nonrepeat_signal;
  keydown_power_nonrepeat_signal_t keydown_power_nonrepeat_signal;
  keydown_kp_equals_nonrepeat_signal_t keydown_kp_equals_nonrepeat_signal;
  keydown_f13_nonrepeat_signal_t keydown_f13_nonrepeat_signal;
  keydown_f14_nonrepeat_signal_t keydown_f14_nonrepeat_signal;
  keydown_f15_nonrepeat_signal_t keydown_f15_nonrepeat_signal;
  keydown_f16_nonrepeat_signal_t keydown_f16_nonrepeat_signal;
  keydown_f17_nonrepeat_signal_t keydown_f17_nonrepeat_signal;
  keydown_f18_nonrepeat_signal_t keydown_f18_nonrepeat_signal;
  keydown_f19_nonrepeat_signal_t keydown_f19_nonrepeat_signal;
  keydown_f20_nonrepeat_signal_t keydown_f20_nonrepeat_signal;
  keydown_f21_nonrepeat_signal_t keydown_f21_nonrepeat_signal;
  keydown_f22_nonrepeat_signal_t keydown_f22_nonrepeat_signal;
  keydown_f23_nonrepeat_signal_t keydown_f23_nonrepeat_signal;
  keydown_f24_nonrepeat_signal_t keydown_f24_nonrepeat_signal;
  keydown_execute_nonrepeat_signal_t keydown_execute_nonrepeat_signal;
  keydown_help_nonrepeat_signal_t keydown_help_nonrepeat_signal;
  keydown_menu_nonrepeat_signal_t keydown_menu_nonrepeat_signal;
  keydown_select_nonrepeat_signal_t keydown_select_nonrepeat_signal;
  keydown_stop_nonrepeat_signal_t keydown_stop_nonrepeat_signal;
  keydown_again_nonrepeat_signal_t keydown_again_nonrepeat_signal;
  keydown_undo_nonrepeat_signal_t keydown_undo_nonrepeat_signal;
  keydown_cut_nonrepeat_signal_t keydown_cut_nonrepeat_signal;
  keydown_copy_nonrepeat_signal_t keydown_copy_nonrepeat_signal;
  keydown_paste_nonrepeat_signal_t keydown_paste_nonrepeat_signal;
  keydown_find_nonrepeat_signal_t keydown_find_nonrepeat_signal;
  keydown_mute_nonrepeat_signal_t keydown_mute_nonrepeat_signal;
  keydown_volumeup_nonrepeat_signal_t keydown_volumeup_nonrepeat_signal;
  keydown_volumedown_nonrepeat_signal_t keydown_volumedown_nonrepeat_signal;
  keydown_kp_comma_nonrepeat_signal_t keydown_kp_comma_nonrepeat_signal;
  keydown_kp_equalsas400_nonrepeat_signal_t
    keydown_kp_equalsas400_nonrepeat_signal;
  keydown_alterase_nonrepeat_signal_t keydown_alterase_nonrepeat_signal;
  keydown_sysreq_nonrepeat_signal_t keydown_sysreq_nonrepeat_signal;
  keydown_cancel_nonrepeat_signal_t keydown_cancel_nonrepeat_signal;
  keydown_clear_nonrepeat_signal_t keydown_clear_nonrepeat_signal;
  keydown_prior_nonrepeat_signal_t keydown_prior_nonrepeat_signal;
  keydown_return2_nonrepeat_signal_t keydown_return2_nonrepeat_signal;
  keydown_separator_nonrepeat_signal_t keydown_separator_nonrepeat_signal;
  keydown_out_nonrepeat_signal_t keydown_out_nonrepeat_signal;
  keydown_oper_nonrepeat_signal_t keydown_oper_nonrepeat_signal;
  keydown_clearagain_nonrepeat_signal_t keydown_clearagain_nonrepeat_signal;
  keydown_crsel_nonrepeat_signal_t keydown_crsel_nonrepeat_signal;
  keydown_exsel_nonrepeat_signal_t keydown_exsel_nonrepeat_signal;
  keydown_kp_00_nonrepeat_signal_t keydown_kp_00_nonrepeat_signal;
  keydown_kp_000_nonrepeat_signal_t keydown_kp_000_nonrepeat_signal;
  keydown_thousandsseparator_nonrepeat_signal_t
    keydown_thousandsseparator_nonrepeat_signal;
  keydown_decimalseparator_nonrepeat_signal_t
    keydown_decimalseparator_nonrepeat_signal;
  keydown_currencyunit_nonrepeat_signal_t
    keydown_currencyunit_nonrepeat_signal;
  keydown_currencysubunit_nonrepeat_signal_t
    keydown_currencysubunit_nonrepeat_signal;
  keydown_kp_leftparen_nonrepeat_signal_t
    keydown_kp_leftparen_nonrepeat_signal;
  keydown_kp_rightparen_nonrepeat_signal_t
    keydown_kp_rightparen_nonrepeat_signal;
  keydown_kp_leftbrace_nonrepeat_signal_t
    keydown_kp_leftbrace_nonrepeat_signal;
  keydown_kp_rightbrace_nonrepeat_signal_t
    keydown_kp_rightbrace_nonrepeat_signal;
  keydown_kp_tab_nonrepeat_signal_t keydown_kp_tab_nonrepeat_signal;
  keydown_kp_backspace_nonrepeat_signal_t
    keydown_kp_backspace_nonrepeat_signal;
  keydown_kp_a_nonrepeat_signal_t keydown_kp_a_nonrepeat_signal;
  keydown_kp_b_nonrepeat_signal_t keydown_kp_b_nonrepeat_signal;
  keydown_kp_c_nonrepeat_signal_t keydown_kp_c_nonrepeat_signal;
  keydown_kp_d_nonrepeat_signal_t keydown_kp_d_nonrepeat_signal;
  keydown_kp_e_nonrepeat_signal_t keydown_kp_e_nonrepeat_signal;
  keydown_kp_f_nonrepeat_signal_t keydown_kp_f_nonrepeat_signal;
  keydown_kp_xor_nonrepeat_signal_t keydown_kp_xor_nonrepeat_signal;
  keydown_kp_power_nonrepeat_signal_t keydown_kp_power_nonrepeat_signal;
  keydown_kp_percent_nonrepeat_signal_t keydown_kp_percent_nonrepeat_signal;
  keydown_kp_less_nonrepeat_signal_t keydown_kp_less_nonrepeat_signal;
  keydown_kp_greater_nonrepeat_signal_t keydown_kp_greater_nonrepeat_signal;
  keydown_kp_ampersand_nonrepeat_signal_t
    keydown_kp_ampersand_nonrepeat_signal;
  keydown_kp_dblampersand_nonrepeat_signal_t
    keydown_kp_dblampersand_nonrepeat_signal;
  keydown_kp_verticalbar_nonrepeat_signal_t
    keydown_kp_verticalbar_nonrepeat_signal;
  keydown_kp_dblverticalbar_nonrepeat_signal_t
    keydown_kp_dblverticalbar_nonrepeat_signal;
  keydown_kp_colon_nonrepeat_signal_t keydown_kp_colon_nonrepeat_signal;
  keydown_kp_hash_nonrepeat_signal_t keydown_kp_hash_nonrepeat_signal;
  keydown_kp_space_nonrepeat_signal_t keydown_kp_space_nonrepeat_signal;
  keydown_kp_at_nonrepeat_signal_t keydown_kp_at_nonrepeat_signal;
  keydown_kp_exclam_nonrepeat_signal_t keydown_kp_exclam_nonrepeat_signal;
  keydown_kp_memstore_nonrepeat_signal_t keydown_kp_memstore_nonrepeat_signal;
  keydown_kp_memrecall_nonrepeat_signal_t
    keydown_kp_memrecall_nonrepeat_signal;
  keydown_kp_memclear_nonrepeat_signal_t keydown_kp_memclear_nonrepeat_signal;
  keydown_kp_memadd_nonrepeat_signal_t keydown_kp_memadd_nonrepeat_signal;
  keydown_kp_memsubtract_nonrepeat_signal_t
    keydown_kp_memsubtract_nonrepeat_signal;
  keydown_kp_memmultiply_nonrepeat_signal_t
    keydown_kp_memmultiply_nonrepeat_signal;
  keydown_kp_memdivide_nonrepeat_signal_t
    keydown_kp_memdivide_nonrepeat_signal;
  keydown_kp_plusminus_nonrepeat_signal_t
    keydown_kp_plusminus_nonrepeat_signal;
  keydown_kp_clear_nonrepeat_signal_t keydown_kp_clear_nonrepeat_signal;
  keydown_kp_clearentry_nonrepeat_signal_t
    keydown_kp_clearentry_nonrepeat_signal;
  keydown_kp_binary_nonrepeat_signal_t keydown_kp_binary_nonrepeat_signal;
  keydown_kp_octal_nonrepeat_signal_t keydown_kp_octal_nonrepeat_signal;
  keydown_kp_decimal_nonrepeat_signal_t keydown_kp_decimal_nonrepeat_signal;
  keydown_kp_hexadecimal_nonrepeat_signal_t
    keydown_kp_hexadecimal_nonrepeat_signal;
  keydown_lctrl_nonrepeat_signal_t keydown_lctrl_nonrepeat_signal;
  keydown_lshift_nonrepeat_signal_t keydown_lshift_nonrepeat_signal;
  keydown_lalt_nonrepeat_signal_t keydown_lalt_nonrepeat_signal;
  keydown_lgui_nonrepeat_signal_t keydown_lgui_nonrepeat_signal;
  keydown_rctrl_nonrepeat_signal_t keydown_rctrl_nonrepeat_signal;
  keydown_rshift_nonrepeat_signal_t keydown_rshift_nonrepeat_signal;
  keydown_ralt_nonrepeat_signal_t keydown_ralt_nonrepeat_signal;
  keydown_rgui_nonrepeat_signal_t keydown_rgui_nonrepeat_signal;
  keydown_mode_nonrepeat_signal_t keydown_mode_nonrepeat_signal;
  keydown_audionext_nonrepeat_signal_t keydown_audionext_nonrepeat_signal;
  keydown_audioprev_nonrepeat_signal_t keydown_audioprev_nonrepeat_signal;
  keydown_audiostop_nonrepeat_signal_t keydown_audiostop_nonrepeat_signal;
  keydown_audioplay_nonrepeat_signal_t keydown_audioplay_nonrepeat_signal;
  keydown_audiomute_nonrepeat_signal_t keydown_audiomute_nonrepeat_signal;
  keydown_mediaselect_nonrepeat_signal_t keydown_mediaselect_nonrepeat_signal;
  keydown_www_nonrepeat_signal_t keydown_www_nonrepeat_signal;
  keydown_mail_nonrepeat_signal_t keydown_mail_nonrepeat_signal;
  keydown_calculator_nonrepeat_signal_t keydown_calculator_nonrepeat_signal;
  keydown_computer_nonrepeat_signal_t keydown_computer_nonrepeat_signal;
  keydown_ac_search_nonrepeat_signal_t keydown_ac_search_nonrepeat_signal;
  keydown_ac_home_nonrepeat_signal_t keydown_ac_home_nonrepeat_signal;
  keydown_ac_back_nonrepeat_signal_t keydown_ac_back_nonrepeat_signal;
  keydown_ac_forward_nonrepeat_signal_t keydown_ac_forward_nonrepeat_signal;
  keydown_ac_stop_nonrepeat_signal_t keydown_ac_stop_nonrepeat_signal;
  keydown_ac_refresh_nonrepeat_signal_t keydown_ac_refresh_nonrepeat_signal;
  keydown_ac_bookmarks_nonrepeat_signal_t
    keydown_ac_bookmarks_nonrepeat_signal;
  keydown_brightnessdown_nonrepeat_signal_t
    keydown_brightnessdown_nonrepeat_signal;
  keydown_brightnessup_nonrepeat_signal_t
    keydown_brightnessup_nonrepeat_signal;
  keydown_displayswitch_nonrepeat_signal_t
    keydown_displayswitch_nonrepeat_signal;
  keydown_kbdillumtoggle_nonrepeat_signal_t
    keydown_kbdillumtoggle_nonrepeat_signal;
  keydown_kbdillumdown_nonrepeat_signal_t
    keydown_kbdillumdown_nonrepeat_signal;
  keydown_kbdillumup_nonrepeat_signal_t keydown_kbdillumup_nonrepeat_signal;
  keydown_eject_nonrepeat_signal_t keydown_eject_nonrepeat_signal;
  keydown_sleep_nonrepeat_signal_t keydown_sleep_nonrepeat_signal;
  keyup_unknown_signal_t keyup_unknown_signal;
  keyup_backspace_signal_t keyup_backspace_signal;
  keyup_tab_signal_t keyup_tab_signal;
  keyup_return_signal_t keyup_return_signal;
  keyup_escape_signal_t keyup_escape_signal;
  keyup_space_signal_t keyup_space_signal;
  keyup_exclaim_signal_t keyup_exclaim_signal;
  keyup_quotedbl_signal_t keyup_quotedbl_signal;
  keyup_hash_signal_t keyup_hash_signal;
  keyup_dollar_signal_t keyup_dollar_signal;
  keyup_percent_signal_t keyup_percent_signal;
  keyup_ampersand_signal_t keyup_ampersand_signal;
  keyup_quote_signal_t keyup_quote_signal;
  keyup_leftparen_signal_t keyup_leftparen_signal;
  keyup_rightparen_signal_t keyup_rightparen_signal;
  keyup_asterisk_signal_t keyup_asterisk_signal;
  keyup_plus_signal_t keyup_plus_signal;
  keyup_comma_signal_t keyup_comma_signal;
  keyup_minus_signal_t keyup_minus_signal;
  keyup_period_signal_t keyup_period_signal;
  keyup_slash_signal_t keyup_slash_signal;
  keyup_0_signal_t keyup_0_signal;
  keyup_1_signal_t keyup_1_signal;
  keyup_2_signal_t keyup_2_signal;
  keyup_3_signal_t keyup_3_signal;
  keyup_4_signal_t keyup_4_signal;
  keyup_5_signal_t keyup_5_signal;
  keyup_6_signal_t keyup_6_signal;
  keyup_7_signal_t keyup_7_signal;
  keyup_8_signal_t keyup_8_signal;
  keyup_9_signal_t keyup_9_signal;
  keyup_colon_signal_t keyup_colon_signal;
  keyup_semicolon_signal_t keyup_semicolon_signal;
  keyup_less_signal_t keyup_less_signal;
  keyup_equals_signal_t keyup_equals_signal;
  keyup_greater_signal_t keyup_greater_signal;
  keyup_question_signal_t keyup_question_signal;
  keyup_at_signal_t keyup_at_signal;
  keyup_leftbracket_signal_t keyup_leftbracket_signal;
  keyup_backslash_signal_t keyup_backslash_signal;
  keyup_rightbracket_signal_t keyup_rightbracket_signal;
  keyup_caret_signal_t keyup_caret_signal;
  keyup_underscore_signal_t keyup_underscore_signal;
  keyup_backquote_signal_t keyup_backquote_signal;
  keyup_a_signal_t keyup_a_signal;
  keyup_b_signal_t keyup_b_signal;
  keyup_c_signal_t keyup_c_signal;
  keyup_d_signal_t keyup_d_signal;
  keyup_e_signal_t keyup_e_signal;
  keyup_f_signal_t keyup_f_signal;
  keyup_g_signal_t keyup_g_signal;
  keyup_h_signal_t keyup_h_signal;
  keyup_i_signal_t keyup_i_signal;
  keyup_j_signal_t keyup_j_signal;
  keyup_k_signal_t keyup_k_signal;
  keyup_l_signal_t keyup_l_signal;
  keyup_m_signal_t keyup_m_signal;
  keyup_n_signal_t keyup_n_signal;
  keyup_o_signal_t keyup_o_signal;
  keyup_p_signal_t keyup_p_signal;
  keyup_q_signal_t keyup_q_signal;
  keyup_r_signal_t keyup_r_signal;
  keyup_s_signal_t keyup_s_signal;
  keyup_t_signal_t keyup_t_signal;
  keyup_u_signal_t keyup_u_signal;
  keyup_v_signal_t keyup_v_signal;
  keyup_w_signal_t keyup_w_signal;
  keyup_x_signal_t keyup_x_signal;
  keyup_y_signal_t keyup_y_signal;
  keyup_z_signal_t keyup_z_signal;
  keyup_delete_signal_t keyup_delete_signal;
  keyup_capslock_signal_t keyup_capslock_signal;
  keyup_f1_signal_t keyup_f1_signal;
  keyup_f2_signal_t keyup_f2_signal;
  keyup_f3_signal_t keyup_f3_signal;
  keyup_f4_signal_t keyup_f4_signal;
  keyup_f5_signal_t keyup_f5_signal;
  keyup_f6_signal_t keyup_f6_signal;
  keyup_f7_signal_t keyup_f7_signal;
  keyup_f8_signal_t keyup_f8_signal;
  keyup_f9_signal_t keyup_f9_signal;
  keyup_f10_signal_t keyup_f10_signal;
  keyup_f11_signal_t keyup_f11_signal;
  keyup_f12_signal_t keyup_f12_signal;
  keyup_printscreen_signal_t keyup_printscreen_signal;
  keyup_scrolllock_signal_t keyup_scrolllock_signal;
  keyup_pause_signal_t keyup_pause_signal;
  keyup_insert_signal_t keyup_insert_signal;
  keyup_home_signal_t keyup_home_signal;
  keyup_pageup_signal_t keyup_pageup_signal;
  keyup_end_signal_t keyup_end_signal;
  keyup_pagedown_signal_t keyup_pagedown_signal;
  keyup_right_signal_t keyup_right_signal;
  keyup_left_signal_t keyup_left_signal;
  keyup_down_signal_t keyup_down_signal;
  keyup_up_signal_t keyup_up_signal;
  keyup_numlockclear_signal_t keyup_numlockclear_signal;
  keyup_kp_divide_signal_t keyup_kp_divide_signal;
  keyup_kp_multiply_signal_t keyup_kp_multiply_signal;
  keyup_kp_minus_signal_t keyup_kp_minus_signal;
  keyup_kp_plus_signal_t keyup_kp_plus_signal;
  keyup_kp_enter_signal_t keyup_kp_enter_signal;
  keyup_kp_1_signal_t keyup_kp_1_signal;
  keyup_kp_2_signal_t keyup_kp_2_signal;
  keyup_kp_3_signal_t keyup_kp_3_signal;
  keyup_kp_4_signal_t keyup_kp_4_signal;
  keyup_kp_5_signal_t keyup_kp_5_signal;
  keyup_kp_6_signal_t keyup_kp_6_signal;
  keyup_kp_7_signal_t keyup_kp_7_signal;
  keyup_kp_8_signal_t keyup_kp_8_signal;
  keyup_kp_9_signal_t keyup_kp_9_signal;
  keyup_kp_0_signal_t keyup_kp_0_signal;
  keyup_kp_period_signal_t keyup_kp_period_signal;
  keyup_application_signal_t keyup_application_signal;
  keyup_power_signal_t keyup_power_signal;
  keyup_kp_equals_signal_t keyup_kp_equals_signal;
  keyup_f13_signal_t keyup_f13_signal;
  keyup_f14_signal_t keyup_f14_signal;
  keyup_f15_signal_t keyup_f15_signal;
  keyup_f16_signal_t keyup_f16_signal;
  keyup_f17_signal_t keyup_f17_signal;
  keyup_f18_signal_t keyup_f18_signal;
  keyup_f19_signal_t keyup_f19_signal;
  keyup_f20_signal_t keyup_f20_signal;
  keyup_f21_signal_t keyup_f21_signal;
  keyup_f22_signal_t keyup_f22_signal;
  keyup_f23_signal_t keyup_f23_signal;
  keyup_f24_signal_t keyup_f24_signal;
  keyup_execute_signal_t keyup_execute_signal;
  keyup_help_signal_t keyup_help_signal;
  keyup_menu_signal_t keyup_menu_signal;
  keyup_select_signal_t keyup_select_signal;
  keyup_stop_signal_t keyup_stop_signal;
  keyup_again_signal_t keyup_again_signal;
  keyup_undo_signal_t keyup_undo_signal;
  keyup_cut_signal_t keyup_cut_signal;
  keyup_copy_signal_t keyup_copy_signal;
  keyup_paste_signal_t keyup_paste_signal;
  keyup_find_signal_t keyup_find_signal;
  keyup_mute_signal_t keyup_mute_signal;
  keyup_volumeup_signal_t keyup_volumeup_signal;
  keyup_volumedown_signal_t keyup_volumedown_signal;
  keyup_kp_comma_signal_t keyup_kp_comma_signal;
  keyup_kp_equalsas400_signal_t keyup_kp_equalsas400_signal;
  keyup_alterase_signal_t keyup_alterase_signal;
  keyup_sysreq_signal_t keyup_sysreq_signal;
  keyup_cancel_signal_t keyup_cancel_signal;
  keyup_clear_signal_t keyup_clear_signal;
  keyup_prior_signal_t keyup_prior_signal;
  keyup_return2_signal_t keyup_return2_signal;
  keyup_separator_signal_t keyup_separator_signal;
  keyup_out_signal_t keyup_out_signal;
  keyup_oper_signal_t keyup_oper_signal;
  keyup_clearagain_signal_t keyup_clearagain_signal;
  keyup_crsel_signal_t keyup_crsel_signal;
  keyup_exsel_signal_t keyup_exsel_signal;
  keyup_kp_00_signal_t keyup_kp_00_signal;
  keyup_kp_000_signal_t keyup_kp_000_signal;
  keyup_thousandsseparator_signal_t keyup_thousandsseparator_signal;
  keyup_decimalseparator_signal_t keyup_decimalseparator_signal;
  keyup_currencyunit_signal_t keyup_currencyunit_signal;
  keyup_currencysubunit_signal_t keyup_currencysubunit_signal;
  keyup_kp_leftparen_signal_t keyup_kp_leftparen_signal;
  keyup_kp_rightparen_signal_t keyup_kp_rightparen_signal;
  keyup_kp_leftbrace_signal_t keyup_kp_leftbrace_signal;
  keyup_kp_rightbrace_signal_t keyup_kp_rightbrace_signal;
  keyup_kp_tab_signal_t keyup_kp_tab_signal;
  keyup_kp_backspace_signal_t keyup_kp_backspace_signal;
  keyup_kp_a_signal_t keyup_kp_a_signal;
  keyup_kp_b_signal_t keyup_kp_b_signal;
  keyup_kp_c_signal_t keyup_kp_c_signal;
  keyup_kp_d_signal_t keyup_kp_d_signal;
  keyup_kp_e_signal_t keyup_kp_e_signal;
  keyup_kp_f_signal_t keyup_kp_f_signal;
  keyup_kp_xor_signal_t keyup_kp_xor_signal;
  keyup_kp_power_signal_t keyup_kp_power_signal;
  keyup_kp_percent_signal_t keyup_kp_percent_signal;
  keyup_kp_less_signal_t keyup_kp_less_signal;
  keyup_kp_greater_signal_t keyup_kp_greater_signal;
  keyup_kp_ampersand_signal_t keyup_kp_ampersand_signal;
  keyup_kp_dblampersand_signal_t keyup_kp_dblampersand_signal;
  keyup_kp_verticalbar_signal_t keyup_kp_verticalbar_signal;
  keyup_kp_dblverticalbar_signal_t keyup_kp_dblverticalbar_signal;
  keyup_kp_colon_signal_t keyup_kp_colon_signal;
  keyup_kp_hash_signal_t keyup_kp_hash_signal;
  keyup_kp_space_signal_t keyup_kp_space_signal;
  keyup_kp_at_signal_t keyup_kp_at_signal;
  keyup_kp_exclam_signal_t keyup_kp_exclam_signal;
  keyup_kp_memstore_signal_t keyup_kp_memstore_signal;
  keyup_kp_memrecall_signal_t keyup_kp_memrecall_signal;
  keyup_kp_memclear_signal_t keyup_kp_memclear_signal;
  keyup_kp_memadd_signal_t keyup_kp_memadd_signal;
  keyup_kp_memsubtract_signal_t keyup_kp_memsubtract_signal;
  keyup_kp_memmultiply_signal_t keyup_kp_memmultiply_signal;
  keyup_kp_memdivide_signal_t keyup_kp_memdivide_signal;
  keyup_kp_plusminus_signal_t keyup_kp_plusminus_signal;
  keyup_kp_clear_signal_t keyup_kp_clear_signal;
  keyup_kp_clearentry_signal_t keyup_kp_clearentry_signal;
  keyup_kp_binary_signal_t keyup_kp_binary_signal;
  keyup_kp_octal_signal_t keyup_kp_octal_signal;
  keyup_kp_decimal_signal_t keyup_kp_decimal_signal;
  keyup_kp_hexadecimal_signal_t keyup_kp_hexadecimal_signal;
  keyup_lctrl_signal_t keyup_lctrl_signal;
  keyup_lshift_signal_t keyup_lshift_signal;
  keyup_lalt_signal_t keyup_lalt_signal;
  keyup_lgui_signal_t keyup_lgui_signal;
  keyup_rctrl_signal_t keyup_rctrl_signal;
  keyup_rshift_signal_t keyup_rshift_signal;
  keyup_ralt_signal_t keyup_ralt_signal;
  keyup_rgui_signal_t keyup_rgui_signal;
  keyup_mode_signal_t keyup_mode_signal;
  keyup_audionext_signal_t keyup_audionext_signal;
  keyup_audioprev_signal_t keyup_audioprev_signal;
  keyup_audiostop_signal_t keyup_audiostop_signal;
  keyup_audioplay_signal_t keyup_audioplay_signal;
  keyup_audiomute_signal_t keyup_audiomute_signal;
  keyup_mediaselect_signal_t keyup_mediaselect_signal;
  keyup_www_signal_t keyup_www_signal;
  keyup_mail_signal_t keyup_mail_signal;
  keyup_calculator_signal_t keyup_calculator_signal;
  keyup_computer_signal_t keyup_computer_signal;
  keyup_ac_search_signal_t keyup_ac_search_signal;
  keyup_ac_home_signal_t keyup_ac_home_signal;
  keyup_ac_back_signal_t keyup_ac_back_signal;
  keyup_ac_forward_signal_t keyup_ac_forward_signal;
  keyup_ac_stop_signal_t keyup_ac_stop_signal;
  keyup_ac_refresh_signal_t keyup_ac_refresh_signal;
  keyup_ac_bookmarks_signal_t keyup_ac_bookmarks_signal;
  keyup_brightnessdown_signal_t keyup_brightnessdown_signal;
  keyup_brightnessup_signal_t keyup_brightnessup_signal;
  keyup_displayswitch_signal_t keyup_displayswitch_signal;
  keyup_kbdillumtoggle_signal_t keyup_kbdillumtoggle_signal;
  keyup_kbdillumdown_signal_t keyup_kbdillumdown_signal;
  keyup_kbdillumup_signal_t keyup_kbdillumup_signal;
  keyup_eject_signal_t keyup_eject_signal;
  keyup_sleep_signal_t keyup_sleep_signal;
};
}

#endif
