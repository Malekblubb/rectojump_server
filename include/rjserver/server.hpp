//
// Copyright (c) 2017 Christoph Malek
// See LICENSE for more information.
//

#ifndef RJS_SERVER_HPP
#define RJS_SERVER_HPP

#include <rjserver/connection.hpp>

namespace rjs
{
	class server
	{
		connection m_connection;

		bool m_running{false};

	public:
		server();

		void run();
		void stop() noexcept;

	private:
		void init();
		void update();
	};
}

#endif// RJS_SERVER_HPP
