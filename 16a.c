/*
============================================================================
Name : 16a.c
Author : Chandransh singh chouhan
Description: Write a program to perform mandatory locking. 
    - Implement write lock

============================================================================
*/

#include <stdio.h>
#include <unistd.h>    
#include <fcntl.h>     
#include <sys/types.h> 
#include <sys/stat.h> 
void main(int argc,char *argv[]){
    char *filenam;
    struct flock locks ,lockstate;
    int filed;
    if (argc!=2)
    printf("pass thr file name to be locked ");
    else {
        filenam =argv[1];
           locks.l_type = F_WRLCK;    // Write locks
        locks.l_whence = SEEK_SET; // Seek to start of the file
        locks.l_start = 0;         // Lock from start of the file
        locks.l_len = 0;           // Locks the entire file
        locks.l_pid = getpid();
    }
    lockstate=locks;
    filed=open ("file.txt",O_RDWR);
    fcntl(filed,F_GETLK,&lockstate);
    if(lockstate.l_type==F_WRLCK)
    printf("file already locked");
    else if(lockstate.l_type==F_RDLCK)
    printf("file already locked for reading");
    else{
        fcntl(filed,F_SETLK,&locks);
        printf("file is now locked for writing");
    }

}
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ gcc -o 16.a 16.a.c
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ ./16.a
// pass thr file name to be locked file is now locked for writingchandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ 