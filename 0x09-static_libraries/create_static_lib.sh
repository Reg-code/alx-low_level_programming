#/bin/bash
gcc -Wall -pedantic -Wextra -Werror -c *.c
ar -r liball.a *o
randlib liball.a

