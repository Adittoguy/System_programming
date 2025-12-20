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

    memset(buffer, '\0', SIZE_BUFFER);          // Change

    fd = open("demo.txt", O_RDONLY);

    if(fd < 0)
    {
        printf("Unable to open the file.\n");
        printf("Reason : %s\n", strerror(errno));
        return -1;
    }

    printf("File successfully opened with fd : %d\n", fd);

    iRet = read(fd, buffer, 10);                           
    printf("%d bytes get successfully Read\n",iRet);
    printf("Data from file : %s\n", buffer);

    close(fd);

    fd = open("demo.txt", O_RDONLY);            // Again open (IMP)

    memset(buffer, '\0', SIZE_BUFFER);

    iRet = read(fd, buffer, 10);                           
    printf("%d bytes get successfully Read\n",iRet);
    printf("Data from file : %s\n", buffer);

    close(fd);

    return 0;
}