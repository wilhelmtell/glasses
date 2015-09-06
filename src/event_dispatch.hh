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

  event_dispatch();

  void quit() const;
  void keydown_0() const;
  void keydown_1() const;

  connection on_quit(quit_slot_t const& op);
  connection on_keydown_0(keydown_0_slot_t const& op);
  connection on_keydown_1(keydown_1_slot_t const& op);

private:
  quit_signal_t quit_signal;
  keydown_0_signal_t keydown_0_signal;
  keydown_1_signal_t keydown_1_signal;
};
}

#endif
