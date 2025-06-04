#include<stdio.h>

void DisplaySchedule(char Ch)
{

    char upperCh = toupper(Ch);

    if(upperCh == 'A')
    {
        printf("Your exam at 7AM.");
    }
    else if(upperCh == 'B')
    {
        printf("Your exam at 8.30AM.");
    }
    else if(upperCh == 'C')
    {
        printf("Your exam at 9.20AM.");
    }
    else if(upperCh == 'D')
    {
       printf("Your exam at 9.20AM.");
    }
    else
    {
        printf("Invalid input.");
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;

}