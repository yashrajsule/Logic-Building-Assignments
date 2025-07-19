#include<stdio.h>

void Display(int no)
{
    if(no >= 1)
    {
        printf("%d\t", no);
        Display(--no);  
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}