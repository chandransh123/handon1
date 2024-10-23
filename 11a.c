/*
============================================================================
Name : 11a.c
Author :chandransh singh chouhan
Description : Write a program to open a file, duplicate the file descriptor and append the file with both the descriptors and check whether the file is updated properly or not using `dup`

============================================================================
*/
#include <stdio.h>
#include <fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
int main(int argc,char*argv[]){
    char *file;
    int fid;
    int dupfd;
    file =argv[1];
    fid =open(file,O_WRONLY|O_APPEND);
    if(fid==-1){
        perror("didnt write");

    }
    dupfd=dup(fid);
    // using s1
    if(write(fid,"hello, ",7)!=7){
        perror("write");
    }
    //copy of s1
    if(write(dupfd,"World!",6)!=6){
        perror("write");
    }
    close(fid);
    close(dupfd);

}/*
./11a file1.txt
chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ cat file1.txt
loredbvjkdABCEDEFGHIxcdkjkldsm1234567890
Hello, World!hello, World!*/