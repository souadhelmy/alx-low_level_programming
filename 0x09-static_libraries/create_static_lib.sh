#!/bin/bash
LIBNAME=liball.a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c;
ar -rc $LIBNAME *.o;
ranlib $LIBNAME
rm *.o
