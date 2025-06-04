#include<stdio.h>
#include<stdlib.h>



int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength; iCnt > 0; iCnt--)
{
    if(Arr[iCnt] == iNo)
    {
        return iCnt;
    }
}

return -1;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the number you want to check :\n");
    scanf("%d",&iValue);

    if(ptr == NULL)
    {
    printf("Unable to allocated memory :\n");
    return -1;
    }

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = LastOcc(ptr,iSize,iValue);

    if(iRet == -1)
    {
    printf("There is no such number.\n");
    }
    else
    {
    printf("First occurrence of number is %d",iRet);
    }

    free(ptr);

    return 0;

}