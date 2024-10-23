/*
============================================================================
Name : 23.c
Author : chandransh singh chouhan
Description : Write a program to create a Zombie state of the running program.
Date: 28th Aug, 2024.
============================================================================
*/
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
void main(){
    pid_t  childPid;
    if((childPid=fork())!=0)
    {
        printf("pid :%d\n",getpid());
        printf("sleep");
        sleep(100);
        printf("parent is now awake\n");
        
    }
    else{
        printf("childpid :%d\n",getpid());
        printf("exiting child \n");
        _exit(0);
    }
}

// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ gcc 23.c
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ ./a.out
// pid :14276
// childpid :14277
// exiting child 