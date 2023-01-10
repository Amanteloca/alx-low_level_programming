#!/bin/bash
gcc -Wall -Wextra -Werror -Padantic -c *.c
ar  rc  liball.a *.o


