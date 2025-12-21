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

    if(S_ISBLK(sobj.st_mode))
    {
        printf("Block device\n");
    }
    else if(S_ISCHR(sobj.st_mode))
    {
        printf("Character device\n");
    }
    else if(S_ISDIR(sobj.st_mode))
    {
        printf("Directory file\n");
    }
    else if(S_ISREG(sobj.st_mode))
    {
        printf("Regular file\n");
    }
    else if(S_ISSOCK(sobj.st_mode))
    {
        printf("Sock file\n");
    }
    else if(S_ISFIFO(sobj.st_mode))
    {
        printf("Pipe link\n");
    }
    else if(S_ISLNK(sobj.st_mode))
    {
        printf("Symobolic link\n");
    }

    return 0;
}