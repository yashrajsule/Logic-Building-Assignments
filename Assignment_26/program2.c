#include<stdio.h>

int CountChar(char *str, char Ch)
{
    int iCount = 0;

    if((*str >= 'A') && (*str <= 'Z'))
    {
        *str = *str + 32;
    }
    while (*str != '\0')
    {
        if( *str == Ch)
        {
            iCount++;
        }    
        str++;               
    }
    return iCount;

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

    iRet = CountChar(Arr,cValue);

    printf("Count of Character is : %d",iRet);

    return 0;

}