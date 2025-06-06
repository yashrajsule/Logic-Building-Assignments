#include<stdio.h>

int LastChar(char *str, char Ch)
{
    int iCnt = 0;
    while (Ch != str[iCnt])
    {
        if(str[iCnt] == Ch)
        {
            return iCnt;
        }
  
        iCnt++;               
    }
    return -1;
}
int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character :\n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);


    printf("Character location is : %d",iRet);

    return 0;

}