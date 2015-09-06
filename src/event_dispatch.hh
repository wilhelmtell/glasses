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
};
}

#endif
