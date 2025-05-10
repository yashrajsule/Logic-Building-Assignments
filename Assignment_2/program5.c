///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Check the no is odd or even   
//  Author :        Yashraj Ashok Sule 
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkEven(int iNo)
{
    if (iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    int iValue=0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=chkEven(iValue);
    if (bRet== TRUE)
    {
        printf("Number %d is Even\n",iValue);
    
    }
    else
    {
        printf("Number %d is Odd\n",iValue);
    }
    
    

    return 0;
}