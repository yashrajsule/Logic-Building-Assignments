#include<stdio.h>

void Pattern(int iNo)
{
    char ch = 'A';
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++,ch++)
    {
            printf("%c\t",ch);
    }        
    

}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}