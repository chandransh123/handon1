/*
============================================================================
Name : 5.c
Author : Chandransh singh chouhan
Description : Write a program to create five new files with infinite loop. Execute the program in the background
              and check the file descriptor table at /proc/pid/fd.
Date: 28th Aug, 2024.
============================================================================
*/
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
int main(int argc,char *argv[]){
    if(argc!=6){
        printf("error");
        return 0;
    }
    int f1=creat(argv[1],O_RDWR);
    int f2=creat(argv[2],O_RDWR);
    int f3=creat(argv[3],O_RDWR);
    int f4=creat(argv[4],O_RDWR);
    int f5=creat(argv[5],O_RDWR);
    printf("%d%d%d%d%d",f1,f2,f3,f4,f5);
    
while(1);
}
/*34567*/

// total 0
// lrwx------ 1 chandransh chandransh 64 Sep 13 03:06 0 -> /dev/pts/0
// lrwx------ 1 chandransh chandransh 64 Sep 13 03:06 1 -> /dev/pts/0
// lr-x------ 1 chandransh chandransh 64 Sep 13 03:06 103 -> /snap/code/168/usr/share/code/v8_context_snapshot.bin
// lrwx------ 1 chandransh chandransh 64 Sep 13 03:06 2 -> /dev/pts/0
// l-wx------ 1 chandransh chandransh 64 Sep 13 03:06 3 -> /home/chandransh/linux/5.1.txt
// lr-x------ 1 chandransh chandransh 64 Sep 13 03:06 38 -> /snap/code/168/usr/share/code/resources/app/node_modules.asar
// l-wx------ 1 chandransh chandransh 64 Sep 13 03:06 39 -> /home/chandransh/.config/Code/logs/20240913T022036/ptyhost.log
// l-wx------ 1 chandransh chandransh 64 Sep 13 03:06 4 -> /home/chandransh/linux/5.2.txt
// l-wx------ 1 chandransh chandransh 64 Sep 13 03:06 5 -> /home/chandransh/linux/5.3.txt
// l-wx------ 1 chandransh chandransh 64 Sep 13 03:06 6 -> /home/chandransh/linux/5.4.txt
// l-wx------ 1 chandransh chandransh 64 Sep 13 03:06 7 -> /home/chandransh/linux/5.5.txt
// chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ gcc 5.c -o 5