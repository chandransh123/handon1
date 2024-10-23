/*
============================================================================
Name : 1c.c
Author : Chandransh singh chouhan
Description : FIFO (mkfifo Library Function or mknod system call)
Date: 28th Aug, 2024.
============================================================================
*/
#include<stdio.h>
#include <sys/stat.h>
// int mkfifo(const char *pathname, mode_t mode);
int main(int argc,char*argv[]){
    
    int fifa=mkfifo(argv[1],S_IRWXU);

    if(fifa==0){
        printf("fifo special file is created");
    }
    return 0;
}
// fifo special file is created