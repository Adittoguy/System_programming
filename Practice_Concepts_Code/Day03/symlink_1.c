#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>

int main()
{
    int iRet = 0;
    iRet = symlink("demox.txt", "hello.txt");

    if(iRet == 0)
    {
        printf("Symlink is successful\n");
    }
    else
    {
        printf("%s\n", strerror(errno));
    }

    return 0;
}