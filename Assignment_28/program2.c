#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

int main()
{
    char fName[30] = {'\0'};
    int fd = 0;

    printf("Enter the file name :\n");
    scanf("%s",fName);

    fd = creat(fName,0777);

    if(fd == -1)
    {
        printf("Unable to open file.");
    }
    else
    {
        printf("File is created sucessfully with FD %d\n",fd);

        close(fd);
    }

    return 0;
}