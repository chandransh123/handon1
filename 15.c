/*
============================================================================
Name : 15.c
Author : chandransh singh chouhan
Description : Write a program to display the environmental variable of the user(use environ).
Date: 28th Aug, 2024.
============================================================================
*/
#include <stdio.h>
extern char **environ;
int isUser(char *var){
    return var[0]=='U'&& var[1]=='S'&& var[4]== '=';
}
void main(){
    int y=-1;
    while (environ[++y]!=NULL)
        if(isUser (environ[y]))
        printf("%s\n",environ[y]);

    
}
/*
USER=chandransh*/