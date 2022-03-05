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

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void *reserved)
{
    TRACE("(%p, %u, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_WINE_PREATTACH:
            return FALSE;    /* prefer native version */
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
            break;
    }

    return TRUE;
}
/******************************************************************
 *		zmq_atomic_counter_dec (LIBZMQ_WRAPPER.1)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_dec(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_atomic_counter_destroy (LIBZMQ_WRAPPER.2)
 *
 *
 */
void __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_destroy(void)
{
	FIXME(":stub\n");
}
/******************************************************************
 *		zmq_atomic_counter_inc (LIBZMQ_WRAPPER.3)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_inc(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_atomic_counter_new (LIBZMQ_WRAPPER.4)
 *
 *
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_new(void)
{
	FIXME(":stub\n");
	return (void *) 0;
}
/******************************************************************
 *		zmq_atomic_counter_set (LIBZMQ_WRAPPER.5)
 *
 *
 */
void __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_set(void)
{
	FIXME(":stub\n");
}
/******************************************************************
 *		zmq_atomic_counter_value (LIBZMQ_WRAPPER.6)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_value(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_bind (LIBZMQ_WRAPPER.7)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_bind(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_close (LIBZMQ_WRAPPER.8)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_close(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_connect (LIBZMQ_WRAPPER.9)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_connect(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_connect_peer (LIBZMQ_WRAPPER.10)
 *
 *
 */
uint32_t __cdecl LIBZMQ_WRAPPER_zmq_connect_peer(void)
{
	FIXME(":stub\n");
	return (uint32_t) 0;
}
/******************************************************************
 *		zmq_ctx_destroy (LIBZMQ_WRAPPER.11)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_destroy(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_ctx_get (LIBZMQ_WRAPPER.12)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_get(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_ctx_get_ext (LIBZMQ_WRAPPER.13)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_get_ext(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_ctx_new (LIBZMQ_WRAPPER.14)
 *
 *
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_ctx_new(void)
{
	FIXME(":stub\n");
	return (void *) 0;
}
/******************************************************************
 *		zmq_ctx_set (LIBZMQ_WRAPPER.15)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_set(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_ctx_set_ext (LIBZMQ_WRAPPER.16)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_set_ext(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_ctx_shutdown (LIBZMQ_WRAPPER.17)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_shutdown(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_ctx_term (LIBZMQ_WRAPPER.18)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_term(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_curve_keypair (LIBZMQ_WRAPPER.19)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_curve_keypair(char * z85_public_key_, char * z85_secret_key_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_curve_public (LIBZMQ_WRAPPER.20)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_curve_public(char * z85_public_key_, char * z85_secret_key_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_device (LIBZMQ_WRAPPER.21)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_device(int type_, void * frontend_, void * backend_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_disconnect (LIBZMQ_WRAPPER.22)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_disconnect(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_errno (LIBZMQ_WRAPPER.23)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_errno(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_getsockopt (LIBZMQ_WRAPPER.24)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_getsockopt(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_has (LIBZMQ_WRAPPER.25)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_has(char * capability_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_init (LIBZMQ_WRAPPER.26)
 *
 *
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_init(int io_threads_)
{
	FIXME(":stub\n");
	return (void *) 0;
}
/******************************************************************
 *		zmq_join (LIBZMQ_WRAPPER.27)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_join(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_leave (LIBZMQ_WRAPPER.28)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_leave(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_close (LIBZMQ_WRAPPER.29)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_close(zmq_msg_t * msg_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_copy (LIBZMQ_WRAPPER.30)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_copy(zmq_msg_t * dest_, zmq_msg_t * src_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_data (LIBZMQ_WRAPPER.31)
 *
 *
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_msg_data(zmq_msg_t * msg_)
{
	FIXME(":stub\n");
	return (void *) 0;
}
/******************************************************************
 *		zmq_msg_get (LIBZMQ_WRAPPER.32)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_get(zmq_msg_t * msg_, int property_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_gets (LIBZMQ_WRAPPER.33)
 *
 *
 */
char * __cdecl LIBZMQ_WRAPPER_zmq_msg_gets(zmq_msg_t * msg_, char * property_)
{
	FIXME(":stub\n");
	return (char *) 0;
}
/******************************************************************
 *		zmq_msg_group (LIBZMQ_WRAPPER.34)
 *
 *
 */
char * __cdecl LIBZMQ_WRAPPER_zmq_msg_group(zmq_msg_t * msg)
{
	FIXME(":stub\n");
	return (char *) 0;
}
/******************************************************************
 *		zmq_msg_init (LIBZMQ_WRAPPER.35)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_init(zmq_msg_t * msg_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_init_buffer (LIBZMQ_WRAPPER.36)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_init_buffer(zmq_msg_t * msg_, void * buf_, size_t size_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_init_data (LIBZMQ_WRAPPER.37)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_init_data(zmq_msg_t * msg_, void * data_, size_t size_, zmq_free_fn * ffn_, void * hint_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_init_size (LIBZMQ_WRAPPER.38)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_init_size(zmq_msg_t * msg_, size_t size_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_more (LIBZMQ_WRAPPER.39)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_more(zmq_msg_t * msg_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_move (LIBZMQ_WRAPPER.40)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_move(zmq_msg_t * dest_, zmq_msg_t * src_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_recv (LIBZMQ_WRAPPER.41)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_recv(zmq_msg_t * msg_, void * s_, int flags_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_routing_id (LIBZMQ_WRAPPER.42)
 *
 *
 */
uint32_t __cdecl LIBZMQ_WRAPPER_zmq_msg_routing_id(zmq_msg_t * msg)
{
	FIXME(":stub\n");
	return (uint32_t) 0;
}
/******************************************************************
 *		zmq_msg_send (LIBZMQ_WRAPPER.43)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_send(zmq_msg_t * msg_, void * s_, int flags_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_set (LIBZMQ_WRAPPER.44)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_set(zmq_msg_t * msg_, int property_, int optval_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_set_group (LIBZMQ_WRAPPER.45)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_set_group(zmq_msg_t * msg, char * group)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_set_routing_id (LIBZMQ_WRAPPER.46)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_msg_set_routing_id(zmq_msg_t * msg, uint32_t routing_id)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_msg_size (LIBZMQ_WRAPPER.47)
 *
 *
 */
size_t __cdecl LIBZMQ_WRAPPER_zmq_msg_size(zmq_msg_t * msg_)
{
	FIXME(":stub\n");
	return (size_t) 0;
}
/******************************************************************
 *		zmq_poll (LIBZMQ_WRAPPER.48)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poll(zmq_pollitem_t * items_, int nitems_, long timeout_)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_poller_add (LIBZMQ_WRAPPER.49)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_add(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_poller_add_fd (LIBZMQ_WRAPPER.50)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_add_fd(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_poller_destroy (LIBZMQ_WRAPPER.51)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_destroy(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_poller_fd (LIBZMQ_WRAPPER.52)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_fd(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_poller_modify (LIBZMQ_WRAPPER.53)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_modify(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_poller_modify_fd (LIBZMQ_WRAPPER.54)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_modify_fd(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_poller_new (LIBZMQ_WRAPPER.55)
 *
 *
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_poller_new(void)
{
	FIXME(":stub\n");
	return (void *) 0;
}
/******************************************************************
 *		zmq_poller_remove (LIBZMQ_WRAPPER.56)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_remove(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_poller_remove_fd (LIBZMQ_WRAPPER.57)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_remove_fd(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_poller_size (LIBZMQ_WRAPPER.58)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_size(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_poller_wait (LIBZMQ_WRAPPER.59)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_wait(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_poller_wait_all (LIBZMQ_WRAPPER.60)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_poller_wait_all(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_proxy (LIBZMQ_WRAPPER.61)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_proxy(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_proxy_steerable (LIBZMQ_WRAPPER.62)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_proxy_steerable(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_recv (LIBZMQ_WRAPPER.63)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_recv(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_recviov (LIBZMQ_WRAPPER.64)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_recviov(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_recvmsg (LIBZMQ_WRAPPER.65)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_recvmsg(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_send (LIBZMQ_WRAPPER.66)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_send(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_send_const (LIBZMQ_WRAPPER.67)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_send_const(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_sendiov (LIBZMQ_WRAPPER.68)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_sendiov(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_sendmsg (LIBZMQ_WRAPPER.69)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_sendmsg(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_setsockopt (LIBZMQ_WRAPPER.70)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_setsockopt(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_sleep (LIBZMQ_WRAPPER.71)
 *
 *
 */
void __cdecl LIBZMQ_WRAPPER_zmq_sleep(int seconds_)
{
	FIXME(":stub\n");
}
/******************************************************************
 *		zmq_socket (LIBZMQ_WRAPPER.72)
 *
 *
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_socket(void)
{
	FIXME(":stub\n");
	return (void *) 0;
}
/******************************************************************
 *		zmq_socket_get_peer_state (LIBZMQ_WRAPPER.73)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_socket_get_peer_state(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_socket_monitor (LIBZMQ_WRAPPER.74)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_socket_monitor(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_socket_monitor_pipes_stats (LIBZMQ_WRAPPER.75)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_socket_monitor_pipes_stats(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_socket_monitor_versioned (LIBZMQ_WRAPPER.76)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_socket_monitor_versioned(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_stopwatch_intermediate (LIBZMQ_WRAPPER.77)
 *
 *
 */
long __cdecl LIBZMQ_WRAPPER_zmq_stopwatch_intermediate(void)
{
	FIXME(":stub\n");
	return (long) 0;
}
/******************************************************************
 *		zmq_stopwatch_start (LIBZMQ_WRAPPER.78)
 *
 *
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_stopwatch_start(void)
{
	FIXME(":stub\n");
	return (void *) 0;
}
/******************************************************************
 *		zmq_stopwatch_stop (LIBZMQ_WRAPPER.79)
 *
 *
 */
long __cdecl LIBZMQ_WRAPPER_zmq_stopwatch_stop(void)
{
	FIXME(":stub\n");
	return (long) 0;
}
/******************************************************************
 *		zmq_strerror (LIBZMQ_WRAPPER.80)
 *
 *
 */
char * __cdecl LIBZMQ_WRAPPER_zmq_strerror(int errnum_)
{
	FIXME(":stub\n");
	return (char *) 0;
}
/******************************************************************
 *		zmq_term (LIBZMQ_WRAPPER.81)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_term(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_threadclose (LIBZMQ_WRAPPER.82)
 *
 *
 */
void __cdecl LIBZMQ_WRAPPER_zmq_threadclose(void)
{
	FIXME(":stub\n");
}
/******************************************************************
 *		zmq_threadstart (LIBZMQ_WRAPPER.83)
 *
 *
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_threadstart(zmq_thread_fn * func_, void * arg_)
{
	FIXME(":stub\n");
	return (void *) 0;
}
/******************************************************************
 *		zmq_timers_add (LIBZMQ_WRAPPER.84)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_timers_add(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_timers_cancel (LIBZMQ_WRAPPER.85)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_timers_cancel(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_timers_destroy (LIBZMQ_WRAPPER.86)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_timers_destroy(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_timers_execute (LIBZMQ_WRAPPER.87)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_timers_execute(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_timers_new (LIBZMQ_WRAPPER.88)
 *
 *
 */
void * __cdecl LIBZMQ_WRAPPER_zmq_timers_new(void)
{
	FIXME(":stub\n");
	return (void *) 0;
}
/******************************************************************
 *		zmq_timers_reset (LIBZMQ_WRAPPER.89)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_timers_reset(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_timers_set_interval (LIBZMQ_WRAPPER.90)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_timers_set_interval(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_timers_timeout (LIBZMQ_WRAPPER.91)
 *
 *
 */
long __cdecl LIBZMQ_WRAPPER_zmq_timers_timeout(void)
{
	FIXME(":stub\n");
	return (long) 0;
}
/******************************************************************
 *		zmq_unbind (LIBZMQ_WRAPPER.92)
 *
 *
 */
int __cdecl LIBZMQ_WRAPPER_zmq_unbind(void)
{
	FIXME(":stub\n");
	return (int) 0;
}
/******************************************************************
 *		zmq_version (LIBZMQ_WRAPPER.93)
 *
 *
 */
void __cdecl LIBZMQ_WRAPPER_zmq_version(int * major_, int * minor_, int * patch_)
{
	FIXME(":stub\n");
}
/******************************************************************
 *		zmq_z85_decode (LIBZMQ_WRAPPER.94)
 *
 *
 */
uint8_t * __cdecl LIBZMQ_WRAPPER_zmq_z85_decode(uint8_t * dest_, char * string_)
{
	FIXME(":stub\n");
	return (uint8_t *) 0;
}
/******************************************************************
 *		zmq_z85_encode (LIBZMQ_WRAPPER.95)
 *
 *
 */
char * __cdecl LIBZMQ_WRAPPER_zmq_z85_encode(char * dest_, uint8_t * data_, size_t size_)
{
	FIXME(":stub\n");
	return (char *) 0;
}
