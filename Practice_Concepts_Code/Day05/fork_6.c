#include <stdio.h>
#include <unistd.h>

int main()
{
    if(fork() == 0)
    {
        printf("Child proccess scheduled\n");
    }    
    else
    {
        printf("Parent proccess scheduled\n");
    }

    return 0;
}