/*
============================================================================
Name : 4.c
Author : Chandransh singh chouhan
Description : Write a program to open a file in read only mode, read line by line and display each line as it is read. Close the file when end of file is reached.
Date: 28th Aug, 2024.
============================================================================
*/

#include <sys/types.h> // Import for `open` system call.
#include <sys/stat.h>  // Import for `open` system call.
#include <fcntl.h>     // Import for `open` system call.
#include <unistd.h>    // Import for `read` and `write` system call
#include <stdio.h>     // Import for `perrro` and `printf` functions

int main(int argc, char *argv[])
{

    char *filename;
    int fileDes;
    char buffer[1];

    
        filename = argv[2];
        fileDes = open("file.txt" ,"r");

        if (fileDes == -1)
            perror("Error while opening the file!");
        else
        {
            while (read(fileDes, buffer, 1) == 1)
            {
                if (buffer[0] == '\n')
                    write(STDOUT_FILENO, "\n\n", 2);
                else
                    write(STDOUT_FILENO, buffer, 1);
            }
            write(STDOUT_FILENO, "\n", 1);
            close(fileDes);
        }
    
}
//hii iam chandransh singh chouhan from cse 1 st year