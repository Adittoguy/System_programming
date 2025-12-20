#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int main()
{
    int iRet = 0;
    int fd = 0;

    fd = open("demo.txt", O_RDONLY);

    iRet = ftruncate(fd, 5);

    if(iRet == 0)
    {
        printf("Truncate is successful");
    }
    else
    {
        printf("There is issue in truncate");
    }

    return 0;
}