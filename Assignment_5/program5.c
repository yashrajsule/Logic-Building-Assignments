#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMult = iNo;
    int iMult1 = 0;


    for(iCnt = 1 ; iCnt <= 5; iCnt++)
    {
        iMult1 = iMult * iCnt;
        printf("%d\t",iMult1);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;

}