#include<stdio.h>


int Fact(int no)
{
    static int iCnt = 1, iMult = 1;

    if(iCnt <= no)
    {
        iMult = iMult * iCnt;
        iCnt++;

        Fact(no);
    }

    return iMult;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factorial value is : %d \n",iRet);

    return 0;
}