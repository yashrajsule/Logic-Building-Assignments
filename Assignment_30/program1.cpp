#include<iostream>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;        

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 16384, iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    cout<<"Enter the number : \n";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        cout<<"15th Bit is ON.\n ";
    }
    else
    {
        cout<<"15th Bit is OFF.\n ";
    }


    return 0;
}