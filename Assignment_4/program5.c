#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;



    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        if((iNo % iCnt) != 0)
        {
            iNonFactSum = iNonFactSum + iCnt;
        }        
    }
            return iFactSum - iNonFactSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf ("Enter number:\n");
    scanf("%d",&iValue);

    iRet = FactDiff (iValue);

    printf("%d",iRet);

    return 0;

}