#!/usr/bin/env bash

# Generate object files
# -c to stop after compilation
gcc -Wall -c main.c blue.c green.c

# Link object files with -o
gcc -Wall main.o blue.o green.o -o ./cool_colors

# One-line alternative, no object files
# gcc -Wall main.c blue.c green.c -o ./cool_colors

./cool_colors
