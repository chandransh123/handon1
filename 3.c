/*
============================================================================
Name : 3.c
Author : Chandransh singh chouhan
Description :Write a simple program to execute in an infinite loop at the background. Go to /proc directory and
             identify all the process related information in the corresponding proc directory.
Date: 28th Aug, 2024.
============================================================================
*/
#include <sys/types.h> 
#include <sys/stat.h> 
#include <fcntl.h>     
#include <stdio.h>     

void main(int argc, char *argv[])
{

    char *filename;
    int fileDes; // FD -> Success, -1 -> Error

    if (argc != 2)
        printf("Pass the file to open as argument\n");
    else
    {
        filename = argv[1];
// we pass filename through the bash command in which second one is our filename
        fileDes = creat(filename, S_IRWXU);

        if (fileDes == -1)
            perror("Error while creating the file!");
        else
            printf("The file was successfully created with the file descriptor -> %d\n", fileDes);
    }
}
/*
./3 file_1.txt
The file was successfully created with the file descriptor -> 3
*/