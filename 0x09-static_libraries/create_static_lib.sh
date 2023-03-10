#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library liball.a from all object files
ar -rc liball.a *.o

# Index the static library for faster linking
ranlib liball.a

# Clean up the object files
rm *.o
