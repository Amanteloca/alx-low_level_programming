#!/bin/bash
gcc -wall -wextra -werror -padantic -c *.c
ar  rc  liball.a *.o


