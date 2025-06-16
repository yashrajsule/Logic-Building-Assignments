#include<iostream>
using namespace std;
typedef int BOOL; 
#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 64, iMask2 = 16384,iMask3 = 1048576, iMask4 = 134217728, iResult = 0;

    iResult = iNo & iMask1;
    if(iResult == iMask1)
    {
        cout<<"7th bit is ON. \n";
    }
    else
    {
        cout<<"7th bit is OFF. \n";
    }
    iResult = iNo & iMask2;
    if(iResult == iMask2)
    {
        cout<<"15th bit is ON. \n";
    }
    else
    {
        cout<<"15th bit is OFF. \n";
    }
    iResult = iNo & iMask3;
    if(iResult == iMask3)
    {
        cout<<"21th bit is ON. \n";
    }
    else
    {
        cout<<"21th bit is OFF. \n";
    }
    iResult = iNo & iMask4;
    if(iResult == iMask4)
    {
        cout<<"28th bit is ON. \n";
    }
    else
    {
        cout<<"28th bit is OFF. \n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    ChkBit(iValue);

    return 0;
}