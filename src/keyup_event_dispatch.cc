#include "keyup_event_dispatch.hh"
#include <SDL2/SDL.h>

namespace gls {
void keyup_event_dispatch::unknown() const { unknown_signal(); }

connection keyup_event_dispatch::on_unknown(unknown_slot_t const& op) {
  return unknown_signal.connect(op);
}

void keyup_event_dispatch::backspace() const { backspace_signal(); }

connection keyup_event_dispatch::on_backspace(backspace_slot_t const& op) {
  return backspace_signal.connect(op);
}

void keyup_event_dispatch::tab() const { tab_signal(); }

connection keyup_event_dispatch::on_tab(tab_slot_t const& op) {
  return tab_signal.connect(op);
}

void keyup_event_dispatch::returnkey() const { returnkey_signal(); }

connection keyup_event_dispatch::on_return(returnkey_slot_t const& op) {
  return returnkey_signal.connect(op);
}

void keyup_event_dispatch::escape() const { escape_signal(); }

connection keyup_event_dispatch::on_escape(escape_slot_t const& op) {
  return escape_signal.connect(op);
}

void keyup_event_dispatch::space() const { space_signal(); }

connection keyup_event_dispatch::on_space(space_slot_t const& op) {
  return space_signal.connect(op);
}

void keyup_event_dispatch::exclaim() const { exclaim_signal(); }

connection keyup_event_dispatch::on_exclaim(exclaim_slot_t const& op) {
  return exclaim_signal.connect(op);
}

void keyup_event_dispatch::quotedbl() const { quotedbl_signal(); }

connection keyup_event_dispatch::on_quotedbl(quotedbl_slot_t const& op) {
  return quotedbl_signal.connect(op);
}

void keyup_event_dispatch::hash() const { hash_signal(); }

connection keyup_event_dispatch::on_hash(hash_slot_t const& op) {
  return hash_signal.connect(op);
}

void keyup_event_dispatch::dollar() const { dollar_signal(); }

connection keyup_event_dispatch::on_dollar(dollar_slot_t const& op) {
  return dollar_signal.connect(op);
}

void keyup_event_dispatch::percent() const { percent_signal(); }

connection keyup_event_dispatch::on_percent(percent_slot_t const& op) {
  return percent_signal.connect(op);
}

void keyup_event_dispatch::ampersand() const { ampersand_signal(); }

connection keyup_event_dispatch::on_ampersand(ampersand_slot_t const& op) {
  return ampersand_signal.connect(op);
}

void keyup_event_dispatch::quote() const { quote_signal(); }

connection keyup_event_dispatch::on_quote(quote_slot_t const& op) {
  return quote_signal.connect(op);
}

void keyup_event_dispatch::leftparen() const { leftparen_signal(); }

connection keyup_event_dispatch::on_leftparen(leftparen_slot_t const& op) {
  return leftparen_signal.connect(op);
}

void keyup_event_dispatch::rightparen() const { rightparen_signal(); }

connection keyup_event_dispatch::on_rightparen(rightparen_slot_t const& op) {
  return rightparen_signal.connect(op);
}

void keyup_event_dispatch::asterisk() const { asterisk_signal(); }

connection keyup_event_dispatch::on_asterisk(asterisk_slot_t const& op) {
  return asterisk_signal.connect(op);
}

void keyup_event_dispatch::plus() const { plus_signal(); }

connection keyup_event_dispatch::on_plus(plus_slot_t const& op) {
  return plus_signal.connect(op);
}

void keyup_event_dispatch::comma() const { comma_signal(); }

connection keyup_event_dispatch::on_comma(comma_slot_t const& op) {
  return comma_signal.connect(op);
}

void keyup_event_dispatch::minus() const { minus_signal(); }

connection keyup_event_dispatch::on_minus(minus_slot_t const& op) {
  return minus_signal.connect(op);
}

void keyup_event_dispatch::period() const { period_signal(); }

connection keyup_event_dispatch::on_period(period_slot_t const& op) {
  return period_signal.connect(op);
}

void keyup_event_dispatch::slash() const { slash_signal(); }

connection keyup_event_dispatch::on_slash(slash_slot_t const& op) {
  return slash_signal.connect(op);
}

void keyup_event_dispatch::zero() const { zero_signal(); }

connection keyup_event_dispatch::on_zero(zero_slot_t const& op) {
  return zero_signal.connect(op);
}

void keyup_event_dispatch::one() const { one_signal(); }

connection keyup_event_dispatch::on_one(one_slot_t const& op) {
  return one_signal.connect(op);
}

void keyup_event_dispatch::two() const { two_signal(); }

connection keyup_event_dispatch::on_two(two_slot_t const& op) {
  return two_signal.connect(op);
}

void keyup_event_dispatch::three() const { three_signal(); }

connection keyup_event_dispatch::on_three(three_slot_t const& op) {
  return three_signal.connect(op);
}

void keyup_event_dispatch::four() const { four_signal(); }

connection keyup_event_dispatch::on_four(four_slot_t const& op) {
  return four_signal.connect(op);
}

void keyup_event_dispatch::five() const { five_signal(); }

connection keyup_event_dispatch::on_five(five_slot_t const& op) {
  return five_signal.connect(op);
}

void keyup_event_dispatch::six() const { six_signal(); }

connection keyup_event_dispatch::on_six(six_slot_t const& op) {
  return six_signal.connect(op);
}

void keyup_event_dispatch::seven() const { seven_signal(); }

connection keyup_event_dispatch::on_seven(seven_slot_t const& op) {
  return seven_signal.connect(op);
}

void keyup_event_dispatch::eight() const { eight_signal(); }

connection keyup_event_dispatch::on_eight(eight_slot_t const& op) {
  return eight_signal.connect(op);
}

void keyup_event_dispatch::nine() const { nine_signal(); }

connection keyup_event_dispatch::on_nine(nine_slot_t const& op) {
  return nine_signal.connect(op);
}

void keyup_event_dispatch::colon() const { colon_signal(); }

connection keyup_event_dispatch::on_colon(colon_slot_t const& op) {
  return colon_signal.connect(op);
}

void keyup_event_dispatch::semicolon() const { semicolon_signal(); }

connection keyup_event_dispatch::on_semicolon(semicolon_slot_t const& op) {
  return semicolon_signal.connect(op);
}

void keyup_event_dispatch::less() const { less_signal(); }

connection keyup_event_dispatch::on_less(less_slot_t const& op) {
  return less_signal.connect(op);
}

void keyup_event_dispatch::equals() const { equals_signal(); }

connection keyup_event_dispatch::on_equals(equals_slot_t const& op) {
  return equals_signal.connect(op);
}

void keyup_event_dispatch::greater() const { greater_signal(); }

connection keyup_event_dispatch::on_greater(greater_slot_t const& op) {
  return greater_signal.connect(op);
}

void keyup_event_dispatch::question() const { question_signal(); }

connection keyup_event_dispatch::on_question(question_slot_t const& op) {
  return question_signal.connect(op);
}

void keyup_event_dispatch::at() const { at_signal(); }

connection keyup_event_dispatch::on_at(at_slot_t const& op) {
  return at_signal.connect(op);
}

void keyup_event_dispatch::leftbracket() const { leftbracket_signal(); }

connection keyup_event_dispatch::on_leftbracket(leftbracket_slot_t const& op) {
  return leftbracket_signal.connect(op);
}

void keyup_event_dispatch::backslash() const { backslash_signal(); }

connection keyup_event_dispatch::on_backslash(backslash_slot_t const& op) {
  return backslash_signal.connect(op);
}

void keyup_event_dispatch::rightbracket() const { rightbracket_signal(); }

connection keyup_event_dispatch::on_rightbracket(
  rightbracket_slot_t const& op) {
  return rightbracket_signal.connect(op);
}

void keyup_event_dispatch::caret() const { caret_signal(); }

connection keyup_event_dispatch::on_caret(caret_slot_t const& op) {
  return caret_signal.connect(op);
}

void keyup_event_dispatch::underscore() const { underscore_signal(); }

connection keyup_event_dispatch::on_underscore(underscore_slot_t const& op) {
  return underscore_signal.connect(op);
}

void keyup_event_dispatch::backquote() const { backquote_signal(); }

connection keyup_event_dispatch::on_backquote(backquote_slot_t const& op) {
  return backquote_signal.connect(op);
}

void keyup_event_dispatch::a() const { a_signal(); }

connection keyup_event_dispatch::on_a(a_slot_t const& op) {
  return a_signal.connect(op);
}

void keyup_event_dispatch::b() const { b_signal(); }

connection keyup_event_dispatch::on_b(b_slot_t const& op) {
  return b_signal.connect(op);
}

void keyup_event_dispatch::c() const { c_signal(); }

connection keyup_event_dispatch::on_c(c_slot_t const& op) {
  return c_signal.connect(op);
}

void keyup_event_dispatch::d() const { d_signal(); }

connection keyup_event_dispatch::on_d(d_slot_t const& op) {
  return d_signal.connect(op);
}

void keyup_event_dispatch::e() const { e_signal(); }

connection keyup_event_dispatch::on_e(e_slot_t const& op) {
  return e_signal.connect(op);
}

void keyup_event_dispatch::f() const { f_signal(); }

connection keyup_event_dispatch::on_f(f_slot_t const& op) {
  return f_signal.connect(op);
}

void keyup_event_dispatch::g() const { g_signal(); }

connection keyup_event_dispatch::on_g(g_slot_t const& op) {
  return g_signal.connect(op);
}

void keyup_event_dispatch::h() const { h_signal(); }

connection keyup_event_dispatch::on_h(h_slot_t const& op) {
  return h_signal.connect(op);
}

void keyup_event_dispatch::i() const { i_signal(); }

connection keyup_event_dispatch::on_i(i_slot_t const& op) {
  return i_signal.connect(op);
}

void keyup_event_dispatch::j() const { j_signal(); }

connection keyup_event_dispatch::on_j(j_slot_t const& op) {
  return j_signal.connect(op);
}

void keyup_event_dispatch::k() const { k_signal(); }

connection keyup_event_dispatch::on_k(k_slot_t const& op) {
  return k_signal.connect(op);
}

void keyup_event_dispatch::l() const { l_signal(); }

connection keyup_event_dispatch::on_l(l_slot_t const& op) {
  return l_signal.connect(op);
}

void keyup_event_dispatch::m() const { m_signal(); }

connection keyup_event_dispatch::on_m(m_slot_t const& op) {
  return m_signal.connect(op);
}

void keyup_event_dispatch::n() const { n_signal(); }

connection keyup_event_dispatch::on_n(n_slot_t const& op) {
  return n_signal.connect(op);
}

void keyup_event_dispatch::o() const { o_signal(); }

connection keyup_event_dispatch::on_o(o_slot_t const& op) {
  return o_signal.connect(op);
}

void keyup_event_dispatch::p() const { p_signal(); }

connection keyup_event_dispatch::on_p(p_slot_t const& op) {
  return p_signal.connect(op);
}

void keyup_event_dispatch::q() const { q_signal(); }

connection keyup_event_dispatch::on_q(q_slot_t const& op) {
  return q_signal.connect(op);
}

void keyup_event_dispatch::r() const { r_signal(); }

connection keyup_event_dispatch::on_r(r_slot_t const& op) {
  return r_signal.connect(op);
}

void keyup_event_dispatch::s() const { s_signal(); }

connection keyup_event_dispatch::on_s(s_slot_t const& op) {
  return s_signal.connect(op);
}

void keyup_event_dispatch::t() const { t_signal(); }

connection keyup_event_dispatch::on_t(t_slot_t const& op) {
  return t_signal.connect(op);
}

void keyup_event_dispatch::u() const { u_signal(); }

connection keyup_event_dispatch::on_u(u_slot_t const& op) {
  return u_signal.connect(op);
}

void keyup_event_dispatch::v() const { v_signal(); }

connection keyup_event_dispatch::on_v(v_slot_t const& op) {
  return v_signal.connect(op);
}

void keyup_event_dispatch::w() const { w_signal(); }

connection keyup_event_dispatch::on_w(w_slot_t const& op) {
  return w_signal.connect(op);
}

void keyup_event_dispatch::x() const { x_signal(); }

connection keyup_event_dispatch::on_x(x_slot_t const& op) {
  return x_signal.connect(op);
}

void keyup_event_dispatch::y() const { y_signal(); }

connection keyup_event_dispatch::on_y(y_slot_t const& op) {
  return y_signal.connect(op);
}

void keyup_event_dispatch::z() const { z_signal(); }

connection keyup_event_dispatch::on_z(z_slot_t const& op) {
  return z_signal.connect(op);
}

void keyup_event_dispatch::deletekey() const { deletekey_signal(); }

connection keyup_event_dispatch::on_deletekey(deletekey_slot_t const& op) {
  return deletekey_signal.connect(op);
}

void keyup_event_dispatch::capslock() const { capslock_signal(); }

connection keyup_event_dispatch::on_capslock(capslock_slot_t const& op) {
  return capslock_signal.connect(op);
}

void keyup_event_dispatch::f1() const { f1_signal(); }

connection keyup_event_dispatch::on_f1(f1_slot_t const& op) {
  return f1_signal.connect(op);
}

void keyup_event_dispatch::f2() const { f2_signal(); }

connection keyup_event_dispatch::on_f2(f2_slot_t const& op) {
  return f2_signal.connect(op);
}

void keyup_event_dispatch::f3() const { f3_signal(); }

connection keyup_event_dispatch::on_f3(f3_slot_t const& op) {
  return f3_signal.connect(op);
}

void keyup_event_dispatch::f4() const { f4_signal(); }

connection keyup_event_dispatch::on_f4(f4_slot_t const& op) {
  return f4_signal.connect(op);
}

void keyup_event_dispatch::f5() const { f5_signal(); }

connection keyup_event_dispatch::on_f5(f5_slot_t const& op) {
  return f5_signal.connect(op);
}

void keyup_event_dispatch::f6() const { f6_signal(); }

connection keyup_event_dispatch::on_f6(f6_slot_t const& op) {
  return f6_signal.connect(op);
}

void keyup_event_dispatch::f7() const { f7_signal(); }

connection keyup_event_dispatch::on_f7(f7_slot_t const& op) {
  return f7_signal.connect(op);
}

void keyup_event_dispatch::f8() const { f8_signal(); }

connection keyup_event_dispatch::on_f8(f8_slot_t const& op) {
  return f8_signal.connect(op);
}

void keyup_event_dispatch::f9() const { f9_signal(); }

connection keyup_event_dispatch::on_f9(f9_slot_t const& op) {
  return f9_signal.connect(op);
}

void keyup_event_dispatch::f10() const { f10_signal(); }

connection keyup_event_dispatch::on_f10(f10_slot_t const& op) {
  return f10_signal.connect(op);
}

void keyup_event_dispatch::f11() const { f11_signal(); }

connection keyup_event_dispatch::on_f11(f11_slot_t const& op) {
  return f11_signal.connect(op);
}

void keyup_event_dispatch::f12() const { f12_signal(); }

connection keyup_event_dispatch::on_f12(f12_slot_t const& op) {
  return f12_signal.connect(op);
}

void keyup_event_dispatch::printscreen() const { printscreen_signal(); }

connection keyup_event_dispatch::on_printscreen(printscreen_slot_t const& op) {
  return printscreen_signal.connect(op);
}

void keyup_event_dispatch::scrolllock() const { scrolllock_signal(); }

connection keyup_event_dispatch::on_scrolllock(scrolllock_slot_t const& op) {
  return scrolllock_signal.connect(op);
}

void keyup_event_dispatch::pause() const { pause_signal(); }

connection keyup_event_dispatch::on_pause(pause_slot_t const& op) {
  return pause_signal.connect(op);
}

void keyup_event_dispatch::insert() const { insert_signal(); }

connection keyup_event_dispatch::on_insert(insert_slot_t const& op) {
  return insert_signal.connect(op);
}

void keyup_event_dispatch::home() const { home_signal(); }

connection keyup_event_dispatch::on_home(home_slot_t const& op) {
  return home_signal.connect(op);
}

void keyup_event_dispatch::pageup() const { pageup_signal(); }

connection keyup_event_dispatch::on_pageup(pageup_slot_t const& op) {
  return pageup_signal.connect(op);
}

void keyup_event_dispatch::end() const { end_signal(); }

connection keyup_event_dispatch::on_end(end_slot_t const& op) {
  return end_signal.connect(op);
}

void keyup_event_dispatch::pagedown() const { pagedown_signal(); }

connection keyup_event_dispatch::on_pagedown(pagedown_slot_t const& op) {
  return pagedown_signal.connect(op);
}

void keyup_event_dispatch::right() const { right_signal(); }

connection keyup_event_dispatch::on_right(right_slot_t const& op) {
  return right_signal.connect(op);
}

void keyup_event_dispatch::left() const { left_signal(); }

connection keyup_event_dispatch::on_left(left_slot_t const& op) {
  return left_signal.connect(op);
}

void keyup_event_dispatch::down() const { down_signal(); }

connection keyup_event_dispatch::on_down(down_slot_t const& op) {
  return down_signal.connect(op);
}

void keyup_event_dispatch::up() const { up_signal(); }

connection keyup_event_dispatch::on_up(up_slot_t const& op) {
  return up_signal.connect(op);
}

void keyup_event_dispatch::numlockclear() const { numlockclear_signal(); }

connection keyup_event_dispatch::on_numlockclear(
  numlockclear_slot_t const& op) {
  return numlockclear_signal.connect(op);
}

void keyup_event_dispatch::kp_divide() const { kp_divide_signal(); }

connection keyup_event_dispatch::on_kp_divide(kp_divide_slot_t const& op) {
  return kp_divide_signal.connect(op);
}

void keyup_event_dispatch::kp_multiply() const { kp_multiply_signal(); }

connection keyup_event_dispatch::on_kp_multiply(kp_multiply_slot_t const& op) {
  return kp_multiply_signal.connect(op);
}

void keyup_event_dispatch::kp_minus() const { kp_minus_signal(); }

connection keyup_event_dispatch::on_kp_minus(kp_minus_slot_t const& op) {
  return kp_minus_signal.connect(op);
}

void keyup_event_dispatch::kp_plus() const { kp_plus_signal(); }

connection keyup_event_dispatch::on_kp_plus(kp_plus_slot_t const& op) {
  return kp_plus_signal.connect(op);
}

void keyup_event_dispatch::kp_enter() const { kp_enter_signal(); }

connection keyup_event_dispatch::on_kp_enter(kp_enter_slot_t const& op) {
  return kp_enter_signal.connect(op);
}

void keyup_event_dispatch::kp_1() const { kp_1_signal(); }

connection keyup_event_dispatch::on_kp_1(kp_1_slot_t const& op) {
  return kp_1_signal.connect(op);
}

void keyup_event_dispatch::kp_2() const { kp_2_signal(); }

connection keyup_event_dispatch::on_kp_2(kp_2_slot_t const& op) {
  return kp_2_signal.connect(op);
}

void keyup_event_dispatch::kp_3() const { kp_3_signal(); }

connection keyup_event_dispatch::on_kp_3(kp_3_slot_t const& op) {
  return kp_3_signal.connect(op);
}

void keyup_event_dispatch::kp_4() const { kp_4_signal(); }

connection keyup_event_dispatch::on_kp_4(kp_4_slot_t const& op) {
  return kp_4_signal.connect(op);
}

void keyup_event_dispatch::kp_5() const { kp_5_signal(); }

connection keyup_event_dispatch::on_kp_5(kp_5_slot_t const& op) {
  return kp_5_signal.connect(op);
}

void keyup_event_dispatch::kp_6() const { kp_6_signal(); }

connection keyup_event_dispatch::on_kp_6(kp_6_slot_t const& op) {
  return kp_6_signal.connect(op);
}

void keyup_event_dispatch::kp_7() const { kp_7_signal(); }

connection keyup_event_dispatch::on_kp_7(kp_7_slot_t const& op) {
  return kp_7_signal.connect(op);
}

void keyup_event_dispatch::kp_8() const { kp_8_signal(); }

connection keyup_event_dispatch::on_kp_8(kp_8_slot_t const& op) {
  return kp_8_signal.connect(op);
}

void keyup_event_dispatch::kp_9() const { kp_9_signal(); }

connection keyup_event_dispatch::on_kp_9(kp_9_slot_t const& op) {
  return kp_9_signal.connect(op);
}

void keyup_event_dispatch::kp_0() const { kp_0_signal(); }

connection keyup_event_dispatch::on_kp_0(kp_0_slot_t const& op) {
  return kp_0_signal.connect(op);
}

void keyup_event_dispatch::kp_period() const { kp_period_signal(); }

connection keyup_event_dispatch::on_kp_period(kp_period_slot_t const& op) {
  return kp_period_signal.connect(op);
}

void keyup_event_dispatch::application() const { application_signal(); }

connection keyup_event_dispatch::on_application(application_slot_t const& op) {
  return application_signal.connect(op);
}

void keyup_event_dispatch::power() const { power_signal(); }

connection keyup_event_dispatch::on_power(power_slot_t const& op) {
  return power_signal.connect(op);
}

void keyup_event_dispatch::kp_equals() const { kp_equals_signal(); }

connection keyup_event_dispatch::on_kp_equals(kp_equals_slot_t const& op) {
  return kp_equals_signal.connect(op);
}

void keyup_event_dispatch::f13() const { f13_signal(); }

connection keyup_event_dispatch::on_f13(f13_slot_t const& op) {
  return f13_signal.connect(op);
}

void keyup_event_dispatch::f14() const { f14_signal(); }

connection keyup_event_dispatch::on_f14(f14_slot_t const& op) {
  return f14_signal.connect(op);
}

void keyup_event_dispatch::f15() const { f15_signal(); }

connection keyup_event_dispatch::on_f15(f15_slot_t const& op) {
  return f15_signal.connect(op);
}

void keyup_event_dispatch::f16() const { f16_signal(); }

connection keyup_event_dispatch::on_f16(f16_slot_t const& op) {
  return f16_signal.connect(op);
}

void keyup_event_dispatch::f17() const { f17_signal(); }

connection keyup_event_dispatch::on_f17(f17_slot_t const& op) {
  return f17_signal.connect(op);
}

void keyup_event_dispatch::f18() const { f18_signal(); }

connection keyup_event_dispatch::on_f18(f18_slot_t const& op) {
  return f18_signal.connect(op);
}

void keyup_event_dispatch::f19() const { f19_signal(); }

connection keyup_event_dispatch::on_f19(f19_slot_t const& op) {
  return f19_signal.connect(op);
}

void keyup_event_dispatch::f20() const { f20_signal(); }

connection keyup_event_dispatch::on_f20(f20_slot_t const& op) {
  return f20_signal.connect(op);
}

void keyup_event_dispatch::f21() const { f21_signal(); }

connection keyup_event_dispatch::on_f21(f21_slot_t const& op) {
  return f21_signal.connect(op);
}

void keyup_event_dispatch::f22() const { f22_signal(); }

connection keyup_event_dispatch::on_f22(f22_slot_t const& op) {
  return f22_signal.connect(op);
}

void keyup_event_dispatch::f23() const { f23_signal(); }

connection keyup_event_dispatch::on_f23(f23_slot_t const& op) {
  return f23_signal.connect(op);
}

void keyup_event_dispatch::f24() const { f24_signal(); }

connection keyup_event_dispatch::on_f24(f24_slot_t const& op) {
  return f24_signal.connect(op);
}

void keyup_event_dispatch::execute() const { execute_signal(); }

connection keyup_event_dispatch::on_execute(execute_slot_t const& op) {
  return execute_signal.connect(op);
}

void keyup_event_dispatch::help() const { help_signal(); }

connection keyup_event_dispatch::on_help(help_slot_t const& op) {
  return help_signal.connect(op);
}

void keyup_event_dispatch::menu() const { menu_signal(); }

connection keyup_event_dispatch::on_menu(menu_slot_t const& op) {
  return menu_signal.connect(op);
}

void keyup_event_dispatch::select() const { select_signal(); }

connection keyup_event_dispatch::on_select(select_slot_t const& op) {
  return select_signal.connect(op);
}

void keyup_event_dispatch::stop() const { stop_signal(); }

connection keyup_event_dispatch::on_stop(stop_slot_t const& op) {
  return stop_signal.connect(op);
}

void keyup_event_dispatch::again() const { again_signal(); }

connection keyup_event_dispatch::on_again(again_slot_t const& op) {
  return again_signal.connect(op);
}

void keyup_event_dispatch::undo() const { undo_signal(); }

connection keyup_event_dispatch::on_undo(undo_slot_t const& op) {
  return undo_signal.connect(op);
}

void keyup_event_dispatch::cut() const { cut_signal(); }

connection keyup_event_dispatch::on_cut(cut_slot_t const& op) {
  return cut_signal.connect(op);
}

void keyup_event_dispatch::copy() const { copy_signal(); }

connection keyup_event_dispatch::on_copy(copy_slot_t const& op) {
  return copy_signal.connect(op);
}

void keyup_event_dispatch::paste() const { paste_signal(); }

connection keyup_event_dispatch::on_paste(paste_slot_t const& op) {
  return paste_signal.connect(op);
}

void keyup_event_dispatch::find() const { find_signal(); }

connection keyup_event_dispatch::on_find(find_slot_t const& op) {
  return find_signal.connect(op);
}

void keyup_event_dispatch::mute() const { mute_signal(); }

connection keyup_event_dispatch::on_mute(mute_slot_t const& op) {
  return mute_signal.connect(op);
}

void keyup_event_dispatch::volumeup() const { volumeup_signal(); }

connection keyup_event_dispatch::on_volumeup(volumeup_slot_t const& op) {
  return volumeup_signal.connect(op);
}

void keyup_event_dispatch::volumedown() const { volumedown_signal(); }

connection keyup_event_dispatch::on_volumedown(volumedown_slot_t const& op) {
  return volumedown_signal.connect(op);
}

void keyup_event_dispatch::kp_comma() const { kp_comma_signal(); }

connection keyup_event_dispatch::on_kp_comma(kp_comma_slot_t const& op) {
  return kp_comma_signal.connect(op);
}

void keyup_event_dispatch::kp_equalsas400() const { kp_equalsas400_signal(); }

connection keyup_event_dispatch::on_kp_equalsas400(
  kp_equalsas400_slot_t const& op) {
  return kp_equalsas400_signal.connect(op);
}

void keyup_event_dispatch::alterase() const { alterase_signal(); }

connection keyup_event_dispatch::on_alterase(alterase_slot_t const& op) {
  return alterase_signal.connect(op);
}

void keyup_event_dispatch::sysreq() const { sysreq_signal(); }

connection keyup_event_dispatch::on_sysreq(sysreq_slot_t const& op) {
  return sysreq_signal.connect(op);
}

void keyup_event_dispatch::cancel() const { cancel_signal(); }

connection keyup_event_dispatch::on_cancel(cancel_slot_t const& op) {
  return cancel_signal.connect(op);
}

void keyup_event_dispatch::clear() const { clear_signal(); }

connection keyup_event_dispatch::on_clear(clear_slot_t const& op) {
  return clear_signal.connect(op);
}

void keyup_event_dispatch::prior() const { prior_signal(); }

connection keyup_event_dispatch::on_prior(prior_slot_t const& op) {
  return prior_signal.connect(op);
}

void keyup_event_dispatch::return2() const { return2_signal(); }

connection keyup_event_dispatch::on_return2(return2_slot_t const& op) {
  return return2_signal.connect(op);
}

void keyup_event_dispatch::separator() const { separator_signal(); }

connection keyup_event_dispatch::on_separator(separator_slot_t const& op) {
  return separator_signal.connect(op);
}

void keyup_event_dispatch::out() const { out_signal(); }

connection keyup_event_dispatch::on_out(out_slot_t const& op) {
  return out_signal.connect(op);
}

void keyup_event_dispatch::oper() const { oper_signal(); }

connection keyup_event_dispatch::on_oper(oper_slot_t const& op) {
  return oper_signal.connect(op);
}

void keyup_event_dispatch::clearagain() const { clearagain_signal(); }

connection keyup_event_dispatch::on_clearagain(clearagain_slot_t const& op) {
  return clearagain_signal.connect(op);
}

void keyup_event_dispatch::crsel() const { crsel_signal(); }

connection keyup_event_dispatch::on_crsel(crsel_slot_t const& op) {
  return crsel_signal.connect(op);
}

void keyup_event_dispatch::exsel() const { exsel_signal(); }

connection keyup_event_dispatch::on_exsel(exsel_slot_t const& op) {
  return exsel_signal.connect(op);
}

void keyup_event_dispatch::kp_00() const { kp_00_signal(); }

connection keyup_event_dispatch::on_kp_00(kp_00_slot_t const& op) {
  return kp_00_signal.connect(op);
}

void keyup_event_dispatch::kp_000() const { kp_000_signal(); }

connection keyup_event_dispatch::on_kp_000(kp_000_slot_t const& op) {
  return kp_000_signal.connect(op);
}

void keyup_event_dispatch::thousandsseparator() const {
  thousandsseparator_signal();
}

connection keyup_event_dispatch::on_thousandsseparator(
  thousandsseparator_slot_t const& op) {
  return thousandsseparator_signal.connect(op);
}

void keyup_event_dispatch::decimalseparator() const {
  decimalseparator_signal();
}

connection keyup_event_dispatch::on_decimalseparator(
  decimalseparator_slot_t const& op) {
  return decimalseparator_signal.connect(op);
}

void keyup_event_dispatch::currencyunit() const { currencyunit_signal(); }

connection keyup_event_dispatch::on_currencyunit(
  currencyunit_slot_t const& op) {
  return currencyunit_signal.connect(op);
}

void keyup_event_dispatch::currencysubunit() const {
  currencysubunit_signal();
}

connection keyup_event_dispatch::on_currencysubunit(
  currencysubunit_slot_t const& op) {
  return currencysubunit_signal.connect(op);
}

void keyup_event_dispatch::kp_leftparen() const { kp_leftparen_signal(); }

connection keyup_event_dispatch::on_kp_leftparen(
  kp_leftparen_slot_t const& op) {
  return kp_leftparen_signal.connect(op);
}

void keyup_event_dispatch::kp_rightparen() const { kp_rightparen_signal(); }

connection keyup_event_dispatch::on_kp_rightparen(
  kp_rightparen_slot_t const& op) {
  return kp_rightparen_signal.connect(op);
}

void keyup_event_dispatch::kp_leftbrace() const { kp_leftbrace_signal(); }

connection keyup_event_dispatch::on_kp_leftbrace(
  kp_leftbrace_slot_t const& op) {
  return kp_leftbrace_signal.connect(op);
}

void keyup_event_dispatch::kp_rightbrace() const { kp_rightbrace_signal(); }

connection keyup_event_dispatch::on_kp_rightbrace(
  kp_rightbrace_slot_t const& op) {
  return kp_rightbrace_signal.connect(op);
}

void keyup_event_dispatch::kp_tab() const { kp_tab_signal(); }

connection keyup_event_dispatch::on_kp_tab(kp_tab_slot_t const& op) {
  return kp_tab_signal.connect(op);
}

void keyup_event_dispatch::kp_backspace() const { kp_backspace_signal(); }

connection keyup_event_dispatch::on_kp_backspace(
  kp_backspace_slot_t const& op) {
  return kp_backspace_signal.connect(op);
}

void keyup_event_dispatch::kp_a() const { kp_a_signal(); }

connection keyup_event_dispatch::on_kp_a(kp_a_slot_t const& op) {
  return kp_a_signal.connect(op);
}

void keyup_event_dispatch::kp_b() const { kp_b_signal(); }

connection keyup_event_dispatch::on_kp_b(kp_b_slot_t const& op) {
  return kp_b_signal.connect(op);
}

void keyup_event_dispatch::kp_c() const { kp_c_signal(); }

connection keyup_event_dispatch::on_kp_c(kp_c_slot_t const& op) {
  return kp_c_signal.connect(op);
}

void keyup_event_dispatch::kp_d() const { kp_d_signal(); }

connection keyup_event_dispatch::on_kp_d(kp_d_slot_t const& op) {
  return kp_d_signal.connect(op);
}

void keyup_event_dispatch::kp_e() const { kp_e_signal(); }

connection keyup_event_dispatch::on_kp_e(kp_e_slot_t const& op) {
  return kp_e_signal.connect(op);
}

void keyup_event_dispatch::kp_f() const { kp_f_signal(); }

connection keyup_event_dispatch::on_kp_f(kp_f_slot_t const& op) {
  return kp_f_signal.connect(op);
}

void keyup_event_dispatch::kp_xor() const { kp_xor_signal(); }

connection keyup_event_dispatch::on_kp_xor(kp_xor_slot_t const& op) {
  return kp_xor_signal.connect(op);
}

void keyup_event_dispatch::kp_power() const { kp_power_signal(); }

connection keyup_event_dispatch::on_kp_power(kp_power_slot_t const& op) {
  return kp_power_signal.connect(op);
}

void keyup_event_dispatch::kp_percent() const { kp_percent_signal(); }

connection keyup_event_dispatch::on_kp_percent(kp_percent_slot_t const& op) {
  return kp_percent_signal.connect(op);
}

void keyup_event_dispatch::kp_less() const { kp_less_signal(); }

connection keyup_event_dispatch::on_kp_less(kp_less_slot_t const& op) {
  return kp_less_signal.connect(op);
}

void keyup_event_dispatch::kp_greater() const { kp_greater_signal(); }

connection keyup_event_dispatch::on_kp_greater(kp_greater_slot_t const& op) {
  return kp_greater_signal.connect(op);
}

void keyup_event_dispatch::kp_ampersand() const { kp_ampersand_signal(); }

connection keyup_event_dispatch::on_kp_ampersand(
  kp_ampersand_slot_t const& op) {
  return kp_ampersand_signal.connect(op);
}

void keyup_event_dispatch::kp_dblampersand() const {
  kp_dblampersand_signal();
}

connection keyup_event_dispatch::on_kp_dblampersand(
  kp_dblampersand_slot_t const& op) {
  return kp_dblampersand_signal.connect(op);
}

void keyup_event_dispatch::kp_verticalbar() const { kp_verticalbar_signal(); }

connection keyup_event_dispatch::on_kp_verticalbar(
  kp_verticalbar_slot_t const& op) {
  return kp_verticalbar_signal.connect(op);
}

void keyup_event_dispatch::kp_dblverticalbar() const {
  kp_dblverticalbar_signal();
}

connection keyup_event_dispatch::on_kp_dblverticalbar(
  kp_dblverticalbar_slot_t const& op) {
  return kp_dblverticalbar_signal.connect(op);
}

void keyup_event_dispatch::kp_colon() const { kp_colon_signal(); }

connection keyup_event_dispatch::on_kp_colon(kp_colon_slot_t const& op) {
  return kp_colon_signal.connect(op);
}

void keyup_event_dispatch::kp_hash() const { kp_hash_signal(); }

connection keyup_event_dispatch::on_kp_hash(kp_hash_slot_t const& op) {
  return kp_hash_signal.connect(op);
}

void keyup_event_dispatch::kp_space() const { kp_space_signal(); }

connection keyup_event_dispatch::on_kp_space(kp_space_slot_t const& op) {
  return kp_space_signal.connect(op);
}

void keyup_event_dispatch::kp_at() const { kp_at_signal(); }

connection keyup_event_dispatch::on_kp_at(kp_at_slot_t const& op) {
  return kp_at_signal.connect(op);
}

void keyup_event_dispatch::kp_exclam() const { kp_exclam_signal(); }

connection keyup_event_dispatch::on_kp_exclam(kp_exclam_slot_t const& op) {
  return kp_exclam_signal.connect(op);
}

void keyup_event_dispatch::kp_memstore() const { kp_memstore_signal(); }

connection keyup_event_dispatch::on_kp_memstore(kp_memstore_slot_t const& op) {
  return kp_memstore_signal.connect(op);
}

void keyup_event_dispatch::kp_memrecall() const { kp_memrecall_signal(); }

connection keyup_event_dispatch::on_kp_memrecall(
  kp_memrecall_slot_t const& op) {
  return kp_memrecall_signal.connect(op);
}

void keyup_event_dispatch::kp_memclear() const { kp_memclear_signal(); }

connection keyup_event_dispatch::on_kp_memclear(kp_memclear_slot_t const& op) {
  return kp_memclear_signal.connect(op);
}

void keyup_event_dispatch::kp_memadd() const { kp_memadd_signal(); }

connection keyup_event_dispatch::on_kp_memadd(kp_memadd_slot_t const& op) {
  return kp_memadd_signal.connect(op);
}

void keyup_event_dispatch::kp_memsubtract() const { kp_memsubtract_signal(); }

connection keyup_event_dispatch::on_kp_memsubtract(
  kp_memsubtract_slot_t const& op) {
  return kp_memsubtract_signal.connect(op);
}

void keyup_event_dispatch::kp_memmultiply() const { kp_memmultiply_signal(); }

connection keyup_event_dispatch::on_kp_memmultiply(
  kp_memmultiply_slot_t const& op) {
  return kp_memmultiply_signal.connect(op);
}

void keyup_event_dispatch::kp_memdivide() const { kp_memdivide_signal(); }

connection keyup_event_dispatch::on_kp_memdivide(
  kp_memdivide_slot_t const& op) {
  return kp_memdivide_signal.connect(op);
}

void keyup_event_dispatch::kp_plusminus() const { kp_plusminus_signal(); }

connection keyup_event_dispatch::on_kp_plusminus(
  kp_plusminus_slot_t const& op) {
  return kp_plusminus_signal.connect(op);
}

void keyup_event_dispatch::kp_clear() const { kp_clear_signal(); }

connection keyup_event_dispatch::on_kp_clear(kp_clear_slot_t const& op) {
  return kp_clear_signal.connect(op);
}

void keyup_event_dispatch::kp_clearentry() const { kp_clearentry_signal(); }

connection keyup_event_dispatch::on_kp_clearentry(
  kp_clearentry_slot_t const& op) {
  return kp_clearentry_signal.connect(op);
}

void keyup_event_dispatch::kp_binary() const { kp_binary_signal(); }

connection keyup_event_dispatch::on_kp_binary(kp_binary_slot_t const& op) {
  return kp_binary_signal.connect(op);
}

void keyup_event_dispatch::kp_octal() const { kp_octal_signal(); }

connection keyup_event_dispatch::on_kp_octal(kp_octal_slot_t const& op) {
  return kp_octal_signal.connect(op);
}

void keyup_event_dispatch::kp_decimal() const { kp_decimal_signal(); }

connection keyup_event_dispatch::on_kp_decimal(kp_decimal_slot_t const& op) {
  return kp_decimal_signal.connect(op);
}

void keyup_event_dispatch::kp_hexadecimal() const { kp_hexadecimal_signal(); }

connection keyup_event_dispatch::on_kp_hexadecimal(
  kp_hexadecimal_slot_t const& op) {
  return kp_hexadecimal_signal.connect(op);
}

void keyup_event_dispatch::lctrl() const { lctrl_signal(); }

connection keyup_event_dispatch::on_lctrl(lctrl_slot_t const& op) {
  return lctrl_signal.connect(op);
}

void keyup_event_dispatch::lshift() const { lshift_signal(); }

connection keyup_event_dispatch::on_lshift(lshift_slot_t const& op) {
  return lshift_signal.connect(op);
}

void keyup_event_dispatch::lalt() const { lalt_signal(); }

connection keyup_event_dispatch::on_lalt(lalt_slot_t const& op) {
  return lalt_signal.connect(op);
}

void keyup_event_dispatch::lgui() const { lgui_signal(); }

connection keyup_event_dispatch::on_lgui(lgui_slot_t const& op) {
  return lgui_signal.connect(op);
}

void keyup_event_dispatch::rctrl() const { rctrl_signal(); }

connection keyup_event_dispatch::on_rctrl(rctrl_slot_t const& op) {
  return rctrl_signal.connect(op);
}

void keyup_event_dispatch::rshift() const { rshift_signal(); }

connection keyup_event_dispatch::on_rshift(rshift_slot_t const& op) {
  return rshift_signal.connect(op);
}

void keyup_event_dispatch::ralt() const { ralt_signal(); }

connection keyup_event_dispatch::on_ralt(ralt_slot_t const& op) {
  return ralt_signal.connect(op);
}

void keyup_event_dispatch::rgui() const { rgui_signal(); }

connection keyup_event_dispatch::on_rgui(rgui_slot_t const& op) {
  return rgui_signal.connect(op);
}

void keyup_event_dispatch::mode() const { mode_signal(); }

connection keyup_event_dispatch::on_mode(mode_slot_t const& op) {
  return mode_signal.connect(op);
}

void keyup_event_dispatch::audionext() const { audionext_signal(); }

connection keyup_event_dispatch::on_audionext(audionext_slot_t const& op) {
  return audionext_signal.connect(op);
}

void keyup_event_dispatch::audioprev() const { audioprev_signal(); }

connection keyup_event_dispatch::on_audioprev(audioprev_slot_t const& op) {
  return audioprev_signal.connect(op);
}

void keyup_event_dispatch::audiostop() const { audiostop_signal(); }

connection keyup_event_dispatch::on_audiostop(audiostop_slot_t const& op) {
  return audiostop_signal.connect(op);
}

void keyup_event_dispatch::audioplay() const { audioplay_signal(); }

connection keyup_event_dispatch::on_audioplay(audioplay_slot_t const& op) {
  return audioplay_signal.connect(op);
}

void keyup_event_dispatch::audiomute() const { audiomute_signal(); }

connection keyup_event_dispatch::on_audiomute(audiomute_slot_t const& op) {
  return audiomute_signal.connect(op);
}

void keyup_event_dispatch::mediaselect() const { mediaselect_signal(); }

connection keyup_event_dispatch::on_mediaselect(mediaselect_slot_t const& op) {
  return mediaselect_signal.connect(op);
}

void keyup_event_dispatch::www() const { www_signal(); }

connection keyup_event_dispatch::on_www(www_slot_t const& op) {
  return www_signal.connect(op);
}

void keyup_event_dispatch::mail() const { mail_signal(); }

connection keyup_event_dispatch::on_mail(mail_slot_t const& op) {
  return mail_signal.connect(op);
}

void keyup_event_dispatch::calculator() const { calculator_signal(); }

connection keyup_event_dispatch::on_calculator(calculator_slot_t const& op) {
  return calculator_signal.connect(op);
}

void keyup_event_dispatch::computer() const { computer_signal(); }

connection keyup_event_dispatch::on_computer(computer_slot_t const& op) {
  return computer_signal.connect(op);
}

void keyup_event_dispatch::ac_search() const { ac_search_signal(); }

connection keyup_event_dispatch::on_ac_search(ac_search_slot_t const& op) {
  return ac_search_signal.connect(op);
}

void keyup_event_dispatch::ac_home() const { ac_home_signal(); }

connection keyup_event_dispatch::on_ac_home(ac_home_slot_t const& op) {
  return ac_home_signal.connect(op);
}

void keyup_event_dispatch::ac_back() const { ac_back_signal(); }

connection keyup_event_dispatch::on_ac_back(ac_back_slot_t const& op) {
  return ac_back_signal.connect(op);
}

void keyup_event_dispatch::ac_forward() const { ac_forward_signal(); }

connection keyup_event_dispatch::on_ac_forward(ac_forward_slot_t const& op) {
  return ac_forward_signal.connect(op);
}

void keyup_event_dispatch::ac_stop() const { ac_stop_signal(); }

connection keyup_event_dispatch::on_ac_stop(ac_stop_slot_t const& op) {
  return ac_stop_signal.connect(op);
}

void keyup_event_dispatch::ac_refresh() const { ac_refresh_signal(); }

connection keyup_event_dispatch::on_ac_refresh(ac_refresh_slot_t const& op) {
  return ac_refresh_signal.connect(op);
}

void keyup_event_dispatch::ac_bookmarks() const { ac_bookmarks_signal(); }

connection keyup_event_dispatch::on_ac_bookmarks(
  ac_bookmarks_slot_t const& op) {
  return ac_bookmarks_signal.connect(op);
}

void keyup_event_dispatch::brightnessdown() const { brightnessdown_signal(); }

connection keyup_event_dispatch::on_brightnessdown(
  brightnessdown_slot_t const& op) {
  return brightnessdown_signal.connect(op);
}

void keyup_event_dispatch::brightnessup() const { brightnessup_signal(); }

connection keyup_event_dispatch::on_brightnessup(
  brightnessup_slot_t const& op) {
  return brightnessup_signal.connect(op);
}

void keyup_event_dispatch::displayswitch() const { displayswitch_signal(); }

connection keyup_event_dispatch::on_displayswitch(
  displayswitch_slot_t const& op) {
  return displayswitch_signal.connect(op);
}

void keyup_event_dispatch::kbdillumtoggle() const { kbdillumtoggle_signal(); }

connection keyup_event_dispatch::on_kbdillumtoggle(
  kbdillumtoggle_slot_t const& op) {
  return kbdillumtoggle_signal.connect(op);
}

void keyup_event_dispatch::kbdillumdown() const { kbdillumdown_signal(); }

connection keyup_event_dispatch::on_kbdillumdown(
  kbdillumdown_slot_t const& op) {
  return kbdillumdown_signal.connect(op);
}

void keyup_event_dispatch::kbdillumup() const { kbdillumup_signal(); }

connection keyup_event_dispatch::on_kbdillumup(kbdillumup_slot_t const& op) {
  return kbdillumup_signal.connect(op);
}

void keyup_event_dispatch::eject() const { eject_signal(); }

connection keyup_event_dispatch::on_eject(eject_slot_t const& op) {
  return eject_signal.connect(op);
}

void keyup_event_dispatch::sleep() const { sleep_signal(); }

connection keyup_event_dispatch::on_sleep(sleep_slot_t const& op) {
  return sleep_signal.connect(op);
}
}
