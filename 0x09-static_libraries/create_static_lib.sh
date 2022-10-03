#!/bin/bash
gcc -Wall -pedantic -Wextra -c *.c
ar rc liballa *.o
