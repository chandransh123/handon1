/*
============================================================================
Name : 6.c
Author : Chandransh singh chouhan
Description : Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
Date: 28th Aug, 2024.
============================================================================
*/
#include<stdio.h> //Import for 'read' and 'write' syatem call
#include<unistd.h>// import for 'perror' function
int main(){
	char *buffer[50];
	int readin ,writein;
	// reading the file 
	// syntax:-ssize_t read(int fd, void *buf, size_t count);
	while(1){
	readin =read(STDIN_FILENO,buffer,1);//STDIN_FILENO usually start from zero
	// writing on the file
	writein=write(STDOUT_FILENO,buffer,1);//STDOUT_FILENO usually start from one
	if(readin==-1|| writein==-1){
		perror("error");
		break;
	}
}}
/*
hii i am here to win
hii i am here to win
*/