/*
============================================================================
Name : 14.c
Author : Chandransh singh chouhan
Description : Write a program to find the type of a file.
    1. Input should be taken from command line.
    2. Program should be able to identify any type of a file.

============================================================================
*/
#include <stdio.h>
#include<sys/stat.h>
#include <unistd.h>
void print(const char *path){
    struct stat file;
    if (stat(path,&file)==-1){
        perror("stat");
        return;
    }
    if(S_ISREG(file.st_mode)){
        printf("%s is a regular file.\n",path);
    }
      else if(S_ISDIR(file.st_mode)){
        printf("%s is a directory.\n",path);
    }

  else if(S_ISCHR(file.st_mode)){
        printf("%s is a character device .\n",path);
    }

  else if(S_ISBLK(file.st_mode)){
        printf("%s is a block device.\n",path);
    }

 else if(S_ISFIFO(file.st_mode)){
        printf("%s is a FIFO(named pipe).\n",path);
    }

  else if(S_ISLNK(file.st_mode)){
        printf("%s is a socket.\n",path);
    }
    else if (S_ISSOCK(file.st_mode)){
        printf("%s is of an unknown type.\n",path);
    }

}
int main(int argc ,char *argv[]){
    if(argc!=2){
      fprintf(stderr, "Usage: %s <file-path>\n", argv[0]);
        return 1;
    }
    print(argv[1]);
    return 0;
}
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ ./14 /home/chandransh/hello.txt
// /home/chandransh/hello.txt is a regular file.
