#ifndef GLS_DETAIL_TRANSLATE_KEYUP_EVENT_TCC_
#define GLS_DETAIL_TRANSLATE_KEYUP_EVENT_TCC_

#include <SDL2/SDL.h>

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_keyup_unknown_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keyup_unknown();
}

template <typename DispatchT>
void translate_keyup_backspace_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_backspace();
}

template <typename DispatchT>
void translate_keyup_tab_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_tab();
}

template <typename DispatchT>
void translate_keyup_return_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_return();
}

template <typename DispatchT>
void translate_keyup_escape_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_escape();
}

template <typename DispatchT>
void translate_keyup_space_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_space();
}

template <typename DispatchT>
void translate_keyup_exclaim_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keyup_exclaim();
}

template <typename DispatchT>
void translate_keyup_quotedbl_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_quotedbl();
}

template <typename DispatchT>
void translate_keyup_hash_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_hash();
}

template <typename DispatchT>
void translate_keyup_dollar_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_dollar();
}

template <typename DispatchT>
void translate_keyup_percent_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keyup_percent();
}

template <typename DispatchT>
void translate_keyup_ampersand_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_ampersand();
}

template <typename DispatchT>
void translate_keyup_quote_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_quote();
}

template <typename DispatchT>
void translate_keyup_leftparen_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_leftparen();
}

template <typename DispatchT>
void translate_keyup_rightparen_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keyup_rightparen();
}

template <typename DispatchT>
void translate_keyup_asterisk_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_asterisk();
}

template <typename DispatchT>
void translate_keyup_plus_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_plus();
}

template <typename DispatchT>
void translate_keyup_comma_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_comma();
}

template <typename DispatchT>
void translate_keyup_minus_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_minus();
}

template <typename DispatchT>
void translate_keyup_period_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_period();
}

template <typename DispatchT>
void translate_keyup_slash_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_slash();
}

template <typename DispatchT>
void translate_keyup_0_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_0();
}

template <typename DispatchT>
void translate_keyup_1_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_1();
}

template <typename DispatchT>
void translate_keyup_2_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_2();
}

template <typename DispatchT>
void translate_keyup_3_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_3();
}

template <typename DispatchT>
void translate_keyup_4_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_4();
}

template <typename DispatchT>
void translate_keyup_5_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_5();
}

template <typename DispatchT>
void translate_keyup_6_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_6();
}

template <typename DispatchT>
void translate_keyup_7_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_7();
}

template <typename DispatchT>
void translate_keyup_8_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_8();
}

template <typename DispatchT>
void translate_keyup_9_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_9();
}

template <typename DispatchT>
void translate_keyup_colon_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_colon();
}

template <typename DispatchT>
void translate_keyup_semicolon_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_semicolon();
}

template <typename DispatchT>
void translate_keyup_less_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_less();
}

template <typename DispatchT>
void translate_keyup_equals_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_equals();
}

template <typename DispatchT>
void translate_keyup_greater_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keyup_greater();
}

template <typename DispatchT>
void translate_keyup_question_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_question();
}

template <typename DispatchT>
void translate_keyup_at_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_at();
}

template <typename DispatchT>
void translate_keyup_leftbracket_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keyup_leftbracket();
}

template <typename DispatchT>
void translate_keyup_backslash_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_backslash();
}

template <typename DispatchT>
void translate_keyup_rightbracket_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_rightbracket();
}

template <typename DispatchT>
void translate_keyup_caret_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_caret();
}

template <typename DispatchT>
void translate_keyup_underscore_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keyup_underscore();
}

template <typename DispatchT>
void translate_keyup_backquote_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_backquote();
}

template <typename DispatchT>
void translate_keyup_a_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_a();
}

template <typename DispatchT>
void translate_keyup_b_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_b();
}

template <typename DispatchT>
void translate_keyup_c_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_c();
}

template <typename DispatchT>
void translate_keyup_d_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_d();
}

template <typename DispatchT>
void translate_keyup_e_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_e();
}

template <typename DispatchT>
void translate_keyup_f_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f();
}

template <typename DispatchT>
void translate_keyup_g_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_g();
}

template <typename DispatchT>
void translate_keyup_h_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_h();
}

template <typename DispatchT>
void translate_keyup_i_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_i();
}

template <typename DispatchT>
void translate_keyup_j_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_j();
}

template <typename DispatchT>
void translate_keyup_k_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_k();
}

template <typename DispatchT>
void translate_keyup_l_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_l();
}

template <typename DispatchT>
void translate_keyup_m_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_m();
}

template <typename DispatchT>
void translate_keyup_n_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_n();
}

template <typename DispatchT>
void translate_keyup_o_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_o();
}

template <typename DispatchT>
void translate_keyup_p_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_p();
}

template <typename DispatchT>
void translate_keyup_q_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_q();
}

template <typename DispatchT>
void translate_keyup_r_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_r();
}

template <typename DispatchT>
void translate_keyup_s_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_s();
}

template <typename DispatchT>
void translate_keyup_t_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_t();
}

template <typename DispatchT>
void translate_keyup_u_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_u();
}

template <typename DispatchT>
void translate_keyup_v_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_v();
}

template <typename DispatchT>
void translate_keyup_w_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_w();
}

template <typename DispatchT>
void translate_keyup_x_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_x();
}

template <typename DispatchT>
void translate_keyup_y_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_y();
}

template <typename DispatchT>
void translate_keyup_z_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_z();
}

template <typename DispatchT>
void translate_keyup_delete_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_delete();
}

template <typename DispatchT>
void translate_keyup_capslock_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_capslock();
}

template <typename DispatchT>
void translate_keyup_f1_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f1();
}

template <typename DispatchT>
void translate_keyup_f2_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f2();
}

template <typename DispatchT>
void translate_keyup_f3_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f3();
}

template <typename DispatchT>
void translate_keyup_f4_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f4();
}

template <typename DispatchT>
void translate_keyup_f5_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f5();
}

template <typename DispatchT>
void translate_keyup_f6_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f6();
}

template <typename DispatchT>
void translate_keyup_f7_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f7();
}

template <typename DispatchT>
void translate_keyup_f8_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f8();
}

template <typename DispatchT>
void translate_keyup_f9_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f9();
}

template <typename DispatchT>
void translate_keyup_f10_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f10();
}

template <typename DispatchT>
void translate_keyup_f11_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f11();
}

template <typename DispatchT>
void translate_keyup_f12_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f12();
}

template <typename DispatchT>
void translate_keyup_printscreen_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keyup_printscreen();
}

template <typename DispatchT>
void translate_keyup_scrolllock_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keyup_scrolllock();
}

template <typename DispatchT>
void translate_keyup_pause_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_pause();
}

template <typename DispatchT>
void translate_keyup_insert_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_insert();
}

template <typename DispatchT>
void translate_keyup_home_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_home();
}

template <typename DispatchT>
void translate_keyup_pageup_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_pageup();
}

template <typename DispatchT>
void translate_keyup_end_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_end();
}

template <typename DispatchT>
void translate_keyup_pagedown_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_pagedown();
}

template <typename DispatchT>
void translate_keyup_right_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_right();
}

template <typename DispatchT>
void translate_keyup_left_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_left();
}

template <typename DispatchT>
void translate_keyup_down_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_down();
}

template <typename DispatchT>
void translate_keyup_up_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_up();
}

template <typename DispatchT>
void translate_keyup_numlockclear_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_numlockclear();
}

template <typename DispatchT>
void translate_keyup_kp_divide_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_kp_divide();
}

template <typename DispatchT>
void translate_keyup_kp_multiply_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keyup_kp_multiply();
}

template <typename DispatchT>
void translate_keyup_kp_minus_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_kp_minus();
}

template <typename DispatchT>
void translate_keyup_kp_plus_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keyup_kp_plus();
}

template <typename DispatchT>
void translate_keyup_kp_enter_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_kp_enter();
}

template <typename DispatchT>
void translate_keyup_kp_1_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_1();
}

template <typename DispatchT>
void translate_keyup_kp_2_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_2();
}

template <typename DispatchT>
void translate_keyup_kp_3_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_3();
}

template <typename DispatchT>
void translate_keyup_kp_4_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_4();
}

template <typename DispatchT>
void translate_keyup_kp_5_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_5();
}

template <typename DispatchT>
void translate_keyup_kp_6_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_6();
}

template <typename DispatchT>
void translate_keyup_kp_7_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_7();
}

template <typename DispatchT>
void translate_keyup_kp_8_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_8();
}

template <typename DispatchT>
void translate_keyup_kp_9_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_9();
}

template <typename DispatchT>
void translate_keyup_kp_0_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_0();
}

template <typename DispatchT>
void translate_keyup_kp_period_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_kp_period();
}

template <typename DispatchT>
void translate_keyup_application_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keyup_application();
}

template <typename DispatchT>
void translate_keyup_power_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_power();
}

template <typename DispatchT>
void translate_keyup_kp_equals_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_kp_equals();
}

template <typename DispatchT>
void translate_keyup_f13_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f13();
}

template <typename DispatchT>
void translate_keyup_f14_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f14();
}

template <typename DispatchT>
void translate_keyup_f15_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f15();
}

template <typename DispatchT>
void translate_keyup_f16_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f16();
}

template <typename DispatchT>
void translate_keyup_f17_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f17();
}

template <typename DispatchT>
void translate_keyup_f18_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f18();
}

template <typename DispatchT>
void translate_keyup_f19_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f19();
}

template <typename DispatchT>
void translate_keyup_f20_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f20();
}

template <typename DispatchT>
void translate_keyup_f21_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f21();
}

template <typename DispatchT>
void translate_keyup_f22_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f22();
}

template <typename DispatchT>
void translate_keyup_f23_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f23();
}

template <typename DispatchT>
void translate_keyup_f24_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_f24();
}

template <typename DispatchT>
void translate_keyup_execute_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keyup_execute();
}

template <typename DispatchT>
void translate_keyup_help_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_help();
}

template <typename DispatchT>
void translate_keyup_menu_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_menu();
}

template <typename DispatchT>
void translate_keyup_select_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_select();
}

template <typename DispatchT>
void translate_keyup_stop_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_stop();
}

template <typename DispatchT>
void translate_keyup_again_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_again();
}

template <typename DispatchT>
void translate_keyup_undo_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_undo();
}

template <typename DispatchT>
void translate_keyup_cut_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_cut();
}

template <typename DispatchT>
void translate_keyup_copy_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_copy();
}

template <typename DispatchT>
void translate_keyup_paste_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_paste();
}

template <typename DispatchT>
void translate_keyup_find_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_find();
}

template <typename DispatchT>
void translate_keyup_mute_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_mute();
}

template <typename DispatchT>
void translate_keyup_volumeup_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_volumeup();
}

template <typename DispatchT>
void translate_keyup_volumedown_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keyup_volumedown();
}

template <typename DispatchT>
void translate_keyup_kp_comma_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_kp_comma();
}

template <typename DispatchT>
void translate_keyup_kp_equalsas400_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keyup_kp_equalsas400();
}

template <typename DispatchT>
void translate_keyup_alterase_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_alterase();
}

template <typename DispatchT>
void translate_keyup_sysreq_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_sysreq();
}

template <typename DispatchT>
void translate_keyup_cancel_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_cancel();
}

template <typename DispatchT>
void translate_keyup_clear_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_clear();
}

template <typename DispatchT>
void translate_keyup_prior_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_prior();
}

template <typename DispatchT>
void translate_keyup_return2_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keyup_return2();
}

template <typename DispatchT>
void translate_keyup_separator_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_separator();
}

template <typename DispatchT>
void translate_keyup_out_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_out();
}

template <typename DispatchT>
void translate_keyup_oper_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_oper();
}

template <typename DispatchT>
void translate_keyup_clearagain_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keyup_clearagain();
}

template <typename DispatchT>
void translate_keyup_crsel_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_crsel();
}

template <typename DispatchT>
void translate_keyup_exsel_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_exsel();
}

template <typename DispatchT>
void translate_keyup_kp_00_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_kp_00();
}

template <typename DispatchT>
void translate_keyup_kp_000_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_kp_000();
}

template <typename DispatchT>
void translate_keyup_thousandsseparator_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keyup_thousandsseparator();
}

template <typename DispatchT>
void translate_keyup_decimalseparator_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keyup_decimalseparator();
}

template <typename DispatchT>
void translate_keyup_currencyunit_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_currencyunit();
}

template <typename DispatchT>
void translate_keyup_currencysubunit_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keyup_currencysubunit();
}

template <typename DispatchT>
void translate_keyup_kp_leftparen_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_kp_leftparen();
}

template <typename DispatchT>
void translate_keyup_kp_rightparen_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keyup_kp_rightparen();
}

template <typename DispatchT>
void translate_keyup_kp_leftbrace_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_kp_leftbrace();
}

template <typename DispatchT>
void translate_keyup_kp_rightbrace_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keyup_kp_rightbrace();
}

template <typename DispatchT>
void translate_keyup_kp_tab_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_kp_tab();
}

template <typename DispatchT>
void translate_keyup_kp_backspace_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_kp_backspace();
}

template <typename DispatchT>
void translate_keyup_kp_a_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_a();
}

template <typename DispatchT>
void translate_keyup_kp_b_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_b();
}

template <typename DispatchT>
void translate_keyup_kp_c_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_c();
}

template <typename DispatchT>
void translate_keyup_kp_d_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_d();
}

template <typename DispatchT>
void translate_keyup_kp_e_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_e();
}

template <typename DispatchT>
void translate_keyup_kp_f_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_kp_f();
}

template <typename DispatchT>
void translate_keyup_kp_xor_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_kp_xor();
}

template <typename DispatchT>
void translate_keyup_kp_power_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_kp_power();
}

template <typename DispatchT>
void translate_keyup_kp_percent_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keyup_kp_percent();
}

template <typename DispatchT>
void translate_keyup_kp_less_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keyup_kp_less();
}

template <typename DispatchT>
void translate_keyup_kp_greater_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keyup_kp_greater();
}

template <typename DispatchT>
void translate_keyup_kp_ampersand_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_kp_ampersand();
}

template <typename DispatchT>
void translate_keyup_kp_dblampersand_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keyup_kp_dblampersand();
}

template <typename DispatchT>
void translate_keyup_kp_verticalbar_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keyup_kp_verticalbar();
}

template <typename DispatchT>
void translate_keyup_kp_dblverticalbar_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keyup_kp_dblverticalbar();
}

template <typename DispatchT>
void translate_keyup_kp_colon_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_kp_colon();
}

template <typename DispatchT>
void translate_keyup_kp_hash_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keyup_kp_hash();
}

template <typename DispatchT>
void translate_keyup_kp_space_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_kp_space();
}

template <typename DispatchT>
void translate_keyup_kp_at_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_kp_at();
}

template <typename DispatchT>
void translate_keyup_kp_exclam_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_kp_exclam();
}

template <typename DispatchT>
void translate_keyup_kp_memstore_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keyup_kp_memstore();
}

template <typename DispatchT>
void translate_keyup_kp_memrecall_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_kp_memrecall();
}

template <typename DispatchT>
void translate_keyup_kp_memclear_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keyup_kp_memclear();
}

template <typename DispatchT>
void translate_keyup_kp_memadd_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_kp_memadd();
}

template <typename DispatchT>
void translate_keyup_kp_memsubtract_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keyup_kp_memsubtract();
}

template <typename DispatchT>
void translate_keyup_kp_memmultiply_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keyup_kp_memmultiply();
}

template <typename DispatchT>
void translate_keyup_kp_memdivide_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_kp_memdivide();
}

template <typename DispatchT>
void translate_keyup_kp_plusminus_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_kp_plusminus();
}

template <typename DispatchT>
void translate_keyup_kp_clear_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_kp_clear();
}

template <typename DispatchT>
void translate_keyup_kp_clearentry_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keyup_kp_clearentry();
}

template <typename DispatchT>
void translate_keyup_kp_binary_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_kp_binary();
}

template <typename DispatchT>
void translate_keyup_kp_octal_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_kp_octal();
}

template <typename DispatchT>
void translate_keyup_kp_decimal_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keyup_kp_decimal();
}

template <typename DispatchT>
void translate_keyup_kp_hexadecimal_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keyup_kp_hexadecimal();
}

template <typename DispatchT>
void translate_keyup_lctrl_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_lctrl();
}

template <typename DispatchT>
void translate_keyup_lshift_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_lshift();
}

template <typename DispatchT>
void translate_keyup_lalt_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_lalt();
}

template <typename DispatchT>
void translate_keyup_lgui_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_lgui();
}

template <typename DispatchT>
void translate_keyup_rctrl_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_rctrl();
}

template <typename DispatchT>
void translate_keyup_rshift_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keyup_rshift();
}

template <typename DispatchT>
void translate_keyup_ralt_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_ralt();
}

template <typename DispatchT>
void translate_keyup_rgui_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_rgui();
}

template <typename DispatchT>
void translate_keyup_mode_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_mode();
}

template <typename DispatchT>
void translate_keyup_audionext_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_audionext();
}

template <typename DispatchT>
void translate_keyup_audioprev_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_audioprev();
}

template <typename DispatchT>
void translate_keyup_audiostop_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_audiostop();
}

template <typename DispatchT>
void translate_keyup_audioplay_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_audioplay();
}

template <typename DispatchT>
void translate_keyup_audiomute_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_audiomute();
}

template <typename DispatchT>
void translate_keyup_mediaselect_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keyup_mediaselect();
}

template <typename DispatchT>
void translate_keyup_www_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keyup_www();
}

template <typename DispatchT>
void translate_keyup_mail_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keyup_mail();
}

template <typename DispatchT>
void translate_keyup_calculator_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keyup_calculator();
}

template <typename DispatchT>
void translate_keyup_computer_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keyup_computer();
}

template <typename DispatchT>
void translate_keyup_ac_search_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keyup_ac_search();
}

template <typename DispatchT>
void translate_keyup_ac_home_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keyup_ac_home();
}

template <typename DispatchT>
void translate_keyup_ac_back_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keyup_ac_back();
}

template <typename DispatchT>
void translate_keyup_ac_forward_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keyup_ac_forward();
}

template <typename DispatchT>
void translate_keyup_ac_stop_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keyup_ac_stop();
}

template <typename DispatchT>
void translate_keyup_ac_refresh_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keyup_ac_refresh();
}

template <typename DispatchT>
void translate_keyup_ac_bookmarks_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_ac_bookmarks();
}

template <typename DispatchT>
void translate_keyup_brightnessdown_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keyup_brightnessdown();
}

template <typename DispatchT>
void translate_keyup_brightnessup_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_brightnessup();
}

template <typename DispatchT>
void translate_keyup_displayswitch_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keyup_displayswitch();
}

template <typename DispatchT>
void translate_keyup_kbdillumtoggle_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keyup_kbdillumtoggle();
}

template <typename DispatchT>
void translate_keyup_kbdillumdown_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keyup_kbdillumdown();
}

template <typename DispatchT>
void translate_keyup_kbdillumup_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keyup_kbdillumup();
}

template <typename DispatchT>
void translate_keyup_eject_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_eject();
}

template <typename DispatchT>
void translate_keyup_sleep_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keyup_sleep();
}

template <typename DispatchT>
void translate_keyup_event(SDL_Event const& e, DispatchT const* dispatch) {
  if(e.key.keysym.sym == SDLK_UNKNOWN)
    translate_keyup_unknown_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BACKSPACE)
    translate_keyup_backspace_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_TAB)
    translate_keyup_tab_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RETURN)
    translate_keyup_return_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_ESCAPE)
    translate_keyup_escape_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SPACE)
    translate_keyup_space_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EXCLAIM)
    translate_keyup_exclaim_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_QUOTEDBL)
    translate_keyup_quotedbl_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_HASH)
    translate_keyup_hash_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DOLLAR)
    translate_keyup_dollar_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PERCENT)
    translate_keyup_percent_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AMPERSAND)
    translate_keyup_ampersand_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_QUOTE)
    translate_keyup_quote_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LEFTPAREN)
    translate_keyup_leftparen_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RIGHTPAREN)
    translate_keyup_rightparen_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_ASTERISK)
    translate_keyup_asterisk_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PLUS)
    translate_keyup_plus_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COMMA)
    translate_keyup_comma_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MINUS)
    translate_keyup_minus_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PERIOD)
    translate_keyup_period_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SLASH)
    translate_keyup_slash_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_0)
    translate_keyup_0_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_1)
    translate_keyup_1_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_2)
    translate_keyup_2_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_3)
    translate_keyup_3_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_4)
    translate_keyup_4_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_5)
    translate_keyup_5_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_6)
    translate_keyup_6_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_7)
    translate_keyup_7_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_8)
    translate_keyup_8_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_9)
    translate_keyup_9_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COLON)
    translate_keyup_colon_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SEMICOLON)
    translate_keyup_semicolon_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LESS)
    translate_keyup_less_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EQUALS)
    translate_keyup_equals_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_GREATER)
    translate_keyup_greater_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_QUESTION)
    translate_keyup_question_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AT)
    translate_keyup_at_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LEFTBRACKET)
    translate_keyup_leftbracket_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BACKSLASH)
    translate_keyup_backslash_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RIGHTBRACKET)
    translate_keyup_rightbracket_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CARET)
    translate_keyup_caret_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_UNDERSCORE)
    translate_keyup_underscore_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BACKQUOTE)
    translate_keyup_backquote_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_a)
    translate_keyup_a_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_b)
    translate_keyup_b_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_c)
    translate_keyup_c_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_d)
    translate_keyup_d_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_e)
    translate_keyup_e_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_f)
    translate_keyup_f_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_g)
    translate_keyup_g_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_h)
    translate_keyup_h_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_i)
    translate_keyup_i_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_j)
    translate_keyup_j_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_k)
    translate_keyup_k_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_l)
    translate_keyup_l_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_m)
    translate_keyup_m_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_n)
    translate_keyup_n_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_o)
    translate_keyup_o_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_p)
    translate_keyup_p_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_q)
    translate_keyup_q_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_r)
    translate_keyup_r_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_s)
    translate_keyup_s_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_t)
    translate_keyup_t_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_u)
    translate_keyup_u_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_v)
    translate_keyup_v_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_w)
    translate_keyup_w_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_x)
    translate_keyup_x_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_y)
    translate_keyup_y_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_z)
    translate_keyup_z_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DELETE)
    translate_keyup_delete_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CAPSLOCK)
    translate_keyup_capslock_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F1)
    translate_keyup_f1_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F2)
    translate_keyup_f2_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F3)
    translate_keyup_f3_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F4)
    translate_keyup_f4_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F5)
    translate_keyup_f5_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F6)
    translate_keyup_f6_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F7)
    translate_keyup_f7_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F8)
    translate_keyup_f8_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F9)
    translate_keyup_f9_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F10)
    translate_keyup_f10_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F11)
    translate_keyup_f11_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F12)
    translate_keyup_f12_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PRINTSCREEN)
    translate_keyup_printscreen_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SCROLLLOCK)
    translate_keyup_scrolllock_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PAUSE)
    translate_keyup_pause_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_INSERT)
    translate_keyup_insert_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_HOME)
    translate_keyup_home_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PAGEUP)
    translate_keyup_pageup_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_END)
    translate_keyup_end_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PAGEDOWN)
    translate_keyup_pagedown_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RIGHT)
    translate_keyup_right_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LEFT)
    translate_keyup_left_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DOWN)
    translate_keyup_down_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_UP)
    translate_keyup_up_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_NUMLOCKCLEAR)
    translate_keyup_numlockclear_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DIVIDE)
    translate_keyup_kp_divide_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MULTIPLY)
    translate_keyup_kp_multiply_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MINUS)
    translate_keyup_kp_minus_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PLUS)
    translate_keyup_kp_plus_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_ENTER)
    translate_keyup_kp_enter_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_1)
    translate_keyup_kp_1_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_2)
    translate_keyup_kp_2_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_3)
    translate_keyup_kp_3_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_4)
    translate_keyup_kp_4_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_5)
    translate_keyup_kp_5_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_6)
    translate_keyup_kp_6_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_7)
    translate_keyup_kp_7_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_8)
    translate_keyup_kp_8_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_9)
    translate_keyup_kp_9_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_0)
    translate_keyup_kp_0_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PERIOD)
    translate_keyup_kp_period_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_APPLICATION)
    translate_keyup_application_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_POWER)
    translate_keyup_power_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_EQUALS)
    translate_keyup_kp_equals_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F13)
    translate_keyup_f13_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F14)
    translate_keyup_f14_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F15)
    translate_keyup_f15_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F16)
    translate_keyup_f16_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F17)
    translate_keyup_f17_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F18)
    translate_keyup_f18_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F19)
    translate_keyup_f19_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F20)
    translate_keyup_f20_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F21)
    translate_keyup_f21_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F22)
    translate_keyup_f22_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F23)
    translate_keyup_f23_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F24)
    translate_keyup_f24_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EXECUTE)
    translate_keyup_execute_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_HELP)
    translate_keyup_help_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MENU)
    translate_keyup_menu_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SELECT)
    translate_keyup_select_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_STOP)
    translate_keyup_stop_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AGAIN)
    translate_keyup_again_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_UNDO)
    translate_keyup_undo_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CUT)
    translate_keyup_cut_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COPY)
    translate_keyup_copy_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PASTE)
    translate_keyup_paste_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_FIND)
    translate_keyup_find_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MUTE)
    translate_keyup_mute_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_VOLUMEUP)
    translate_keyup_volumeup_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_VOLUMEDOWN)
    translate_keyup_volumedown_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_COMMA)
    translate_keyup_kp_comma_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_EQUALSAS400)
    translate_keyup_kp_equalsas400_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_ALTERASE)
    translate_keyup_alterase_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SYSREQ)
    translate_keyup_sysreq_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CANCEL)
    translate_keyup_cancel_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CLEAR)
    translate_keyup_clear_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PRIOR)
    translate_keyup_prior_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RETURN2)
    translate_keyup_return2_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SEPARATOR)
    translate_keyup_separator_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_OUT)
    translate_keyup_out_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_OPER)
    translate_keyup_oper_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CLEARAGAIN)
    translate_keyup_clearagain_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CRSEL)
    translate_keyup_crsel_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EXSEL)
    translate_keyup_exsel_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_00)
    translate_keyup_kp_00_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_000)
    translate_keyup_kp_000_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_THOUSANDSSEPARATOR)
    translate_keyup_thousandsseparator_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DECIMALSEPARATOR)
    translate_keyup_decimalseparator_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CURRENCYUNIT)
    translate_keyup_currencyunit_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CURRENCYSUBUNIT)
    translate_keyup_currencysubunit_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_LEFTPAREN)
    translate_keyup_kp_leftparen_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_RIGHTPAREN)
    translate_keyup_kp_rightparen_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_LEFTBRACE)
    translate_keyup_kp_leftbrace_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_RIGHTBRACE)
    translate_keyup_kp_rightbrace_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_TAB)
    translate_keyup_kp_tab_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_BACKSPACE)
    translate_keyup_kp_backspace_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_A)
    translate_keyup_kp_a_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_B)
    translate_keyup_kp_b_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_C)
    translate_keyup_kp_c_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_D)
    translate_keyup_kp_d_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_E)
    translate_keyup_kp_e_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_F)
    translate_keyup_kp_f_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_XOR)
    translate_keyup_kp_xor_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_POWER)
    translate_keyup_kp_power_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PERCENT)
    translate_keyup_kp_percent_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_LESS)
    translate_keyup_kp_less_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_GREATER)
    translate_keyup_kp_greater_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_AMPERSAND)
    translate_keyup_kp_ampersand_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DBLAMPERSAND)
    translate_keyup_kp_dblampersand_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_VERTICALBAR)
    translate_keyup_kp_verticalbar_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DBLVERTICALBAR)
    translate_keyup_kp_dblverticalbar_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_COLON)
    translate_keyup_kp_colon_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_HASH)
    translate_keyup_kp_hash_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_SPACE)
    translate_keyup_kp_space_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_AT)
    translate_keyup_kp_at_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_EXCLAM)
    translate_keyup_kp_exclam_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMSTORE)
    translate_keyup_kp_memstore_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMRECALL)
    translate_keyup_kp_memrecall_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMCLEAR)
    translate_keyup_kp_memclear_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMADD)
    translate_keyup_kp_memadd_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMSUBTRACT)
    translate_keyup_kp_memsubtract_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMMULTIPLY)
    translate_keyup_kp_memmultiply_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMDIVIDE)
    translate_keyup_kp_memdivide_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PLUSMINUS)
    translate_keyup_kp_plusminus_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_CLEAR)
    translate_keyup_kp_clear_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_CLEARENTRY)
    translate_keyup_kp_clearentry_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_BINARY)
    translate_keyup_kp_binary_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_OCTAL)
    translate_keyup_kp_octal_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DECIMAL)
    translate_keyup_kp_decimal_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_HEXADECIMAL)
    translate_keyup_kp_hexadecimal_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LCTRL)
    translate_keyup_lctrl_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LSHIFT)
    translate_keyup_lshift_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LALT)
    translate_keyup_lalt_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LGUI)
    translate_keyup_lgui_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RCTRL)
    translate_keyup_rctrl_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RSHIFT)
    translate_keyup_rshift_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RALT)
    translate_keyup_ralt_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RGUI)
    translate_keyup_rgui_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MODE)
    translate_keyup_mode_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIONEXT)
    translate_keyup_audionext_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOPREV)
    translate_keyup_audioprev_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOSTOP)
    translate_keyup_audiostop_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOPLAY)
    translate_keyup_audioplay_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOMUTE)
    translate_keyup_audiomute_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MEDIASELECT)
    translate_keyup_mediaselect_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_WWW)
    translate_keyup_www_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MAIL)
    translate_keyup_mail_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CALCULATOR)
    translate_keyup_calculator_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COMPUTER)
    translate_keyup_computer_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_SEARCH)
    translate_keyup_ac_search_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_HOME)
    translate_keyup_ac_home_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_BACK)
    translate_keyup_ac_back_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_FORWARD)
    translate_keyup_ac_forward_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_STOP)
    translate_keyup_ac_stop_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_REFRESH)
    translate_keyup_ac_refresh_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_BOOKMARKS)
    translate_keyup_ac_bookmarks_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BRIGHTNESSDOWN)
    translate_keyup_brightnessdown_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BRIGHTNESSUP)
    translate_keyup_brightnessup_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DISPLAYSWITCH)
    translate_keyup_displayswitch_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KBDILLUMTOGGLE)
    translate_keyup_kbdillumtoggle_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KBDILLUMDOWN)
    translate_keyup_kbdillumdown_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KBDILLUMUP)
    translate_keyup_kbdillumup_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EJECT)
    translate_keyup_eject_event(e, dispatch);
}
}
}

#endif
