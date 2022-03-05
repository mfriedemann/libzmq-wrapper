#! /bin/bash

pushd ../src

winemaker --wine32 --nosource-fix --dll --nomfc -I../libzmq/include .

popd
