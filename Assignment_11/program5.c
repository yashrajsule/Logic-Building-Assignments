#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iCount = iCnt * 2;
        {
            printf("%d\t",iCount);
        }

    }
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}