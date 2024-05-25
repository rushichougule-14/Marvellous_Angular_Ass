#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;   // x

    if (*First == NULL)
    {
        *First = newn ;
    }

    else
    {
        newn->next = *First;
        (*First)->prev = newn; //x
        *First = newn;
    }


}

void InsertLast(PPNODE First , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if (*First == NULL)
    {
        *First = newn ;
    }

    else
    {
        while (temp->next != NULL)
        {
            temp = temp ->next;
        }

        temp -> next = newn;
        newn->prev = temp;

        
    }
}

void Display(PNODE First)
{
    printf("Elements of Linked list are:\n ");
    {
        while (First != NULL)
        {
            printf("| %d |-> ",First ->data);
            First = First-> next;
        }
        printf("NULL \n");
    }
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First ->next;
    }
}
int main()
{
    int iRet = 0;
    PNODE Head = NULL;
    InsertFirst(&Head ,51);
    InsertFirst(&Head ,21);
    InsertFirst(&Head ,21);

    InsertLast(&Head ,101);
    InsertLast(&Head ,111);
    InsertLast(&Head ,121);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elements are :%d\n",iRet);

    return 0;

}

    

