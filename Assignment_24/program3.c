#include<stdio.h>

int Difference(char *str)
{
    int iCountCap = 0, iCountsm = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCap++;
        }
        else
        {
            iCountsm++;
        }
        str++;
    }
    return iCountsm - iCountCap;
}

int main()
{

    char Arr[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",&Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);


    return 0;
}