#include<stdio.h>

void Struprx(char *str)
{
    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z') )
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

    Struprx(Arr);
    printf("Modified string is %s \n",Arr);

    return 0;

}