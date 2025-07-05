#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first -> data);
        first = first -> next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;
    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }
    return iCount;
}

int IsPerfect(int no)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 1; iCnt <= no; iCnt++)
    {
        if(no % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return (iSum == no);
}
void DisplayPerfect(PNODE first)
{
    while(first != NULL)
    {
        if(IsPerfect(first -> data))
        {
            printf("%d\t",first -> data);
        }
        first = first -> next;
    }

}

void DisplayPrime(PNODE first)
{
    int iCnt = 0, iNum = 0, isPrime = 0;
    while(first != NULL)
    {
        iNum = first -> data;
        if(iNum < 0)
        {
            iNum = -iNum;
        }
        if(iNum > 1)
        {
            isPrime = 1;
    for(iCnt = 2; iCnt <= iNum; iCnt++)
    {
        if((iNum % iCnt) == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 1)
    {
        printf("%d\t",first->data);
    }
        }
        first = first -> next;
    }
}

int AdditionEven(PNODE first)
{
    int iSum = 0;
    while(first != NULL)
    {
        if((first->data % 2) == 0)
        {
            iSum = iSum + first->data;
        }
        first = first->next;
    }
    return iSum;
}

int SecMaximum(PNODE Head)
{
    int iMax,secondMax=0;
    while(Head != NULL)
    {
        if(iMax < Head ->data)
        {
            secondMax = iMax;
            iMax = Head ->data;
        }
        else if(Head -> data > secondMax && Head ->data != iMax)
        {
            secondMax =Head->data;
        }
        
        Head = Head ->next;
    }
    return secondMax;

}

int SumDigit(PNODE first)
{
    int iMax = 0, num = 0;
    while(first != NULL)
    {
        num = first -> data;
        int iSum = 0;
        while(num != 0)
        {
            iSum = iSum + (num % 10);
            num = num / 10;
        }
        printf("%d\t",iSum);
        first = first->next;

    }
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,111);
    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,50);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    printf("Elements are : \n");
    Display(head);

    DisplayPerfect(head);

    DisplayPrime(head);

    iRet = AdditionEven(head);
    printf("Addition of even elements are : %d\n",iRet);

    iRet = SecMaximum(head);
    printf("Second maximum elements are : %d\n",iRet);

    iRet = SumDigit(head);
    printf("%d\t",iRet);

    return 0;
}