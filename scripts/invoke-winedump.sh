#! /bin/bash

pushd ../src

winedump spec ../libzmq-v120-mt-4_3_5.dll -o libzmq_wrapper -c -C -I ../libzmq/include

popd
