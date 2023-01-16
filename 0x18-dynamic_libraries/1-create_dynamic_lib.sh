#!/bin/bash
gcc -fPIC -C *.c
gcc -shared -o liball.so *.o
