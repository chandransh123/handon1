/*
============================================================================
Name : 1a.c
Author : Chandransh singh chouhan
Description : SymLink System Call - Soft Link
Date: 28th Aug, 2024.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>

int main(){
    // int symlink(const char *target, const char *linkpath);
    // In symlink after saving in symlink file it directly saves into symlinkpath file
    int symlin=symlink("symlink.txt","symlinkpath.txt");
    if(symlin==-1){
        perror("fail");
    }
    return 0;
}
