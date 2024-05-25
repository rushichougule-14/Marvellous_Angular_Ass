#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SCL2
{
public:
	PNODE First;
	PNODE Last;
	int iCount ;
	

	SCL2();

	void InsertFirst(int no);
	void InsertLast(int no);
	void InsertAtPos(int no,int ipos);

	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int ipos);

	void Display();
};

SCL2::SCL2()
{
	First = NULL;
	Last = NULL;
	iCount = 0;
}

void SCL2::InsertFirst(int no)
{
	PNODE newn = new NODE;

	newn ->data = no;
	newn->next = NULL;

	if((First == NULL) && (Last == NULL))
	{
	
		First = Last = newn;
		(Last)->next = First;
		iCount++;
	}

	else
	{
		newn->next = First;
		First = newn;
		(Last)->next = First;
		iCount++;
	}
}

void SCL2::InsertLast(int no)
{
	PNODE newn = new NODE;

	newn ->data = no;
	newn->next = NULL;

	if((First == NULL) && (Last == NULL))
	{
		First = Last = newn;
		(Last)->next = First;
		iCount++;
	}

	else
	{
		(Last)->next = newn;
		Last = newn;
		(Last)->next = First;
		iCount++;
	}
}

void SCL2::InsertAtPos(int no,int ipos)
{
	PNODE newn = new NODE;

	newn ->data = no;
	newn->next = NULL;

	PNODE temp = First;

	if((ipos < 1)&&(ipos > iCount+1))
	{
		cout<<"Invalid Position\n";
		return;
	}

	if(ipos == 1)
	{
		InsertFirst( no);
		iCount++;
	}

	else if(ipos == iCount + 1)
	{
		InsertLast( no);
		iCount++;
	}

	else
	{
		int iCnt = 0;

		for(iCnt = 1 ; iCnt < ipos - 1 ;iCnt++)
		{
			temp = temp ->next;
		}

		newn ->next = temp->next;
		temp ->next = newn;
		iCount++;
	}
}


void SCL2::DeleteFirst()
{
	PNODE temp = First;

	if((First == NULL)&&(Last == NULL))
	{
		return;
	}

	if(First == Last)
	{
		delete First;
		First = Last = NULL;
		iCount--;
	}

	else 
	{
		First = (First)->next ;
		delete temp;
		(Last)->next = First;
		iCount--;
	}
}


void SCL2:: DeleteLast()
{
	PNODE temp = First;

	if((First == NULL)&&(Last == NULL))
	{
		return;
	}

	if(First == Last)
	{
		delete First;
		First = Last = NULL;
		iCount--;
	}

	else
	{
		while(temp ->next != Last)
		{
			temp = temp ->next;
		}

		delete temp->next;
		Last = temp;
		(Last) ->next  = First;
		iCount--;
	}

}


void SCL2::DeleteAtPos(int ipos)
{

	PNODE temp1 = First;
	PNODE temp2 = NULL;

	if((ipos < 1)&&(ipos > iCount))
	{
		return;
	}

	if(ipos == 1)
	{
		DeleteFirst();
		iCount--;

	}

	else if(ipos == iCount )
	{
		DeleteLast();
		iCount--;
	}

	else
	{
		int iCnt = 0;

		for(iCnt = 1 ; iCnt < ipos - 1 ;iCnt++)
		{
			temp1 = temp1 ->next;
		}

		temp2 = temp1 ->next;
		temp1->next = temp2 ->next;

		delete temp2;
		iCount--;
	}
}

void SCL2::Display()
{
	PNODE temp = First ;
	cout<<"Elements in Linked List :\n";

	do
	{
		cout<<"|"<< temp ->data <<"|->";
		temp = (temp )->next;
	}while(temp != Last->next);

	cout<<"\n";
}

int main()
{
	SCL2 obj1;

	obj1.InsertFirst(51);
	obj1.InsertFirst(21);
	obj1.InsertFirst(11);

	obj1.Display();
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";


	obj1.InsertLast(101);
	obj1.InsertLast(111);
	obj1.InsertLast(121);


	obj1.Display();
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";



	obj1.InsertAtPos(41,3);
	obj1.Display();
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";



	obj1.DeleteAtPos(3);
	obj1.Display();
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";
	obj1.DeleteFirst();
	obj1.Display();
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";


	obj1.DeleteLast();
	obj1.Display();
	cout<<"Number of Nodes are :"<<obj1.iCount<<"\n";
	

	return 0;
}
