#include<stdio.h>

void Display()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
    }

    Display();

    printf("\n");
}
int main()
{
    Display();

    return 0;
}