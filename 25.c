/*
============================================================================
Name : 25.c
Author : Chandransh singh chouhan
Description : Write a program to create three child processes. The parent should wait for a particular child (use `waitpid` system call).
Date: 28th Aug, 2024.
============================================================================
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t Pid1, Pid2, Pid3;
    int state;

    // first child
    Pid1 = fork();
    if (Pid1 == -1)
    {
        perror("fork");
        return 1;
    }
    else if (Pid1 == 0)
    {
        // first child process
        printf("first child pid:%d\n", getpid());
        sleep(5);
        return 1;
    }

    // second child
    Pid2 = fork();
    if (Pid2 == -1)
    {
        perror("fork");
        return 1;
    }
    else if (Pid2 == 0)
    {
        // second child process
        printf("second child pid:%d\n", getpid());
        sleep(10);
        return 2;
    }

    // third child
    Pid3 = fork();
    if (Pid3 == -1)
    {
        perror("fork");
        return 1;
    }
    else if (Pid3 == 0)
    {
        // third child process
        printf("third child pid:%d\n", getpid());
        sleep(15);
        return 3;
    }

    // Parent process
    printf("Parent process (PID:%d)\n", getpid());

    // wait for the second child process
    pid_t wpid = waitpid(Pid2, &state, 0);
    if (wpid == -1)
    {
        perror("waitpid");
        return 1;
    }

    if (WIFEXITED(state))
    {
        printf("Second child process (PID: %d) exited with state %d\n", wpid, WEXITSTATUS(state));
    }
    else
    {
        printf("Second child process (PID: %d) terminated abnormally\n", wpid);
    }

    return 0;
}

/*
first child pid:3549
Parent process (PID:3548)
third child pid:3551
second child pid:3550
*/