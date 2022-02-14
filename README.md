# ci

A lot of C because I want to write C.  

## goals

- Learn C's modern ecosystem
- Call C from C++, Ruby, Node.js, and more
- CMake + CTest

## interfacing with C

Using different compilers:

`c99 -Wall -o executable source.c -lm`  
`clang -Wall -lm -o executable source.c`  
`gcc -std=c99 -Wall -lm -o executable source.c`  
`icc -std=c99 -Wall -lm -o executable source.c`  
Warnings: `-Wall`, Math lib: `-lm`, Compiler output: `-o`  
Run it: `./executable`

Find docs for a particular function:

`man printf`, `man 3 printf`, or `apropos printf`

## references

Modern C -- Jens Gustedt (2019)
