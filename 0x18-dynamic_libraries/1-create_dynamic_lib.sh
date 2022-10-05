#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic *.c -fPIC 
gcc *.o -shared -o liball.so
