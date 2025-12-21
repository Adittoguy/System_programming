#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main()
{
    int iRet = 0;
    struct stat sobj;
    
    iRet = stat("demo.txt", &sobj);

    printf("Inode number : %ld\n", sobj.st_ino);

    printf("Hardlink Count : %ld\n", sobj.st_nlink);
    printf("Total size : %ld\n", sobj.st_size);
    printf("BLock size : %ld\n", sobj.st_blksize);
    
    printf("File type is : %d\n", sobj.st_mode);

    return 0;
}