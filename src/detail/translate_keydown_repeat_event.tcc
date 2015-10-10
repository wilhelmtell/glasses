#ifndef GLS_DETAIL_TRANSLATE_KEYDOWN_REPEAT_EVENT_TCC_
#define GLS_DETAIL_TRANSLATE_KEYDOWN_REPEAT_EVENT_TCC_

#include <SDL2/SDL.h>

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_keydown_unknown_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.repeat.unknown();
}

template <typename DispatchT>
void translate_keydown_backspace_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.backspace();
}

template <typename DispatchT>
void translate_keydown_tab_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.tab();
}

template <typename DispatchT>
void translate_keydown_return_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.returnkey();
}

template <typename DispatchT>
void translate_keydown_escape_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.escape();
}

template <typename DispatchT>
void translate_keydown_space_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.space();
}

template <typename DispatchT>
void translate_keydown_exclaim_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.repeat.exclaim();
}

template <typename DispatchT>
void translate_keydown_quotedbl_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.quotedbl();
}

template <typename DispatchT>
void translate_keydown_hash_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.hash();
}

template <typename DispatchT>
void translate_keydown_dollar_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.dollar();
}

template <typename DispatchT>
void translate_keydown_percent_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.repeat.percent();
}

template <typename DispatchT>
void translate_keydown_ampersand_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.ampersand();
}

template <typename DispatchT>
void translate_keydown_quote_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.quote();
}

template <typename DispatchT>
void translate_keydown_leftparen_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.leftparen();
}

template <typename DispatchT>
void translate_keydown_rightparen_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.repeat.rightparen();
}

template <typename DispatchT>
void translate_keydown_asterisk_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.asterisk();
}

template <typename DispatchT>
void translate_keydown_plus_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.plus();
}

template <typename DispatchT>
void translate_keydown_comma_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.comma();
}

template <typename DispatchT>
void translate_keydown_minus_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.minus();
}

template <typename DispatchT>
void translate_keydown_period_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.period();
}

template <typename DispatchT>
void translate_keydown_slash_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.slash();
}

template <typename DispatchT>
void translate_keydown_zero_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.zero();
}

template <typename DispatchT>
void translate_keydown_one_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.one();
}

template <typename DispatchT>
void translate_keydown_two_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.two();
}

template <typename DispatchT>
void translate_keydown_three_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.three();
}

template <typename DispatchT>
void translate_keydown_four_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.four();
}

template <typename DispatchT>
void translate_keydown_five_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.five();
}

template <typename DispatchT>
void translate_keydown_six_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.six();
}

template <typename DispatchT>
void translate_keydown_seven_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.seven();
}

template <typename DispatchT>
void translate_keydown_eight_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.eight();
}

template <typename DispatchT>
void translate_keydown_nine_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.nine();
}

template <typename DispatchT>
void translate_keydown_colon_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.colon();
}

template <typename DispatchT>
void translate_keydown_semicolon_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.semicolon();
}

template <typename DispatchT>
void translate_keydown_less_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.less();
}

template <typename DispatchT>
void translate_keydown_equals_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.equals();
}

template <typename DispatchT>
void translate_keydown_greater_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.repeat.greater();
}

template <typename DispatchT>
void translate_keydown_question_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.question();
}

template <typename DispatchT>
void translate_keydown_at_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown.repeat.at();
}

template <typename DispatchT>
void translate_keydown_leftbracket_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.repeat.leftbracket();
}

template <typename DispatchT>
void translate_keydown_backslash_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.backslash();
}

template <typename DispatchT>
void translate_keydown_rightbracket_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.rightbracket();
}

template <typename DispatchT>
void translate_keydown_caret_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.caret();
}

template <typename DispatchT>
void translate_keydown_underscore_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.repeat.underscore();
}

template <typename DispatchT>
void translate_keydown_backquote_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.backquote();
}

template <typename DispatchT>
void translate_keydown_a_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.a();
}

template <typename DispatchT>
void translate_keydown_b_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.b();
}

template <typename DispatchT>
void translate_keydown_c_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.c();
}

template <typename DispatchT>
void translate_keydown_d_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.d();
}

template <typename DispatchT>
void translate_keydown_e_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.e();
}

template <typename DispatchT>
void translate_keydown_f_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.f();
}

template <typename DispatchT>
void translate_keydown_g_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.g();
}

template <typename DispatchT>
void translate_keydown_h_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.h();
}

template <typename DispatchT>
void translate_keydown_i_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.i();
}

template <typename DispatchT>
void translate_keydown_j_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.j();
}

template <typename DispatchT>
void translate_keydown_k_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.k();
}

template <typename DispatchT>
void translate_keydown_l_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.l();
}

template <typename DispatchT>
void translate_keydown_m_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.m();
}

template <typename DispatchT>
void translate_keydown_n_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.n();
}

template <typename DispatchT>
void translate_keydown_o_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.o();
}

template <typename DispatchT>
void translate_keydown_p_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.p();
}

template <typename DispatchT>
void translate_keydown_q_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.q();
}

template <typename DispatchT>
void translate_keydown_r_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.r();
}

template <typename DispatchT>
void translate_keydown_s_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.s();
}

template <typename DispatchT>
void translate_keydown_t_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.t();
}

template <typename DispatchT>
void translate_keydown_u_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.u();
}

template <typename DispatchT>
void translate_keydown_v_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.v();
}

template <typename DispatchT>
void translate_keydown_w_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.w();
}

template <typename DispatchT>
void translate_keydown_x_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.x();
}

template <typename DispatchT>
void translate_keydown_y_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.y();
}

template <typename DispatchT>
void translate_keydown_z_repeat_event(SDL_Event const&,
                                      DispatchT const* dispatch) {
  dispatch->keydown.repeat.z();
}

template <typename DispatchT>
void translate_keydown_delete_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.deletekey();
}

template <typename DispatchT>
void translate_keydown_capslock_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.capslock();
}

template <typename DispatchT>
void translate_keydown_f1_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown.repeat.f1();
}

template <typename DispatchT>
void translate_keydown_f2_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown.repeat.f2();
}

template <typename DispatchT>
void translate_keydown_f3_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown.repeat.f3();
}

template <typename DispatchT>
void translate_keydown_f4_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown.repeat.f4();
}

template <typename DispatchT>
void translate_keydown_f5_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown.repeat.f5();
}

template <typename DispatchT>
void translate_keydown_f6_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown.repeat.f6();
}

template <typename DispatchT>
void translate_keydown_f7_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown.repeat.f7();
}

template <typename DispatchT>
void translate_keydown_f8_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown.repeat.f8();
}

template <typename DispatchT>
void translate_keydown_f9_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown.repeat.f9();
}

template <typename DispatchT>
void translate_keydown_f10_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f10();
}

template <typename DispatchT>
void translate_keydown_f11_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f11();
}

template <typename DispatchT>
void translate_keydown_f12_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f12();
}

template <typename DispatchT>
void translate_keydown_printscreen_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.repeat.printscreen();
}

template <typename DispatchT>
void translate_keydown_scrolllock_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.repeat.scrolllock();
}

template <typename DispatchT>
void translate_keydown_pause_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.pause();
}

template <typename DispatchT>
void translate_keydown_insert_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.insert();
}

template <typename DispatchT>
void translate_keydown_home_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.home();
}

template <typename DispatchT>
void translate_keydown_pageup_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.pageup();
}

template <typename DispatchT>
void translate_keydown_end_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.end();
}

template <typename DispatchT>
void translate_keydown_pagedown_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.pagedown();
}

template <typename DispatchT>
void translate_keydown_right_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.right();
}

template <typename DispatchT>
void translate_keydown_left_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.left();
}

template <typename DispatchT>
void translate_keydown_down_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.down();
}

template <typename DispatchT>
void translate_keydown_up_repeat_event(SDL_Event const&,
                                       DispatchT const* dispatch) {
  dispatch->keydown.repeat.up();
}

template <typename DispatchT>
void translate_keydown_numlockclear_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.numlockclear();
}

template <typename DispatchT>
void translate_keydown_kp_divide_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_divide();
}

template <typename DispatchT>
void translate_keydown_kp_multiply_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_multiply();
}

template <typename DispatchT>
void translate_keydown_kp_minus_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_minus();
}

template <typename DispatchT>
void translate_keydown_kp_plus_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_plus();
}

template <typename DispatchT>
void translate_keydown_kp_enter_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_enter();
}

template <typename DispatchT>
void translate_keydown_kp_1_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_1();
}

template <typename DispatchT>
void translate_keydown_kp_2_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_2();
}

template <typename DispatchT>
void translate_keydown_kp_3_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_3();
}

template <typename DispatchT>
void translate_keydown_kp_4_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_4();
}

template <typename DispatchT>
void translate_keydown_kp_5_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_5();
}

template <typename DispatchT>
void translate_keydown_kp_6_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_6();
}

template <typename DispatchT>
void translate_keydown_kp_7_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_7();
}

template <typename DispatchT>
void translate_keydown_kp_8_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_8();
}

template <typename DispatchT>
void translate_keydown_kp_9_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_9();
}

template <typename DispatchT>
void translate_keydown_kp_0_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_0();
}

template <typename DispatchT>
void translate_keydown_kp_period_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_period();
}

template <typename DispatchT>
void translate_keydown_application_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.repeat.application();
}

template <typename DispatchT>
void translate_keydown_power_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.power();
}

template <typename DispatchT>
void translate_keydown_kp_equals_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_equals();
}

template <typename DispatchT>
void translate_keydown_f13_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f13();
}

template <typename DispatchT>
void translate_keydown_f14_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f14();
}

template <typename DispatchT>
void translate_keydown_f15_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f15();
}

template <typename DispatchT>
void translate_keydown_f16_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f16();
}

template <typename DispatchT>
void translate_keydown_f17_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f17();
}

template <typename DispatchT>
void translate_keydown_f18_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f18();
}

template <typename DispatchT>
void translate_keydown_f19_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f19();
}

template <typename DispatchT>
void translate_keydown_f20_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f20();
}

template <typename DispatchT>
void translate_keydown_f21_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f21();
}

template <typename DispatchT>
void translate_keydown_f22_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f22();
}

template <typename DispatchT>
void translate_keydown_f23_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f23();
}

template <typename DispatchT>
void translate_keydown_f24_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.f24();
}

template <typename DispatchT>
void translate_keydown_execute_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.repeat.execute();
}

template <typename DispatchT>
void translate_keydown_help_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.help();
}

template <typename DispatchT>
void translate_keydown_menu_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.menu();
}

template <typename DispatchT>
void translate_keydown_select_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.select();
}

template <typename DispatchT>
void translate_keydown_stop_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.stop();
}

template <typename DispatchT>
void translate_keydown_again_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.again();
}

template <typename DispatchT>
void translate_keydown_undo_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.undo();
}

template <typename DispatchT>
void translate_keydown_cut_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.cut();
}

template <typename DispatchT>
void translate_keydown_copy_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.copy();
}

template <typename DispatchT>
void translate_keydown_paste_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.paste();
}

template <typename DispatchT>
void translate_keydown_find_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.find();
}

template <typename DispatchT>
void translate_keydown_mute_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.mute();
}

template <typename DispatchT>
void translate_keydown_volumeup_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.volumeup();
}

template <typename DispatchT>
void translate_keydown_volumedown_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.repeat.volumedown();
}

template <typename DispatchT>
void translate_keydown_kp_comma_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_comma();
}

template <typename DispatchT>
void translate_keydown_kp_equalsas400_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_equalsas400();
}

template <typename DispatchT>
void translate_keydown_alterase_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.alterase();
}

template <typename DispatchT>
void translate_keydown_sysreq_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.sysreq();
}

template <typename DispatchT>
void translate_keydown_cancel_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.cancel();
}

template <typename DispatchT>
void translate_keydown_clear_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.clear();
}

template <typename DispatchT>
void translate_keydown_prior_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.prior();
}

template <typename DispatchT>
void translate_keydown_return2_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.repeat.return2();
}

template <typename DispatchT>
void translate_keydown_separator_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.separator();
}

template <typename DispatchT>
void translate_keydown_out_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.out();
}

template <typename DispatchT>
void translate_keydown_oper_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.oper();
}

template <typename DispatchT>
void translate_keydown_clearagain_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.repeat.clearagain();
}

template <typename DispatchT>
void translate_keydown_crsel_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.crsel();
}

template <typename DispatchT>
void translate_keydown_exsel_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.exsel();
}

template <typename DispatchT>
void translate_keydown_kp_00_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_00();
}

template <typename DispatchT>
void translate_keydown_kp_000_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_000();
}

template <typename DispatchT>
void translate_keydown_thousandsseparator_repeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.repeat.thousandsseparator();
}

template <typename DispatchT>
void translate_keydown_decimalseparator_repeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.repeat.decimalseparator();
}

template <typename DispatchT>
void translate_keydown_currencyunit_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.currencyunit();
}

template <typename DispatchT>
void translate_keydown_currencysubunit_repeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.repeat.currencysubunit();
}

template <typename DispatchT>
void translate_keydown_kp_leftparen_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_leftparen();
}

template <typename DispatchT>
void translate_keydown_kp_rightparen_repeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_rightparen();
}

template <typename DispatchT>
void translate_keydown_kp_leftbrace_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_leftbrace();
}

template <typename DispatchT>
void translate_keydown_kp_rightbrace_repeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_rightbrace();
}

template <typename DispatchT>
void translate_keydown_kp_tab_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_tab();
}

template <typename DispatchT>
void translate_keydown_kp_backspace_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_backspace();
}

template <typename DispatchT>
void translate_keydown_kp_a_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_a();
}

template <typename DispatchT>
void translate_keydown_kp_b_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_b();
}

template <typename DispatchT>
void translate_keydown_kp_c_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_c();
}

template <typename DispatchT>
void translate_keydown_kp_d_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_d();
}

template <typename DispatchT>
void translate_keydown_kp_e_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_e();
}

template <typename DispatchT>
void translate_keydown_kp_f_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_f();
}

template <typename DispatchT>
void translate_keydown_kp_xor_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_xor();
}

template <typename DispatchT>
void translate_keydown_kp_power_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_power();
}

template <typename DispatchT>
void translate_keydown_kp_percent_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_percent();
}

template <typename DispatchT>
void translate_keydown_kp_less_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_less();
}

template <typename DispatchT>
void translate_keydown_kp_greater_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_greater();
}

template <typename DispatchT>
void translate_keydown_kp_ampersand_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_ampersand();
}

template <typename DispatchT>
void translate_keydown_kp_dblampersand_repeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_dblampersand();
}

template <typename DispatchT>
void translate_keydown_kp_verticalbar_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_verticalbar();
}

template <typename DispatchT>
void translate_keydown_kp_dblverticalbar_repeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_dblverticalbar();
}

template <typename DispatchT>
void translate_keydown_kp_colon_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_colon();
}

template <typename DispatchT>
void translate_keydown_kp_hash_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_hash();
}

template <typename DispatchT>
void translate_keydown_kp_space_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_space();
}

template <typename DispatchT>
void translate_keydown_kp_at_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_at();
}

template <typename DispatchT>
void translate_keydown_kp_exclam_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_exclam();
}

template <typename DispatchT>
void translate_keydown_kp_memstore_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_memstore();
}

template <typename DispatchT>
void translate_keydown_kp_memrecall_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_memrecall();
}

template <typename DispatchT>
void translate_keydown_kp_memclear_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_memclear();
}

template <typename DispatchT>
void translate_keydown_kp_memadd_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_memadd();
}

template <typename DispatchT>
void translate_keydown_kp_memsubtract_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_memsubtract();
}

template <typename DispatchT>
void translate_keydown_kp_memmultiply_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_memmultiply();
}

template <typename DispatchT>
void translate_keydown_kp_memdivide_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_memdivide();
}

template <typename DispatchT>
void translate_keydown_kp_plusminus_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_plusminus();
}

template <typename DispatchT>
void translate_keydown_kp_clear_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_clear();
}

template <typename DispatchT>
void translate_keydown_kp_clearentry_repeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_clearentry();
}

template <typename DispatchT>
void translate_keydown_kp_binary_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_binary();
}

template <typename DispatchT>
void translate_keydown_kp_octal_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_octal();
}

template <typename DispatchT>
void translate_keydown_kp_decimal_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_decimal();
}

template <typename DispatchT>
void translate_keydown_kp_hexadecimal_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.repeat.kp_hexadecimal();
}

template <typename DispatchT>
void translate_keydown_lctrl_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.lctrl();
}

template <typename DispatchT>
void translate_keydown_lshift_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.lshift();
}

template <typename DispatchT>
void translate_keydown_lalt_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.lalt();
}

template <typename DispatchT>
void translate_keydown_lgui_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.lgui();
}

template <typename DispatchT>
void translate_keydown_rctrl_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.rctrl();
}

template <typename DispatchT>
void translate_keydown_rshift_repeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.repeat.rshift();
}

template <typename DispatchT>
void translate_keydown_ralt_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.ralt();
}

template <typename DispatchT>
void translate_keydown_rgui_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.rgui();
}

template <typename DispatchT>
void translate_keydown_mode_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.mode();
}

template <typename DispatchT>
void translate_keydown_audionext_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.audionext();
}

template <typename DispatchT>
void translate_keydown_audioprev_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.audioprev();
}

template <typename DispatchT>
void translate_keydown_audiostop_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.audiostop();
}

template <typename DispatchT>
void translate_keydown_audioplay_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.audioplay();
}

template <typename DispatchT>
void translate_keydown_audiomute_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.audiomute();
}

template <typename DispatchT>
void translate_keydown_mediaselect_repeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.repeat.mediaselect();
}

template <typename DispatchT>
void translate_keydown_www_repeat_event(SDL_Event const&,
                                        DispatchT const* dispatch) {
  dispatch->keydown.repeat.www();
}

template <typename DispatchT>
void translate_keydown_mail_repeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.repeat.mail();
}

template <typename DispatchT>
void translate_keydown_calculator_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.repeat.calculator();
}

template <typename DispatchT>
void translate_keydown_computer_repeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.repeat.computer();
}

template <typename DispatchT>
void translate_keydown_ac_search_repeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.repeat.ac_search();
}

template <typename DispatchT>
void translate_keydown_ac_home_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.repeat.ac_home();
}

template <typename DispatchT>
void translate_keydown_ac_back_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.repeat.ac_back();
}

template <typename DispatchT>
void translate_keydown_ac_forward_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.repeat.ac_forward();
}

template <typename DispatchT>
void translate_keydown_ac_stop_repeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.repeat.ac_stop();
}

template <typename DispatchT>
void translate_keydown_ac_refresh_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.repeat.ac_refresh();
}

template <typename DispatchT>
void translate_keydown_ac_bookmarks_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.ac_bookmarks();
}

template <typename DispatchT>
void translate_keydown_brightnessdown_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.repeat.brightnessdown();
}

template <typename DispatchT>
void translate_keydown_brightnessup_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.brightnessup();
}

template <typename DispatchT>
void translate_keydown_displayswitch_repeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.repeat.displayswitch();
}

template <typename DispatchT>
void translate_keydown_kbdillumtoggle_repeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.repeat.kbdillumtoggle();
}

template <typename DispatchT>
void translate_keydown_kbdillumdown_repeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.repeat.kbdillumdown();
}

template <typename DispatchT>
void translate_keydown_kbdillumup_repeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.repeat.kbdillumup();
}

template <typename DispatchT>
void translate_keydown_eject_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.eject();
}

template <typename DispatchT>
void translate_keydown_sleep_repeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.repeat.sleep();
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
    translate_keydown_zero_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_1)
    translate_keydown_one_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_2)
    translate_keydown_two_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_3)
    translate_keydown_three_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_4)
    translate_keydown_four_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_5)
    translate_keydown_five_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_6)
    translate_keydown_six_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_7)
    translate_keydown_seven_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_8)
    translate_keydown_eight_repeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_9)
    translate_keydown_nine_repeat_event(e, dispatch);
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
