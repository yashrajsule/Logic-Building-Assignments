#include<stdio.h>

void Pattern(int iNO)
{
    int iCnt = 0;

    for(iCnt = iNO; iCnt >0; iCnt--)
    {
        printf("%d\t #\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;


}