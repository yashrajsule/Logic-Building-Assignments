#include<stdio.h>

int Max(int NO)
{
    static int iMax = 0, iDigit = 0;

    if(NO != 0)
    {
        iDigit = NO % 10;

        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        NO = NO / 10;

        Max(NO);
    }

    return iMax;
}
int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("Maximum digit is : %d \n",iRet);

    return 0;
}