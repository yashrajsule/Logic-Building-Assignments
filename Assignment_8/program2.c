#include<stdio.h>
double RectArea(float fWidth,float fHeight)
{
    double dArea = 0.0;

    {
        dArea = fWidth * fHeight;
    }
    return dArea;

}

int main()
{
    float fValue1 = 0.0 , fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width: ");
    scanf("%f",&fValue1);

    printf("Enter Height: ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    if (fValue1 < 0)
    {
        printf("INVALID INPUT");
    }
    else if (fValue2 < 0)
    {
        printf("INVALID INPUT");
    }
    else 
    {
        printf("Area of rectangle is %f",dRet);
    }

    return 0;

}