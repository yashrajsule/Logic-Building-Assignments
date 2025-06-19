#include<iostream>
using namespace std;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

bool CommonBit(UINT iNo)
{
    UINT  iResult = 0, iMask = 0x00000e00 | 0x00000700,iPos = 1;

    if((iNo & iMask) != 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = FALSE;

    cout<<"Enter the number :";
    cin>>iValue;

    bRet = CommonBit(iValue);

    if (bRet == TRUE)
    {
    cout<<"9th or 12th bit is ON :";
    }
    else
    {
    cout<<"9th or 12th bit is OFF :";
    }

    return 0;
}