/*
============================================================================
Name : 18a.c
Author : Chandransh singh chouhan
Description : Write a program to perform Record locking.
                       a. Implement write lock

============================================================================
*/


#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
    struct {
    int trainno;
    int ticketno;
}db;
    int fd=open("record.txt",O_RDWR);
    struct flock lock;
    int train;
    printf("Enter the train no (1,2,3,4)");
    scanf("%d",&train);
    lock.l_type=F_WRLCK;
    lock.l_whence=SEEK_SET;
    lock.l_start=(train-1)*sizeof(db);
    lock.l_pid=getpid();
    lseek(fd,(train-1)*sizeof(db),SEEK_SET);
    printf("PLease wait \n");
    fcntl(fd,F_SETLKW,&lock);
    read(fd,&db,sizeof(db));
    printf("no of tickets sold is %d\n",db.ticketno);
    
    db.ticketno++;
    lseek(fd,-1*sizeof(db),SEEK_CUR);
    
    
    lock.l_type=F_UNLCK;
    printf("press Enter to book ticket\n");
    getchar();
    getchar();
    printf("Your ticket no is %d\n",db.ticketno);
    write(fd,&db,sizeof(db));
    fcntl(fd,F_SETLKW,&lock);
    
    return 0;

}
/*
Enter the train no (1,2,3,4)1
PLease wait 
no of tickets sold is 257
press Enter to book ticket

Your ticket no is 258*/