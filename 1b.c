/*
============================================================================
Name : 1b.c
Author : Chandransh singh chouhan
Description : Link System Call - Hard Link
Date: 28th Aug, 2024.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
int main(){
    int hardlink=link("hardlink.txt","hardlinkpath.txt");
    if(hardlink==-1){
        perror("link");
        return 1;
    }
    return 0;
}