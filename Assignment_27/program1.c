#include<stdio.h>

void StrCpy(char *src, char *dest)
{
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    src--;
    
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30] = {'\0'};

    StrCpy(Arr,Brr);
    printf("%s",Brr);

    return 0;
}