#include<stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;
    char Ch = 'A';

    for(i = 1; i <= iRow; i++)
    {
    for( j = 1,Ch = 'A'; j <= iCol; j++,Ch++)
    {
        printf("%c\t",Ch);
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