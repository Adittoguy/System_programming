#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>

int main()
{
    char Path[50];
    memset(Path, '\0', sizeof(Path));

    getcwd(Path, sizeof(Path));

    printf("Current Directory name: %s\n", Path);     

    chdir("./Data");

    Path;
    memset(Path, '\0', sizeof(Path));

    getcwd(Path, sizeof(Path));
    printf("Current Directory name: %s\n", Path);     

    return 0;
}