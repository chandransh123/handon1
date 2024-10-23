//  Name chandransh singh chouhan roll no-MT2024033 
// Question: Write a program to find out the opening mode of a file. Use fcntl
# include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main(){
    int fd=open("file_1.txt",O_RDWR);
    if(fd== -1){
        perror("error opening file");
        return 1;

    }
    int flag =fcntl(fd,F_GETFL);//used for find flag status
    if(flag ==-1){
    perror("error in retriving file flage");
    close(fd);
    return 1;
    }
    int A = flag & O_ACCMODE;
    // O_ACCMODE is a constant defined in <fcntl.h>. It is a bitmask used to extract the access mode (read, write, or read-write) from the flag variable.
if(A ==O_RDONLY){
    printf("file is opened in read-only mode");
}
else if( A==O_WRONLY)
{
    printf("file is opened in write-only mode");
}
else if( A==O_RDWR)
{
    printf("file is opened in read-write  mode");
}
close (fd);

}
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ gcc -o12 12.c
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ ./12
// file is opened in read-write 
//  modechandransh@chandransh-HP


