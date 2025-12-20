#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int main()
{
    int fd = 0;
    char buffer[] = "indiaismycountry";
    int iRet = 0;

    fd = open("demo.txt", O_CREAT | O_WRONLY | O_APPEND, 0777);     // IMP

    if(fd < 0)
    {
        printf("Unable to open the file.\n");
        printf("Reason : %s\n", strerror(errno));
        return -1;
    }

    printf("File successfully opened with fd : %d\n", fd);

    iRet = write(fd, buffer, 16);                           

    printf("%d bytes get successfully written\n",iRet);

    close(fd);

    return 0;
}