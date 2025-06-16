#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 1, iResult = 0;
    iMask = iMask << 6;
    iResult = iNo ^ iMask;
    return iResult;
}
int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Updated value is :"<<iRet;

    return 0;
}