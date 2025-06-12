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

    fd = open(fName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.");
    }
    else
    {
        printf("File is open with FD %d\n",fd);

        close(fd);
    }

    return 0;
}