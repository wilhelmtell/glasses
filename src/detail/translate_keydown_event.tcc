#ifndef GLS_DETAIL_TRANSLATE_KEYDOWN_EVENT_TCC_
#define GLS_DETAIL_TRANSLATE_KEYDOWN_EVENT_TCC_

#include <SDL2/SDL.h>

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_keydown_unknown_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keydown_unknown();
}

template <typename DispatchT>
void translate_keydown_backspace_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_backspace();
}

template <typename DispatchT>
void translate_keydown_tab_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_tab();
}

template <typename DispatchT>
void translate_keydown_return_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_return();
}

template <typename DispatchT>
void translate_keydown_escape_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_escape();
}

template <typename DispatchT>
void translate_keydown_space_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_space();
}

template <typename DispatchT>
void translate_keydown_exclaim_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keydown_exclaim();
}

template <typename DispatchT>
void translate_keydown_quotedbl_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_quotedbl();
}

template <typename DispatchT>
void translate_keydown_hash_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_hash();
}

template <typename DispatchT>
void translate_keydown_dollar_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_dollar();
}

template <typename DispatchT>
void translate_keydown_percent_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keydown_percent();
}

template <typename DispatchT>
void translate_keydown_ampersand_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_ampersand();
}

template <typename DispatchT>
void translate_keydown_quote_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_quote();
}

template <typename DispatchT>
void translate_keydown_leftparen_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_leftparen();
}

template <typename DispatchT>
void translate_keydown_rightparen_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_rightparen();
}

template <typename DispatchT>
void translate_keydown_asterisk_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_asterisk();
}

template <typename DispatchT>
void translate_keydown_plus_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_plus();
}

template <typename DispatchT>
void translate_keydown_comma_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_comma();
}

template <typename DispatchT>
void translate_keydown_minus_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_minus();
}

template <typename DispatchT>
void translate_keydown_period_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_period();
}

template <typename DispatchT>
void translate_keydown_slash_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_slash();
}

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
void translate_keydown_colon_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_colon();
}

template <typename DispatchT>
void translate_keydown_semicolon_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_semicolon();
}

template <typename DispatchT>
void translate_keydown_less_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_less();
}

template <typename DispatchT>
void translate_keydown_equals_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_equals();
}

template <typename DispatchT>
void translate_keydown_greater_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keydown_greater();
}

template <typename DispatchT>
void translate_keydown_question_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_question();
}

template <typename DispatchT>
void translate_keydown_at_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_at();
}

template <typename DispatchT>
void translate_keydown_leftbracket_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_leftbracket();
}

template <typename DispatchT>
void translate_keydown_backslash_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_backslash();
}

template <typename DispatchT>
void translate_keydown_rightbracket_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_rightbracket();
}

template <typename DispatchT>
void translate_keydown_caret_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_caret();
}

template <typename DispatchT>
void translate_keydown_underscore_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_underscore();
}

template <typename DispatchT>
void translate_keydown_backquote_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_backquote();
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
void translate_keydown_delete_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_delete();
}

template <typename DispatchT>
void translate_keydown_capslock_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_capslock();
}

template <typename DispatchT>
void translate_keydown_f1_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f1();
}

template <typename DispatchT>
void translate_keydown_f2_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f2();
}

template <typename DispatchT>
void translate_keydown_f3_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f3();
}

template <typename DispatchT>
void translate_keydown_f4_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f4();
}

template <typename DispatchT>
void translate_keydown_f5_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f5();
}

template <typename DispatchT>
void translate_keydown_f6_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f6();
}

template <typename DispatchT>
void translate_keydown_f7_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f7();
}

template <typename DispatchT>
void translate_keydown_f8_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f8();
}

template <typename DispatchT>
void translate_keydown_f9_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f9();
}

template <typename DispatchT>
void translate_keydown_f10_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f10();
}

template <typename DispatchT>
void translate_keydown_f11_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f11();
}

template <typename DispatchT>
void translate_keydown_f12_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f12();
}

template <typename DispatchT>
void translate_keydown_printscreen_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_printscreen();
}

template <typename DispatchT>
void translate_keydown_scrolllock_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_scrolllock();
}

template <typename DispatchT>
void translate_keydown_pause_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_pause();
}

template <typename DispatchT>
void translate_keydown_insert_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_insert();
}

template <typename DispatchT>
void translate_keydown_home_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_home();
}

template <typename DispatchT>
void translate_keydown_pageup_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_pageup();
}

template <typename DispatchT>
void translate_keydown_end_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_end();
}

template <typename DispatchT>
void translate_keydown_pagedown_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_pagedown();
}

template <typename DispatchT>
void translate_keydown_right_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_right();
}

template <typename DispatchT>
void translate_keydown_left_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_left();
}

template <typename DispatchT>
void translate_keydown_down_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_down();
}

template <typename DispatchT>
void translate_keydown_up_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_up();
}

template <typename DispatchT>
void translate_keydown_numlockclear_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_numlockclear();
}

template <typename DispatchT>
void translate_keydown_kp_divide_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_kp_divide();
}

template <typename DispatchT>
void translate_keydown_kp_multiply_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_multiply();
}

template <typename DispatchT>
void translate_keydown_kp_minus_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_kp_minus();
}

template <typename DispatchT>
void translate_keydown_kp_plus_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keydown_kp_plus();
}

template <typename DispatchT>
void translate_keydown_kp_enter_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_kp_enter();
}

template <typename DispatchT>
void translate_keydown_kp_1_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_1();
}

template <typename DispatchT>
void translate_keydown_kp_2_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_2();
}

template <typename DispatchT>
void translate_keydown_kp_3_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_3();
}

template <typename DispatchT>
void translate_keydown_kp_4_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_4();
}

template <typename DispatchT>
void translate_keydown_kp_5_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_5();
}

template <typename DispatchT>
void translate_keydown_kp_6_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_6();
}

template <typename DispatchT>
void translate_keydown_kp_7_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_7();
}

template <typename DispatchT>
void translate_keydown_kp_8_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_8();
}

template <typename DispatchT>
void translate_keydown_kp_9_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_9();
}

template <typename DispatchT>
void translate_keydown_kp_0_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_0();
}

template <typename DispatchT>
void translate_keydown_kp_period_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_kp_period();
}

template <typename DispatchT>
void translate_keydown_application_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_application();
}

template <typename DispatchT>
void translate_keydown_power_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_power();
}

template <typename DispatchT>
void translate_keydown_kp_equals_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_kp_equals();
}

template <typename DispatchT>
void translate_keydown_f13_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f13();
}

template <typename DispatchT>
void translate_keydown_f14_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f14();
}

template <typename DispatchT>
void translate_keydown_f15_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f15();
}

template <typename DispatchT>
void translate_keydown_f16_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f16();
}

template <typename DispatchT>
void translate_keydown_f17_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f17();
}

template <typename DispatchT>
void translate_keydown_f18_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f18();
}

template <typename DispatchT>
void translate_keydown_f19_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f19();
}

template <typename DispatchT>
void translate_keydown_f20_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f20();
}

template <typename DispatchT>
void translate_keydown_f21_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f21();
}

template <typename DispatchT>
void translate_keydown_f22_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f22();
}

template <typename DispatchT>
void translate_keydown_f23_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f23();
}

template <typename DispatchT>
void translate_keydown_f24_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_f24();
}

template <typename DispatchT>
void translate_keydown_execute_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keydown_execute();
}

template <typename DispatchT>
void translate_keydown_help_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_help();
}

template <typename DispatchT>
void translate_keydown_menu_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_menu();
}

template <typename DispatchT>
void translate_keydown_select_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_select();
}

template <typename DispatchT>
void translate_keydown_stop_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_stop();
}

template <typename DispatchT>
void translate_keydown_again_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_again();
}

template <typename DispatchT>
void translate_keydown_undo_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_undo();
}

template <typename DispatchT>
void translate_keydown_cut_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_cut();
}

template <typename DispatchT>
void translate_keydown_copy_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_copy();
}

template <typename DispatchT>
void translate_keydown_paste_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_paste();
}

template <typename DispatchT>
void translate_keydown_find_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_find();
}

template <typename DispatchT>
void translate_keydown_mute_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_mute();
}

template <typename DispatchT>
void translate_keydown_volumeup_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_volumeup();
}

template <typename DispatchT>
void translate_keydown_volumedown_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_volumedown();
}

template <typename DispatchT>
void translate_keydown_kp_comma_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_kp_comma();
}

template <typename DispatchT>
void translate_keydown_kp_equalsas400_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_kp_equalsas400();
}

template <typename DispatchT>
void translate_keydown_alterase_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_alterase();
}

template <typename DispatchT>
void translate_keydown_sysreq_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_sysreq();
}

template <typename DispatchT>
void translate_keydown_cancel_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_cancel();
}

template <typename DispatchT>
void translate_keydown_clear_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_clear();
}

template <typename DispatchT>
void translate_keydown_prior_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_prior();
}

template <typename DispatchT>
void translate_keydown_return2_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keydown_return2();
}

template <typename DispatchT>
void translate_keydown_separator_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_separator();
}

template <typename DispatchT>
void translate_keydown_out_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_out();
}

template <typename DispatchT>
void translate_keydown_oper_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_oper();
}

template <typename DispatchT>
void translate_keydown_clearagain_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_clearagain();
}

template <typename DispatchT>
void translate_keydown_crsel_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_crsel();
}

template <typename DispatchT>
void translate_keydown_exsel_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_exsel();
}

template <typename DispatchT>
void translate_keydown_kp_00_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_kp_00();
}

template <typename DispatchT>
void translate_keydown_kp_000_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_kp_000();
}

template <typename DispatchT>
void translate_keydown_thousandsseparator_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown_thousandsseparator();
}

template <typename DispatchT>
void translate_keydown_decimalseparator_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown_decimalseparator();
}

template <typename DispatchT>
void translate_keydown_currencyunit_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_currencyunit();
}

template <typename DispatchT>
void translate_keydown_currencysubunit_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_currencysubunit();
}

template <typename DispatchT>
void translate_keydown_kp_leftparen_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_kp_leftparen();
}

template <typename DispatchT>
void translate_keydown_kp_rightparen_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_kp_rightparen();
}

template <typename DispatchT>
void translate_keydown_kp_leftbrace_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_kp_leftbrace();
}

template <typename DispatchT>
void translate_keydown_kp_rightbrace_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_kp_rightbrace();
}

template <typename DispatchT>
void translate_keydown_kp_tab_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_kp_tab();
}

template <typename DispatchT>
void translate_keydown_kp_backspace_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_kp_backspace();
}

template <typename DispatchT>
void translate_keydown_kp_a_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_a();
}

template <typename DispatchT>
void translate_keydown_kp_b_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_b();
}

template <typename DispatchT>
void translate_keydown_kp_c_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_c();
}

template <typename DispatchT>
void translate_keydown_kp_d_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_d();
}

template <typename DispatchT>
void translate_keydown_kp_e_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_e();
}

template <typename DispatchT>
void translate_keydown_kp_f_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_kp_f();
}

template <typename DispatchT>
void translate_keydown_kp_xor_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_kp_xor();
}

template <typename DispatchT>
void translate_keydown_kp_power_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_kp_power();
}

template <typename DispatchT>
void translate_keydown_kp_percent_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_kp_percent();
}

template <typename DispatchT>
void translate_keydown_kp_less_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keydown_kp_less();
}

template <typename DispatchT>
void translate_keydown_kp_greater_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_kp_greater();
}

template <typename DispatchT>
void translate_keydown_kp_ampersand_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_kp_ampersand();
}

template <typename DispatchT>
void translate_keydown_kp_dblampersand_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown_kp_dblampersand();
}

template <typename DispatchT>
void translate_keydown_kp_verticalbar_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_kp_verticalbar();
}

template <typename DispatchT>
void translate_keydown_kp_dblverticalbar_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown_kp_dblverticalbar();
}

template <typename DispatchT>
void translate_keydown_kp_colon_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_kp_colon();
}

template <typename DispatchT>
void translate_keydown_kp_hash_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keydown_kp_hash();
}

template <typename DispatchT>
void translate_keydown_kp_space_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_kp_space();
}

template <typename DispatchT>
void translate_keydown_kp_at_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_kp_at();
}

template <typename DispatchT>
void translate_keydown_kp_exclam_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_kp_exclam();
}

template <typename DispatchT>
void translate_keydown_kp_memstore_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_memstore();
}

template <typename DispatchT>
void translate_keydown_kp_memrecall_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_kp_memrecall();
}

template <typename DispatchT>
void translate_keydown_kp_memclear_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_kp_memclear();
}

template <typename DispatchT>
void translate_keydown_kp_memadd_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_kp_memadd();
}

template <typename DispatchT>
void translate_keydown_kp_memsubtract_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_kp_memsubtract();
}

template <typename DispatchT>
void translate_keydown_kp_memmultiply_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_kp_memmultiply();
}

template <typename DispatchT>
void translate_keydown_kp_memdivide_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_kp_memdivide();
}

template <typename DispatchT>
void translate_keydown_kp_plusminus_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_kp_plusminus();
}

template <typename DispatchT>
void translate_keydown_kp_clear_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_kp_clear();
}

template <typename DispatchT>
void translate_keydown_kp_clearentry_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_kp_clearentry();
}

template <typename DispatchT>
void translate_keydown_kp_binary_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_kp_binary();
}

template <typename DispatchT>
void translate_keydown_kp_octal_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_kp_octal();
}

template <typename DispatchT>
void translate_keydown_kp_decimal_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_kp_decimal();
}

template <typename DispatchT>
void translate_keydown_kp_hexadecimal_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_kp_hexadecimal();
}

template <typename DispatchT>
void translate_keydown_lctrl_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_lctrl();
}

template <typename DispatchT>
void translate_keydown_lshift_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_lshift();
}

template <typename DispatchT>
void translate_keydown_lalt_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_lalt();
}

template <typename DispatchT>
void translate_keydown_lgui_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_lgui();
}

template <typename DispatchT>
void translate_keydown_rctrl_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_rctrl();
}

template <typename DispatchT>
void translate_keydown_rshift_event(SDL_Event const&,
                                    DispatchT const* dispatch) {
  dispatch->keydown_rshift();
}

template <typename DispatchT>
void translate_keydown_ralt_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_ralt();
}

template <typename DispatchT>
void translate_keydown_rgui_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_rgui();
}

template <typename DispatchT>
void translate_keydown_mode_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_mode();
}

template <typename DispatchT>
void translate_keydown_audionext_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_audionext();
}

template <typename DispatchT>
void translate_keydown_audioprev_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_audioprev();
}

template <typename DispatchT>
void translate_keydown_audiostop_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_audiostop();
}

template <typename DispatchT>
void translate_keydown_audioplay_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_audioplay();
}

template <typename DispatchT>
void translate_keydown_audiomute_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_audiomute();
}

template <typename DispatchT>
void translate_keydown_mediaselect_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown_mediaselect();
}

template <typename DispatchT>
void translate_keydown_www_event(SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown_www();
}

template <typename DispatchT>
void translate_keydown_mail_event(SDL_Event const&,
                                  DispatchT const* dispatch) {
  dispatch->keydown_mail();
}

template <typename DispatchT>
void translate_keydown_calculator_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_calculator();
}

template <typename DispatchT>
void translate_keydown_computer_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown_computer();
}

template <typename DispatchT>
void translate_keydown_ac_search_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown_ac_search();
}

template <typename DispatchT>
void translate_keydown_ac_home_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keydown_ac_home();
}

template <typename DispatchT>
void translate_keydown_ac_back_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keydown_ac_back();
}

template <typename DispatchT>
void translate_keydown_ac_forward_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_ac_forward();
}

template <typename DispatchT>
void translate_keydown_ac_stop_event(SDL_Event const&,
                                     DispatchT const* dispatch) {
  dispatch->keydown_ac_stop();
}

template <typename DispatchT>
void translate_keydown_ac_refresh_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_ac_refresh();
}

template <typename DispatchT>
void translate_keydown_ac_bookmarks_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_ac_bookmarks();
}

template <typename DispatchT>
void translate_keydown_brightnessdown_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_brightnessdown();
}

template <typename DispatchT>
void translate_keydown_brightnessup_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_brightnessup();
}

template <typename DispatchT>
void translate_keydown_displayswitch_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown_displayswitch();
}

template <typename DispatchT>
void translate_keydown_kbdillumtoggle_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown_kbdillumtoggle();
}

template <typename DispatchT>
void translate_keydown_kbdillumdown_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown_kbdillumdown();
}

template <typename DispatchT>
void translate_keydown_kbdillumup_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown_kbdillumup();
}

template <typename DispatchT>
void translate_keydown_eject_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_eject();
}

template <typename DispatchT>
void translate_keydown_sleep_event(SDL_Event const&,
                                   DispatchT const* dispatch) {
  dispatch->keydown_sleep();
}

template <typename DispatchT>
void translate_keydown_event(SDL_Event const& e, DispatchT const* dispatch) {
  if(e.key.keysym.sym == SDLK_UNKNOWN)
    translate_keydown_unknown_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BACKSPACE)
    translate_keydown_backspace_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_TAB)
    translate_keydown_tab_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RETURN)
    translate_keydown_return_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_ESCAPE)
    translate_keydown_escape_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SPACE)
    translate_keydown_space_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EXCLAIM)
    translate_keydown_exclaim_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_QUOTEDBL)
    translate_keydown_quotedbl_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_HASH)
    translate_keydown_hash_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DOLLAR)
    translate_keydown_dollar_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PERCENT)
    translate_keydown_percent_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AMPERSAND)
    translate_keydown_ampersand_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_QUOTE)
    translate_keydown_quote_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LEFTPAREN)
    translate_keydown_leftparen_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RIGHTPAREN)
    translate_keydown_rightparen_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_ASTERISK)
    translate_keydown_asterisk_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PLUS)
    translate_keydown_plus_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COMMA)
    translate_keydown_comma_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MINUS)
    translate_keydown_minus_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PERIOD)
    translate_keydown_period_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SLASH)
    translate_keydown_slash_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_0)
    translate_keydown_0_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_1)
    translate_keydown_1_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_2)
    translate_keydown_2_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_3)
    translate_keydown_3_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_4)
    translate_keydown_4_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_5)
    translate_keydown_5_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_6)
    translate_keydown_6_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_7)
    translate_keydown_7_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_8)
    translate_keydown_8_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_9)
    translate_keydown_9_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COLON)
    translate_keydown_colon_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SEMICOLON)
    translate_keydown_semicolon_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LESS)
    translate_keydown_less_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EQUALS)
    translate_keydown_equals_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_GREATER)
    translate_keydown_greater_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_QUESTION)
    translate_keydown_question_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AT)
    translate_keydown_at_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LEFTBRACKET)
    translate_keydown_leftbracket_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BACKSLASH)
    translate_keydown_backslash_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RIGHTBRACKET)
    translate_keydown_rightbracket_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CARET)
    translate_keydown_caret_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_UNDERSCORE)
    translate_keydown_underscore_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BACKQUOTE)
    translate_keydown_backquote_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_a)
    translate_keydown_a_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_b)
    translate_keydown_b_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_c)
    translate_keydown_c_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_d)
    translate_keydown_d_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_e)
    translate_keydown_e_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_f)
    translate_keydown_f_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_g)
    translate_keydown_g_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_h)
    translate_keydown_h_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_i)
    translate_keydown_i_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_j)
    translate_keydown_j_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_k)
    translate_keydown_k_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_l)
    translate_keydown_l_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_m)
    translate_keydown_m_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_n)
    translate_keydown_n_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_o)
    translate_keydown_o_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_p)
    translate_keydown_p_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_q)
    translate_keydown_q_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_r)
    translate_keydown_r_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_s)
    translate_keydown_s_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_t)
    translate_keydown_t_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_u)
    translate_keydown_u_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_v)
    translate_keydown_v_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_w)
    translate_keydown_w_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_x)
    translate_keydown_x_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_y)
    translate_keydown_y_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_z)
    translate_keydown_z_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DELETE)
    translate_keydown_delete_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CAPSLOCK)
    translate_keydown_capslock_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F1)
    translate_keydown_f1_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F2)
    translate_keydown_f2_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F3)
    translate_keydown_f3_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F4)
    translate_keydown_f4_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F5)
    translate_keydown_f5_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F6)
    translate_keydown_f6_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F7)
    translate_keydown_f7_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F8)
    translate_keydown_f8_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F9)
    translate_keydown_f9_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F10)
    translate_keydown_f10_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F11)
    translate_keydown_f11_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F12)
    translate_keydown_f12_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PRINTSCREEN)
    translate_keydown_printscreen_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SCROLLLOCK)
    translate_keydown_scrolllock_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PAUSE)
    translate_keydown_pause_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_INSERT)
    translate_keydown_insert_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_HOME)
    translate_keydown_home_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PAGEUP)
    translate_keydown_pageup_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_END)
    translate_keydown_end_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PAGEDOWN)
    translate_keydown_pagedown_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RIGHT)
    translate_keydown_right_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LEFT)
    translate_keydown_left_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DOWN)
    translate_keydown_down_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_UP)
    translate_keydown_up_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_NUMLOCKCLEAR)
    translate_keydown_numlockclear_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DIVIDE)
    translate_keydown_kp_divide_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MULTIPLY)
    translate_keydown_kp_multiply_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MINUS)
    translate_keydown_kp_minus_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PLUS)
    translate_keydown_kp_plus_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_ENTER)
    translate_keydown_kp_enter_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_1)
    translate_keydown_kp_1_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_2)
    translate_keydown_kp_2_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_3)
    translate_keydown_kp_3_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_4)
    translate_keydown_kp_4_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_5)
    translate_keydown_kp_5_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_6)
    translate_keydown_kp_6_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_7)
    translate_keydown_kp_7_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_8)
    translate_keydown_kp_8_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_9)
    translate_keydown_kp_9_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_0)
    translate_keydown_kp_0_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PERIOD)
    translate_keydown_kp_period_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_APPLICATION)
    translate_keydown_application_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_POWER)
    translate_keydown_power_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_EQUALS)
    translate_keydown_kp_equals_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F13)
    translate_keydown_f13_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F14)
    translate_keydown_f14_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F15)
    translate_keydown_f15_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F16)
    translate_keydown_f16_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F17)
    translate_keydown_f17_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F18)
    translate_keydown_f18_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F19)
    translate_keydown_f19_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F20)
    translate_keydown_f20_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F21)
    translate_keydown_f21_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F22)
    translate_keydown_f22_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F23)
    translate_keydown_f23_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F24)
    translate_keydown_f24_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EXECUTE)
    translate_keydown_execute_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_HELP)
    translate_keydown_help_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MENU)
    translate_keydown_menu_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SELECT)
    translate_keydown_select_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_STOP)
    translate_keydown_stop_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AGAIN)
    translate_keydown_again_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_UNDO)
    translate_keydown_undo_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CUT)
    translate_keydown_cut_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COPY)
    translate_keydown_copy_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PASTE)
    translate_keydown_paste_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_FIND)
    translate_keydown_find_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MUTE)
    translate_keydown_mute_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_VOLUMEUP)
    translate_keydown_volumeup_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_VOLUMEDOWN)
    translate_keydown_volumedown_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_COMMA)
    translate_keydown_kp_comma_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_EQUALSAS400)
    translate_keydown_kp_equalsas400_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_ALTERASE)
    translate_keydown_alterase_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SYSREQ)
    translate_keydown_sysreq_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CANCEL)
    translate_keydown_cancel_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CLEAR)
    translate_keydown_clear_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PRIOR)
    translate_keydown_prior_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RETURN2)
    translate_keydown_return2_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SEPARATOR)
    translate_keydown_separator_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_OUT)
    translate_keydown_out_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_OPER)
    translate_keydown_oper_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CLEARAGAIN)
    translate_keydown_clearagain_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CRSEL)
    translate_keydown_crsel_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EXSEL)
    translate_keydown_exsel_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_00)
    translate_keydown_kp_00_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_000)
    translate_keydown_kp_000_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_THOUSANDSSEPARATOR)
    translate_keydown_thousandsseparator_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DECIMALSEPARATOR)
    translate_keydown_decimalseparator_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CURRENCYUNIT)
    translate_keydown_currencyunit_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CURRENCYSUBUNIT)
    translate_keydown_currencysubunit_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_LEFTPAREN)
    translate_keydown_kp_leftparen_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_RIGHTPAREN)
    translate_keydown_kp_rightparen_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_LEFTBRACE)
    translate_keydown_kp_leftbrace_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_RIGHTBRACE)
    translate_keydown_kp_rightbrace_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_TAB)
    translate_keydown_kp_tab_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_BACKSPACE)
    translate_keydown_kp_backspace_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_A)
    translate_keydown_kp_a_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_B)
    translate_keydown_kp_b_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_C)
    translate_keydown_kp_c_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_D)
    translate_keydown_kp_d_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_E)
    translate_keydown_kp_e_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_F)
    translate_keydown_kp_f_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_XOR)
    translate_keydown_kp_xor_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_POWER)
    translate_keydown_kp_power_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PERCENT)
    translate_keydown_kp_percent_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_LESS)
    translate_keydown_kp_less_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_GREATER)
    translate_keydown_kp_greater_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_AMPERSAND)
    translate_keydown_kp_ampersand_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DBLAMPERSAND)
    translate_keydown_kp_dblampersand_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_VERTICALBAR)
    translate_keydown_kp_verticalbar_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DBLVERTICALBAR)
    translate_keydown_kp_dblverticalbar_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_COLON)
    translate_keydown_kp_colon_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_HASH)
    translate_keydown_kp_hash_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_SPACE)
    translate_keydown_kp_space_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_AT)
    translate_keydown_kp_at_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_EXCLAM)
    translate_keydown_kp_exclam_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMSTORE)
    translate_keydown_kp_memstore_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMRECALL)
    translate_keydown_kp_memrecall_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMCLEAR)
    translate_keydown_kp_memclear_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMADD)
    translate_keydown_kp_memadd_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMSUBTRACT)
    translate_keydown_kp_memsubtract_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMMULTIPLY)
    translate_keydown_kp_memmultiply_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMDIVIDE)
    translate_keydown_kp_memdivide_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PLUSMINUS)
    translate_keydown_kp_plusminus_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_CLEAR)
    translate_keydown_kp_clear_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_CLEARENTRY)
    translate_keydown_kp_clearentry_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_BINARY)
    translate_keydown_kp_binary_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_OCTAL)
    translate_keydown_kp_octal_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DECIMAL)
    translate_keydown_kp_decimal_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_HEXADECIMAL)
    translate_keydown_kp_hexadecimal_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LCTRL)
    translate_keydown_lctrl_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LSHIFT)
    translate_keydown_lshift_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LALT)
    translate_keydown_lalt_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LGUI)
    translate_keydown_lgui_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RCTRL)
    translate_keydown_rctrl_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RSHIFT)
    translate_keydown_rshift_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RALT)
    translate_keydown_ralt_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RGUI)
    translate_keydown_rgui_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MODE)
    translate_keydown_mode_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIONEXT)
    translate_keydown_audionext_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOPREV)
    translate_keydown_audioprev_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOSTOP)
    translate_keydown_audiostop_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOPLAY)
    translate_keydown_audioplay_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOMUTE)
    translate_keydown_audiomute_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MEDIASELECT)
    translate_keydown_mediaselect_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_WWW)
    translate_keydown_www_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MAIL)
    translate_keydown_mail_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CALCULATOR)
    translate_keydown_calculator_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COMPUTER)
    translate_keydown_computer_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_SEARCH)
    translate_keydown_ac_search_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_HOME)
    translate_keydown_ac_home_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_BACK)
    translate_keydown_ac_back_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_FORWARD)
    translate_keydown_ac_forward_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_STOP)
    translate_keydown_ac_stop_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_REFRESH)
    translate_keydown_ac_refresh_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_BOOKMARKS)
    translate_keydown_ac_bookmarks_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BRIGHTNESSDOWN)
    translate_keydown_brightnessdown_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BRIGHTNESSUP)
    translate_keydown_brightnessup_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DISPLAYSWITCH)
    translate_keydown_displayswitch_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KBDILLUMTOGGLE)
    translate_keydown_kbdillumtoggle_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KBDILLUMDOWN)
    translate_keydown_kbdillumdown_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KBDILLUMUP)
    translate_keydown_kbdillumup_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EJECT)
    translate_keydown_eject_event(e, dispatch);
}
}
}

#endif
