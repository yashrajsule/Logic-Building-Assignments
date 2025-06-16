#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask1 = 0xfffffcbf, iResult = 0;

    iResult = iNo & iMask1;

    return iResult;

}
int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Updated value is :"<<iRet;

    return 0;
}