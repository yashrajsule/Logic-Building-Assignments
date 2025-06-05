#include<stdio.h>

void Display(char Ch)
{
    if((Ch >= 'A') && (Ch <= 'Z'))
    {
        printf("Decimal: %3d\n",Ch);
        printf("Octal: %03o\n",Ch);
        printf("Hexadecimal: %2X\n",Ch);
    }
    else
    {
        printf("Invalid Input");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}