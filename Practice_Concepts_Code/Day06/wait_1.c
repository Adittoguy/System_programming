#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main()
{
    pid_t pid = 0;

    pid = fork(); 
    
    if(pid == 0)
    {
        sleep(10);
        printf("Child process is running\n");
    }
    else
    {
        printf("Parent process is running");
    }

    return 0;
}