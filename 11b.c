/*
============================================================================
Name : 11b.c
Author : Chandransh singh chouhan
Description : Write a program to open a fle, duplicate the fle descriptor and append the fle with both the descriptors and check whether the fle is updated properly or not using `dup`

============================================================================
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    char *fle;
    int fd;
    int dupfd;

    fle = argv[1];
    fd = open(fle, O_WRONLY | O_APPEND | O_CREAT, 0644);
    if (fd == -1)
    {
        perror("Didn't write");
    }

    // Duplicate the fle descriptor using dup2
    dupfd = dup2(fd, 10); // Duplicate to fle descriptor 10
    if (dupfd == -1)
    {
        perror("dup2");
        close(fd);
    }

    // Write to the fle using the original descriptor
    if (write(fd, "Hello, ", 7) != 7)
    {
        perror("write");
    }

    // Write to the fle using the duplicated descriptor
    if (write(10, "World!", 6) != 6)
    {
        perror("write");
    }

    close(fd);
    close(10);
}
/*./11b file1.txt
chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ cat file1.txt
loredbvjkdABCEDEFGHIxcdkjkldsm1234567890
Hello, World!hello, World!Hello, World!*/
