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
  using keydown_signal_t = signal<void()>;
  using keydown_slot_t = keydown_signal_t::slot_type;
  using keydown_0_signal_t = signal<void()>;
  using keydown_0_slot_t = keydown_0_signal_t::slot_type;
  using keydown_1_signal_t = signal<void()>;
  using keydown_1_slot_t = keydown_1_signal_t::slot_type;
  using keydown_2_signal_t = signal<void()>;
  using keydown_2_slot_t = keydown_2_signal_t::slot_type;
  using keydown_3_signal_t = signal<void()>;
  using keydown_3_slot_t = keydown_3_signal_t::slot_type;
  using keydown_4_signal_t = signal<void()>;
  using keydown_4_slot_t = keydown_4_signal_t::slot_type;
  using keydown_5_signal_t = signal<void()>;
  using keydown_5_slot_t = keydown_5_signal_t::slot_type;
  using keydown_6_signal_t = signal<void()>;
  using keydown_6_slot_t = keydown_6_signal_t::slot_type;
  using keydown_7_signal_t = signal<void()>;
  using keydown_7_slot_t = keydown_7_signal_t::slot_type;
  using keydown_8_signal_t = signal<void()>;
  using keydown_8_slot_t = keydown_8_signal_t::slot_type;
  using keydown_9_signal_t = signal<void()>;
  using keydown_9_slot_t = keydown_9_signal_t::slot_type;
  using keydown_a_signal_t = signal<void()>;
  using keydown_a_slot_t = keydown_a_signal_t::slot_type;
  using keydown_b_signal_t = signal<void()>;
  using keydown_b_slot_t = keydown_b_signal_t::slot_type;
  using keydown_c_signal_t = signal<void()>;
  using keydown_c_slot_t = keydown_c_signal_t::slot_type;
  using keydown_d_signal_t = signal<void()>;
  using keydown_d_slot_t = keydown_d_signal_t::slot_type;
  using keydown_e_signal_t = signal<void()>;
  using keydown_e_slot_t = keydown_e_signal_t::slot_type;
  using keydown_f_signal_t = signal<void()>;
  using keydown_f_slot_t = keydown_f_signal_t::slot_type;
  using keydown_g_signal_t = signal<void()>;
  using keydown_g_slot_t = keydown_g_signal_t::slot_type;
  using keydown_h_signal_t = signal<void()>;
  using keydown_h_slot_t = keydown_h_signal_t::slot_type;
  using keydown_i_signal_t = signal<void()>;
  using keydown_i_slot_t = keydown_i_signal_t::slot_type;
  using keydown_j_signal_t = signal<void()>;
  using keydown_j_slot_t = keydown_j_signal_t::slot_type;
  using keydown_k_signal_t = signal<void()>;
  using keydown_k_slot_t = keydown_k_signal_t::slot_type;
  using keydown_l_signal_t = signal<void()>;
  using keydown_l_slot_t = keydown_l_signal_t::slot_type;
  using keydown_m_signal_t = signal<void()>;
  using keydown_m_slot_t = keydown_m_signal_t::slot_type;
  using keydown_n_signal_t = signal<void()>;
  using keydown_n_slot_t = keydown_n_signal_t::slot_type;
  using keydown_o_signal_t = signal<void()>;
  using keydown_o_slot_t = keydown_o_signal_t::slot_type;
  using keydown_p_signal_t = signal<void()>;
  using keydown_p_slot_t = keydown_p_signal_t::slot_type;
  using keydown_q_signal_t = signal<void()>;
  using keydown_q_slot_t = keydown_q_signal_t::slot_type;
  using keydown_r_signal_t = signal<void()>;
  using keydown_r_slot_t = keydown_r_signal_t::slot_type;
  using keydown_s_signal_t = signal<void()>;
  using keydown_s_slot_t = keydown_s_signal_t::slot_type;
  using keydown_t_signal_t = signal<void()>;
  using keydown_t_slot_t = keydown_t_signal_t::slot_type;
  using keydown_u_signal_t = signal<void()>;
  using keydown_u_slot_t = keydown_u_signal_t::slot_type;
  using keydown_v_signal_t = signal<void()>;
  using keydown_v_slot_t = keydown_v_signal_t::slot_type;
  using keydown_w_signal_t = signal<void()>;
  using keydown_w_slot_t = keydown_w_signal_t::slot_type;
  using keydown_x_signal_t = signal<void()>;
  using keydown_x_slot_t = keydown_x_signal_t::slot_type;
  using keydown_y_signal_t = signal<void()>;
  using keydown_y_slot_t = keydown_y_signal_t::slot_type;
  using keydown_z_signal_t = signal<void()>;
  using keydown_z_slot_t = keydown_z_signal_t::slot_type;

  event_dispatch();

  void quit() const;
  void keydown_0() const;
  void keydown_1() const;
  void keydown_2() const;
  void keydown_3() const;
  void keydown_4() const;
  void keydown_5() const;
  void keydown_6() const;
  void keydown_7() const;
  void keydown_8() const;
  void keydown_9() const;
  void keydown_a() const;
  void keydown_b() const;
  void keydown_c() const;
  void keydown_d() const;
  void keydown_e() const;
  void keydown_f() const;
  void keydown_g() const;
  void keydown_h() const;
  void keydown_i() const;
  void keydown_j() const;
  void keydown_k() const;
  void keydown_l() const;
  void keydown_m() const;
  void keydown_n() const;
  void keydown_o() const;
  void keydown_p() const;
  void keydown_q() const;
  void keydown_r() const;
  void keydown_s() const;
  void keydown_t() const;
  void keydown_u() const;
  void keydown_v() const;
  void keydown_w() const;
  void keydown_x() const;
  void keydown_y() const;
  void keydown_z() const;

  connection on_quit(quit_slot_t const& op);
  connection on_keydown_0(keydown_0_slot_t const& op);
  connection on_keydown_1(keydown_1_slot_t const& op);
  connection on_keydown_2(keydown_2_slot_t const& op);
  connection on_keydown_3(keydown_3_slot_t const& op);
  connection on_keydown_4(keydown_4_slot_t const& op);
  connection on_keydown_5(keydown_5_slot_t const& op);
  connection on_keydown_6(keydown_6_slot_t const& op);
  connection on_keydown_7(keydown_7_slot_t const& op);
  connection on_keydown_8(keydown_8_slot_t const& op);
  connection on_keydown_9(keydown_9_slot_t const& op);
  connection on_keydown_a(keydown_a_slot_t const& op);
  connection on_keydown_b(keydown_b_slot_t const& op);
  connection on_keydown_c(keydown_c_slot_t const& op);
  connection on_keydown_d(keydown_d_slot_t const& op);
  connection on_keydown_e(keydown_e_slot_t const& op);
  connection on_keydown_f(keydown_f_slot_t const& op);
  connection on_keydown_g(keydown_g_slot_t const& op);
  connection on_keydown_h(keydown_h_slot_t const& op);
  connection on_keydown_i(keydown_i_slot_t const& op);
  connection on_keydown_j(keydown_j_slot_t const& op);
  connection on_keydown_k(keydown_k_slot_t const& op);
  connection on_keydown_l(keydown_l_slot_t const& op);
  connection on_keydown_m(keydown_m_slot_t const& op);
  connection on_keydown_n(keydown_n_slot_t const& op);
  connection on_keydown_o(keydown_o_slot_t const& op);
  connection on_keydown_p(keydown_p_slot_t const& op);
  connection on_keydown_q(keydown_q_slot_t const& op);
  connection on_keydown_r(keydown_r_slot_t const& op);
  connection on_keydown_s(keydown_s_slot_t const& op);
  connection on_keydown_t(keydown_t_slot_t const& op);
  connection on_keydown_u(keydown_u_slot_t const& op);
  connection on_keydown_v(keydown_v_slot_t const& op);
  connection on_keydown_w(keydown_w_slot_t const& op);
  connection on_keydown_x(keydown_x_slot_t const& op);
  connection on_keydown_y(keydown_y_slot_t const& op);
  connection on_keydown_z(keydown_z_slot_t const& op);

private:
  quit_signal_t quit_signal;
  keydown_0_signal_t keydown_0_signal;
  keydown_1_signal_t keydown_1_signal;
  keydown_2_signal_t keydown_2_signal;
  keydown_3_signal_t keydown_3_signal;
  keydown_4_signal_t keydown_4_signal;
  keydown_5_signal_t keydown_5_signal;
  keydown_6_signal_t keydown_6_signal;
  keydown_7_signal_t keydown_7_signal;
  keydown_8_signal_t keydown_8_signal;
  keydown_9_signal_t keydown_9_signal;
  keydown_a_signal_t keydown_a_signal;
  keydown_b_signal_t keydown_b_signal;
  keydown_c_signal_t keydown_c_signal;
  keydown_d_signal_t keydown_d_signal;
  keydown_e_signal_t keydown_e_signal;
  keydown_f_signal_t keydown_f_signal;
  keydown_g_signal_t keydown_g_signal;
  keydown_h_signal_t keydown_h_signal;
  keydown_i_signal_t keydown_i_signal;
  keydown_j_signal_t keydown_j_signal;
  keydown_k_signal_t keydown_k_signal;
  keydown_l_signal_t keydown_l_signal;
  keydown_m_signal_t keydown_m_signal;
  keydown_n_signal_t keydown_n_signal;
  keydown_o_signal_t keydown_o_signal;
  keydown_p_signal_t keydown_p_signal;
  keydown_q_signal_t keydown_q_signal;
  keydown_r_signal_t keydown_r_signal;
  keydown_s_signal_t keydown_s_signal;
  keydown_t_signal_t keydown_t_signal;
  keydown_u_signal_t keydown_u_signal;
  keydown_v_signal_t keydown_v_signal;
  keydown_w_signal_t keydown_w_signal;
  keydown_x_signal_t keydown_x_signal;
  keydown_y_signal_t keydown_y_signal;
  keydown_z_signal_t keydown_z_signal;
};
}

#endif
