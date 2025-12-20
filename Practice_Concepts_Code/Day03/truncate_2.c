#include<unistd.h>
#include<stdio.h>

int main()
{
    int iRet = 0;

    iRet = truncate("demo.txt", 30);

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