#ifndef GLS_MOUSE_EVENT_DISPATCH_HH_
#define GLS_MOUSE_EVENT_DISPATCH_HH_

#include <boost/signals2.hpp>
#include "mouse_buttondown_event_dispatch.hh"
#include "mouse_buttonup_event_dispatch.hh"

namespace gls {
template <typename Op>
using signal = boost::signals2::signal<Op>;
using connection = boost::signals2::connection;

struct mouse_event_dispatch {
  using motion_signal_t = signal<void(int const& x, int const& y)>;
  using motion_slot_t = motion_signal_t::slot_type;

  void motion(int const& x, int const& y) const;

  connection on_motion(motion_slot_t const& op);

public:
  mouse_buttondown_event_dispatch buttondown;
  mouse_buttonup_event_dispatch buttonup;

private:
  motion_signal_t motion_signal;
};
}

#endif
