/*
============================================================================
Name : 26.c
Author : chandransh singh chouhan
Description Write a program to execute an executable program.
    1. Use some executable program
    2. Pass some input to an executable program. (for example execute an executable of `$./a.out name`)

============================================================================
*/

#include <unistd.h> // Import for `execl` library function

int main()
{
    char *executablepath = "./14.c";
    char *arg = "14.c";

    execl(executablepath, executablepath, arg, NULL);
}