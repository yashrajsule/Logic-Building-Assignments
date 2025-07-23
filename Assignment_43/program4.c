#include<stdio.h>

int Min(int NO)
{
    static int iMin = 9, iDigit = 0;

    if(NO != 0)
    {
        iDigit = NO % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        NO = NO / 10;

        Min(NO);

    }

    return iMin;
}
int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("Minimum digit is : %d \n",iRet);

    return 0;
}