#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int iRet = 0;
    iRet = unlink("demo.txt");

    if(iRet == 0)
    {
        printf("Unlink is successful\n");
    }

    return 0;
}