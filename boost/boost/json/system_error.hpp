//
// Copyright (c) 2019 Vinnie Falco (vinnie.falco@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/boostorg/json
//

#ifndef BOOST_JSON_SYSTEM_ERROR_HPP
#define BOOST_JSON_SYSTEM_ERROR_HPP

#include <boost/json/detail/config.hpp>
#include <boost/system/error_code.hpp>
#include <boost/system/system_error.hpp>

BOOST_JSON_NS_BEGIN

/// The type of error code used by the library.
using error_code = boost::system::error_code;

/// The type of error category used by the library.
using error_category = boost::system::error_category;

/// The type of error condition used by the library.
using error_condition = boost::system::error_condition;

/// The type of system error thrown by the library.
using system_error = boost::system::system_error;

#ifdef BOOST_JSON_DOCS
/// Returns the generic error category used by the library.
error_category const&
generic_category();
#else
using boost::system::generic_category;
#endif

BOOST_JSON_NS_END

#endif
