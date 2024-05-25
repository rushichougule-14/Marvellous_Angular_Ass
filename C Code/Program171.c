#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node 
{
    int data;
    struct node *next;
};


typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)); //1 Allocate memory
    newn -> data = no ;
    newn -> next = NULL;

    if(*First == NULL)  
    {
        *First = newn;

    }

    else
    {
        newn -> next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)); //1 Allocate memory
    newn -> data = no ;
    newn -> next = NULL;

    if(*First == NULL)  
    {
        *First = newn;

    }

    else
    {
        


    }

}

void Display(PNODE First)
{
    printf("Elemnts from linkedlist are :\n");

    while(First != NULL)
    {
        printf("|%d| -> ",First-> data);
        First = First -> next;
    }

    printf("Null \n");
}



int main()
{
    PNODE Head = NULL;
    InsertFirst(&Head , 51);
    InsertFirst(&Head , 21);
    InsertFirst(&Head , 11);

    Display(Head);





    return 0;
}