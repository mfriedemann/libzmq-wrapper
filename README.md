libzmq-wrapper - a winelib wrapper for libzmq
=============================================

### About

This is libzmq-wrapper, a simple winelib wrapper for libzmq.

Its purpose is to offer a small forward (proxy) dll to call a native
libzmq.so (using native epoll), to work around issues (crashes) with
wepoll under various wine versions, while the reasons for those crashes
are investigated and (hopefully) fixed.

### Usage

After installing a linux-native version of libzmq and building
libzmq-wrapper to link against it, you use wine DLL overrides to force
the loading of the proxy dll instead of the real one.

### Status

It is not a full forward dll, most of it is stubs, it handles only the
most important methods for setting up a connection.

It offers an OFFLINE mode where it does not actually connect to
anything but just pretends to (env variable `LIBZMQ_WRAPPER_OFFLINE`.
This is its main use, thanks to Glyph's broken Notification feature.

### License

The code is based on files created by winelib/winemaker, which are part
of the Wine project. It is therefore distributed under the
GNU Lesser General Public License, v2.1.


CopyLeft (L) Marko Friedemann - 2021, 2022
