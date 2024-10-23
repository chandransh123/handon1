/*
============================================================================
Name : 27.c
Author : Chandransh singh chouhan
Description:  Write a program to execute `ls -Rl` by the following system calls 
    1. `execl` 
    2. `execlp` 
    3. `execle` 
    4. `execv` 
    5. `execvp`

============================================================================
*/

#include <stdio.h>
#include <unistd.h>

int main() {
    char *argis[] = {"ls", "-Rl", NULL};
    char *envi[] = {NULL};

    printf("Using execl:\n");
    execl("/bin/ls", "ls", "-Rl", NULL);
    printf("execl failed\n");

    printf("\nUsing execlp:\n");
    execlp("ls", "ls", "-Rl", NULL);
    printf("execlp failed\n");

    printf("\nUsing execle:\n");
    execle("/bin/ls", "ls", "-Rl", NULL, envi);
    printf("execle failed\n");

    printf("\nUsing execv:\n");
    execv("/bin/ls", argis);
    printf("execv failed\n");

    printf("\nUsing execvp:\n");
    execvp("ls", argis);
    printf("execvp failed\n");

    return 0;
}

/*
Using execl:
.:
total 800
-rwxrwxr-x 1 chandransh chandransh 16208 Sep 24 00:31  10
-rw-rw-r-- 1 chandransh chandransh  1406 Sep 24 00:31  10.c
-rwxrwxr-x 1 chandransh chandransh 16128 Sep  1 14:01  11a
-rw-rw-r-- 1 chandransh chandransh   519 Sep 11 11:25  11a.c
-rwxrwxr-x 1 chandransh chandransh 16128 Aug 31 11:48  12
-rw-rw-r-- 1 chandransh chandransh  1093 Sep 18 01:02  12.c
-rwxrwxr-x 1 chandransh chandransh 16096 Aug 31 12:29  13
-rw-rw-r-- 1 chandransh chandransh   994 Aug 31 12:30  13.c
-rwxrwxr-x 1 chandransh chandransh 16192 Aug 31 13:05  14
-rw-rw-r-- 1 chandransh chandransh  1299 Sep 11 11:25  14.c
-rwxrwxr-x 1 chandransh chandransh 16056 Sep 24 00:41  15
-rw-rw-r-- 1 chandransh chandransh   595 Sep 24 00:42  15.c
-rwxrwxr-x 1 chandransh chandransh 16136 Aug 31 15:54  16.a
-rw-rw-r-- 1 chandransh chandransh  1305 Sep 24 00:44  16.a.c
-rwxrwxr-x 1 chandransh chandransh 16176 Sep  1 09:08  16b
-rw-rw-r-- 1 chandransh chandransh  1171 Sep 11 11:25  16b.c
-rw-rw-r-- 1 chandransh chandransh   773 Sep 18 01:02  17.c
-rwxrwxr-x 1 chandransh chandransh 16000 Aug 31 17:31  19
-rw-rw-r-- 1 chandransh chandransh  1155 Sep 14 01:44  19.c
-rwxrwxr-x 1 chandransh chandransh 16000 Sep 12 22:40  1a
-rw-rw-r-- 1 chandransh chandransh   598 Sep 12 22:42  1a.c
-rwxrwxr-x 1 chandransh chandransh 16000 Sep 12 23:37  1b
-rw-rw-r-- 1 chandransh chandransh   465 Sep 12 23:36  1b.c
-rwxrwxr-x 1 chandransh chandransh 16000 Sep 13 00:21  1c
-rw-rw-r-- 1 chandransh chandransh   578 Sep 13 00:21  1c.c
-rwxrwxr-x 1 chandransh chandransh 15776 Sep 13 00:55  2
-rwxrwxr-x 1 chandransh chandransh 16040 Sep 14 01:48  20
-rw-rw-r-- 1 chandransh chandransh   993 Sep 18 01:02  20.c
-rwxrwxr-x 1 chandransh chandransh 16040 Aug 31 17:54  21
-rw-rw-r-- 1 chandransh chandransh   658 Sep 14 01:53  21.c
-rwxrwxr-x 1 chandransh chandransh 16128 Sep 24 00:52  22
-rw-rw-r-- 1 chandransh chandransh   838 Sep 24 00:55  22.c
-rwxrwxr-x 1 chandransh chandransh 16168 Aug 30 17:08  23
-rw-rw-r-- 1 chandransh chandransh   870 Sep 14 01:58  23.c
-rwxrwxr-x 1 chandransh chandransh 16040 Sep  1 08:52  24
-rw-rw-r-- 1 chandransh chandransh   758 Sep 14 01:56  24.c
-rwxrwxr-x 1 chandransh chandransh 16224 Sep 26 11:07  25
-rw-rw-r-- 1 chandransh chandransh  1899 Sep 26 11:09  25.c
-rwxrwxr-x 1 chandransh chandransh 15960 Sep 26 11:10  26
-rw-rw-r-- 1 chandransh chandransh   599 Sep 26 11:11  26.c
-rwxrwxr-x 1 chandransh chandransh 16224 Sep 26 11:13  27
-rw-rw-r-- 1 chandransh chandransh   265 Sep 11 11:25  27b.c
-rw-rw-r-- 1 chandransh chandransh  1025 Sep 26 11:13  27.c
-rwxrwxr-x 1 chandransh chandransh 16120 Aug 31 18:55  28
-rw-rw-r-- 1 chandransh chandransh   807 Aug 31 18:56  28.c
-rwxrwxr-x 1 chandransh chandransh 16256 Sep  1 09:24  29
-rw-rw-r-- 1 chandransh chandransh  2375 Sep 11 11:25  29.c
-rw-rw-r-- 1 chandransh chandransh   492 Sep 18 01:02  2.c
-rwxrwxr-x 1 chandransh chandransh 16040 Sep 13 01:26  3
-rwxrwxr-x 1 chandransh chandransh 16336 Sep  1 09:22  30
-rw-rw-r-- 1 chandransh chandransh  1093 Sep 11 11:25  30.c
-rw-rw-r-- 1 chandransh chandransh  1163 Sep 13 01:36  3.c
-rwxrwxr-x 1 chandransh chandransh 16000 Sep 13 01:51  4
-rw-rw-r-- 1 chandransh chandransh   650 Sep 14 01:20  4.c
-rwxrwxr-x 1 chandransh chandransh 16128 Sep 13 03:08  5
---------- 1 chandransh chandransh     0 Sep 13 02:50  5.1.txt
---------- 1 chandransh chandransh     0 Sep 13 02:50  5.2.txt
---------- 1 chandransh chandransh     0 Sep 13 02:50  5.3.txt
---------- 1 chandransh chandransh     0 Sep 13 02:50  5.4.txt
---------- 1 chandransh chandransh     0 Sep 13 02:50  5.5.txt
-rw-rw-r-- 1 chandransh chandransh  1922 Sep 13 03:12  5.c
-rw-rw-r-- 1 chandransh chandransh 70294 Aug 29 19:03  5.file.png
-rwxrwxr-x 1 chandransh chandransh 16096 Sep 13 23:32  6
-rw-rw-r-- 1 chandransh chandransh   885 Sep 13 23:33  6.c
-rw-rw-r-- 1 chandransh chandransh 14909 Aug 29 19:02  6.r_w.c.png
-rwxrwxr-x 1 chandransh chandransh 16216 Sep 13 23:57  7
-rw-rw-r-- 1 chandransh chandransh   801 Sep 14 00:22  7.c
-rwxrwxr-x 1 chandransh chandransh 16176 Sep  1 12:22  8
-rw-rw-r-- 1 chandransh chandransh  1357 Sep 18 01:02  8.c
-rwxrwxr-x 1 chandransh chandransh 16088 Sep  1 12:41  9
-rw-rw-r-- 1 chandransh chandransh  1643 Sep 18 01:02  9.c
-rwxrwx--- 1 chandransh chandransh    12 Sep 24 00:52  chandrash.txt
-rwxrw-r-- 1 chandransh chandransh     0 Sep 13 02:26 'COLORTERM=truecolor'
prwx------ 1 chandransh chandransh     0 Sep 13 00:16  fifa
---------- 1 chandransh chandransh     0 Sep 14 00:02  file10.txt
---------- 1 chandransh chandransh     0 Sep 14 00:03  file11.txt
---------- 1 chandransh chandransh     0 Sep 14 00:05  file12.txt
---------- 1 chandransh chandransh     0 Sep 14 00:06  file13.txt
-rw-r--r-- 1 chandransh chandransh     0 Sep 13 01:05  file_1.txt
-rw-r--r-- 1 chandransh chandransh    41 Sep 13 23:59  file1.txt
-rw------- 1 chandransh chandransh    41 Sep 14 00:10  file20.txt
-rw------- 1 chandransh chandransh     1 Sep 14 00:12  file21.txt
-rw-r--r-- 1 chandransh chandransh     0 Sep 13 03:05  file2.txt
---------- 1 chandransh chandransh     1 Sep 14 00:13  file31.txt
-rw-r--r-- 1 chandransh chandransh     0 Sep 13 03:05  file3.txt
---------- 1 chandransh chandransh     1 Sep 14 00:16  file41.txt
-rw-r--r-- 1 chandransh chandransh     0 Sep 13 03:05  file4.txt
-rw------- 1 chandransh chandransh     1 Sep 14 00:17  file51.txt
-rw-r--r-- 1 chandransh chandransh     0 Sep 13 03:05  file5.txt
-rw------- 1 chandransh chandransh    41 Sep 14 00:21  file71.txt
---------- 1 chandransh chandransh     0 Sep 13 23:57  file7.txt
---------- 1 chandransh chandransh     0 Sep 13 23:59  file8.txt
---------- 1 chandransh chandransh     0 Sep 14 00:00  file9.txt
-rwxrwxr-x 1 chandransh chandransh 16216 Sep 14 00:20  file_copy
-rw-rw-r-- 2 chandransh chandransh    19 Sep 12 23:39  hardlinkpath.txt
-rw-rw-r-- 2 chandransh chandransh    19 Sep 12 23:39  hardlink.txt
-rw-rw-r-- 1 chandransh chandransh   147 Aug 29 11:45  notes
-rw-rw-r-- 1 chandransh chandransh     0 Sep 18 01:02  notes.txt
-rwxrw-r-- 1 chandransh chandransh     0 Sep 13 02:26 'QT_ACCESSIBILITY=1'
-rwxrwxr-x 1 chandransh chandransh 16096 Aug 29 18:57  r_w
-rw-rw-r-- 1 chandransh chandransh   314 Aug 29 18:48  r_w.c
lrwxrwxrwx 1 chandransh chandransh    11 Sep 12 22:40  symlinkpath.txt -> symlink.txt
-rw-rw-r-- 1 chandransh chandransh    33 Sep 12 23:39  symlink.txt*/