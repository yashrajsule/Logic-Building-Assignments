#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 1, iMask2 = 1, iResult = 0;

    iMask1 = iMask1 << 6;
    iMask2 = iMask2 << 9;

    iResult = iNo ^ iMask1;
    iResult = iResult ^ iMask2;

    return iResult;
}
int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number :";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Updated number is : "<<iRet;

    return 0;
}