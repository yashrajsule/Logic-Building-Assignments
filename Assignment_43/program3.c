#include<stdio.h>

int Small(char *str)
{
    static int iCount = 0, iCnt = 0;
    static char Ch = '\0';

    if(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'a' && str[iCnt] <= 'z')
        {
            iCount++;
        }

        iCnt++;

        Small(str);

    }

    return iCount;
}
int main()
{
    char Arr[] = {'\0'};
    int iRet = 0;

    printf("Enter the string : ");
    scanf("%[^\n]s",Arr);

    iRet = Small(Arr);
    printf("The count of smallest number is : %d",iRet);

    return 0;
}