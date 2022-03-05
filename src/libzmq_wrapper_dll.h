/*
 * libzmq_wrapper.dll
 *
 * Generated from libzmq_wrapper.dll by winedump.
 *
 * DO NOT SEND GENERATED DLLS FOR INCLUSION INTO WINE !
 *
 */
#ifndef __WINE_LIBZMQ_WRAPPER_DLL_H
#define __WINE_LIBZMQ_WRAPPER_DLL_H

#include "windef.h"
#include "wine/debug.h"
#include "winbase.h"
#include "winnt.h"


int __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_dec(void);
void __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_destroy(void);
int __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_inc(void);
void * __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_new(void);
void __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_set(void);
int __cdecl LIBZMQ_WRAPPER_zmq_atomic_counter_value(void);
int __cdecl LIBZMQ_WRAPPER_zmq_bind(void);
int __cdecl LIBZMQ_WRAPPER_zmq_close(void);
int __cdecl LIBZMQ_WRAPPER_zmq_connect(void);
uint32_t __cdecl LIBZMQ_WRAPPER_zmq_connect_peer(void);
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_destroy(void);
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_get(void);
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_get_ext(void);
void * __cdecl LIBZMQ_WRAPPER_zmq_ctx_new(void);
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_set(void);
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_set_ext(void);
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_shutdown(void);
int __cdecl LIBZMQ_WRAPPER_zmq_ctx_term(void);
int __cdecl LIBZMQ_WRAPPER_zmq_curve_keypair(char * z85_public_key_, char * z85_secret_key_);
int __cdecl LIBZMQ_WRAPPER_zmq_curve_public(char * z85_public_key_, char * z85_secret_key_);
int __cdecl LIBZMQ_WRAPPER_zmq_device(int type_, void * frontend_, void * backend_);
int __cdecl LIBZMQ_WRAPPER_zmq_disconnect(void);
int __cdecl LIBZMQ_WRAPPER_zmq_errno(void);
int __cdecl LIBZMQ_WRAPPER_zmq_getsockopt(void);
int __cdecl LIBZMQ_WRAPPER_zmq_has(char * capability_);
void * __cdecl LIBZMQ_WRAPPER_zmq_init(int io_threads_);
int __cdecl LIBZMQ_WRAPPER_zmq_join(void);
int __cdecl LIBZMQ_WRAPPER_zmq_leave(void);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_close(zmq_msg_t * msg_);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_copy(zmq_msg_t * dest_, zmq_msg_t * src_);
void * __cdecl LIBZMQ_WRAPPER_zmq_msg_data(zmq_msg_t * msg_);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_get(zmq_msg_t * msg_, int property_);
char * __cdecl LIBZMQ_WRAPPER_zmq_msg_gets(zmq_msg_t * msg_, char * property_);
char * __cdecl LIBZMQ_WRAPPER_zmq_msg_group(zmq_msg_t * msg);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_init(zmq_msg_t * msg_);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_init_buffer(zmq_msg_t * msg_, void * buf_, size_t size_);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_init_data(zmq_msg_t * msg_, void * data_, size_t size_, zmq_free_fn * ffn_, void * hint_);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_init_size(zmq_msg_t * msg_, size_t size_);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_more(zmq_msg_t * msg_);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_move(zmq_msg_t * dest_, zmq_msg_t * src_);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_recv(zmq_msg_t * msg_, void * s_, int flags_);
uint32_t __cdecl LIBZMQ_WRAPPER_zmq_msg_routing_id(zmq_msg_t * msg);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_send(zmq_msg_t * msg_, void * s_, int flags_);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_set(zmq_msg_t * msg_, int property_, int optval_);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_set_group(zmq_msg_t * msg, char * group);
int __cdecl LIBZMQ_WRAPPER_zmq_msg_set_routing_id(zmq_msg_t * msg, uint32_t routing_id);
size_t __cdecl LIBZMQ_WRAPPER_zmq_msg_size(zmq_msg_t * msg_);
int __cdecl LIBZMQ_WRAPPER_zmq_poll(zmq_pollitem_t * items_, int nitems_, long timeout_);
int __cdecl LIBZMQ_WRAPPER_zmq_poller_add(void);
int __cdecl LIBZMQ_WRAPPER_zmq_poller_add_fd(void);
int __cdecl LIBZMQ_WRAPPER_zmq_poller_destroy(void);
int __cdecl LIBZMQ_WRAPPER_zmq_poller_fd(void);
int __cdecl LIBZMQ_WRAPPER_zmq_poller_modify(void);
int __cdecl LIBZMQ_WRAPPER_zmq_poller_modify_fd(void);
void * __cdecl LIBZMQ_WRAPPER_zmq_poller_new(void);
int __cdecl LIBZMQ_WRAPPER_zmq_poller_remove(void);
int __cdecl LIBZMQ_WRAPPER_zmq_poller_remove_fd(void);
int __cdecl LIBZMQ_WRAPPER_zmq_poller_size(void);
int __cdecl LIBZMQ_WRAPPER_zmq_poller_wait(void);
int __cdecl LIBZMQ_WRAPPER_zmq_poller_wait_all(void);
int __cdecl LIBZMQ_WRAPPER_zmq_proxy(void);
int __cdecl LIBZMQ_WRAPPER_zmq_proxy_steerable(void);
int __cdecl LIBZMQ_WRAPPER_zmq_recv(void);
int __cdecl LIBZMQ_WRAPPER_zmq_recviov(void);
int __cdecl LIBZMQ_WRAPPER_zmq_recvmsg(void);
int __cdecl LIBZMQ_WRAPPER_zmq_send(void);
int __cdecl LIBZMQ_WRAPPER_zmq_send_const(void);
int __cdecl LIBZMQ_WRAPPER_zmq_sendiov(void);
int __cdecl LIBZMQ_WRAPPER_zmq_sendmsg(void);
int __cdecl LIBZMQ_WRAPPER_zmq_setsockopt(void);
void __cdecl LIBZMQ_WRAPPER_zmq_sleep(int seconds_);
void * __cdecl LIBZMQ_WRAPPER_zmq_socket(void);
int __cdecl LIBZMQ_WRAPPER_zmq_socket_get_peer_state(void);
int __cdecl LIBZMQ_WRAPPER_zmq_socket_monitor(void);
int __cdecl LIBZMQ_WRAPPER_zmq_socket_monitor_pipes_stats(void);
int __cdecl LIBZMQ_WRAPPER_zmq_socket_monitor_versioned(void);
long __cdecl LIBZMQ_WRAPPER_zmq_stopwatch_intermediate(void);
void * __cdecl LIBZMQ_WRAPPER_zmq_stopwatch_start(void);
long __cdecl LIBZMQ_WRAPPER_zmq_stopwatch_stop(void);
char * __cdecl LIBZMQ_WRAPPER_zmq_strerror(int errnum_);
int __cdecl LIBZMQ_WRAPPER_zmq_term(void);
void __cdecl LIBZMQ_WRAPPER_zmq_threadclose(void);
void * __cdecl LIBZMQ_WRAPPER_zmq_threadstart(zmq_thread_fn * func_, void * arg_);
int __cdecl LIBZMQ_WRAPPER_zmq_timers_add(void);
int __cdecl LIBZMQ_WRAPPER_zmq_timers_cancel(void);
int __cdecl LIBZMQ_WRAPPER_zmq_timers_destroy(void);
int __cdecl LIBZMQ_WRAPPER_zmq_timers_execute(void);
void * __cdecl LIBZMQ_WRAPPER_zmq_timers_new(void);
int __cdecl LIBZMQ_WRAPPER_zmq_timers_reset(void);
int __cdecl LIBZMQ_WRAPPER_zmq_timers_set_interval(void);
long __cdecl LIBZMQ_WRAPPER_zmq_timers_timeout(void);
int __cdecl LIBZMQ_WRAPPER_zmq_unbind(void);
void __cdecl LIBZMQ_WRAPPER_zmq_version(int * major_, int * minor_, int * patch_);
uint8_t * __cdecl LIBZMQ_WRAPPER_zmq_z85_decode(uint8_t * dest_, char * string_);
char * __cdecl LIBZMQ_WRAPPER_zmq_z85_encode(char * dest_, uint8_t * data_, size_t size_);



#endif	/* __WINE_LIBZMQ_WRAPPER_DLL_H */
