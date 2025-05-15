#include<stdio.h>

double SquareMeter(int iNO)
{
    
    return iNO * 0.0929;


}
int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("%f Square meter",dRet);

    return 0;

}