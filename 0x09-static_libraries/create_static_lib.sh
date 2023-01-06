#!/bin/bash
<<<<<<< HEAD
LIBNAME=liball.a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c;
ar -rc $LIBNAME *.o;
ranlib $LIBNAME
rm *.o
=======
gcc -Wall -pedantic -Werror -Wextra -c *.c
>>>>>>> 38cdb6c7f7bc273ff7318036fb437d85a66be41a
