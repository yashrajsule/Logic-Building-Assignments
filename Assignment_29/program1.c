#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#define BUFFER_SIZE 1024

int CountCapital(char FName[])
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
        if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
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
    int iRet = 0;

    printf("Enter the file name :\n");
    scanf("%s",FileName);

    iRet = CountCapital(FileName);

    printf("Number of capital characters are %d",iRet);

    return 0;
}