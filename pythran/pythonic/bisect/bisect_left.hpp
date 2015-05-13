#ifndef PYTHONIC_BISECT_BISECTLEFT_HPP
#define PYTHONIC_BISECT_BISECTLEFT_HPP

#include "pythonic/include/bisect/bisect_left.hpp"

#include "pythonic/bisect/bisect.hpp"
#include "pythonic/utils/proxy.hpp"

#include <algorithm>

namespace pythonic
{

  namespace bisect
  {
    template <class X, class A>
    long bisect_left(X const &x, A const &a, long lo)
    {
      return bisect(x, a, lo, std::lower_bound<typename X::const_iterator, A>);
    }

    template <class X, class A>
    long bisect_left(X const &x, A const &a, long lo, long hi)
    {
      return bisect(x, a, lo, hi,
                    std::lower_bound<typename X::const_iterator, A>);
    }

    PROXY_IMPL(pythonic::bisect, bisect_left);
  }
}

#endif
