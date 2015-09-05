#include "logical_cleanup.hh"
#include <functional>
#include <utility>

namespace gls {
logical_cleanup::logical_cleanup(std::function<void()> c) : c(std::move(c)) {}

logical_cleanup::logical_cleanup(logical_cleanup&& rhs) : c(std::move(rhs.c)) {
  // when rhs destructs, there are only 2 possibilities: either it will call
  // its cleanup function, or it will throw a std::bad_function_call. which
  // case will take place though is unspecified after a move. therefore, we
  // force emptying its function, so we know exactly which way it goes, and we
  // avoid a double-cleanup.
  //
  // details: section 17.6.5.15 [lib.types.movedfrom] states:
  //
  //  Objects of types defined in the C++ standard library may be moved from
  //  (12.8). Move operations may be explicitly specified or implicitly
  //  generated. Unless otherwise specified, such moved-from objects shall be
  //  placed in a valid but unspecified state.
  //
  // section 20.8.11.2.4 [func.wrap.func.inv] states:
  //
  //  R operator()(ArgTypes... args) const
  //
  //  Effects: INVOKE(f, std::forward(args)..., R) (20.8.2), where f is the
  //           target object (20.8.1) of *this.
  //
  //  Returns: Nothing if R is void, otherwise the return value of
  //           INVOKE(f, std::forward( args)..., R).
  //
  //  Throws: bad_function_call if !*this; otherwise, any exception thrown by
  //          the wrapped callable object.
  //
  // There is no precondition on the std::function function-call operator.
  // therefore, no matter what state the function is in, we're not going to
  // violate any precondition with the function call. the call will either call
  // the wrapped function, or throw a std::bad_function_call. whether it will
  // call the wrapped function or throw the exception depends on the state of
  // the moved-from object. and that state is valid-but-unspecified.
  rhs.c = nullptr;
}

logical_cleanup& logical_cleanup::operator=(logical_cleanup&& rhs) {
  c = std::move(rhs.c);
  rhs.c = nullptr;
  return *this;
}

logical_cleanup::~logical_cleanup() {
  if(c) c();
}
}
