#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void fun()
{
    printf("Inside fun\n");
}

void gun()
{
    printf("Inside gun\n");
}

int main()
{
    printf("Process is Created\n");

    atexit(fun);
    atexit(gun);

    exit(11);
}
