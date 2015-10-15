#ifndef GLS_MOUSE_BUTTONUP_EVENT_DISPATCH_HH_
#define GLS_MOUSE_BUTTONUP_EVENT_DISPATCH_HH_

#include <boost/signals2.hpp>

namespace gls {
template <typename Op>
using signal = boost::signals2::signal<Op>;
using connection = boost::signals2::connection;

struct mouse_buttonup_event_dispatch {
  using left_signal_t = signal<void(int const& x, int const& y)>;
  using left_slot_t = left_signal_t::slot_type;
  using right_signal_t = signal<void(int const& x, int const& y)>;
  using right_slot_t = right_signal_t::slot_type;
  using middle_signal_t = signal<void(int const& x, int const& y)>;
  using middle_slot_t = middle_signal_t::slot_type;
  using x1_signal_t = signal<void(int const& x, int const& y)>;
  using x1_slot_t = x1_signal_t::slot_type;
  using x2_signal_t = signal<void(int const& x, int const& y)>;
  using x2_slot_t = x2_signal_t::slot_type;

  void left(int const& x, int const& y) const;
  void right(int const& x, int const& y) const;
  void middle(int const& x, int const& y) const;
  void x1(int const& x, int const& y) const;
  void x2(int const& x, int const& y) const;

  connection on_left(left_slot_t const& op);
  connection on_right(left_slot_t const& op);
  connection on_middle(middle_slot_t const& op);
  connection on_x1(x1_slot_t const& op);
  connection on_x2(x2_slot_t const& op);

private:
  left_signal_t left_signal;
  right_signal_t right_signal;
  middle_signal_t middle_signal;
  x1_signal_t x1_signal;
  x2_signal_t x2_signal;
};
}

#endif
