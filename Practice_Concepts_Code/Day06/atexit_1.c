#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void fun()
{
    printf("Inside fun");
}

void gun()
{
    printf("Inside gun");
}

int main()
{
    printf("Process is Created\n");

    atexit(fun);
    atexit(gun);

    _exit(11);
}


// Robert love lsp