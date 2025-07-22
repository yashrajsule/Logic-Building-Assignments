#include<stdio.h>

int Mult(int no)
{
    static int iDigit = 0, iMult = 1;

    if(no != 0)
    {
        iDigit = no % 10;
        iMult = iMult * iDigit;
        no = no / 10;

        Mult(no);
    }

    return iMult;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Producct of digits are : %d\n",iRet);

    return 0;
}