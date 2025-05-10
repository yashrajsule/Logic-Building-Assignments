///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   No. is less than 0 then print "Hello" Otherwise print "Demo"   
//  Author :        Yashraj Ashok Sule 
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    if (iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");

    }
    
}

int main()
{
    int iValue=0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}