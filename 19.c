/*
============================================================================
Name : 19.c
Author : Chandransh singh chouhan
Description :  Question : Write a program to find out time taken to execute getpid system call. Use time stamp counter.
Date: 28th Aug, 2024.
============================================================================
*/
#include <sys/time.h>  // Import for `gettimeofday` system call
#include <sys/types.h> // Import for `getpid` system call
#include <unistd.h>    // Import for `getpid` system call
#include <stdio.h>     // Import for printf
// import for __rdtsc()
#ifdef _MSC_VER
#include <intrin.h>
#else 
#include <x86intrin.h>
#endif
void main(){
    int start,end,pid;
    struct timeval timestamp;
    start=__rdtsc();// this records the number of clock cycles before calling getpid()
    pid=getpid();
    end=__rdtsc();//this records the number of clock cycles after getpid() call
    printf("PID:%d\n",pid);
    printf("time taken:%d\n",(end-start));

}
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ gcc -o 19 19.c
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ ./19
// PID:27585
// time taken:8064