#include "mouse_buttondown_event_dispatch.hh"

namespace gls {
void mouse_buttondown_event_dispatch::left(int const& x, int const& y) const {
  left_signal(x, y);
}

connection mouse_buttondown_event_dispatch::on_left(left_slot_t const& op) {
  return left_signal.connect(op);
}

void mouse_buttondown_event_dispatch::right(int const& x, int const& y) const {
  right_signal(x, y);
}

connection mouse_buttondown_event_dispatch::on_right(right_slot_t const& op) {
  return right_signal.connect(op);
}

void mouse_buttondown_event_dispatch::middle(int const& x,
                                             int const& y) const {
  middle_signal(x, y);
}

connection mouse_buttondown_event_dispatch::on_middle(
  middle_slot_t const& op) {
  return middle_signal.connect(op);
}

void mouse_buttondown_event_dispatch::x1(int const& x, int const& y) const {
  x1_signal(x, y);
}

connection mouse_buttondown_event_dispatch::on_x1(x1_slot_t const& op) {
  return x1_signal.connect(op);
}

void mouse_buttondown_event_dispatch::x2(int const& x, int const& y) const {
  x2_signal(x, y);
}

connection mouse_buttondown_event_dispatch::on_x2(x2_slot_t const& op) {
  return x2_signal.connect(op);
}
}
