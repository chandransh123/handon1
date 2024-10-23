/*
============================================================================
Name : 13.c
Author : chandransh singh chouhan
Description : Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to verify whether the data is available within 10 seconds or not (check in $man 2 select).

============================================================================
*/

#include <stdio.h>
#include <sys/select.h>
#include <unistd.h>
int main(){
    fd_set read;
    struct timeval time;
    FD_ZERO (&read);
    FD_SET(STDIN_FILENO,&read);
    time.tv_sec =10 ;
    time.tv_sec=0;
    int retrive =select(STDIN_FILENO+1,&read,NULL,NULL,&time);
    if(retrive ==-1){
        perror("select");
        return 1;
    }
    else if(retrive==0){
        printf("no data available within 10 seconds.timeout occured");
    }
    else {
        if(FD_ISSET(STDIN_FILENO,&read))
            printf("data is available on stdin within 10 seconds");
        
    }
    return 0;



}
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ gcc -o 13 13.c
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ ./13
// no data available within 10 seconds.timeout occured