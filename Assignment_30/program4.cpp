#include<iostream>
using namespace std;
typedef int BOOL; 
#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 64, iMask2 = 128,iMask3 = 256, iResult = 0;

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
        cout<<"8th bit is ON. \n";
    }
    else
    {
        cout<<"8th bit is OFF. \n";
    }
    iResult = iNo & iMask3;
    if(iResult == iMask3)
    {
        cout<<"5th bit is ON. \n";
    }
    else
    {
        cout<<"5th bit is OFF. \n";
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