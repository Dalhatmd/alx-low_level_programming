#!/usr/bin/sh
cat *.c | gcc -c -fPIC -x c - -o libdynamic.o
gcc -shared -o libdynamic.so libdynamic.o
