#!/bin/bash
gcc -Wall -Werror -Wextra -C *.c
ar rc liball.a *.o
ranlib liball.a
