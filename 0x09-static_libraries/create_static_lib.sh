#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar  -rcs  liball.a all.o all.o


