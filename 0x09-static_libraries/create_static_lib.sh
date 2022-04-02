#/bin/bash
gcc -Wall -Werror -pedantic -Wextra -c *.c
ar -rc liball.a *o
randlib liball.a

