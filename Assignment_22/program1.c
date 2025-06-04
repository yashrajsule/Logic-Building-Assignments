#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char Ch)
{
    if((Ch >= 'A') && (Ch <= 'Z') || (Ch >= 'a') && (Ch <= 'z') )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is a character.");
    }
    else
    {
        printf("It is a not character.");
    }

    return 0;

}