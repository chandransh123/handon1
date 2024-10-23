/*
============================================================================
Name : 16b.c
Author : Chandransh singh chouhan
Description: Write a program to perform mandatory locking. 

============================================================================
*/
#include <stdio.h>
#include <unistd.h>    
#include <fcntl.h>     
#include <sys/types.h> 
#include <sys/stat.h> 
void main(int argc,char *argv[]){
    char *filenam;
    struct flock lock1 ,locks2;
    int fd;
    if (argc!=2){
        printf("pass the file name to be locked ");

    }
    else {
        filenam =argv[1];
        lock1.l_len=F_RDLCK;
        lock1.l_whence =SEEK_SET;
        lock1.l_start=0;
        lock1.l_len=0;
        lock1.l_pid=getpid();
        locks2 =lock1;
        fd=open(filenam,O_RDONLY);
        fcntl(fd,F_GETLK,&locks2);
        if(locks2.l_type ==F_WRLCK)
         printf("file already locked for writing\n");
         else if(locks2.l_type==F_RDLCK)
         printf("file already locked for reading\n");
         else {
            fcntl(fd,F_SETLK,&lock1);
            printf("file is now locked for reading\n");
         }


    }
}
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ gcc -o 16b 16b.c
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ ./16b
// pass th efile name to be locked
//file is now locked for reading