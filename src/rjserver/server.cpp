//
// Copyright (c) 2017 Christoph Malek
// See LICENSE for more information.
//

#include <rjserver/server.hpp>

#include <mlk/log/log.h>
#include <mlk/time/time_utl.h>

namespace rjs
{
	server::server() {}

	void server::run()
	{
		if(m_running) return;

		mlk::lout("rjs::server::run") << "Running server...";
		m_running = true;
		while(m_running) {
			this->update();

			mlk::tm::sleep(1);
		}
	}

	void server::stop() noexcept { m_running = false; }

	void server::init() {}

	void server::update()
	{
		m_connection.update();
		/* */
	}
}
