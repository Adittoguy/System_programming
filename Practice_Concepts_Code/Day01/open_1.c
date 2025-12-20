#include<stdio.h>
#include<fcntl.h> // powerfull lib created by dennis ritchie

int main()
{   
    int fd = 0; 
    fd = open("First.c", O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File gets successfully opened with fd: %d\n", fd);
    }


    return 0;
}