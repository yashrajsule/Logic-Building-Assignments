#include<stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0, iNo=1;

   for(i = iNo; i <= iRow; i++)
        {
        for(j = 1; j <= iCol; j++,iNo++)
        {
            printf("%d\t",iNo);
           

        }
            printf("\n");
        }

}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;

}