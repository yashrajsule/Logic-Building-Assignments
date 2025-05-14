#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 1;
    int iMult = 1;
    int iMult1 = 0;

    {
        for(iCnt = 10;iCnt >= 1;iCnt--)
        {
            iMult1 = iNo * iCnt;
            printf("%d\t",iMult1);

        }
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}