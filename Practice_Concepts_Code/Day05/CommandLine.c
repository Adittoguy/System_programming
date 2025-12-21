#include <stdio.h>

int main(int argc, char * argv[])
{
    printf("Inside Command Line Process\n");

    int i  = 0;

    printf("Command line Arguments are: \n");

    for(i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}