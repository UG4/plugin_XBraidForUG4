/*
 * SPDX-FileCopyrightText: Copyright (c) 2014-2025:  Goethe University Frankfurt
 * SPDX-License-Identifier: LicenseRef-UG4-LGPL-3.0
 *
 * Author: Arne Naegel
 *
 */

#ifdef UG_USE_PYBIND11

// UG4 headers.
#include "bindings/pybind/ug_pybind.h"

// Own headers.
#include "xbraid_bridge.hpp"

PYBIND11_MODULE(pyxbraid, m)
{
	m.doc() = "XBraid module";
	m.attr("__name__") = "ug4py.xbraid";

	ug::pybind::Registry registry(m);
	std::string name("XBraid");

	ug::xbraid::InitUGPlugin(&registry, name);
}
#endif
