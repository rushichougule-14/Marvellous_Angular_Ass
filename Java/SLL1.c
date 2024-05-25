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
typedef struct node **PPNODE;

void InsertFirst(PPNODE First , int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn-> next = NULL;

	if(*First == NULL)
	{
		*First = newn;
	}

	else
	{
		newn->next = *First;
		*First = newn;
	}

}

void InsertLast(PPNODE First,int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn-> next = NULL;

	PNODE temp = *First;

	if(*First == NULL)
	{
		*First = newn;
	}

	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newn;

	}

}

void Display(PNODE First)
{
	while(First!= NULL)
	{
		printf("| %d |->",First->data);
		First=First->next;
	}

	printf("NULL \n");

}

int Count(PNODE First)
{
	int iCnt = 0;
	while(First!= NULL)
	{
		iCnt++;
		First=First->next;
	}

	return iCnt;
}


void DeleteFirst(PPNODE First)
{
	PNODE temp = *First;

	if(*First==NULL)
	{
		return;
	} 

	else if ((*First)->next == NULL)
	{
		free(*First);
		*First = NULL;
	}
	else
	{
		*First=(*First)->next;
		free(temp);
	}
}


void DeleteLast(PPNODE First)
{
	PNODE temp = *First;

	if(*First == NULL)
	{
		return;
	} 

	else if ((*First)->next == NULL)
	{
		free(*First);
		*First = NULL;
	}

	else
	{
		while(temp->next->next !=NULL)
		{
			temp = temp ->next;
		}

		free(temp->next);
		temp->next= NULL;
	}


}

void InsertAtPos(PPNODE First ,int no,int iPos)
{
	PNODE temp = *First;


	int NodeCnt = 0 ;
	NodeCnt = Count(*First);


	if((iPos < 1 ) || (iPos > NodeCnt +1 ))
	{
		printf("Invalid Position\n");
		return;
	}

	if (iPos == 1)
	{
		InsertFirst(First,no);
	}

	else if(iPos == NodeCnt+1)
	{
		InsertLast(First,no);
	}

	else
	{
		PNODE newn = (PNODE)malloc(sizeof(NODE));
		newn->data = no;
		newn-> next = NULL;

		temp = *First;

		int iCnt = 0;

		for(iCnt = 1 ; iCnt < iPos-1 ;iCnt++)
		{
			temp = temp->next; 
		}

		newn->next = temp->next;
		temp->next = newn;
	}


}

void DeleteAtPos(PPNODE First,int iPos)
{
	PNODE temp1 = NULL;
	PNODE temp2 = NULL;



	int NodeCnt = 0 ;
	NodeCnt = Count(*First);


	if((iPos < 1 ) || (iPos > NodeCnt ))
	{
		printf("Invalid Position\n");
		return;
	}

	if (iPos == 1)
	{
		DeleteFirst(First);
	}

	else if(iPos == NodeCnt+1)
	{
		DeleteLast(First);
	}

	else
	{
		temp1 = *First;
		int iCnt = 0;

		for(iCnt = 1 ; iCnt < iPos-1 ;iCnt++)
		{
			temp1 = temp1->next; 
		}
		temp2 = temp1->next;

		temp1->next = temp2->next;
		free(temp2);
	}


}

int main()
{
	PNODE Head = NULL;

	InsertFirst(&Head,40);
	InsertFirst(&Head,30);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);

	Display(Head);
	int iRet = Count(Head);
	printf(" Number of node are :%d\n",iRet );

	InsertLast(&Head,70);
	InsertLast(&Head,80);
	InsertLast(&Head,90);

	Display(Head);
	iRet = Count(Head);
	printf(" Number of node are :%d\n",iRet );

	DeleteFirst(&Head);
	Display(Head);
	iRet = Count(Head);
	printf(" Number of node are :%d\n",iRet );

	DeleteLast(&Head);
	Display(Head);
	iRet = Count(Head);
	printf(" Number of node are :%d\n",iRet );

	InsertAtPos(&Head ,45,5);
	Display(Head);
	iRet = Count(Head);
	printf(" Number of node are :%d\n",iRet );

	DeleteAtPos(&Head,5);
	Display(Head);
	iRet = Count(Head);
	printf(" Number of node are :%d\n",iRet );







	return 0 ;
}