#include<stdio.h>
#include<unistd.h>

int main()
{
    void * ptr = NULL;

    ptr = sbrk(0);

    printf("Current break value : %p", ptr);

    *(char *) ptr = 'A';        // Dont do this

    return 0;
}