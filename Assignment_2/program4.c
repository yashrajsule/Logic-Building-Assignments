///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Display first no in second no of times.   
//  Author :        Yashraj Ashok Sule 
//  Date :          10/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int icnt=0;
    for (icnt=0; icnt <iFrequency; icnt++)
    {
        printf("%d\t",iNo);
    }
    
}

int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;

}