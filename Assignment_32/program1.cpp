#include<iostream>
using namespace std;
#define FALSE 0
#define TRUE 1

bool ChkBit(int iNo,int iPos)
{
    int iMask = 1, iResult = 0;

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;

    return(iMask == iResult);
}


int main()
{
    int iValue = 0, iPosition = 0;
    bool bRet = FALSE;

    cout<<"Enter the number :";
    cin>>iValue;
    cout<<"Enter the position :";
    cin>>iPosition;

    bRet = ChkBit(iValue,iPosition);

    if (bRet == TRUE)
    {
        cout<<"Bit is ON";
    }
    else
    {
        cout<<"Bit is OFF";
    }

    return 0;
}