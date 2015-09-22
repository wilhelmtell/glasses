#ifndef GLS_DETAIL_TRANSLATE_KEYDOWN_REPEAT_EVENT_TCC_
#define GLS_DETAIL_TRANSLATE_KEYDOWN_REPEAT_EVENT_TCC_

#include <SDL2/SDL.h>

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_keydown_unknown_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_unknown_repeat();
}

template <typename DispatchT>
void translate_keydown_backspace_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_backspace_repeat();
}

template <typename DispatchT>
void translate_keydown_tab_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_tab_repeat();
}

template <typename DispatchT>
void translate_keydown_return_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_return_repeat();
}

template <typename DispatchT>
void translate_keydown_escape_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_escape_repeat();
}

template <typename DispatchT>
void translate_keydown_space_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_space_repeat();
}

template <typename DispatchT>
void translate_keydown_exclaim_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_exclaim_repeat();
}

template <typename DispatchT>
void translate_keydown_quotedbl_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_quotedbl_repeat();
}

template <typename DispatchT>
void translate_keydown_hash_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_hash_repeat();
}

template <typename DispatchT>
void translate_keydown_dollar_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_dollar_repeat();
}

template <typename DispatchT>
void translate_keydown_percent_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_percent_repeat();
}

template <typename DispatchT>
void translate_keydown_ampersand_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_ampersand_repeat();
}

template <typename DispatchT>
void translate_keydown_quote_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_quote_repeat();
}

template <typename DispatchT>
void translate_keydown_leftparen_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_leftparen_repeat();
}

template <typename DispatchT>
void translate_keydown_rightparen_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_rightparen_repeat();
}

template <typename DispatchT>
void translate_keydown_asterisk_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_asterisk_repeat();
}

template <typename DispatchT>
void translate_keydown_plus_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_plus_repeat();
}

template <typename DispatchT>
void translate_keydown_comma_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_comma_repeat();
}

template <typename DispatchT>
void translate_keydown_minus_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_minus_repeat();
}

template <typename DispatchT>
void translate_keydown_period_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_period_repeat();
}

template <typename DispatchT>
void translate_keydown_slash_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_slash_repeat();
}

template <typename DispatchT>
void translate_keydown_0_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_0_repeat();
}

template <typename DispatchT>
void translate_keydown_1_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_1_repeat();
}

template <typename DispatchT>
void translate_keydown_2_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_2_repeat();
}

template <typename DispatchT>
void translate_keydown_3_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_3_repeat();
}

template <typename DispatchT>
void translate_keydown_4_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_4_repeat();
}

template <typename DispatchT>
void translate_keydown_5_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_5_repeat();
}

template <typename DispatchT>
void translate_keydown_6_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_6_repeat();
}

template <typename DispatchT>
void translate_keydown_7_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_7_repeat();
}

template <typename DispatchT>
void translate_keydown_8_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_8_repeat();
}

template <typename DispatchT>
void translate_keydown_9_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_9_repeat();
}

template <typename DispatchT>
void translate_keydown_colon_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_colon_repeat();
}

template <typename DispatchT>
void translate_keydown_semicolon_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_semicolon_repeat();
}

template <typename DispatchT>
void translate_keydown_less_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_less_repeat();
}

template <typename DispatchT>
void translate_keydown_equals_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_equals_repeat();
}

template <typename DispatchT>
void translate_keydown_greater_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_greater_repeat();
}

template <typename DispatchT>
void translate_keydown_question_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_question_repeat();
}

template <typename DispatchT>
void translate_keydown_at_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_at_repeat();
}

template <typename DispatchT>
void translate_keydown_leftbracket_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown_leftbracket_repeat();
}

template <typename DispatchT>
void translate_keydown_backslash_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_backslash_repeat();
}

template <typename DispatchT>
void translate_keydown_rightbracket_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_rightbracket_repeat();
}

template <typename DispatchT>
void translate_keydown_caret_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_caret_repeat();
}

template <typename DispatchT>
void translate_keydown_underscore_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_underscore_repeat();
}

template <typename DispatchT>
void translate_keydown_backquote_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_backquote_repeat();
}

template <typename DispatchT>
void translate_keydown_a_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_a_repeat();
}

template <typename DispatchT>
void translate_keydown_b_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_b_repeat();
}

template <typename DispatchT>
void translate_keydown_c_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_c_repeat();
}

template <typename DispatchT>
void translate_keydown_d_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_d_repeat();
}

template <typename DispatchT>
void translate_keydown_e_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_e_repeat();
}

template <typename DispatchT>
void translate_keydown_f_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_f_repeat();
}

template <typename DispatchT>
void translate_keydown_g_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_g_repeat();
}

template <typename DispatchT>
void translate_keydown_h_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_h_repeat();
}

template <typename DispatchT>
void translate_keydown_i_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_i_repeat();
}

template <typename DispatchT>
void translate_keydown_j_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_j_repeat();
}

template <typename DispatchT>
void translate_keydown_k_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_k_repeat();
}

template <typename DispatchT>
void translate_keydown_l_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_l_repeat();
}

template <typename DispatchT>
void translate_keydown_m_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_m_repeat();
}

template <typename DispatchT>
void translate_keydown_n_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_n_repeat();
}

template <typename DispatchT>
void translate_keydown_o_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_o_repeat();
}

template <typename DispatchT>
void translate_keydown_p_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_p_repeat();
}

template <typename DispatchT>
void translate_keydown_q_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_q_repeat();
}

template <typename DispatchT>
void translate_keydown_r_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_r_repeat();
}

template <typename DispatchT>
void translate_keydown_s_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_s_repeat();
}

template <typename DispatchT>
void translate_keydown_t_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_t_repeat();
}

template <typename DispatchT>
void translate_keydown_u_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_u_repeat();
}

template <typename DispatchT>
void translate_keydown_v_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_v_repeat();
}

template <typename DispatchT>
void translate_keydown_w_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_w_repeat();
}

template <typename DispatchT>
void translate_keydown_x_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_x_repeat();
}

template <typename DispatchT>
void translate_keydown_y_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_y_repeat();
}

template <typename DispatchT>
void translate_keydown_z_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_z_repeat();
}

template <typename DispatchT>
void translate_keydown_delete_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_delete_repeat();
}

template <typename DispatchT>
void translate_keydown_capslock_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_capslock_repeat();
}

template <typename DispatchT>
void translate_keydown_f1_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_f1_repeat();
}

template <typename DispatchT>
void translate_keydown_f2_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_f2_repeat();
}

template <typename DispatchT>
void translate_keydown_f3_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_f3_repeat();
}

template <typename DispatchT>
void translate_keydown_f4_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_f4_repeat();
}

template <typename DispatchT>
void translate_keydown_f5_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_f5_repeat();
}

template <typename DispatchT>
void translate_keydown_f6_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_f6_repeat();
}

template <typename DispatchT>
void translate_keydown_f7_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_f7_repeat();
}

template <typename DispatchT>
void translate_keydown_f8_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_f8_repeat();
}

template <typename DispatchT>
void translate_keydown_f9_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_f9_repeat();
}

template <typename DispatchT>
void translate_keydown_f10_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f10_repeat();
}

template <typename DispatchT>
void translate_keydown_f11_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f11_repeat();
}

template <typename DispatchT>
void translate_keydown_f12_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f12_repeat();
}

template <typename DispatchT>
void translate_keydown_printscreen_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown_printscreen_repeat();
}

template <typename DispatchT>
void translate_keydown_scrolllock_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_scrolllock_repeat();
}

template <typename DispatchT>
void translate_keydown_pause_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_pause_repeat();
}

template <typename DispatchT>
void translate_keydown_insert_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_insert_repeat();
}

template <typename DispatchT>
void translate_keydown_home_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_home_repeat();
}

template <typename DispatchT>
void translate_keydown_pageup_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_pageup_repeat();
}

template <typename DispatchT>
void translate_keydown_end_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_end_repeat();
}

template <typename DispatchT>
void translate_keydown_pagedown_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_pagedown_repeat();
}

template <typename DispatchT>
void translate_keydown_right_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_right_repeat();
}

template <typename DispatchT>
void translate_keydown_left_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_left_repeat();
}

template <typename DispatchT>
void translate_keydown_down_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_down_repeat();
}

template <typename DispatchT>
void translate_keydown_up_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_up_repeat();
}

template <typename DispatchT>
void translate_keydown_numlockclear_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_numlockclear_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_divide_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_kp_divide_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_multiply_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown_kp_multiply_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_minus_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_kp_minus_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_plus_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_kp_plus_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_enter_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_kp_enter_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_1_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_1_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_2_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_2_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_3_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_3_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_4_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_4_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_5_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_5_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_6_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_6_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_7_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_7_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_8_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_8_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_9_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_9_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_0_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_0_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_period_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_kp_period_repeat();
}

template <typename DispatchT>
void translate_keydown_application_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown_application_repeat();
}

template <typename DispatchT>
void translate_keydown_power_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_power_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_equals_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_kp_equals_repeat();
}

template <typename DispatchT>
void translate_keydown_f13_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f13_repeat();
}

template <typename DispatchT>
void translate_keydown_f14_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f14_repeat();
}

template <typename DispatchT>
void translate_keydown_f15_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f15_repeat();
}

template <typename DispatchT>
void translate_keydown_f16_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f16_repeat();
}

template <typename DispatchT>
void translate_keydown_f17_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f17_repeat();
}

template <typename DispatchT>
void translate_keydown_f18_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f18_repeat();
}

template <typename DispatchT>
void translate_keydown_f19_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f19_repeat();
}

template <typename DispatchT>
void translate_keydown_f20_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f20_repeat();
}

template <typename DispatchT>
void translate_keydown_f21_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f21_repeat();
}

template <typename DispatchT>
void translate_keydown_f22_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f22_repeat();
}

template <typename DispatchT>
void translate_keydown_f23_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f23_repeat();
}

template <typename DispatchT>
void translate_keydown_f24_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_f24_repeat();
}

template <typename DispatchT>
void translate_keydown_execute_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_execute_repeat();
}

template <typename DispatchT>
void translate_keydown_help_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_help_repeat();
}

template <typename DispatchT>
void translate_keydown_menu_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_menu_repeat();
}

template <typename DispatchT>
void translate_keydown_select_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_select_repeat();
}

template <typename DispatchT>
void translate_keydown_stop_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_stop_repeat();
}

template <typename DispatchT>
void translate_keydown_again_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_again_repeat();
}

template <typename DispatchT>
void translate_keydown_undo_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_undo_repeat();
}

template <typename DispatchT>
void translate_keydown_cut_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_cut_repeat();
}

template <typename DispatchT>
void translate_keydown_copy_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_copy_repeat();
}

template <typename DispatchT>
void translate_keydown_paste_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_paste_repeat();
}

template <typename DispatchT>
void translate_keydown_find_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_find_repeat();
}

template <typename DispatchT>
void translate_keydown_mute_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_mute_repeat();
}

template <typename DispatchT>
void translate_keydown_volumeup_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_volumeup_repeat();
}

template <typename DispatchT>
void translate_keydown_volumedown_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_volumedown_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_comma_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_kp_comma_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_equalsas400_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown_kp_equalsas400_repeat();
}

template <typename DispatchT>
void translate_keydown_alterase_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_alterase_repeat();
}

template <typename DispatchT>
void translate_keydown_sysreq_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_sysreq_repeat();
}

template <typename DispatchT>
void translate_keydown_cancel_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_cancel_repeat();
}

template <typename DispatchT>
void translate_keydown_clear_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_clear_repeat();
}

template <typename DispatchT>
void translate_keydown_prior_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_prior_repeat();
}

template <typename DispatchT>
void translate_keydown_return2_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_return2_repeat();
}

template <typename DispatchT>
void translate_keydown_separator_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_separator_repeat();
}

template <typename DispatchT>
void translate_keydown_out_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_out_repeat();
}

template <typename DispatchT>
void translate_keydown_oper_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_oper_repeat();
}

template <typename DispatchT>
void translate_keydown_clearagain_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_clearagain_repeat();
}

template <typename DispatchT>
void translate_keydown_crsel_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_crsel_repeat();
}

template <typename DispatchT>
void translate_keydown_exsel_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_exsel_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_00_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_kp_00_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_000_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_kp_000_repeat();
}

template <typename DispatchT>
void translate_keydown_thousandsseparator_repeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_thousandsseparator_repeat();
}

template <typename DispatchT>
void translate_keydown_decimalseparator_repeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_decimalseparator_repeat();
}

template <typename DispatchT>
void translate_keydown_currencyunit_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_currencyunit_repeat();
}

template <typename DispatchT>
void translate_keydown_currencysubunit_repeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_currencysubunit_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_leftparen_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_kp_leftparen_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_rightparen_repeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_rightparen_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_leftbrace_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_kp_leftbrace_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_rightbrace_repeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_rightbrace_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_tab_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_kp_tab_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_backspace_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_kp_backspace_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_a_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_a_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_b_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_b_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_c_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_c_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_d_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_d_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_e_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_e_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_f_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_f_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_xor_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_kp_xor_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_power_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_kp_power_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_percent_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_kp_percent_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_less_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_kp_less_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_greater_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_kp_greater_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_ampersand_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_kp_ampersand_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_dblampersand_repeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_kp_dblampersand_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_verticalbar_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown_kp_verticalbar_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_dblverticalbar_repeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_kp_dblverticalbar_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_colon_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_kp_colon_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_hash_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_kp_hash_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_space_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_kp_space_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_at_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_kp_at_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_exclam_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_kp_exclam_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_memstore_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown_kp_memstore_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_memrecall_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_kp_memrecall_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_memclear_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown_kp_memclear_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_memadd_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_kp_memadd_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_memsubtract_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown_kp_memsubtract_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_memmultiply_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown_kp_memmultiply_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_memdivide_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_kp_memdivide_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_plusminus_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_kp_plusminus_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_clear_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_kp_clear_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_clearentry_repeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_clearentry_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_binary_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_kp_binary_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_octal_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_kp_octal_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_decimal_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_kp_decimal_repeat();
}

template <typename DispatchT>
void translate_keydown_kp_hexadecimal_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown_kp_hexadecimal_repeat();
}

template <typename DispatchT>
void translate_keydown_lctrl_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_lctrl_repeat();
}

template <typename DispatchT>
void translate_keydown_lshift_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_lshift_repeat();
}

template <typename DispatchT>
void translate_keydown_lalt_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_lalt_repeat();
}

template <typename DispatchT>
void translate_keydown_lgui_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_lgui_repeat();
}

template <typename DispatchT>
void translate_keydown_rctrl_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_rctrl_repeat();
}

template <typename DispatchT>
void translate_keydown_rshift_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_rshift_repeat();
}

template <typename DispatchT>
void translate_keydown_ralt_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_ralt_repeat();
}

template <typename DispatchT>
void translate_keydown_rgui_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_rgui_repeat();
}

template <typename DispatchT>
void translate_keydown_mode_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_mode_repeat();
}

template <typename DispatchT>
void translate_keydown_audionext_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_audionext_repeat();
}

template <typename DispatchT>
void translate_keydown_audioprev_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_audioprev_repeat();
}

template <typename DispatchT>
void translate_keydown_audiostop_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_audiostop_repeat();
}

template <typename DispatchT>
void translate_keydown_audioplay_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_audioplay_repeat();
}

template <typename DispatchT>
void translate_keydown_audiomute_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_audiomute_repeat();
}

template <typename DispatchT>
void translate_keydown_mediaselect_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown_mediaselect_repeat();
}

template <typename DispatchT>
void translate_keydown_www_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_www_repeat();
}

template <typename DispatchT>
void translate_keydown_mail_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_mail_repeat();
}

template <typename DispatchT>
void translate_keydown_calculator_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_calculator_repeat();
}

template <typename DispatchT>
void translate_keydown_computer_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_computer_repeat();
}

template <typename DispatchT>
void translate_keydown_ac_search_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_ac_search_repeat();
}

template <typename DispatchT>
void translate_keydown_ac_home_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_ac_home_repeat();
}

template <typename DispatchT>
void translate_keydown_ac_back_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_ac_back_repeat();
}

template <typename DispatchT>
void translate_keydown_ac_forward_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_ac_forward_repeat();
}

template <typename DispatchT>
void translate_keydown_ac_stop_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_ac_stop_repeat();
}

template <typename DispatchT>
void translate_keydown_ac_refresh_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_ac_refresh_repeat();
}

template <typename DispatchT>
void translate_keydown_ac_bookmarks_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_ac_bookmarks_repeat();
}

template <typename DispatchT>
void translate_keydown_brightnessdown_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown_brightnessdown_repeat();
}

template <typename DispatchT>
void translate_keydown_brightnessup_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_brightnessup_repeat();
}

template <typename DispatchT>
void translate_keydown_displayswitch_repeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown_displayswitch_repeat();
}

template <typename DispatchT>
void translate_keydown_kbdillumtoggle_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown_kbdillumtoggle_repeat();
}

template <typename DispatchT>
void translate_keydown_kbdillumdown_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown_kbdillumdown_repeat();
}

template <typename DispatchT>
void translate_keydown_kbdillumup_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_kbdillumup_repeat();
}

template <typename DispatchT>
void translate_keydown_eject_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_eject_repeat();
}

template <typename DispatchT>
void translate_keydown_sleep_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_sleep_repeat();
}

template <typename DispatchT>
void translate_keydown_repeat_event(SDL_Event const& e,
                                    DispatchT const* dispatch) {
  if(e.key.keysym.sym == SDLK_UNKNOWN)
    translate_keydown_unknown_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BACKSPACE)
    translate_keydown_backspace_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_TAB)
    translate_keydown_tab_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RETURN)
    translate_keydown_return_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_ESCAPE)
    translate_keydown_escape_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SPACE)
    translate_keydown_space_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EXCLAIM)
    translate_keydown_exclaim_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_QUOTEDBL)
    translate_keydown_quotedbl_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_HASH)
    translate_keydown_hash_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DOLLAR)
    translate_keydown_dollar_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PERCENT)
    translate_keydown_percent_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AMPERSAND)
    translate_keydown_ampersand_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_QUOTE)
    translate_keydown_quote_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LEFTPAREN)
    translate_keydown_leftparen_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RIGHTPAREN)
    translate_keydown_rightparen_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_ASTERISK)
    translate_keydown_asterisk_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PLUS)
    translate_keydown_plus_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COMMA)
    translate_keydown_comma_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MINUS)
    translate_keydown_minus_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PERIOD)
    translate_keydown_period_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SLASH)
    translate_keydown_slash_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_0)
    translate_keydown_0_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_1)
    translate_keydown_1_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_2)
    translate_keydown_2_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_3)
    translate_keydown_3_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_4)
    translate_keydown_4_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_5)
    translate_keydown_5_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_6)
    translate_keydown_6_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_7)
    translate_keydown_7_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_8)
    translate_keydown_8_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_9)
    translate_keydown_9_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COLON)
    translate_keydown_colon_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SEMICOLON)
    translate_keydown_semicolon_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LESS)
    translate_keydown_less_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EQUALS)
    translate_keydown_equals_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_GREATER)
    translate_keydown_greater_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_QUESTION)
    translate_keydown_question_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AT)
    translate_keydown_at_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LEFTBRACKET)
    translate_keydown_leftbracket_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BACKSLASH)
    translate_keydown_backslash_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RIGHTBRACKET)
    translate_keydown_rightbracket_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CARET)
    translate_keydown_caret_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_UNDERSCORE)
    translate_keydown_underscore_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BACKQUOTE)
    translate_keydown_backquote_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_a)
    translate_keydown_a_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_b)
    translate_keydown_b_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_c)
    translate_keydown_c_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_d)
    translate_keydown_d_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_e)
    translate_keydown_e_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_f)
    translate_keydown_f_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_g)
    translate_keydown_g_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_h)
    translate_keydown_h_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_i)
    translate_keydown_i_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_j)
    translate_keydown_j_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_k)
    translate_keydown_k_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_l)
    translate_keydown_l_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_m)
    translate_keydown_m_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_n)
    translate_keydown_n_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_o)
    translate_keydown_o_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_p)
    translate_keydown_p_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_q)
    translate_keydown_q_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_r)
    translate_keydown_r_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_s)
    translate_keydown_s_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_t)
    translate_keydown_t_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_u)
    translate_keydown_u_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_v)
    translate_keydown_v_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_w)
    translate_keydown_w_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_x)
    translate_keydown_x_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_y)
    translate_keydown_y_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_z)
    translate_keydown_z_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DELETE)
    translate_keydown_delete_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CAPSLOCK)
    translate_keydown_capslock_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F1)
    translate_keydown_f1_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F2)
    translate_keydown_f2_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F3)
    translate_keydown_f3_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F4)
    translate_keydown_f4_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F5)
    translate_keydown_f5_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F6)
    translate_keydown_f6_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F7)
    translate_keydown_f7_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F8)
    translate_keydown_f8_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F9)
    translate_keydown_f9_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F10)
    translate_keydown_f10_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F11)
    translate_keydown_f11_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F12)
    translate_keydown_f12_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PRINTSCREEN)
    translate_keydown_printscreen_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SCROLLLOCK)
    translate_keydown_scrolllock_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PAUSE)
    translate_keydown_pause_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_INSERT)
    translate_keydown_insert_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_HOME)
    translate_keydown_home_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PAGEUP)
    translate_keydown_pageup_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_END)
    translate_keydown_end_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PAGEDOWN)
    translate_keydown_pagedown_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RIGHT)
    translate_keydown_right_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LEFT)
    translate_keydown_left_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DOWN)
    translate_keydown_down_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_UP)
    translate_keydown_up_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_NUMLOCKCLEAR)
    translate_keydown_numlockclear_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DIVIDE)
    translate_keydown_kp_divide_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MULTIPLY)
    translate_keydown_kp_multiply_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MINUS)
    translate_keydown_kp_minus_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PLUS)
    translate_keydown_kp_plus_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_ENTER)
    translate_keydown_kp_enter_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_1)
    translate_keydown_kp_1_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_2)
    translate_keydown_kp_2_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_3)
    translate_keydown_kp_3_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_4)
    translate_keydown_kp_4_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_5)
    translate_keydown_kp_5_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_6)
    translate_keydown_kp_6_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_7)
    translate_keydown_kp_7_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_8)
    translate_keydown_kp_8_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_9)
    translate_keydown_kp_9_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_0)
    translate_keydown_kp_0_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PERIOD)
    translate_keydown_kp_period_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_APPLICATION)
    translate_keydown_application_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_POWER)
    translate_keydown_power_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_EQUALS)
    translate_keydown_kp_equals_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F13)
    translate_keydown_f13_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F14)
    translate_keydown_f14_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F15)
    translate_keydown_f15_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F16)
    translate_keydown_f16_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F17)
    translate_keydown_f17_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F18)
    translate_keydown_f18_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F19)
    translate_keydown_f19_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F20)
    translate_keydown_f20_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F21)
    translate_keydown_f21_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F22)
    translate_keydown_f22_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F23)
    translate_keydown_f23_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F24)
    translate_keydown_f24_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EXECUTE)
    translate_keydown_execute_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_HELP)
    translate_keydown_help_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MENU)
    translate_keydown_menu_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SELECT)
    translate_keydown_select_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_STOP)
    translate_keydown_stop_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AGAIN)
    translate_keydown_again_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_UNDO)
    translate_keydown_undo_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CUT)
    translate_keydown_cut_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COPY)
    translate_keydown_copy_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PASTE)
    translate_keydown_paste_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_FIND)
    translate_keydown_find_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MUTE)
    translate_keydown_mute_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_VOLUMEUP)
    translate_keydown_volumeup_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_VOLUMEDOWN)
    translate_keydown_volumedown_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_COMMA)
    translate_keydown_kp_comma_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_EQUALSAS400)
    translate_keydown_kp_equalsas400_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_ALTERASE)
    translate_keydown_alterase_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SYSREQ)
    translate_keydown_sysreq_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CANCEL)
    translate_keydown_cancel_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CLEAR)
    translate_keydown_clear_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PRIOR)
    translate_keydown_prior_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RETURN2)
    translate_keydown_return2_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SEPARATOR)
    translate_keydown_separator_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_OUT)
    translate_keydown_out_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_OPER)
    translate_keydown_oper_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CLEARAGAIN)
    translate_keydown_clearagain_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CRSEL)
    translate_keydown_crsel_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EXSEL)
    translate_keydown_exsel_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_00)
    translate_keydown_kp_00_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_000)
    translate_keydown_kp_000_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_THOUSANDSSEPARATOR)
    translate_keydown_thousandsseparator_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DECIMALSEPARATOR)
    translate_keydown_decimalseparator_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CURRENCYUNIT)
    translate_keydown_currencyunit_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CURRENCYSUBUNIT)
    translate_keydown_currencysubunit_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_LEFTPAREN)
    translate_keydown_kp_leftparen_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_RIGHTPAREN)
    translate_keydown_kp_rightparen_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_LEFTBRACE)
    translate_keydown_kp_leftbrace_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_RIGHTBRACE)
    translate_keydown_kp_rightbrace_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_TAB)
    translate_keydown_kp_tab_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_BACKSPACE)
    translate_keydown_kp_backspace_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_A)
    translate_keydown_kp_a_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_B)
    translate_keydown_kp_b_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_C)
    translate_keydown_kp_c_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_D)
    translate_keydown_kp_d_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_E)
    translate_keydown_kp_e_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_F)
    translate_keydown_kp_f_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_XOR)
    translate_keydown_kp_xor_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_POWER)
    translate_keydown_kp_power_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PERCENT)
    translate_keydown_kp_percent_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_LESS)
    translate_keydown_kp_less_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_GREATER)
    translate_keydown_kp_greater_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_AMPERSAND)
    translate_keydown_kp_ampersand_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DBLAMPERSAND)
    translate_keydown_kp_dblampersand_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_VERTICALBAR)
    translate_keydown_kp_verticalbar_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DBLVERTICALBAR)
    translate_keydown_kp_dblverticalbar_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_COLON)
    translate_keydown_kp_colon_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_HASH)
    translate_keydown_kp_hash_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_SPACE)
    translate_keydown_kp_space_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_AT)
    translate_keydown_kp_at_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_EXCLAM)
    translate_keydown_kp_exclam_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMSTORE)
    translate_keydown_kp_memstore_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMRECALL)
    translate_keydown_kp_memrecall_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMCLEAR)
    translate_keydown_kp_memclear_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMADD)
    translate_keydown_kp_memadd_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMSUBTRACT)
    translate_keydown_kp_memsubtract_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMMULTIPLY)
    translate_keydown_kp_memmultiply_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMDIVIDE)
    translate_keydown_kp_memdivide_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PLUSMINUS)
    translate_keydown_kp_plusminus_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_CLEAR)
    translate_keydown_kp_clear_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_CLEARENTRY)
    translate_keydown_kp_clearentry_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_BINARY)
    translate_keydown_kp_binary_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_OCTAL)
    translate_keydown_kp_octal_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DECIMAL)
    translate_keydown_kp_decimal_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_HEXADECIMAL)
    translate_keydown_kp_hexadecimal_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LCTRL)
    translate_keydown_lctrl_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LSHIFT)
    translate_keydown_lshift_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LALT)
    translate_keydown_lalt_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LGUI)
    translate_keydown_lgui_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RCTRL)
    translate_keydown_rctrl_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RSHIFT)
    translate_keydown_rshift_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RALT)
    translate_keydown_ralt_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RGUI)
    translate_keydown_rgui_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MODE)
    translate_keydown_mode_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIONEXT)
    translate_keydown_audionext_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOPREV)
    translate_keydown_audioprev_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOSTOP)
    translate_keydown_audiostop_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOPLAY)
    translate_keydown_audioplay_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOMUTE)
    translate_keydown_audiomute_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MEDIASELECT)
    translate_keydown_mediaselect_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_WWW)
    translate_keydown_www_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MAIL)
    translate_keydown_mail_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CALCULATOR)
    translate_keydown_calculator_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COMPUTER)
    translate_keydown_computer_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_SEARCH)
    translate_keydown_ac_search_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_HOME)
    translate_keydown_ac_home_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_BACK)
    translate_keydown_ac_back_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_FORWARD)
    translate_keydown_ac_forward_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_STOP)
    translate_keydown_ac_stop_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_REFRESH)
    translate_keydown_ac_refresh_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_BOOKMARKS)
    translate_keydown_ac_bookmarks_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BRIGHTNESSDOWN)
    translate_keydown_brightnessdown_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BRIGHTNESSUP)
    translate_keydown_brightnessup_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DISPLAYSWITCH)
    translate_keydown_displayswitch_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KBDILLUMTOGGLE)
    translate_keydown_kbdillumtoggle_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KBDILLUMDOWN)
    translate_keydown_kbdillumdown_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KBDILLUMUP)
    translate_keydown_kbdillumup_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EJECT)
    translate_keydown_eject_repeat_event(e, dispatch);
}
}
}

#endif
