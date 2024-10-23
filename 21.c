/*
============================================================================
Name : 21.c
Author : chandransh singh chouhan
Description : Write a program, call fork and print the parent and child process id. 
Date: 28th Aug, 2024.
============================================================================
*/

#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
void main(){
    int childPid,pid;
    pid=getpid();
    printf("parent pid:%d\n",pid);
    childPid=fork();
    if(childPid!=0){
        printf("child PID :%d\n",childPid );
    }

}
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ ./21
// parent pid:29670
// child PID :29671