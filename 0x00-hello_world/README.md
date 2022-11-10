this directory contains scripts for c processing, compiling and assembling
0-prepocesor- a script that runs a C file through the preprocessor and save the result into another file

gcc -E $CFILE -o c

1-compiler- a script that compiles a C file but does not link.

gcc -c $CFILE

2-assembler- a script that generates the assembly code of a C code and save it in an output file.

gcc -S $CFILE

3-name- a script that compiles a C file and creates an executable named cisfun

gcc $CFILE -o cisfun

4-puts.c- a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

5-printf.c- a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

6-size.c- a C program that prints the size of various types on the computer it is compiled and run on.

