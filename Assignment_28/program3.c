#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#define BUFFER_SIZE 1024

int main()
{
    char fName[30] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};


    printf("Enter the file name :\n");
    scanf("%s",fName);

    fd = open(fName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.");
    }
    else
    {
        printf("File is created sucessfully with FD %d\n",fd);

        iRet = read(fd,Buffer,BUFFER_SIZE);

        printf("Data from Buffer : %s\n",Buffer);

        close(fd);
    }

    return 0;
}