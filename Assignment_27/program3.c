#include<stdio.h>

void StrCpyCpa(char *src, char *dest)
{

    while (*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
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

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    StrCpyCpa(Arr,Brr);

    printf("%s",Brr);

    return 0;
}