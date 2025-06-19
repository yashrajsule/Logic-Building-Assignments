#include<iostream>
using namespace std;
typedef unsigned int UINT;

void CommonBit(UINT iNo1, UINT iNo2)
{
    UINT  iResult = 0, iCount = 0, iMask = 1,iPos = 1;

    iResult = iNo1 & iNo2;
    while(iMask != 0)
    {
        if(iResult & iMask)
        {
            cout<<iPos<<" ";
        }
        iPos++;
        iMask = iMask << 1;
    }
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    cout<<"Enter the first number :";
    cin>>iValue1;
    cout<<"Enter the second number :";
    cin>>iValue2;

    cout<<"common ON bit position are : ";
    CommonBit(iValue1,iValue2);

    return 0;
}