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

void InserFirst(PPNODE First , int No)
{

}

void Display(PNODE First)
{

}
int main()
{

   PNODE Head = NULL;
   InserFirst(&Head , 51);
   InserFirst(&Head , 21);
   InserFirst(&Head , 11);



   return 0;
}
