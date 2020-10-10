#!/bin/bash
gcc -c *.c -c *.o
ar rcs liball.a *.o
