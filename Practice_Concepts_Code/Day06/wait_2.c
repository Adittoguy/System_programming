#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main()
{
    pid_t pid = 0;
    pid_t x = 0;

    int status = 0;

    pid = fork(); 
    
    if(pid == 0)        // Child
    {
        sleep(10);
        exit(21);
    }
    
    x = wait(&status);

    printf("Child wit pid %d gets terminated with status %d\n", x, WEXITSTATUS(status));
    
    return 0;
}