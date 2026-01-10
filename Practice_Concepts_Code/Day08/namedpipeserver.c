// Named pipe server

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    int iRet = 0;

    iRet = mkfifo("/tmp/marvellous", 0666);

    if(iRet == 0)
    {
        printf("Named pipe gets created");
    }

    return 0;
}