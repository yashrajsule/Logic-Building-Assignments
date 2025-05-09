///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Print that number of * on screen.   
//  Author :        Yashraj Ashok Sule 
//  Date :          08/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}
