// Output depends on schedulling

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main()
{
    pid_t pid  = 0;
    
    pid = fork();

    if(pid == 0) // Child
    {
        printf("Child process is running\n");
        printf("pid of Child is %d & ppid of child is %d\n", getpid(), getppid());
    }
    else        // Parent
    {
        printf("Parent process is running\n");
        printf("pid of Parent is %d & ppid of Parent is %d\n", getpid(), getppid());
    }

    return 0;
}