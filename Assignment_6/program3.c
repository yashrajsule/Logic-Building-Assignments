#include<stdio.h>
long int Factorial(int iNo)
{
   int iCnt = 0;
   unsigned long iMult=1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for ( iCnt = iNo; iCnt >= 1 ; iCnt--)
    {
        iMult = iMult * iCnt;
    }
    return iMult;
    
}

int main()
{
   unsigned int iValue = 0;
   unsigned long iRet = 0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %lu",iRet);

    return 0;


}