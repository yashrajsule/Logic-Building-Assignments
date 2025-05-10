///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Accept no & Print that number of * on screen.   
//  Author :        Yashraj Ashok Sule 
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    while (iCnt<iNo)
    {
        printf("*");
        iCnt++;
    
    }
    
}

int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}