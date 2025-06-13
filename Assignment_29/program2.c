#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#define BUFFER_SIZE 1024

int CountSmall(char FName[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, iCount = 0, iCnt = 0, fd = 0;

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
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

    iRet = CountSmall(FileName);

    printf("Number of small characters are : %d\n",iRet);

    return 0;
}