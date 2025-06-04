#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Chk(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }
        return FALSE;


}

int main()
{
    int iCnt = 0, iSize = 0;
    BOOL bRet = FALSE;
    int *ptr = NULL;

    printf("Enter the number of elements :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocated memory.\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Chk(ptr, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present.",bRet);
    }
    else
    {
        printf("11 is absent.",bRet);

    }

    free(ptr);

    return 0;
}