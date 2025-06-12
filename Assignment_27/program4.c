#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    src--;
}

int main()
{
    char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};

    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);

    StrCpySmall(Arr,Brr);

    printf("%s",Brr);

    return 0;
}