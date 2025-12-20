#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

#define SIZE_BUFFER 100

int main()
{
    int fd = 0;
    char buffer[SIZE_BUFFER];
    int iRet = 0;

    memset(buffer, '\0', SIZE_BUFFER);

    fd = open("demo.txt", O_RDONLY);

    if(fd < 0)
    {
        printf("Unable to open the file.\n");
        printf("Reason : %s\n", strerror(errno));
        return -1;
    }

    printf("File successfully opened with fd : %d\n", fd);

    iRet = read(fd, buffer, 10);

    memset(buffer, '\0', SIZE_BUFFER);

    iRet = lseek(fd, 5, SEEK_CUR);

    printf("Updates file offset is %d\n", iRet);

    iRet = read(fd, buffer, 11);

    printf("Data from file is : %s\n", buffer);

    close(fd);

    return 0;
}