#include<iostream>
using namespace std;
typedef unsigned int UINT;

#define FALSE 0
#define TRUE 1

UINT OffBit(UINT iNo,UINT iPos)
{
    UINT iMask = 1, iResult = 0;

    iMask = iMask << (iPos - 1);
    iMask = ~iMask;
    iResult = iNo & iMask;

    return iResult;
}


int main()
{
    UINT iValue = 0, iPosition = 0;
    UINT iRet = 0;

    cout<<"Enter the number :";
    cin>>iValue;
    cout<<"Enter the position :";
    cin>>iPosition;

    iRet = OffBit(iValue,iPosition);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}