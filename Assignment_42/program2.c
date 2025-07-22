#include<stdio.h>

int sum(int no)
{
    static int iDigit = 0, iSum = 0;

    if(no != 0)
    {
        iDigit = no % 10;
        iSum = iSum + iDigit;
        no = no / 10;

        sum(no);
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = sum(iValue);
    printf("%d",iRet);

    return 0;
}