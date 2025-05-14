#include<stdio.h>

void Number(int iNo)
{
    if (iNo < 0)
    {
        printf("INVALID INPUT");
        return ;
    }
    if (iNo < 50)
    {
        printf("Number is small");
    }
    else if ((iNo >= 50) && (iNo <100))
    {
        printf("Number is medium");
    }
    else if (iNo >= 100)
    {
        printf("Number is large");
    }
    
    
    
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}