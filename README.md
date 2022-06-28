# ci

A lot of C because I want to write C.  

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
Mastering Algorithms with C -- Kyle Loudon (1999)

## data types

char 1 byte == 8 bits  
short 2 bytes == 16 bits  
int 2-4 bytes == 16-32 bits  
long 4 bytes == 32 bits  
long long 8 bytes == 64 bits  
