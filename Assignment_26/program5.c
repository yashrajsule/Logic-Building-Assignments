#include<stdio.h>

void StrRevX(char *str)
{
    int iStar = 0, iEnd = 0;
    char cTemp = '\0';

    while(str[iEnd] != '\0')
    {
        iEnd++;
    }
    iEnd--;
    while(iStar < iEnd)
    {
        cTemp = str[iStar];
        str[iStar] = str[iEnd];
        str[iEnd] = cTemp;
        iStar++;
        iEnd--;
    }

}
int main()
{
    char cValue = '\0';
    char Arr[20];


    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("Modified string is %s",Arr);

    return 0;

}