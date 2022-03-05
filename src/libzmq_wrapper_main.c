/*
 * libzmq_wrapper.dll
 *
 * Generated from ../libzmq-v120-mt-4_3_5.dll by winedump.
 *
 * DO NOT SUBMIT GENERATED DLLS FOR INCLUSION INTO WINE!
 *
 */

#include "config.h"

#include <stdarg.h>
#include <stdlib.h>
#include <stdbool.h>

#include "windef.h"
#include "winbase.h"
#include "libzmq_wrapper_dll.h"
#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(libzmq_wrapper);

#ifndef __WINESRC__
void FIXME(char * msg) {
    printf(msg);
}

void TRACE(char * msg, ...) {
    va_list argp;
    va_start(argp, msg);
    vprintf(msg, argp);
    va_end(argp);
}
#endif

void printHex(void * buf, size_t len) {
    if (NULL == buf || 0 == len) return;
    unsigned char * p = (unsigned char *) buf;
    printf("  HEX: ");
    for (int i=0; i < len; ++i) {
	if (! (i % 16) && i) printf("\n  HEX: ");
	printf("%02x ", p[i]);
    }
    printf("\n");
}

// flag indicating offline mode (skip _connect() etc.)
// set via env LIBZMQ_WRAPPER_OFFLINE
bool offline = true;

// empty data buffer for offline mode (_recv() etc.)
char emptyData[] = "";

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void * reserved) {
    char * offlineEnv = NULL;
    switch (reason) {
	case DLL_PROCESS_ATTACH:
	    offlineEnv = getenv("LIBZMQ_WRAPPER_OFFLINE");
	    offline = (NULL != offlineEnv && 0 != strncmp("FALSE", offlineEnv, 5));
	    TRACE("libzmq: proxy DLL loaded%s\n", offline ? ", mode=OFFLINE" : "");
	    break;
	case DLL_PROCESS_DETACH:
	    TRACE("libzmq: proxy DLL detached\n");
	    break;
    }
    return TRUE;
}

/******************************************************************
 *	zmq_atomic_counter_dec (LIBZMQ_WRAPPER.1)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_dec(void) {
    FIXME("zmq_atomic_counter_dec: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_atomic_counter_destroy (LIBZMQ_WRAPPER.2)
 */
void __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_destroy(void) {
    FIXME("zmq_atomic_counter_destroy: stub\n");
}

/******************************************************************
 *	zmq_atomic_counter_inc (LIBZMQ_WRAPPER.3)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_inc(void) {
    FIXME("zmq_atomic_counter_inc: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_atomic_counter_new (LIBZMQ_WRAPPER.4)
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_new(void) {
    FIXME("zmq_atomic_counter_new: stub\n");
    return (void *) 0;
}

/******************************************************************
 *	zmq_atomic_counter_set (LIBZMQ_WRAPPER.5)
 */
void __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_set(void) {
    FIXME("zmq_atomic_counter_set: stub\n");
}

/******************************************************************
 *	zmq_atomic_counter_value (LIBZMQ_WRAPPER.6)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_value(void) {
    FIXME("zmq_atomic_counter_value: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_bind (LIBZMQ_WRAPPER.7)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_bind(void * socket, const char * addr) {
    if (offline) {
	TRACE("zmq_bind(%p, '%s'): ignoring\n", socket, addr);
	return (int) 0; // we do not want to connect it to anything
    }
    TRACE("zmq_bind(%p, '%s'): forwarding...\n", socket, addr);
    int result = zmq_bind(socket, addr);
    TRACE("zmq_bind: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_close (LIBZMQ_WRAPPER.8)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_close(void * socket) {
    TRACE("zmq_close(%p): forwarding...\n", socket);
    int result = zmq_close(socket);
    TRACE("zmq_close: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_connect (LIBZMQ_WRAPPER.9)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_connect(void * socket, const char * addr) {
    if (offline) {
	TRACE("zmq_connect(%p, '%s'): ignoring\n", socket, addr);
	return (int) 0; // we do not want to connect it to anything
    }
    TRACE("zmq_connect(%p, '%s'): forwarding...\n", socket, addr);
    int result = zmq_connect(socket, addr);
    TRACE("zmq_connect: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_connect_peer (LIBZMQ_WRAPPER.10)
 */
uint32_t __cdecl LIBZMQ_WRAPPER_zmq_connect_peer(void) {
    FIXME("zmq_connect_peer: stub\n");
    return (uint32_t) 0;
}

/******************************************************************
 *	zmq_ctx_destroy (LIBZMQ_WRAPPER.11)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_destroy(void) {
    FIXME("zmq_ctx_destroy: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_ctx_get (LIBZMQ_WRAPPER.12)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_get(void * ctx, int option) {
    TRACE("zmq_ctx_get(%p, %d): forwarding...\n");
    int result = zmq_ctx_get(ctx, option);
    TRACE("zmq_ctx_get: result=%p\n", result);
    return result;
}

/******************************************************************
 *	zmq_ctx_get_ext (LIBZMQ_WRAPPER.13)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_get_ext(void) {
    FIXME("zmq_ctx_get_ext: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_ctx_new (LIBZMQ_WRAPPER.14)
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_ctx_new(void) {
    TRACE("zmq_ctx_new: forwarding...\n");
    void * result = zmq_ctx_new();
    TRACE("zmq_ctx_new: result=%p\n", result);
    return result;
}

/******************************************************************
 *	zmq_ctx_set (LIBZMQ_WRAPPER.15)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_set(void * ctx, int option, int val) {
    TRACE("zmq_ctx_set(%p, %d, %d): forwarding...\n");
    int result = zmq_ctx_set(ctx, option, val);
    TRACE("zmq_ctx_set: result=%p\n", result);
    return result;
}

/******************************************************************
 *	zmq_ctx_set_ext (LIBZMQ_WRAPPER.16)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_set_ext(void) {
    FIXME("zmq_ctx_set_ext: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_ctx_shutdown (LIBZMQ_WRAPPER.17)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_shutdown(void) {
    FIXME("zmq_ctx_shutdown: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_ctx_term (LIBZMQ_WRAPPER.18)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_term(void * ctx) {
    TRACE("zmq_ctx_term(%p): forwarding...\n", ctx);
    int result = zmq_term(ctx);
    TRACE("zmq_ctx_term: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_curve_keypair (LIBZMQ_WRAPPER.19)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_curve_keypair(char * z85_public_key, char * z85_secret_key) {
    FIXME("zmq_curve_keypair: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_curve_public (LIBZMQ_WRAPPER.20)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_curve_public(char * z85_public_key, char * z85_secret_key) {
    FIXME("zmq_curve_public: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_device (LIBZMQ_WRAPPER.21)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_device(int type, void * frontend, void * backend) {
    FIXME("zmq_device: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_disconnect (LIBZMQ_WRAPPER.22)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_disconnect(void) {
    FIXME("zmq_disconnect: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_errno (LIBZMQ_WRAPPER.23)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_errno(void) {
    int result = errno;
    TRACE("zmq_errno: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_getsockopt (LIBZMQ_WRAPPER.24)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_getsockopt(void * socket, int option, void * val, size_t * len) {
    TRACE("zmq_getsockopt(%p, %d, %p, %p): forwarding...\n", socket, option, val, len);
    int result = zmq_getsockopt(socket, option, val, len);
    TRACE("zmq_getsockopt: result=%p\n", result);
    return result;
}

/******************************************************************
 *	zmq_has (LIBZMQ_WRAPPER.25)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_has(char * capability) {
    FIXME("zmq_has: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_init (LIBZMQ_WRAPPER.26)
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_init(int io_threads) {
    FIXME("zmq_init: stub\n");
    return (void *) 0;
}

/******************************************************************
 *	zmq_join (LIBZMQ_WRAPPER.27)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_join(void) {
    FIXME("zmq_join: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_leave (LIBZMQ_WRAPPER.28)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_leave(void) {
    FIXME("zmq_leave: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_msg_close (LIBZMQ_WRAPPER.29)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_close(zmq_msg_t * msg) {
    TRACE("zmq_msg_close(%p): forwarding...\n", msg);
    int result = zmq_msg_close(msg);
    TRACE("zmq_msg_close: result=%p\n", result);
    return result;
}

/******************************************************************
 *	zmq_msg_copy (LIBZMQ_WRAPPER.30)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_copy(zmq_msg_t * dest, zmq_msg_t * src) {
    FIXME("zmq_msg_copy: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_msg_data (LIBZMQ_WRAPPER.31)
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_msg_data(zmq_msg_t * msg) {
    TRACE("zmq_msg_data(%p): forwarding...\n", msg);
    void * result = zmq_msg_data(msg);
    TRACE("zmq_msg_data: result=%p\n", result);
    return result;
}

/******************************************************************
 *	zmq_msg_get (LIBZMQ_WRAPPER.32)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_get(zmq_msg_t * msg, int property) {
    FIXME("zmq_msg_get: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_msg_gets (LIBZMQ_WRAPPER.33)
 */
char * __cdecl LIBZMQ_WRAPPER_zmq_msg_gets(zmq_msg_t * msg, char * property) {
    FIXME("zmq_msg_gets: stub\n");
    return (char *) 0;
}

/******************************************************************
 *	zmq_msg_group (LIBZMQ_WRAPPER.34)
 */
char * __cdecl LIBZMQ_WRAPPER_zmq_msg_group(zmq_msg_t * msg) {
    FIXME("zmq_msg_group: stub\n");
    return (char *) 0;
}

/******************************************************************
 *	zmq_msg_init (LIBZMQ_WRAPPER.35)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_init(zmq_msg_t * msg) {
    TRACE("zmq_msg_init(%p): forwarding...\n", msg);
    int result = zmq_msg_init(msg);
    TRACE("zmq_msg_init: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_msg_init_buffer (LIBZMQ_WRAPPER.36)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_init_buffer(zmq_msg_t * msg, void * buf, size_t size) {
    FIXME("zmq_msg_init_buffer: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_msg_init_data (LIBZMQ_WRAPPER.37)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_init_data(zmq_msg_t * msg, void * data, size_t size, zmq_free_fn * ffn, void * hint) {
    TRACE("zmq_msg_init_data(%p, %p, %ld, %p, %p): forwarding...\n", msg, data, size, ffn, hint);
    int result = zmq_msg_init_data(msg, data, size, ffn, hint);
    TRACE("zmq_msg_init_data: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_msg_init_size (LIBZMQ_WRAPPER.38)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_init_size(zmq_msg_t * msg, size_t size) {
    TRACE("zmq_msg_init_size(%p, %ld): forwarding...\n", msg, size);
    int result = zmq_msg_init_size(msg, size);
    TRACE("zmq_msg_init_size: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_msg_more (LIBZMQ_WRAPPER.39)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_more(zmq_msg_t * msg) {
    FIXME("zmq_msg_more: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_msg_move (LIBZMQ_WRAPPER.40)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_move(zmq_msg_t * dest, zmq_msg_t * src) {
    FIXME("zmq_msg_move: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_msg_recv (LIBZMQ_WRAPPER.41)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_recv(zmq_msg_t * msg, void * socket, int flags) {
    if (offline) {
	TRACE("zmq_msg_recv(%p, %p, %d): ignoring\n", msg, socket, flags);
	if (flags & ZMQ_DONTWAIT) {
	errno = EAGAIN;
	return (int) -1;
	}
	// return a new, empty message (use our static empty data buffer)
	zmq_msg_close(msg);
	zmq_msg_init_data(msg, emptyData, 0, NULL, NULL);
	return 0;
    }
    TRACE("zmq_msg_recv(%p, %p, %d): forwarding...\n", msg, socket, flags);
    int result = zmq_msg_recv(msg, socket, flags);
    TRACE("zmq_msg_recv: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_msg_routing_id (LIBZMQ_WRAPPER.42)
 */
uint32_t __cdecl LIBZMQ_WRAPPER_zmq_msg_routing_id(zmq_msg_t * msg) {
    FIXME("zmq_msg_routing_id: stub\n");
    return (uint32_t) 0;
}

/******************************************************************
 *	zmq_msg_send (LIBZMQ_WRAPPER.43)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_send(zmq_msg_t * msg, void * socket, int flags) {
    if (offline) {
	TRACE("zmq_msg_send(%p, %p, %d): ignoring\n", msg, socket, flags);
	printHex(zmq_msg_data(msg), zmq_msg_size(msg));
	if (flags & ZMQ_DONTWAIT) {
	errno = EAGAIN;
	return (int) -1;
	}
	return (int) 0;
    }
    TRACE("zmq_msg_send(%p, %p, %ld, %d): forwarding...\n", msg, socket, flags);
    int result = zmq_msg_send(msg, socket, flags);
    TRACE("zmq_msg_send: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_msg_set (LIBZMQ_WRAPPER.44)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_set(zmq_msg_t * msg, int property, int optval) {
    FIXME("zmq_msg_set: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_msg_set_group (LIBZMQ_WRAPPER.45)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_set_group(zmq_msg_t * msg, char * group) {
    FIXME("zmq_msg_set_group: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_msg_set_routing_id (LIBZMQ_WRAPPER.46)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_set_routing_id(zmq_msg_t * msg, uint32_t routing_id) {
    FIXME("zmq_msg_set_routing_id: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_msg_size (LIBZMQ_WRAPPER.47)
 */
size_t __cdecl LIBZMQ_WRAPPER_zmq_msg_size(zmq_msg_t * msg) {
    TRACE("zmq_msg_size(%p): forwarding...\n", msg);
    size_t result = zmq_msg_size(msg);
    TRACE("zmq_msg_size: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_poll (LIBZMQ_WRAPPER.48)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poll(zmq_pollitem_t * items, int n, long timeout) {
    FIXME("zmq_poll: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_poller_add (LIBZMQ_WRAPPER.49)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_add(void) {
    FIXME("zmq_poller_add: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_poller_add_fd (LIBZMQ_WRAPPER.50)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_add_fd(void) {
    FIXME("zmq_poller_add_fd: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_poller_destroy (LIBZMQ_WRAPPER.51)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_destroy(void) {
    FIXME("zmq_poller_destroy: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_poller_fd (LIBZMQ_WRAPPER.52)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_fd(void) {
    FIXME("zmq_poller_fd: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_poller_modify (LIBZMQ_WRAPPER.53)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_modify(void) {
    FIXME("zmq_poller_modify: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_poller_modify_fd (LIBZMQ_WRAPPER.54)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_modify_fd(void) {
    FIXME("zmq_poller_modify_fd: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_poller_new (LIBZMQ_WRAPPER.55)
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_poller_new(void) {
    FIXME("zmq_poller_new: stub\n");
    return (void *) 0;
}

/******************************************************************
 *	zmq_poller_remove (LIBZMQ_WRAPPER.56)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_remove(void) {
    FIXME("zmq_poller_remove: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_poller_remove_fd (LIBZMQ_WRAPPER.57)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_remove_fd(void) {
    FIXME("zmq_poller_remove_fd: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_poller_size (LIBZMQ_WRAPPER.58)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_size(void) {
    FIXME("zmq_poller_size: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_poller_wait (LIBZMQ_WRAPPER.59)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_wait(void) {
    FIXME("zmq_poller_wait: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_poller_wait_all (LIBZMQ_WRAPPER.60)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_wait_all(void) {
    FIXME("zmq_poller_wait_all: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_ppoll (LIBZMQ_WRAPPER.61)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ppoll(zmq_pollitem_t * items, int n, long timeout, void/*sigset_t*/ * sigmask) {
    FIXME("zmq_ppoll: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_proxy (LIBZMQ_WRAPPER.62)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_proxy(void) {
    FIXME("zmq_proxy: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_proxy_steerable (LIBZMQ_WRAPPER.63)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_proxy_steerable(void) {
    FIXME("zmq_proxy_steerable: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_recv (LIBZMQ_WRAPPER.64)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_recv(void) {
    FIXME("zmq_recv: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_recviov (LIBZMQ_WRAPPER.65)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_recviov(void) {
    FIXME("zmq_recviov: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_recvmsg (LIBZMQ_WRAPPER.66)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_recvmsg(void) {
    FIXME("zmq_recvmsg: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_send (LIBZMQ_WRAPPER.67)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_send(void * socket, void * buf, size_t len, int flags) {
    if (offline) {
	TRACE("zmq_send(%p, %p, %ld, %d): ignoring\n", socket, buf, len, flags);
	printHex(buf, len);
	if (flags & ZMQ_DONTWAIT) {
	errno = EAGAIN;
	return (int) -1;
	}
	return (int) len;
    }
    TRACE("zmq_send(%p, %p, %ld, %d): forwarding...\n", socket, buf, len, flags);
    int result = zmq_send(socket, buf, len, flags);
    TRACE("zmq_send: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_send_const (LIBZMQ_WRAPPER.68)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_send_const(void) {
    FIXME("zmq_send_const: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_sendiov (LIBZMQ_WRAPPER.69)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_sendiov(void) {
    FIXME("zmq_sendiov: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_sendmsg (LIBZMQ_WRAPPER.70)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_sendmsg(void) {
    FIXME("zmq_sendmsg: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_setsockopt (LIBZMQ_WRAPPER.71)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_setsockopt(void * socket, int option, const void * val, size_t len) {
    if (offline) {
	TRACE("zmq_setsockopt(%p, %d, %p, %ld): ignoring\n", socket, option, val, len);
	return (int) 0;
    }
    TRACE("zmq_setsockopt(%p, %d, %p, %ld): forwarding...\n", socket, option, val, len);
    int result = zmq_setsockopt(socket, option, val, len);
    TRACE("zmq_setsockopt: result=%p\n", result);
    return result;
}

/******************************************************************
 *	zmq_sleep (LIBZMQ_WRAPPER.72)
 */
void __cdecl LIBZMQ_WRAPPER_zmq_sleep(int seconds) {
    TRACE("zmq_sleep(%d): forwarding...\n", seconds);
    zmq_sleep(seconds);
    TRACE("zmq_sleep: returned\n");
}

/******************************************************************
 *	zmq_socket (LIBZMQ_WRAPPER.73)
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_socket(void * ctx, int type) {
    TRACE("zmq_socket(%p, %d): forwarding...\n", ctx, type);
    void * result = zmq_socket(ctx, type);
    TRACE("zmq_socket: result=%p\n", result);
    return result;
}

/******************************************************************
 *	zmq_socket_get_peer_state (LIBZMQ_WRAPPER.74)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_socket_get_peer_state(void) {
    FIXME("zmq_socketget_peer_state: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_socket_monitor (LIBZMQ_WRAPPER.75)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_socket_monitor(void) {
    FIXME("zmq_socketmonitor: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_socketmonitor_pipes_stats (LIBZMQ_WRAPPER.76)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_socket_monitor_pipes_stats(void) {
    FIXME("zmq_socketmonitor_pipes_stats: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_socketmonitor_versioned (LIBZMQ_WRAPPER.77)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_socket_monitor_versioned(void) {
    FIXME("zmq_socketmonitor_versioned: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_stopwatch_intermediate (LIBZMQ_WRAPPER.78)
 */
long __cdecl LIBZMQ_WRAPPER_zmq_stopwatch_intermediate(void) {
    FIXME("zmq_stopwatch_intermediate: stub\n");
    return (long) 0;
}

/******************************************************************
 *	zmq_stopwatch_start (LIBZMQ_WRAPPER.79)
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_stopwatch_start(void) {
    FIXME("zmq_stopwatch_start: stub\n");
    return (void *) 0;
}

/******************************************************************
 *	zmq_stopwatch_stop (LIBZMQ_WRAPPER.80)
 */
long __cdecl LIBZMQ_WRAPPER_zmq_stopwatch_stop(void) {
    FIXME("zmq_stopwatch_stop: stub\n");
    return (long) 0;
}

/******************************************************************
 *	zmq_strerror (LIBZMQ_WRAPPER.81)
 */
char * __cdecl LIBZMQ_WRAPPER_zmq_strerror(int errnum_) {
    FIXME("zmq_strerror: stub\n");
    return (char *) 0;
}

/******************************************************************
 *	zmq_term (LIBZMQ_WRAPPER.82)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_term(void * ctx) {
    TRACE("zmq_term(%p): forwarding...\n", ctx);
    int result = zmq_term(ctx);
    TRACE("zmq_term: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_threadclose (LIBZMQ_WRAPPER.83)
 */
void __cdecl LIBZMQ_WRAPPER_zmq_threadclose(void) {
    FIXME("zmq_threadclose: stub\n");
}

/******************************************************************
 *	zmq_threadstart (LIBZMQ_WRAPPER.84)
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_threadstart(zmq_thread_fn * func, void * arg) {
    FIXME("zmq_threadstart: stub\n");
    return (void *) 0;
}

/******************************************************************
 *	zmq_timers_add (LIBZMQ_WRAPPER.85)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_timers_add(void) {
    FIXME("zmq_timers_add: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_timers_cancel (LIBZMQ_WRAPPER.86)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_timers_cancel(void) {
    FIXME("zmq_timers_cancel: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_timers_destroy (LIBZMQ_WRAPPER.87)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_timers_destroy(void) {
    FIXME("zmq_timers_destroy: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_timers_execute (LIBZMQ_WRAPPER.88)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_timers_execute(void) {
    FIXME("zmq_timers_execute: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_timers_new (LIBZMQ_WRAPPER.89)
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_timers_new(void) {
    FIXME("zmq_timers_new: stub\n");
    return (void *) 0;
}

/******************************************************************
 *	zmq_timers_reset (LIBZMQ_WRAPPER.90)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_timers_reset(void) {
    FIXME("zmq_timers_reset: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_timers_set_interval (LIBZMQ_WRAPPER.91)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_timers_set_interval(void) {
    FIXME("zmq_timers_set_interval: stub\n");
    return (int) 0;
}

/******************************************************************
 *	zmq_timers_timeout (LIBZMQ_WRAPPER.92)
 */
long __cdecl LIBZMQ_WRAPPER_zmq_timers_timeout(void) {
    FIXME(": stub\n");
    return (long) 0;
}

/******************************************************************
 *	zmq_unbind (LIBZMQ_WRAPPER.93)
 */
int __cdecl LIBZMQ_WRAPPER_zmq_unbind(void * socket, const char * addr) {
    TRACE("zmq_unbind(%p, %s): forwarding...\n", socket, addr);
    int result = zmq_unbind(socket, addr);
    TRACE("zmq_unbind: result=%d\n", result);
    return result;
}

/******************************************************************
 *	zmq_version (LIBZMQ_WRAPPER.94)
 */
void __cdecl LIBZMQ_WRAPPER_zmq_version(int * major, int * minor, int * patch) {
    FIXME("zmq_version: stub\n");
}

/******************************************************************
 *	zmq_z85_decode (LIBZMQ_WRAPPER.95)
 */
uint8_t * __cdecl LIBZMQ_WRAPPER_zmq_z85_decode(uint8_t * dest, char * string) {
    FIXME("zmq_z85_decode: stub\n");
    return (uint8_t *) 0;
}

/******************************************************************
 *	zmq_z85_encode (LIBZMQ_WRAPPER.96)
 */
char * __cdecl LIBZMQ_WRAPPER_zmq_z85_encode(char * dest, uint8_t * data, size_t size) {
    FIXME("zmq_z85_encode: stub\n");
    return (char *) 0;
}

