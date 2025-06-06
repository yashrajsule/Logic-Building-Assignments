#include<stdio.h>

int FirstChar(char *str, char Ch)
{
    int iCnt = 0;
    while (str[iCnt] != '\0')
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

    iRet = FirstChar(Arr,cValue);


    printf("Character location is : %d",iRet);

    return 0;

}