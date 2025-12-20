#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int iRet = 0;
    iRet = link("./Demo.txt", "./Test/Demo.txt");

    if(iRet == 0)
    {
        printf("Link is successful\n");
    }

    return 0;
}