/*
============================================================================
Name : 22.c
Author : chandransh singh chouhan
Description: Write a program, open a file, call fork, and then write to the file by both the child as well as the parent processes. Check output of the file.
Date: 28th Aug, 2024.
============================================================================
*/
#include <unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int  main(){
    char *filename="chandrash.txt";
    int childpid,fd;
    fd=open(filename,O_CREAT|O_WRONLY|O_APPEND|S_IRWXU);
    if(fd<0){
        perror("failed");
        return 1;
    }
    if((childpid=fork())!=0)
    write(fd,"Parent\n",7);
    else 
    write(fd,"Child\n",5);
    close(fd);
    return 0;
}
/*
it create chandransh.txt file*/
