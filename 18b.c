/*
============================================================================
Name : 18b.c
Author : Chandransh singh chouhan
Description : Write a program to perform Record locking.

============================================================================
*/

#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>

int main()
{

    struct {
    int Trainno;
    int ticketno;
}db;

    int fd=open("record.txt",O_RDWR);
    struct flock lock;
    int train;
    printf("Enter the Train no (1,2,3,4)");
    scanf("%d",&train);
    lock.l_type=F_RDLCK;
    lock.l_whence=SEEK_SET;
    lock.l_start=(train-1)*sizeof(db);
    lock.l_pid=getpid();
    lseek(fd,(train-1)*sizeof(db),SEEK_SET);
    printf("PLease wait \n");
    fcntl(fd,F_SETLKW,&lock);
    read(fd,&db,sizeof(db));
    printf("no of tickets sold is %d\n",db.ticketno);
    lock.l_type=F_UNLCK;
    printf("press Enter to exit\n");
    getchar();
    getchar();
    fcntl(fd,F_SETLKW,&lock);
    
    return 0;

}

/*
Enter the train no (1,2,3,4)1
PLease wait 
no of tickets sold is 257
press Enter to exit

*/