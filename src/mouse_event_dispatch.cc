#include "mouse_event_dispatch.hh"

namespace gls {
void mouse_event_dispatch::motion(int const& x, int const& y) const {
  motion_signal(x, y);
}

connection mouse_event_dispatch::on_motion(motion_slot_t const& op) {
  return motion_signal.connect(op);
}
}
