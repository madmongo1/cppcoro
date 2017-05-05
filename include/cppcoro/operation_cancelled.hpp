///////////////////////////////////////////////////////////////////////////////
// Copyright (c) Lewis Baker
// Licenced under MIT license. See LICENSE.txt for details.
///////////////////////////////////////////////////////////////////////////////
#ifndef CPPCORO_OPERATION_CANCELLED_HPP_INCLUDED
#define CPPCORO_OPERATION_CANCELLED_HPP_INCLUDED

#include <exception>

namespace cppcoro
{
	class operation_cancelled : std::exception
	{
	public:

		operation_cancelled() noexcept
			: std::exception()
		{}

		const char* what() const override { return "operation cancelled"; }
	};
}

#endif