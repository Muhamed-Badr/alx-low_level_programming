#!/bin/bash

#create object files
gcc -c *.c

#create an rchive file (static library)
ar rc liball.a *.o # \
ranlib liball.a    # -- > These 2 commands can be replaced by `ar rcs liball.a *.o`

