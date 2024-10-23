/*
============================================================================
Name : 8.c
Author : Chandransh singh chouhan
Description : Write a program to open an existing file with read write mode. Try O_EXCL flag also.
Date: 28th Aug, 2024.
============================================================================
*/
# include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(int argc,char* argv[]){
//we open file in both RDWR AND EXCL

   int o=open("file_1.txt",O_RDWR);
   printf("%d \n",o);
   int f=open("file_1.txt",O_EXCL);
   printf("%d \n",f);

}
/*gcc 4.c -o 4
./4
3 
4 */



