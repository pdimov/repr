#ifndef BOOST_REPR_REPR_HPP_INCLUDED
#define BOOST_REPR_REPR_HPP_INCLUDED

// Copyright 2021 Peter Dimov
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt

namespace boost
{
namespace repr
{

struct options;
template<class Os, class T> void represent( Os& os, T const& t, options const& opt );

} // namespace repr
} // namespace boost

#endif // #ifndef BOOST_REPR_REPR_HPP_INCLUDED
