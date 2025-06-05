#include<stdio.h>

void Display(char Ch)
{
    
    if((Ch >= 'A') && (Ch <= 'Z'))
    {
        printf("%c",32-Ch);
    }
    else if((Ch >= 'a') && (Ch <= 'z'))
    {
        printf("%c",32+Ch);
    }
    else
    printf("%c",Ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}