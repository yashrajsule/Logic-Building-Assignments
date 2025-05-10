#include<stdio.h>

void DisplayConvert(char cValue)
{
    if ((cValue>'a') && (cValue<='z'))
    {
        printf("%c\t", cValue -32);
    }
    else if ((cValue>='A') && (cValue<='Z'))
    {
        printf("%c\t", cValue +32);
    }
    
    
    
}

int main()
{
    char cVAlue='\0';
    printf("Enter character\n");
    scanf("%c",&cVAlue);

    DisplayConvert(cVAlue);

    return 0;
}