libzmq-wrapper - a winelib wrapper for libzmq
=============================================

### About

This is libzmq-wrapper, a simple winelib wrapper for libzmq.

Its purpose is to offer a small forward (proxy) dll to call a native
libzmq.so (using native epoll), to work around issues (crashes) with
wepoll under various wine versions, while the reasons for those crashes
are investigated and (hopefully) fixed.

### License

The code is based on files created by winelib/winemaker, which are part
of the Wine project. It is therefore distributed under the
GNU Lesser General Public License, v2.1.


CopyLeft (L) Marko Friedemann - 2021, 2022
