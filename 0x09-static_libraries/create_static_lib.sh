#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c
ar rc liballa *.o
