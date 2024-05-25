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

void InsertFirst(PPNODE First , int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn ->  data = no;
	newn ->next = NULL;

	if(*First == NULL)
	{
		*First = newn ;
	}

	else
	{
		newn->next = *First;
		*First = newn;
	}

}

void InsertLast(PPNODE First , int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	PNODE temp = *First;

	if (*First == NULL)
	{
		*First = newn;
	}

	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;

		}

		temp ->next = newn;
	}
}

void Display(PNODE First)
{
	printf("Elements in linked list are :\n");
	while(First != NULL)
	{
		printf("| %d |-> ",First->data);
		First = First ->next;
	}

	printf("NULL \n");
}

int Count(PNODE First)
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
	PNODE temp = *First;

	if (*First == NULL)
	{
		return;
	}

	else if ((*First)-> next == NULL)
	{
		free(*First);
		*First = NULL;
	}

	else
	{
		(*First) = ((*First)->next);
		free(temp);
	}
}

void DeleteLast(PPNODE First)
{
	PNODE temp = *First;

	while(temp-> next-> next != NULL)
	{
		temp= temp->next;
	}

	free(temp->next);
	temp->next = NULL;
}

void InserAtPos(PPNODE First ,int no , int iPos)
{
	int NodeCnt = 0;
	PNODE temp = NULL;
	PNODE newn = NULL;

	NodeCnt = Count(*First);

	if((iPos < 1 )|| (iPos > (NodeCnt+1)))
	{
		printf("Invalid Positon\n");
	}

	if(iPos == 1)
	{
		InsertFirst(First,no);
	}

	else if(iPos == NodeCnt + 1 )
	{
		InsertLast(First,no);
	}

	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data= no;
		newn->next = NULL;

		int iCnt = 0;
		temp = *First;

		for(iCnt = 1; iCnt< iPos-1;iCnt++)
		{
			temp = temp->next;
		}

		newn->next = temp->next;
		temp->next = newn;
	}

}

void DeleteAtPos(PPNODE First , int iPos)
{
	PNODE temp1 = NULL;
	PNODE temp2 = NULL;

	int iCnt = 0 , NodeCnt = 0;
	NodeCnt = Count(*First);

	if((iPos < 1 )|| (iPos > (NodeCnt)))
	{
		printf("Invalid Positon\n");
	}

	if(iPos == 1)
	{
		DeleteFirst(First);
	}

	else if(iPos == NodeCnt )
	{
		DeleteLast(First);
	}

	else
	{
		temp1 = *First;

		for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt++)
		{
			temp1 = temp1->next;
		}

		temp2= temp1->next;

		temp1->next = temp2-> next;

		free(temp2);
	}

}




int main()
{
	PNODE Head = NULL;
	InsertFirst(&Head , 101);
	InsertFirst(&Head , 51);
	InsertFirst(&Head, 21);



	InsertFirst(&Head , 11);

	Display(Head);
	int iRet = Count(Head);
	printf("Number of NOdes are :%d\n",iRet);





	InsertLast(&Head, 111);
	InsertLast(&Head, 121);

	DeleteFirst(&Head);

	DeleteLast(&Head);

	

	Display(Head);
	iRet = Count(Head);
	printf("Number of NOdes are :%d\n",iRet);



	InserAtPos(&Head ,31,4);

	Display(Head);
 	iRet = Count(Head);
	printf("Number of NOdes are :%d\n",iRet);



	DeleteAtPos(&Head,4);
	Display(Head);

	return 0;
}