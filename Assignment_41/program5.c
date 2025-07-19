#include<stdio.h>

void Display(int no)
{
    static char ch = 'a';
    static int iCnt = 1;

    if(iCnt <= no)
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
        Display(no);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}