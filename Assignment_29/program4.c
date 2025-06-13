#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#define BUFFER_SIZE 1024

int CountChar(char FName[],char Ch)
{
    int fd = 0, iCount = 0, iCnt = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName,O_RDONLY);

    if(iRet == -1)
    {
        printf("Unable to open file.");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
        if(Buffer[iCnt] == Ch)
        {
            iCount++;
        }
    }
    }
    close(fd);
    return iCount;
}

int main()
{
    char FileName[30] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the file name :\n");
    scanf("%s",FileName);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("%c is %d times in the file ",cValue,iRet);

    return 0;
}