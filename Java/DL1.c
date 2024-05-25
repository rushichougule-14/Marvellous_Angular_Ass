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

void InsertFirst(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));

	newn ->data = no;
	newn ->next = NULL;
	newn ->prev = NULL;


	if(*First == NULL)
	{
		*First = newn;
	}

	else
	{
		newn->next = *First;
		(*First)->prev = newn;
		*First = newn;
	}
}

void InsertLast(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));

	newn ->data = no;
	newn ->next = NULL;
	newn ->prev = NULL;


	if(*First == NULL)
	{
		*First = newn;
	}

	else
	{
		PNODE temp = *First;

		while(temp ->next != NULL)
		{
			temp = temp->next;
		}

		temp ->next = newn;
		newn->prev = temp;

	}

}


void Display(PNODE First)
{
	printf("Elements of Linked list are :\n");

	while(First != NULL)
	{
		printf("| %d |->",First->data );

		First = First ->next;
	}

	printf("\n");

}


int Count (PNODE First)
{
	int iCnt = 0;

	while(First != NULL)
	{
		iCnt++;

		First = First ->next;
	}

	return iCnt;

}

void DeleteFirst(PPNODE First)
{
	if(*First == NULL)
	{
		return;
	}

	else if ((*First) -> next == NULL)
	{
		free(*First);
		*First = NULL;
	}

	else
	{
		*First  = (*First)->next;
		free ((*First)->prev);
		(*First)->prev = NULL;
	}

}

void DeleteLast(PPNODE First)
{

	if(*First == NULL)
	{
		return;
	}

	else if ((*First) -> next == NULL)
	{
		free(*First);
		*First = NULL;
	}

	else
	{
		PNODE temp = *First;

		while(temp ->next ->next != NULL)
		{
			temp = temp ->next;
		}

		free(temp->next);
		temp->next = NULL;
	}

}

void InsertAtPos(PPNODE First , int no, int iPos)
{
	int iNodeCnt  = 0 , iCnt = 0;


	PNODE newn = NULL;

	iNodeCnt = Count(*First);

	if((iPos < 1) || (iPos > iNodeCnt + 1))
	{
		printf("InValid Position\n");
		return;
	}

	if(iPos == 1)
	{
		InsertFirst(First , no);
	}

	else if(iPos == iNodeCnt +1)
	{
		InsertLast(First ,no);
	}

	else
	{
		
		newn = (PNODE)malloc(sizeof(NODE));
		newn ->data = no;
		newn ->next = NULL;
		newn ->prev = NULL;

		PNODE temp = *First;

		for(iCnt = 1; iCnt < iPos -1 ; iCnt++)
		{
			temp = temp ->next;
		}

		newn ->next = temp->next;
		temp ->next ->prev =newn;
		temp ->next = newn;

		newn ->prev = temp;
	}
}

void DeleteAtPos(PPNODE First , int iPos)
{
	int iNodeCnt  = 0 , iCnt = 0;
	PNODE temp1 = NULL;
	PNODE temp2 = NULL;

	iNodeCnt = Count(*First);

	if((iPos < 1) || (iPos > iNodeCnt))
	{
		printf("InValid Position\n");
		return;
	}

	if(iPos == 1)
	{
		DeleteFirst(First);
	}

	else if(iPos == iNodeCnt )
	{
		DeleteLast(First);
	}

	else
	{
		temp1 = *First;

		for(iCnt = 1; iCnt < iPos -1 ; iCnt++)
		{
			temp1 = temp1 ->next;
		}

		temp2 = temp1 ->next;

		temp1 ->next = temp2 ->next;

		temp2->next->prev = temp1;
		free(temp2);

	}

}

int main()
{
	PNODE Head = NULL;

	InsertFirst(&Head, 51);
	InsertFirst(&Head, 21);
	InsertFirst(&Head, 11);

	Display(Head);

	InsertLast(&Head,101);
	Display(Head);


	int iRet = Count(Head);
	printf("Number of Nodes are :%d\n",iRet);

	DeleteFirst(&Head);
	Display(Head);


	iRet = Count(Head);
	printf("Number of Nodes are :%d\n",iRet);

	InsertAtPos(&Head,31,3);
	Display(Head);


	iRet = Count(Head);
	printf("Number of Nodes are :%d\n",iRet);


	DeleteLast(&Head);
	Display(Head);

	iRet = Count(Head);
	printf("Number of Nodes are :%d\n",iRet);



	DeleteAtPos(&Head,3);
	Display(Head);


	iRet = Count(Head);
	printf("Number of Nodes are :%d\n",iRet);










	return 0;	
	

}