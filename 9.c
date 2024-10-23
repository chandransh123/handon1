/*
============================================================================
Name : 9.c
Author : Chandransh singh chouhan
Description :  Write a program to print the following information about a given file - 
//     1. Inode 
//     2. Number of hard links 
//     3. UID 
//     4. GID 
//     5. Size 
//     6. Block size 
//     7. Number of blocks 
//     8. Time of last access 
//     9. Time of last modification 
//     10. Time of last chang

============================================================================
*/
#include <sys/stat.h>
#include<stdio.h>
#include<time.h>
int main(){
    int status;
    struct stat statbuffer;
    status =stat("file.txt",&statbuffer);
    if(status==-1){
        printf("error");
    }
    else{
        printf("INODE=%ld\n",statbuffer.st_ino);
        printf("NO of hardlink=%ld\n",statbuffer.st_nlink);
        printf("Uid=%d\n",statbuffer.st_uid);
        printf("gid=%d\n",statbuffer.st_gid);
        printf("size=%ld\n",statbuffer.st_size);
        printf("Blocksize%ld\n",statbuffer.st_blksize);
        printf("No of blocks=%ld\n",statbuffer.st_blocks);
        printf("time of last accsess=%s\n",ctime(&statbuffer.st_atim.tv_sec));
		printf("time of last modification=%s\n",ctime(&statbuffer.st_mtim.tv_sec));
		printf("time of last change=%s\n",ctime(&statbuffer.st_ctim.tv_sec));
	}

    }


// INODE= 4596538
//  NO of hardlinks=1
// Uid=1000
// gid=1000
// size=0
// Blocksize=4096
// No of blocks=0
// time of last accsess=Sat Aug 31 15:55:15 2024

// time of last modification=Thu Aug 29 18:14:18 2024

// time of last change=Sat Aug 31 15:53:57 2024
