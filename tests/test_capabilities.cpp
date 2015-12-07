/*
    Copyright (c) 2007-2015 Contributors as noted in the AUTHORS file

    This file is part of libzmq, the ZeroMQ core engine in C++.

    libzmq is free software; you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License (LGPL) as published
    by the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    As a special exception, the Contributors give you permission to link
    this library with independent modules to produce an executable,
    regardless of the license terms of these independent modules, and to
    copy and distribute the resulting executable under terms of your choice,
    provided that you also meet, for each linked independent module, the
    terms and conditions of the license of that module. An independent
    module is a module which is not derived from or based on this library.
    If you modify this library, you must extend this exception to your
    version of the library.

    libzmq is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
    License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testutil.hpp"

int main (void)
{
#if !defined (ZMQ_HAVE_WINDOWS) && !defined (ZMQ_HAVE_OPENVMS)
    assert (zmq_has ("ipc"));
#else
    assert (!zmq_has ("ipc"));
#endif

#if defined (ZMQ_HAVE_OPENPGM)
    assert (zmq_has ("pgm"));
#else
    assert (!zmq_has ("pgm"));
#endif

#if defined (ZMQ_HAVE_TIPC)
    assert (zmq_has ("tipc"));
#else
    assert (!zmq_has ("tipc"));
#endif

#if defined (ZMQ_HAVE_NORM)
    assert (zmq_has ("norm"));
#else
    assert (!zmq_has ("norm"));
#endif

#if defined (HAVE_LIBSODIUM)
    assert (zmq_has ("curve"));
#else
    assert (!zmq_has ("curve"));
#endif

#if defined (HAVE_LIBGSSAPI_KRB5)
    assert (zmq_has ("gssapi"));
#else
    assert (!zmq_has ("gssapi"));
#endif

#if defined (ZMQ_HAVE_VMCI)
    assert (zmq_has("vmci"));
#else
    assert (!zmq_has("vmci"));
#endif

    return 0;
}
