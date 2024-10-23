/*
============================================================================
Name : 28.c
Author : Chandransh singh chouhan
Description: Write a program to get maximum and minimum real time priority.

============================================================================
*/
#include <sched.h> // Import for `sched_get_priority_*` functions
#include <stdio.h> // Import for `printf`

void main()
{
    int maxP, minP;

    maxP = sched_get_priority_max(SCHED_RR);
    if (maxP == -1)
        perror("Error while finding max priority\n");
    else
        printf("The max priority with RR Scheduling Policy is : %d\n", maxP);

    minP= sched_get_priority_min(SCHED_RR);
    if (minP== -1)
        perror("Error while finding min priority\n");
    else
        printf("The min priority with RR Scheduling Policy is : %d\n", minP);

}
//         chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ ./28
// The max priority with RR Scheduling Policy is : 99
// The min priority with RR Scheduling Policy is : 1