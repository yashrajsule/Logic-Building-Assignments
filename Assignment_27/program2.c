#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iSize)
{

    while ((*src != '\0') && (iSize != 0))
    {
        int iCnt = 0;
        
        *dest = *src;
        src++;
        dest++;
        iSize--;
    }
    src--;
    


}

int main()
{
    char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};
    int iValue = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the size :\n");
    scanf("%d",&iValue);

    StrNCpyX(Arr,Brr,iValue);

    printf("%s",Brr);

    return 0;
}