#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0, iCountEven = 0, iCountOdd = 0;
    
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;

        }
    }
    return iCountEven - iCountOdd;

}

int main()
{
    int iCnt = 0, iSize = 0, iRet = 0;
    int *ptr = NULL;

    printf("enter the number of elememts:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocated memory.\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d  :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr, iSize);

    printf("%d", iRet);

    free(ptr);

    return 0;

}