/******************************************************************************
 * Copyright (c) 2000-2016 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Forstner, Matyas
 *   Lovassy, Arpad
 *
 ******************************************************************************/
// This Test Port skeleton header file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 1.3.pl0
// for Matyas Forstner (tmpmfr@saussure) on Thu Apr 10 16:06:07 2003
//
// You may modify this file. Add your attributes and prototypes of your
// member functions here.

#ifndef MyPort2_HH
#define MyPort2_HH

#include "X.hh"

class MyPort2 : public MyPort2_BASE {
public:
	MyPort2(const char *par_port_name);
	~MyPort2();

	void set_parameter(const char *parameter_name,
		const char *parameter_value);

	void Event_Handler(const fd_set *read_fds,
		const fd_set *write_fds, const fd_set *error_fds,
		double time_since_last_call);

protected:
	void user_map(const char *system_port);
	void user_unmap(const char *system_port);

	void user_start();
	void user_stop();

	void outgoing_send(const OCTETSTRING& send_par);
};

#endif
