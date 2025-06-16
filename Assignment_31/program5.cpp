#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iCnt = 0, iMask1 = 1, iMask2 = 1, iMask3 = 1, iMask4 = 1, iResult = 0;

    iMask2 = iMask2 << 1;
    iMask3 = iMask3 << 2;
    iMask4 = iMask4 << 3;

    iResult = iNo | iMask1;
    iResult = iResult | iMask2;
    iResult = iResult | iMask3;
    iResult = iResult | iMask4;

    return iResult;

}
int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number :";
    cin>>iValue;

    iRet = OnBit(iValue);

    cout<<"Updated number :"<<iRet;

    return 0;
}