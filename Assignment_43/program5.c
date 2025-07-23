#include<stdio.h>

void reverse(int no)
{
    int iRev = 0;

    while(no != 0)
    {
        iRev = iRev * 10 + (no % 10); 
        no = no / 10;
    }

    printf("%d",iRev);
}


int main()
{
    int iValue = 0;

    printf("Enter the number that you want reverse : ");
    scanf("%d",&iValue);

    reverse(iValue);

    return 0;
}