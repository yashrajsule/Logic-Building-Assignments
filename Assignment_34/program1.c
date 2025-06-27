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

void InsertFirst(PPNODE first,int no)
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
        printf("|%d|->",first->data);
        first = first -> next;
    }
    printf("NULL\n");
}

int SearchFirstOcc(PNODE first, int no)
{
    int iCount = 0;
    while(first != NULL)
    {
        iCount++;
        if(first->data == no)
        {
            return iCount;
        }
        first = first -> next;
    }
}

int Addition(PNODE first)
{
    int iSum = 0;
    while(first != NULL)
    {
        iSum = iSum + first -> data;
        first = first -> next;
    }
    return iSum;
}

int Maximum(PNODE first)
{
    int Max = 0;
    while(first != NULL)
    {
        if((first -> data) > Max)
        {
            Max = first -> data;
        }
        first = first -> next;
    }
    return Max;
}

int Minimum(PNODE first)
{
    int Min = 0;

    Min = first -> data;
    first = first -> next;
    while(first == NULL)
    {
        if((first -> data) < Min)
        {
            Min = first -> data;
        }
        first = first -> next;
    }
    return Min;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    iRet = SearchFirstOcc(head,21);
    printf("Search first : %d\n",iRet);

    iRet = Addition(head);
    printf("Addition of elements are %d \n",iRet);

    iRet = Maximum(head);
    printf("Maximum elements are %d \n",iRet);

    iRet = Minimum(head);
    printf("Mimimum elements are %d \n",iRet);

    return 0;
}