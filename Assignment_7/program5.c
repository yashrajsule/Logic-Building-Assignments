#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt=0;
    int iEven=1;
    int iOdd=1;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt%2)==0)
        {
         iEven=iEven*iCnt;       
        }
    }
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    if((iCnt%2)!=0)
    {
        iOdd=iOdd*iCnt;
    }
    return iEven-iOdd;

    
    
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;


}