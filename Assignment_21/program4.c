#include<stdio.h>
#include<stdlib.h>

void Digit(int Arr[], int iLength)
{
    int iCnt = 0, iNum = 0, iCount = 0, iTempNum = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        iNum = Arr[iCnt];
        iCount = 0;

        if(iNum == 0)
        {
            iCount = 1;
        }
        else
        {

            iTempNum = iNum;
        while(iTempNum != 0)
        {
            iTempNum = iTempNum / 10;
            iCount++;
        }
    }

    
        if(iCount == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocated memory.\n");
        return -1;
    }

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Digit(ptr,iSize);

    free(ptr);

    return 0;

}