#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str, char Ch)
{
    while (*str != '\0')
    {
        if( *str == Ch)
        {
            return TRUE;
        }    
        str++;               
    }
    return FALSE;

    


}
int main()
{
    char Arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character :\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE )
    {
        printf("Character found.");
    }
    else
    {
        printf("Character is not found.");
    }
    return 0;

}