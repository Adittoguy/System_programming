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
    DIR *dp = NULL;
    struct dirent *ptr = NULL;

    dp = opendir("./Data");

    if(dp == NULL)
    {
        printf("%s\n", strerror(errno));
        return -1;
    }
    
    ptr = readdir(dp);

    printf("Inode number : %ld\n", ptr -> d_ino);
    printf("File Name : %s\n", ptr -> d_name);

    ptr = readdir(dp);

    printf("Inode number : %ld\n", ptr -> d_ino);
    printf("File Name : %s\n", ptr -> d_name);

    ptr = readdir(dp);

    printf("Inode number : %ld\n", ptr -> d_ino);
    printf("File Name : %s\n", ptr -> d_name);

    return 0;
}