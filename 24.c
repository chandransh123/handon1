/*
============================================================================
Name : 24.c
Author : Chandransh singh chouhan
Description : Write a program to create an orphan process
Date: 28th Aug, 2024.
============================================================================
*/

 #include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(){
    pid_t pid =fork();
    if(pid>0)
    printf("Present in parent process");
    else if( pid==0){
        sleep(30);
        printf("Present in child process");
    }
    return 0;
}
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ gcc -o 24 24.c
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ ./24
// Present in parent processchandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ 
