#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
     
    return FALSE;


}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(ptr,iSize,iValue);

    if(bRet == TRUE)
    {
    printf("Number is present. \n");
    }
    else
    {
    printf("Number is not present.\n");
    }

    free(ptr);

    return 0;

}