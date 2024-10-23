/*
============================================================================
Name : 20.c
Author : Chandransh singh chouhan
Description :   Find out the priority of your running program. Modify the priority with nice command.
Date: 28th Aug, 2024.
============================================================================
*/
# include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
 void main(int argc ,char *argv[]){
    int priority,newposition;
    if ((argc!=2)){
    printf("please pass the integer value");}
    else {
        newposition=atoi(argv[1]);
        priority=nice(0);// get the priority by adding 0 to current priority
        printf("current priority :%d\n",priority);
        priority=nice(newposition);//adds 'newp to the current priority
        printf("new priority:%d\n",priority);
    }
    
 }
/*chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ gcc 20.c -o 20
chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ ./20 1
current priority :0
new priority:1*/
