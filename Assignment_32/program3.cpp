#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OnBit(int iNo, int iPos)
{
    UINT iMask = 1, iResult = 0;

    iMask = iMask << (iPos - 1);
    iResult = iNo | iMask;
    return iResult;
}
int main()
{
    UINT iValue = 0, iRet = 0, iPosition = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;
    cout<<"Enter the position : \n";
    cin>>iPosition;

    iRet = OnBit(iValue,iPosition);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}