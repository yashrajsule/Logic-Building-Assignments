#include<iostream>
using namespace std;
typedef int BOOL; 
#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 16, iMask2 = 131072, iResult = 0;

    iResult = iNo & iMask1;
    if(iResult == iMask1)
    {
        cout<<"5th bit is ON. \n";
    }
    else
    {
        cout<<"5th bit is OFF. \n";
    }

    iResult = iNo & iMask2;
    if(iResult == iMask2)
    {
        cout<<"18th bit is ON. \n";
    }
    else
    {
        cout<<"18th bit is OFF. \n";
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