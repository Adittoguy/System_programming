#include<stdio.h>
#include <unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    off_t offset = 0;
    char Buffer[100] = "Pune"; 

    fd = open("./LSPx.txt", O_WRONLY);       

    iRet = pwrite(fd, Buffer, 4, 10);



    offset = lseek(fd, 0, SEEK_CUR);

    printf("Current offset is : %ld\n", offset);        

    return 0;
}

