#ifndef GLS_EVENT_DISPATCH_HH_
#define GLS_EVENT_DISPATCH_HH_

#include <boost/signals2.hpp>
#include "keydown_event_dispatch.hh"
#include "keyup_event_dispatch.hh"

namespace gls {
template <typename Op>
using signal = boost::signals2::signal<Op>;
using connection = boost::signals2::connection;

struct event_dispatch {
  using quit_signal_t = signal<void()>;
  using quit_slot_t = quit_signal_t::slot_type;

  event_dispatch();

  void quit() const;

  connection on_quit(quit_slot_t const& op);

public:
  keydown_event_dispatch keydown;
  keyup_event_dispatch keyup;

private:
  quit_signal_t quit_signal;
};
}

#endif
