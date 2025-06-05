#include<stdio.h>

void Struprx(char *str)
{
    while (*str != '\0')
    {
        if((*str >= '0') && (*str <= '9') )
        {
                  /* code */
                printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    Struprx(Arr);

    return 0;

}