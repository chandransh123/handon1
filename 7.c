/*
============================================================================
Name : 7.c
Author : Chandransh singh chouhan
Description : Write a program to copy file1 into file2.

============================================================================
*/
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<errno.h>
#include<sys/types.h>
int main(int argc,char *argv[]){
	int file1= open(argv[1],O_RDONLY);
	if(file1<0){
       perror("error");
	   exit(0);
	}
	int file2=open(argv[2],O_EXCL|O_CREAT|O_WRONLY,0600);
	if(file2<0){
		perror("error");
		exit(0);
	}
	char buffer[1024];
	int n;
	while((n=read(file1,buffer,sizeof(buffer)))>0)
   {write(file2,buffer,n);}
    close(file1);
    close(file2);
    return 0;
}
/*./7 file1.txt file420.txt*/


