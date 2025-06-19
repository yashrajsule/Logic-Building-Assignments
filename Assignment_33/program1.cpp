#include<iostream>
using namespace std;

int CountOne(int iNo)
{
    int iMask = 1, iResult = 0, iCount = 0;

    while(iMask != 0)
    {
        if(iNo & iMask)
        {
            iCount++;
        }
        iMask = iMask << 1;

    }
    return iCount;

}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number :";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"Count of one is : "<<iRet<<"\n";

    return 0;
}