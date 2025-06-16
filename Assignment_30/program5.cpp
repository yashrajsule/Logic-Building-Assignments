#include<iostream>
using namespace std;
typedef int BOOL; 
#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 1, iMask2 = 2147483648, iResult = 0;

    iResult = iNo & iMask1;
    if(iResult == iMask1)
    {
        cout<<"First bit is ON. \n";
    }
    else
    {
        cout<<"First bit is OFF. \n";
    }
    iResult = iNo & iMask2;
    if(iResult == iMask2)
    {
        cout<<"Second bit is ON. \n";
    }
    else
    {
        cout<<"Second bit is OFF. \n";
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