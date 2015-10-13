#ifndef GLS_DETAIL_TRANSLATE_KEYDOWN_NONREPEAT_EVENT_TCC_
#define GLS_DETAIL_TRANSLATE_KEYDOWN_NONREPEAT_EVENT_TCC_

#include <SDL2/SDL.h>

namespace gls {
namespace detail {
template <typename DispatchT>
void translate_keydown_unknown_nonrepeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.unknown();
}

template <typename DispatchT>
void translate_keydown_backspace_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.backspace();
}

template <typename DispatchT>
void translate_keydown_tab_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.tab();
}

template <typename DispatchT>
void translate_keydown_return_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.returnkey();
}

template <typename DispatchT>
void translate_keydown_escape_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.escape();
}

template <typename DispatchT>
void translate_keydown_space_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.space();
}

template <typename DispatchT>
void translate_keydown_exclaim_nonrepeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.exclaim();
}

template <typename DispatchT>
void translate_keydown_quotedbl_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.quotedbl();
}

template <typename DispatchT>
void translate_keydown_hash_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.hash();
}

template <typename DispatchT>
void translate_keydown_dollar_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.dollar();
}

template <typename DispatchT>
void translate_keydown_percent_nonrepeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.percent();
}

template <typename DispatchT>
void translate_keydown_ampersand_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.ampersand();
}

template <typename DispatchT>
void translate_keydown_quote_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.quote();
}

template <typename DispatchT>
void translate_keydown_leftparen_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.leftparen();
}

template <typename DispatchT>
void translate_keydown_rightparen_nonrepeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.rightparen();
}

template <typename DispatchT>
void translate_keydown_asterisk_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.asterisk();
}

template <typename DispatchT>
void translate_keydown_plus_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.plus();
}

template <typename DispatchT>
void translate_keydown_comma_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.comma();
}

template <typename DispatchT>
void translate_keydown_minus_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.minus();
}

template <typename DispatchT>
void translate_keydown_period_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.period();
}

template <typename DispatchT>
void translate_keydown_slash_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.slash();
}

template <typename DispatchT>
void translate_keydown_zero_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.zero();
}

template <typename DispatchT>
void translate_keydown_one_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.one();
}

template <typename DispatchT>
void translate_keydown_two_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.two();
}

template <typename DispatchT>
void translate_keydown_three_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.three();
}

template <typename DispatchT>
void translate_keydown_four_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.four();
}

template <typename DispatchT>
void translate_keydown_five_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.five();
}

template <typename DispatchT>
void translate_keydown_six_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.six();
}

template <typename DispatchT>
void translate_keydown_seven_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.seven();
}

template <typename DispatchT>
void translate_keydown_eight_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.eight();
}

template <typename DispatchT>
void translate_keydown_nine_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.nine();
}

template <typename DispatchT>
void translate_keydown_colon_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.colon();
}

template <typename DispatchT>
void translate_keydown_semicolon_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.semicolon();
}

template <typename DispatchT>
void translate_keydown_less_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.less();
}

template <typename DispatchT>
void translate_keydown_equals_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.equals();
}

template <typename DispatchT>
void translate_keydown_greater_nonrepeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.greater();
}

template <typename DispatchT>
void translate_keydown_question_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.question();
}

template <typename DispatchT>
void translate_keydown_at_nonrepeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.at();
}

template <typename DispatchT>
void translate_keydown_leftbracket_nonrepeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.leftbracket();
}

template <typename DispatchT>
void translate_keydown_backslash_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.backslash();
}

template <typename DispatchT>
void translate_keydown_rightbracket_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.rightbracket();
}

template <typename DispatchT>
void translate_keydown_caret_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.caret();
}

template <typename DispatchT>
void translate_keydown_underscore_nonrepeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.underscore();
}

template <typename DispatchT>
void translate_keydown_backquote_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.backquote();
}

template <typename DispatchT>
void translate_keydown_a_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.a();
}

template <typename DispatchT>
void translate_keydown_b_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.b();
}

template <typename DispatchT>
void translate_keydown_c_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.c();
}

template <typename DispatchT>
void translate_keydown_d_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.d();
}

template <typename DispatchT>
void translate_keydown_e_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.e();
}

template <typename DispatchT>
void translate_keydown_f_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f();
}

template <typename DispatchT>
void translate_keydown_g_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.g();
}

template <typename DispatchT>
void translate_keydown_h_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.h();
}

template <typename DispatchT>
void translate_keydown_i_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.i();
}

template <typename DispatchT>
void translate_keydown_j_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.j();
}

template <typename DispatchT>
void translate_keydown_k_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.k();
}

template <typename DispatchT>
void translate_keydown_l_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.l();
}

template <typename DispatchT>
void translate_keydown_m_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.m();
}

template <typename DispatchT>
void translate_keydown_n_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.n();
}

template <typename DispatchT>
void translate_keydown_o_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.o();
}

template <typename DispatchT>
void translate_keydown_p_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.p();
}

template <typename DispatchT>
void translate_keydown_q_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.q();
}

template <typename DispatchT>
void translate_keydown_r_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.r();
}

template <typename DispatchT>
void translate_keydown_s_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.s();
}

template <typename DispatchT>
void translate_keydown_t_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.t();
}

template <typename DispatchT>
void translate_keydown_u_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.u();
}

template <typename DispatchT>
void translate_keydown_v_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.v();
}

template <typename DispatchT>
void translate_keydown_w_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.w();
}

template <typename DispatchT>
void translate_keydown_x_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.x();
}

template <typename DispatchT>
void translate_keydown_y_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.y();
}

template <typename DispatchT>
void translate_keydown_z_nonrepeat_event(SDL_Event const&,
                                         DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.z();
}

template <typename DispatchT>
void translate_keydown_delete_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.deletekey();
}

template <typename DispatchT>
void translate_keydown_capslock_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.capslock();
}

template <typename DispatchT>
void translate_keydown_f1_nonrepeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f1();
}

template <typename DispatchT>
void translate_keydown_f2_nonrepeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f2();
}

template <typename DispatchT>
void translate_keydown_f3_nonrepeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f3();
}

template <typename DispatchT>
void translate_keydown_f4_nonrepeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f4();
}

template <typename DispatchT>
void translate_keydown_f5_nonrepeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f5();
}

template <typename DispatchT>
void translate_keydown_f6_nonrepeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f6();
}

template <typename DispatchT>
void translate_keydown_f7_nonrepeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f7();
}

template <typename DispatchT>
void translate_keydown_f8_nonrepeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f8();
}

template <typename DispatchT>
void translate_keydown_f9_nonrepeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f9();
}

template <typename DispatchT>
void translate_keydown_f10_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f10();
}

template <typename DispatchT>
void translate_keydown_f11_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f11();
}

template <typename DispatchT>
void translate_keydown_f12_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f12();
}

template <typename DispatchT>
void translate_keydown_printscreen_nonrepeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.printscreen();
}

template <typename DispatchT>
void translate_keydown_scrolllock_nonrepeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.scrolllock();
}

template <typename DispatchT>
void translate_keydown_pause_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.pause();
}

template <typename DispatchT>
void translate_keydown_insert_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.insert();
}

template <typename DispatchT>
void translate_keydown_home_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.home();
}

template <typename DispatchT>
void translate_keydown_pageup_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.pageup();
}

template <typename DispatchT>
void translate_keydown_end_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.end();
}

template <typename DispatchT>
void translate_keydown_pagedown_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.pagedown();
}

template <typename DispatchT>
void translate_keydown_right_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.right();
}

template <typename DispatchT>
void translate_keydown_left_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.left();
}

template <typename DispatchT>
void translate_keydown_down_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.down();
}

template <typename DispatchT>
void translate_keydown_up_nonrepeat_event(SDL_Event const&,
                                          DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.up();
}

template <typename DispatchT>
void translate_keydown_numlockclear_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.numlockclear();
}

template <typename DispatchT>
void translate_keydown_kp_divide_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_divide();
}

template <typename DispatchT>
void translate_keydown_kp_multiply_nonrepeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_multiply();
}

template <typename DispatchT>
void translate_keydown_kp_minus_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_minus();
}

template <typename DispatchT>
void translate_keydown_kp_plus_nonrepeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_plus();
}

template <typename DispatchT>
void translate_keydown_kp_enter_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_enter();
}

template <typename DispatchT>
void translate_keydown_kp_1_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_1();
}

template <typename DispatchT>
void translate_keydown_kp_2_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_2();
}

template <typename DispatchT>
void translate_keydown_kp_3_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_3();
}

template <typename DispatchT>
void translate_keydown_kp_4_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_4();
}

template <typename DispatchT>
void translate_keydown_kp_5_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_5();
}

template <typename DispatchT>
void translate_keydown_kp_6_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_6();
}

template <typename DispatchT>
void translate_keydown_kp_7_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_7();
}

template <typename DispatchT>
void translate_keydown_kp_8_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_8();
}

template <typename DispatchT>
void translate_keydown_kp_9_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_9();
}

template <typename DispatchT>
void translate_keydown_kp_0_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_0();
}

template <typename DispatchT>
void translate_keydown_kp_period_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_period();
}

template <typename DispatchT>
void translate_keydown_application_nonrepeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.application();
}

template <typename DispatchT>
void translate_keydown_power_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.power();
}

template <typename DispatchT>
void translate_keydown_kp_equals_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_equals();
}

template <typename DispatchT>
void translate_keydown_f13_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f13();
}

template <typename DispatchT>
void translate_keydown_f14_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f14();
}

template <typename DispatchT>
void translate_keydown_f15_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f15();
}

template <typename DispatchT>
void translate_keydown_f16_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f16();
}

template <typename DispatchT>
void translate_keydown_f17_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f17();
}

template <typename DispatchT>
void translate_keydown_f18_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f18();
}

template <typename DispatchT>
void translate_keydown_f19_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f19();
}

template <typename DispatchT>
void translate_keydown_f20_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f20();
}

template <typename DispatchT>
void translate_keydown_f21_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f21();
}

template <typename DispatchT>
void translate_keydown_f22_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f22();
}

template <typename DispatchT>
void translate_keydown_f23_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f23();
}

template <typename DispatchT>
void translate_keydown_f24_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.f24();
}

template <typename DispatchT>
void translate_keydown_execute_nonrepeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.execute();
}

template <typename DispatchT>
void translate_keydown_help_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.help();
}

template <typename DispatchT>
void translate_keydown_menu_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.menu();
}

template <typename DispatchT>
void translate_keydown_select_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.select();
}

template <typename DispatchT>
void translate_keydown_stop_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.stop();
}

template <typename DispatchT>
void translate_keydown_again_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.again();
}

template <typename DispatchT>
void translate_keydown_undo_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.undo();
}

template <typename DispatchT>
void translate_keydown_cut_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.cut();
}

template <typename DispatchT>
void translate_keydown_copy_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.copy();
}

template <typename DispatchT>
void translate_keydown_paste_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.paste();
}

template <typename DispatchT>
void translate_keydown_find_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.find();
}

template <typename DispatchT>
void translate_keydown_mute_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.mute();
}

template <typename DispatchT>
void translate_keydown_volumeup_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.volumeup();
}

template <typename DispatchT>
void translate_keydown_volumedown_nonrepeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.volumedown();
}

template <typename DispatchT>
void translate_keydown_kp_comma_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_comma();
}

template <typename DispatchT>
void translate_keydown_kp_equalsas400_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_equalsas400();
}

template <typename DispatchT>
void translate_keydown_alterase_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.alterase();
}

template <typename DispatchT>
void translate_keydown_sysreq_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.sysreq();
}

template <typename DispatchT>
void translate_keydown_cancel_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.cancel();
}

template <typename DispatchT>
void translate_keydown_clear_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.clear();
}

template <typename DispatchT>
void translate_keydown_prior_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.prior();
}

template <typename DispatchT>
void translate_keydown_return2_nonrepeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.return2();
}

template <typename DispatchT>
void translate_keydown_separator_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.separator();
}

template <typename DispatchT>
void translate_keydown_out_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.out();
}

template <typename DispatchT>
void translate_keydown_oper_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.oper();
}

template <typename DispatchT>
void translate_keydown_clearagain_nonrepeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.clearagain();
}

template <typename DispatchT>
void translate_keydown_crsel_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.crsel();
}

template <typename DispatchT>
void translate_keydown_exsel_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.exsel();
}

template <typename DispatchT>
void translate_keydown_kp_00_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_00();
}

template <typename DispatchT>
void translate_keydown_kp_000_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_000();
}

template <typename DispatchT>
void translate_keydown_thousandsseparator_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.thousandsseparator();
}

template <typename DispatchT>
void translate_keydown_decimalseparator_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.decimalseparator();
}

template <typename DispatchT>
void translate_keydown_currencyunit_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.currencyunit();
}

template <typename DispatchT>
void translate_keydown_currencysubunit_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.currencysubunit();
}

template <typename DispatchT>
void translate_keydown_kp_leftparen_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_leftparen();
}

template <typename DispatchT>
void translate_keydown_kp_rightparen_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_rightparen();
}

template <typename DispatchT>
void translate_keydown_kp_leftbrace_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_leftbrace();
}

template <typename DispatchT>
void translate_keydown_kp_rightbrace_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_rightbrace();
}

template <typename DispatchT>
void translate_keydown_kp_tab_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_tab();
}

template <typename DispatchT>
void translate_keydown_kp_backspace_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_backspace();
}

template <typename DispatchT>
void translate_keydown_kp_a_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_a();
}

template <typename DispatchT>
void translate_keydown_kp_b_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_b();
}

template <typename DispatchT>
void translate_keydown_kp_c_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_c();
}

template <typename DispatchT>
void translate_keydown_kp_d_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_d();
}

template <typename DispatchT>
void translate_keydown_kp_e_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_e();
}

template <typename DispatchT>
void translate_keydown_kp_f_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_f();
}

template <typename DispatchT>
void translate_keydown_kp_xor_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_xor();
}

template <typename DispatchT>
void translate_keydown_kp_power_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_power();
}

template <typename DispatchT>
void translate_keydown_kp_percent_nonrepeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_percent();
}

template <typename DispatchT>
void translate_keydown_kp_less_nonrepeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_less();
}

template <typename DispatchT>
void translate_keydown_kp_greater_nonrepeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_greater();
}

template <typename DispatchT>
void translate_keydown_kp_ampersand_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_ampersand();
}

template <typename DispatchT>
void translate_keydown_kp_dblampersand_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_dblampersand();
}

template <typename DispatchT>
void translate_keydown_kp_verticalbar_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_verticalbar();
}

template <typename DispatchT>
void translate_keydown_kp_dblverticalbar_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_dblverticalbar();
}

template <typename DispatchT>
void translate_keydown_kp_colon_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_colon();
}

template <typename DispatchT>
void translate_keydown_kp_hash_nonrepeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_hash();
}

template <typename DispatchT>
void translate_keydown_kp_space_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_space();
}

template <typename DispatchT>
void translate_keydown_kp_at_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_at();
}

template <typename DispatchT>
void translate_keydown_kp_exclam_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_exclam();
}

template <typename DispatchT>
void translate_keydown_kp_memstore_nonrepeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_memstore();
}

template <typename DispatchT>
void translate_keydown_kp_memrecall_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_memrecall();
}

template <typename DispatchT>
void translate_keydown_kp_memclear_nonrepeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_memclear();
}

template <typename DispatchT>
void translate_keydown_kp_memadd_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_memadd();
}

template <typename DispatchT>
void translate_keydown_kp_memsubtract_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_memsubtract();
}

template <typename DispatchT>
void translate_keydown_kp_memmultiply_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_memmultiply();
}

template <typename DispatchT>
void translate_keydown_kp_memdivide_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_memdivide();
}

template <typename DispatchT>
void translate_keydown_kp_plusminus_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_plusminus();
}

template <typename DispatchT>
void translate_keydown_kp_clear_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_clear();
}

template <typename DispatchT>
void translate_keydown_kp_clearentry_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_clearentry();
}

template <typename DispatchT>
void translate_keydown_kp_binary_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_binary();
}

template <typename DispatchT>
void translate_keydown_kp_octal_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_octal();
}

template <typename DispatchT>
void translate_keydown_kp_decimal_nonrepeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_decimal();
}

template <typename DispatchT>
void translate_keydown_kp_hexadecimal_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kp_hexadecimal();
}

template <typename DispatchT>
void translate_keydown_lctrl_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.lctrl();
}

template <typename DispatchT>
void translate_keydown_lshift_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.lshift();
}

template <typename DispatchT>
void translate_keydown_lalt_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.lalt();
}

template <typename DispatchT>
void translate_keydown_lgui_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.lgui();
}

template <typename DispatchT>
void translate_keydown_rctrl_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.rctrl();
}

template <typename DispatchT>
void translate_keydown_rshift_nonrepeat_event(SDL_Event const&,
                                              DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.rshift();
}

template <typename DispatchT>
void translate_keydown_ralt_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.ralt();
}

template <typename DispatchT>
void translate_keydown_rgui_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.rgui();
}

template <typename DispatchT>
void translate_keydown_mode_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.mode();
}

template <typename DispatchT>
void translate_keydown_audionext_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.audionext();
}

template <typename DispatchT>
void translate_keydown_audioprev_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.audioprev();
}

template <typename DispatchT>
void translate_keydown_audiostop_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.audiostop();
}

template <typename DispatchT>
void translate_keydown_audioplay_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.audioplay();
}

template <typename DispatchT>
void translate_keydown_audiomute_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.audiomute();
}

template <typename DispatchT>
void translate_keydown_mediaselect_nonrepeat_event(SDL_Event const&,
                                                   DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.mediaselect();
}

template <typename DispatchT>
void translate_keydown_www_nonrepeat_event(SDL_Event const&,
                                           DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.www();
}

template <typename DispatchT>
void translate_keydown_mail_nonrepeat_event(SDL_Event const&,
                                            DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.mail();
}

template <typename DispatchT>
void translate_keydown_calculator_nonrepeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.calculator();
}

template <typename DispatchT>
void translate_keydown_computer_nonrepeat_event(SDL_Event const&,
                                                DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.computer();
}

template <typename DispatchT>
void translate_keydown_ac_search_nonrepeat_event(SDL_Event const&,
                                                 DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.ac_search();
}

template <typename DispatchT>
void translate_keydown_ac_home_nonrepeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.ac_home();
}

template <typename DispatchT>
void translate_keydown_ac_back_nonrepeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.ac_back();
}

template <typename DispatchT>
void translate_keydown_ac_forward_nonrepeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.ac_forward();
}

template <typename DispatchT>
void translate_keydown_ac_stop_nonrepeat_event(SDL_Event const&,
                                               DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.ac_stop();
}

template <typename DispatchT>
void translate_keydown_ac_refresh_nonrepeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.ac_refresh();
}

template <typename DispatchT>
void translate_keydown_ac_bookmarks_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.ac_bookmarks();
}

template <typename DispatchT>
void translate_keydown_brightnessdown_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.brightnessdown();
}

template <typename DispatchT>
void translate_keydown_brightnessup_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.brightnessup();
}

template <typename DispatchT>
void translate_keydown_displayswitch_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.displayswitch();
}

template <typename DispatchT>
void translate_keydown_kbdillumtoggle_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kbdillumtoggle();
}

template <typename DispatchT>
void translate_keydown_kbdillumdown_nonrepeat_event(
  SDL_Event const&, DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kbdillumdown();
}

template <typename DispatchT>
void translate_keydown_kbdillumup_nonrepeat_event(SDL_Event const&,
                                                  DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.kbdillumup();
}

template <typename DispatchT>
void translate_keydown_eject_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.eject();
}

template <typename DispatchT>
void translate_keydown_sleep_nonrepeat_event(SDL_Event const&,
                                             DispatchT const* dispatch) {
  dispatch->keydown.nonrepeat.sleep();
}

template <typename DispatchT>
void translate_keydown_nonrepeat_event(SDL_Event const& e,
                                       DispatchT const* dispatch) {
  if(e.key.keysym.sym == SDLK_UNKNOWN)
    translate_keydown_unknown_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BACKSPACE)
    translate_keydown_backspace_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_TAB)
    translate_keydown_tab_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RETURN)
    translate_keydown_return_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_ESCAPE)
    translate_keydown_escape_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SPACE)
    translate_keydown_space_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EXCLAIM)
    translate_keydown_exclaim_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_QUOTEDBL)
    translate_keydown_quotedbl_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_HASH)
    translate_keydown_hash_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DOLLAR)
    translate_keydown_dollar_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PERCENT)
    translate_keydown_percent_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AMPERSAND)
    translate_keydown_ampersand_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_QUOTE)
    translate_keydown_quote_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LEFTPAREN)
    translate_keydown_leftparen_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RIGHTPAREN)
    translate_keydown_rightparen_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_ASTERISK)
    translate_keydown_asterisk_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PLUS)
    translate_keydown_plus_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COMMA)
    translate_keydown_comma_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MINUS)
    translate_keydown_minus_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PERIOD)
    translate_keydown_period_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SLASH)
    translate_keydown_slash_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_0)
    translate_keydown_zero_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_1)
    translate_keydown_one_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_2)
    translate_keydown_two_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_3)
    translate_keydown_three_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_4)
    translate_keydown_four_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_5)
    translate_keydown_five_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_6)
    translate_keydown_six_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_7)
    translate_keydown_seven_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_8)
    translate_keydown_eight_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_9)
    translate_keydown_nine_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COLON)
    translate_keydown_colon_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SEMICOLON)
    translate_keydown_semicolon_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LESS)
    translate_keydown_less_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EQUALS)
    translate_keydown_equals_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_GREATER)
    translate_keydown_greater_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_QUESTION)
    translate_keydown_question_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AT)
    translate_keydown_at_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LEFTBRACKET)
    translate_keydown_leftbracket_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BACKSLASH)
    translate_keydown_backslash_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RIGHTBRACKET)
    translate_keydown_rightbracket_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CARET)
    translate_keydown_caret_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_UNDERSCORE)
    translate_keydown_underscore_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BACKQUOTE)
    translate_keydown_backquote_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_a)
    translate_keydown_a_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_b)
    translate_keydown_b_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_c)
    translate_keydown_c_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_d)
    translate_keydown_d_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_e)
    translate_keydown_e_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_f)
    translate_keydown_f_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_g)
    translate_keydown_g_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_h)
    translate_keydown_h_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_i)
    translate_keydown_i_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_j)
    translate_keydown_j_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_k)
    translate_keydown_k_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_l)
    translate_keydown_l_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_m)
    translate_keydown_m_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_n)
    translate_keydown_n_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_o)
    translate_keydown_o_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_p)
    translate_keydown_p_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_q)
    translate_keydown_q_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_r)
    translate_keydown_r_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_s)
    translate_keydown_s_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_t)
    translate_keydown_t_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_u)
    translate_keydown_u_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_v)
    translate_keydown_v_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_w)
    translate_keydown_w_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_x)
    translate_keydown_x_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_y)
    translate_keydown_y_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_z)
    translate_keydown_z_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DELETE)
    translate_keydown_delete_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CAPSLOCK)
    translate_keydown_capslock_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F1)
    translate_keydown_f1_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F2)
    translate_keydown_f2_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F3)
    translate_keydown_f3_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F4)
    translate_keydown_f4_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F5)
    translate_keydown_f5_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F6)
    translate_keydown_f6_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F7)
    translate_keydown_f7_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F8)
    translate_keydown_f8_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F9)
    translate_keydown_f9_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F10)
    translate_keydown_f10_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F11)
    translate_keydown_f11_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F12)
    translate_keydown_f12_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PRINTSCREEN)
    translate_keydown_printscreen_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SCROLLLOCK)
    translate_keydown_scrolllock_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PAUSE)
    translate_keydown_pause_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_INSERT)
    translate_keydown_insert_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_HOME)
    translate_keydown_home_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PAGEUP)
    translate_keydown_pageup_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_END)
    translate_keydown_end_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PAGEDOWN)
    translate_keydown_pagedown_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RIGHT)
    translate_keydown_right_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LEFT)
    translate_keydown_left_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DOWN)
    translate_keydown_down_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_UP)
    translate_keydown_up_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_NUMLOCKCLEAR)
    translate_keydown_numlockclear_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DIVIDE)
    translate_keydown_kp_divide_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MULTIPLY)
    translate_keydown_kp_multiply_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MINUS)
    translate_keydown_kp_minus_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PLUS)
    translate_keydown_kp_plus_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_ENTER)
    translate_keydown_kp_enter_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_1)
    translate_keydown_kp_1_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_2)
    translate_keydown_kp_2_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_3)
    translate_keydown_kp_3_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_4)
    translate_keydown_kp_4_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_5)
    translate_keydown_kp_5_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_6)
    translate_keydown_kp_6_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_7)
    translate_keydown_kp_7_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_8)
    translate_keydown_kp_8_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_9)
    translate_keydown_kp_9_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_0)
    translate_keydown_kp_0_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PERIOD)
    translate_keydown_kp_period_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_APPLICATION)
    translate_keydown_application_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_POWER)
    translate_keydown_power_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_EQUALS)
    translate_keydown_kp_equals_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F13)
    translate_keydown_f13_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F14)
    translate_keydown_f14_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F15)
    translate_keydown_f15_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F16)
    translate_keydown_f16_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F17)
    translate_keydown_f17_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F18)
    translate_keydown_f18_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F19)
    translate_keydown_f19_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F20)
    translate_keydown_f20_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F21)
    translate_keydown_f21_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F22)
    translate_keydown_f22_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F23)
    translate_keydown_f23_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_F24)
    translate_keydown_f24_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EXECUTE)
    translate_keydown_execute_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_HELP)
    translate_keydown_help_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MENU)
    translate_keydown_menu_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SELECT)
    translate_keydown_select_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_STOP)
    translate_keydown_stop_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AGAIN)
    translate_keydown_again_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_UNDO)
    translate_keydown_undo_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CUT)
    translate_keydown_cut_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COPY)
    translate_keydown_copy_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PASTE)
    translate_keydown_paste_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_FIND)
    translate_keydown_find_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MUTE)
    translate_keydown_mute_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_VOLUMEUP)
    translate_keydown_volumeup_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_VOLUMEDOWN)
    translate_keydown_volumedown_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_COMMA)
    translate_keydown_kp_comma_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_EQUALSAS400)
    translate_keydown_kp_equalsas400_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_ALTERASE)
    translate_keydown_alterase_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SYSREQ)
    translate_keydown_sysreq_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CANCEL)
    translate_keydown_cancel_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CLEAR)
    translate_keydown_clear_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_PRIOR)
    translate_keydown_prior_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RETURN2)
    translate_keydown_return2_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_SEPARATOR)
    translate_keydown_separator_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_OUT)
    translate_keydown_out_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_OPER)
    translate_keydown_oper_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CLEARAGAIN)
    translate_keydown_clearagain_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CRSEL)
    translate_keydown_crsel_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EXSEL)
    translate_keydown_exsel_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_00)
    translate_keydown_kp_00_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_000)
    translate_keydown_kp_000_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_THOUSANDSSEPARATOR)
    translate_keydown_thousandsseparator_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DECIMALSEPARATOR)
    translate_keydown_decimalseparator_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CURRENCYUNIT)
    translate_keydown_currencyunit_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CURRENCYSUBUNIT)
    translate_keydown_currencysubunit_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_LEFTPAREN)
    translate_keydown_kp_leftparen_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_RIGHTPAREN)
    translate_keydown_kp_rightparen_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_LEFTBRACE)
    translate_keydown_kp_leftbrace_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_RIGHTBRACE)
    translate_keydown_kp_rightbrace_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_TAB)
    translate_keydown_kp_tab_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_BACKSPACE)
    translate_keydown_kp_backspace_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_A)
    translate_keydown_kp_a_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_B)
    translate_keydown_kp_b_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_C)
    translate_keydown_kp_c_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_D)
    translate_keydown_kp_d_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_E)
    translate_keydown_kp_e_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_F)
    translate_keydown_kp_f_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_XOR)
    translate_keydown_kp_xor_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_POWER)
    translate_keydown_kp_power_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PERCENT)
    translate_keydown_kp_percent_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_LESS)
    translate_keydown_kp_less_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_GREATER)
    translate_keydown_kp_greater_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_AMPERSAND)
    translate_keydown_kp_ampersand_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DBLAMPERSAND)
    translate_keydown_kp_dblampersand_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_VERTICALBAR)
    translate_keydown_kp_verticalbar_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DBLVERTICALBAR)
    translate_keydown_kp_dblverticalbar_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_COLON)
    translate_keydown_kp_colon_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_HASH)
    translate_keydown_kp_hash_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_SPACE)
    translate_keydown_kp_space_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_AT)
    translate_keydown_kp_at_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_EXCLAM)
    translate_keydown_kp_exclam_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMSTORE)
    translate_keydown_kp_memstore_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMRECALL)
    translate_keydown_kp_memrecall_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMCLEAR)
    translate_keydown_kp_memclear_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMADD)
    translate_keydown_kp_memadd_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMSUBTRACT)
    translate_keydown_kp_memsubtract_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMMULTIPLY)
    translate_keydown_kp_memmultiply_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_MEMDIVIDE)
    translate_keydown_kp_memdivide_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_PLUSMINUS)
    translate_keydown_kp_plusminus_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_CLEAR)
    translate_keydown_kp_clear_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_CLEARENTRY)
    translate_keydown_kp_clearentry_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_BINARY)
    translate_keydown_kp_binary_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_OCTAL)
    translate_keydown_kp_octal_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_DECIMAL)
    translate_keydown_kp_decimal_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KP_HEXADECIMAL)
    translate_keydown_kp_hexadecimal_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LCTRL)
    translate_keydown_lctrl_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LSHIFT)
    translate_keydown_lshift_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LALT)
    translate_keydown_lalt_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_LGUI)
    translate_keydown_lgui_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RCTRL)
    translate_keydown_rctrl_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RSHIFT)
    translate_keydown_rshift_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RALT)
    translate_keydown_ralt_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_RGUI)
    translate_keydown_rgui_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MODE)
    translate_keydown_mode_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIONEXT)
    translate_keydown_audionext_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOPREV)
    translate_keydown_audioprev_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOSTOP)
    translate_keydown_audiostop_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOPLAY)
    translate_keydown_audioplay_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AUDIOMUTE)
    translate_keydown_audiomute_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MEDIASELECT)
    translate_keydown_mediaselect_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_WWW)
    translate_keydown_www_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_MAIL)
    translate_keydown_mail_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_CALCULATOR)
    translate_keydown_calculator_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_COMPUTER)
    translate_keydown_computer_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_SEARCH)
    translate_keydown_ac_search_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_HOME)
    translate_keydown_ac_home_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_BACK)
    translate_keydown_ac_back_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_FORWARD)
    translate_keydown_ac_forward_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_STOP)
    translate_keydown_ac_stop_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_REFRESH)
    translate_keydown_ac_refresh_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_AC_BOOKMARKS)
    translate_keydown_ac_bookmarks_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BRIGHTNESSDOWN)
    translate_keydown_brightnessdown_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_BRIGHTNESSUP)
    translate_keydown_brightnessup_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_DISPLAYSWITCH)
    translate_keydown_displayswitch_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KBDILLUMTOGGLE)
    translate_keydown_kbdillumtoggle_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KBDILLUMDOWN)
    translate_keydown_kbdillumdown_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_KBDILLUMUP)
    translate_keydown_kbdillumup_nonrepeat_event(e, dispatch);
  else if(e.key.keysym.sym == SDLK_EJECT)
    translate_keydown_eject_nonrepeat_event(e, dispatch);
}
}
}

#endif
