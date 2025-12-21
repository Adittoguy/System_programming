#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid = 0;

    pid = fork();

    if(pid == 0)
    {
        printf("CHILD says PID of current process: %d\n, PID of parent : %d\n, Return value of fork: %d\n", getpid(), getppid(), pid);
        execl("./CommandExe","", NULL);
    }
    else
    {
        printf("PARENT says PID of current process: %d\n, PID of parent : %d\n, Return value of fork: %d\n", getpid(), getppid(), pid);
    }

    return 0;
}