#include<stdio.h>

void Strlwrx(char *str)
{
    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z') )
        {
            *str = *str + 32;
        }
        /* code */str++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    Strlwrx(Arr);
    printf("Modified string is %s \n",Arr);

    return 0;

}