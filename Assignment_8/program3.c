#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iDis = 0;
    {
        iDis = iNo * 1000;
    }
    return iDis;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    if(iValue < 0)
    {
        printf("INVALID INPUT");
    }
    else
    {
    printf("%d meters",iRet);
    }
    return 0;
}