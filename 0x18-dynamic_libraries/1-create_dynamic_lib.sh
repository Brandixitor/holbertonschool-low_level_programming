#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc *.o -shared -o liball.so
