#include<stdio.h>
double CircleArea(float fRadius)
{
   double pi = 3.14;
   double dArea = 0.0;
   
   {
    dArea = (pi * (fRadius * fRadius));
   }
   return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle%lf",dRet);

    return 0;


}