#! /bin/bash
gcc -wall -wextra -werror -pedantic -c *.c
ar rc liball.a *.o
ranlib liball.a
