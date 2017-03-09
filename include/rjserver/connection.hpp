//
// Copyright (c) 2017 Christoph Malek
// See LICENSE for more information.
//

#ifndef RJS_CONNECTION_HPP
#define RJS_CONNECTION_HPP

#include <mlk/network/network.h>

namespace rjs
{
	class connection
	{
		mlk::ntw::sock<mlk::ntw::sock_type::udp, false> m_udp;

	public:
		connection();

		void update();
	};
}

#endif// RJS_CONNECTION_HPP
