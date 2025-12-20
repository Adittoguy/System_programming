#include<stdio.h>
#include<fcntl.h> 

int main()
{   
    int fd = 0; 
    fd = open("Second.c", O_RDWR);          // Second.c doesn't exist

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets successfully opened with fd: %d\n", fd);
    }


    return 0;
}