/////////1/////////2/////////3/////////4/////////5/////////6/////////7/////////8
// basic_pointer_oserializer.cpp:

// (C) Copyright 2002 Robert Ramey - http://www.rrsd.com . 
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.lslboost.org/LICENSE_1_0.txt)

//  See http://www.lslboost.org for updates, documentation, and revision history.

#define BOOST_ARCHIVE_SOURCE
#include <lslboost/archive/detail/basic_pointer_oserializer.hpp>

namespace lslboost {
namespace archive {
namespace detail {

BOOST_ARCHIVE_DECL(BOOST_PP_EMPTY()) 
basic_pointer_oserializer::basic_pointer_oserializer(
    const lslboost::serialization::extended_type_info & eti
) :
    basic_serializer(eti)
{}

BOOST_ARCHIVE_DECL(BOOST_PP_EMPTY()) 
basic_pointer_oserializer::~basic_pointer_oserializer() {}

} // namespace detail
} // namespace archive
} // namespace lslboost
