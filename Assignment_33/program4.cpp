#include<iostream>
#define TRUE 1
#define FALSE 0

bool ChkBit(int iNo, int iPos1, int iPos2)
{
    int iMask1 = 1, iMask2 = 1, iResult = 0;
    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iResult = iNo & iMask1;
    iResult = iNo & iResult;

    if((iNo & iMask1) != 0 || (iNo & iMask2) != 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}
int main()
{
    int iValue = 0, iPosition1 = 0, iPosition2 = 0 ;
    bool bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d",&iValue);
    printf("Enter the first position : \n");
    scanf("%d",&iPosition1);
    printf("Enter the second position : \n");
    scanf("%d",&iPosition2);

    bRet = ChkBit(iValue,iPosition1,iPosition2);

    if(bRet == TRUE)
    {
        printf("Bit at %d position or bit at %d position is ON",iPosition1,iPosition2);

    }
    else
    {
        printf("Bit at %d position or bit at %d position is OFF",iPosition1,iPosition2);

    }

    return 0;
}