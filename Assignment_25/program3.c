#include<stdio.h>

void Strtogglex(char *str)
{
    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z') )
        {
            *str = *str + 32;
        }
         else if((*str >= 'a') && (*str <= 'z') )
        {
            *str = *str - 32;
        }
        /* code */str++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    Strtogglex(Arr);
    printf("Modified string is %s \n",Arr);

    return 0;

}