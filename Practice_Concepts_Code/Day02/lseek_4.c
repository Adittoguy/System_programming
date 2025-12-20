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

    fd = open("Hole.txt", O_WRONLY | O_CREAT);

    if(fd < 0)
    {
        printf("Unable to open the file.\n");
        printf("Reason : %s\n", strerror(errno));
        return -1;
    }

    printf("File successfully opened with fd : %d\n", fd);

    iRet = lseek(fd, 4100, SEEK_SET);

    printf("Current Offset is : %d\n",iRet);
    
    iRet = write(fd, "END", 3);

    printf("%d Bytes get written successfully \n", iRet);

    close(fd);

    return 0;
}