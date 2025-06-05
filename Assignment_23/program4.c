#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if(ch >= '!' && ch <= '@')
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    char cValue='\0';
    bool bRet = false;

    printf("enter the char:\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is a special character.");
    }
    else
    {
        printf("It is a not special character.");
    }

    return 0;
}