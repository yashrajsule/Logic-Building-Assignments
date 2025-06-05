#include<stdio.h>
void Display(char ch)
{

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(int iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t",iCnt);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(int iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
    else
    {
        printf("Invalid input..");
    }

}
int main()
{
    char iValue='\0';

    printf("enter the char:\n");
    scanf("%c",&iValue);

    Display(iValue);
    return 0;
}