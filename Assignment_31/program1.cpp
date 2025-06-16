#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iResult = 0, iMask = 0xffffffbf;

    iResult = iNo & iMask;

    return iResult;

}
int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Upadated number is : "<<iRet;

    return 0;
}
