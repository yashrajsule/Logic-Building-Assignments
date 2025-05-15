#include<stdio.h>
int DollarToINR(int iNo)
{
    int iINR = 1;

    {
        iINR = iNo * 70;
    }
    return iINR;
    

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);


    if (iValue<0)
    {
        printf("Invalid Input");
    }
    else
    {
        printf("Value in INR is %d",iRet);
    }
    

    return 0;
}