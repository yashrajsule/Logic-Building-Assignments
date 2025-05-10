#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkVowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
    ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
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
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet=chkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("It is  Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}